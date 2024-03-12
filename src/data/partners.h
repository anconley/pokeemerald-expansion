const struct Trainer gPartners[] = {
    [PARTNER_NONE] =
    {
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
        .encounterMusic_gender = MALE,
        .trainerPic = TRAINER_BACK_PIC_BRENDAN,
        .trainerName = _(""),
        .trainerType = PARTNER(.otId = 0,
                               .aiFlags = 0),
        .partySize = 0,
        .party = NULL,
    },

    [PARTNER_STEVEN] =
    {
        .trainerClass = TRAINER_CLASS_RIVAL,
        .encounterMusic_gender = MALE,
        .trainerPic = TRAINER_BACK_PIC_STEVEN,
        .trainerName = _("STEVEN"),
        .trainerType = PARTNER(.otId = 61226,
                               .aiFlags = 0), // TODO: allow partners to use their own AI flags
        .party = TRAINER_PARTY(sPartnerParty_Steven),
    },
};
