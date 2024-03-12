#ifndef GUARD_TRAINER_CONTROL_H
#define GUARD_TRAINER_CONTROL_H

#define TRAINER_TYPE(type, ...) { .type =  { __VA_ARGS__ } }

// Macros used for specific trainer types
#define TRAINER(...) TRAINER_TYPE(trainer, __VA_ARGS__)
#define PARTNER(...) TRAINER_TYPE(partner, __VA_ARGS__)
#define FRONTIER_BRAIN(...) TRAINER_TYPE(frontierBrain, __VA_ARGS__)

void CreateTrainerMon(struct Pokemon *party, const struct Trainer *trainer, u32 partySlot, u32 personalityValue, u32 fixedOtId);

#endif // GUARD_TRAINER_CONTROL_H
