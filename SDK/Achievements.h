
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DBDSharedTypes
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags

/// Class /Script/Achievements.AchievementBase
/// Size: 0x0010 (0x000030 - 0x000040)
class UAchievementBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Class /Script/Achievements.AchievementHandler
/// Size: 0x0020 (0x000038 - 0x000058)
class UAchievementHandler : public UGameInstanceSubsystem
{ 
public:
	TArray<class UAchievementBase*>                    _achievements;                                              // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0048   (0x0010)  MISSED
};

/// Struct /Script/Achievements.GameEventSimpleAchievementInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FGameEventSimpleAchievementInfo
{ 
	TArray<FGameplayTag>                               gameEvents;                                                 // 0x0000   (0x0010)  
	TArray<FName>                                      profileStats;                                               // 0x0010   (0x0010)  
};

/// Struct /Script/Achievements.ScoreEventSimpleAchievementInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FScoreEventSimpleAchievementInfo
{ 
	TArray<EDBDScoreTypes>                             scoreTypes;                                                 // 0x0000   (0x0010)  
	TArray<FName>                                      profileStats;                                               // 0x0010   (0x0010)  
};

/// Struct /Script/Achievements.GameEventClassAchievementInfo
/// Size: 0x0008 (0x000000 - 0x000008)
struct FGameEventClassAchievementInfo
{ 
	class UClass*                                      achievement;                                                // 0x0000   (0x0008)  
};

/// Struct /Script/Achievements.CustomAchievementInfo
/// Size: 0x0008 (0x000000 - 0x000008)
struct FCustomAchievementInfo
{ 
	class UClass*                                      achievement;                                                // 0x0000   (0x0008)  
};

/// Class /Script/Achievements.AchievementsData
/// Size: 0x0040 (0x000038 - 0x000078)
class UAchievementsData : public UDataAsset
{ 
public:
	TArray<FGameEventSimpleAchievementInfo>            gameEventSimpleAchievements;                                // 0x0038   (0x0010)  
	TArray<FScoreEventSimpleAchievementInfo>           scoreEventSimpleAchievements;                               // 0x0048   (0x0010)  
	TArray<FGameEventClassAchievementInfo>             gameEventClassAchievements;                                 // 0x0058   (0x0010)  
	TArray<FCustomAchievementInfo>                     customEventClassAchievements;                               // 0x0068   (0x0010)  
};

/// Class /Script/Achievements.AchievementUtilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UAchievementUtilities : public UObject
{ 
public:
};

/// Class /Script/Achievements.OnGameEventAchievement
/// Size: 0x0040 (0x000040 - 0x000080)
class UOnGameEventAchievement : public UAchievementBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0040   (0x0020)  MISSED
	TArray<FGameplayTag>                               _gameEvents;                                                // 0x0060   (0x0010)  
	TArray<EDBDScoreTypes>                             _scoreTypes;                                                // 0x0070   (0x0010)  


	/// Functions
	// Function /Script/Achievements.OnGameEventAchievement.OnScoreTypeEvent
	// void OnScoreTypeEvent(EDBDScoreTypes scoreType, float Amount, class AActor* Instigator, class AActor* Target);        // [0x4d9d620] Native|Protected     
};

/// Class /Script/Achievements.AddNewPerkAchievement
/// Size: 0x0000 (0x000080 - 0x000080)
class UAddNewPerkAchievement : public UOnGameEventAchievement
{ 
public:
};

/// Class /Script/Achievements.AwardPipsAchievement
/// Size: 0x0000 (0x000080 - 0x000080)
class UAwardPipsAchievement : public UOnGameEventAchievement
{ 
public:
};

/// Class /Script/Achievements.CollectItemFromBasementChestAchievement
/// Size: 0x0008 (0x000080 - 0x000088)
class UCollectItemFromBasementChestAchievement : public UOnGameEventAchievement
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0080   (0x0008)  MISSED
};

/// Class /Script/Achievements.CooldownReactivationTypeAchievement
/// Size: 0x0010 (0x000080 - 0x000090)
class UCooldownReactivationTypeAchievement : public UOnGameEventAchievement
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0080   (0x0010)  MISSED
};

/// Class /Script/Achievements.EscapeTypeAchievement
/// Size: 0x0018 (0x000080 - 0x000098)
class UEscapeTypeAchievement : public UOnGameEventAchievement
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0080   (0x0018)  MISSED
};

/// Class /Script/Achievements.EscapeAsObsessionWithoutInjuryAchievement
/// Size: 0x0000 (0x000098 - 0x000098)
class UEscapeAsObsessionWithoutInjuryAchievement : public UEscapeTypeAchievement
{ 
public:
};

/// Class /Script/Achievements.ExitGateOpenedAchievement
/// Size: 0x0000 (0x000080 - 0x000080)
class UExitGateOpenedAchievement : public UOnGameEventAchievement
{ 
public:
};

/// Class /Script/Achievements.FinishGameWithCharacterPerksAchievement
/// Size: 0x0000 (0x000080 - 0x000080)
class UFinishGameWithCharacterPerksAchievement : public UOnGameEventAchievement
{ 
public:
};

/// Class /Script/Achievements.FinishGameWithMercilessVictoryAchievement
/// Size: 0x0000 (0x000080 - 0x000080)
class UFinishGameWithMercilessVictoryAchievement : public UOnGameEventAchievement
{ 
public:
};

/// Class /Script/Achievements.HealFromDyingAchievement
/// Size: 0x0000 (0x000080 - 0x000080)
class UHealFromDyingAchievement : public UOnGameEventAchievement
{ 
public:
};

/// Class /Script/Achievements.K26CrowDamagedSurvivorAchievement
/// Size: 0x0000 (0x000080 - 0x000080)
class UK26CrowDamagedSurvivorAchievement : public UOnGameEventAchievement
{ 
public:
};

/// Class /Script/Achievements.KillerDamagedSurvivorBaseAchievement
/// Size: 0x0000 (0x000080 - 0x000080)
class UKillerDamagedSurvivorBaseAchievement : public UOnGameEventAchievement
{ 
public:
};

/// Class /Script/Achievements.KillerDamagedSurvivorHoldingItemAchievement
/// Size: 0x0010 (0x000080 - 0x000090)
class UKillerDamagedSurvivorHoldingItemAchievement : public UKillerDamagedSurvivorBaseAchievement
{ 
public:
	FName                                              _statName;                                                  // 0x0080   (0x000C)  
	bool                                               _allowBaseItemsInCount;                                     // 0x008C   (0x0001)  
	bool                                               _allowSpecialItemsInCount;                                  // 0x008D   (0x0001)  
	bool                                               _allowCursedItemsInCount;                                   // 0x008E   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x008F   (0x0001)  MISSED
};

/// Class /Script/Achievements.KillerDamagedSurvivorWithHasteAchievement
/// Size: 0x0000 (0x000080 - 0x000080)
class UKillerDamagedSurvivorWithHasteAchievement : public UKillerDamagedSurvivorBaseAchievement
{ 
public:
};

/// Class /Script/Achievements.KillerDamagedSurvivorWithHinderedAchievement
/// Size: 0x0000 (0x000080 - 0x000080)
class UKillerDamagedSurvivorWithHinderedAchievement : public UKillerDamagedSurvivorBaseAchievement
{ 
public:
};

/// Class /Script/Achievements.KillerHitSurvivorDuringGuardHuntAchievement
/// Size: 0x0000 (0x000080 - 0x000080)
class UKillerHitSurvivorDuringGuardHuntAchievement : public UOnGameEventAchievement
{ 
public:
};

/// Class /Script/Achievements.KillerVaultDuringChaseAchievement
/// Size: 0x0000 (0x000080 - 0x000080)
class UKillerVaultDuringChaseAchievement : public UOnGameEventAchievement
{ 
public:
};

/// Class /Script/Achievements.KONextToRaisedPalletAchievement
/// Size: 0x0008 (0x000080 - 0x000088)
class UKONextToRaisedPalletAchievement : public UOnGameEventAchievement
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0080   (0x0008)  MISSED
};

/// Class /Script/Achievements.MaxBloodpointsAllCategoriesAchievement
/// Size: 0x0000 (0x000080 - 0x000080)
class UMaxBloodpointsAllCategoriesAchievement : public UOnGameEventAchievement
{ 
public:
};

/// Class /Script/Achievements.PickUpItemAchievement
/// Size: 0x0020 (0x000080 - 0x0000A0)
class UPickUpItemAchievement : public UOnGameEventAchievement
{ 
public:
	FName                                              _statName;                                                  // 0x0080   (0x000C)  
	bool                                               _triggerOnNormalItem;                                       // 0x008C   (0x0001)  
	bool                                               _triggerOnSpecialItem;                                      // 0x008D   (0x0001)  
	bool                                               _triggerOnCursedItem;                                       // 0x008E   (0x0001)  
	EPlayerRole                                        _targetPlayerRole;                                          // 0x008F   (0x0001)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0090   (0x0010)  MISSED
};

/// Class /Script/Achievements.ScoreCamperHealOtherAchievement
/// Size: 0x0000 (0x000080 - 0x000080)
class UScoreCamperHealOtherAchievement : public UOnGameEventAchievement
{ 
public:
};

/// Class /Script/Achievements.ScoreCamperSurviveAchievement
/// Size: 0x0000 (0x000098 - 0x000098)
class UScoreCamperSurviveAchievement : public UEscapeTypeAchievement
{ 
public:
};

/// Class /Script/Achievements.ScoreLevelUpAchievement
/// Size: 0x0000 (0x000080 - 0x000080)
class UScoreLevelUpAchievement : public UOnGameEventAchievement
{ 
public:
};

/// Class /Script/Achievements.ScoreSlasherDamageGeneratorKickAchievement
/// Size: 0x0000 (0x000080 - 0x000080)
class UScoreSlasherDamageGeneratorKickAchievement : public UOnGameEventAchievement
{ 
public:
};

/// Class /Script/Achievements.ScoreSlasherGunslingerSlashHarpoonedSurvivorAchievement
/// Size: 0x0000 (0x000080 - 0x000080)
class UScoreSlasherGunslingerSlashHarpoonedSurvivorAchievement : public UOnGameEventAchievement
{ 
public:
};

/// Class /Script/Achievements.ScoreSlasherHookCamper
/// Size: 0x0000 (0x000080 - 0x000080)
class UScoreSlasherHookCamper : public UOnGameEventAchievement
{ 
public:
};

/// Class /Script/Achievements.ScoreSlasherKillAchievement
/// Size: 0x0000 (0x000080 - 0x000080)
class UScoreSlasherKillAchievement : public UOnGameEventAchievement
{ 
public:
};

/// Class /Script/Achievements.ScoreSlasherPowerK24HitSurvivor
/// Size: 0x0000 (0x000080 - 0x000080)
class UScoreSlasherPowerK24HitSurvivor : public UOnGameEventAchievement
{ 
public:
};

/// Class /Script/Achievements.ScoreSlasherSacrificeSuccess
/// Size: 0x0000 (0x000080 - 0x000080)
class UScoreSlasherSacrificeSuccess : public UOnGameEventAchievement
{ 
public:
};

/// Class /Script/Achievements.SlasherHookCamperInBasement
/// Size: 0x0000 (0x000080 - 0x000080)
class USlasherHookCamperInBasement : public UOnGameEventAchievement
{ 
public:
};

/// Class /Script/Achievements.StartGameAchievement
/// Size: 0x0000 (0x000080 - 0x000080)
class UStartGameAchievement : public UOnGameEventAchievement
{ 
public:
};

/// Class /Script/Achievements.SurvivorIncreaseOthersMovementSpeedWithCooldown
/// Size: 0x0000 (0x000090 - 0x000090)
class USurvivorIncreaseOthersMovementSpeedWithCooldown : public UCooldownReactivationTypeAchievement
{ 
public:
};

/// Class /Script/Achievements.SurvivorRevealedKillerAuraAchievement
/// Size: 0x0058 (0x000040 - 0x000098)
class USurvivorRevealedKillerAuraAchievement : public UAchievementBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0040   (0x0004)  MISSED
	FGameplayTag                                       _survivorFlagTag;                                           // 0x0044   (0x000C)  
	FGameplayTag                                       _killerFlagTag;                                             // 0x0050   (0x000C)  
	FGameplayTag                                       _modifierTag;                                               // 0x005C   (0x000C)  
	FGameplayTagContainer                              _dontAwardIfKillerHasTags;                                  // 0x0068   (0x0020)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0088   (0x0010)  MISSED


	/// Functions
	// Function /Script/Achievements.SurvivorRevealedKillerAuraAchievement.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x4d9d600] Final|Native|Public  
	// Function /Script/Achievements.SurvivorRevealedKillerAuraAchievement.Local_OnRevealKillerAura
	// void Local_OnRevealKillerAura();                                                                                      // [0x4d9d5e0] Final|Native|Public  
};

/// Class /Script/Achievements.TotalPlaytimeAchievement
/// Size: 0x0000 (0x000040 - 0x000040)
class UTotalPlaytimeAchievement : public UAchievementBase
{ 
public:
};

