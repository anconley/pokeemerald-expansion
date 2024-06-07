const struct SpritePalette gSpritePalette_GeneralFieldEffect0 = {gFieldEffectObjectPalette0, FLDEFF_PAL_TAG_GENERAL_0};
const struct SpritePalette gSpritePalette_GeneralFieldEffect1 = {gFieldEffectObjectPalette1, FLDEFF_PAL_TAG_GENERAL_1};

static const union AnimCmd sAnim_Shadow[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd *const sAnimTable_Shadow[] =
{
    sAnim_Shadow,
};

static const struct SpriteFrameImage sPicTable_ShadowSmall[] = {
    obj_frame_tiles(gFieldEffectObjectPic_ShadowSmall),
};

static const struct SpriteFrameImage sPicTable_ShadowMedium[] = {
    obj_frame_tiles(gFieldEffectObjectPic_ShadowMedium),
};

static const struct SpriteFrameImage sPicTable_ShadowLarge[] = {
    obj_frame_tiles(gFieldEffectObjectPic_ShadowLarge),
};

static const struct SpriteFrameImage sPicTable_ShadowExtraLarge[] = {
    obj_frame_tiles(gFieldEffectObjectPic_ShadowExtraLarge),
};

const struct SpriteTemplate gFieldEffectObjectTemplate_ShadowSmall = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_RG_RED_LEAF,
    .oam = &gObjectEventBaseOam_8x8,
    .anims = sAnimTable_Shadow,
    .images = sPicTable_ShadowSmall,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = UpdateShadowFieldEffect,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_ShadowMedium = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_RG_RED_LEAF,
    .oam = &gObjectEventBaseOam_16x8,
    .anims = sAnimTable_Shadow,
    .images = sPicTable_ShadowMedium,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = UpdateShadowFieldEffect,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_ShadowLarge = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_RG_RED_LEAF,
    .oam = &gObjectEventBaseOam_32x8,
    .anims = sAnimTable_Shadow,
    .images = sPicTable_ShadowLarge,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = UpdateShadowFieldEffect,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_ShadowExtraLarge = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_RG_RED_LEAF,
    .oam = &gObjectEventBaseOam_64x32,
    .anims = sAnimTable_Shadow,
    .images = sPicTable_ShadowExtraLarge,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = UpdateShadowFieldEffect,
};

static const struct SpriteFrameImage sPicTable_TallGrass[] = {
    overworld_ascending_frames(gFieldEffectObjectPic_TallGrass, 2, 2),
};

static const union AnimCmd sAnim_TallGrass[] =
{
    ANIMCMD_FRAME(1, 10),
    ANIMCMD_FRAME(2, 10),
    ANIMCMD_FRAME(3, 10),
    ANIMCMD_FRAME(4, 10),
    ANIMCMD_FRAME(0, 10),
    ANIMCMD_END,
};

static const union AnimCmd *const sAnimTable_TallGrass[] =
{
    sAnim_TallGrass,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_TallGrass = {
    .tileTag = TAG_NONE,
    .paletteTag = FLDEFF_PAL_TAG_GENERAL_1,
    .oam = &gObjectEventBaseOam_16x16,
    .anims = sAnimTable_TallGrass,
    .images = sPicTable_TallGrass,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = UpdateTallGrassFieldEffect,
};

static const struct SpriteFrameImage sPicTable_Ripple[] = {
    overworld_ascending_frames(gFieldEffectObjectPic_Ripple, 2, 2),
};

static const union AnimCmd sAnim_Ripple[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(2, 9),
    ANIMCMD_FRAME(3, 9),
    ANIMCMD_FRAME(0, 9),
    ANIMCMD_FRAME(1, 9),
    ANIMCMD_FRAME(2, 11),
    ANIMCMD_FRAME(4, 11),
    ANIMCMD_END,
};

static const union AnimCmd *const sAnimTable_Ripple[] =
{
    sAnim_Ripple,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_Ripple = {
    .tileTag = TAG_NONE,
    .paletteTag = FLDEFF_PAL_TAG_GENERAL_2,
    .oam = &gObjectEventBaseOam_16x16,
    .anims = sAnimTable_Ripple,
    .images = sPicTable_Ripple,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = WaitFieldEffectSpriteAnim,
};

static const struct SpriteFrameImage sPicTable_Ash[] = {
    overworld_ascending_frames(gFieldEffectObjectPic_Ash, 2, 2),
};

static const union AnimCmd sAnim_Ash[] =
{
    ANIMCMD_FRAME(0, 12),
    ANIMCMD_FRAME(1, 12),
    ANIMCMD_FRAME(2, 8),
    ANIMCMD_FRAME(3, 12),
    ANIMCMD_FRAME(4, 12),
    ANIMCMD_END,
};

static const union AnimCmd *const sAnimTable_Ash[] =
{
    sAnim_Ash,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_Ash = {
    .tileTag = TAG_NONE,
    .paletteTag = FLDEFF_PAL_TAG_GENERAL_2,
    .oam = &gObjectEventBaseOam_16x16,
    .anims = sAnimTable_Ash,
    .images = sPicTable_Ash,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = UpdateAshFieldEffect,
};

static const struct SpriteFrameImage sPicTable_SurfBlob[] = {
    overworld_ascending_frames(gFieldEffectObjectPic_SurfBlob, 4, 4),
};

static const union AnimCmd sSurfBlobAnim_FaceSouth[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sSurfBlobAnim_FaceNorth[] =
{
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sSurfBlobAnim_FaceWest[] =
{
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sSurfBlobAnim_FaceEast[] =
{
    ANIMCMD_FRAME(2, 1, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd *const sAnimTable_SurfBlob[] =
{
    sSurfBlobAnim_FaceSouth,
    sSurfBlobAnim_FaceNorth,
    sSurfBlobAnim_FaceWest,
    sSurfBlobAnim_FaceEast,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_SurfBlob = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_BRENDAN,
    .oam = &gObjectEventBaseOam_32x32,
    .anims = sAnimTable_SurfBlob,
    .images = sPicTable_SurfBlob,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = UpdateSurfBlobFieldEffect,
};

static const struct SpriteFrameImage sPicTable_Arrow[] = {
    overworld_ascending_frames(gFieldEffectObjectPic_Arrow, 2, 2),
};

static const union AnimCmd sArrowAnim_South[] =
{
    ANIMCMD_FRAME(0, 32, .vFlip = TRUE),
    ANIMCMD_FRAME(1, 32, .vFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sArrowAnim_North[] =
{
    ANIMCMD_FRAME(0, 32),
    ANIMCMD_FRAME(1, 32),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sArrowAnim_West[] =
{
    ANIMCMD_FRAME(2, 32),
    ANIMCMD_FRAME(3, 32),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sArrowAnim_East[] =
{
    ANIMCMD_FRAME(2, 32, .hFlip = TRUE),
    ANIMCMD_FRAME(3, 32, .hFlip = TRUE),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd *const sAnimTable_Arrow[] =
{
    sArrowAnim_South,
    sArrowAnim_North,
    sArrowAnim_West,
    sArrowAnim_East,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_Arrow = {
    .tileTag = TAG_NONE,
    .paletteTag = FLDEFF_PAL_TAG_ARROW,
    .oam = &gObjectEventBaseOam_16x16,
    .anims = sAnimTable_Arrow,
    .images = sPicTable_Arrow,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteFrameImage sPicTable_GroundImpactDust[] = {
    overworld_ascending_frames(gFieldEffectObjectPic_GroundImpactDust, 2, 1),
};

static const union AnimCmd sAnim_GroundImpactDust[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(2, 8),
    ANIMCMD_END,
};

static const union AnimCmd *const sAnimTable_GroundImpactDust[] =
{
    sAnim_GroundImpactDust,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_GroundImpactDust = {
    .tileTag = TAG_NONE,
    .paletteTag = FLDEFF_PAL_TAG_GENERAL_0,
    .oam = &gObjectEventBaseOam_16x8,
    .anims = sAnimTable_GroundImpactDust,
    .images = sPicTable_GroundImpactDust,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = UpdateJumpImpactEffect,
};

static const struct SpriteFrameImage sPicTable_JumpTallGrass[] = {
    overworld_ascending_frames(gFieldEffectObjectPic_JumpTallGrass, 2, 1),
};

static const union AnimCmd *const sAnimTable_JumpTallGrass[] =
{
    sAnim_RockBreak,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_JumpTallGrass = {
    .tileTag = TAG_NONE,
    .paletteTag = FLDEFF_PAL_TAG_GENERAL_1,
    .oam = &gObjectEventBaseOam_16x8,
    .anims = sAnimTable_JumpTallGrass,
    .images = sPicTable_JumpTallGrass,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = UpdateJumpImpactEffect,
};

static const struct SpriteFrameImage sPicTable_SandFootprints[] = {
    overworld_ascending_frames(gFieldEffectObjectPic_SandFootprints, 2, 2),
};

static const union AnimCmd sSandFootprintsAnim_South[] =
{
    ANIMCMD_FRAME(0, 1, .vFlip = TRUE),
    ANIMCMD_END,
};

static const union AnimCmd sSandFootprintsAnim_North[] =
{
    ANIMCMD_FRAME(0, 1),
    ANIMCMD_END,
};

static const union AnimCmd sSandFootprintsAnim_West[] =
{
    ANIMCMD_FRAME(1, 1),
    ANIMCMD_END,
};

static const union AnimCmd sSandFootprintsAnim_East[] =
{
    ANIMCMD_FRAME(1, 1, .hFlip = TRUE),
    ANIMCMD_END,
};

static const union AnimCmd *const sAnimTable_SandFootprints[] =
{
    sSandFootprintsAnim_South,
    sSandFootprintsAnim_South,
    sAnim_Shadow,
    sSandFootprintsAnim_West,
    sSandFootprintsAnim_East,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_SandFootprints = {
    .tileTag = TAG_NONE,
    .paletteTag = FLDEFF_PAL_TAG_GENERAL_0,
    .oam = &gObjectEventBaseOam_16x16,
    .anims = sAnimTable_SandFootprints,
    .images = sPicTable_SandFootprints,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = UpdateFootprintsTireTracksFieldEffect,
};

static const struct SpriteFrameImage sPicTable_DeepSandFootprints[] = {
    overworld_ascending_frames(gFieldEffectObjectPic_DeepSandFootprints, 2, 2),
};

const struct SpriteTemplate gFieldEffectObjectTemplate_DeepSandFootprints = {
    .tileTag = TAG_NONE,
    .paletteTag = FLDEFF_PAL_TAG_GENERAL_0,
    .oam = &gObjectEventBaseOam_16x16,
    .anims = sAnimTable_SandFootprints,
    .images = sPicTable_DeepSandFootprints,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = UpdateFootprintsTireTracksFieldEffect,
};

static const struct SpriteFrameImage sPicTable_BikeTireTracks[] = {
    overworld_ascending_frames(gFieldEffectObjectPic_BikeTireTracks, 2, 2),
};

static const union AnimCmd sBikeTireTracksAnim_South[] =
{
    ANIMCMD_FRAME(2, 1),
    ANIMCMD_END,
};

static const union AnimCmd sBikeTireTracksAnim_SWCornerTurn[] =
{
    ANIMCMD_FRAME(0, 1, .hFlip = TRUE),
    ANIMCMD_END,
};

static const union AnimCmd sBikeTireTracksAnim_NWCornerTurn[] =
{
    ANIMCMD_FRAME(3, 1, .hFlip = TRUE),
    ANIMCMD_END,
};

static const union AnimCmd sBikeTireTracksAnim_NECornerTurn[] =
{
    ANIMCMD_FRAME(3, 1),
    ANIMCMD_END,
};

static const union AnimCmd *const sAnimTable_BikeTireTracks[] =
{
    sBikeTireTracksAnim_South,
    sBikeTireTracksAnim_South,
    sBikeTireTracksAnim_South,
    sSandFootprintsAnim_West,
    sSandFootprintsAnim_West,
    sAnim_Shadow,
    sBikeTireTracksAnim_SWCornerTurn,
    sBikeTireTracksAnim_NWCornerTurn,
    sBikeTireTracksAnim_NECornerTurn,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_BikeTireTracks = {
    .tileTag = TAG_NONE,
    .paletteTag = FLDEFF_PAL_TAG_GENERAL_0,
    .oam = &gObjectEventBaseOam_16x16,
    .anims = sAnimTable_BikeTireTracks,
    .images = sPicTable_BikeTireTracks,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = UpdateFootprintsTireTracksFieldEffect,
};

static const struct SpriteFrameImage sPicTable_JumpBigSplash[] = {
    overworld_ascending_frames(gFieldEffectObjectPic_JumpBigSplash, 2, 2),
};

const struct SpriteTemplate gFieldEffectObjectTemplate_JumpBigSplash = {
    .tileTag = TAG_NONE,
    .paletteTag = FLDEFF_PAL_TAG_GENERAL_0,
    .oam = &gObjectEventBaseOam_16x16,
    .anims = sAnimTable_JumpTallGrass,
    .images = sPicTable_JumpBigSplash,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = UpdateJumpImpactEffect,
};

static const struct SpriteFrameImage sPicTable_Splash[] = {
    overworld_ascending_frames(gFieldEffectObjectPic_Splash, 2, 1),
};

static const union AnimCmd sAnim_Splash_0[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_END,
};

static const union AnimCmd sAnim_Splash_1[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd *const sAnimTable_Splash[] =
{
    sAnim_Splash_0,
    sAnim_Splash_1,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_Splash = {
    .tileTag = TAG_NONE,
    .paletteTag = FLDEFF_PAL_TAG_GENERAL_0,
    .oam = &gObjectEventBaseOam_16x8,
    .anims = sAnimTable_Splash,
    .images = sPicTable_Splash,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = UpdateSplashFieldEffect,
};

static const struct SpriteFrameImage sPicTable_JumpSmallSplash[] = {
    overworld_ascending_frames(gFieldEffectObjectPic_JumpSmallSplash, 2, 1),
};

static const union AnimCmd sAnim_JumpSmallSplash[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_END,
};

static const union AnimCmd *const sAnimTable_JumpSmallSplash[] =
{
    sAnim_JumpSmallSplash,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_JumpSmallSplash = {
    .tileTag = TAG_NONE,
    .paletteTag = FLDEFF_PAL_TAG_GENERAL_0,
    .oam = &gObjectEventBaseOam_16x8,
    .anims = sAnimTable_JumpSmallSplash,
    .images = sPicTable_JumpSmallSplash,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = UpdateJumpImpactEffect,
};

static const struct SpriteFrameImage sPicTable_LongGrass[] = {
    overworld_ascending_frames(gFieldEffectObjectPic_LongGrass, 2, 2),
};

static const union AnimCmd sAnim_LongGrass[] =
{
    ANIMCMD_FRAME(1, 3),
    ANIMCMD_FRAME(2, 3),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(3, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(3, 4),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_END,
};

static const union AnimCmd *const sAnimTable_LongGrass[] =
{
    sAnim_LongGrass,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_LongGrass = {
    .tileTag = TAG_NONE,
    .paletteTag = FLDEFF_PAL_TAG_GENERAL_1,
    .oam = &gObjectEventBaseOam_16x16,
    .anims = sAnimTable_LongGrass,
    .images = sPicTable_LongGrass,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = UpdateLongGrassFieldEffect,
};

static const struct SpriteFrameImage sPicTable_SandPile[] = {
    overworld_ascending_frames(gFieldEffectObjectPic_SandPile, 2, 1),
};

const struct SpriteTemplate gFieldEffectObjectTemplate_SandPile = {
    .tileTag = TAG_NONE,
    .paletteTag = FLDEFF_PAL_TAG_GENERAL_0,
    .oam = &gObjectEventBaseOam_16x8,
    .anims = sAnimTable_JumpSmallSplash,
    .images = sPicTable_SandPile,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = UpdateSandPileFieldEffect,
};

static const struct SpriteFrameImage sPicTable_WaterSurfacing[] = {
    overworld_ascending_frames(gFieldEffectObjectPic_WaterSurfacing, 2, 2),
};

static const union AnimCmd sAnim_WaterSurfacing[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_FRAME(3, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd *const sAnimTable_WaterSurfacing[] =
{
    sAnim_WaterSurfacing,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_WaterSurfacing = {
    .tileTag = TAG_NONE,
    .paletteTag = FLDEFF_PAL_TAG_GENERAL_0,
    .oam = &gObjectEventBaseOam_16x16,
    .anims = sAnimTable_WaterSurfacing,
    .images = sPicTable_WaterSurfacing,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = WaitFieldEffectSpriteAnim,
};

static const union AffineAnimCmd sAffineAnim_ReflectionDistortion_0[] =
{
    AFFINEANIMCMD_FRAME(0xFF00, 0x100, -128, 0),
    AFFINEANIMCMD_FRAME(0x1, 0x0, 0, 4),
    AFFINEANIMCMD_FRAME(0x0, 0x0, 0, 8),
    AFFINEANIMCMD_FRAME(0xFFFF, 0x0, 0, 4),
    AFFINEANIMCMD_FRAME(0x0, 0x0, 0, 8),
    AFFINEANIMCMD_FRAME(0xFFFF, 0x0, 0, 4),
    AFFINEANIMCMD_FRAME(0x0, 0x0, 0, 8),
    AFFINEANIMCMD_FRAME(0x1, 0x0, 0, 4),
    AFFINEANIMCMD_FRAME(0x0, 0x0, 0, 8),
    AFFINEANIMCMD_JUMP(1),
};

static const union AffineAnimCmd sAffineAnim_ReflectionDistortion_1[] =
{
    AFFINEANIMCMD_FRAME(0x100, 0x100, -128, 0),
    AFFINEANIMCMD_FRAME(0xFFFF, 0x0, 0, 4),
    AFFINEANIMCMD_FRAME(0x0, 0x0, 0, 8),
    AFFINEANIMCMD_FRAME(0x1, 0x0, 0, 4),
    AFFINEANIMCMD_FRAME(0x0, 0x0, 0, 8),
    AFFINEANIMCMD_FRAME(0x1, 0x0, 0, 4),
    AFFINEANIMCMD_FRAME(0x0, 0x0, 0, 8),
    AFFINEANIMCMD_FRAME(0xFFFF, 0x0, 0, 4),
    AFFINEANIMCMD_FRAME(0x0, 0x0, 0, 8),
    AFFINEANIMCMD_JUMP(1),
};

static const union AffineAnimCmd *const sAffineAnims_ReflectionDistortion[] =
{
    sAffineAnim_ReflectionDistortion_0,
    sAffineAnim_ReflectionDistortion_1,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_ReflectionDistortion = {
    .tileTag = 0x0,
    .paletteTag = TAG_NONE,
    .oam = &gDummyOamData,
    .anims = gDummySpriteAnimTable,
    .images = NULL,
    .affineAnims = sAffineAnims_ReflectionDistortion,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteFrameImage sPicTable_Sparkle[] = {
    overworld_ascending_frames(gFieldEffectObjectPic_Sparkle, 2, 2),
};

static const union AnimCmd sAnim_Sparkle[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(2, 8),
    ANIMCMD_FRAME(3, 8),
    ANIMCMD_FRAME(4, 8),
    ANIMCMD_FRAME(5, 8),
    ANIMCMD_LOOP(0),
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_FRAME(3, 4),
    ANIMCMD_FRAME(4, 4),
    ANIMCMD_FRAME(5, 4),
    ANIMCMD_LOOP(3),
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_FRAME(2, 8),
    ANIMCMD_FRAME(3, 8),
    ANIMCMD_FRAME(4, 8),
    ANIMCMD_FRAME(5, 8),
    ANIMCMD_END,
};

static const union AnimCmd *const sAnimTable_Sparkle[] =
{
    sAnim_Sparkle,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_Sparkle = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_RG_RED_LEAF,
    .oam = &gObjectEventBaseOam_16x16,
    .anims = sAnimTable_Sparkle,
    .images = sPicTable_Sparkle,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = WaitFieldEffectSpriteAnim,
};

static const struct SpriteFrameImage sPicTable_TreeDisguise[] = {
    overworld_ascending_frames(gFieldEffectObjectPic_TreeDisguise, 2, 4),
};

static const union AnimCmd sAnim_DisguiseReveal[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_FRAME(3, 4),
    ANIMCMD_FRAME(4, 4),
    ANIMCMD_FRAME(5, 4),
    ANIMCMD_FRAME(6, 4),
    ANIMCMD_END,
};

static const union AnimCmd *const sAnimTable_Disguise[] =
{
    sAnim_Shadow,
    sAnim_DisguiseReveal,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_TreeDisguise = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_3,
    .oam = &gObjectEventBaseOam_16x32,
    .anims = sAnimTable_Disguise,
    .images = sPicTable_TreeDisguise,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = UpdateDisguiseFieldEffect,
};

static const struct SpriteFrameImage sPicTable_MountainDisguise[] = {
    overworld_ascending_frames(gFieldEffectObjectPic_MountainDisguise, 2, 4),
};

const struct SpriteTemplate gFieldEffectObjectTemplate_MountainDisguise = {
    .tileTag = TAG_NONE,
    .paletteTag = OBJ_EVENT_PAL_TAG_NPC_2,
    .oam = &gObjectEventBaseOam_16x32,
    .anims = sAnimTable_Disguise,
    .images = sPicTable_MountainDisguise,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = UpdateDisguiseFieldEffect,
};

static const struct SpriteFrameImage sPicTable_Bird[] = {
    obj_frame_tiles(gFieldEffectObjectPic_Bird),
};

const struct SpriteTemplate gFieldEffectObjectTemplate_Bird = {
    .tileTag = TAG_NONE,
    .paletteTag = TAG_NONE,
    .oam = &gObjectEventBaseOam_32x32,
    .anims = sAnimTable_Shadow,
    .images = sPicTable_Bird,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy,
};

static const struct SpriteFrameImage sPicTable_ShortGrass[] = {
    overworld_ascending_frames(gFieldEffectObjectPic_ShortGrass, 2, 2),
};

const struct SpriteTemplate gFieldEffectObjectTemplate_ShortGrass = {
    .tileTag = TAG_NONE,
    .paletteTag = FLDEFF_PAL_TAG_GENERAL_1,
    .oam = &gObjectEventBaseOam_16x16,
    .anims = sAnimTable_Splash,
    .images = sPicTable_ShortGrass,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = UpdateShortGrassFieldEffect,
};

static const struct SpriteFrameImage sPicTable_HotSpringsWater[] = {
    obj_frame_tiles(gFieldEffectObjectPic_HotSpringsWater),
};

const struct SpriteTemplate gFieldEffectObjectTemplate_HotSpringsWater = {
    .tileTag = TAG_NONE,
    .paletteTag = FLDEFF_PAL_TAG_GENERAL_1,
    .oam = &gObjectEventBaseOam_16x16,
    .anims = sAnimTable_Shadow,
    .images = sPicTable_HotSpringsWater,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = UpdateHotSpringsWaterFieldEffect,
};

static const struct SpriteFrameImage sPicTable_AshPuff[] = {
    overworld_ascending_frames(gFieldEffectObjectPic_AshPuff, 2, 2),
};

static const union AnimCmd sAnim_AshPuff[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_FRAME(2, 6),
    ANIMCMD_FRAME(3, 6),
    ANIMCMD_FRAME(4, 6),
    ANIMCMD_END,
};

static const union AnimCmd *const sAnimTable_AshPuff[] =
{
    sAnim_AshPuff,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_AshPuff =
{
    .tileTag = TAG_NONE,
    .paletteTag = FLDEFF_PAL_TAG_GENERAL_3,
    .oam = &gObjectEventBaseOam_16x16,
    .anims = sAnimTable_AshPuff,
    .images = sPicTable_AshPuff,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_AshPuff
};

const struct SpritePalette gSpritePalette_GeneralFieldEffect2 = {gFieldEffectObjectPalette2, FLDEFF_PAL_TAG_GENERAL_2};

static const struct SpriteFrameImage sPicTable_AshLaunch[] = {
    overworld_ascending_frames(gFieldEffectObjectPic_AshLaunch, 2, 2),
};

const struct SpriteTemplate gFieldEffectObjectTemplate_AshLaunch =
{
    .tileTag = TAG_NONE,
    .paletteTag = FLDEFF_PAL_TAG_GENERAL_3,
    .oam = &gObjectEventBaseOam_16x16,
    .anims = sAnimTable_AshPuff,
    .images = sPicTable_AshLaunch,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCB_AshLaunch
};

static const struct SpriteFrameImage sPicTable_Bubbles[] = {
    overworld_ascending_frames(gFieldEffectObjectPic_Bubbles, 2, 4),
};

static const union AnimCmd sAnim_Bubbles[] =
{
    ANIMCMD_FRAME(0, 4),
    ANIMCMD_FRAME(1, 4),
    ANIMCMD_FRAME(2, 4),
    ANIMCMD_FRAME(3, 6),
    ANIMCMD_FRAME(4, 6),
    ANIMCMD_FRAME(5, 4),
    ANIMCMD_FRAME(6, 4),
    ANIMCMD_FRAME(7, 4),
    ANIMCMD_END,
};

static const union AnimCmd *const sAnimTable_Bubbles[] =
{
    sAnim_Bubbles,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_Bubbles = {
    .tileTag = TAG_NONE,
    .paletteTag = FLDEFF_PAL_TAG_GENERAL_0,
    .oam = &gObjectEventBaseOam_16x32,
    .anims = sAnimTable_Bubbles,
    .images = sPicTable_Bubbles,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = UpdateBubblesFieldEffect,
};

static const struct SpriteFrameImage sPicTable_SmallSparkle[] = {
    overworld_ascending_frames(gFieldEffectObjectPic_SmallSparkle, 2, 2),
};

static const union AnimCmd sAnim_SmallSparkle[] =
{
    ANIMCMD_FRAME(0, 3),
    ANIMCMD_FRAME(1, 5),
    ANIMCMD_FRAME(0, 5),
    ANIMCMD_END,
};

static const union AnimCmd *const sAnimTable_SmallSparkle[] =
{
    sAnim_SmallSparkle,
};

const struct SpriteTemplate gFieldEffectObjectTemplate_SmallSparkle = {
    .tileTag = TAG_NONE,
    .paletteTag = FLDEFF_PAL_TAG_GENERAL_3,
    .oam = &gObjectEventBaseOam_16x16,
    .anims = sAnimTable_SmallSparkle,
    .images = sPicTable_SmallSparkle,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = UpdateSparkleFieldEffect,
};

const struct SpritePalette gSpritePalette_ArrowEmotionsFieldEffect = {gObjectEventPal_RG_RedLeaf, FLDEFF_PAL_TAG_ARROW};

static const struct SpriteFrameImage sPicTable_RayquazaSpotlightEffect[] = {
    overworld_frame(gObjectEventPic_Rayquaza, 4, 4, 0),
};

const struct SpriteTemplate gFieldEffectObjectTemplate_Rayquaza = {
    .tileTag = TAG_NONE,
    .paletteTag = TAG_NONE,
    .oam = &gObjectEventBaseOam_32x32,
    .anims = sAnimTable_Shadow,
    .images = sPicTable_RayquazaSpotlightEffect,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = UpdateRayquazaSpotlightEffect,
};

static const struct SpriteFrameImage sPicTable_LongGrassCovered[] = {
    overworld_ascending_frames(gFieldEffectObjectPic_LongGrassCovered, 2, 2),
};

const struct SpriteTemplate gFieldEffectObjectTemplate_LongGrassCovered = {
    .tileTag = TAG_NONE,
    .paletteTag = FLDEFF_PAL_TAG_GENERAL_1,
    .oam = &gObjectEventBaseOam_16x16,
    .anims = sAnimTable_LongGrass,
    .images = sPicTable_LongGrassCovered,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = UpdateLongGrassFieldEffect,
};
