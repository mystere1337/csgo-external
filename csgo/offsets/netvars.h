//
// Created by mystère on 8/6/22.
//

#pragma once

#include <cstdint>

namespace netvars {
    namespace CChicken {
        constexpr uintptr_t m_jumpedThisFrame = 0x3074;
        constexpr uintptr_t m_leader = 0x3078;
    }
    namespace CInferno {
        constexpr uintptr_t m_fireXDelta = 0xf80;
        constexpr uintptr_t m_fireYDelta = 0x1110;
        constexpr uintptr_t m_fireZDelta = 0x12a0;
        constexpr uintptr_t m_bFireIsBurning = 0x1430;
        constexpr uintptr_t m_nFireEffectTickBegin = 0x1950;
        constexpr uintptr_t m_fireCount = 0x1944;
    }
    namespace CPhysPropLootCrate {
        constexpr uintptr_t m_bRenderInPSPM = 0x3080;
        constexpr uintptr_t m_bRenderInTablet = 0x3081;
        constexpr uintptr_t m_iHealth = 0x138;
        constexpr uintptr_t m_iMaxHealth = 0x3084;
    }
    namespace CItemDogtags {
        constexpr uintptr_t m_OwningPlayer = 0x3ebc;
        constexpr uintptr_t m_KillingPlayer = 0x3ec0;
    }
    namespace CWeaponBaseItem {
        constexpr uintptr_t m_bRedraw = 0x3c90;
    }
    namespace CSmokeGrenadeProjectile {
        constexpr uintptr_t m_bDidSmokeEffect = 0x30b0;
        constexpr uintptr_t m_nSmokeEffectTickBegin = 0x30ac;
    }
    namespace CMolotovProjectile {
        constexpr uintptr_t m_bIsIncGrenade = 0x30a9;
    }
    namespace CWeaponNOVA {
        constexpr uintptr_t m_reloadState = 0x3c80;
    }
    namespace CWeaponShield {
        constexpr uintptr_t m_flDisplayHealth = 0x3c9c;
    }
    namespace CWeaponTaser {
        constexpr uintptr_t m_fFireTime = 0x3c9c;
    }
    namespace CWeaponSawedoff {
        constexpr uintptr_t m_reloadState = 0x3c80;
    }
    namespace CWeaponXM1014 {
        constexpr uintptr_t m_reloadState = 0x3c80;
    }
    namespace CWeaponM3 {
        constexpr uintptr_t m_reloadState = 0x3c80;
    }
    namespace CBumpMineProjectile {
        constexpr uintptr_t m_nParentBoneIndex = 0x3074;
        constexpr uintptr_t m_vecParentBonePos = 0x3078;
        constexpr uintptr_t m_bArmed = 0x3084;
    }
    namespace CBreachChargeProjectile {
        constexpr uintptr_t m_bShouldExplode = 0x3070;
        constexpr uintptr_t m_weaponThatThrewMe = 0x3074;
        constexpr uintptr_t m_nParentBoneIndex = 0x3078;
        constexpr uintptr_t m_vecParentBonePos = 0x307c;
    }
    namespace CTablet {
        constexpr uintptr_t m_flUpgradeExpirationTime_0 = 0x3c90;
        constexpr uintptr_t m_vecLocalHexFlags_0 = 0x3ca0;
        constexpr uintptr_t m_nContractKillGridIndex = 0x3d48;
        constexpr uintptr_t m_nContractKillGridHighResIndex = 0x3d4c;
        constexpr uintptr_t m_bTabletReceptionIsBlocked = 0x3d50;
        constexpr uintptr_t m_flScanProgress = 0x3d54;
        constexpr uintptr_t m_flBootTime = 0x3d58;
        constexpr uintptr_t m_flShowMapTime = 0x3d5c;
        constexpr uintptr_t m_vecNotificationIds_0 = 0x3d6c;
        constexpr uintptr_t m_vecNotificationTimestamps_0 = 0x3d8c;
        constexpr uintptr_t m_vecPlayerPositionHistory_0 = 0x3db0;
        constexpr uintptr_t m_nLastPurchaseIndex = 0x3dac;
        constexpr uintptr_t m_vecNearestMetalCratePos = 0x3d60;
    }
    namespace CFists {
        constexpr uintptr_t m_bPlayingUninterruptableAct = 0x3c7c;
    }
    namespace CMelee {
        constexpr uintptr_t m_flThrowAt = 0x3c7c;
    }
    namespace CWeaponCSBaseGun {
        constexpr uintptr_t m_zoomLevel = 0x3c7c;
        constexpr uintptr_t m_iBurstShotsRemaining = 0x3c80;
    }
    namespace CWeaponCSBase {
        constexpr uintptr_t m_weaponMode = 0x3bb4;
        constexpr uintptr_t m_fAccuracyPenalty = 0x3bcc;
        constexpr uintptr_t m_fLastShotTime = 0x3c58;
        constexpr uintptr_t m_iRecoilIndex = 0x3bdc;
        constexpr uintptr_t m_flRecoilIndex = 0x3be0;
        constexpr uintptr_t m_hPrevOwner = 0x3c24;
        constexpr uintptr_t m_bBurstMode = 0x3be4;
        constexpr uintptr_t m_flPostponeFireReadyTime = 0x3be8;
        constexpr uintptr_t m_bReloadVisuallyComplete = 0x3bec;
        constexpr uintptr_t m_bSilencerOn = 0x3bed;
        constexpr uintptr_t m_flDoneSwitchingSilencer = 0x3bf0;
        constexpr uintptr_t m_iOriginalTeamNumber = 0x3bf8;
        constexpr uintptr_t m_iIronSightMode = 0x3c78;
    }
    namespace CC4 {
        constexpr uintptr_t m_bStartedArming = 0x3c9c;
        constexpr uintptr_t m_bBombPlacedAnimation = 0x3ca4;
        constexpr uintptr_t m_fArmedTime = 0x3ca0;
        constexpr uintptr_t m_bShowC4LED = 0x3ca5;
        constexpr uintptr_t m_bIsPlantingViaUse = 0x3ca6;
    }
    namespace CBaseCSGrenade {
        constexpr uintptr_t m_bRedraw = 0x3c7c;
        constexpr uintptr_t m_bIsHeldByPlayer = 0x3c7d;
        constexpr uintptr_t m_bPinPulled = 0x3c7e;
        constexpr uintptr_t m_fThrowTime = 0x3c80;
        constexpr uintptr_t m_bLoopingSoundPlaying = 0x3c84;
        constexpr uintptr_t m_flThrowStrength = 0x3c88;
        constexpr uintptr_t m_fDropTime = 0x3c8c;
    }
    namespace CInfoMapRegion {
        constexpr uintptr_t m_flRadius = 0xf68;
        constexpr uintptr_t m_szLocToken = 0xf6c;
    }
    namespace CEnvGasCanister {
        constexpr uintptr_t m_flFlightSpeed = 0x30bc;
        constexpr uintptr_t m_flLaunchTime = 0x30c0;
        constexpr uintptr_t m_vecParabolaDirection = 0x30d4;
        constexpr uintptr_t m_flFlightTime = 0x30b8;
        constexpr uintptr_t m_flWorldEnterTime = 0x30e0;
        constexpr uintptr_t m_flInitialZSpeed = 0x30c4;
        constexpr uintptr_t m_flZAcceleration = 0x30c8;
        constexpr uintptr_t m_flHorizSpeed = 0x30cc;
        constexpr uintptr_t m_bLaunchedFromWithinWorld = 0x30d0;
        constexpr uintptr_t m_vecImpactPosition = 0x307c;
        constexpr uintptr_t m_vecStartPosition = 0x3088;
        constexpr uintptr_t m_vecEnterWorldPosition = 0x3094;
        constexpr uintptr_t m_vecDirection = 0x30a0;
        constexpr uintptr_t m_vecStartAngles = 0x30ac;
        constexpr uintptr_t m_vecSkyboxOrigin = 0x30e4;
        constexpr uintptr_t m_flSkyboxScale = 0x30f0;
        constexpr uintptr_t m_bInSkybox = 0x30f4;
        constexpr uintptr_t m_bDoImpactEffects = 0x30f5;
        constexpr uintptr_t m_bLanded = 0x3020;
        constexpr uintptr_t m_hSkyboxCopy = 0x3070;
        constexpr uintptr_t m_nMyZoneIndex = 0x30f8;
        constexpr uintptr_t m_vecOrigin = 0x170;
        constexpr uintptr_t m_vecOrigin_2 = 0x178;
    }
    namespace CDronegun {
        constexpr uintptr_t m_vecAttentionTarget = 0x3020;
        constexpr uintptr_t m_vecTargetOffset = 0x302c;
        constexpr uintptr_t m_iHealth = 0x138;
        constexpr uintptr_t m_bHasTarget = 0x3038;
    }
    namespace CParadropChopper {
        constexpr uintptr_t m_vecOrigin = 0x170;
        constexpr uintptr_t m_vecOrigin_2 = 0x178;
        constexpr uintptr_t m_hCallingPlayer = 0x3030;
    }
    namespace CSurvivalSpawnChopper {
        constexpr uintptr_t m_vecOrigin = 0x170;
        constexpr uintptr_t m_vecOrigin_2 = 0x178;
    }
    namespace CBRC4Target {
        constexpr uintptr_t m_bBrokenOpen = 0x3028;
        constexpr uintptr_t m_flRadius = 0x302c;
    }
    namespace CDrone {
        constexpr uintptr_t m_hMoveToThisEntity = 0x3078;
        constexpr uintptr_t m_hDeliveryCargo = 0x307c;
        constexpr uintptr_t m_bPilotTakeoverAllowed = 0x3080;
        constexpr uintptr_t m_hPotentialCargo = 0x3084;
        constexpr uintptr_t m_hCurrentPilot = 0x3088;
        constexpr uintptr_t m_vecTagPositions_0 = 0x308c;
        constexpr uintptr_t m_vecTagIncrements_0 = 0x31ac;
    }
    namespace CFootstepControl {
        constexpr uintptr_t m_source = 0xf92;
        constexpr uintptr_t m_destination = 0xfa2;
    }
    namespace CCSGameRulesProxy {
        namespace CSGameRules {
            constexpr uintptr_t m_bFreezePeriod = 0x38;
            constexpr uintptr_t m_bMatchWaitingForResume = 0x59;
            constexpr uintptr_t m_bWarmupPeriod = 0x39;
            constexpr uintptr_t m_fWarmupPeriodEnd = 0x3c;
            constexpr uintptr_t m_fWarmupPeriodStart = 0x40;
            constexpr uintptr_t m_bTerroristTimeOutActive = 0x44;
            constexpr uintptr_t m_bCTTimeOutActive = 0x45;
            constexpr uintptr_t m_flTerroristTimeOutRemaining = 0x48;
            constexpr uintptr_t m_flCTTimeOutRemaining = 0x4c;
            constexpr uintptr_t m_nTerroristTimeOuts = 0x50;
            constexpr uintptr_t m_nCTTimeOuts = 0x54;
            constexpr uintptr_t m_bTechnicalTimeOut = 0x58;
            constexpr uintptr_t m_iRoundTime = 0x5c;
            constexpr uintptr_t m_gamePhase = 0x78;
            constexpr uintptr_t m_totalRoundsPlayed = 0x7c;
            constexpr uintptr_t m_nOvertimePlaying = 0x80;
            constexpr uintptr_t m_timeUntilNextPhaseStarts = 0x74;
            constexpr uintptr_t m_flCMMItemDropRevealStartTime = 0x890;
            constexpr uintptr_t m_flCMMItemDropRevealEndTime = 0x894;
            constexpr uintptr_t m_fRoundStartTime = 0x64;
            constexpr uintptr_t m_bGameRestart = 0x6c;
            constexpr uintptr_t m_flRestartRoundTime = 0x68;
            constexpr uintptr_t m_flGameStartTime = 0x70;
            constexpr uintptr_t m_iHostagesRemaining = 0x84;
            constexpr uintptr_t m_bAnyHostageReached = 0x88;
            constexpr uintptr_t m_bMapHasBombTarget = 0x89;
            constexpr uintptr_t m_bMapHasRescueZone = 0x8a;
            constexpr uintptr_t m_bMapHasBuyZone = 0x8b;
            constexpr uintptr_t m_bIsQueuedMatchmaking = 0x8c;
            constexpr uintptr_t m_nQueuedMatchmakingMode = 0x90;
            constexpr uintptr_t m_bIsValveDS = 0x94;
            constexpr uintptr_t m_bIsQuestEligible = 0x899;
            constexpr uintptr_t m_bLogoMap = 0x95;
            constexpr uintptr_t m_bPlayAllStepSoundsOnServer = 0x96;
            constexpr uintptr_t m_iNumGunGameProgressiveWeaponsCT = 0x98;
            constexpr uintptr_t m_iNumGunGameProgressiveWeaponsT = 0x9c;
            constexpr uintptr_t m_iSpectatorSlotCount = 0xa0;
            constexpr uintptr_t m_bBombDropped = 0x9bc;
            constexpr uintptr_t m_bBombPlanted = 0x9bd;
            constexpr uintptr_t m_iRoundWinStatus = 0x9c0;
            constexpr uintptr_t m_eRoundWinReason = 0x9c4;
            constexpr uintptr_t m_flDMBonusStartTime = 0x46c;
            constexpr uintptr_t m_flDMBonusTimeLength = 0x470;
            constexpr uintptr_t m_unDMBonusWeaponLoadoutSlot = 0x474;
            constexpr uintptr_t m_bDMBonusActive = 0x476;
            constexpr uintptr_t m_bTCantBuy = 0x9c8;
            constexpr uintptr_t m_bCTCantBuy = 0x9c9;
            constexpr uintptr_t m_flGuardianBuyUntilTime = 0x9cc;
            constexpr uintptr_t m_iMatchStats_RoundResults = 0x9d0;
            constexpr uintptr_t m_iMatchStats_PlayersAlive_T = 0xac0;
            constexpr uintptr_t m_iMatchStats_PlayersAlive_CT = 0xa48;
            constexpr uintptr_t m_GGProgressiveWeaponOrderCT = 0xa4;
            constexpr uintptr_t m_GGProgressiveWeaponOrderT = 0x194;
            constexpr uintptr_t m_GGProgressiveWeaponKillUpgradeOrderCT = 0x284;
            constexpr uintptr_t m_GGProgressiveWeaponKillUpgradeOrderT = 0x374;
            constexpr uintptr_t m_MatchDevice = 0x464;
            constexpr uintptr_t m_bHasMatchStarted = 0x468;
            constexpr uintptr_t m_TeamRespawnWaveTimes = 0xb38;
            constexpr uintptr_t m_flNextRespawnWave = 0xbb8;
            constexpr uintptr_t m_nNextMapInMapgroup = 0x478;
            constexpr uintptr_t m_nEndMatchMapGroupVoteTypes = 0xc40;
            constexpr uintptr_t m_nEndMatchMapGroupVoteOptions = 0xc68;
            constexpr uintptr_t m_nEndMatchMapVoteWinner = 0xc90;
            constexpr uintptr_t m_bIsDroppingItems = 0x898;
            constexpr uintptr_t m_iActiveAssassinationTargetMissionID = 0xc38;
            constexpr uintptr_t m_fMatchStartTime = 0x60;
            constexpr uintptr_t m_szTournamentEventName = 0x47c;
            constexpr uintptr_t m_szTournamentEventStage = 0x580;
            constexpr uintptr_t m_szTournamentPredictionsTxt = 0x788;
            constexpr uintptr_t m_nTournamentPredictionsPct = 0x88c;
            constexpr uintptr_t m_szMatchStatTxt = 0x684;
            constexpr uintptr_t m_nGuardianModeWaveNumber = 0x89c;
            constexpr uintptr_t m_nGuardianModeSpecialKillsRemaining = 0x8a0;
            constexpr uintptr_t m_nGuardianModeSpecialWeaponNeeded = 0x8a4;
            constexpr uintptr_t m_nHalloweenMaskListSeed = 0x9b8;
            constexpr uintptr_t m_numGlobalGiftsGiven = 0x8b0;
            constexpr uintptr_t m_numGlobalGifters = 0x8b4;
            constexpr uintptr_t m_numGlobalGiftsPeriodSeconds = 0x8b8;
            constexpr uintptr_t m_arrFeaturedGiftersAccounts = 0x8bc;
            constexpr uintptr_t m_arrFeaturedGiftersGifts = 0x8cc;
            constexpr uintptr_t m_arrProhibitedItemIndices = 0x8dc;
            constexpr uintptr_t m_numBestOfMaps = 0x9b4;
            constexpr uintptr_t m_arrTournamentActiveCasterAccounts = 0x9a4;
            constexpr uintptr_t m_iNumConsecutiveCTLoses = 0xc94;
            constexpr uintptr_t m_iNumConsecutiveTerroristLoses = 0xc98;
            constexpr uintptr_t m_SurvivalRules = 0xd50;
            namespace SurvivalGameRules {
                constexpr uintptr_t m_vecPlayAreaMins = 0x0;
                constexpr uintptr_t m_vecPlayAreaMaxs = 0xc;
                constexpr uintptr_t m_iPlayerSpawnHexIndices = 0x18;
                constexpr uintptr_t m_SpawnTileState = 0x118;
                constexpr uintptr_t m_flSpawnSelectionTimeStart = 0x1f8;
                constexpr uintptr_t m_flSpawnSelectionTimeEnd = 0x1fc;
                constexpr uintptr_t m_flSpawnSelectionTimeLoadout = 0x200;
                constexpr uintptr_t m_spawnStage = 0x204;
                constexpr uintptr_t m_flTabletHexOriginX = 0x208;
                constexpr uintptr_t m_flTabletHexOriginY = 0x20c;
                constexpr uintptr_t m_flTabletHexSize = 0x210;
                constexpr uintptr_t m_roundData_playerXuids = 0x218;
                constexpr uintptr_t m_roundData_playerPositions = 0x420;
                constexpr uintptr_t m_roundData_playerTeams = 0x524;
                constexpr uintptr_t m_SurvivalGameRuleDecisionTypes = 0x628;
                constexpr uintptr_t m_SurvivalGameRuleDecisionValues = 0x668;
                constexpr uintptr_t m_flSurvivalStartTime = 0x6a8;
            }
            constexpr uintptr_t m_RetakeRules = 0x1420;
            namespace RetakeGameRules {
                constexpr uintptr_t m_nMatchSeed = 0x170;
                constexpr uintptr_t m_bBlockersPresent = 0x174;
                constexpr uintptr_t m_bRoundInProgress = 0x175;
                constexpr uintptr_t m_iFirstSecondHalfRound = 0x178;
                constexpr uintptr_t m_iBombSite = 0x17c;
            }
        }
    }
    namespace CTEPlantBomb {
        constexpr uintptr_t m_vecOrigin = 0x24;
        constexpr uintptr_t m_iPlayer = 0x20;
        constexpr uintptr_t m_option = 0x30;
    }
    namespace CTEFireBullets {
        constexpr uintptr_t m_vecOrigin = 0x28;
        constexpr uintptr_t m_vecAngles_0 = 0x34;
        constexpr uintptr_t m_vecAngles_1 = 0x38;
        constexpr uintptr_t m_iWeaponID = 0x44;
        constexpr uintptr_t m_weapon = 0x40;
        constexpr uintptr_t m_iMode = 0x48;
        constexpr uintptr_t m_iSeed = 0x4c;
        constexpr uintptr_t m_iPlayer = 0x20;
        constexpr uintptr_t m_fInaccuracy = 0x50;
        constexpr uintptr_t m_fSpread = 0x58;
        constexpr uintptr_t m_nItemDefIndex = 0x24;
        constexpr uintptr_t m_iSoundType = 0x5c;
        constexpr uintptr_t m_flRecoilIndex = 0x54;
    }
    namespace CTERadioIcon {
        constexpr uintptr_t m_iAttachToClient = 0x20;
    }
    namespace CPlantedC4 {
        constexpr uintptr_t m_bBombTicking = 0x3020;
        constexpr uintptr_t m_nBombSite = 0x3024;
        constexpr uintptr_t m_flC4Blow = 0x3030;
        constexpr uintptr_t m_flTimerLength = 0x3034;
        constexpr uintptr_t m_flDefuseLength = 0x3048;
        constexpr uintptr_t m_flDefuseCountDown = 0x304c;
        constexpr uintptr_t m_bBombDefused = 0x3050;
        constexpr uintptr_t m_hBombDefuser = 0x3054;
    }
    namespace CCSPlayerResource {
        constexpr uintptr_t m_iPlayerC4 = 0x1cf4;
        constexpr uintptr_t m_iPlayerVIP = 0x1cf8;
        constexpr uintptr_t m_bHostageAlive = 0x1d14;
        constexpr uintptr_t m_isHostageFollowingSomeone = 0x1d20;
        constexpr uintptr_t m_iHostageEntityIDs = 0x1d2c;
        constexpr uintptr_t m_bombsiteCenterA = 0x1cfc;
        constexpr uintptr_t m_bombsiteCenterB = 0x1d08;
        constexpr uintptr_t m_hostageRescueX = 0x1d5c;
        constexpr uintptr_t m_hostageRescueY = 0x1d6c;
        constexpr uintptr_t m_hostageRescueZ = 0x1d7c;
        constexpr uintptr_t m_iMVPs = 0x1d8c;
        constexpr uintptr_t m_iArmor = 0x1f14;
        constexpr uintptr_t m_bHasHelmet = 0x1ed1;
        constexpr uintptr_t m_bHasDefuser = 0x1e90;
        constexpr uintptr_t m_iScore = 0x2018;
        constexpr uintptr_t m_iCompetitiveRanking = 0x211c;
        constexpr uintptr_t m_iCompetitiveWins = 0x2220;
        constexpr uintptr_t m_iCompetitiveRankType = 0x2324;
        constexpr uintptr_t m_iCompTeammateColor = 0x2368;
        constexpr uintptr_t m_iLifetimeStart = 0x246c;
        constexpr uintptr_t m_iLifetimeEnd = 0x2570;
        constexpr uintptr_t m_bControllingBot = 0x2674;
        constexpr uintptr_t m_iControlledPlayer = 0x26b8;
        constexpr uintptr_t m_iControlledByPlayer = 0x27bc;
        constexpr uintptr_t m_iBotDifficulty = 0x4940;
        constexpr uintptr_t m_szClan = 0x4a44;
        constexpr uintptr_t m_nCharacterDefIndex = 0x4e54;
        constexpr uintptr_t m_iTotalCashSpent = 0x4f58;
        constexpr uintptr_t m_iGunGameLevel = 0x505c;
        constexpr uintptr_t m_iCashSpentThisRound = 0x5160;
        constexpr uintptr_t m_nEndMatchNextMapVotes = 0x7120;
        constexpr uintptr_t m_bEndMatchNextMapAllVoted = 0x7224;
        constexpr uintptr_t m_nActiveCoinRank = 0x5264;
        constexpr uintptr_t m_nMusicID = 0x5368;
        constexpr uintptr_t m_nPersonaDataPublicLevel = 0x546c;
        constexpr uintptr_t m_nPersonaDataPublicCommendsLeader = 0x5570;
        constexpr uintptr_t m_nPersonaDataPublicCommendsTeacher = 0x5674;
        constexpr uintptr_t m_nPersonaDataPublicCommendsFriendly = 0x5778;
        constexpr uintptr_t m_bHasCommunicationAbuseMute = 0x587c;
        constexpr uintptr_t m_szCrosshairCodes = 0x58bd;
        constexpr uintptr_t m_iMatchStats_Kills_Total = 0x61a0;
        constexpr uintptr_t m_iMatchStats_5k_Total = 0x66b4;
        constexpr uintptr_t m_iMatchStats_4k_Total = 0x65b0;
        constexpr uintptr_t m_iMatchStats_3k_Total = 0x64ac;
        constexpr uintptr_t m_iMatchStats_Damage_Total = 0x67b8;
        constexpr uintptr_t m_iMatchStats_EquipmentValue_Total = 0x68bc;
        constexpr uintptr_t m_iMatchStats_KillReward_Total = 0x69c0;
        constexpr uintptr_t m_iMatchStats_LiveTime_Total = 0x6ac4;
        constexpr uintptr_t m_iMatchStats_Deaths_Total = 0x63a8;
        constexpr uintptr_t m_iMatchStats_Assists_Total = 0x62a4;
        constexpr uintptr_t m_iMatchStats_HeadShotKills_Total = 0x6bc8;
        constexpr uintptr_t m_iMatchStats_Objective_Total = 0x6ccc;
        constexpr uintptr_t m_iMatchStats_CashEarned_Total = 0x6dd0;
        constexpr uintptr_t m_iMatchStats_UtilityDamage_Total = 0x6ed4;
        constexpr uintptr_t m_iMatchStats_EnemiesFlashed_Total = 0x6fd8;
    }
    namespace CCSPlayer {
        namespace CSLocalPlayerExclusive {
            constexpr uintptr_t m_vecOrigin = 0x170;
            constexpr uintptr_t m_vecOrigin_2 = 0x178;
            constexpr uintptr_t m_flStamina = 0x10cf8;
            constexpr uintptr_t m_iDirection = 0x10cfc;
            constexpr uintptr_t m_iShotsFired = 0x10d00;
            constexpr uintptr_t m_nNumFastDucks = 0x10d04;
            constexpr uintptr_t m_bDuckOverride = 0x10d08;
            constexpr uintptr_t m_flVelocityModifier = 0x10d0c;
            constexpr uintptr_t m_bPlayerDominated = 0x12268;
            constexpr uintptr_t m_bPlayerDominatingMe = 0x122a9;
            constexpr uintptr_t m_iWeaponPurchasesThisRound = 0x11bb8;
            constexpr uintptr_t m_unActiveQuestId = 0x120ac;
            constexpr uintptr_t m_nQuestProgressReason = 0x120b0;
            constexpr uintptr_t m_iRetakesOffering = 0x126a8;
            constexpr uintptr_t m_iRetakesOfferingCard = 0x126ac;
            constexpr uintptr_t m_bRetakesHasDefuseKit = 0x126b0;
            constexpr uintptr_t m_bRetakesMVPLastRound = 0x126b1;
            constexpr uintptr_t m_iRetakesMVPBoostItem = 0x126b4;
            constexpr uintptr_t m_RetakesMVPBoostExtraUtility = 0x126b8;
            constexpr uintptr_t m_unPlayerTvControlFlags = 0x120b4;
        }
        namespace CSNonLocalPlayerExclusive {
            constexpr uintptr_t m_vecOrigin = 0x170;
            constexpr uintptr_t m_vecOrigin_2 = 0x178;
        }
        namespace CSTeamExclusive {
            constexpr uintptr_t m_iWeaponPurchasesThisMatch = 0x113ec;
            constexpr uintptr_t m_EquippedLoadoutItemDefIndices = 0x11fd0;
        }
        constexpr uintptr_t m_angEyeAngles_0 = 0x12104;
        constexpr uintptr_t m_angEyeAngles_1 = 0x12108;
        constexpr uintptr_t m_iAddonBits = 0x10ce4;
        constexpr uintptr_t m_iPrimaryAddon = 0x10ce8;
        constexpr uintptr_t m_iSecondaryAddon = 0x10cec;
        constexpr uintptr_t m_iThrowGrenadeCounter = 0xa2ac;
        constexpr uintptr_t m_bWaitForNoAttack = 0xa2b0;
        constexpr uintptr_t m_bIsRespawningForDMBonus = 0xa2b1;
        constexpr uintptr_t m_iPlayerState = 0xa26c;
        constexpr uintptr_t m_iAccount = 0x120ec;
        constexpr uintptr_t m_iStartAccount = 0x10d14;
        constexpr uintptr_t m_totalHitsOnServer = 0x10d18;
        constexpr uintptr_t m_bInBombZone = 0xa2a8;
        constexpr uintptr_t m_bInBuyZone = 0xa2a9;
        constexpr uintptr_t m_bInNoDefuseArea = 0xa2aa;
        constexpr uintptr_t m_bKilledByTaser = 0xa2c1;
        constexpr uintptr_t m_iMoveState = 0xa2c4;
        constexpr uintptr_t m_iClass = 0x120fc;
        constexpr uintptr_t m_ArmorValue = 0x12100;
        constexpr uintptr_t m_angEyeAngles = 0x12104;
        constexpr uintptr_t m_bHasDefuser = 0x12110;
        constexpr uintptr_t m_bNightVisionOn = 0x10d09;
        constexpr uintptr_t m_bHasNightVision = 0x10d0a;
        constexpr uintptr_t m_bInHostageRescueZone = 0x12111;
        constexpr uintptr_t m_bIsDefusing = 0xa270;
        constexpr uintptr_t m_bIsGrabbingHostage = 0xa271;
        constexpr uintptr_t m_iBlockingUseActionInProgress = 0xa274;
        constexpr uintptr_t m_bIsScoped = 0xa268;
        constexpr uintptr_t m_bIsWalking = 0xa269;
        constexpr uintptr_t m_nIsAutoMounting = 0xa3e0;
        constexpr uintptr_t m_bResumeZoom = 0xa26a;
        constexpr uintptr_t m_fImmuneToGunGameDamageTime = 0xa27c;
        constexpr uintptr_t m_bGunGameImmunity = 0xa284;
        constexpr uintptr_t m_bHasMovedSinceSpawn = 0xa285;
        constexpr uintptr_t m_bMadeFinalGunGameProgressiveKill = 0xa286;
        constexpr uintptr_t m_iGunGameProgressiveWeaponIndex = 0xa288;
        constexpr uintptr_t m_iNumGunGameTRKillPoints = 0xa28c;
        constexpr uintptr_t m_iNumGunGameKillsWithCurrentWeapon = 0xa290;
        constexpr uintptr_t m_iNumRoundKills = 0xa294;
        constexpr uintptr_t m_fMolotovUseTime = 0xa2a0;
        constexpr uintptr_t m_fMolotovDamageTime = 0xa2a4;
        constexpr uintptr_t m_szArmsModel = 0xa2cb;
        constexpr uintptr_t m_hCarriedHostage = 0x10d68;
        constexpr uintptr_t m_hCarriedHostageProp = 0x10d6c;
        constexpr uintptr_t m_bIsRescuing = 0xa278;
        constexpr uintptr_t m_flGroundAccelLinearFracLastTime = 0x10d10;
        constexpr uintptr_t m_bCanMoveDuringFreezePeriod = 0xa2c8;
        constexpr uintptr_t m_isCurrentGunGameLeader = 0xa2c9;
        constexpr uintptr_t m_isCurrentGunGameTeamLeader = 0xa2ca;
        constexpr uintptr_t m_flGuardianTooFarDistFrac = 0xa2b4;
        constexpr uintptr_t m_flDetectedByEnemySensorTime = 0xa2b8;
        constexpr uintptr_t m_bIsPlayerGhost = 0xa3dd;
        constexpr uintptr_t m_iMatchStats_Kills = 0x10dd4;
        constexpr uintptr_t m_iMatchStats_Damage = 0x10e4c;
        constexpr uintptr_t m_iMatchStats_EquipmentValue = 0x10ec4;
        constexpr uintptr_t m_iMatchStats_MoneySaved = 0x10f3c;
        constexpr uintptr_t m_iMatchStats_KillReward = 0x10fb4;
        constexpr uintptr_t m_iMatchStats_LiveTime = 0x1102c;
        constexpr uintptr_t m_iMatchStats_Deaths = 0x110a4;
        constexpr uintptr_t m_iMatchStats_Assists = 0x1111c;
        constexpr uintptr_t m_iMatchStats_HeadShotKills = 0x11194;
        constexpr uintptr_t m_iMatchStats_Objective = 0x1120c;
        constexpr uintptr_t m_iMatchStats_CashEarned = 0x11284;
        constexpr uintptr_t m_iMatchStats_UtilityDamage = 0x112fc;
        constexpr uintptr_t m_iMatchStats_EnemiesFlashed = 0x11374;
        constexpr uintptr_t m_rank = 0x120c0;
        constexpr uintptr_t m_passiveItems = 0x120d8;
        constexpr uintptr_t m_bHasParachute = 0x120d8;
        constexpr uintptr_t m_unMusicID = 0x120dc;
        constexpr uintptr_t m_bHasHelmet = 0x120f4;
        constexpr uintptr_t m_bHasHeavyArmor = 0x120f5;
        constexpr uintptr_t m_nHeavyAssaultSuitCooldownRemaining = 0x120f8;
        constexpr uintptr_t m_flFlashDuration = 0x10d90;
        constexpr uintptr_t m_flFlashMaxAlpha = 0x10d8c;
        constexpr uintptr_t m_iProgressBarDuration = 0x10cf0;
        constexpr uintptr_t m_flProgressBarStartTime = 0x10cf4;
        constexpr uintptr_t m_hRagdoll = 0x10d5c;
        constexpr uintptr_t m_hPlayerPing = 0x10d60;
        constexpr uintptr_t m_cycleLatch = 0x12260;
        constexpr uintptr_t m_unCurrentEquipmentValue = 0x120b8;
        constexpr uintptr_t m_unRoundStartEquipmentValue = 0x120ba;
        constexpr uintptr_t m_unFreezetimeEndEquipmentValue = 0x120bc;
        constexpr uintptr_t m_bIsControllingBot = 0x123cd;
        constexpr uintptr_t m_bHasControlledBotThisRound = 0x123dc;
        constexpr uintptr_t m_bCanControlObservedBot = 0x123ce;
        constexpr uintptr_t m_iControlledBotEntIndex = 0x123d0;
        constexpr uintptr_t m_vecAutomoveTargetEnd = 0xa3f0;
        constexpr uintptr_t m_flAutoMoveStartTime = 0xa400;
        constexpr uintptr_t m_flAutoMoveTargetTime = 0xa404;
        constexpr uintptr_t m_bIsAssassinationTarget = 0x123cc;
        constexpr uintptr_t m_bHud_MiniScoreHidden = 0x12132;
        constexpr uintptr_t m_bHud_RadarHidden = 0x12133;
        constexpr uintptr_t m_nLastKillerIndex = 0x12134;
        constexpr uintptr_t m_nLastConcurrentKilled = 0x12138;
        constexpr uintptr_t m_nDeathCamMusic = 0x1213c;
        constexpr uintptr_t m_bIsHoldingLookAtWeapon = 0x122f5;
        constexpr uintptr_t m_bIsLookingAtWeapon = 0x122f4;
        constexpr uintptr_t m_iNumRoundKillsHeadshots = 0xa298;
        constexpr uintptr_t m_unTotalRoundDamageDealt = 0xa29c;
        constexpr uintptr_t m_flLowerBodyYawTarget = 0xa3d8;
        constexpr uintptr_t m_bStrafing = 0xa3dc;
        constexpr uintptr_t m_flThirdpersonRecoil = 0x1236c;
        constexpr uintptr_t m_bHideTargetID = 0x12370;
        constexpr uintptr_t m_bIsSpawnRappelling = 0x10d1d;
        constexpr uintptr_t m_vecSpawnRappellingRopeOrigin = 0x10d20;
        constexpr uintptr_t m_nSurvivalTeam = 0x10d30;
        constexpr uintptr_t m_hSurvivalAssassinationTarget = 0x10d34;
        constexpr uintptr_t m_flHealthShotBoostExpirationTime = 0x10d38;
        constexpr uintptr_t m_flLastExoJumpTime = 0xa408;
        constexpr uintptr_t m_vecPlayerPatchEconIndices = 0x12344;
    }
    namespace CPlayerPing {
        constexpr uintptr_t m_hPlayer = 0xf80;
        constexpr uintptr_t m_hPingedEntity = 0xf84;
        constexpr uintptr_t m_iType = 0xf88;
        constexpr uintptr_t m_bUrgent = 0xf90;
        constexpr uintptr_t m_szPlaceName = 0xf91;
    }
    namespace CCSRagdoll {
        constexpr uintptr_t m_vecOrigin = 0x170;
        constexpr uintptr_t m_vecRagdollOrigin = 0x30b8;
        constexpr uintptr_t m_hPlayer = 0x309c;
        constexpr uintptr_t m_nModelIndex = 0x290;
        constexpr uintptr_t m_nForceBone = 0x2c54;
        constexpr uintptr_t m_vecForce = 0x2c48;
        constexpr uintptr_t m_vecRagdollVelocity = 0x30ac;
        constexpr uintptr_t m_iDeathPose = 0x30c4;
        constexpr uintptr_t m_iDeathFrame = 0x30c8;
        constexpr uintptr_t m_iTeamNum = 0x12c;
        constexpr uintptr_t m_bClientSideAnimation = 0x2ee0;
        constexpr uintptr_t m_flDeathYaw = 0x30cc;
        constexpr uintptr_t m_flAbsYaw = 0x30d0;
        constexpr uintptr_t m_bDiedAirborne = 0x30d4;
    }
    namespace CTEPlayerAnimEvent {
        constexpr uintptr_t m_hPlayer = 0x20;
        constexpr uintptr_t m_iEvent = 0x24;
        constexpr uintptr_t m_nData = 0x28;
    }
    namespace CHostage {
        constexpr uintptr_t m_isRescued = 0x3680;
        constexpr uintptr_t m_jumpedThisFrame = 0x3681;
        constexpr uintptr_t m_iHealth = 0x138;
        constexpr uintptr_t m_iMaxHealth = 0x3664;
        constexpr uintptr_t m_lifeState = 0x297;
        constexpr uintptr_t m_fFlags = 0x13c;
        constexpr uintptr_t m_nHostageState = 0x3684;
        constexpr uintptr_t m_flRescueStartTime = 0x3688;
        constexpr uintptr_t m_flGrabSuccessTime = 0x368c;
        constexpr uintptr_t m_flDropStartTime = 0x3690;
        constexpr uintptr_t m_vel = 0x3674;
        constexpr uintptr_t m_leader = 0x3670;
    }
    namespace CBaseCSGrenadeProjectile {
        constexpr uintptr_t m_vInitialVelocity = 0x3070;
        constexpr uintptr_t m_nBounces = 0x307c;
        constexpr uintptr_t m_nExplodeEffectIndex = 0x3080;
        constexpr uintptr_t m_nExplodeEffectTickBegin = 0x3084;
        constexpr uintptr_t m_vecExplodeEffectOrigin = 0x3088;
    }
    namespace CBaseTeamObjectiveResource {
        constexpr uintptr_t m_iTimerToShowInHUD = 0xf68;
        constexpr uintptr_t m_iStopWatchTimer = 0xf6c;
        constexpr uintptr_t m_iNumControlPoints = 0xf70;
        constexpr uintptr_t m_bPlayingMiniRounds = 0xf78;
        constexpr uintptr_t m_bControlPointsReset = 0xf79;
        constexpr uintptr_t m_iUpdateCapHudParity = 0xf7c;
        constexpr uintptr_t m_vCPPositions_0 = 0xf84;
        constexpr uintptr_t m_bCPIsVisible = 0xfe4;
        constexpr uintptr_t m_flLazyCapPerc = 0xfec;
        constexpr uintptr_t m_iTeamIcons = 0x102c;
        constexpr uintptr_t m_iTeamOverlays = 0x112c;
        constexpr uintptr_t m_iTeamReqCappers = 0x122c;
        constexpr uintptr_t m_flTeamCapTime = 0x132c;
        constexpr uintptr_t m_iPreviousPoints = 0x142c;
        constexpr uintptr_t m_bTeamCanCap = 0x172c;
        constexpr uintptr_t m_iTeamBaseIcons = 0x176c;
        constexpr uintptr_t m_iBaseControlPoints = 0x17ec;
        constexpr uintptr_t m_bInMiniRound = 0x186c;
        constexpr uintptr_t m_iWarnOnCap = 0x1874;
        constexpr uintptr_t m_iszWarnSound_0 = 0x1894;
        constexpr uintptr_t m_flPathDistance = 0x208c;
        constexpr uintptr_t m_iNumTeamMembers = 0x20ac;
        constexpr uintptr_t m_iCappingTeam = 0x21ac;
        constexpr uintptr_t m_iTeamInZone = 0x21cc;
        constexpr uintptr_t m_bBlocked = 0x21ec;
        constexpr uintptr_t m_iOwner = 0x21f4;
        constexpr uintptr_t m_pszCapLayoutInHUD = 0x227c;
    }
    namespace CBaseAttributableItem {
        constexpr uintptr_t m_AttributeManager = 0x34d8;
        namespace AttributeContainer {
            constexpr uintptr_t m_hOuter = 0x2c;
            constexpr uintptr_t m_ProviderType = 0x34;
            constexpr uintptr_t m_iReapplyProvisionParity = 0x28;
            constexpr uintptr_t m_Item = 0x60;
            namespace ScriptCreatedItem {
                constexpr uintptr_t m_iItemDefinitionIndex = 0x282;
                constexpr uintptr_t m_iEntityLevel = 0x288;
                constexpr uintptr_t m_iItemIDHigh = 0x298;
                constexpr uintptr_t m_iItemIDLow = 0x29c;
                constexpr uintptr_t m_iAccountID = 0x2a0;
                constexpr uintptr_t m_iEntityQuality = 0x284;
                constexpr uintptr_t m_bInitialized = 0x2b0;
                constexpr uintptr_t m_szCustomName = 0x358;
                constexpr uintptr_t m_NetworkedDynamicAttributesForDemos = 0x328;
                namespace AttributeList {
                    namespace _ST_m_Attributes_32 {
                        namespace _LPT_m_Attributes_32 {
                            constexpr uintptr_t lengthprop32 = 0x0;
                        }
                    }
                }
            }
        }
        constexpr uintptr_t m_OriginalOwnerXuidLow = 0x3a28;
        constexpr uintptr_t m_OriginalOwnerXuidHigh = 0x3a2c;
        constexpr uintptr_t m_nFallbackPaintKit = 0x3a30;
        constexpr uintptr_t m_nFallbackSeed = 0x3a34;
        constexpr uintptr_t m_flFallbackWear = 0x3a38;
        constexpr uintptr_t m_nFallbackStatTrak = 0x3a3c;
    }
    namespace CEconEntity {
        constexpr uintptr_t m_AttributeManager = 0x34d8;
        namespace AttributeContainer {
            constexpr uintptr_t m_hOuter = 0x2c;
            constexpr uintptr_t m_ProviderType = 0x34;
            constexpr uintptr_t m_iReapplyProvisionParity = 0x28;
            constexpr uintptr_t m_Item = 0x60;
            namespace ScriptCreatedItem {
                constexpr uintptr_t m_iItemDefinitionIndex = 0x282;
                constexpr uintptr_t m_iEntityLevel = 0x288;
                constexpr uintptr_t m_iItemIDHigh = 0x298;
                constexpr uintptr_t m_iItemIDLow = 0x29c;
                constexpr uintptr_t m_iAccountID = 0x2a0;
                constexpr uintptr_t m_iEntityQuality = 0x284;
                constexpr uintptr_t m_bInitialized = 0x2b0;
                constexpr uintptr_t m_szCustomName = 0x358;
                constexpr uintptr_t m_NetworkedDynamicAttributesForDemos = 0x328;
                namespace AttributeList {
                    namespace _ST_m_Attributes_32 {
                        namespace _LPT_m_Attributes_32 {
                            constexpr uintptr_t lengthprop32 = 0x0;
                        }
                    }
                }
            }
        }
        constexpr uintptr_t m_OriginalOwnerXuidLow = 0x3a28;
        constexpr uintptr_t m_OriginalOwnerXuidHigh = 0x3a2c;
        constexpr uintptr_t m_nFallbackPaintKit = 0x3a30;
        constexpr uintptr_t m_nFallbackSeed = 0x3a34;
        constexpr uintptr_t m_flFallbackWear = 0x3a38;
        constexpr uintptr_t m_nFallbackStatTrak = 0x3a3c;
    }
    namespace CTestTraceline {
        constexpr uintptr_t m_clrRender = 0xa8;
        constexpr uintptr_t m_vecOrigin = 0x170;
        constexpr uintptr_t m_angRotation_0 = 0x164;
        constexpr uintptr_t m_angRotation_1 = 0x168;
        constexpr uintptr_t m_angRotation_2 = 0x16c;
        constexpr uintptr_t moveparent = 0x180;
    }
    namespace CTEWorldDecal {
        constexpr uintptr_t m_vecOrigin = 0x20;
        constexpr uintptr_t m_nIndex = 0x2c;
    }
    namespace CTESpriteSpray {
        constexpr uintptr_t m_vecOrigin = 0x20;
        constexpr uintptr_t m_vecDirection = 0x2c;
        constexpr uintptr_t m_nModelIndex = 0x38;
        constexpr uintptr_t m_fNoise = 0x40;
        constexpr uintptr_t m_nCount = 0x44;
        constexpr uintptr_t m_nSpeed = 0x3c;
    }
    namespace CTESprite {
        constexpr uintptr_t m_vecOrigin = 0x20;
        constexpr uintptr_t m_nModelIndex = 0x2c;
        constexpr uintptr_t m_fScale = 0x30;
        constexpr uintptr_t m_nBrightness = 0x34;
    }
    namespace CTESparks {
        constexpr uintptr_t m_nMagnitude = 0x2c;
        constexpr uintptr_t m_nTrailLength = 0x30;
        constexpr uintptr_t m_vecDir = 0x34;
    }
    namespace CTESmoke {
        constexpr uintptr_t m_vecOrigin = 0x20;
        constexpr uintptr_t m_nModelIndex = 0x2c;
        constexpr uintptr_t m_fScale = 0x30;
        constexpr uintptr_t m_nFrameRate = 0x34;
    }
    namespace CTEShowLine {
        constexpr uintptr_t m_vecEnd = 0x2c;
    }
    namespace CTEProjectedDecal {
        constexpr uintptr_t m_vecOrigin = 0x20;
        constexpr uintptr_t m_angRotation = 0x2c;
        constexpr uintptr_t m_flDistance = 0x38;
        constexpr uintptr_t m_nIndex = 0x3c;
    }
    namespace CFEPlayerDecal {
        constexpr uintptr_t m_nUniqueID = 0xf68;
        constexpr uintptr_t m_unAccountID = 0xf6c;
        constexpr uintptr_t m_unTraceID = 0xf70;
        constexpr uintptr_t m_rtGcTime = 0xf74;
        constexpr uintptr_t m_vecEndPos = 0xf78;
        constexpr uintptr_t m_vecStart = 0xf84;
        constexpr uintptr_t m_vecRight = 0xf90;
        constexpr uintptr_t m_vecNormal = 0xf9c;
        constexpr uintptr_t m_nEntity = 0xfac;
        constexpr uintptr_t m_nPlayer = 0xfa8;
        constexpr uintptr_t m_nHitbox = 0xfb0;
        constexpr uintptr_t m_nTintID = 0xfb4;
        constexpr uintptr_t m_flCreationTime = 0xfb8;
        constexpr uintptr_t m_nVersion = 0xfbc;
        constexpr uintptr_t m_ubSignature = 0xfbd;
    }
    namespace CTEPlayerDecal {
        constexpr uintptr_t m_vecOrigin = 0x24;
        constexpr uintptr_t m_vecStart = 0x30;
        constexpr uintptr_t m_vecRight = 0x3c;
        constexpr uintptr_t m_nEntity = 0x48;
        constexpr uintptr_t m_nPlayer = 0x20;
        constexpr uintptr_t m_nHitbox = 0x4c;
    }
    namespace CTEPhysicsProp {
        constexpr uintptr_t m_vecOrigin = 0x20;
        constexpr uintptr_t m_angRotation_0 = 0x2c;
        constexpr uintptr_t m_angRotation_1 = 0x30;
        constexpr uintptr_t m_angRotation_2 = 0x34;
        constexpr uintptr_t m_vecVelocity = 0x38;
        constexpr uintptr_t m_nModelIndex = 0x44;
        constexpr uintptr_t m_nFlags = 0x4c;
        constexpr uintptr_t m_nSkin = 0x48;
        constexpr uintptr_t m_nEffects = 0x50;
        constexpr uintptr_t m_clrRender = 0x54;
    }
    namespace CTEParticleSystem {
        constexpr uintptr_t m_vecOrigin_0 = 0x20;
        constexpr uintptr_t m_vecOrigin_1 = 0x24;
        constexpr uintptr_t m_vecOrigin_2 = 0x28;
    }
    namespace CTEMuzzleFlash {
        constexpr uintptr_t m_vecOrigin = 0x20;
        constexpr uintptr_t m_vecAngles = 0x2c;
        constexpr uintptr_t m_flScale = 0x38;
        constexpr uintptr_t m_nType = 0x3c;
    }
    namespace CTELargeFunnel {
        constexpr uintptr_t m_nModelIndex = 0x2c;
        constexpr uintptr_t m_nReversed = 0x30;
    }
    namespace CTEKillPlayerAttachments {
        constexpr uintptr_t m_nPlayer = 0x20;
    }
    namespace CTEImpact {
        constexpr uintptr_t m_vecOrigin = 0x20;
        constexpr uintptr_t m_vecNormal = 0x2c;
        constexpr uintptr_t m_iType = 0x38;
        constexpr uintptr_t m_ucFlags = 0x3c;
    }
    namespace CTEGlowSprite {
        constexpr uintptr_t m_vecOrigin = 0x20;
        constexpr uintptr_t m_nModelIndex = 0x2c;
        constexpr uintptr_t m_fScale = 0x30;
        constexpr uintptr_t m_fLife = 0x34;
        constexpr uintptr_t m_nBrightness = 0x38;
    }
    namespace CTEShatterSurface {
        constexpr uintptr_t m_vecOrigin = 0x20;
        constexpr uintptr_t m_vecAngles = 0x2c;
        constexpr uintptr_t m_vecForce = 0x38;
        constexpr uintptr_t m_vecForcePos = 0x44;
        constexpr uintptr_t m_flWidth = 0x50;
        constexpr uintptr_t m_flHeight = 0x54;
        constexpr uintptr_t m_flShardSize = 0x58;
        constexpr uintptr_t m_nSurfaceType = 0x68;
        constexpr uintptr_t m_uchFrontColor_0 = 0x6c;
        constexpr uintptr_t m_uchFrontColor_1 = 0x6d;
        constexpr uintptr_t m_uchFrontColor_2 = 0x6e;
        constexpr uintptr_t m_uchBackColor_0 = 0x6f;
        constexpr uintptr_t m_uchBackColor_1 = 0x70;
        constexpr uintptr_t m_uchBackColor_2 = 0x71;
    }
    namespace CTEFootprintDecal {
        constexpr uintptr_t m_vecOrigin = 0x20;
        constexpr uintptr_t m_vecDirection = 0x2c;
        constexpr uintptr_t m_nEntity = 0x44;
        constexpr uintptr_t m_nIndex = 0x48;
        constexpr uintptr_t m_chMaterialType = 0x4c;
    }
    namespace CTEFizz {
        constexpr uintptr_t m_nEntity = 0x20;
        constexpr uintptr_t m_nModelIndex = 0x24;
        constexpr uintptr_t m_nDensity = 0x28;
        constexpr uintptr_t m_nCurrent = 0x2c;
    }
    namespace CTEExplosion {
        constexpr uintptr_t m_nModelIndex = 0x2c;
        constexpr uintptr_t m_fScale = 0x30;
        constexpr uintptr_t m_nFrameRate = 0x34;
        constexpr uintptr_t m_nFlags = 0x38;
        constexpr uintptr_t m_vecNormal = 0x3c;
        constexpr uintptr_t m_chMaterialType = 0x48;
        constexpr uintptr_t m_nRadius = 0x4c;
        constexpr uintptr_t m_nMagnitude = 0x50;
    }
    namespace CTEEnergySplash {
        constexpr uintptr_t m_vecPos = 0x20;
        constexpr uintptr_t m_vecDir = 0x2c;
        constexpr uintptr_t m_bExplosive = 0x38;
    }
    namespace CTEEffectDispatch {
        constexpr uintptr_t m_EffectData = 0x20;
        namespace EffectData {
            constexpr uintptr_t m_vOrigin_x = 0x0;
            constexpr uintptr_t m_vOrigin_y = 0x4;
            constexpr uintptr_t m_vOrigin_z = 0x8;
            constexpr uintptr_t m_vStart_x = 0xc;
            constexpr uintptr_t m_vStart_y = 0x10;
            constexpr uintptr_t m_vStart_z = 0x14;
            constexpr uintptr_t m_vAngles = 0x24;
            constexpr uintptr_t m_vNormal = 0x18;
            constexpr uintptr_t m_fFlags = 0x30;
            constexpr uintptr_t m_flMagnitude = 0x44;
            constexpr uintptr_t m_flScale = 0x40;
            constexpr uintptr_t m_nAttachmentIndex = 0x4c;
            constexpr uintptr_t m_nSurfaceProp = 0x50;
            constexpr uintptr_t m_iEffectName = 0x68;
            constexpr uintptr_t m_nMaterial = 0x54;
            constexpr uintptr_t m_nDamageType = 0x58;
            constexpr uintptr_t m_nHitBox = 0x5c;
            constexpr uintptr_t entindex = 0x0;
            constexpr uintptr_t m_nOtherEntIndex = 0x60;
            constexpr uintptr_t m_nColor = 0x64;
            constexpr uintptr_t m_flRadius = 0x48;
            constexpr uintptr_t m_bPositionsAreRelativeToEntity = 0x65;
        }
    }
    namespace CTEDynamicLight {
        constexpr uintptr_t m_vecOrigin = 0x20;
        constexpr uintptr_t r = 0x30;
        constexpr uintptr_t g = 0x34;
        constexpr uintptr_t b = 0x38;
        constexpr uintptr_t exponent = 0x3c;
        constexpr uintptr_t m_fRadius = 0x2c;
        constexpr uintptr_t m_fTime = 0x40;
        constexpr uintptr_t m_fDecay = 0x44;
    }
    namespace CTEDecal {
        constexpr uintptr_t m_vecOrigin = 0x20;
        constexpr uintptr_t m_vecStart = 0x2c;
        constexpr uintptr_t m_nEntity = 0x38;
        constexpr uintptr_t m_nHitbox = 0x3c;
        constexpr uintptr_t m_nIndex = 0x40;
    }
    namespace CTEClientProjectile {
        constexpr uintptr_t m_vecOrigin = 0x20;
        constexpr uintptr_t m_vecVelocity = 0x2c;
        constexpr uintptr_t m_nModelIndex = 0x38;
        constexpr uintptr_t m_nLifeTime = 0x3c;
        constexpr uintptr_t m_hOwner = 0x40;
    }
    namespace CTEBubbleTrail {
        constexpr uintptr_t m_vecMins = 0x20;
        constexpr uintptr_t m_vecMaxs = 0x2c;
        constexpr uintptr_t m_nModelIndex = 0x3c;
        constexpr uintptr_t m_flWaterZ = 0x38;
        constexpr uintptr_t m_nCount = 0x40;
        constexpr uintptr_t m_fSpeed = 0x44;
    }
    namespace CTEBubbles {
        constexpr uintptr_t m_vecMins = 0x20;
        constexpr uintptr_t m_vecMaxs = 0x2c;
        constexpr uintptr_t m_nModelIndex = 0x3c;
        constexpr uintptr_t m_fHeight = 0x38;
        constexpr uintptr_t m_nCount = 0x40;
        constexpr uintptr_t m_fSpeed = 0x44;
    }
    namespace CTEBSPDecal {
        constexpr uintptr_t m_vecOrigin = 0x20;
        constexpr uintptr_t m_nEntity = 0x2c;
        constexpr uintptr_t m_nIndex = 0x30;
    }
    namespace CTEBreakModel {
        constexpr uintptr_t m_vecOrigin = 0x20;
        constexpr uintptr_t m_angRotation_0 = 0x2c;
        constexpr uintptr_t m_angRotation_1 = 0x30;
        constexpr uintptr_t m_angRotation_2 = 0x34;
        constexpr uintptr_t m_vecSize = 0x38;
        constexpr uintptr_t m_vecVelocity = 0x44;
        constexpr uintptr_t m_nModelIndex = 0x54;
        constexpr uintptr_t m_nRandomization = 0x50;
        constexpr uintptr_t m_nCount = 0x58;
        constexpr uintptr_t m_fTime = 0x5c;
        constexpr uintptr_t m_nFlags = 0x60;
    }
    namespace CTEBloodStream {
        constexpr uintptr_t m_vecDirection = 0x2c;
        constexpr uintptr_t r = 0x38;
        constexpr uintptr_t g = 0x3c;
        constexpr uintptr_t b = 0x40;
        constexpr uintptr_t a = 0x44;
        constexpr uintptr_t m_nAmount = 0x48;
    }
    namespace CTEBloodSprite {
        constexpr uintptr_t m_vecOrigin = 0x20;
        constexpr uintptr_t m_vecDirection = 0x2c;
        constexpr uintptr_t r = 0x38;
        constexpr uintptr_t g = 0x3c;
        constexpr uintptr_t b = 0x40;
        constexpr uintptr_t a = 0x44;
        constexpr uintptr_t m_nSprayModel = 0x4c;
        constexpr uintptr_t m_nDropModel = 0x48;
        constexpr uintptr_t m_nSize = 0x50;
    }
    namespace CTEBeamSpline {
        constexpr uintptr_t m_nPoints = 0xe0;
        constexpr uintptr_t m_vecPoints_0 = 0x20;
    }
    namespace CTEBeamRingPoint {
        constexpr uintptr_t m_vecCenter = 0x5c;
        constexpr uintptr_t m_flStartRadius = 0x68;
        constexpr uintptr_t m_flEndRadius = 0x6c;
    }
    namespace CTEBeamRing {
        constexpr uintptr_t m_nStartEntity = 0x5c;
        constexpr uintptr_t m_nEndEntity = 0x60;
    }
    namespace CTEBeamPoints {
        constexpr uintptr_t m_vecStartPoint = 0x5c;
        constexpr uintptr_t m_vecEndPoint = 0x68;
    }
    namespace CTEBeamLaser {
        constexpr uintptr_t m_nStartEntity = 0x5c;
        constexpr uintptr_t m_nEndEntity = 0x60;
    }
    namespace CTEBeamFollow {
        constexpr uintptr_t m_iEntIndex = 0x5c;
    }
    namespace CTEBeamEnts {
        constexpr uintptr_t m_nStartEntity = 0x5c;
        constexpr uintptr_t m_nEndEntity = 0x60;
    }
    namespace CTEBeamEntPoint {
        constexpr uintptr_t m_nStartEntity = 0x5c;
        constexpr uintptr_t m_nEndEntity = 0x60;
        constexpr uintptr_t m_vecStartPoint = 0x64;
        constexpr uintptr_t m_vecEndPoint = 0x70;
    }
    namespace CTEBaseBeam {
        constexpr uintptr_t m_nModelIndex = 0x20;
        constexpr uintptr_t m_nHaloIndex = 0x24;
        constexpr uintptr_t m_nStartFrame = 0x28;
        constexpr uintptr_t m_nFrameRate = 0x2c;
        constexpr uintptr_t m_fLife = 0x30;
        constexpr uintptr_t m_fWidth = 0x34;
        constexpr uintptr_t m_fEndWidth = 0x38;
        constexpr uintptr_t m_nFadeLength = 0x3c;
        constexpr uintptr_t m_fAmplitude = 0x40;
        constexpr uintptr_t m_nSpeed = 0x54;
        constexpr uintptr_t r = 0x44;
        constexpr uintptr_t g = 0x48;
        constexpr uintptr_t b = 0x4c;
        constexpr uintptr_t a = 0x50;
        constexpr uintptr_t m_nFlags = 0x58;
    }
    namespace CTEMetalSparks {
        constexpr uintptr_t m_vecPos = 0x20;
        constexpr uintptr_t m_vecDir = 0x2c;
    }
    namespace CSteamJet {
        constexpr uintptr_t m_SpreadSpeed = 0x10a0;
        constexpr uintptr_t m_Speed = 0x10a4;
        constexpr uintptr_t m_StartSize = 0x10a8;
        constexpr uintptr_t m_EndSize = 0x10ac;
        constexpr uintptr_t m_Rate = 0x10b0;
        constexpr uintptr_t m_JetLength = 0x10b4;
        constexpr uintptr_t m_bEmit = 0x10b8;
        constexpr uintptr_t m_bFaceLeft = 0x10c0;
        constexpr uintptr_t m_nType = 0x10bc;
        constexpr uintptr_t m_spawnflags = 0x10c4;
        constexpr uintptr_t m_flRollSpeed = 0x10c8;
    }
    namespace CSmokeStack {
        constexpr uintptr_t m_SpreadSpeed = 0x10f8;
        constexpr uintptr_t m_Speed = 0x10fc;
        constexpr uintptr_t m_StartSize = 0x1100;
        constexpr uintptr_t m_EndSize = 0x1104;
        constexpr uintptr_t m_Rate = 0x1108;
        constexpr uintptr_t m_JetLength = 0x110c;
        constexpr uintptr_t m_bEmit = 0x1110;
        constexpr uintptr_t m_flBaseSpread = 0x1114;
        constexpr uintptr_t m_flTwist = 0x1168;
        constexpr uintptr_t m_flRollSpeed = 0x11b0;
        constexpr uintptr_t m_iMaterialModel = 0x116c;
        constexpr uintptr_t m_AmbientLight_m_vPos = 0x1118;
        constexpr uintptr_t m_AmbientLight_m_vColor = 0x1124;
        constexpr uintptr_t m_AmbientLight_m_flIntensity = 0x1130;
        constexpr uintptr_t m_DirLight_m_vPos = 0x1134;
        constexpr uintptr_t m_DirLight_m_vColor = 0x1140;
        constexpr uintptr_t m_DirLight_m_flIntensity = 0x114c;
        constexpr uintptr_t m_vWind = 0x115c;
    }
    namespace DustTrail {
        constexpr uintptr_t m_SpawnRate = 0x10a0;
        constexpr uintptr_t m_Color = 0x10a4;
        constexpr uintptr_t m_ParticleLifetime = 0x10b4;
        constexpr uintptr_t m_StopEmitTime = 0x10bc;
        constexpr uintptr_t m_MinSpeed = 0x10c0;
        constexpr uintptr_t m_MaxSpeed = 0x10c4;
        constexpr uintptr_t m_MinDirectedSpeed = 0x10c8;
        constexpr uintptr_t m_MaxDirectedSpeed = 0x10cc;
        constexpr uintptr_t m_StartSize = 0x10d0;
        constexpr uintptr_t m_EndSize = 0x10d4;
        constexpr uintptr_t m_SpawnRadius = 0x10d8;
        constexpr uintptr_t m_bEmit = 0x10e8;
        constexpr uintptr_t m_Opacity = 0x10b0;
    }
    namespace CFireTrail {
        constexpr uintptr_t m_nAttachment = 0x10a0;
        constexpr uintptr_t m_flLifetime = 0x10a4;
    }
    namespace SporeTrail {
        constexpr uintptr_t m_flSpawnRate = 0x10a4;
        constexpr uintptr_t m_vecEndColor = 0x1098;
        constexpr uintptr_t m_flParticleLifetime = 0x10a8;
        constexpr uintptr_t m_flStartSize = 0x10ac;
        constexpr uintptr_t m_flEndSize = 0x10b0;
        constexpr uintptr_t m_flSpawnRadius = 0x10b4;
        constexpr uintptr_t m_bEmit = 0x10c4;
    }
    namespace SporeExplosion {
        constexpr uintptr_t m_flSpawnRate = 0x10a0;
        constexpr uintptr_t m_flParticleLifetime = 0x10a4;
        constexpr uintptr_t m_flStartSize = 0x10a8;
        constexpr uintptr_t m_flEndSize = 0x10ac;
        constexpr uintptr_t m_flSpawnRadius = 0x10b0;
        constexpr uintptr_t m_bEmit = 0x10b8;
        constexpr uintptr_t m_bDontRemove = 0x10b9;
    }
    namespace RocketTrail {
        constexpr uintptr_t m_SpawnRate = 0x10a0;
        constexpr uintptr_t m_StartColor = 0x10a4;
        constexpr uintptr_t m_EndColor = 0x10b0;
        constexpr uintptr_t m_ParticleLifetime = 0x10c0;
        constexpr uintptr_t m_StopEmitTime = 0x10c4;
        constexpr uintptr_t m_MinSpeed = 0x10c8;
        constexpr uintptr_t m_MaxSpeed = 0x10cc;
        constexpr uintptr_t m_StartSize = 0x10d0;
        constexpr uintptr_t m_EndSize = 0x10d4;
        constexpr uintptr_t m_SpawnRadius = 0x10d8;
        constexpr uintptr_t m_bEmit = 0x10e8;
        constexpr uintptr_t m_nAttachment = 0x10ec;
        constexpr uintptr_t m_Opacity = 0x10bc;
        constexpr uintptr_t m_bDamaged = 0x10e9;
        constexpr uintptr_t m_flFlareScale = 0x10fc;
    }
    namespace SmokeTrail {
        constexpr uintptr_t m_SpawnRate = 0x10a0;
        constexpr uintptr_t m_StartColor = 0x10a4;
        constexpr uintptr_t m_EndColor = 0x10b0;
        constexpr uintptr_t m_ParticleLifetime = 0x10c0;
        constexpr uintptr_t m_StopEmitTime = 0x10c4;
        constexpr uintptr_t m_MinSpeed = 0x10c8;
        constexpr uintptr_t m_MaxSpeed = 0x10cc;
        constexpr uintptr_t m_MinDirectedSpeed = 0x10d0;
        constexpr uintptr_t m_MaxDirectedSpeed = 0x10d4;
        constexpr uintptr_t m_StartSize = 0x10d8;
        constexpr uintptr_t m_EndSize = 0x10dc;
        constexpr uintptr_t m_SpawnRadius = 0x10e0;
        constexpr uintptr_t m_bEmit = 0x10f0;
        constexpr uintptr_t m_nAttachment = 0x10f4;
        constexpr uintptr_t m_Opacity = 0x10bc;
    }
    namespace CPropVehicleDriveable {
        constexpr uintptr_t m_hPlayer = 0x3028;
        constexpr uintptr_t m_nSpeed = 0x302c;
        constexpr uintptr_t m_nRPM = 0x3030;
        constexpr uintptr_t m_flThrottle = 0x3034;
        constexpr uintptr_t m_nBoostTimeLeft = 0x3038;
        constexpr uintptr_t m_nHasBoost = 0x303c;
        constexpr uintptr_t m_nScannerDisabledWeapons = 0x3040;
        constexpr uintptr_t m_nScannerDisabledVehicle = 0x3044;
        constexpr uintptr_t m_bEnterAnimOn = 0x3064;
        constexpr uintptr_t m_bExitAnimOn = 0x3065;
        constexpr uintptr_t m_bUnableToFire = 0x30cd;
        constexpr uintptr_t m_vecEyeExitEndpoint = 0x30c0;
        constexpr uintptr_t m_bHasGun = 0x30cc;
        constexpr uintptr_t m_vecGunCrosshair = 0x306c;
    }
    namespace ParticleSmokeGrenade {
        constexpr uintptr_t m_flSpawnTime = 0x10b0;
        constexpr uintptr_t m_FadeStartTime = 0x10b4;
        constexpr uintptr_t m_FadeEndTime = 0x10b8;
        constexpr uintptr_t m_MinColor = 0x10c0;
        constexpr uintptr_t m_MaxColor = 0x10cc;
        constexpr uintptr_t m_CurrentStage = 0x10a0;
    }
    namespace CParticleFire {
        constexpr uintptr_t m_vOrigin = 0x10b0;
        constexpr uintptr_t m_vDirection = 0x10bc;
    }
    namespace CTEGaussExplosion {
        constexpr uintptr_t m_nType = 0x2c;
        constexpr uintptr_t m_vecDirection = 0x30;
    }
    namespace CEnvQuadraticBeam {
        constexpr uintptr_t m_targetPosition = 0xf68;
        constexpr uintptr_t m_controlPosition = 0xf74;
        constexpr uintptr_t m_scrollRate = 0xf80;
        constexpr uintptr_t m_flWidth = 0xf84;
    }
    namespace CEmbers {
        constexpr uintptr_t m_nDensity = 0xf68;
        constexpr uintptr_t m_nLifetime = 0xf6c;
        constexpr uintptr_t m_nSpeed = 0xf70;
        constexpr uintptr_t m_bEmit = 0xf74;
    }
    namespace CEnvWind {
        constexpr uintptr_t m_EnvWindShared = 0xf68;
        namespace EnvWindShared {
            constexpr uintptr_t m_iMinWind = 0x10;
            constexpr uintptr_t m_iMaxWind = 0x14;
            constexpr uintptr_t m_iMinGust = 0x1c;
            constexpr uintptr_t m_iMaxGust = 0x20;
            constexpr uintptr_t m_flMinGustDelay = 0x24;
            constexpr uintptr_t m_flMaxGustDelay = 0x28;
            constexpr uintptr_t m_iGustDirChange = 0x30;
            constexpr uintptr_t m_iWindSeed = 0xc;
            constexpr uintptr_t m_iInitialWindDir = 0x70;
            constexpr uintptr_t m_flInitialWindSpeed = 0x74;
            constexpr uintptr_t m_flStartTime = 0x8;
            constexpr uintptr_t m_flGustDuration = 0x2c;
        }
    }
    namespace CPrecipitation {
        constexpr uintptr_t m_nPrecipType = 0xf94;
    }
    namespace CMapVetoPickController {
        constexpr uintptr_t m_nDraftType = 0xf80;
        constexpr uintptr_t m_nTeamWinningCoinToss = 0xf84;
        constexpr uintptr_t m_nTeamWithFirstChoice = 0xf88;
        constexpr uintptr_t m_nVoteMapIdsList = 0x1088;
        constexpr uintptr_t m_nAccountIDs = 0x10a4;
        constexpr uintptr_t m_nMapId0 = 0x11a4;
        constexpr uintptr_t m_nMapId1 = 0x12a4;
        constexpr uintptr_t m_nMapId2 = 0x13a4;
        constexpr uintptr_t m_nMapId3 = 0x14a4;
        constexpr uintptr_t m_nMapId4 = 0x15a4;
        constexpr uintptr_t m_nMapId5 = 0x16a4;
        constexpr uintptr_t m_nStartingSide0 = 0x17a4;
        constexpr uintptr_t m_nCurrentPhase = 0x18a4;
        constexpr uintptr_t m_nPhaseStartTick = 0x18a8;
        constexpr uintptr_t m_nPhaseDurationTicks = 0x18ac;
    }
    namespace CVoteController {
        constexpr uintptr_t m_iActiveIssueIndex = 0xf78;
        constexpr uintptr_t m_iOnlyTeamToVote = 0xf7c;
        constexpr uintptr_t m_nVoteOptionCount = 0xf80;
        constexpr uintptr_t m_nPotentialVotes = 0xf98;
        constexpr uintptr_t m_bIsYesNoVote = 0xf9e;
    }
    namespace CHandleTest {
        constexpr uintptr_t m_Handle = 0xf68;
        constexpr uintptr_t m_bSendHandle = 0xf6c;
    }
    namespace CTeamplayRoundBasedRulesProxy {
        namespace TeamplayRoundBasedRules {
            constexpr uintptr_t m_iRoundState = 0x40;
            constexpr uintptr_t m_bInWaitingForPlayers = 0x50;
            constexpr uintptr_t m_iWinningTeam = 0x48;
            constexpr uintptr_t m_bInOvertime = 0x44;
            constexpr uintptr_t m_bInSetup = 0x45;
            constexpr uintptr_t m_bSwitchedTeamsThisRound = 0x46;
            constexpr uintptr_t m_bAwaitingReadyRestart = 0x51;
            constexpr uintptr_t m_flRestartRoundTime = 0x54;
            constexpr uintptr_t m_flMapResetTime = 0x58;
            constexpr uintptr_t m_flNextRespawnWave = 0x5c;
            constexpr uintptr_t m_TeamRespawnWaveTimes = 0x100;
            constexpr uintptr_t m_bTeamReady = 0xdc;
            constexpr uintptr_t m_bStopWatch = 0xfc;
        }
    }
    namespace CSpriteTrail {
        constexpr uintptr_t m_flLifeTime = 0x1604;
        constexpr uintptr_t m_flStartWidth = 0x1608;
        constexpr uintptr_t m_flEndWidth = 0x160c;
        constexpr uintptr_t m_flStartWidthVariance = 0x1610;
        constexpr uintptr_t m_flTextureRes = 0x1614;
        constexpr uintptr_t m_flMinFadeLength = 0x1618;
        constexpr uintptr_t m_vecSkyboxOrigin = 0x161c;
        constexpr uintptr_t m_flSkyboxScale = 0x1628;
    }
    namespace CSprite {
        constexpr uintptr_t m_hAttachedToEntity = 0xf7c;
        constexpr uintptr_t m_nAttachment = 0xf80;
        constexpr uintptr_t m_flScaleTime = 0xf9c;
        constexpr uintptr_t m_flSpriteScale = 0xf98;
        constexpr uintptr_t m_flSpriteFramerate = 0xf84;
        constexpr uintptr_t m_flGlowProxySize = 0xfa4;
        constexpr uintptr_t m_flHDRColorScale = 0xfa8;
        constexpr uintptr_t m_flFrame = 0xf88;
        constexpr uintptr_t m_flBrightnessTime = 0xf94;
        constexpr uintptr_t m_nBrightness = 0xf90;
        constexpr uintptr_t m_bWorldSpaceScale = 0xfa0;
    }
    namespace CRagdollPropAttached {
        constexpr uintptr_t m_boneIndexAttached = 0x3390;
        constexpr uintptr_t m_ragdollAttachedObjectIndex = 0x338c;
        constexpr uintptr_t m_attachmentPointBoneSpace = 0x3368;
        constexpr uintptr_t m_attachmentPointRagdollSpace = 0x3380;
    }
    namespace CRagdollProp {
        constexpr uintptr_t m_ragAngles_0 = 0x3140;
        constexpr uintptr_t m_ragPos_0 = 0x3020;
        constexpr uintptr_t m_hUnragdoll = 0x3354;
        constexpr uintptr_t m_flBlendWeight = 0x3358;
        constexpr uintptr_t m_nOverlaySequence = 0x3360;
    }
    namespace CPoseController {
        constexpr uintptr_t m_hProps = 0xf68;
        constexpr uintptr_t m_chPoseIndex = 0xf78;
        constexpr uintptr_t m_bPoseValueParity = 0xf7c;
        constexpr uintptr_t m_fPoseValue = 0xf80;
        constexpr uintptr_t m_fInterpolationTime = 0xf84;
        constexpr uintptr_t m_bInterpolationWrap = 0xf88;
        constexpr uintptr_t m_fCycleFrequency = 0xf8c;
        constexpr uintptr_t m_nFModType = 0xf90;
        constexpr uintptr_t m_fFModTimeOffset = 0xf94;
        constexpr uintptr_t m_fFModRate = 0xf98;
        constexpr uintptr_t m_fFModAmplitude = 0xf9c;
    }
    namespace CFuncLadder {
        constexpr uintptr_t m_vecPlayerMountPositionTop = 0xf98;
        constexpr uintptr_t m_vecPlayerMountPositionBottom = 0xfa4;
        constexpr uintptr_t m_vecLadderDir = 0xf68;
        constexpr uintptr_t m_bFakeLadder = 0xfb1;
    }
    namespace CTEFoundryHelpers {
        constexpr uintptr_t m_iEntity = 0x20;
    }
    namespace CEnvDetailController {
        constexpr uintptr_t m_flFadeStartDist = 0xf68;
        constexpr uintptr_t m_flFadeEndDist = 0xf6c;
    }
    namespace CWorld {
        constexpr uintptr_t m_flWaveHeight = 0xf68;
        constexpr uintptr_t m_WorldMins = 0xf6c;
        constexpr uintptr_t m_WorldMaxs = 0xf78;
        constexpr uintptr_t m_bStartDark = 0xf84;
        constexpr uintptr_t m_flMaxOccludeeArea = 0xf88;
        constexpr uintptr_t m_flMinOccluderArea = 0xf8c;
        constexpr uintptr_t m_flMaxPropScreenSpaceWidth = 0xf94;
        constexpr uintptr_t m_flMinPropScreenSpaceWidth = 0xf90;
        constexpr uintptr_t m_iszDetailSpriteMaterial = 0xfa0;
        constexpr uintptr_t m_bColdWorld = 0xf98;
        constexpr uintptr_t m_iTimeOfDay = 0xf9c;
    }
    namespace CWaterLODControl {
        constexpr uintptr_t m_flCheapWaterStartDistance = 0xf68;
        constexpr uintptr_t m_flCheapWaterEndDistance = 0xf6c;
    }
    namespace CWorldVguiText {
        constexpr uintptr_t m_bEnabled = 0xf65;
        constexpr uintptr_t m_szDisplayText = 0xf66;
        constexpr uintptr_t m_szDisplayTextOption = 0x1166;
        constexpr uintptr_t m_szFont = 0x1266;
        constexpr uintptr_t m_iTextPanelWidth = 0x12ac;
        constexpr uintptr_t m_clrText = 0x12a6;
    }
    namespace CVGuiScreen {
        constexpr uintptr_t m_flWidth = 0xf70;
        constexpr uintptr_t m_flHeight = 0xf74;
        constexpr uintptr_t m_fScreenFlags = 0xf9c;
        constexpr uintptr_t m_nPanelName = 0xf78;
        constexpr uintptr_t m_nAttachmentIndex = 0xf94;
        constexpr uintptr_t m_nOverlayMaterial = 0xf98;
        constexpr uintptr_t m_hPlayerOwner = 0x1008;
    }
    namespace CPropJeep {
        constexpr uintptr_t m_bHeadlightIsOn = 0x3198;
    }
    namespace CPropVehicleChoreoGeneric {
        constexpr uintptr_t m_hPlayer = 0x3088;
        constexpr uintptr_t m_bEnterAnimOn = 0x3090;
        constexpr uintptr_t m_bExitAnimOn = 0x3091;
        constexpr uintptr_t m_bForceEyesToAttachment = 0x30a0;
        constexpr uintptr_t m_vecEyeExitEndpoint = 0x3094;
        constexpr uintptr_t m_vehicleView_bClampEyeAngles = 0x3130;
        constexpr uintptr_t m_vehicleView_flPitchCurveZero = 0x3134;
        constexpr uintptr_t m_vehicleView_flPitchCurveLinear = 0x3138;
        constexpr uintptr_t m_vehicleView_flRollCurveZero = 0x313c;
        constexpr uintptr_t m_vehicleView_flRollCurveLinear = 0x3140;
        constexpr uintptr_t m_vehicleView_flFOV = 0x3144;
        constexpr uintptr_t m_vehicleView_flYawMin = 0x3148;
        constexpr uintptr_t m_vehicleView_flYawMax = 0x314c;
        constexpr uintptr_t m_vehicleView_flPitchMin = 0x3150;
        constexpr uintptr_t m_vehicleView_flPitchMax = 0x3154;
    }
    namespace CTriggerSoundOperator {
        constexpr uintptr_t m_nSoundOperator = 0xf94;
    }
    namespace CBaseTrigger {
        constexpr uintptr_t m_bClientSidePredicted = 0xf91;
        constexpr uintptr_t m_spawnflags = 0x314;
    }
    namespace CTest_ProxyToggle_Networkable {
        namespace ProxyToggle_ProxiedData {
            constexpr uintptr_t m_WithProxy = 0xf68;
        }
    }
    namespace CTesla {
        constexpr uintptr_t m_SoundName = 0xf98;
        constexpr uintptr_t m_iszSpriteName = 0xfd8;
    }
    namespace CTeam {
        constexpr uintptr_t m_iTeamNum = 0x1104;
        constexpr uintptr_t m_bSurrendered = 0x1108;
        constexpr uintptr_t m_scoreTotal = 0x10dc;
        constexpr uintptr_t m_scoreFirstHalf = 0x10e0;
        constexpr uintptr_t m_scoreSecondHalf = 0x10e4;
        constexpr uintptr_t m_scoreOvertime = 0x10e8;
        constexpr uintptr_t m_iClanID = 0x10f4;
        constexpr uintptr_t m_szTeamname = 0xf88;
        constexpr uintptr_t m_szClanTeamname = 0xfa8;
        constexpr uintptr_t m_szTeamFlagImage = 0xfc8;
        constexpr uintptr_t m_szTeamLogoImage = 0xfd0;
        constexpr uintptr_t m_szTeamMatchStat = 0xfd8;
        constexpr uintptr_t m_nGGLeaderEntIndex_CT = 0x10ec;
        constexpr uintptr_t m_nGGLeaderEntIndex_T = 0x10f0;
        constexpr uintptr_t m_numMapVictories = 0x110c;
        constexpr uintptr_t player_array_element = 0x0;
    }
    namespace CSunlightShadowControl {
        constexpr uintptr_t m_shadowDirection = 0xf68;
        constexpr uintptr_t m_bEnabled = 0xf74;
        constexpr uintptr_t m_TextureName = 0xf75;
        constexpr uintptr_t m_LightColor = 0x1088;
        constexpr uintptr_t m_flColorTransitionTime = 0x109c;
        constexpr uintptr_t m_flSunDistance = 0x10a0;
        constexpr uintptr_t m_flFOV = 0x10a4;
        constexpr uintptr_t m_flNearZ = 0x10a8;
        constexpr uintptr_t m_flNorthOffset = 0x10ac;
        constexpr uintptr_t m_bEnableShadows = 0x10b0;
    }
    namespace CSun {
        constexpr uintptr_t m_clrRender = 0xa8;
        constexpr uintptr_t m_clrOverlay = 0x1118;
        constexpr uintptr_t m_vDirection = 0x1124;
        constexpr uintptr_t m_bOn = 0x1130;
        constexpr uintptr_t m_nSize = 0x111c;
        constexpr uintptr_t m_nOverlaySize = 0x1120;
        constexpr uintptr_t m_nMaterial = 0x1134;
        constexpr uintptr_t m_nOverlayMaterial = 0x1138;
        constexpr uintptr_t HDRColorScale = 0x0;
        constexpr uintptr_t glowDistanceScale = 0x0;
    }
    namespace CParticlePerformanceMonitor {
        constexpr uintptr_t m_bMeasurePerf = 0xf66;
        constexpr uintptr_t m_bDisplayPerf = 0xf65;
    }
    namespace CSpotlightEnd {
        constexpr uintptr_t m_flLightScale = 0xf68;
        constexpr uintptr_t m_Radius = 0xf6c;
    }
    namespace CSpatialEntity {
        constexpr uintptr_t m_vecOrigin = 0xf68;
        constexpr uintptr_t m_minFalloff = 0xf74;
        constexpr uintptr_t m_maxFalloff = 0xf78;
        constexpr uintptr_t m_flCurWeight = 0xf7c;
        constexpr uintptr_t m_bEnabled = 0x1084;
    }
    namespace CSlideshowDisplay {
        constexpr uintptr_t m_bEnabled = 0xf65;
        constexpr uintptr_t m_szDisplayText = 0xf66;
        constexpr uintptr_t m_szSlideshowDirectory = 0xfe6;
        constexpr uintptr_t m_chCurrentSlideLists = 0x1088;
        constexpr uintptr_t m_fMinSlideTime = 0x10a0;
        constexpr uintptr_t m_fMaxSlideTime = 0x10a4;
        constexpr uintptr_t m_iCycleType = 0x10ac;
        constexpr uintptr_t m_bNoListRepeats = 0x10b0;
    }
    namespace CShadowControl {
        constexpr uintptr_t m_shadowDirection = 0xf68;
        constexpr uintptr_t m_shadowColor = 0xf74;
        constexpr uintptr_t m_flShadowMaxDist = 0xf78;
        constexpr uintptr_t m_bDisableShadows = 0xf7c;
        constexpr uintptr_t m_bEnableLocalLightShadows = 0xf7d;
    }
    namespace CSceneEntity {
        constexpr uintptr_t m_nSceneStringIndex = 0xf7c;
        constexpr uintptr_t m_bIsPlayingBack = 0xf70;
        constexpr uintptr_t m_bPaused = 0xf71;
        constexpr uintptr_t m_bMultiplayer = 0xf72;
        constexpr uintptr_t m_flForceClientTime = 0xf78;
        namespace _ST_m_hActorList_16 {
            namespace _LPT_m_hActorList_16 {
                constexpr uintptr_t lengthprop16 = 0x0;
            }
        }
    }
    namespace CRopeKeyframe {
        constexpr uintptr_t m_nChangeCount = 0x12bc;
        constexpr uintptr_t m_iRopeMaterialModelIndex = 0xfa4;
        constexpr uintptr_t m_hStartPoint = 0x129c;
        constexpr uintptr_t m_hEndPoint = 0x12a0;
        constexpr uintptr_t m_iStartAttachment = 0x12a4;
        constexpr uintptr_t m_iEndAttachment = 0x12a6;
        constexpr uintptr_t m_fLockedPoints = 0x12b8;
        constexpr uintptr_t m_Slack = 0x12b0;
        constexpr uintptr_t m_RopeLength = 0x12ac;
        constexpr uintptr_t m_RopeFlags = 0xfa0;
        constexpr uintptr_t m_TextureScale = 0x12b4;
        constexpr uintptr_t m_nSegments = 0x1298;
        constexpr uintptr_t m_bConstrainBetweenEndpoints = 0x1350;
        constexpr uintptr_t m_Subdiv = 0x12a8;
        constexpr uintptr_t m_Width = 0x12c0;
        constexpr uintptr_t m_flScrollSpeed = 0xf9c;
        constexpr uintptr_t m_vecOrigin = 0x170;
        constexpr uintptr_t moveparent = 0x180;
        constexpr uintptr_t m_iParentAttachment = 0x340;
        constexpr uintptr_t m_iDefaultRopeMaterialModelIndex = 0xfa8;
        constexpr uintptr_t m_nMinCPULevel = 0xf18;
        constexpr uintptr_t m_nMaxCPULevel = 0xf19;
        constexpr uintptr_t m_nMinGPULevel = 0xf1a;
        constexpr uintptr_t m_nMaxGPULevel = 0xf1b;
    }
    namespace CRagdollManager {
        constexpr uintptr_t m_iCurrentMaxRagdollCount = 0xf68;
    }
    namespace CPhysicsPropMultiplayer {
        constexpr uintptr_t m_iPhysicsMode = 0x3058;
        constexpr uintptr_t m_fMass = 0x305c;
        constexpr uintptr_t m_collisionMins = 0x3060;
        constexpr uintptr_t m_collisionMaxs = 0x306c;
    }
    namespace CPhysBoxMultiplayer {
        constexpr uintptr_t m_iPhysicsMode = 0xf78;
        constexpr uintptr_t m_fMass = 0xf7c;
    }
    namespace CDynamicProp {
        constexpr uintptr_t m_bUseHitboxesForRenderBox = 0x303c;
        constexpr uintptr_t m_flGlowMaxDist = 0x305c;
        constexpr uintptr_t m_bShouldGlow = 0x3060;
        constexpr uintptr_t m_clrGlow = 0x3061;
        constexpr uintptr_t m_nGlowStyle = 0x3068;
    }
    namespace CProp_Hallucination {
        constexpr uintptr_t m_bEnabled = 0x3039;
        constexpr uintptr_t m_fVisibleTime = 0x303c;
        constexpr uintptr_t m_fRechargeTime = 0x3040;
    }
    namespace CPostProcessController {
        constexpr uintptr_t m_flPostProcessParameters = 0xf68;
        constexpr uintptr_t m_bMaster = 0xf94;
    }
    namespace CPointWorldText {
        constexpr uintptr_t m_szText = 0xf98;
        constexpr uintptr_t m_flTextSize = 0x109c;
        constexpr uintptr_t m_textColor = 0x10a0;
    }
    namespace CPointCommentaryNode {
        constexpr uintptr_t m_bActive = 0x3020;
        constexpr uintptr_t m_flStartTime = 0x3024;
        constexpr uintptr_t m_iszCommentaryFile = 0x3028;
        constexpr uintptr_t m_iszCommentaryFileNoHDR = 0x312c;
        constexpr uintptr_t m_iszSpeakers = 0x3230;
        constexpr uintptr_t m_iNodeNumber = 0x3330;
        constexpr uintptr_t m_iNodeNumberMax = 0x3334;
        constexpr uintptr_t m_hViewPosition = 0x3340;
    }
    namespace CPointCamera {
        constexpr uintptr_t m_FOV = 0xf68;
        constexpr uintptr_t m_Resolution = 0xf6c;
        constexpr uintptr_t m_bFogEnable = 0xf70;
        constexpr uintptr_t m_FogColor = 0xf71;
        constexpr uintptr_t m_flFogStart = 0xf78;
        constexpr uintptr_t m_flFogEnd = 0xf7c;
        constexpr uintptr_t m_flFogMaxDensity = 0xf80;
        constexpr uintptr_t m_bActive = 0xf84;
        constexpr uintptr_t m_bUseScreenAspectRatio = 0xf85;
    }
    namespace CPlayerResource {
        constexpr uintptr_t m_iPing = 0x11c4;
        constexpr uintptr_t m_iKills = 0x12c8;
        constexpr uintptr_t m_iAssists = 0x13cc;
        constexpr uintptr_t m_iDeaths = 0x14d0;
        constexpr uintptr_t m_bConnected = 0x1180;
        constexpr uintptr_t m_iTeam = 0x15d4;
        constexpr uintptr_t m_iPendingTeam = 0x16d8;
        constexpr uintptr_t m_bAlive = 0x17dc;
        constexpr uintptr_t m_iHealth = 0x1820;
        constexpr uintptr_t m_iCoachingTeam = 0x1924;
    }
    namespace CPlasma {
        constexpr uintptr_t m_flStartScale = 0xf68;
        constexpr uintptr_t m_flScale = 0xf6c;
        constexpr uintptr_t m_flScaleTime = 0xf70;
        constexpr uintptr_t m_nFlags = 0xf74;
        constexpr uintptr_t m_nPlasmaModelIndex = 0xf78;
        constexpr uintptr_t m_nPlasmaModelIndex2 = 0xf7c;
        constexpr uintptr_t m_nGlowModelIndex = 0xf80;
    }
    namespace CPhysicsProp {
        constexpr uintptr_t m_bAwake = 0x3035;
        constexpr uintptr_t m_spawnflags = 0x314;
    }
    namespace CStatueProp {
        constexpr uintptr_t m_hInitBaseAnimating = 0x3050;
        constexpr uintptr_t m_bShatter = 0x3054;
        constexpr uintptr_t m_nShatterFlags = 0x3058;
        constexpr uintptr_t m_vShatterPosition = 0x305c;
        constexpr uintptr_t m_vShatterForce = 0x3068;
    }
    namespace CPhysBox {
        constexpr uintptr_t m_mass = 0xf68;
    }
    namespace CParticleSystem {
        constexpr uintptr_t m_vecOrigin = 0x170;
        constexpr uintptr_t m_fEffects = 0x128;
        constexpr uintptr_t m_hOwnerEntity = 0x184;
        constexpr uintptr_t moveparent = 0x180;
        constexpr uintptr_t m_iParentAttachment = 0x340;
        constexpr uintptr_t m_angRotation = 0x164;
        constexpr uintptr_t m_iEffectIndex = 0xf68;
        constexpr uintptr_t m_bActive = 0xf70;
        constexpr uintptr_t m_nStopType = 0xf6c;
        constexpr uintptr_t m_flStartTime = 0xf74;
        constexpr uintptr_t m_szSnapshotFileName = 0xf78;
        constexpr uintptr_t m_vServerControlPoints = 0x107c;
        constexpr uintptr_t m_iServerControlPointAssignments = 0x10ac;
        constexpr uintptr_t m_hControlPointEnts = 0x10d0;
        constexpr uintptr_t m_iControlPointParents = 0x11cc;
    }
    namespace CMovieDisplay {
        constexpr uintptr_t m_bEnabled = 0xf65;
        constexpr uintptr_t m_bLooping = 0xf66;
        constexpr uintptr_t m_szMovieFilename = 0xf67;
        constexpr uintptr_t m_szGroupName = 0xfe7;
        constexpr uintptr_t m_bStretchToFill = 0x1067;
        constexpr uintptr_t m_bForcedSlave = 0x1068;
        constexpr uintptr_t m_bUseCustomUVs = 0x1069;
        constexpr uintptr_t m_flUMin = 0x106c;
        constexpr uintptr_t m_flUMax = 0x1070;
        constexpr uintptr_t m_flVMin = 0x1074;
        constexpr uintptr_t m_flVMax = 0x1078;
    }
    namespace CMaterialModifyControl {
        constexpr uintptr_t m_szMaterialName = 0xf65;
        constexpr uintptr_t m_szMaterialVar = 0x1064;
        constexpr uintptr_t m_szMaterialVarValue = 0x1163;
        constexpr uintptr_t m_iFrameStart = 0x1274;
        constexpr uintptr_t m_iFrameEnd = 0x1278;
        constexpr uintptr_t m_bWrap = 0x127c;
        constexpr uintptr_t m_flFramerate = 0x1280;
        constexpr uintptr_t m_bNewAnimCommandsSemaphore = 0x1284;
        constexpr uintptr_t m_flFloatLerpStartValue = 0x1288;
        constexpr uintptr_t m_flFloatLerpEndValue = 0x128c;
        constexpr uintptr_t m_flFloatLerpTransitionTime = 0x1290;
        constexpr uintptr_t m_bFloatLerpWrap = 0x1294;
        constexpr uintptr_t m_nModifyMode = 0x129c;
    }
    namespace CLightGlow {
        constexpr uintptr_t m_clrRender = 0xa8;
        constexpr uintptr_t m_nHorizontalSize = 0xf68;
        constexpr uintptr_t m_nVerticalSize = 0xf6c;
        constexpr uintptr_t m_nMinDist = 0xf70;
        constexpr uintptr_t m_nMaxDist = 0xf74;
        constexpr uintptr_t m_nOuterMaxDist = 0xf78;
        constexpr uintptr_t m_spawnflags = 0xf7c;
        constexpr uintptr_t m_vecOrigin = 0x170;
        constexpr uintptr_t m_angRotation = 0x164;
        constexpr uintptr_t moveparent = 0x180;
        constexpr uintptr_t m_flGlowProxySize = 0x1080;
        constexpr uintptr_t HDRColorScale = 0x0;
    }
    namespace CItemAssaultSuitUseable {
        constexpr uintptr_t m_nArmorValue = 0x3ebc;
        constexpr uintptr_t m_bIsHeavyAssaultSuit = 0x3ec0;
    }
    namespace CItem {
        constexpr uintptr_t m_bShouldGlow = 0x3ab8;
    }
    namespace CInfoOverlayAccessor {
        constexpr uintptr_t m_iTextureFrameIndex = 0xf1c;
        constexpr uintptr_t m_iOverlayID = 0xf68;
    }
    namespace CFuncSmokeVolume {
        constexpr uintptr_t m_Color1 = 0x10a0;
        constexpr uintptr_t m_Color2 = 0x10a4;
        constexpr uintptr_t m_MaterialName = 0x10a8;
        constexpr uintptr_t m_ParticleDrawWidth = 0x11a8;
        constexpr uintptr_t m_ParticleSpacingDistance = 0x11ac;
        constexpr uintptr_t m_DensityRampSpeed = 0x11b0;
        constexpr uintptr_t m_RotationSpeed = 0x11b4;
        constexpr uintptr_t m_MovementSpeed = 0x11b8;
        constexpr uintptr_t m_Density = 0x11bc;
        constexpr uintptr_t m_maxDrawDistance = 0x11c0;
        constexpr uintptr_t m_spawnflags = 0x11c4;
        constexpr uintptr_t m_Collision = 0x378;
        namespace CollisionProperty {
            constexpr uintptr_t m_vecMins = 0x10;
            constexpr uintptr_t m_vecMaxs = 0x1c;
            constexpr uintptr_t m_nSolidType = 0x2a;
            constexpr uintptr_t m_usSolidFlags = 0x28;
            constexpr uintptr_t m_nSurroundType = 0x32;
            constexpr uintptr_t m_triggerBloat = 0x2b;
            constexpr uintptr_t m_vecSpecifiedSurroundingMins = 0x34;
            constexpr uintptr_t m_vecSpecifiedSurroundingMaxs = 0x40;
        }
    }
    namespace CFuncRotating {
        constexpr uintptr_t m_vecOrigin = 0x170;
        constexpr uintptr_t m_angRotation_0 = 0x164;
        constexpr uintptr_t m_angRotation_1 = 0x168;
        constexpr uintptr_t m_angRotation_2 = 0x16c;
        constexpr uintptr_t m_flSimulationTime = 0x2a0;
    }
    namespace CFuncOccluder {
        constexpr uintptr_t m_bActive = 0xf6c;
        constexpr uintptr_t m_nOccluderIndex = 0xf68;
    }
    namespace CFuncMoveLinear {
        constexpr uintptr_t m_vecVelocity = 0x14c;
        constexpr uintptr_t m_fFlags = 0x13c;
    }
    namespace CFunc_LOD {
        constexpr uintptr_t m_nDisappearMinDist = 0xf68;
        constexpr uintptr_t m_nDisappearMaxDist = 0xf6c;
    }
    namespace CTEDust {
        constexpr uintptr_t m_flSize = 0x2c;
        constexpr uintptr_t m_flSpeed = 0x30;
        constexpr uintptr_t m_vecDirection = 0x34;
    }
    namespace CFunc_Dust {
        constexpr uintptr_t m_Color = 0xf65;
        constexpr uintptr_t m_SpawnRate = 0xf6c;
        constexpr uintptr_t m_flSizeMin = 0xf70;
        constexpr uintptr_t m_flSizeMax = 0xf74;
        constexpr uintptr_t m_LifetimeMin = 0xf7c;
        constexpr uintptr_t m_LifetimeMax = 0xf80;
        constexpr uintptr_t m_DustFlags = 0xf90;
        constexpr uintptr_t m_SpeedMax = 0xf78;
        constexpr uintptr_t m_DistMax = 0xf84;
        constexpr uintptr_t m_nModelIndex = 0x290;
        constexpr uintptr_t m_FallSpeed = 0xf88;
        constexpr uintptr_t m_bAffectedByWind = 0xf8c;
        constexpr uintptr_t m_Collision = 0x378;
        namespace CollisionProperty {
            constexpr uintptr_t m_vecMins = 0x10;
            constexpr uintptr_t m_vecMaxs = 0x1c;
            constexpr uintptr_t m_nSolidType = 0x2a;
            constexpr uintptr_t m_usSolidFlags = 0x28;
            constexpr uintptr_t m_nSurroundType = 0x32;
            constexpr uintptr_t m_triggerBloat = 0x2b;
            constexpr uintptr_t m_vecSpecifiedSurroundingMins = 0x34;
            constexpr uintptr_t m_vecSpecifiedSurroundingMaxs = 0x40;
        }
    }
    namespace CFuncConveyor {
        constexpr uintptr_t m_flConveyorSpeed = 0xf68;
    }
    namespace CBreakableSurface {
        constexpr uintptr_t m_nNumWide = 0xf70;
        constexpr uintptr_t m_nNumHigh = 0xf74;
        constexpr uintptr_t m_flPanelWidth = 0xf78;
        constexpr uintptr_t m_flPanelHeight = 0xf7c;
        constexpr uintptr_t m_vNormal = 0xf80;
        constexpr uintptr_t m_vCorner = 0xf8c;
        constexpr uintptr_t m_bIsBroken = 0xf98;
        constexpr uintptr_t m_nSurfaceType = 0xf9c;
        constexpr uintptr_t m_RawPanelBitVec = 0xfd0;
    }
    namespace CFuncAreaPortalWindow {
        constexpr uintptr_t m_flFadeStartDist = 0xf68;
        constexpr uintptr_t m_flFadeDist = 0xf6c;
        constexpr uintptr_t m_flTranslucencyLimit = 0xf70;
        constexpr uintptr_t m_iBackgroundModelIndex = 0xf74;
    }
    namespace CFish {
        constexpr uintptr_t m_poolOrigin = 0x3088;
        constexpr uintptr_t m_x = 0x3070;
        constexpr uintptr_t m_y = 0x3074;
        constexpr uintptr_t m_z = 0x3078;
        constexpr uintptr_t m_angle = 0x3080;
        constexpr uintptr_t m_nModelIndex = 0x290;
        constexpr uintptr_t m_lifeState = 0x297;
        constexpr uintptr_t m_waterLevel = 0x3094;
    }
    namespace CFireSmoke {
        constexpr uintptr_t m_flStartScale = 0xf68;
        constexpr uintptr_t m_flScale = 0xf6c;
        constexpr uintptr_t m_flScaleTime = 0xf70;
        constexpr uintptr_t m_nFlags = 0xf74;
        constexpr uintptr_t m_nFlameModelIndex = 0xf78;
        constexpr uintptr_t m_nFlameFromAboveModelIndex = 0xf7c;
    }
    namespace CEntityFlame {
        constexpr uintptr_t m_hEntAttached = 0xf68;
        constexpr uintptr_t m_bCheapEffect = 0xf8c;
    }
    namespace CEnvDOFController {
        constexpr uintptr_t m_bDOFEnabled = 0xf65;
        constexpr uintptr_t m_flNearBlurDepth = 0xf68;
        constexpr uintptr_t m_flNearFocusDepth = 0xf6c;
        constexpr uintptr_t m_flFarFocusDepth = 0xf70;
        constexpr uintptr_t m_flFarBlurDepth = 0xf74;
        constexpr uintptr_t m_flNearBlurRadius = 0xf78;
        constexpr uintptr_t m_flFarBlurRadius = 0xf7c;
    }
    namespace CEnvTonemapController {
        constexpr uintptr_t m_bUseCustomAutoExposureMin = 0xf65;
        constexpr uintptr_t m_bUseCustomAutoExposureMax = 0xf66;
        constexpr uintptr_t m_bUseCustomBloomScale = 0xf67;
        constexpr uintptr_t m_flCustomAutoExposureMin = 0xf68;
        constexpr uintptr_t m_flCustomAutoExposureMax = 0xf6c;
        constexpr uintptr_t m_flCustomBloomScale = 0xf70;
        constexpr uintptr_t m_flCustomBloomScaleMinimum = 0xf74;
        constexpr uintptr_t m_flBloomExponent = 0xf78;
        constexpr uintptr_t m_flBloomSaturation = 0xf7c;
        constexpr uintptr_t m_flTonemapPercentTarget = 0xf80;
        constexpr uintptr_t m_flTonemapPercentBrightPixels = 0xf84;
        constexpr uintptr_t m_flTonemapMinAvgLum = 0xf88;
        constexpr uintptr_t m_flTonemapRate = 0xf8c;
    }
    namespace CEnvScreenEffect {
        constexpr uintptr_t m_flDuration = 0xf68;
        constexpr uintptr_t m_nType = 0xf6c;
    }
    namespace CEnvScreenOverlay {
        constexpr uintptr_t m_iszOverlayNames_0 = 0xf65;
        constexpr uintptr_t m_flOverlayTimes_0 = 0x195c;
        constexpr uintptr_t m_flStartTime = 0x1984;
        constexpr uintptr_t m_iDesiredOverlay = 0x1988;
        constexpr uintptr_t m_bIsActive = 0x198c;
    }
    namespace CEnvProjectedTexture {
        constexpr uintptr_t m_hTargetEntity = 0xf6c;
        constexpr uintptr_t m_bState = 0xf70;
        constexpr uintptr_t m_bAlwaysUpdate = 0xf71;
        constexpr uintptr_t m_flLightFOV = 0xf74;
        constexpr uintptr_t m_bEnableShadows = 0xf78;
        constexpr uintptr_t m_bSimpleProjection = 0xf79;
        constexpr uintptr_t m_bLightOnlyTarget = 0xf7a;
        constexpr uintptr_t m_bLightWorld = 0xf7b;
        constexpr uintptr_t m_bCameraSpace = 0xf7c;
        constexpr uintptr_t m_flBrightnessScale = 0xf80;
        constexpr uintptr_t m_LightColor = 0xf84;
        constexpr uintptr_t m_flColorTransitionTime = 0xf98;
        constexpr uintptr_t m_flAmbient = 0xf9c;
        constexpr uintptr_t m_SpotlightTextureName = 0xfa8;
        constexpr uintptr_t m_nSpotlightTextureFrame = 0x10c0;
        constexpr uintptr_t m_flNearZ = 0xfa0;
        constexpr uintptr_t m_flFarZ = 0xfa4;
        constexpr uintptr_t m_nShadowQuality = 0x10c4;
        constexpr uintptr_t m_flProjectionSize = 0x10d8;
        constexpr uintptr_t m_flRotation = 0x10dc;
        constexpr uintptr_t m_iStyle = 0x10c8;
    }
    namespace CEnvParticleScript {
        constexpr uintptr_t m_flSequenceScale = 0x3150;
    }
    namespace CFogController {
        constexpr uintptr_t m_fog_enable = 0xfb0;
        constexpr uintptr_t m_fog_blend = 0xfb1;
        constexpr uintptr_t m_fog_dirPrimary = 0xf70;
        constexpr uintptr_t m_fog_colorPrimary = 0xf7c;
        constexpr uintptr_t m_fog_colorSecondary = 0xf80;
        constexpr uintptr_t m_fog_start = 0xf8c;
        constexpr uintptr_t m_fog_end = 0xf90;
        constexpr uintptr_t m_fog_farz = 0xf94;
        constexpr uintptr_t m_fog_maxdensity = 0xf98;
        constexpr uintptr_t m_fog_colorPrimaryLerpTo = 0xf84;
        constexpr uintptr_t m_fog_colorSecondaryLerpTo = 0xf88;
        constexpr uintptr_t m_fog_startLerpTo = 0xf9c;
        constexpr uintptr_t m_fog_endLerpTo = 0xfa0;
        constexpr uintptr_t m_fog_maxdensityLerpTo = 0xfa4;
        constexpr uintptr_t m_fog_lerptime = 0xfa8;
        constexpr uintptr_t m_fog_duration = 0xfac;
        constexpr uintptr_t m_fog_HDRColorScale = 0xfb8;
        constexpr uintptr_t m_fog_ZoomFogScale = 0xfb4;
    }
    namespace CCascadeLight {
        constexpr uintptr_t m_shadowDirection = 0xf68;
        constexpr uintptr_t m_envLightShadowDirection = 0xf74;
        constexpr uintptr_t m_bEnabled = 0xf80;
        constexpr uintptr_t m_bUseLightEnvAngles = 0xf81;
        constexpr uintptr_t m_LightColor = 0xf82;
        constexpr uintptr_t m_LightColorScale = 0xf88;
        constexpr uintptr_t m_flMaxShadowDist = 0xf8c;
    }
    namespace CEnvAmbientLight {
        constexpr uintptr_t m_vecColor = 0x1090;
    }
    namespace CEntityParticleTrail {
        constexpr uintptr_t m_iMaterialName = 0x1098;
        constexpr uintptr_t m_Info = 0x10a0;
        namespace EntityParticleTrailInfo {
            constexpr uintptr_t m_flLifetime = 0x10;
            constexpr uintptr_t m_flStartSize = 0x14;
            constexpr uintptr_t m_flEndSize = 0x18;
        }
        constexpr uintptr_t m_hConstraintEntity = 0x10c0;
    }
    namespace CEntityFreezing {
        constexpr uintptr_t m_vFreezingOrigin = 0xf68;
        constexpr uintptr_t m_flFrozenPerHitbox = 0xf74;
        constexpr uintptr_t m_flFrozen = 0x103c;
        constexpr uintptr_t m_bFinishFreezing = 0x1040;
    }
    namespace CEntityDissolve {
        constexpr uintptr_t m_flStartTime = 0xf70;
        constexpr uintptr_t m_flFadeOutStart = 0xf74;
        constexpr uintptr_t m_flFadeOutLength = 0xf78;
        constexpr uintptr_t m_flFadeOutModelStart = 0xf7c;
        constexpr uintptr_t m_flFadeOutModelLength = 0xf80;
        constexpr uintptr_t m_flFadeInStart = 0xf84;
        constexpr uintptr_t m_flFadeInLength = 0xf88;
        constexpr uintptr_t m_nDissolveType = 0xf8c;
        constexpr uintptr_t m_vDissolverOrigin = 0xf94;
        constexpr uintptr_t m_nMagnitude = 0xfa0;
    }
    namespace CDynamicLight {
        constexpr uintptr_t m_Flags = 0xf65;
        constexpr uintptr_t m_LightStyle = 0xf66;
        constexpr uintptr_t m_Radius = 0xf68;
        constexpr uintptr_t m_Exponent = 0xf6c;
        constexpr uintptr_t m_InnerAngle = 0xf70;
        constexpr uintptr_t m_OuterAngle = 0xf74;
        constexpr uintptr_t m_SpotRadius = 0xf78;
    }
    namespace CPropCounter {
        constexpr uintptr_t m_flDisplayValue = 0x3020;
    }
    namespace CGrassBurn {
        constexpr uintptr_t m_flGrassBurnClearTime = 0xf68;
    }
    namespace CDangerZone {
        constexpr uintptr_t m_vecDangerZoneOriginStartedAt = 0xf68;
        constexpr uintptr_t m_flBombLaunchTime = 0xf74;
        constexpr uintptr_t m_flExtraRadius = 0xf78;
        constexpr uintptr_t m_flExtraRadiusStartTime = 0xf7c;
        constexpr uintptr_t m_flExtraRadiusTotalLerpTime = 0xf80;
        constexpr uintptr_t m_nDropOrder = 0xf84;
        constexpr uintptr_t m_iWave = 0xf88;
    }
    namespace CDangerZoneController {
        constexpr uintptr_t m_bDangerZoneControllerEnabled = 0xf65;
        constexpr uintptr_t m_bMissionControlledExplosions = 0xf66;
        constexpr uintptr_t m_flStartTime = 0xf80;
        constexpr uintptr_t m_flFinalExpansionTime = 0xf84;
        constexpr uintptr_t m_vecEndGameCircleStart = 0xf68;
        constexpr uintptr_t m_vecEndGameCircleEnd = 0xf74;
        constexpr uintptr_t m_DangerZones = 0xf88;
        constexpr uintptr_t m_flWaveEndTimes = 0x1030;
        constexpr uintptr_t m_hTheFinalZone = 0x1044;
    }
    namespace CColorCorrectionVolume {
        constexpr uintptr_t m_bEnabled = 0xfa4;
        constexpr uintptr_t m_MaxWeight = 0xfa8;
        constexpr uintptr_t m_FadeDuration = 0xfac;
        constexpr uintptr_t m_Weight = 0xfb0;
        constexpr uintptr_t m_lookupFilename = 0xfb4;
    }
    namespace CColorCorrection {
        constexpr uintptr_t m_vecOrigin = 0xf68;
        constexpr uintptr_t m_minFalloff = 0xf74;
        constexpr uintptr_t m_maxFalloff = 0xf78;
        constexpr uintptr_t m_flCurWeight = 0xf88;
        constexpr uintptr_t m_flMaxWeight = 0xf84;
        constexpr uintptr_t m_flFadeInDuration = 0xf7c;
        constexpr uintptr_t m_flFadeOutDuration = 0xf80;
        constexpr uintptr_t m_netLookupFilename = 0xf8c;
        constexpr uintptr_t m_bEnabled = 0x1090;
        constexpr uintptr_t m_bMaster = 0x1091;
        constexpr uintptr_t m_bClientSide = 0x1092;
        constexpr uintptr_t m_bExclusive = 0x1093;
    }
    namespace CBreakableProp {
        constexpr uintptr_t m_qPreferredPlayerCarryAngles = 0x3028;
        constexpr uintptr_t m_bClientPhysics = 0x3034;
    }
    namespace CBeamSpotlight {
        constexpr uintptr_t m_nHaloIndex = 0xf68;
        constexpr uintptr_t m_bSpotlightOn = 0xf74;
        constexpr uintptr_t m_bHasDynamicLight = 0xf75;
        constexpr uintptr_t m_flSpotlightMaxLength = 0xf78;
        constexpr uintptr_t m_flSpotlightGoalWidth = 0xf7c;
        constexpr uintptr_t m_flHDRColorScale = 0xf80;
        constexpr uintptr_t m_nRotationAxis = 0xf6c;
        constexpr uintptr_t m_flRotationSpeed = 0xf70;
    }
    namespace CBaseButton {
        constexpr uintptr_t m_usable = 0xf91;
    }
    namespace CBaseToggle {
        constexpr uintptr_t m_vecFinalDest = 0xf7c;
        constexpr uintptr_t m_movementType = 0xf88;
        constexpr uintptr_t m_flMoveTargetTime = 0xf8c;
    }
    namespace CBasePlayer {
        namespace LocalPlayerExclusive {
            constexpr uintptr_t m_Local = 0x3708;
            namespace Local {
                constexpr uintptr_t m_chAreaBits = 0x8;
                constexpr uintptr_t m_chAreaPortalBits = 0x28;
                constexpr uintptr_t m_iHideHUD = 0x4c;
                constexpr uintptr_t m_flFOVRate = 0x48;
                constexpr uintptr_t m_bDucked = 0x8c;
                constexpr uintptr_t m_bDucking = 0x8d;
                constexpr uintptr_t m_flLastDuckTime = 0x90;
                constexpr uintptr_t m_bInDuckJump = 0x94;
                constexpr uintptr_t m_nDuckTimeMsecs = 0x50;
                constexpr uintptr_t m_nDuckJumpTimeMsecs = 0x54;
                constexpr uintptr_t m_nJumpTimeMsecs = 0x58;
                constexpr uintptr_t m_flFallVelocity = 0x5c;
                constexpr uintptr_t m_viewPunchAngle = 0x68;
                constexpr uintptr_t m_aimPunchAngle = 0x74;
                constexpr uintptr_t m_aimPunchAngleVel = 0x80;
                constexpr uintptr_t m_bDrawViewmodel = 0x95;
                constexpr uintptr_t m_bWearingSuit = 0x96;
                constexpr uintptr_t m_bPoisoned = 0x97;
                constexpr uintptr_t m_flStepSize = 0x64;
                constexpr uintptr_t m_bAllowAutoMovement = 0x98;
                constexpr uintptr_t m_skybox3d_scale = 0x198;
                constexpr uintptr_t m_skybox3d_origin = 0x19c;
                constexpr uintptr_t m_skybox3d_area = 0x1a8;
                constexpr uintptr_t m_skybox3d_fog_enable = 0x1f8;
                constexpr uintptr_t m_skybox3d_fog_blend = 0x1f9;
                constexpr uintptr_t m_skybox3d_fog_dirPrimary = 0x1b8;
                constexpr uintptr_t m_skybox3d_fog_colorPrimary = 0x1c4;
                constexpr uintptr_t m_skybox3d_fog_colorSecondary = 0x1c8;
                constexpr uintptr_t m_skybox3d_fog_start = 0x1d4;
                constexpr uintptr_t m_skybox3d_fog_end = 0x1d8;
                constexpr uintptr_t m_skybox3d_fog_maxdensity = 0x1e0;
                constexpr uintptr_t m_skybox3d_fog_HDRColorScale = 0x200;
                constexpr uintptr_t m_audio_localSound_0 = 0x210;
                constexpr uintptr_t m_audio_localSound_1 = 0x21c;
                constexpr uintptr_t m_audio_localSound_2 = 0x228;
                constexpr uintptr_t m_audio_localSound_3 = 0x234;
                constexpr uintptr_t m_audio_localSound_4 = 0x240;
                constexpr uintptr_t m_audio_localSound_5 = 0x24c;
                constexpr uintptr_t m_audio_localSound_6 = 0x258;
                constexpr uintptr_t m_audio_localSound_7 = 0x264;
                constexpr uintptr_t m_audio_soundscapeIndex = 0x270;
                constexpr uintptr_t m_audio_localBits = 0x274;
                constexpr uintptr_t m_audio_entIndex = 0x278;
            }
            constexpr uintptr_t m_vecViewOffset_0 = 0x140;
            constexpr uintptr_t m_vecViewOffset_1 = 0x144;
            constexpr uintptr_t m_vecViewOffset_2 = 0x148;
            constexpr uintptr_t m_flFriction = 0x17c;
            constexpr uintptr_t m_fOnTarget = 0x3b14;
            constexpr uintptr_t m_nTickBase = 0x3c58;
            constexpr uintptr_t m_nNextThinkTick = 0x134;
            constexpr uintptr_t m_hLastWeapon = 0x3ad8;
            constexpr uintptr_t m_vecVelocity_0 = 0x14c;
            constexpr uintptr_t m_vecVelocity_1 = 0x150;
            constexpr uintptr_t m_vecVelocity_2 = 0x154;
            constexpr uintptr_t m_vecBaseVelocity = 0x158;
            constexpr uintptr_t m_hConstraintEntity = 0x3b38;
            constexpr uintptr_t m_vecConstraintCenter = 0x3b3c;
            constexpr uintptr_t m_flConstraintRadius = 0x3b48;
            constexpr uintptr_t m_flConstraintWidth = 0x3b4c;
            constexpr uintptr_t m_flConstraintSpeedFactor = 0x3b50;
            constexpr uintptr_t m_bConstraintPastRadius = 0x3b54;
            constexpr uintptr_t m_flDeathTime = 0x3bc4;
            constexpr uintptr_t m_flNextDecalTime = 0x3bc8;
            constexpr uintptr_t m_fForceTeam = 0x3bcc;
            constexpr uintptr_t m_flLaggedMovementValue = 0x3dd8;
            constexpr uintptr_t m_hTonemapController = 0x3990;
        }
        constexpr uintptr_t pl = 0x3998;
        namespace PlayerState {
            constexpr uintptr_t deadflag = 0x8;
        }
        constexpr uintptr_t m_iFOV = 0x39b0;
        constexpr uintptr_t m_iFOVStart = 0x39b4;
        constexpr uintptr_t m_flFOVTime = 0x39d4;
        constexpr uintptr_t m_iDefaultFOV = 0x3b1c;
        constexpr uintptr_t m_hZoomOwner = 0x3a18;
        constexpr uintptr_t m_afPhysicsFlags = 0x3ad0;
        constexpr uintptr_t m_hVehicle = 0x3ad4;
        constexpr uintptr_t m_hUseEntity = 0x3b18;
        constexpr uintptr_t m_hGroundEntity = 0x188;
        constexpr uintptr_t m_iHealth = 0x138;
        constexpr uintptr_t m_lifeState = 0x297;
        constexpr uintptr_t m_iAmmo = 0x34c0;
        constexpr uintptr_t m_iBonusProgress = 0x3a0c;
        constexpr uintptr_t m_iBonusChallenge = 0x3a10;
        constexpr uintptr_t m_flMaxspeed = 0x3a14;
        constexpr uintptr_t m_fFlags = 0x13c;
        constexpr uintptr_t m_iObserverMode = 0x3b78;
        constexpr uintptr_t m_bActiveCameraMan = 0x3b7c;
        constexpr uintptr_t m_bCameraManXRay = 0x3b7d;
        constexpr uintptr_t m_bCameraManOverview = 0x3b7e;
        constexpr uintptr_t m_bCameraManScoreBoard = 0x3b7f;
        constexpr uintptr_t m_uCameraManGraphs = 0x3b80;
        constexpr uintptr_t m_iDeathPostEffect = 0x3b74;
        constexpr uintptr_t m_hObserverTarget = 0x3b8c;
        constexpr uintptr_t m_hViewModel_0 = 0x3adc;
        constexpr uintptr_t m_iCoachingTeam = 0x3694;
        constexpr uintptr_t m_szLastPlaceName = 0x3df8;
        constexpr uintptr_t m_vecLadderNormal = 0x39fc;
        constexpr uintptr_t m_ladderSurfaceProps = 0x39cc;
        constexpr uintptr_t m_ubEFNoInterpParity = 0x3e20;
        constexpr uintptr_t m_hPostProcessCtrl = 0x4038;
        constexpr uintptr_t m_hColorCorrectionCtrl = 0x403c;
        constexpr uintptr_t m_PlayerFog_m_hCtrl = 0x4048;
        constexpr uintptr_t m_vphysicsCollisionState = 0x3a38;
        constexpr uintptr_t m_hViewEntity = 0x3b30;
        constexpr uintptr_t m_bShouldDrawPlayerWhileUsingViewEntity = 0x3b34;
        constexpr uintptr_t m_flDuckAmount = 0x36f8;
        constexpr uintptr_t m_flDuckSpeed = 0x36fc;
        constexpr uintptr_t m_nWaterLevel = 0x296;
    }
    namespace CBaseFlex {
        constexpr uintptr_t m_flexWeight = 0x30f0;
        constexpr uintptr_t m_blinktoggle = 0x32b8;
        constexpr uintptr_t m_viewtarget = 0x309c;
    }
    namespace CBaseEntity {
        namespace AnimTimeMustBeFirst {
            constexpr uintptr_t m_flAnimTime = 0x298;
        }
        constexpr uintptr_t m_flSimulationTime = 0x2a0;
        constexpr uintptr_t m_cellbits = 0xac;
        constexpr uintptr_t m_cellX = 0xb4;
        constexpr uintptr_t m_cellY = 0xb8;
        constexpr uintptr_t m_cellZ = 0xbc;
        constexpr uintptr_t m_vecOrigin = 0x170;
        constexpr uintptr_t m_angRotation = 0x164;
        constexpr uintptr_t m_nModelIndex = 0x290;
        constexpr uintptr_t m_fEffects = 0x128;
        constexpr uintptr_t m_nRenderMode = 0x293;
        constexpr uintptr_t m_nRenderFX = 0x292;
        constexpr uintptr_t m_clrRender = 0xa8;
        constexpr uintptr_t m_iTeamNum = 0x12c;
        constexpr uintptr_t m_iPendingTeamNum = 0x130;
        constexpr uintptr_t m_CollisionGroup = 0x548;
        constexpr uintptr_t m_flElasticity = 0x354;
        constexpr uintptr_t m_flShadowCastDistance = 0x420;
        constexpr uintptr_t m_hOwnerEntity = 0x184;
        constexpr uintptr_t m_hEffectEntity = 0xf28;
        constexpr uintptr_t moveparent = 0x180;
        constexpr uintptr_t m_iParentAttachment = 0x340;
        constexpr uintptr_t m_iName = 0x18c;
        constexpr uintptr_t movetype = 0x0;
        constexpr uintptr_t movecollide = 0x0;
        constexpr uintptr_t m_Collision = 0x378;
        namespace CollisionProperty {
            constexpr uintptr_t m_vecMins = 0x10;
            constexpr uintptr_t m_vecMaxs = 0x1c;
            constexpr uintptr_t m_nSolidType = 0x2a;
            constexpr uintptr_t m_usSolidFlags = 0x28;
            constexpr uintptr_t m_nSurroundType = 0x32;
            constexpr uintptr_t m_triggerBloat = 0x2b;
            constexpr uintptr_t m_vecSpecifiedSurroundingMins = 0x34;
            constexpr uintptr_t m_vecSpecifiedSurroundingMaxs = 0x40;
        }
        constexpr uintptr_t m_iTextureFrameIndex = 0xf1c;
        constexpr uintptr_t m_bSimulatedEveryTick = 0xeca;
        constexpr uintptr_t m_bAnimatedEveryTick = 0xecb;
        constexpr uintptr_t m_bAlternateSorting = 0xecc;
        constexpr uintptr_t m_bSpotted = 0xecd;
        constexpr uintptr_t m_bSpottedBy = 0xece;
        constexpr uintptr_t m_bSpottedByMask = 0xf10;
        constexpr uintptr_t m_bIsAutoaimTarget = 0x90;
        constexpr uintptr_t m_fadeMinDist = 0x348;
        constexpr uintptr_t m_fadeMaxDist = 0x34c;
        constexpr uintptr_t m_flFadeScale = 0x350;
        constexpr uintptr_t m_nMinCPULevel = 0xf18;
        constexpr uintptr_t m_nMaxCPULevel = 0xf19;
        constexpr uintptr_t m_nMinGPULevel = 0xf1a;
        constexpr uintptr_t m_nMaxGPULevel = 0xf1b;
        constexpr uintptr_t m_flUseLookAtAngle = 0x318;
        constexpr uintptr_t m_flLastMadeNoiseTime = 0x40;
        constexpr uintptr_t m_flMaxFallVelocity = 0x114;
        constexpr uintptr_t m_bEligibleForScreenHighlight = 0xf49;
    }
    namespace CBaseDoor {
        constexpr uintptr_t m_flWaveHeight = 0xf94;
    }
    namespace CBaseCombatCharacter {
        namespace BCCLocalPlayerExclusive {
            constexpr uintptr_t m_flNextAttack = 0x34b8;
        }
        namespace BCCNonLocalPlayerExclusive {
            constexpr uintptr_t m_hMyWeapons = 0x3540;
        }
        constexpr uintptr_t m_LastHitGroup = 0x34bc;
        constexpr uintptr_t m_hActiveWeapon = 0x3640;
        constexpr uintptr_t m_flTimeOfLastInjury = 0x3644;
        constexpr uintptr_t m_nRelativeDirectionOfLastInjury = 0x3648;
        constexpr uintptr_t m_hMyWeapons = 0x3540;
        constexpr uintptr_t m_hMyWearables = 0x364c;
    }
    namespace CBaseAnimatingOverlay {
        namespace OverlayVars {
            namespace _ST_m_AnimOverlay_15 {
                namespace _LPT_m_AnimOverlay_15 {
                    constexpr uintptr_t lengthprop15 = 0x0;
                }
            }
        }
    }
    namespace CBoneFollower {
        constexpr uintptr_t m_modelIndex = 0xf68;
        constexpr uintptr_t m_solidIndex = 0xf6c;
    }
    namespace CBaseAnimating {
        constexpr uintptr_t m_nSequence = 0x2f00;
        constexpr uintptr_t m_nForceBone = 0x2c54;
        constexpr uintptr_t m_vecForce = 0x2c48;
        constexpr uintptr_t m_nSkin = 0xfd8;
        constexpr uintptr_t m_nBody = 0xfdc;
        constexpr uintptr_t m_nHitboxSet = 0xfa8;
        constexpr uintptr_t m_flModelScale = 0x2d48;
        constexpr uintptr_t m_flPoseParameter = 0x2d80;
        constexpr uintptr_t m_flPlaybackRate = 0xfd4;
        constexpr uintptr_t m_flEncodedController = 0x1010;
        constexpr uintptr_t m_bClientSideAnimation = 0x2ee0;
        constexpr uintptr_t m_bClientSideFrameReset = 0x2ca4;
        constexpr uintptr_t m_bClientSideRagdoll = 0x2b1;
        constexpr uintptr_t m_nNewSequenceParity = 0x1000;
        constexpr uintptr_t m_nResetEventsParity = 0x1004;
        constexpr uintptr_t m_nMuzzleFlashParity = 0x1020;
        constexpr uintptr_t m_hLightingOrigin = 0x2fd0;
        namespace ServerAnimationData {
            constexpr uintptr_t m_flCycle = 0xfd0;
        }
        constexpr uintptr_t m_flFrozen = 0x2ce8;
        constexpr uintptr_t m_ScaleType = 0x2d4c;
        constexpr uintptr_t m_bSuppressAnimSounds = 0x2fd6;
        constexpr uintptr_t m_nHighlightColorR = 0xff4;
        constexpr uintptr_t m_nHighlightColorG = 0xff8;
        constexpr uintptr_t m_nHighlightColorB = 0xffc;
    }
    namespace CAI_BaseNPC {
        constexpr uintptr_t m_lifeState = 0x297;
        constexpr uintptr_t m_bPerformAvoidance = 0x3668;
        constexpr uintptr_t m_bIsMoving = 0x3669;
        constexpr uintptr_t m_bFadeCorpse = 0x366a;
        constexpr uintptr_t m_iDeathPose = 0x3658;
        constexpr uintptr_t m_iDeathFrame = 0x365c;
        constexpr uintptr_t m_iSpeedModRadius = 0x3660;
        constexpr uintptr_t m_iSpeedModSpeed = 0x3664;
        constexpr uintptr_t m_bSpeedModActive = 0x366b;
        constexpr uintptr_t m_bImportanRagdoll = 0x366c;
        constexpr uintptr_t m_flTimePingEffect = 0x3654;
    }
    namespace CBeam {
        constexpr uintptr_t m_nBeamType = 0xf84;
        constexpr uintptr_t m_nBeamFlags = 0xf88;
        constexpr uintptr_t m_nNumBeamEnts = 0xf78;
        constexpr uintptr_t m_hAttachEntity = 0xf8c;
        constexpr uintptr_t m_nAttachIndex = 0xfb4;
        constexpr uintptr_t m_nHaloIndex = 0xf80;
        constexpr uintptr_t m_fHaloScale = 0xfe8;
        constexpr uintptr_t m_fWidth = 0xfdc;
        constexpr uintptr_t m_fEndWidth = 0xfe0;
        constexpr uintptr_t m_fFadeLength = 0xfe4;
        constexpr uintptr_t m_fAmplitude = 0xfec;
        constexpr uintptr_t m_fStartFrame = 0xff0;
        constexpr uintptr_t m_fSpeed = 0xff4;
        constexpr uintptr_t m_flFrameRate = 0xf68;
        constexpr uintptr_t m_flHDRColorScale = 0xf6c;
        constexpr uintptr_t m_clrRender = 0xa8;
        constexpr uintptr_t m_nRenderFX = 0x292;
        constexpr uintptr_t m_nRenderMode = 0x293;
        constexpr uintptr_t m_flFrame = 0xff8;
        constexpr uintptr_t m_nClipStyle = 0xffc;
        constexpr uintptr_t m_vecEndPos = 0x1000;
        constexpr uintptr_t m_nModelIndex = 0x290;
        constexpr uintptr_t m_vecOrigin = 0x170;
        constexpr uintptr_t moveparent = 0x180;
    }
    namespace CBaseViewModel {
        constexpr uintptr_t m_nModelIndex = 0x290;
        constexpr uintptr_t m_hWeapon = 0x3078;
        constexpr uintptr_t m_nSkin = 0xfd8;
        constexpr uintptr_t m_nBody = 0xfdc;
        constexpr uintptr_t m_nSequence = 0x2f00;
        constexpr uintptr_t m_nViewModelIndex = 0x3070;
        constexpr uintptr_t m_flPlaybackRate = 0xfd4;
        constexpr uintptr_t m_fEffects = 0x128;
        constexpr uintptr_t m_nAnimationParity = 0x3074;
        constexpr uintptr_t m_hOwner = 0x307c;
        constexpr uintptr_t m_nNewSequenceParity = 0x1000;
        constexpr uintptr_t m_nResetEventsParity = 0x1004;
        constexpr uintptr_t m_nMuzzleFlashParity = 0x1020;
        constexpr uintptr_t m_bShouldIgnoreOffsetAndAccuracy = 0x3034;
    }
    namespace CBaseGrenade {
        constexpr uintptr_t m_flDamage = 0x3038;
        constexpr uintptr_t m_DmgRadius = 0x3024;
        constexpr uintptr_t m_bIsLive = 0x3021;
        constexpr uintptr_t m_hThrower = 0x3048;
        constexpr uintptr_t m_vecVelocity = 0x14c;
        constexpr uintptr_t m_fFlags = 0x13c;
    }
    namespace CBaseCombatWeapon {
        namespace LocalWeaponData {
            constexpr uintptr_t m_iPrimaryAmmoType = 0x3ae4;
            constexpr uintptr_t m_iSecondaryAmmoType = 0x3ae8;
            constexpr uintptr_t m_nViewModelIndex = 0x3abc;
            constexpr uintptr_t m_bFlipViewModel = 0x3b50;
            constexpr uintptr_t m_iWeaponOrigin = 0x3b54;
            constexpr uintptr_t m_iWeaponModule = 0x3ad4;
        }
        namespace LocalActiveWeaponData {
            constexpr uintptr_t m_flNextPrimaryAttack = 0x3ac0;
            constexpr uintptr_t m_flNextSecondaryAttack = 0x3ac4;
            constexpr uintptr_t m_nNextThinkTick = 0x134;
            constexpr uintptr_t m_flTimeWeaponIdle = 0x3afc;
        }
        constexpr uintptr_t m_iViewModelIndex = 0x3ac8;
        constexpr uintptr_t m_iWorldModelIndex = 0x3acc;
        constexpr uintptr_t m_iWorldDroppedModelIndex = 0x3ad0;
        constexpr uintptr_t m_iState = 0x3ae0;
        constexpr uintptr_t m_hOwner = 0x3ab8;
        constexpr uintptr_t m_iClip1 = 0x3aec;
        constexpr uintptr_t m_iClip2 = 0x3af0;
        constexpr uintptr_t m_iPrimaryReserveAmmoCount = 0x3af4;
        constexpr uintptr_t m_iSecondaryReserveAmmoCount = 0x3af8;
        constexpr uintptr_t m_hWeaponWorldModel = 0x3adc;
        constexpr uintptr_t m_iNumEmptyAttacks = 0x3ad8;
    }
    namespace CBaseWeaponWorldModel {
        constexpr uintptr_t m_nModelIndex = 0x290;
        constexpr uintptr_t m_nBody = 0xfdc;
        constexpr uintptr_t m_fEffects = 0x128;
        constexpr uintptr_t moveparent = 0x180;
        constexpr uintptr_t m_hCombatWeaponParent = 0x309c;
    }
}