#pragma once

#include "config.h"
#include "offsets.h"

namespace patches
{
    //bool PatchDisableChargenPrecache();
    bool PatchEnableAchievementsWithMods();
    bool PatchFormCaching();
    bool PatchMaxStdio();
    //bool PatchRegularQuicksaves();
    bool PatchSaveAddedSoundCategories();
    //bool PatchScrollingDoesntSwitchPOV();
    bool PatchSleepWaitTime();
    bool PatchTreeLODReferenceCaching();
    bool PatchMemoryManager();
    //bool PatchWaterflowAnimation();

    //bool PatchMemoryManager();
    bool PatchSaveGameMaxSize();
    //bool PatchTreatAllModsAsMasters();

    void LoadVolumes();

    bool PatchAll();
    bool PatchPreload();
}
