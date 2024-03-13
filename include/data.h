#ifndef GUARD_DATA_H
#define GUARD_DATA_H

#include "constants/moves.h"

#define SPECIES_SHINY_TAG 5000

#define MAX_TRAINER_ITEMS 4

#define TRAINER_PIC_WIDTH 64
#define TRAINER_PIC_HEIGHT 64
#define TRAINER_PIC_SIZE (TRAINER_PIC_WIDTH * TRAINER_PIC_HEIGHT / 2)

// Red and Leaf's back pics have 5 frames, but this is presumably irrelevant in the places this is used.
#define MAX_TRAINER_PIC_FRAMES 4

enum {
    BATTLER_AFFINE_NORMAL,
    BATTLER_AFFINE_EMERGE,
    BATTLER_AFFINE_RETURN,
};

struct MonCoords
{
    // This would use a bitfield, but some function
    // uses it as a u8 and casting won't match.
    u8 size; // u8 width:4, height:4;
    u8 y_offset;
};

#define MON_COORDS_SIZE(width, height)(DIV_ROUND_UP(width, 8) << 4 | DIV_ROUND_UP(height, 8))
#define GET_MON_COORDS_WIDTH(size)((size >> 4) * 8)
#define GET_MON_COORDS_HEIGHT(size)((size & 0xF) * 8)
#define TRAINER_PARTY_IVS(hp, atk, def, speed, spatk, spdef) (hp | (atk << 5) | (def << 10) | (speed << 15) | (spatk << 20) | (spdef << 25))
#define TRAINER_PARTY_EVS(hp, atk, def, speed, spatk, spdef) ((const u8[6]){hp,atk,def,spatk,spdef,speed})
#define TRAINER_PARTY_NATURE(nature) (nature+1)
#define TRAINER_PARTY_GENDER(gender) (gender+1)

struct TrainerMon
{
    u32 iv;
    u8 lvl;
    bool8 gender:2;
    bool8 isShiny:1;
    bool8 abilityNum:1;
    u16 species;
    u16 heldItem;
    u16 moves[MAX_MON_MOVES];
    u16 nature:11;
    u16 pokeball:5;
    const u8 *ev;
};

#define TRAINER_PARTY(partyArray) partyArray, .partySize = ARRAY_COUNT(partyArray)

struct Trainer
{
    /*0x00*/ u8 partySize:3;
             u8 mugshotColor:5;
    /*0x01*/ u8 trainerClass;
    /*0x02*/ u8 encounterMusic:5;
             bool8 gender:1;
             bool8 doubleBattle:1;
             bool8 mugshotEnabled:1;
    /*0x03*/ u8 trainerPic;
    /*0x04*/ u8 trainerName[TRAINER_NAME_LENGTH + 1];
    union
    {
        struct
        {
            /*0x08*/ u16 items[MAX_TRAINER_ITEMS];
            /*0x10*/ u32 aiFlags;
        } trainer;
        struct
        {
            /*0x08*/ u32 otId;
            /*0x0C*/ u8 padding[4];
            /*0x10*/ u32 aiFlags;
        } partner;
        struct
        {
            /*0x08*/ u8 streakAppearances[4];
            // Flags to change the conversation when the Frontier Brain is encountered for a battle
            // First bit is has battled them before and not won yet, second bit is has battled them and won (obtained a Symbol)
            /*0x0C*/ u16 battledBrainBitFlags[2];
            /*0x10*/ u8 objectEventGfxId;
            /*0x11*/ u8 padding[3];
        } frontierBrain;
    } trainerType;
    /*0x14*/ const struct TrainerMon *party;
};

struct TrainerSprite
{
    struct CompressedSpriteSheet sprite;
    const u16 *palette;
    const struct Coords16 mugshotCoords;
    s16 mugshotRotation;
};

#define TRAINER_ENCOUNTER_MUSIC(trainer)((gTrainers[trainer].encounterMusic_gender & 0x7F))

extern const u16 gMinigameDigits_Pal[];
extern const u32 gMinigameDigits_Gfx[];

extern const struct SpriteFrameImage gBattlerPicTable_PlayerLeft[];
extern const struct SpriteFrameImage gBattlerPicTable_OpponentLeft[];
extern const struct SpriteFrameImage gBattlerPicTable_PlayerRight[];
extern const struct SpriteFrameImage gBattlerPicTable_OpponentRight[];
extern const struct SpriteFrameImage gTrainerBackPicTable_Brendan[];
extern const struct SpriteFrameImage gTrainerBackPicTable_May[];
extern const struct SpriteFrameImage gTrainerBackPicTable_RG_Red[];
extern const struct SpriteFrameImage gTrainerBackPicTable_RG_Leaf[];
extern const struct SpriteFrameImage gTrainerBackPicTable_RG_Pokedude[];
extern const struct SpriteFrameImage gTrainerBackPicTable_RG_OldMan[];
extern const struct SpriteFrameImage gTrainerBackPicTable_RubySapphireBrendan[];
extern const struct SpriteFrameImage gTrainerBackPicTable_RubySapphireMay[];
extern const struct SpriteFrameImage gTrainerBackPicTable_Wally[];
extern const struct SpriteFrameImage gTrainerBackPicTable_Steven[];

extern const union AffineAnimCmd *const gAffineAnims_BattleSpritePlayerSide[];
extern const union AffineAnimCmd *const gAffineAnims_BattleSpriteOpponentSide[];
extern const union AffineAnimCmd *const gAffineAnims_BattleSpriteContest[];

extern const union AnimCmd sAnim_GeneralFrame0[];
extern const union AnimCmd *const gAnims_MonPic[];
extern const union AnimCmd *const gAnims_None[];
extern const struct TrainerSprite gTrainerSpriteTable[];
extern const union AnimCmd *const gBackAnims_4Frames[];
extern const union AnimCmd *const gBackAnims_5Frames[];
extern const u16 *const gTrainerBackPicPaletteTable[];

extern const struct Trainer gTrainers[];
extern const u8 gTrainerClassNames[][13];
extern const u8 gMoveNames[MOVES_COUNT_DYNAMAX][MOVE_NAME_LENGTH + 1];
extern const u8 *const gZMoveNames[];
extern const u8 *const gMaxMoveNames[];

#include "trainer_control.h"

extern const struct Trainer gPartners[];
extern const struct Trainer gFrontierBrains[];

#endif // GUARD_DATA_H
