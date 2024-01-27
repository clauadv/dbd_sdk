
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: BHVRAnalytics
/// dependency: CoreUObject
/// dependency: DBDSharedTypes
/// dependency: DeadByDaylight
/// dependency: Engine

/// Enum /Script/DBDAnalytics.EDBDAnalyticsGameMode
/// Size: 0x09
enum class EDBDAnalyticsGameMode : uint8_t
{
	EDBDAnalyticsGameMode__AnalyticsServer                                           = 0,
	EDBDAnalyticsGameMode__AnalyticsClient                                           = 1,
	EDBDAnalyticsGameMode__AnalyticsLoading                                          = 2,
	EDBDAnalyticsGameMode__AnalyticsLobby                                            = 3,
	EDBDAnalyticsGameMode__AnalyticsMenu                                             = 4,
	EDBDAnalyticsGameMode__AnalyticsPostGame                                         = 5,
	EDBDAnalyticsGameMode__AnalyticsPerfTests                                        = 6,
	EDBDAnalyticsGameMode__AnalyticsSplashScreen                                     = 7,
	EDBDAnalyticsGameMode__EDBDAnalyticsGameMode_MAX                                 = 8
};

/// Enum /Script/DBDAnalytics.ECharacterStatus
/// Size: 0x11
enum class ECharacterStatus : uint8_t
{
	ECharacterStatus__Crawling                                                       = 0,
	ECharacterStatus__BeingPickedUp                                                  = 1,
	ECharacterStatus__BeingCarried                                                   = 2,
	ECharacterStatus__BeingHealed                                                    = 3,
	ECharacterStatus__BeingMended                                                    = 4,
	ECharacterStatus__BeingPutDown                                                   = 5,
	ECharacterStatus__BeingPutOnHook                                                 = 6,
	ECharacterStatus__BeingPulledFromCloset                                          = 7,
	ECharacterStatus__BeingKilled                                                    = 8,
	ECharacterStatus__OnHook                                                         = 9,
	ECharacterStatus__ECharacterStatus_MAX                                           = 10
};

/// Enum /Script/DBDAnalytics.EHealthStatus
/// Size: 0x05
enum class EHealthStatus : uint8_t
{
	EHealthStatus__Healthy                                                           = 0,
	EHealthStatus__Wounded                                                           = 1,
	EHealthStatus__DeepWounded                                                       = 2,
	EHealthStatus__Dying                                                             = 3,
	EHealthStatus__EHealthStatus_MAX                                                 = 4
};

/// Enum /Script/DBDAnalytics.EDoorStatus
/// Size: 0x04
enum class EDoorStatus : uint8_t
{
	EDoorStatus__Closed                                                              = 0,
	EDoorStatus__Powered                                                             = 1,
	EDoorStatus__Open                                                                = 2,
	EDoorStatus__EDoorStatus_MAX                                                     = 3
};

/// Enum /Script/DBDAnalytics.EHatchStatus
/// Size: 0x06
enum class EHatchStatus : uint8_t
{
	EHatchStatus__Hidden                                                             = 0,
	EHatchStatus__Visible                                                            = 1,
	EHatchStatus__Open                                                               = 2,
	EHatchStatus__Closed                                                             = 3,
	EHatchStatus__ClosedOrHidden                                                     = 4,
	EHatchStatus__EHatchStatus_MAX                                                   = 5
};

/// Class /Script/DBDAnalytics.AnalyticsDelegates
/// Size: 0x0000 (0x000038 - 0x000038)
class UAnalyticsDelegates : public UGameInstanceSubsystem
{ 
public:
};

/// Class /Script/DBDAnalytics.AnalyticsFunctionLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnalyticsFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DBDAnalytics.AnalyticsFunctionLibrary.IncrementHookSpawned
	// void IncrementHookSpawned();                                                                                          // [0x4e8d6d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/DBDAnalytics.AnalyticsManager
/// Size: 0x35F8 (0x000038 - 0x003630)
class UAnalyticsManager : public UAbstractAnalyticsManager
{ 
public:
	unsigned char                                      UnknownData00_1[0x35F8];                                    // 0x0038   (0x35F8)  MISSED
};

/// Class /Script/DBDAnalytics.ClosetAnalytics
/// Size: 0x0000 (0x000030 - 0x000030)
class UClosetAnalytics : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DBDAnalytics.ClosetAnalytics.RecordClosetSearchSuccess
	// void RecordClosetSearchSuccess(class ASlasherPlayer* killer);                                                         // [0x4e8d770] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DBDAnalytics.ClosetAnalytics.RecordClosetSearchFail
	// void RecordClosetSearchFail(class ASlasherPlayer* killer);                                                            // [0x4e8d6f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DBDAnalytics.ClosetAnalytics.IncrementClosetEnter
	// void IncrementClosetEnter(class ACamperPlayer* Survivor);                                                             // [0x4e8d650] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/DBDAnalytics.DBDAnalytics
/// Size: 0x0000 (0x000030 - 0x000030)
class UDBDAnalytics : public UBHVRAnalytics
{ 
public:


	/// Functions
	// Function /Script/DBDAnalytics.DBDAnalytics.RecordGameProgress
	// void RecordGameProgress(FString InProgressType);                                                                      // [0x4e8d7f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/DBDAnalytics.EmblemAnalyticsComponent
/// Size: 0x0108 (0x0000B8 - 0x0001C0)
class UEmblemAnalyticsComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x108];                                     // 0x00B8   (0x0108)  MISSED
};

/// Class /Script/DBDAnalytics.InteractionAnalyticsComponent
/// Size: 0x00D8 (0x0000B8 - 0x000190)
class UInteractionAnalyticsComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0xD8];                                      // 0x00B8   (0x00D8)  MISSED
};

/// Class /Script/DBDAnalytics.PerkAnalyticsLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UPerkAnalyticsLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DBDAnalytics.PerkAnalyticsLibrary.SendTinkererUndetectableInterruptAnalytics
	// void SendTinkererUndetectableInterruptAnalytics(class ADBDPlayer* interruptedPlayer, class ADBDPlayer* Slasher);      // [0x4e9b820] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DBDAnalytics.PerkAnalyticsLibrary.SendTinkererUndetectableHitNearGeneratorAnalytics
	// void SendTinkererUndetectableHitNearGeneratorAnalytics(class ADBDPlayer* hitPlayer, class ADBDPlayer* Slasher);       // [0x4e9b760] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DBDAnalytics.PerkAnalyticsLibrary.SendLightbornAuraRevealedAnalytics
	// void SendLightbornAuraRevealedAnalytics(class ADBDPlayer* revealedPlayer, class ADBDPlayer* Slasher);                 // [0x4e9b6a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DBDAnalytics.PerkAnalyticsLibrary.SendKnockoutSurvivorFoundAnalytics
	// void SendKnockoutSurvivorFoundAnalytics(class ADBDPlayer* findingSurvivor, class ADBDPlayer* foundSurvivor);          // [0x4e9b5e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DBDAnalytics.PerkAnalyticsLibrary.SendFranklinsHitSurvivorNearDroppedItemAnalytics
	// void SendFranklinsHitSurvivorNearDroppedItemAnalytics(class ADBDPlayer* hitSurvivor, class ADBDPlayer* Slasher);      // [0x4e9b520] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DBDAnalytics.PerkAnalyticsLibrary.SendFranklinsConsumeItemAnalytics
	// void SendFranklinsConsumeItemAnalytics(class ADBDPlayer* previousOwner);                                              // [0x4e9b4a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/DBDAnalytics.PigAnalytics
/// Size: 0x0000 (0x000030 - 0x000030)
class UPigAnalytics : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DBDAnalytics.PigAnalytics.RecordRBTSearch
	// void RecordRBTSearch(class ACamperPlayer* searchingPlayer, bool success);                                             // [0x4e9b3e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DBDAnalytics.PigAnalytics.OnRBTAttached_Analytics
	// void OnRBTAttached_Analytics(class ASlasherPlayer* attacher, class ACamperPlayer* attachee);                          // [0x4e9b320] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DBDAnalytics.PigAnalytics.IncrementRBTTimerActived
	// void IncrementRBTTimerActived(class ACamperPlayer* attachedPlayer);                                                   // [0x4e9b2a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DBDAnalytics.PigAnalytics.IncrementRBTKilledCount
	// void IncrementRBTKilledCount(class ACamperPlayer* playerKilled, bool killedByExecutionZone);                          // [0x4e9b1e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/DBDAnalytics.PlayerHookAnalyticsComponent
/// Size: 0x0348 (0x0000B8 - 0x000400)
class UPlayerHookAnalyticsComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x348];                                     // 0x00B8   (0x0348)  MISSED
};

/// Class /Script/DBDAnalytics.PulldownAnalytics
/// Size: 0x0000 (0x000030 - 0x000030)
class UPulldownAnalytics : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DBDAnalytics.PulldownAnalytics.IncrementPalletStun
	// void IncrementPalletStun(class ACamperPlayer* Survivor);                                                              // [0x4e9b160] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DBDAnalytics.PulldownAnalytics.IncrementPalletSpawned
	// void IncrementPalletSpawned(class AActor* Actor);                                                                     // [0x4e9b0e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DBDAnalytics.PulldownAnalytics.IncrementPalletDrop
	// void IncrementPalletDrop(class ACamperPlayer* Survivor);                                                              // [0x4e9b060] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DBDAnalytics.PulldownAnalytics.IncrementPalletDestroy
	// void IncrementPalletDestroy(class ASlasherPlayer* killer);                                                            // [0x4e9afe0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/DBDAnalytics.SurvivorAnalyticsComponent
/// Size: 0x00B0 (0x0000B8 - 0x000168)
class USurvivorAnalyticsComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0xB0];                                      // 0x00B8   (0x00B0)  MISSED
};

/// Class /Script/DBDAnalytics.SurvivorInteractionAnalytics
/// Size: 0x0000 (0x000030 - 0x000030)
class USurvivorInteractionAnalytics : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DBDAnalytics.SurvivorInteractionAnalytics.RecordHealSuccess
	// void RecordHealSuccess(class ACamperPlayer* Survivor);                                                                // [0x4e9edc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DBDAnalytics.SurvivorInteractionAnalytics.RecordHatchEscape
	// void RecordHatchEscape(class ACamperPlayer* Survivor);                                                                // [0x4e9ed40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DBDAnalytics.SurvivorInteractionAnalytics.IncrementHealCount
	// void IncrementHealCount(class ACamperPlayer* Survivor);                                                               // [0x4e9ecc0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/DBDAnalytics.UniquelyIdentifiedAnalytic
/// Size: 0x00A0 (0x000018 - 0x0000B8)
struct FUniquelyIdentifiedAnalytic : FBaseSingleStructIndexAnalytics
{ 
	SDK_UNDEFINED(16,3645) /* FString */               __um(Version);                                              // 0x0018   (0x0010)  
	SDK_UNDEFINED(16,3646) /* FString */               __um(Branch);                                               // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,3647) /* FString */               __um(Changelist);                                           // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,3648) /* FString */               __um(Configuration);                                        // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,3649) /* FString */               __um(MirrorsId);                                            // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,3650) /* FString */               __um(ClientId);                                             // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,3651) /* FString */               __um(platform);                                             // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,3652) /* FString */               __um(BackendEnv);                                           // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,3653) /* FString */               __um(DataContentVersion);                                   // 0x0098   (0x0010)  
	SDK_UNDEFINED(16,3654) /* FString */               __um(RunContext);                                           // 0x00A8   (0x0010)  
};

/// Struct /Script/DBDAnalytics.ArchiveNewTomePopupAnalytics
/// Size: 0x0028 (0x0000B8 - 0x0000E0)
struct FArchiveNewTomePopupAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3655) /* FString */               __um(ArchiveId);                                            // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3656) /* FString */               __um(ButtonId);                                             // 0x00C8   (0x0010)  
	bool                                               WasVideoWatchUntilEnd;                                      // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00D9   (0x0007)  MISSED
};

/// Struct /Script/DBDAnalytics.ArchiveVignetteVideoAnalytics
/// Size: 0x0050 (0x0000B8 - 0x000108)
struct FArchiveVignetteVideoAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3657) /* FString */               __um(ArchiveId);                                            // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3658) /* FString */               __um(VignetteId);                                           // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,3659) /* FString */               __um(VideoId);                                              // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,3660) /* FString */               __um(StartVideoTimestamp);                                  // 0x00E8   (0x0010)  
	double                                             VideoTimeSpent;                                             // 0x00F8   (0x0008)  
	bool                                               WasVideoWatchUntilEnd;                                      // 0x0100   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0101   (0x0007)  MISSED
};

/// Struct /Script/DBDAnalytics.ArchiveVignetteEntryAnalytics
/// Size: 0x0060 (0x0000B8 - 0x000118)
struct FArchiveVignetteEntryAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3661) /* FString */               __um(ArchiveId);                                            // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3662) /* FString */               __um(VignetteId);                                           // 0x00C8   (0x0010)  
	int32_t                                            EntryId;                                                    // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00DC   (0x0004)  MISSED
	SDK_UNDEFINED(16,3663) /* FString */               __um(SelectEntryTimestamp);                                 // 0x00E0   (0x0010)  
	double                                             EntryTimeSpent;                                             // 0x00F0   (0x0008)  
	bool                                               IsTaggedAsNew;                                              // 0x00F8   (0x0001)  
	bool                                               HasVoiceOver;                                               // 0x00F9   (0x0001)  
	bool                                               StartWithAutoplayEnable;                                    // 0x00FA   (0x0001)  
	bool                                               IsAutoplayEnableWhenDeselectingEntry;                       // 0x00FB   (0x0001)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00FC   (0x0004)  MISSED
	SDK_UNDEFINED(16,3664) /* FString */               __um(StartVoiceoverTimestamp);                              // 0x0100   (0x0010)  
	double                                             VoiceoverLongestTimeSpent;                                  // 0x0110   (0x0008)  
};

/// Struct /Script/DBDAnalytics.BotReplacementAnalytics
/// Size: 0x0050 (0x0000B8 - 0x000108)
struct FBotReplacementAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3665) /* FString */               __um(MatchID);                                              // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3666) /* FString */               __um(KrakenMatchId);                                        // 0x00C8   (0x0010)  
	EPlayerRole                                        Role;                                                       // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00D9   (0x0003)  MISSED
	float                                              MatchTime;                                                  // 0x00DC   (0x0004)  
	SDK_UNDEFINED(16,3667) /* FString */               __um(characterName);                                        // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,3668) /* FString */               __um(ReplacedCharacterMirrorsId);                           // 0x00F0   (0x0010)  
	EAIDifficultyLevel                                 BotDifficultyLevel;                                         // 0x0100   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0101   (0x0007)  MISSED
};

/// Struct /Script/DBDAnalytics.Gameplay_ChaseAnalytics
/// Size: 0x00E0 (0x0000B8 - 0x000198)
struct FGameplay_ChaseAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3669) /* FString */               __um(MatchID);                                              // 0x00B8   (0x0010)  
	bool                                               IsABot;                                                     // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00C9   (0x0007)  MISSED
	SDK_UNDEFINED(16,3670) /* FString */               __um(MirrorsIdSurvivor);                                    // 0x00D0   (0x0010)  
	float                                              CoordXStartKiller;                                          // 0x00E0   (0x0004)  
	float                                              CoordYStartKiller;                                          // 0x00E4   (0x0004)  
	float                                              CoordZStartKiller;                                          // 0x00E8   (0x0004)  
	float                                              CoordXEndKiller;                                            // 0x00EC   (0x0004)  
	float                                              CoordYEndKiller;                                            // 0x00F0   (0x0004)  
	float                                              CoordZEndKiller;                                            // 0x00F4   (0x0004)  
	int32_t                                            PalletsDestroyedByKiller;                                   // 0x00F8   (0x0004)  
	int32_t                                            WindowsVaultedByKiller;                                     // 0x00FC   (0x0004)  
	int32_t                                            PalletsVaultedByKiller;                                     // 0x0100   (0x0004)  
	int32_t                                            BasicAttackSwingsByKiller;                                  // 0x0104   (0x0004)  
	int32_t                                            BasicAttackHitsByKiller;                                    // 0x0108   (0x0004)  
	int32_t                                            SpecialAttackAttemptsByKiller;                              // 0x010C   (0x0004)  
	int32_t                                            SpecialAttackHitsByKiller;                                  // 0x0110   (0x0004)  
	float                                              DistanceCoveredKiller;                                      // 0x0114   (0x0004)  
	float                                              CoordXStartSurvivor;                                        // 0x0118   (0x0004)  
	float                                              CoordYStartSurvivor;                                        // 0x011C   (0x0004)  
	float                                              CoordZStartSurvivor;                                        // 0x0120   (0x0004)  
	float                                              CoordXEndSurvivor;                                          // 0x0124   (0x0004)  
	float                                              CoordYEndSurvivor;                                          // 0x0128   (0x0004)  
	float                                              CoordZEndSurvivor;                                          // 0x012C   (0x0004)  
	int32_t                                            PalletsDroppedBySurvivor;                                   // 0x0130   (0x0004)  
	int32_t                                            PalletsStunnedBySurvivor;                                   // 0x0134   (0x0004)  
	int32_t                                            WindowsVaultedBySurvivor;                                   // 0x0138   (0x0004)  
	int32_t                                            PalletsVaultedBySurvivor;                                   // 0x013C   (0x0004)  
	int32_t                                            StartingHealthOfSurvivor;                                   // 0x0140   (0x0004)  
	int32_t                                            EndingHealthOfSurvivor;                                     // 0x0144   (0x0004)  
	int32_t                                            AmountHealedOfSurvivor;                                     // 0x0148   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x014C   (0x0004)  MISSED
	SDK_UNDEFINED(16,3671) /* FString */               __um(StartingTileSurvivor);                                 // 0x0150   (0x0010)  
	SDK_UNDEFINED(16,3672) /* FString */               __um(EndingTileSurvivor);                                   // 0x0160   (0x0010)  
	int32_t                                            AmountOfTilesVisitedSurvivor;                               // 0x0170   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0174   (0x0004)  MISSED
	SDK_UNDEFINED(16,3673) /* TArray<FString> */       __um(TilesVisitedSurvivor);                                 // 0x0178   (0x0010)  
	float                                              DistanceCoveredSurvivor;                                    // 0x0188   (0x0004)  
	float                                              DisplacementSurvivor;                                       // 0x018C   (0x0004)  
	float                                              ChaseStartTimeInSecond;                                     // 0x0190   (0x0004)  
	float                                              ChaseEndTimeInSecond;                                       // 0x0194   (0x0004)  
};

/// Struct /Script/DBDAnalytics.ChatAnalytics
/// Size: 0x0070 (0x0000B8 - 0x000128)
struct FChatAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3674) /* FString */               __um(SenderMirrorsId);                                      // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3675) /* FString */               __um(SenderPlayerName);                                     // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,3676) /* FString */               __um(MatchID);                                              // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,3677) /* FString */               __um(ChatContent);                                          // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,3678) /* FString */               __um(OriginalChatContent);                                  // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,3679) /* FString */               __um(ChatContext);                                          // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,3680) /* FString */               __um(InGameTimestamp);                                      // 0x0118   (0x0010)  
};

/// Struct /Script/DBDAnalytics.BaseCheatAnalytics
/// Size: 0x0088 (0x0000B8 - 0x000140)
struct FBaseCheatAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3681) /* FString */               __um(Location);                                             // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3682) /* FString */               __um(NetMode);                                              // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,3683) /* FString */               __um(requester);                                            // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,3684) /* FString */               __um(RequesterPlatform);                                    // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,3685) /* FString */               __um(RequesterRole);                                        // 0x00F8   (0x0010)  
	int32_t                                            RequesterCharacterId;                                       // 0x0108   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x010C   (0x0004)  MISSED
	SDK_UNDEFINED(16,3686) /* FString */               __um(RequesterCharacterName);                               // 0x0110   (0x0010)  
	SDK_UNDEFINED(16,3687) /* FString */               __um(MatchID);                                              // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,3688) /* FString */               __um(MatchType);                                            // 0x0130   (0x0010)  
};

/// Struct /Script/DBDAnalytics.SuspiciousBehaviourAnalytics
/// Size: 0x0050 (0x000140 - 0x000190)
struct FSuspiciousBehaviourAnalytics : FBaseCheatAnalytics
{ 
	SDK_UNDEFINED(16,3689) /* FString */               __um(Type);                                                 // 0x0140   (0x0010)  
	SDK_UNDEFINED(16,3690) /* FString */               __um(ExtraField1String);                                    // 0x0150   (0x0010)  
	int64_t                                            ExtraField1Integer;                                         // 0x0160   (0x0008)  
	double                                             ExtraField1Floating;                                        // 0x0168   (0x0008)  
	SDK_UNDEFINED(16,3691) /* FString */               __um(ExtraField2String);                                    // 0x0170   (0x0010)  
	int64_t                                            ExtraField2Integer;                                         // 0x0180   (0x0008)  
	double                                             ExtraField2Floating;                                        // 0x0188   (0x0008)  
};

/// Struct /Script/DBDAnalytics.ExecExecutedAnalytics
/// Size: 0x0018 (0x000140 - 0x000158)
struct FExecExecutedAnalytics : FBaseCheatAnalytics
{ 
	SDK_UNDEFINED(16,3692) /* FString */               __um(Command);                                              // 0x0140   (0x0010)  
	bool                                               Executed;                                                   // 0x0150   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0151   (0x0007)  MISSED
};

/// Struct /Script/DBDAnalytics.CheatExecutedAnalytics
/// Size: 0x0028 (0x000140 - 0x000168)
struct FCheatExecutedAnalytics : FBaseCheatAnalytics
{ 
	SDK_UNDEFINED(16,3693) /* FString */               __um(Command);                                              // 0x0140   (0x0010)  
	SDK_UNDEFINED(16,3694) /* FString */               __um(Type);                                                 // 0x0150   (0x0010)  
	bool                                               Successful;                                                 // 0x0160   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0161   (0x0007)  MISSED
};

/// Struct /Script/DBDAnalytics.CheatValidatedAnalytics
/// Size: 0x0028 (0x000140 - 0x000168)
struct FCheatValidatedAnalytics : FBaseCheatAnalytics
{ 
	SDK_UNDEFINED(16,3695) /* FString */               __um(Command);                                              // 0x0140   (0x0010)  
	SDK_UNDEFINED(16,3696) /* FString */               __um(Type);                                                 // 0x0150   (0x0010)  
	bool                                               Validated;                                                  // 0x0160   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0161   (0x0007)  MISSED
};

/// Struct /Script/DBDAnalytics.ClientConnectionBaseAnalytics
/// Size: 0x00A0 (0x0000B8 - 0x000158)
struct FClientConnectionBaseAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3697) /* FString */               __um(ClientRole);                                           // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3698) /* FString */               __um(ClientSurvivorIndex);                                  // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,3699) /* FString */               __um(ClientKillerIndex);                                    // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,3700) /* FString */               __um(ClientPlatformAccountId);                              // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,3701) /* FString */               __um(ClientMirrorsId);                                      // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,3702) /* FString */               __um(ClientPlatform);                                       // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,3703) /* FString */               __um(ClientProvider);                                       // 0x0118   (0x0010)  
	SDK_UNDEFINED(16,3704) /* FString */               __um(ClientName);                                           // 0x0128   (0x0010)  
	SDK_UNDEFINED(16,3705) /* FString */               __um(MatchID);                                              // 0x0138   (0x0010)  
	SDK_UNDEFINED(16,3706) /* FString */               __um(GameType);                                             // 0x0148   (0x0010)  
};

/// Struct /Script/DBDAnalytics.ClientLogoutAnalytics
/// Size: 0x0020 (0x000158 - 0x000178)
struct FClientLogoutAnalytics : FClientConnectionBaseAnalytics
{ 
	SDK_UNDEFINED(16,3707) /* FString */               __um(GameState);                                            // 0x0158   (0x0010)  
	SDK_UNDEFINED(16,3708) /* FString */               __um(GameFlowStep);                                         // 0x0168   (0x0010)  
};

/// Struct /Script/DBDAnalytics.ClientLoginAnalytics
/// Size: 0x0040 (0x000158 - 0x000198)
struct FClientLoginAnalytics : FClientConnectionBaseAnalytics
{ 
	SDK_UNDEFINED(16,3709) /* FString */               __um(ClientOptions);                                        // 0x0158   (0x0010)  
	SDK_UNDEFINED(16,3710) /* FString */               __um(ClientMatchId);                                        // 0x0168   (0x0010)  
	SDK_UNDEFINED(16,3711) /* FString */               __um(ClientGameType);                                       // 0x0178   (0x0010)  
	SDK_UNDEFINED(16,3712) /* FString */               __um(LoginResult);                                          // 0x0188   (0x0010)  
};

/// Struct /Script/DBDAnalytics.CrossfriendsAnalytics
/// Size: 0x0020 (0x0000B8 - 0x0000D8)
struct FCrossfriendsAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3713) /* FString */               __um(Action);                                               // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3714) /* FString */               __um(TargetKrakenUserId);                                   // 0x00C8   (0x0010)  
};

/// Struct /Script/DBDAnalytics.CurrencyBalanceAnalytics
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
struct FCurrencyBalanceAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3715) /* FString */               __um(CurrencyName);                                         // 0x00B8   (0x0010)  
	int32_t                                            CurrencyBalance;                                            // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Struct /Script/DBDAnalytics.CustomerSupportClientLoginAnalytics
/// Size: 0x0020 (0x0000B8 - 0x0000D8)
struct FCustomerSupportClientLoginAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3716) /* FString */               __um(playerName);                                           // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3717) /* FString */               __um(Provider);                                             // 0x00C8   (0x0010)  
};

/// Struct /Script/DBDAnalytics.CustomerSupportAnalytics
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
struct FCustomerSupportAnalytics : FUniquelyIdentifiedAnalytic
{ 
};

/// Struct /Script/DBDAnalytics.CustomizationBaseAnalytics
/// Size: 0x0068 (0x0000B8 - 0x000120)
struct FCustomizationBaseAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3718) /* FString */               __um(CustomizationSlot1);                                   // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3719) /* FString */               __um(CustomizationSlot2);                                   // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,3720) /* FString */               __um(CustomizationSlot3);                                   // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,3721) /* FString */               __um(Charm1);                                               // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,3722) /* FString */               __um(Charm2);                                               // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,3723) /* FString */               __um(Charm3);                                               // 0x0108   (0x0010)  
	EPlayerRole                                        Role;                                                       // 0x0118   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0119   (0x0007)  MISSED
};

/// Struct /Script/DBDAnalytics.CustomizationLobbyAnalytics
/// Size: 0x0010 (0x000120 - 0x000130)
struct FCustomizationLobbyAnalytics : FCustomizationBaseAnalytics
{ 
	SDK_UNDEFINED(16,3724) /* FString */               __um(LobbyId);                                              // 0x0120   (0x0010)  
};

/// Struct /Script/DBDAnalytics.CustomizationAnalytics
/// Size: 0x0010 (0x000120 - 0x000130)
struct FCustomizationAnalytics : FCustomizationBaseAnalytics
{ 
	SDK_UNDEFINED(16,3725) /* FString */               __um(MatchID);                                              // 0x0120   (0x0010)  
};

/// Struct /Script/DBDAnalytics.DailyRitualAnalytics
/// Size: 0x0038 (0x0000B8 - 0x0000F0)
struct FDailyRitualAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3726) /* FString */               __um(Status);                                               // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3727) /* FString */               __um(ritualId);                                             // 0x00C8   (0x0010)  
	float                                              HoursElapsed;                                               // 0x00D8   (0x0004)  
	int32_t                                            Progress;                                                   // 0x00DC   (0x0004)  
	int32_t                                            Threshold;                                                  // 0x00E0   (0x0004)  
	int32_t                                            PendingRituals;                                             // 0x00E4   (0x0004)  
	int32_t                                            SpecificCharacter;                                          // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00EC   (0x0004)  MISSED
};

/// Struct /Script/DBDAnalytics.DDoSDetectionAnalytics
/// Size: 0x0038 (0x0000B8 - 0x0000F0)
struct FDDoSDetectionAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3728) /* FString */               __um(Severity);                                             // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3729) /* FString */               __um(MatchID);                                              // 0x00C8   (0x0010)  
	int32_t                                            NonConnPacketCounter;                                       // 0x00D8   (0x0004)  
	int32_t                                            NetConnPacketCounter;                                       // 0x00DC   (0x0004)  
	int32_t                                            DisconnPacketCounter;                                       // 0x00E0   (0x0004)  
	int32_t                                            BadPacketCounter;                                           // 0x00E4   (0x0004)  
	int32_t                                            ErrorPacketCounter;                                         // 0x00E8   (0x0004)  
	int32_t                                            DroppedPacketCounter;                                       // 0x00EC   (0x0004)  
};

/// Struct /Script/DBDAnalytics.DedicatedServerStatusAnalytics
/// Size: 0x0098 (0x0000B8 - 0x000150)
struct FDedicatedServerStatusAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3730) /* FString */               __um(DSSessionProvider);                                    // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3731) /* FString */               __um(ServerStatus);                                         // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,3732) /* FString */               __um(GameLiftSessionId);                                    // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,3733) /* FString */               __um(MatchID);                                              // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,3734) /* FString */               __um(SessionEndReason);                                     // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,3735) /* FString */               __um(FleetId);                                              // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,3736) /* FString */               __um(IpAddress);                                            // 0x0118   (0x0010)  
	int32_t                                            Port;                                                       // 0x0128   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x012C   (0x0004)  MISSED
	SDK_UNDEFINED(16,3737) /* FString */               __um(DnsName);                                              // 0x0130   (0x0010)  
	SDK_UNDEFINED(16,3738) /* FString */               __um(Region);                                               // 0x0140   (0x0010)  
};

/// Struct /Script/DBDAnalytics.DetailedHitAnalytics
/// Size: 0x0098 (0x0000B8 - 0x000150)
struct FDetailedHitAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3739) /* FString */               __um(MatchID);                                              // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3740) /* FString */               __um(InstigatorMirrorsId);                                  // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,3741) /* FString */               __um(TargetMirrorsId);                                      // 0x00D8   (0x0010)  
	float                                              Ping;                                                       // 0x00E8   (0x0004)  
	float                                              HitTimestamp;                                               // 0x00EC   (0x0004)  
	bool                                               IsValidHit;                                                 // 0x00F0   (0x0001)  
	bool                                               IsValidDistance;                                            // 0x00F1   (0x0001)  
	bool                                               IsValidCollision;                                           // 0x00F2   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x00F3   (0x0001)  MISSED
	float                                              RecorderCacheTimespan;                                      // 0x00F4   (0x0004)  
	float                                              MaximumDistance;                                            // 0x00F8   (0x0004)  
	float                                              CapsuleInflation;                                           // 0x00FC   (0x0004)  
	SDK_UNDEFINED(16,3742) /* FString */               __um(InstigatorName);                                       // 0x0100   (0x0010)  
	SDK_UNDEFINED(16,3743) /* FString */               __um(HitPrimitiveName);                                     // 0x0110   (0x0010)  
	float                                              InstigatorCoordinateX;                                      // 0x0120   (0x0004)  
	float                                              InstigatorCoordinateY;                                      // 0x0124   (0x0004)  
	float                                              InstigatorCoordinateZ;                                      // 0x0128   (0x0004)  
	float                                              InstigatorRotationX;                                        // 0x012C   (0x0004)  
	float                                              InstigatorRotationY;                                        // 0x0130   (0x0004)  
	float                                              InstigatorRotationZ;                                        // 0x0134   (0x0004)  
	float                                              TargetLocationInstigatorTimestamp;                          // 0x0138   (0x0004)  
	float                                              TargetCoordinateX;                                          // 0x013C   (0x0004)  
	float                                              TargetCoordinateY;                                          // 0x0140   (0x0004)  
	float                                              TargetCoordinateZ;                                          // 0x0144   (0x0004)  
	float                                              distance;                                                   // 0x0148   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x014C   (0x0004)  MISSED
};

/// Struct /Script/DBDAnalytics.DisconnectionAnalytics
/// Size: 0x0078 (0x0000B8 - 0x000130)
struct FDisconnectionAnalytics : FUniquelyIdentifiedAnalytic
{ 
	double                                             TimeSinceLastPacket;                                        // 0x00B8   (0x0008)  
	SDK_UNDEFINED(16,3744) /* FString */               __um(GameFlowStep);                                         // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,3745) /* FString */               __um(UnrealMapName);                                        // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,3746) /* FString */               __um(MapName);                                              // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,3747) /* FString */               __um(ThemeName);                                            // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,3748) /* FString */               __um(FailureType);                                          // 0x0100   (0x0010)  
	SDK_UNDEFINED(16,3749) /* FString */               __um(ErrorString);                                          // 0x0110   (0x0010)  
	SDK_UNDEFINED(16,3750) /* FString */               __um(MatchID);                                              // 0x0120   (0x0010)  
};

/// Struct /Script/DBDAnalytics.DisconnectionDetailsAnalytics
/// Size: 0x0058 (0x0000B8 - 0x000110)
struct FDisconnectionDetailsAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3751) /* FString */               __um(PlayerPlatform);                                       // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3752) /* FString */               __um(MatchID);                                              // 0x00C8   (0x0010)  
	int32_t                                            InGameTime;                                                 // 0x00D8   (0x0004)  
	EPlayerRole                                        Role;                                                       // 0x00DC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00DD   (0x0003)  MISSED
	SDK_UNDEFINED(16,3753) /* FString */               __um(Reason);                                               // 0x00E0   (0x0010)  
	EHealthStatus                                      Health;                                                     // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00F1   (0x0007)  MISSED
	TArray<ECharacterStatus>                           CharacterStatus;                                            // 0x00F8   (0x0010)  
	int32_t                                            GeneratorActivated;                                         // 0x0108   (0x0004)  
	EHatchStatus                                       HatchStatus;                                                // 0x010C   (0x0001)  
	EDoorStatus                                        DoorStatus;                                                 // 0x010D   (0x0001)  
	EGameState                                         DisconnectionType;                                          // 0x010E   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x010F   (0x0001)  MISSED
};

/// Struct /Script/DBDAnalytics.DedicatedServerPlayerEquipDisabledItemAnalytics
/// Size: 0x0020 (0x0000B8 - 0x0000D8)
struct FDedicatedServerPlayerEquipDisabledItemAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3754) /* FString */               __um(PlayerMirrorsId);                                      // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3755) /* FString */               __um(EquipedDisabledItemIds);                               // 0x00C8   (0x0010)  
};

/// Struct /Script/DBDAnalytics.EACAnalytics
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
struct FEACAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3756) /* FString */               __um(LogMessage);                                           // 0x00B8   (0x0010)  
};

/// Struct /Script/DBDAnalytics.EACClientViolationAnalytics
/// Size: 0x0010 (0x0000C8 - 0x0000D8)
struct FEACClientViolationAnalytics : FEACAnalytics
{ 
	SDK_UNDEFINED(16,3757) /* FString */               __um(ViolationCase);                                        // 0x00C8   (0x0010)  
};

/// Struct /Script/DBDAnalytics.EACClientInitAnalytics
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
struct FEACClientInitAnalytics : FEACAnalytics
{ 
	char                                               ValidationErrorType;                                        // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00C9   (0x0007)  MISSED
};

/// Struct /Script/DBDAnalytics.EACServerValidateAnalytics
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
struct FEACServerValidateAnalytics : FEACClientInitAnalytics
{ 
};

/// Struct /Script/DBDAnalytics.EACClientAuthChallengeAnalytics
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
struct FEACClientAuthChallengeAnalytics : FEACClientInitAnalytics
{ 
};

/// Struct /Script/DBDAnalytics.EACClientAuthInitAnalytics
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
struct FEACClientAuthInitAnalytics : FEACClientInitAnalytics
{ 
};

/// Struct /Script/DBDAnalytics.EmblemProgressionDetailsAnalytics
/// Size: 0x0018 (0x000000 - 0x000018)
struct FEmblemProgressionDetailsAnalytics
{ 
	SDK_UNDEFINED(16,3758) /* FString */               __um(ProgressionType);                                      // 0x0000   (0x0010)  
	float                                              ProgressionPoint;                                           // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/DBDAnalytics.EmblemProgressionAnalytics
/// Size: 0x0048 (0x0000B8 - 0x000100)
struct FEmblemProgressionAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3759) /* FString */               __um(MatchID);                                              // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3760) /* FString */               __um(EmblemId);                                             // 0x00C8   (0x0010)  
	float                                              EmblemValue;                                                // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00DC   (0x0004)  MISSED
	SDK_UNDEFINED(16,3761) /* FString */               __um(EmblemQuality);                                        // 0x00E0   (0x0010)  
	TArray<FEmblemProgressionDetailsAnalytics>         ProgressionDetails;                                         // 0x00F0   (0x0010)  
};

/// Struct /Script/DBDAnalytics.EndpointLatencyData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FEndpointLatencyData
{ 
	SDK_UNDEFINED(16,3762) /* FString */               __um(ID);                                                   // 0x0000   (0x0010)  
	uint32_t                                           Latency;                                                    // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/DBDAnalytics.EndpointLatencyAnalytics
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
struct FEndpointLatencyAnalytics : FUniquelyIdentifiedAnalytic
{ 
	TArray<FEndpointLatencyData>                       Endpoints;                                                  // 0x00B8   (0x0010)  
};

/// Struct /Script/DBDAnalytics.EnvironmentAnalytics
/// Size: 0x0160 (0x0000B8 - 0x000218)
struct FEnvironmentAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3763) /* FString */               __um(Environment);                                          // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3764) /* FString */               __um(Endpoint);                                             // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,3765) /* FString */               __um(Language);                                             // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,3766) /* FString */               __um(SelectedCountry);                                      // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,3767) /* FString */               __um(Timezone);                                             // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,3768) /* FString */               __um(DeviceProfile);                                        // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,3769) /* FString */               __um(GpuAdapter);                                           // 0x0118   (0x0010)  
	SDK_UNDEFINED(16,3770) /* FString */               __um(GpuProviderName);                                      // 0x0128   (0x0010)  
	SDK_UNDEFINED(16,3771) /* FString */               __um(GpuDriverVersion);                                     // 0x0138   (0x0010)  
	SDK_UNDEFINED(16,3772) /* FString */               __um(RHIName);                                              // 0x0148   (0x0010)  
	SDK_UNDEFINED(16,3773) /* FString */               __um(Cpu);                                                  // 0x0158   (0x0010)  
	int32_t                                            QualitySetting;                                             // 0x0168   (0x0004)  
	bool                                               IsFullScreen;                                               // 0x016C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x016D   (0x0003)  MISSED
	int32_t                                            FullscreenMode;                                             // 0x0170   (0x0004)  
	bool                                               IsAutomaticResolution;                                      // 0x0174   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0175   (0x0003)  MISSED
	int32_t                                            ScreenResolutionSetting;                                    // 0x0178   (0x0004)  
	int32_t                                            EngineResolutionX;                                          // 0x017C   (0x0004)  
	int32_t                                            EngineResolutionY;                                          // 0x0180   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0184   (0x0004)  MISSED
	SDK_UNDEFINED(16,3774) /* FString */               __um(Provider);                                             // 0x0188   (0x0010)  
	SDK_UNDEFINED(16,3775) /* FString */               __um(Device);                                               // 0x0198   (0x0010)  
	SDK_UNDEFINED(16,3776) /* FString */               __um(OperatingSystem);                                      // 0x01A8   (0x0010)  
	bool                                               IsPlayingUsingStreaming;                                    // 0x01B8   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x01B9   (0x0007)  MISSED
	SDK_UNDEFINED(16,3777) /* FString */               __um(StreamingService);                                     // 0x01C0   (0x0010)  
	SDK_UNDEFINED(16,3778) /* FString */               __um(StreamingServerLocation);                              // 0x01D0   (0x0010)  
	SDK_UNDEFINED(16,3779) /* FString */               __um(KrakenVersion);                                        // 0x01E0   (0x0010)  
	SDK_UNDEFINED(16,3780) /* FString */               __um(ContentVersion);                                       // 0x01F0   (0x0010)  
	bool                                               IsUsingKeyboard;                                            // 0x0200   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0201   (0x0007)  MISSED
	SDK_UNDEFINED(16,3781) /* FString */               __um(ControllerType);                                       // 0x0208   (0x0010)  
};

/// Struct /Script/DBDAnalytics.ErrorAnalytics
/// Size: 0x0050 (0x0000B8 - 0x000108)
struct FErrorAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3782) /* FString */               __um(ErrorCategory);                                        // 0x00B8   (0x0010)  
	float                                              FloatField1;                                                // 0x00C8   (0x0004)  
	float                                              FloatField2;                                                // 0x00CC   (0x0004)  
	float                                              FloatField3;                                                // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00D4   (0x0004)  MISSED
	SDK_UNDEFINED(16,3783) /* FString */               __um(StringField1);                                         // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,3784) /* FString */               __um(StringField2);                                         // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,3785) /* FString */               __um(StringField3);                                         // 0x00F8   (0x0010)  
};

/// Struct /Script/DBDAnalytics.FallOutOfWorldAnalytics
/// Size: 0x0048 (0x0000B8 - 0x000100)
struct FFallOutOfWorldAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3786) /* FString */               __um(MatchID);                                              // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3787) /* FString */               __um(FallOutMirrorsId);                                     // 0x00C8   (0x0010)  
	float                                              X;                                                          // 0x00D8   (0x0004)  
	float                                              Y;                                                          // 0x00DC   (0x0004)  
	float                                              Z;                                                          // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	SDK_UNDEFINED(16,3788) /* FString */               __um(TileName);                                             // 0x00E8   (0x0010)  
	float                                              ElapsedMatchTime;                                           // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Struct /Script/DBDAnalytics.FeatureGateAnalyticsDBDFeature
/// Size: 0x0018 (0x000000 - 0x000018)
struct FFeatureGateAnalyticsDBDFeature
{ 
	FName                                              ID;                                                         // 0x0000   (0x000C)  
	FName                                              State;                                                      // 0x000C   (0x000C)  
};

/// Struct /Script/DBDAnalytics.FeatureGateAnalytics
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
struct FFeatureGateAnalytics : FUniquelyIdentifiedAnalytic
{ 
	bool                                               Enabled;                                                    // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00B9   (0x0007)  MISSED
	TArray<FFeatureGateAnalyticsDBDFeature>            Features;                                                   // 0x00C0   (0x0010)  
};

/// Struct /Script/DBDAnalytics.FrameHikeAnalytics
/// Size: 0x00D0 (0x0000B8 - 0x000188)
struct FFrameHikeAnalytics : FUniquelyIdentifiedAnalytic
{ 
	float                                              FrameDeltaTime;                                             // 0x00B8   (0x0004)  
	float                                              TimeSinceApplicationStarted;                                // 0x00BC   (0x0004)  
	float                                              CurrentTimeoutThreshold;                                    // 0x00C0   (0x0004)  
	bool                                               IsOverConnectionTimeLimit;                                  // 0x00C4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00C5   (0x0003)  MISSED
	SDK_UNDEFINED(16,3789) /* FString */               __um(CurrentMap);                                           // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,3790) /* FString */               __um(CurrentGameMap);                                       // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,3791) /* FString */               __um(GameFlowStep);                                         // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,3792) /* FString */               __um(CurrentGameFlowContext);                               // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,3793) /* FString */               __um(PreviousGameFlowContext);                              // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,3794) /* FString */               __um(NavigationContext);                                    // 0x0118   (0x0010)  
	SDK_UNDEFINED(16,3795) /* FString */               __um(PreviousNavigationContext);                            // 0x0128   (0x0010)  
	SDK_UNDEFINED(16,3796) /* FString */               __um(RecentLogs);                                           // 0x0138   (0x0010)  
	SDK_UNDEFINED(16,3797) /* FString */               __um(KrakenMatchId);                                        // 0x0148   (0x0010)  
	float                                              FlushAsyncLoadingTime;                                      // 0x0158   (0x0004)  
	int32_t                                            FlushAsyncLoadingCount;                                     // 0x015C   (0x0004)  
	int32_t                                            SyncLoadCount;                                              // 0x0160   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0164   (0x0004)  MISSED
	SDK_UNDEFINED(16,3798) /* FString */               __um(GameType);                                             // 0x0168   (0x0010)  
	SDK_UNDEFINED(16,3799) /* FString */               __um(NetMode);                                              // 0x0178   (0x0010)  
};

/// Struct /Script/DBDAnalytics.FreeTrialLoginAnalytics
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
struct FFreeTrialLoginAnalytics : FUniquelyIdentifiedAnalytic
{ 
};

/// Struct /Script/DBDAnalytics.GameConsoleLogAnalytics
/// Size: 0x0050 (0x0000B8 - 0x000108)
struct FGameConsoleLogAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3800) /* FString */               __um(Verbosity);                                            // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3801) /* FString */               __um(category);                                             // 0x00C8   (0x0010)  
	uint64_t                                           FrameCounter;                                               // 0x00D8   (0x0008)  
	SDK_UNDEFINED(16,3802) /* FString */               __um(Message);                                              // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,3803) /* FString */               __um(StackTrace);                                           // 0x00F0   (0x0010)  
	uint32_t                                           Repeated;                                                   // 0x0100   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0104   (0x0004)  MISSED
};

/// Struct /Script/DBDAnalytics.GameInitAnalytics
/// Size: 0x0050 (0x0000B8 - 0x000108)
struct FGameInitAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3804) /* FString */               __um(InitGuid);                                             // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3805) /* FString */               __um(ProgressionName);                                      // 0x00C8   (0x0010)  
	bool                                               success;                                                    // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00D9   (0x0007)  MISSED
	SDK_UNDEFINED(16,3806) /* FString */               __um(LoadCompleteState);                                    // 0x00E0   (0x0010)  
	float                                              ElapsedTime;                                                // 0x00F0   (0x0004)  
	uint32_t                                           FailureCount;                                               // 0x00F4   (0x0004)  
	SDK_UNDEFINED(16,3807) /* FString */               __um(AdditionalInfo);                                       // 0x00F8   (0x0010)  
};

/// Struct /Script/DBDAnalytics.Gameplay_PigKillerAnalytics
/// Size: 0x0038 (0x0000B8 - 0x0000F0)
struct FGameplay_PigKillerAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3808) /* FString */               __um(MatchID);                                              // 0x00B8   (0x0010)  
	int32_t                                            AmbushHitCount;                                             // 0x00C8   (0x0004)  
	int32_t                                            RbtKilledCount;                                             // 0x00CC   (0x0004)  
	int32_t                                            Rbt1GeneratorCount;                                         // 0x00D0   (0x0004)  
	int32_t                                            Rbt2GeneratorCount;                                         // 0x00D4   (0x0004)  
	int32_t                                            Rbt3GeneratorCount;                                         // 0x00D8   (0x0004)  
	int32_t                                            Rbt4GeneratorCount;                                         // 0x00DC   (0x0004)  
	int32_t                                            Rbt5GeneratorCount;                                         // 0x00E0   (0x0004)  
	float                                              CrouchDuration;                                             // 0x00E4   (0x0004)  
	int32_t                                            RbtExitKill;                                                // 0x00E8   (0x0004)  
	int32_t                                            RbtHookKill;                                                // 0x00EC   (0x0004)  
};

/// Struct /Script/DBDAnalytics.Gameplay_KillerAnalytics
/// Size: 0x00B8 (0x0000B8 - 0x000170)
struct FGameplay_KillerAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3809) /* FString */               __um(MatchID);                                              // 0x00B8   (0x0010)  
	float                                              Speed;                                                      // 0x00C8   (0x0004)  
	int32_t                                            BloodlustTier1Count;                                        // 0x00CC   (0x0004)  
	int32_t                                            BloodlustTier2Count;                                        // 0x00D0   (0x0004)  
	int32_t                                            BloodlustTier3Count;                                        // 0x00D4   (0x0004)  
	float                                              BloodlustTier1Duration;                                     // 0x00D8   (0x0004)  
	float                                              BloodlustTier2Duration;                                     // 0x00DC   (0x0004)  
	float                                              BloodlustTier3Duration;                                     // 0x00E0   (0x0004)  
	float                                              BloodlustSpeed;                                             // 0x00E4   (0x0004)  
	int32_t                                            ChaseCount;                                                 // 0x00E8   (0x0004)  
	int32_t                                            ChaseCountFail;                                             // 0x00EC   (0x0004)  
	int32_t                                            ChaseCountSuccess;                                          // 0x00F0   (0x0004)  
	int32_t                                            ChaseCountTier1Fail;                                        // 0x00F4   (0x0004)  
	int32_t                                            ChaseCountTier1Success;                                     // 0x00F8   (0x0004)  
	int32_t                                            ChaseCountTier2Fail;                                        // 0x00FC   (0x0004)  
	int32_t                                            ChaseCountTier2Success;                                     // 0x0100   (0x0004)  
	int32_t                                            ChaseCountTier3Fail;                                        // 0x0104   (0x0004)  
	int32_t                                            ChaseCountTier3Success;                                     // 0x0108   (0x0004)  
	int32_t                                            HookCount;                                                  // 0x010C   (0x0004)  
	int32_t                                            MurderCount;                                                // 0x0110   (0x0004)  
	int32_t                                            PalletSpawned;                                              // 0x0114   (0x0004)  
	int32_t                                            PalletProcedural;                                           // 0x0118   (0x0004)  
	int32_t                                            PalletProceduralSetCount;                                   // 0x011C   (0x0004)  
	uint32_t                                           PalletGenerationId;                                         // 0x0120   (0x0004)  
	int32_t                                            PalletGeneric;                                              // 0x0124   (0x0004)  
	int32_t                                            PalletDestroyed;                                            // 0x0128   (0x0004)  
	int32_t                                            BreakableWallSpawned;                                       // 0x012C   (0x0004)  
	int32_t                                            BreakableWallDestroyed;                                     // 0x0130   (0x0004)  
	int32_t                                            DropCount;                                                  // 0x0134   (0x0004)  
	int32_t                                            HitCloseCount;                                              // 0x0138   (0x0004)  
	int32_t                                            HitCloseCountSuccess;                                       // 0x013C   (0x0004)  
	int32_t                                            HitFarCount;                                                // 0x0140   (0x0004)  
	int32_t                                            HitFarCountSuccess;                                         // 0x0144   (0x0004)  
	int32_t                                            HitSpecialCount;                                            // 0x0148   (0x0004)  
	int32_t                                            HitSpecialCountSuccess;                                     // 0x014C   (0x0004)  
	int32_t                                            ClosetOpen;                                                 // 0x0150   (0x0004)  
	int32_t                                            ClosetOpenSuccess;                                          // 0x0154   (0x0004)  
	int32_t                                            EscapeesHatchCount;                                         // 0x0158   (0x0004)  
	float                                              SecondesAtLeastOneSurvivorHooked;                           // 0x015C   (0x0004)  
	uint32_t                                           AmountTilesVisited;                                         // 0x0160   (0x0004)  
	float                                              StartX;                                                     // 0x0164   (0x0004)  
	float                                              StartY;                                                     // 0x0168   (0x0004)  
	float                                              StartZ;                                                     // 0x016C   (0x0004)  
};

/// Struct /Script/DBDAnalytics.Gameplay_PigSurvivorAnalytics
/// Size: 0x0038 (0x0000B8 - 0x0000F0)
struct FGameplay_PigSurvivorAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3810) /* FString */               __um(MatchID);                                              // 0x00B8   (0x0010)  
	int32_t                                            RbtAttachedCount;                                           // 0x00C8   (0x0004)  
	int32_t                                            ActivatedRbtTimerCount;                                     // 0x00CC   (0x0004)  
	int32_t                                            RbtSuccessSearchCount;                                      // 0x00D0   (0x0004)  
	int32_t                                            RbtFailedSearchCount;                                       // 0x00D4   (0x0004)  
	int32_t                                            RbtDisabledPreActivation;                                   // 0x00D8   (0x0004)  
	int32_t                                            RbtDisabledPostActivation;                                  // 0x00DC   (0x0004)  
	float                                              RbtChaseDuration;                                           // 0x00E0   (0x0004)  
	float                                              RbtAverageTimeLeftBeforeDisable;                            // 0x00E4   (0x0004)  
	float                                              RbtDuration;                                                // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00EC   (0x0004)  MISSED
};

/// Struct /Script/DBDAnalytics.Gameplay_SurvivorAnalytics
/// Size: 0x0090 (0x0000B8 - 0x000148)
struct FGameplay_SurvivorAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3811) /* FString */               __um(MatchID);                                              // 0x00B8   (0x0010)  
	float                                              Speed;                                                      // 0x00C8   (0x0004)  
	float                                              InjuredSpeed;                                               // 0x00CC   (0x0004)  
	float                                              InjuredDuration;                                            // 0x00D0   (0x0004)  
	float                                              HealthyDuration;                                            // 0x00D4   (0x0004)  
	float                                              KODuration;                                                 // 0x00D8   (0x0004)  
	int32_t                                            PalletSpawned;                                              // 0x00DC   (0x0004)  
	int32_t                                            PalletProcedural;                                           // 0x00E0   (0x0004)  
	int32_t                                            PalletProceduralSetCount;                                   // 0x00E4   (0x0004)  
	uint32_t                                           PalletGenerationId;                                         // 0x00E8   (0x0004)  
	int32_t                                            PalletGeneric;                                              // 0x00EC   (0x0004)  
	int32_t                                            PalletDrop;                                                 // 0x00F0   (0x0004)  
	int32_t                                            PalletStun;                                                 // 0x00F4   (0x0004)  
	int32_t                                            UnhookCount;                                                // 0x00F8   (0x0004)  
	int32_t                                            HealCount;                                                  // 0x00FC   (0x0004)  
	int32_t                                            HealCountSuccess;                                           // 0x0100   (0x0004)  
	int32_t                                            ClosetEnter;                                                // 0x0104   (0x0004)  
	int32_t                                            Hatch;                                                      // 0x0108   (0x0004)  
	int32_t                                            SkillCheckCount;                                            // 0x010C   (0x0004)  
	int32_t                                            SkillCheckCountGood;                                        // 0x0110   (0x0004)  
	int32_t                                            SkillCheckCountGreat;                                       // 0x0114   (0x0004)  
	float                                              ChaseDuration;                                              // 0x0118   (0x0004)  
	int32_t                                            NumChases;                                                  // 0x011C   (0x0004)  
	int32_t                                            HitBySlasherCount;                                          // 0x0120   (0x0004)  
	uint32_t                                           AmountTilesVisited;                                         // 0x0124   (0x0004)  
	float                                              StartX;                                                     // 0x0128   (0x0004)  
	float                                              StartY;                                                     // 0x012C   (0x0004)  
	float                                              StartZ;                                                     // 0x0130   (0x0004)  
	int32_t                                            EmotePoint;                                                 // 0x0134   (0x0004)  
	int32_t                                            EmoteCome;                                                  // 0x0138   (0x0004)  
	float                                              CrouchingDuration;                                          // 0x013C   (0x0004)  
	int32_t                                            CrouchingCount;                                             // 0x0140   (0x0004)  
	float                                              CrawlingDuration;                                           // 0x0144   (0x0004)  
};

/// Struct /Script/DBDAnalytics.GPUAnalytics
/// Size: 0x0038 (0x0000B8 - 0x0000F0)
struct FGPUAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3812) /* FString */               __um(MatchID);                                              // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3813) /* FString */               __um(MapName);                                              // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,3814) /* FString */               __um(Marker);                                               // 0x00D8   (0x0010)  
	float                                              AverageMS;                                                  // 0x00E8   (0x0004)  
	float                                              StdDevMs;                                                   // 0x00EC   (0x0004)  
};

/// Struct /Script/DBDAnalytics.HangAnalytics
/// Size: 0x0050 (0x0000B8 - 0x000108)
struct FHangAnalytics : FUniquelyIdentifiedAnalytic
{ 
	bool                                               IsHang;                                                     // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00B9   (0x0007)  MISSED
	SDK_UNDEFINED(16,3815) /* FString */               __um(HangSourcesInfo);                                      // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,3816) /* FString */               __um(HangLogs);                                             // 0x00D0   (0x0010)  
	float                                              LastLoadingProgression;                                     // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	SDK_UNDEFINED(16,3817) /* FString */               __um(RecentFenceLogs);                                      // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,3818) /* FString */               __um(MatchID);                                              // 0x00F8   (0x0010)  
};

/// Struct /Script/DBDAnalytics.HeartbeatAnalytics
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
struct FHeartbeatAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3819) /* FString */               __um(BeatTime);                                             // 0x00B8   (0x0010)  
};

/// Struct /Script/DBDAnalytics.IAPCanceledAnalytics
/// Size: 0x0020 (0x0000B8 - 0x0000D8)
struct FIAPCanceledAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3820) /* FString */               __um(ItemId);                                               // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3821) /* FString */               __um(Provider);                                             // 0x00C8   (0x0010)  
};

/// Struct /Script/DBDAnalytics.InteractionAnalytics
/// Size: 0x0020 (0x0000B8 - 0x0000D8)
struct FInteractionAnalytics : FUniquelyIdentifiedAnalytic
{ 
	EPlayerRole                                        Role;                                                       // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B9   (0x0003)  MISSED
	int32_t                                            InterruptionSuccessCount;                                   // 0x00BC   (0x0004)  
	int32_t                                            InterruptionFailureCount;                                   // 0x00C0   (0x0004)  
	int32_t                                            InteractionPredictedCount;                                  // 0x00C4   (0x0004)  
	int32_t                                            InteractionAuthorizedCount;                                 // 0x00C8   (0x0004)  
	int32_t                                            InteractionDeniedByRaceConditionCount;                      // 0x00CC   (0x0004)  
	int32_t                                            InteractionDeniedByTimeoutCount;                            // 0x00D0   (0x0004)  
	int32_t                                            InteractionDeniedByErrorCount;                              // 0x00D4   (0x0004)  
};

/// Struct /Script/DBDAnalytics.DedicatedServerInvalidLoadoutAnalytics
/// Size: 0x0058 (0x0000B8 - 0x000110)
struct FDedicatedServerInvalidLoadoutAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3822) /* FString */               __um(PlayerMirrorsId);                                      // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3823) /* FString */               __um(ItemType);                                             // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,3824) /* FString */               __um(Items);                                                // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,3825) /* FString */               __um(Reason);                                               // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,3826) /* FString */               __um(playerRole);                                           // 0x00F8   (0x0010)  
	int32_t                                            characterId;                                                // 0x0108   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x010C   (0x0004)  MISSED
};

/// Struct /Script/DBDAnalytics.InvalidLoadoutAnalytics
/// Size: 0x0028 (0x0000B8 - 0x0000E0)
struct FInvalidLoadoutAnalytics : FUniquelyIdentifiedAnalytic
{ 
	int32_t                                            SlasherPerkCount;                                           // 0x00B8   (0x0004)  
	int32_t                                            PowerAddonCount;                                            // 0x00BC   (0x0004)  
	int32_t                                            CamperPerkCount;                                            // 0x00C0   (0x0004)  
	int32_t                                            ItemAddonCount;                                             // 0x00C4   (0x0004)  
	SDK_UNDEFINED(16,3827) /* FString */               __um(CallingFunctionName);                                  // 0x00C8   (0x0010)  
	int32_t                                            characterId;                                                // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
};

/// Struct /Script/DBDAnalytics.NewKillerTutorialAnalytics
/// Size: 0x0050 (0x0000B8 - 0x000108)
struct FNewKillerTutorialAnalytics : FUniquelyIdentifiedAnalytic
{ 
	bool                                               IsKickGeneratorComplete;                                    // 0x00B8   (0x0001)  
	bool                                               IsFollowSurvivorComplete;                                   // 0x00B9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00BA   (0x0002)  MISSED
	int32_t                                            TimeToCompleteAreaOne;                                      // 0x00BC   (0x0004)  
	bool                                               IsDestroyPalletComplete;                                    // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00C1   (0x0003)  MISSED
	int32_t                                            TimeToCompleteAreaTwo;                                      // 0x00C4   (0x0004)  
	bool                                               IsBeartrapComplete;                                         // 0x00C8   (0x0001)  
	bool                                               IsHitSurvivorComplete;                                      // 0x00C9   (0x0001)  
	bool                                               IsKoSurvivorComplete;                                       // 0x00CA   (0x0001)  
	bool                                               IsPickupSurvivorComplete;                                   // 0x00CB   (0x0001)  
	bool                                               IsHookSurvivorComplete;                                     // 0x00CC   (0x0001)  
	bool                                               IsCloseHatchComplete;                                       // 0x00CD   (0x0001)  
	bool                                               IsKillSurvivorComplete;                                     // 0x00CE   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x00CF   (0x0001)  MISSED
	int32_t                                            TimeToCompleteAreaThree;                                    // 0x00D0   (0x0004)  
	int32_t                                            TotalTimeInTutorial;                                        // 0x00D4   (0x0004)  
	SDK_UNDEFINED(16,3828) /* FString */               __um(tutorialId);                                           // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,3829) /* FString */               __um(OnboardingModeId);                                     // 0x00E8   (0x0010)  
	int32_t                                            OnboardingEnabled;                                          // 0x00F8   (0x0004)  
	int32_t                                            OnboardingABTestingEnabled;                                 // 0x00FC   (0x0004)  
	int32_t                                            OnboardingNumberActiveModes;                                // 0x0100   (0x0004)  
	int32_t                                            OnboardingNewAssignedMode;                                  // 0x0104   (0x0004)  
};

/// Struct /Script/DBDAnalytics.KrakenRequestAnalytics
/// Size: 0x0070 (0x0000B8 - 0x000128)
struct FKrakenRequestAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3830) /* FString */               __um(KrakenUrl);                                            // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3831) /* FString */               __um(Method);                                               // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,3832) /* FString */               __um(Route);                                                // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,3833) /* FString */               __um(Status);                                               // 0x00E8   (0x0010)  
	int32_t                                            ResponseCode;                                               // 0x00F8   (0x0004)  
	int32_t                                            ProviderError;                                              // 0x00FC   (0x0004)  
	uint32_t                                           AttemptCount;                                               // 0x0100   (0x0004)  
	bool                                               success;                                                    // 0x0104   (0x0001)  
	bool                                               CanRetry;                                                   // 0x0105   (0x0001)  
	bool                                               WillRetry;                                                  // 0x0106   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0107   (0x0001)  MISSED
	SDK_UNDEFINED(16,3834) /* FString */               __um(Country);                                              // 0x0108   (0x0010)  
	float                                              AttemptElapsedTime;                                         // 0x0118   (0x0004)  
	float                                              TotalElapsedTime;                                           // 0x011C   (0x0004)  
	float                                              TotalElapsedTimeCapped;                                     // 0x0120   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0124   (0x0004)  MISSED
};

/// Struct /Script/DBDAnalytics.LevelLoadingTimeoutAnalytics
/// Size: 0x0040 (0x0000B8 - 0x0000F8)
struct FLevelLoadingTimeoutAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3835) /* FString */               __um(MatchID);                                              // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3836) /* FString */               __um(MapName);                                              // 0x00C8   (0x0010)  
	int32_t                                            Seed;                                                       // 0x00D8   (0x0004)  
	float                                              TimeElapsed;                                                // 0x00DC   (0x0004)  
	float                                              TimeElapsedInStep;                                          // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	SDK_UNDEFINED(16,3837) /* FString */               __um(LoadingStep);                                          // 0x00E8   (0x0010)  
};

/// Struct /Script/DBDAnalytics.LevelLoadingStepAnalytics
/// Size: 0x0048 (0x0000B8 - 0x000100)
struct FLevelLoadingStepAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3838) /* FString */               __um(MatchID);                                              // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3839) /* FString */               __um(MapName);                                              // 0x00C8   (0x0010)  
	int32_t                                            Seed;                                                       // 0x00D8   (0x0004)  
	float                                              TimeElapsed;                                                // 0x00DC   (0x0004)  
	float                                              TimeElapsedInStep;                                          // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	SDK_UNDEFINED(16,3840) /* FString */               __um(LoadingStep);                                          // 0x00E8   (0x0010)  
	bool                                               IsTimeout;                                                  // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00F9   (0x0007)  MISSED
};

/// Struct /Script/DBDAnalytics.LoadingTimeoutAnalytics
/// Size: 0x0058 (0x0000B8 - 0x000110)
struct FLoadingTimeoutAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3841) /* FString */               __um(match_id);                                             // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3842) /* FString */               __um(lobby_id);                                             // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,3843) /* FString */               __um(timeout_timestamp);                                    // 0x00D8   (0x0010)  
	float                                              total_load_time;                                            // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00EC   (0x0004)  MISSED
	SDK_UNDEFINED(16,3844) /* FString */               __um(current_map_name);                                     // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,3845) /* FString */               __um(transition_id);                                        // 0x0100   (0x0010)  
};

/// Struct /Script/DBDAnalytics.LoadingStepAnalytics
/// Size: 0x0068 (0x0000B8 - 0x000120)
struct FLoadingStepAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3846) /* FString */               __um(match_id);                                             // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3847) /* FString */               __um(lobby_id);                                             // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,3848) /* FString */               __um(step_change_timestamp);                                // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,3849) /* FString */               __um(loading_step);                                         // 0x00E8   (0x0010)  
	float                                              time_on_prev_step;                                          // 0x00F8   (0x0004)  
	float                                              total_load_time;                                            // 0x00FC   (0x0004)  
	SDK_UNDEFINED(16,3850) /* FString */               __um(current_map_name);                                     // 0x0100   (0x0010)  
	SDK_UNDEFINED(16,3851) /* FString */               __um(transition_id);                                        // 0x0110   (0x0010)  
};

/// Struct /Script/DBDAnalytics.LoadoutBaseAnalytics
/// Size: 0x0088 (0x0000B8 - 0x000140)
struct FLoadoutBaseAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3852) /* FString */               __um(LoadoutItem);                                          // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3853) /* FString */               __um(LoadoutItemAddOn1);                                    // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,3854) /* FString */               __um(LoadoutItemAddOn2);                                    // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,3855) /* FString */               __um(LoadoutPerk1);                                         // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,3856) /* FString */               __um(LoadoutPerk2);                                         // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,3857) /* FString */               __um(LoadoutPerk3);                                         // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,3858) /* FString */               __um(LoadoutPerk4);                                         // 0x0118   (0x0010)  
	SDK_UNDEFINED(16,3859) /* FString */               __um(LoadoutOffering);                                      // 0x0128   (0x0010)  
	EPlayerRole                                        Role;                                                       // 0x0138   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0139   (0x0003)  MISSED
	int32_t                                            Rank;                                                       // 0x013C   (0x0004)  
};

/// Struct /Script/DBDAnalytics.LoadOutLobbyAnalytics
/// Size: 0x0028 (0x000140 - 0x000168)
struct FLoadOutLobbyAnalytics : FLoadoutBaseAnalytics
{ 
	int32_t                                            Level;                                                      // 0x0140   (0x0004)  
	int32_t                                            Prestige;                                                   // 0x0144   (0x0004)  
	SDK_UNDEFINED(16,3860) /* FString */               __um(characterName);                                        // 0x0148   (0x0010)  
	SDK_UNDEFINED(16,3861) /* FString */               __um(LobbyId);                                              // 0x0158   (0x0010)  
};

/// Struct /Script/DBDAnalytics.LoadOutAnalytics
/// Size: 0x0010 (0x000140 - 0x000150)
struct FLoadOutAnalytics : FLoadoutBaseAnalytics
{ 
	SDK_UNDEFINED(16,3862) /* FString */               __um(MatchID);                                              // 0x0140   (0x0010)  
};

/// Struct /Script/DBDAnalytics.LogMirrorsAnalytics
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
struct FLogMirrorsAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3863) /* FString */               __um(LogMirrors);                                           // 0x00B8   (0x0010)  
};

/// Struct /Script/DBDAnalytics.LogPresencePluginAnalytics
/// Size: 0x0020 (0x0000B8 - 0x0000D8)
struct FLogPresencePluginAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3864) /* FString */               __um(Context);                                              // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3865) /* FString */               __um(Message);                                              // 0x00C8   (0x0010)  
};

/// Struct /Script/DBDAnalytics.MapCoordData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMapCoordData
{ 
	SDK_UNDEFINED(16,3866) /* FString */               __um(Type);                                                 // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,3867) /* FString */               __um(Actor);                                                // 0x0010   (0x0010)  
	int32_t                                            X;                                                          // 0x0020   (0x0004)  
	int32_t                                            Y;                                                          // 0x0024   (0x0004)  
	int32_t                                            Z;                                                          // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/DBDAnalytics.MapCoordAnalytics
/// Size: 0x0020 (0x0000B8 - 0x0000D8)
struct FMapCoordAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3868) /* FString */               __um(MatchID);                                              // 0x00B8   (0x0010)  
	TArray<FMapCoordData>                              MapItem;                                                    // 0x00C8   (0x0010)  
};

/// Struct /Script/DBDAnalytics.MapSelectionWeight
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMapSelectionWeight
{ 
	SDK_UNDEFINED(16,3869) /* FString */               __um(MapId);                                                // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,3870) /* FString */               __um(ThemeId);                                              // 0x0010   (0x0010)  
	float                                              Weight;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/DBDAnalytics.MapSelectionAnalytics
/// Size: 0x0040 (0x0000B8 - 0x0000F8)
struct FMapSelectionAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3871) /* FString */               __um(KrakenMatchId);                                        // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3872) /* FString */               __um(SelectedMapId);                                        // 0x00C8   (0x0010)  
	int32_t                                            MapSeed;                                                    // 0x00D8   (0x0004)  
	float                                              SelectedMapOdds;                                            // 0x00DC   (0x0004)  
	float                                              TotalMapWeight;                                             // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	TArray<FMapSelectionWeight>                        MapWeights;                                                 // 0x00E8   (0x0010)  
};

/// Struct /Script/DBDAnalytics.MatchIncentivesGrantedAnalytics
/// Size: 0x0028 (0x0000B8 - 0x0000E0)
struct FMatchIncentivesGrantedAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3873) /* FString */               __um(MatchID);                                              // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3874) /* FString */               __um(playerID);                                             // 0x00C8   (0x0010)  
	EPlayerRole                                        playerRole;                                                 // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00D9   (0x0003)  MISSED
	int32_t                                            Incentive;                                                  // 0x00DC   (0x0004)  
};

/// Struct /Script/DBDAnalytics.MatchIncentivesFetchedAnalytics
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
struct FMatchIncentivesFetchedAnalytics : FUniquelyIdentifiedAnalytic
{ 
	int32_t                                            KillerPercentageIncentive;                                  // 0x00B8   (0x0004)  
	int32_t                                            SurvivorPercentageIncentive;                                // 0x00BC   (0x0004)  
};

/// Struct /Script/DBDAnalytics.MatchInfoAnalytics
/// Size: 0x0148 (0x0000B8 - 0x000200)
struct FMatchInfoAnalytics : FUniquelyIdentifiedAnalytic
{ 
	EGameType                                          GameMode;                                                   // 0x00B8   (0x0001)  
	EPlayerRole                                        Role;                                                       // 0x00B9   (0x0001)  
	bool                                               IsABot;                                                     // 0x00BA   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x00BB   (0x0005)  MISSED
	SDK_UNDEFINED(16,3875) /* FString */               __um(BotId);                                                // 0x00C0   (0x0010)  
	EAIDifficultyLevel                                 BotDifficultyLevel;                                         // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00D1   (0x0003)  MISSED
	int32_t                                            PartySize;                                                  // 0x00D4   (0x0004)  
	SDK_UNDEFINED(16,3876) /* FString */               __um(characterName);                                        // 0x00D8   (0x0010)  
	int32_t                                            Rank;                                                       // 0x00E8   (0x0004)  
	int32_t                                            Level;                                                      // 0x00EC   (0x0004)  
	int32_t                                            Prestige;                                                   // 0x00F0   (0x0004)  
	int32_t                                            Pips;                                                       // 0x00F4   (0x0004)  
	int32_t                                            PipsTotal;                                                  // 0x00F8   (0x0004)  
	int32_t                                            MapSeed;                                                    // 0x00FC   (0x0004)  
	SDK_UNDEFINED(16,3877) /* FString */               __um(MapName);                                              // 0x0100   (0x0010)  
	SDK_UNDEFINED(16,3878) /* FString */               __um(PartyHostMirrorsId);                                   // 0x0110   (0x0010)  
	SDK_UNDEFINED(16,3879) /* FString */               __um(LobbyId);                                              // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,3880) /* FString */               __um(MatchID);                                              // 0x0130   (0x0010)  
	SDK_UNDEFINED(16,3881) /* FString */               __um(KrakenMatchId);                                        // 0x0140   (0x0010)  
	SDK_UNDEFINED(16,3882) /* FString */               __um(playerName);                                           // 0x0150   (0x0010)  
	SDK_UNDEFINED(16,3883) /* FString */               __um(SelectedCountry);                                      // 0x0160   (0x0010)  
	bool                                               FirstTimePlaying;                                           // 0x0170   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0171   (0x0003)  MISSED
	int32_t                                            CumulativeMatches;                                          // 0x0174   (0x0004)  
	int32_t                                            CumulativeMatchesAsSurvivor;                                // 0x0178   (0x0004)  
	int32_t                                            CumulativeMatchesAsKiller;                                  // 0x017C   (0x0004)  
	SDK_UNDEFINED(16,3884) /* FString */               __um(LastMatchTimestamp);                                   // 0x0180   (0x0010)  
	float                                              ExactPing;                                                  // 0x0190   (0x0004)  
	bool                                               hasAnActiveArchiveQuest;                                    // 0x0194   (0x0001)  
	bool                                               IsUsingKeyboard;                                            // 0x0195   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x0196   (0x0002)  MISSED
	SDK_UNDEFINED(16,3885) /* FString */               __um(ControllerType);                                       // 0x0198   (0x0010)  
	SDK_UNDEFINED(16,3886) /* FString */               __um(ColorBlindMode);                                       // 0x01A8   (0x0010)  
	int32_t                                            ColorblindIntensity;                                        // 0x01B8   (0x0004)  
	bool                                               TerrorRadiusVisualSupport;                                  // 0x01BC   (0x0001)  
	bool                                               IsTutorialBotMatch;                                         // 0x01BD   (0x0001)  
	unsigned char                                      UnknownData04_5[0x2];                                       // 0x01BE   (0x0002)  MISSED
	SDK_UNDEFINED(16,3887) /* FString */               __um(OnboardingModeId);                                     // 0x01C0   (0x0010)  
	int32_t                                            OnboardingEnabled;                                          // 0x01D0   (0x0004)  
	int32_t                                            OnboardingABTestingEnabled;                                 // 0x01D4   (0x0004)  
	int32_t                                            OnboardingNumberActiveModes;                                // 0x01D8   (0x0004)  
	int32_t                                            OnboardingNewAssignedMode;                                  // 0x01DC   (0x0004)  
	SDK_UNDEFINED(16,3888) /* FString */               __um(ServerSessionId);                                      // 0x01E0   (0x0010)  
	SDK_UNDEFINED(16,3889) /* FString */               __um(ServerRegion);                                         // 0x01F0   (0x0010)  
};

/// Struct /Script/DBDAnalytics.MatchmakingInfoExpiredAnalytics
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
struct FMatchmakingInfoExpiredAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3890) /* FString */               __um(MatchmakingSessionGuid);                               // 0x00B8   (0x0010)  
};

/// Struct /Script/DBDAnalytics.MatchmakingAnalytics
/// Size: 0x0030 (0x0000B8 - 0x0000E8)
struct FMatchmakingAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3891) /* FString */               __um(MatchmakingSessionGuid);                               // 0x00B8   (0x0010)  
	EPlayerRole                                        playerRole;                                                 // 0x00C8   (0x0001)  
	EGameType                                          GameType;                                                   // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00CA   (0x0002)  MISSED
	int32_t                                            PartySize;                                                  // 0x00CC   (0x0004)  
	int32_t                                            Rank;                                                       // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00D4   (0x0004)  MISSED
	SDK_UNDEFINED(16,3892) /* FString */               __um(characterName);                                        // 0x00D8   (0x0010)  
};

/// Struct /Script/DBDAnalytics.MatchmakingLobbyAnalytics
/// Size: 0x0040 (0x0000E8 - 0x000128)
struct FMatchmakingLobbyAnalytics : FMatchmakingAnalytics
{ 
	SDK_UNDEFINED(16,3893) /* FString */               __um(LobbyStartTime);                                       // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,3894) /* FString */               __um(LobbyEndTime);                                         // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,3895) /* FString */               __um(LobbyResult);                                          // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,3896) /* FString */               __um(KrakenMatchId);                                        // 0x0118   (0x0010)  
};

/// Struct /Script/DBDAnalytics.MatchmakingQueueAnalytics
/// Size: 0x0038 (0x0000E8 - 0x000120)
struct FMatchmakingQueueAnalytics : FMatchmakingAnalytics
{ 
	SDK_UNDEFINED(16,3897) /* FString */               __um(QueueStartTime);                                       // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,3898) /* FString */               __um(QueueEndTime);                                         // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,3899) /* FString */               __um(QueueResult);                                          // 0x0108   (0x0010)  
	bool                                               CrossPlayEnabled;                                           // 0x0118   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0119   (0x0007)  MISSED
};

/// Struct /Script/DBDAnalytics.MatchmakingSearchCompleteAnalytics
/// Size: 0x00E0 (0x0000B8 - 0x000198)
struct FMatchmakingSearchCompleteAnalytics : FUniquelyIdentifiedAnalytic
{ 
	bool                                               success;                                                    // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B9   (0x0003)  MISSED
	int32_t                                            NumMatches;                                                 // 0x00BC   (0x0004)  
	bool                                               UsedFallback;                                               // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00C1   (0x0007)  MISSED
	SDK_UNDEFINED(16,3900) /* FString */               __um(ConnectingToUser);                                     // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,3901) /* FString */               __um(SearchParams);                                         // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,3902) /* FString */               __um(SearchResultSettings);                                 // 0x00E8   (0x0010)  
	unsigned char                                      UnknownData02_6[0xA0];                                      // 0x00F8   (0x00A0)  MISSED
};

/// Struct /Script/DBDAnalytics.MatchmakingHostCreatedAnalytics
/// Size: 0x0070 (0x0000B8 - 0x000128)
struct FMatchmakingHostCreatedAnalytics : FUniquelyIdentifiedAnalytic
{ 
	int32_t                                            NumPublicConnections;                                       // 0x00B8   (0x0004)  
	int32_t                                            NumPrivateConnections;                                      // 0x00BC   (0x0004)  
	bool                                               ShouldAdvertise;                                            // 0x00C0   (0x0001)  
	bool                                               IsLANMatch;                                                 // 0x00C1   (0x0001)  
	bool                                               AllowInvites;                                               // 0x00C2   (0x0001)  
	bool                                               UsesPresence;                                               // 0x00C3   (0x0001)  
	bool                                               AllowJoinViaPresenceFriendsOnly;                            // 0x00C4   (0x0001)  
	bool                                               AllowJoinInProgress;                                        // 0x00C5   (0x0001)  
	bool                                               AllowJoinViaPresence;                                       // 0x00C6   (0x0001)  
	bool                                               success;                                                    // 0x00C7   (0x0001)  
	SDK_UNDEFINED(16,3903) /* FString */               __um(HostSettings);                                         // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x00D8   (0x0050)  MISSED
};

/// Struct /Script/DBDAnalytics.MatchmakingJoinCompleteAnalytics
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
struct FMatchmakingJoinCompleteAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3904) /* FString */               __um(SessionName);                                          // 0x00B8   (0x0010)  
	int32_t                                            Result;                                                     // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Struct /Script/DBDAnalytics.MatchmakingJoinSessionAnalytics
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
struct FMatchmakingJoinSessionAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3905) /* FString */               __um(Log);                                                  // 0x00B8   (0x0010)  
};

/// Struct /Script/DBDAnalytics.MatchmakingApproveLoginAnalytics
/// Size: 0x0028 (0x0000B8 - 0x0000E0)
struct FMatchmakingApproveLoginAnalytics : FUniquelyIdentifiedAnalytic
{ 
	int32_t                                            CurrentPlayers;                                             // 0x00B8   (0x0004)  
	bool                                               success;                                                    // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00BD   (0x0003)  MISSED
	SDK_UNDEFINED(16,3906) /* FString */               __um(Error);                                                // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,3907) /* FString */               __um(JoiningUserID);                                        // 0x00D0   (0x0010)  
};

/// Struct /Script/DBDAnalytics.WaitTimeAnalytics
/// Size: 0x0080 (0x0000B8 - 0x000138)
struct FWaitTimeAnalytics : FUniquelyIdentifiedAnalytic
{ 
	float                                              EnterLobbyWaitTime;                                         // 0x00B8   (0x0004)  
	float                                              EnterMatchWaitTime;                                         // 0x00BC   (0x0004)  
	SDK_UNDEFINED(16,3908) /* FString */               __um(MatchWaitStartUtc);                                    // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,3909) /* FString */               __um(MatchWaitStopUtc);                                     // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,3910) /* FString */               __um(LobbyWaitStartUtc);                                    // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,3911) /* FString */               __um(LobbyWaitStopUtc);                                     // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,3912) /* FString */               __um(LobbyWaitStopReason);                                  // 0x0100   (0x0010)  
	SDK_UNDEFINED(16,3913) /* FString */               __um(MatchID);                                              // 0x0110   (0x0010)  
	EGameType                                          GameMode;                                                   // 0x0120   (0x0001)  
	EPlayerRole                                        Role;                                                       // 0x0121   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0122   (0x0002)  MISSED
	int32_t                                            PartySize;                                                  // 0x0124   (0x0004)  
	int32_t                                            Rank;                                                       // 0x0128   (0x0004)  
	int32_t                                            RankDifference;                                             // 0x012C   (0x0004)  
	int32_t                                            DaysSinceReset;                                             // 0x0130   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0134   (0x0004)  MISSED
};

/// Struct /Script/DBDAnalytics.QueueAnalytics
/// Size: 0x00B8 (0x0000B8 - 0x000170)
struct FQueueAnalytics : FUniquelyIdentifiedAnalytic
{ 
	int32_t                                            TimesQueuedSurvivor;                                        // 0x00B8   (0x0004)  
	int32_t                                            TimesQueuedKiller;                                          // 0x00BC   (0x0004)  
	int32_t                                            MatchesAsSurvivor;                                          // 0x00C0   (0x0004)  
	int32_t                                            MatchesAsKiller;                                            // 0x00C4   (0x0004)  
	SDK_UNDEFINED(16,3914) /* FString */               __um(SelectedCountry);                                      // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,3915) /* FString */               __um(playerName);                                           // 0x00D8   (0x0010)  
	bool                                               FirstTimePlaying;                                           // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00E9   (0x0003)  MISSED
	int32_t                                            CumulativeMatches;                                          // 0x00EC   (0x0004)  
	int32_t                                            CumulativeMatchesAsSurvivor;                                // 0x00F0   (0x0004)  
	int32_t                                            CumulativeMatchesAsKiller;                                  // 0x00F4   (0x0004)  
	SDK_UNDEFINED(16,3916) /* FString */               __um(LastMatchTimestamp);                                   // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,3917) /* FString */               __um(SessionStartTimestamp);                                // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,3918) /* FString */               __um(SessionEndTimestamp);                                  // 0x0118   (0x0010)  
	SDK_UNDEFINED(16,3919) /* FString */               __um(LastSessionTimestamp);                                 // 0x0128   (0x0010)  
	int32_t                                            CumulativeSessions;                                         // 0x0138   (0x0004)  
	float                                              CumulativePlaytime;                                         // 0x013C   (0x0004)  
	float                                              TimeInCharacterMenu;                                        // 0x0140   (0x0004)  
	float                                              TimeInBloodwebMenu;                                         // 0x0144   (0x0004)  
	float                                              TimeInLoadoutMenu;                                          // 0x0148   (0x0004)  
	float                                              TimeInCustomizationMenu;                                    // 0x014C   (0x0004)  
	float                                              TimeInFearMarket;                                           // 0x0150   (0x0004)  
	float                                              TimeInTallyScreen;                                          // 0x0154   (0x0004)  
	float                                              TimeInGameMatch;                                            // 0x0158   (0x0004)  
	float                                              TimeInHelpMenu;                                             // 0x015C   (0x0004)  
	float                                              TimeInOfflineLobby;                                         // 0x0160   (0x0004)  
	float                                              TimeInOfflineLobbySurvivorGroup;                            // 0x0164   (0x0004)  
	float                                              TimeInOnlineLobby;                                          // 0x0168   (0x0004)  
	float                                              TimeInOnlineLobbySurvivorGroup;                             // 0x016C   (0x0004)  
};

/// Struct /Script/DBDAnalytics.MatchRatingAnalytics
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
struct FMatchRatingAnalytics : FUniquelyIdentifiedAnalytic
{ 
	int32_t                                            Rating;                                                     // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00BC   (0x0004)  MISSED
	SDK_UNDEFINED(16,3920) /* FString */               __um(MatchID);                                              // 0x00C0   (0x0010)  
};

/// Struct /Script/DBDAnalytics.MemoryUsageAnalytics
/// Size: 0x0040 (0x0000B8 - 0x0000F8)
struct FMemoryUsageAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3921) /* FString */               __um(GameFlowStep);                                         // 0x00B8   (0x0010)  
	int64_t                                            TotalPhysical;                                              // 0x00C8   (0x0008)  
	int64_t                                            TotalVirtual;                                               // 0x00D0   (0x0008)  
	int64_t                                            PeakUsedPhysical;                                           // 0x00D8   (0x0008)  
	int64_t                                            PeakUsedVirtual;                                            // 0x00E0   (0x0008)  
	int64_t                                            AvailablePhysical;                                          // 0x00E8   (0x0008)  
	int64_t                                            AvailableVirtual;                                           // 0x00F0   (0x0008)  
};

/// Struct /Script/DBDAnalytics.MenuFlowTabData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FMenuFlowTabData
{ 
	SDK_UNDEFINED(16,3922) /* FString */               __um(CurrentTab);                                           // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,3923) /* FString */               __um(PreviousTab);                                          // 0x0010   (0x0010)  
	float                                              TimeOnPreviousTab;                                          // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	SDK_UNDEFINED(16,3924) /* FString */               __um(TabChangeTimestamp);                                   // 0x0028   (0x0010)  
};

/// Struct /Script/DBDAnalytics.MenuFlowButtonPressData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMenuFlowButtonPressData
{ 
	SDK_UNDEFINED(16,3925) /* FString */               __um(Button);                                               // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,3926) /* FString */               __um(ButtonPressTimestamp);                                 // 0x0010   (0x0010)  
};

/// Struct /Script/DBDAnalytics.MenuFlowAnalytics
/// Size: 0x0078 (0x0000B8 - 0x000130)
struct FMenuFlowAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3927) /* FString */               __um(CurrentContext);                                       // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3928) /* FString */               __um(PreviousContext);                                      // 0x00C8   (0x0010)  
	float                                              TimeOnPreviousContext;                                      // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00DC   (0x0004)  MISSED
	SDK_UNDEFINED(16,3929) /* FString */               __um(ContextChangeTimetamp);                                // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,3930) /* FString */               __um(MatchID);                                              // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,3931) /* FString */               __um(LobbyId);                                              // 0x0100   (0x0010)  
	TArray<FMenuFlowTabData>                           Tabs;                                                       // 0x0110   (0x0010)  
	TArray<FMenuFlowButtonPressData>                   Buttons;                                                    // 0x0120   (0x0010)  
};

/// Struct /Script/DBDAnalytics.StoreMenuFlowAnalytics
/// Size: 0x0030 (0x0000B8 - 0x0000E8)
struct FStoreMenuFlowAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3932) /* FString */               __um(EventTimestamp);                                       // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3933) /* FString */               __um(EventName);                                            // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,3934) /* FString */               __um(Data);                                                 // 0x00D8   (0x0010)  
};

/// Struct /Script/DBDAnalytics.OnboardingAnalytics
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
struct FOnboardingAnalytics : FUniquelyIdentifiedAnalytic
{ 
	int32_t                                            tabIndex;                                                   // 0x00B8   (0x0004)  
	int32_t                                            GameManualIndex;                                            // 0x00BC   (0x0004)  
	SDK_UNDEFINED(16,3935) /* FString */               __um(EventTimestamp);                                       // 0x00C0   (0x0010)  
};

/// Struct /Script/DBDAnalytics.OnlineSessionErrorAnalytics
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
struct FOnlineSessionErrorAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3936) /* FString */               __um(Reason);                                               // 0x00B8   (0x0010)  
};

/// Struct /Script/DBDAnalytics.PakValidationAnalytics
/// Size: 0x0028 (0x0000B8 - 0x0000E0)
struct FPakValidationAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3937) /* FString */               __um(ErrorType);                                            // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3938) /* FString */               __um(Filename);                                             // 0x00C8   (0x0010)  
	int32_t                                            ChunkIndex;                                                 // 0x00D8   (0x0004)  
	uint32_t                                           ReceivedHash;                                               // 0x00DC   (0x0004)  
};

/// Struct /Script/DBDAnalytics.PartyAnalytics
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
struct FPartyAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3939) /* FString */               __um(PartyId);                                              // 0x00B8   (0x0010)  
};

/// Struct /Script/DBDAnalytics.PartyErrorAnalytics
/// Size: 0x0010 (0x0000C8 - 0x0000D8)
struct FPartyErrorAnalytics : FPartyAnalytics
{ 
	SDK_UNDEFINED(16,3940) /* FString */               __um(Error);                                                // 0x00C8   (0x0010)  
};

/// Struct /Script/DBDAnalytics.PartyDisbandedAnalytics
/// Size: 0x0010 (0x0000C8 - 0x0000D8)
struct FPartyDisbandedAnalytics : FPartyAnalytics
{ 
	SDK_UNDEFINED(16,3941) /* FString */               __um(Error);                                                // 0x00C8   (0x0010)  
};

/// Struct /Script/DBDAnalytics.PartyJoinedAnalytics
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
struct FPartyJoinedAnalytics : FPartyAnalytics
{ 
	bool                                               success;                                                    // 0x00C8   (0x0001)  
	bool                                               FromJoinRequest;                                            // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00CA   (0x0006)  MISSED
};

/// Struct /Script/DBDAnalytics.PartyGuestJoinedAnalytics
/// Size: 0x0020 (0x0000C8 - 0x0000E8)
struct FPartyGuestJoinedAnalytics : FPartyAnalytics
{ 
	SDK_UNDEFINED(16,3942) /* FString */               __um(InviteeId);                                            // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,3943) /* FString */               __um(InviteeName);                                          // 0x00D8   (0x0010)  
};

/// Struct /Script/DBDAnalytics.PartyInvitedAnalytics
/// Size: 0x0018 (0x0000C8 - 0x0000E0)
struct FPartyInvitedAnalytics : FPartyAnalytics
{ 
	SDK_UNDEFINED(16,3944) /* FString */               __um(InviteeId);                                            // 0x00C8   (0x0010)  
	bool                                               success;                                                    // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00D9   (0x0007)  MISSED
};

/// Struct /Script/DBDAnalytics.PartyCreatedAnalytics
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
struct FPartyCreatedAnalytics : FPartyAnalytics
{ 
	bool                                               success;                                                    // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00C9   (0x0007)  MISSED
};

/// Struct /Script/DBDAnalytics.PartyJoinFailureAnalytics
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
struct FPartyJoinFailureAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3945) /* FString */               __um(PartyMembersFriendshipStatus);                         // 0x00B8   (0x0010)  
	uint32_t                                           NumKrakenConfirmedFriendsInParty;                           // 0x00C8   (0x0004)  
	uint32_t                                           NumPlatformAcceptedFriendsInParty;                          // 0x00CC   (0x0004)  
};

/// Struct /Script/DBDAnalytics.PerformanceAnalytics
/// Size: 0x0278 (0x0000B8 - 0x000330)
struct FPerformanceAnalytics : FUniquelyIdentifiedAnalytic
{ 
	float                                              AverageFPS;                                                 // 0x00B8   (0x0004)  
	float                                              MinFPS;                                                     // 0x00BC   (0x0004)  
	float                                              MaxFPS;                                                     // 0x00C0   (0x0004)  
	float                                              AverageFrameTime;                                           // 0x00C4   (0x0004)  
	float                                              MinFrameTime;                                               // 0x00C8   (0x0004)  
	float                                              MaxFrameTime;                                               // 0x00CC   (0x0004)  
	float                                              StandardDeviationFrameTime;                                 // 0x00D0   (0x0004)  
	float                                              PercentBelow60msFrameTime;                                  // 0x00D4   (0x0004)  
	float                                              PercentBelow47msFrameTime;                                  // 0x00D8   (0x0004)  
	float                                              PercentBelow34msFrameTime;                                  // 0x00DC   (0x0004)  
	float                                              PercentBelow17msFrameTime;                                  // 0x00E0   (0x0004)  
	float                                              PercentHitchesFrameTime;                                    // 0x00E4   (0x0004)  
	float                                              AverageRenderThreadTime;                                    // 0x00E8   (0x0004)  
	float                                              MinRenderThreadTime;                                        // 0x00EC   (0x0004)  
	float                                              MaxRenderThreadTime;                                        // 0x00F0   (0x0004)  
	float                                              StandardDeviationRenderThreadTime;                          // 0x00F4   (0x0004)  
	float                                              PercentBelow60msRenderThreadTime;                           // 0x00F8   (0x0004)  
	float                                              PercentBelow47msRenderThreadTime;                           // 0x00FC   (0x0004)  
	float                                              PercentBelow34msRenderThreadTime;                           // 0x0100   (0x0004)  
	float                                              PercentBelow17msRenderThreadTime;                           // 0x0104   (0x0004)  
	float                                              PercentHitchesRenderThreadTime;                             // 0x0108   (0x0004)  
	float                                              AverageGameThreadTime;                                      // 0x010C   (0x0004)  
	float                                              MinGameThreadTime;                                          // 0x0110   (0x0004)  
	float                                              MaxGameThreadTime;                                          // 0x0114   (0x0004)  
	float                                              StandardDeviationGameThreadTime;                            // 0x0118   (0x0004)  
	float                                              PercentBelow60msGameThreadTime;                             // 0x011C   (0x0004)  
	float                                              PercentBelow47msGameThreadTime;                             // 0x0120   (0x0004)  
	float                                              PercentBelow34msGameThreadTime;                             // 0x0124   (0x0004)  
	float                                              PercentBelow17msGameThreadTime;                             // 0x0128   (0x0004)  
	float                                              PercentHitchesGameThreadTime;                               // 0x012C   (0x0004)  
	float                                              AverageRhiThreadTime;                                       // 0x0130   (0x0004)  
	float                                              MinRhiThreadTime;                                           // 0x0134   (0x0004)  
	float                                              MaxRhiThreadTime;                                           // 0x0138   (0x0004)  
	float                                              StandardDeviationRhiThreadTime;                             // 0x013C   (0x0004)  
	float                                              PercentBelow60msRhiThreadTime;                              // 0x0140   (0x0004)  
	float                                              PercentBelow47msRhiThreadTime;                              // 0x0144   (0x0004)  
	float                                              PercentBelow34msRhiThreadTime;                              // 0x0148   (0x0004)  
	float                                              PercentBelow17msRhiThreadTime;                              // 0x014C   (0x0004)  
	float                                              PercentHitchesRhiThreadTime;                                // 0x0150   (0x0004)  
	float                                              AverageGpuTime;                                             // 0x0154   (0x0004)  
	float                                              MinGpuTime;                                                 // 0x0158   (0x0004)  
	float                                              MaxGpuTime;                                                 // 0x015C   (0x0004)  
	float                                              StandardDeviationGpuTime;                                   // 0x0160   (0x0004)  
	float                                              PercentBelow60msGpuTime;                                    // 0x0164   (0x0004)  
	float                                              PercentBelow47msGpuTime;                                    // 0x0168   (0x0004)  
	float                                              PercentBelow34msGpuTime;                                    // 0x016C   (0x0004)  
	float                                              PercentBelow17msGpuTime;                                    // 0x0170   (0x0004)  
	float                                              PercentHitchesGpuTime;                                      // 0x0174   (0x0004)  
	float                                              AverageSlateTickTime;                                       // 0x0178   (0x0004)  
	float                                              AverageSlateRenderThreadTime;                               // 0x017C   (0x0004)  
	float                                              AverageSlateDrawWindowTime;                                 // 0x0180   (0x0004)  
	float                                              AdaptiveShadowMapAverageNumShadowPrimitivesPerCapture;      // 0x0184   (0x0004)  
	float                                              AdaptiveShadowMapAverageActiveLightsPerFrame;               // 0x0188   (0x0004)  
	float                                              AdaptiveShadowMapPercentageOfFrameCapturingTiles;           // 0x018C   (0x0004)  
	float                                              HitchesPerMinute50ms;                                       // 0x0190   (0x0004)  
	float                                              HitchesPerMinute100ms;                                      // 0x0194   (0x0004)  
	float                                              HitchesPerMinute200ms;                                      // 0x0198   (0x0004)  
	float                                              HitchesPerMinute400ms;                                      // 0x019C   (0x0004)  
	float                                              HitchesPerMinute800ms;                                      // 0x01A0   (0x0004)  
	float                                              HitchesPerMinute1600ms;                                     // 0x01A4   (0x0004)  
	float                                              HitchesPerMinute3200ms;                                     // 0x01A8   (0x0004)  
	float                                              HitchesPerMinute6400ms;                                     // 0x01AC   (0x0004)  
	float                                              HitchesPerMinute12800ms;                                    // 0x01B0   (0x0004)  
	float                                              AverageInputLatency;                                        // 0x01B4   (0x0004)  
	float                                              MinInputLatency;                                            // 0x01B8   (0x0004)  
	float                                              MaxInputLatency;                                            // 0x01BC   (0x0004)  
	float                                              AverageOutputLatency;                                       // 0x01C0   (0x0004)  
	float                                              MinOutputLatency;                                           // 0x01C4   (0x0004)  
	float                                              MaxOutputLatency;                                           // 0x01C8   (0x0004)  
	float                                              AverageStandardDeviation;                                   // 0x01CC   (0x0004)  
	float                                              MinStandardDeviation;                                       // 0x01D0   (0x0004)  
	float                                              MaxStandardDeviation;                                       // 0x01D4   (0x0004)  
	SDK_UNDEFINED(16,3946) /* FString */               __um(DeviceProfile);                                        // 0x01D8   (0x0010)  
	float                                              AverageMemoryAvailablePhysicalMB;                           // 0x01E8   (0x0004)  
	float                                              MinMemoryAvailablePhysicalMB;                               // 0x01EC   (0x0004)  
	float                                              MaxMemoryAvailablePhysicalMB;                               // 0x01F0   (0x0004)  
	float                                              AverageMemoryAvailableVirtualMB;                            // 0x01F4   (0x0004)  
	float                                              MinMemoryAvailableVirtualMB;                                // 0x01F8   (0x0004)  
	float                                              MaxMemoryAvailableVirtualMB;                                // 0x01FC   (0x0004)  
	float                                              AverageMemoryTotalPhysicalMB;                               // 0x0200   (0x0004)  
	float                                              MinMemoryTotalPhysicalMB;                                   // 0x0204   (0x0004)  
	float                                              MaxMemoryTotalPhysicalMB;                                   // 0x0208   (0x0004)  
	float                                              AverageMemoryTotalVirtualMB;                                // 0x020C   (0x0004)  
	float                                              MinMemoryTotalVirtualMB;                                    // 0x0210   (0x0004)  
	float                                              MaxMemoryTotalVirtualMB;                                    // 0x0214   (0x0004)  
	float                                              AverageMemoryUsedPhysicalMB;                                // 0x0218   (0x0004)  
	float                                              MinMemoryUsedPhysicalMB;                                    // 0x021C   (0x0004)  
	float                                              MaxMemoryUsedPhysicalMB;                                    // 0x0220   (0x0004)  
	float                                              AverageMemoryUsedVirtualMB;                                 // 0x0224   (0x0004)  
	float                                              MinMemoryUsedVirtualMB;                                     // 0x0228   (0x0004)  
	float                                              MaxMemoryUsedVirtualMB;                                     // 0x022C   (0x0004)  
	float                                              AveragePing;                                                // 0x0230   (0x0004)  
	float                                              MinPing;                                                    // 0x0234   (0x0004)  
	float                                              MaxPing;                                                    // 0x0238   (0x0004)  
	int32_t                                            DynamicResolutionScreenPercentageAvg;                       // 0x023C   (0x0004)  
	int32_t                                            DynamicResolutionScreenPercentageMax;                       // 0x0240   (0x0004)  
	int32_t                                            DynamicResolutionScreenPercentageMin;                       // 0x0244   (0x0004)  
	int32_t                                            MatchCount;                                                 // 0x0248   (0x0004)  
	int32_t                                            TotalFrames;                                                // 0x024C   (0x0004)  
	float                                              ResolutionQuality;                                          // 0x0250   (0x0004)  
	int32_t                                            ViewDistanceQuality;                                        // 0x0254   (0x0004)  
	int32_t                                            AntiAliasingQuality;                                        // 0x0258   (0x0004)  
	int32_t                                            AntiAliasingMode;                                           // 0x025C   (0x0004)  
	float                                              FrameCap;                                                   // 0x0260   (0x0004)  
	bool                                               isVsyncEnable;                                              // 0x0264   (0x0001)  
	bool                                               isFSREnabled;                                               // 0x0265   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0266   (0x0002)  MISSED
	float                                              SharpnessValue;                                             // 0x0268   (0x0004)  
	int32_t                                            ShadowQuality;                                              // 0x026C   (0x0004)  
	int32_t                                            TextureQuality;                                             // 0x0270   (0x0004)  
	int32_t                                            EffectsQuality;                                             // 0x0274   (0x0004)  
	int32_t                                            FoliageQuality;                                             // 0x0278   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x027C   (0x0004)  MISSED
	SDK_UNDEFINED(16,3947) /* FString */               __um(Scenario);                                             // 0x0280   (0x0010)  
	SDK_UNDEFINED(16,3948) /* FString */               __um(Theme);                                                // 0x0290   (0x0010)  
	SDK_UNDEFINED(16,3949) /* FString */               __um(MapName);                                              // 0x02A0   (0x0010)  
	int32_t                                            TileListCount;                                              // 0x02B0   (0x0004)  
	int32_t                                            Seed;                                                       // 0x02B4   (0x0004)  
	SDK_UNDEFINED(16,3950) /* FString */               __um(characterName);                                        // 0x02B8   (0x0010)  
	SDK_UNDEFINED(16,3951) /* FString */               __um(Cpu);                                                  // 0x02C8   (0x0010)  
	SDK_UNDEFINED(16,3952) /* FString */               __um(GpuAdapter);                                           // 0x02D8   (0x0010)  
	SDK_UNDEFINED(16,3953) /* FString */               __um(MatchID);                                              // 0x02E8   (0x0010)  
	SDK_UNDEFINED(16,3954) /* FString */               __um(RHIName);                                              // 0x02F8   (0x0010)  
	bool                                               IsSample;                                                   // 0x0308   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0309   (0x0007)  MISSED
	SDK_UNDEFINED(16,3955) /* FString */               __um(GameFlowStep);                                         // 0x0310   (0x0010)  
	SDK_UNDEFINED(16,3956) /* FString */               __um(KrakenMatchId);                                        // 0x0320   (0x0010)  
};

/// Struct /Script/DBDAnalytics.PerformanceChartingAnalytics
/// Size: 0x0140 (0x0000B8 - 0x0001F8)
struct FPerformanceChartingAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3957) /* FString */               __um(Scenario);                                             // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3958) /* FString */               __um(Theme);                                                // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,3959) /* FString */               __um(map_name);                                             // 0x00D8   (0x0010)  
	int32_t                                            tile_spawn_count;                                           // 0x00E8   (0x0004)  
	int32_t                                            Seed;                                                       // 0x00EC   (0x0004)  
	SDK_UNDEFINED(16,3960) /* FString */               __um(match_id);                                             // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,3961) /* FString */               __um(character_name);                                       // 0x0100   (0x0010)  
	SDK_UNDEFINED(16,3962) /* FString */               __um(cpu_name);                                             // 0x0110   (0x0010)  
	SDK_UNDEFINED(16,3963) /* FString */               __um(gpu_name);                                             // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,3964) /* FString */               __um(Resolution);                                           // 0x0130   (0x0010)  
	int32_t                                            graphics_quality_level;                                     // 0x0140   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0144   (0x0004)  MISSED
	SDK_UNDEFINED(16,3965) /* FString */               __um(hitch_times);                                          // 0x0148   (0x0010)  
	float                                              target_30_fps;                                              // 0x0158   (0x0004)  
	float                                              target_60_fps;                                              // 0x015C   (0x0004)  
	float                                              target_120_fps;                                             // 0x0160   (0x0004)  
	float                                              measured_perf_time;                                         // 0x0164   (0x0004)  
	float                                              mvp;                                                        // 0x0168   (0x0004)  
	float                                              avg_fps;                                                    // 0x016C   (0x0004)  
	float                                              hitches_per_minute;                                         // 0x0170   (0x0004)  
	float                                              avg_hitch;                                                  // 0x0174   (0x0004)  
	float                                              frame_time_avg;                                             // 0x0178   (0x0004)  
	float                                              frame_time_max;                                             // 0x017C   (0x0004)  
	float                                              frame_time_min;                                             // 0x0180   (0x0004)  
	float                                              game_thread_avg;                                            // 0x0184   (0x0004)  
	float                                              game_thread_hitches_per_min;                                // 0x0188   (0x0004)  
	float                                              game_thread_bound_frames;                                   // 0x018C   (0x0004)  
	float                                              render_thread_avg;                                          // 0x0190   (0x0004)  
	float                                              render_thread_hitches_per_min;                              // 0x0194   (0x0004)  
	float                                              render_thread_bound_frames;                                 // 0x0198   (0x0004)  
	float                                              rhi_thread_avg;                                             // 0x019C   (0x0004)  
	float                                              rhi_thread_hitches_per_min;                                 // 0x01A0   (0x0004)  
	float                                              rhi_thread_bound_frames;                                    // 0x01A4   (0x0004)  
	float                                              gpu_avg;                                                    // 0x01A8   (0x0004)  
	float                                              gpu_hitches_per_min;                                        // 0x01AC   (0x0004)  
	float                                              gpu_bound_frames;                                           // 0x01B0   (0x0004)  
	float                                              draw_calls_avg;                                             // 0x01B4   (0x0004)  
	float                                              draw_calls_max;                                             // 0x01B8   (0x0004)  
	float                                              draw_calls_min;                                             // 0x01BC   (0x0004)  
	float                                              drawn_prims_avg;                                            // 0x01C0   (0x0004)  
	float                                              drawn_prims_max;                                            // 0x01C4   (0x0004)  
	float                                              drawn_prims_min;                                            // 0x01C8   (0x0004)  
	float                                              cpu_memory_peak;                                            // 0x01CC   (0x0004)  
	float                                              cpu_memory_used;                                            // 0x01D0   (0x0004)  
	float                                              streaming_memory_peak;                                      // 0x01D4   (0x0004)  
	float                                              streaming_memory_used;                                      // 0x01D8   (0x0004)  
	float                                              physical_memory_peak;                                       // 0x01DC   (0x0004)  
	float                                              physical_memory_used;                                       // 0x01E0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x01E4   (0x0004)  MISSED
	SDK_UNDEFINED(16,3966) /* FString */               __um(texturegroups_guid);                                   // 0x01E8   (0x0010)  
};

/// Struct /Script/DBDAnalytics.PerkAcquisitionAnalytics
/// Size: 0x0048 (0x0000B8 - 0x000100)
struct FPerkAcquisitionAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3967) /* FString */               __um(characterName);                                        // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3968) /* FString */               __um(perkId);                                               // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,3969) /* FString */               __um(PerkSource);                                           // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,3970) /* FString */               __um(Duplicate);                                            // 0x00E8   (0x0010)  
	int32_t                                            PerkLevel;                                                  // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Struct /Script/DBDAnalytics.BasePerkAnalytics
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
struct FBasePerkAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3971) /* FString */               __um(MatchID);                                              // 0x00B8   (0x0010)  
	float                                              ElapsedMatchTime;                                           // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Struct /Script/DBDAnalytics.FranklinsHitNearDroppedItemAnalytics
/// Size: 0x0020 (0x0000D0 - 0x0000F0)
struct FFranklinsHitNearDroppedItemAnalytics : FBasePerkAnalytics
{ 
	SDK_UNDEFINED(16,3972) /* FString */               __um(HitSurvivorMirrorsId);                                 // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,3973) /* FString */               __um(AttackingSlasherMirrorsId);                            // 0x00E0   (0x0010)  
};

/// Struct /Script/DBDAnalytics.FranklinsDemiseConsumedItemAnalytics
/// Size: 0x0010 (0x0000D0 - 0x0000E0)
struct FFranklinsDemiseConsumedItemAnalytics : FBasePerkAnalytics
{ 
	SDK_UNDEFINED(16,3974) /* FString */               __um(PreviousOwnerSurvivorMirrorsId);                       // 0x00D0   (0x0010)  
};

/// Struct /Script/DBDAnalytics.KnockoutSurvivorFoundAnalytics
/// Size: 0x0020 (0x0000D0 - 0x0000F0)
struct FKnockoutSurvivorFoundAnalytics : FBasePerkAnalytics
{ 
	SDK_UNDEFINED(16,3975) /* FString */               __um(RescuingSurvivorMirrorsId);                            // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,3976) /* FString */               __um(FoundSurvivorMirrorsId);                               // 0x00E0   (0x0010)  
};

/// Struct /Script/DBDAnalytics.TinkererUndetectableInterruptAnalytics
/// Size: 0x0020 (0x0000D0 - 0x0000F0)
struct FTinkererUndetectableInterruptAnalytics : FBasePerkAnalytics
{ 
	SDK_UNDEFINED(16,3977) /* FString */               __um(InterruptedSurvivorMirrorsId);                         // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,3978) /* FString */               __um(InterruptingSlasherMirrorsId);                         // 0x00E0   (0x0010)  
};

/// Struct /Script/DBDAnalytics.TinkererUndetectableHitNearGeneratorAnalytics
/// Size: 0x0020 (0x0000D0 - 0x0000F0)
struct FTinkererUndetectableHitNearGeneratorAnalytics : FBasePerkAnalytics
{ 
	SDK_UNDEFINED(16,3979) /* FString */               __um(HitSurvivorMirrorsId);                                 // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,3980) /* FString */               __um(AttackingSlasherMirrorsId);                            // 0x00E0   (0x0010)  
};

/// Struct /Script/DBDAnalytics.LightbornAuraRevealedAnalytics
/// Size: 0x0020 (0x0000D0 - 0x0000F0)
struct FLightbornAuraRevealedAnalytics : FBasePerkAnalytics
{ 
	SDK_UNDEFINED(16,3981) /* FString */               __um(RevealedSurvivorMirrorsId);                            // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,3982) /* FString */               __um(FlashlightedSlasherMirrorsId);                         // 0x00E0   (0x0010)  
};

/// Struct /Script/DBDAnalytics.PlayerCardAnimationSettingAnalytics
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
struct FPlayerCardAnimationSettingAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3983) /* FString */               __um(AnimationSetting);                                     // 0x00B8   (0x0010)  
};

/// Struct /Script/DBDAnalytics.PlayerCardMenuTabAnalytics
/// Size: 0x0028 (0x0000B8 - 0x0000E0)
struct FPlayerCardMenuTabAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3984) /* FString */               __um(Provider);                                             // 0x00B8   (0x0010)  
	int32_t                                            tabIndex;                                                   // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	SDK_UNDEFINED(16,3985) /* FString */               __um(FromScreen);                                           // 0x00D0   (0x0010)  
};

/// Struct /Script/DBDAnalytics.PlayerCardEquippedAnalytics
/// Size: 0x0030 (0x0000B8 - 0x0000E8)
struct FPlayerCardEquippedAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3986) /* FString */               __um(Badge);                                                // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3987) /* FString */               __um(Banner);                                               // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,3988) /* FString */               __um(FromScreen);                                           // 0x00D8   (0x0010)  
};

/// Struct /Script/DBDAnalytics.HookAnalytics
/// Size: 0x00A8 (0x0000B8 - 0x000160)
struct FHookAnalytics : FUniquelyIdentifiedAnalytic
{ 
	float                                              HookStartTime;                                              // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00BC   (0x0004)  MISSED
	SDK_UNDEFINED(16,3989) /* FString */               __um(MirrorsIdSurvivor);                                    // 0x00C0   (0x0010)  
	char                                               SurvivorIsABot;                                             // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00D1   (0x0007)  MISSED
	SDK_UNDEFINED(16,3990) /* FString */               __um(MirrorsIdKiller);                                      // 0x00D8   (0x0010)  
	char                                               KillerIsABot;                                               // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00E9   (0x0007)  MISSED
	SDK_UNDEFINED(16,3991) /* FString */               __um(MirrorsIdRescuer);                                     // 0x00F0   (0x0010)  
	char                                               RescuerIsABot;                                              // 0x0100   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0101   (0x0003)  MISSED
	int32_t                                            TimesOnHook;                                                // 0x0104   (0x0004)  
	SDK_UNDEFINED(16,3992) /* FString */               __um(Outcome);                                              // 0x0108   (0x0010)  
	float                                              HookDuration;                                               // 0x0118   (0x0004)  
	int32_t                                            EscapeAttemptStart;                                         // 0x011C   (0x0004)  
	int32_t                                            EscapeAttemptFull;                                          // 0x0120   (0x0004)  
	int32_t                                            SurvivorsRemaining;                                         // 0x0124   (0x0004)  
	int32_t                                            NumberOfActiveSurvivorsStart;                               // 0x0128   (0x0004)  
	int32_t                                            NumberOfActiveSurvivorsEnd;                                 // 0x012C   (0x0004)  
	int32_t                                            NumberOfActiveSurvivorsTotal;                               // 0x0130   (0x0004)  
	float                                              DurationCampFace;                                           // 0x0134   (0x0004)  
	float                                              DurationCampHard;                                           // 0x0138   (0x0004)  
	float                                              DurationCampSoft;                                           // 0x013C   (0x0004)  
	int32_t                                            NumberOfRescuers;                                           // 0x0140   (0x0004)  
	float                                              TimeForFirstRescuer;                                        // 0x0144   (0x0004)  
	SDK_UNDEFINED(16,3993) /* FString */               __um(MatchID);                                              // 0x0148   (0x0010)  
	bool                                               ReverseBearTrapOn;                                          // 0x0158   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0159   (0x0007)  MISSED
};

/// Struct /Script/DBDAnalytics.PlayerStatusEffectUpdateAnalytics
/// Size: 0x0028 (0x0000B8 - 0x0000E0)
struct FPlayerStatusEffectUpdateAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3994) /* FString */               __um(MatchID);                                              // 0x00B8   (0x0010)  
	int32_t                                            ElapsedMatchTime;                                           // 0x00C8   (0x0004)  
	int32_t                                            NbOfConcurrentStatusEffects;                                // 0x00CC   (0x0004)  
	SDK_UNDEFINED(16,3995) /* TArray<FString> */       __um(StatusEffects);                                        // 0x00D0   (0x0010)  
};

/// Struct /Script/DBDAnalytics.PostGameAnalyticsBase
/// Size: 0x0090 (0x0000B8 - 0x000148)
struct FPostGameAnalyticsBase : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,3996) /* FString */               __um(MatchID);                                              // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3997) /* FString */               __um(KrakenMatchId);                                        // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,3998) /* FString */               __um(GameMode);                                             // 0x00D8   (0x0010)  
	int32_t                                            BloodwebPoints;                                             // 0x00E8   (0x0004)  
	float                                              GameDuration;                                               // 0x00EC   (0x0004)  
	SDK_UNDEFINED(16,3999) /* FString */               __um(characterName);                                        // 0x00F0   (0x0010)  
	int32_t                                            Rank;                                                       // 0x0100   (0x0004)  
	int32_t                                            PipsGainedOrLost;                                           // 0x0104   (0x0004)  
	SDK_UNDEFINED(16,4000) /* FString */               __um(MatchEndReason);                                       // 0x0108   (0x0010)  
	bool                                               IsTutorialBotMatch;                                         // 0x0118   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0119   (0x0007)  MISSED
	SDK_UNDEFINED(16,4001) /* FString */               __um(OnboardingModeId);                                     // 0x0120   (0x0010)  
	int32_t                                            OnboardingEnabled;                                          // 0x0130   (0x0004)  
	int32_t                                            OnboardingABTestingEnabled;                                 // 0x0134   (0x0004)  
	int32_t                                            OnboardingNumberActiveModes;                                // 0x0138   (0x0004)  
	int32_t                                            OnboardingNewAssignedMode;                                  // 0x013C   (0x0004)  
	float                                              ExactPing;                                                  // 0x0140   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0144   (0x0004)  MISSED
};

/// Struct /Script/DBDAnalytics.PostGame_KillerAnalytics
/// Size: 0x0078 (0x000148 - 0x0001C0)
struct FPostGame_KillerAnalytics : FPostGameAnalyticsBase
{ 
	int32_t                                            Brutality;                                                  // 0x0148   (0x0004)  
	int32_t                                            Deviousness;                                                // 0x014C   (0x0004)  
	int32_t                                            Hunter;                                                     // 0x0150   (0x0004)  
	int32_t                                            Sacrifice;                                                  // 0x0154   (0x0004)  
	int32_t                                            BrutalityBonus;                                             // 0x0158   (0x0004)  
	int32_t                                            DeviousnessBonus;                                           // 0x015C   (0x0004)  
	int32_t                                            HunterBonus;                                                // 0x0160   (0x0004)  
	int32_t                                            SacrificeBonus;                                             // 0x0164   (0x0004)  
	int32_t                                            BonusEvent;                                                 // 0x0168   (0x0004)  
	int32_t                                            MatchIncentive;                                             // 0x016C   (0x0004)  
	int32_t                                            EscapeesCount;                                              // 0x0170   (0x0004)  
	int32_t                                            SacrificedCount;                                            // 0x0174   (0x0004)  
	int32_t                                            KilledCount;                                                // 0x0178   (0x0004)  
	int32_t                                            DisconnectCount;                                            // 0x017C   (0x0004)  
	int32_t                                            BotCount;                                                   // 0x0180   (0x0004)  
	int32_t                                            TimeOpenGate;                                               // 0x0184   (0x0004)  
	SDK_UNDEFINED(16,4002) /* FString */               __um(SurvivorSpawningPosition);                             // 0x0188   (0x0010)  
	int32_t                                            GeneratorsDone;                                             // 0x0198   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x019C   (0x0004)  MISSED
	SDK_UNDEFINED(16,4003) /* FString */               __um(EGS_starter);                                          // 0x01A0   (0x0010)  
	float                                              EGS_time;                                                   // 0x01B0   (0x0004)  
	float                                              EGS_duration;                                               // 0x01B4   (0x0004)  
	int32_t                                            EGS_sacrifice;                                              // 0x01B8   (0x0004)  
	bool                                               EGS_reachEnd;                                               // 0x01BC   (0x0001)  
	bool                                               UsedController;                                             // 0x01BD   (0x0001)  
	bool                                               UsedKeyboard;                                               // 0x01BE   (0x0001)  
	bool                                               UsedHapticsVibration;                                       // 0x01BF   (0x0001)  
};

/// Struct /Script/DBDAnalytics.PostGame_SurvivorAnalytics
/// Size: 0x0048 (0x000148 - 0x000190)
struct FPostGame_SurvivorAnalytics : FPostGameAnalyticsBase
{ 
	int32_t                                            Objectives;                                                 // 0x0148   (0x0004)  
	int32_t                                            Survival;                                                   // 0x014C   (0x0004)  
	int32_t                                            Altruism;                                                   // 0x0150   (0x0004)  
	int32_t                                            Boldness;                                                   // 0x0154   (0x0004)  
	int32_t                                            ObjectivesBonus;                                            // 0x0158   (0x0004)  
	int32_t                                            SurvivalBonus;                                              // 0x015C   (0x0004)  
	int32_t                                            AltruismBonus;                                              // 0x0160   (0x0004)  
	int32_t                                            BoldnessBonus;                                              // 0x0164   (0x0004)  
	int32_t                                            BonusEvent;                                                 // 0x0168   (0x0004)  
	int32_t                                            MatchIncentive;                                             // 0x016C   (0x0004)  
	SDK_UNDEFINED(16,4004) /* FString */               __um(Outcome);                                              // 0x0170   (0x0010)  
	ECamperDamageState                                 damageState;                                                // 0x0180   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0181   (0x0003)  MISSED
	int32_t                                            HookedCount;                                                // 0x0184   (0x0004)  
	bool                                               UsedController;                                             // 0x0188   (0x0001)  
	bool                                               UsedKeyboard;                                               // 0x0189   (0x0001)  
	bool                                               UsedHapticsVibration;                                       // 0x018A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x018B   (0x0005)  MISSED
};

/// Struct /Script/DBDAnalytics.PrestigeRewardItemAnalytic
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPrestigeRewardItemAnalytic
{ 
	SDK_UNDEFINED(16,4005) /* FString */               __um(Type);                                                 // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,4006) /* FString */               __um(ID);                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/DBDAnalytics.PrestigeLevelUpAnalytics
/// Size: 0x0028 (0x0000B8 - 0x0000E0)
struct FPrestigeLevelUpAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,4007) /* FString */               __um(characterName);                                        // 0x00B8   (0x0010)  
	int32_t                                            NewPrestigeLevel;                                           // 0x00C8   (0x0004)  
	int32_t                                            BloodpointsSpent;                                           // 0x00CC   (0x0004)  
	TArray<FPrestigeRewardItemAnalytic>                ItemRewards;                                                // 0x00D0   (0x0010)  
};

/// Struct /Script/DBDAnalytics.ProceduralGenerationAnalytics
/// Size: 0x0118 (0x0000B8 - 0x0001D0)
struct FProceduralGenerationAnalytics : FUniquelyIdentifiedAnalytic
{ 
	int32_t                                            GenerationSeed;                                             // 0x00B8   (0x0004)  
	int32_t                                            MapSeed;                                                    // 0x00BC   (0x0004)  
	SDK_UNDEFINED(16,4008) /* FString */               __um(MapName);                                              // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,4009) /* FString */               __um(Procedural_MeatLocker_Small);                          // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,4010) /* FString */               __um(Procedural_MeatLocker_Big);                            // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,4011) /* FString */               __um(Procedural_Searchable);                                // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,4012) /* FString */               __um(Procedural_EdgeObjects);                               // 0x0100   (0x0010)  
	SDK_UNDEFINED(16,4013) /* FString */               __um(Procedural_LivingWorldObjects);                        // 0x0110   (0x0010)  
	SDK_UNDEFINED(16,4014) /* FString */               __um(Procedural_Hatch);                                     // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,4015) /* FString */               __um(Procedural_BookShelves);                               // 0x0130   (0x0010)  
	SDK_UNDEFINED(16,4016) /* FString */               __um(Procedural_BreakableWalls);                            // 0x0140   (0x0010)  
	SDK_UNDEFINED(16,4017) /* FString */               __um(Procedural_Totems);                                    // 0x0150   (0x0010)  
	SDK_UNDEFINED(16,4018) /* FString */               __um(Procedural_QuadrantSpawn);                             // 0x0160   (0x0010)  
	int32_t                                            PalletSpawned;                                              // 0x0170   (0x0004)  
	int32_t                                            PalletProceduralMin;                                        // 0x0174   (0x0004)  
	int32_t                                            PalletProceduralMax;                                        // 0x0178   (0x0004)  
	int32_t                                            PalletProcedural;                                           // 0x017C   (0x0004)  
	int32_t                                            PalletProceduralSetCount;                                   // 0x0180   (0x0004)  
	uint32_t                                           PalletGenerationId;                                         // 0x0184   (0x0004)  
	int32_t                                            PalletGeneric;                                              // 0x0188   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x018C   (0x0004)  MISSED
	SDK_UNDEFINED(16,4019) /* FString */               __um(KillerSpawn);                                          // 0x0190   (0x0010)  
	SDK_UNDEFINED(16,4020) /* FString */               __um(SurvivorSpawn);                                        // 0x01A0   (0x0010)  
	SDK_UNDEFINED(16,4021) /* FString */               __um(MatchID);                                              // 0x01B0   (0x0010)  
	int32_t                                            HookSpawned;                                                // 0x01C0   (0x0004)  
	bool                                               UseFixedMaps;                                               // 0x01C4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x01C5   (0x0003)  MISSED
	float                                              NavmeshGenerationTime;                                      // 0x01C8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x01CC   (0x0004)  MISSED
};

/// Struct /Script/DBDAnalytics.ReportAnalytics
/// Size: 0x0098 (0x0000B8 - 0x000150)
struct FReportAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,4022) /* FString */               __um(ClientIdTransmitter);                                  // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,4023) /* FString */               __um(ClientIdReceiver);                                     // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,4024) /* FString */               __um(MirrorsIdTransmitter);                                 // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,4025) /* FString */               __um(MirrorsIdReceiver);                                    // 0x00E8   (0x0010)  
	EPlayerRole                                        RoleTransmitter;                                            // 0x00F8   (0x0001)  
	EPlayerRole                                        RoleReceiver;                                               // 0x00F9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00FA   (0x0006)  MISSED
	SDK_UNDEFINED(16,4026) /* FString */               __um(MatchID);                                              // 0x0100   (0x0010)  
	SDK_UNDEFINED(16,4027) /* FString */               __um(GameMode);                                             // 0x0110   (0x0010)  
	SDK_UNDEFINED(16,4028) /* FString */               __um(ReportType);                                           // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,4029) /* FString */               __um(ReportCategory);                                       // 0x0130   (0x0010)  
	SDK_UNDEFINED(16,4030) /* FString */               __um(Comments);                                             // 0x0140   (0x0010)  
};

/// Struct /Script/DBDAnalytics.BaseRPCAnalytics
/// Size: 0x0068 (0x0000B8 - 0x000120)
struct FBaseRPCAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,4031) /* FString */               __um(Sender);                                               // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,4032) /* FString */               __um(SenderPlatform);                                       // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,4033) /* FString */               __um(MatchID);                                              // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,4034) /* FString */               __um(MatchType);                                            // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,4035) /* FString */               __um(Role);                                                 // 0x00F8   (0x0010)  
	int32_t                                            characterId;                                                // 0x0108   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x010C   (0x0004)  MISSED
	SDK_UNDEFINED(16,4036) /* FString */               __um(characterName);                                        // 0x0110   (0x0010)  
};

/// Struct /Script/DBDAnalytics.NamedRPCCount
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNamedRPCCount
{ 
	SDK_UNDEFINED(16,4037) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	int32_t                                            Count;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/DBDAnalytics.RPCCountAnalytics
/// Size: 0x0178 (0x000120 - 0x000298)
struct FRPCCountAnalytics : FBaseRPCAnalytics
{ 
	float                                              MatchDuration;                                              // 0x0120   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0124   (0x0004)  MISSED
	SDK_UNDEFINED(16,4038) /* FString */               __um(GameState);                                            // 0x0128   (0x0010)  
	TArray<FNamedRPCCount>                             AllNamedCounts;                                             // 0x0138   (0x0010)  
	int64_t                                            TotalCount;                                                 // 0x0148   (0x0008)  
	SDK_UNDEFINED(16,4039) /* TArray<FString> */       __um(UnlistedNames);                                        // 0x0150   (0x0010)  
	int64_t                                            UnlistedCount;                                              // 0x0160   (0x0008)  
	int32_t                                            CallConsoleCmdOnServer_Server_Count;                        // 0x0168   (0x0004)  
	int32_t                                            ServerAcknowledgePossession_Count;                          // 0x016C   (0x0004)  
	int32_t                                            ServerCheckClientPossession_Count;                          // 0x0170   (0x0004)  
	int32_t                                            ServerCheckClientPossessionReliable_Count;                  // 0x0174   (0x0004)  
	int32_t                                            ServerMovePacked_Count;                                     // 0x0178   (0x0004)  
	int32_t                                            ServerMoveOut_Count;                                        // 0x017C   (0x0004)  
	int32_t                                            ServerNotifyLoadedWorld_Count;                              // 0x0180   (0x0004)  
	int32_t                                            ServerSetSpectatorLocation_Count;                           // 0x0184   (0x0004)  
	int32_t                                            ServerShortTimeout_Count;                                   // 0x0188   (0x0004)  
	int32_t                                            ServerUpdateCamera_Count;                                   // 0x018C   (0x0004)  
	int32_t                                            ServerUpdateLevelVisibility_Count;                          // 0x0190   (0x0004)  
	int32_t                                            ServerUpdateMultipleLevelsVisibility_Count;                 // 0x0194   (0x0004)  
	int32_t                                            ServerVerifyViewTarget_Count;                               // 0x0198   (0x0004)  
	int32_t                                            Server_ActivatePerk_Count;                                  // 0x019C   (0x0004)  
	int32_t                                            Server_ActivateSkillCheck_Count;                            // 0x01A0   (0x0004)  
	int32_t                                            Server_AddMaxSpeedMovementCurve_Count;                      // 0x01A4   (0x0004)  
	int32_t                                            Server_Broadcast_ConfirmChargedCompleted_Count;             // 0x01A8   (0x0004)  
	int32_t                                            Server_Broadcast_StoreInteraction_Count;                    // 0x01AC   (0x0004)  
	int32_t                                            Server_ClearTargets_Count;                                  // 0x01B0   (0x0004)  
	int32_t                                            Server_ClientPassedFence_Count;                             // 0x01B4   (0x0004)  
	int32_t                                            Server_DeactivateSkillCheck_Count;                          // 0x01B8   (0x0004)  
	int32_t                                            Server_EACMessageFromClient_Count;                          // 0x01BC   (0x0004)  
	int32_t                                            Server_HitTarget_Count;                                     // 0x01C0   (0x0004)  
	int32_t                                            Server_SetImmobilized_Count;                                // 0x01C4   (0x0004)  
	int32_t                                            Server_Launch_Count;                                        // 0x01C8   (0x0004)  
	int32_t                                            Server_LoadoutSpawned_Count;                                // 0x01CC   (0x0004)  
	int32_t                                            Server_NotifyStunHasBeenProcessed_Count;                    // 0x01D0   (0x0004)  
	int32_t                                            Server_OnIntroCompleted_Count;                              // 0x01D4   (0x0004)  
	int32_t                                            Server_OnSkillCheckFailure_Count;                           // 0x01D8   (0x0004)  
	int32_t                                            Server_OnSkillCheckSuccess_Count;                           // 0x01DC   (0x0004)  
	int32_t                                            Server_SetOverlappingEscape_Count;                          // 0x01E0   (0x0004)  
	int32_t                                            Server_PlayMontage_Count;                                   // 0x01E4   (0x0004)  
	int32_t                                            Server_PlayerReady_Count;                                   // 0x01E8   (0x0004)  
	int32_t                                            Server_ReceivePlayerProfile_Count;                          // 0x01EC   (0x0004)  
	int32_t                                            Server_RemoveMaxSpeedMovementCurve_Count;                   // 0x01F0   (0x0004)  
	int32_t                                            Server_RenderingFeaturesCompleted_Count;                    // 0x01F4   (0x0004)  
	int32_t                                            Server_ReplicateControlRotation_Count;                      // 0x01F8   (0x0004)  
	int32_t                                            Server_RequestEndGame_Count;                                // 0x01FC   (0x0004)  
	int32_t                                            Server_RequestServerTime_Count;                             // 0x0200   (0x0004)  
	int32_t                                            Server_RequestStateChange_Count;                            // 0x0204   (0x0004)  
	int32_t                                            Server_SendAttackInput_Count;                               // 0x0208   (0x0004)  
	int32_t                                            Server_SendInteractionInput_Count;                          // 0x020C   (0x0004)  
	int32_t                                            Server_SendFastInteractionInput_Count;                      // 0x0210   (0x0004)  
	int32_t                                            Server_SendSecondaryActionPressed_Count;                    // 0x0214   (0x0004)  
	int32_t                                            Server_SetCharacterData_Count;                              // 0x0218   (0x0004)  
	int32_t                                            Server_SetConsecutiveMatchStreak_Count;                     // 0x021C   (0x0004)  
	int32_t                                            Server_SetCustomizationMeshes_Count;                        // 0x0220   (0x0004)  
	int32_t                                            Server_SetEquipedPerks_Count;                               // 0x0224   (0x0004)  
	int32_t                                            Server_SetEquipment_Count;                                  // 0x0228   (0x0004)  
	int32_t                                            Server_SetInteractionToSwapTo_Count;                        // 0x022C   (0x0004)  
	int32_t                                            Server_SetIntroCompleted_Count;                             // 0x0230   (0x0004)  
	int32_t                                            Server_SetIsReadyToPlay_Count;                              // 0x0234   (0x0004)  
	int32_t                                            Server_SetMaxAcceleration_Count;                            // 0x0238   (0x0004)  
	int32_t                                            Server_SetPlayerGameState_Count;                            // 0x023C   (0x0004)  
	int32_t                                            Server_SetPlayerLoadout_Count;                              // 0x0240   (0x0004)  
	int32_t                                            Server_SetPlayerReady_Count;                                // 0x0244   (0x0004)  
	int32_t                                            Server_SetPlayerWiggleSkillCheckEnabled_Count;              // 0x0248   (0x0004)  
	int32_t                                            Server_SetPreloadCompleted_Count;                           // 0x024C   (0x0004)  
	int32_t                                            Server_SetReadyToTravel_Count;                              // 0x0250   (0x0004)  
	int32_t                                            Server_SetSpectatorMode_Count;                              // 0x0254   (0x0004)  
	int32_t                                            Server_SendItemUseInput_Count;                              // 0x0258   (0x0004)  
	int32_t                                            Server_SendLeftRightMashedInput_Count;                      // 0x025C   (0x0004)  
	int32_t                                            Server_SetMaxSpeedMultiplierScalar_Count;                   // 0x0260   (0x0004)  
	int32_t                                            Server_SendMessage_Count;                                   // 0x0264   (0x0004)  
	int32_t                                            Server_SetSettings_Count;                                   // 0x0268   (0x0004)  
	int32_t                                            Server_SetRunInput_Count;                                   // 0x026C   (0x0004)  
	int32_t                                            Server_SetStateStack_Count;                                 // 0x0270   (0x0004)  
	int32_t                                            Server_SetStopSnapping_Count;                               // 0x0274   (0x0004)  
	int32_t                                            Server_StartSnapping_Count;                                 // 0x0278   (0x0004)  
	int32_t                                            Server_StopMontage_Count;                                   // 0x027C   (0x0004)  
	int32_t                                            Server_StoreAttack_Count;                                   // 0x0280   (0x0004)  
	int32_t                                            Server_TryDetectPlayer_Count;                               // 0x0284   (0x0004)  
	int32_t                                            Server_UpdateDiscernedCharacters_Count;                     // 0x0288   (0x0004)  
	int32_t                                            Server_UpdateReplicatedPips_Count;                          // 0x028C   (0x0004)  
	int32_t                                            Server_UpdateScreenAspectRatio_Count;                       // 0x0290   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0294   (0x0004)  MISSED
};

/// Struct /Script/DBDAnalytics.RTMConnectionLostAnalytics
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
struct FRTMConnectionLostAnalytics : FUniquelyIdentifiedAnalytic
{ 
	int32_t                                            ErrorCode;                                                  // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00BC   (0x0004)  MISSED
	SDK_UNDEFINED(16,4040) /* FString */               __um(ErrorMessage);                                         // 0x00C0   (0x0010)  
};

/// Struct /Script/DBDAnalytics.RTMAnalytics
/// Size: 0x0028 (0x0000B8 - 0x0000E0)
struct FRTMAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,4041) /* FString */               __um(RTMType);                                              // 0x00B8   (0x0010)  
	uint32_t                                           RTMSize;                                                    // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	SDK_UNDEFINED(16,4042) /* FString */               __um(CurrentGameFlowStep);                                  // 0x00D0   (0x0010)  
};

/// Struct /Script/DBDAnalytics.S3CommandErrorAnalytics
/// Size: 0x0030 (0x0000B8 - 0x0000E8)
struct FS3CommandErrorAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,4043) /* FString */               __um(URL);                                                  // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,4044) /* FString */               __um(Verb);                                                 // 0x00C8   (0x0010)  
	int32_t                                            ResponseCode;                                               // 0x00D8   (0x0004)  
	bool                                               InvalidRequest;                                             // 0x00DC   (0x0001)  
	bool                                               InvalidResponse;                                            // 0x00DD   (0x0001)  
	bool                                               DecryptionFailure;                                          // 0x00DE   (0x0001)  
	bool                                               BadResponse;                                                // 0x00DF   (0x0001)  
	bool                                               ContentModifiedError;                                       // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00E1   (0x0007)  MISSED
};

/// Struct /Script/DBDAnalytics.S3CommandAnalytics
/// Size: 0x0060 (0x0000B8 - 0x000118)
struct FS3CommandAnalytics : FUniquelyIdentifiedAnalytic
{ 
	int32_t                                            RequestContentLength;                                       // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00BC   (0x0004)  MISSED
	SDK_UNDEFINED(16,4045) /* FString */               __um(ContentType);                                          // 0x00C0   (0x0010)  
	float                                              ElapsedTime;                                                // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00D4   (0x0004)  MISSED
	SDK_UNDEFINED(16,4046) /* FString */               __um(Status);                                               // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,4047) /* FString */               __um(URL);                                                  // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,4048) /* FString */               __um(Verb);                                                 // 0x00F8   (0x0010)  
	int32_t                                            ResponseContentLength;                                      // 0x0108   (0x0004)  
	int32_t                                            ResponseCode;                                               // 0x010C   (0x0004)  
	bool                                               success;                                                    // 0x0110   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0111   (0x0007)  MISSED
};

/// Struct /Script/DBDAnalytics.SaveGameLoadResultAnalytics
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
struct FSaveGameLoadResultAnalytics : FUniquelyIdentifiedAnalytic
{ 
	bool                                               LoadSuccessful;                                             // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00B9   (0x0007)  MISSED
	SDK_UNDEFINED(16,4049) /* FString */               __um(Message);                                              // 0x00C0   (0x0010)  
};

/// Struct /Script/DBDAnalytics.SaveGameSaveResultAnalytics
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
struct FSaveGameSaveResultAnalytics : FUniquelyIdentifiedAnalytic
{ 
	bool                                               SaveSuccessful;                                             // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B9   (0x0003)  MISSED
	int32_t                                            ResponseCode;                                               // 0x00BC   (0x0004)  
};

/// Struct /Script/DBDAnalytics.SaveGameErrorAnalytics
/// Size: 0x0040 (0x0000B8 - 0x0000F8)
struct FSaveGameErrorAnalytics : FUniquelyIdentifiedAnalytic
{ 
	int32_t                                            ErrorCode;                                                  // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00BC   (0x0004)  MISSED
	SDK_UNDEFINED(16,4050) /* FString */               __um(category);                                             // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,4051) /* FString */               __um(ErrorDetails);                                         // 0x00D0   (0x0010)  
	uint32_t                                           KrakenErrorCode;                                            // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	SDK_UNDEFINED(16,4052) /* FString */               __um(StateName);                                            // 0x00E8   (0x0010)  
};

/// Struct /Script/DBDAnalytics.SaveGameSummaryPlayerStatsAnalytics
/// Size: 0x0030 (0x0000B8 - 0x0000E8)
struct FSaveGameSummaryPlayerStatsAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,4053) /* FString */               __um(OwnedPerks);                                           // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,4054) /* FString */               __um(PlayerStatsProgression);                               // 0x00C8   (0x0010)  
	int32_t                                            BloodwebPoints;                                             // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00DC   (0x0004)  MISSED
	int64_t                                            CumulativePlaytime;                                         // 0x00E0   (0x0008)  
};

/// Struct /Script/DBDAnalytics.StatsProgressionData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FStatsProgressionData
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	float                                              value;                                                      // 0x000C   (0x0004)  
};

/// Struct /Script/DBDAnalytics.SerializablePlayerStatsProgression
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSerializablePlayerStatsProgression
{ 
	TArray<FStatsProgressionData>                      StatsProgression;                                           // 0x0000   (0x0010)  
};

/// Struct /Script/DBDAnalytics.SerializablePlayerPerks
/// Size: 0x0050 (0x000000 - 0x000050)
struct FSerializablePlayerPerks
{ 
	SDK_UNDEFINED(80,4055) /* TMap<FName, int32_t> */  __um(Perks);                                                // 0x0000   (0x0050)  
};

/// Struct /Script/DBDAnalytics.DetailedScoreAnalytics
/// Size: 0x0060 (0x0000B8 - 0x000118)
struct FDetailedScoreAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,4056) /* FString */               __um(ScorerMirrorsId);                                      // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,4057) /* FString */               __um(TargetMirrorsId);                                      // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,4058) /* FString */               __um(MatchID);                                              // 0x00D8   (0x0010)  
	FName                                              ScoreTypeId;                                                // 0x00E8   (0x000C)  
	int32_t                                            ScoreExperience;                                            // 0x00F4   (0x0004)  
	float                                              ElapsedMatchTime;                                           // 0x00F8   (0x0004)  
	float                                              InstigatorCoordinateX;                                      // 0x00FC   (0x0004)  
	float                                              InstigatorCoordinateY;                                      // 0x0100   (0x0004)  
	float                                              InstigatorCoordinateZ;                                      // 0x0104   (0x0004)  
	float                                              TargetCoordinateX;                                          // 0x0108   (0x0004)  
	float                                              TargetCoordinateY;                                          // 0x010C   (0x0004)  
	float                                              TargetCoordinateZ;                                          // 0x0110   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0114   (0x0004)  MISSED
};

/// Struct /Script/DBDAnalytics.ScoreAnalytics
/// Size: 0x0028 (0x0000B8 - 0x0000E0)
struct FScoreAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,4059) /* FString */               __um(MatchID);                                              // 0x00B8   (0x0010)  
	FName                                              ScoreTypeId;                                                // 0x00C8   (0x000C)  
	int32_t                                            ScoreCount;                                                 // 0x00D4   (0x0004)  
	float                                              ScoreBloodwebPoints;                                        // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
};

/// Struct /Script/DBDAnalytics.ShopAnalytics
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
struct FShopAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,4060) /* FString */               __um(LogMessage);                                           // 0x00B8   (0x0010)  
};

/// Struct /Script/DBDAnalytics.SpecialEventAnalytics
/// Size: 0x0038 (0x0000B8 - 0x0000F0)
struct FSpecialEventAnalytics : FUniquelyIdentifiedAnalytic
{ 
	EPlayerRole                                        Role;                                                       // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00B9   (0x0007)  MISSED
	SDK_UNDEFINED(16,4061) /* FString */               __um(MatchID);                                              // 0x00C0   (0x0010)  
	FName                                              EventName;                                                  // 0x00D0   (0x000C)  
	FName                                              Challenge;                                                  // 0x00DC   (0x000C)  
	int32_t                                            Amount;                                                     // 0x00E8   (0x0004)  
	int32_t                                            CummulativeAmount;                                          // 0x00EC   (0x0004)  
};

/// Struct /Script/DBDAnalytics.Stat
/// Size: 0x0020 (0x000000 - 0x000020)
struct FStat
{ 
	SDK_UNDEFINED(16,4062) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	float                                              FloatValue;                                                 // 0x0010   (0x0004)  
	float                                              FloatValueMin;                                              // 0x0014   (0x0004)  
	float                                              FloatValueMax;                                              // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/DBDAnalytics.Counter
/// Size: 0x0020 (0x000000 - 0x000020)
struct FCounter
{ 
	SDK_UNDEFINED(16,4063) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	float                                              FloatValue;                                                 // 0x0010   (0x0004)  
	float                                              FloatValueMin;                                              // 0x0014   (0x0004)  
	float                                              FloatValueMax;                                              // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/DBDAnalytics.MemoryStat
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMemoryStat
{ 
	SDK_UNDEFINED(16,4064) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	float                                              FloatValue;                                                 // 0x0010   (0x0004)  
	float                                              FloatValueMin;                                              // 0x0014   (0x0004)  
	float                                              FloatValueMax;                                              // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/DBDAnalytics.ShortStats
/// Size: 0x0030 (0x000000 - 0x000030)
struct FShortStats
{ 
	TArray<FStat>                                      FlatAggregate;                                              // 0x0000   (0x0010)  
	TArray<FCounter>                                   CounterAggregate;                                           // 0x0010   (0x0010)  
	TArray<FMemoryStat>                                MemoryAggregate;                                            // 0x0020   (0x0010)  
};

/// Struct /Script/DBDAnalytics.StatsSystemUE4Analytics
/// Size: 0x0068 (0x0000B8 - 0x000120)
struct FStatsSystemUE4Analytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,4065) /* FString */               __um(Name);                                                 // 0x00B8   (0x0010)  
	bool                                               bIsBudget;                                                  // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00C9   (0x0007)  MISSED
	SDK_UNDEFINED(16,4066) /* FString */               __um(MatchID);                                              // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,4067) /* FString */               __um(MapName);                                              // 0x00E0   (0x0010)  
	TArray<FStat>                                      FlatAggregate;                                              // 0x00F0   (0x0010)  
	TArray<FCounter>                                   CounterAggregate;                                           // 0x0100   (0x0010)  
	TArray<FMemoryStat>                                MemoryAggregate;                                            // 0x0110   (0x0010)  
};

/// Struct /Script/DBDAnalytics.NewSurvivorTutorialAnalytics
/// Size: 0x0060 (0x0000B8 - 0x000118)
struct FNewSurvivorTutorialAnalytics : FUniquelyIdentifiedAnalytic
{ 
	bool                                               IsLookAroundComplete;                                       // 0x00B8   (0x0001)  
	bool                                               IsWalkAroundComplete;                                       // 0x00B9   (0x0001)  
	bool                                               IsRunningComplete;                                          // 0x00BA   (0x0001)  
	bool                                               IsCrouchComplete;                                           // 0x00BB   (0x0001)  
	bool                                               IsFirstVaultComplete;                                       // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00BD   (0x0003)  MISSED
	int32_t                                            TimeToCompleteAreaOne;                                      // 0x00C0   (0x0004)  
	bool                                               IsGeneratorComplete;                                        // 0x00C4   (0x0001)  
	bool                                               IsSecondVaultComplete;                                      // 0x00C5   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x00C6   (0x0002)  MISSED
	int32_t                                            TimeToCompleteAreaTwo;                                      // 0x00C8   (0x0004)  
	bool                                               IsBeartrapComplete;                                         // 0x00CC   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00CD   (0x0003)  MISSED
	int32_t                                            TimeToCompleteAreaThree;                                    // 0x00D0   (0x0004)  
	bool                                               IsPalletComplete;                                           // 0x00D4   (0x0001)  
	bool                                               IsUnhookMegComplete;                                        // 0x00D5   (0x0001)  
	bool                                               IsLockerComplete;                                           // 0x00D6   (0x0001)  
	bool                                               IsGetUnhookedComplete;                                      // 0x00D7   (0x0001)  
	bool                                               IsHealMegComplete;                                          // 0x00D8   (0x0001)  
	bool                                               IsGetHealedComplete;                                        // 0x00D9   (0x0001)  
	bool                                               IsOpenGateComplete;                                         // 0x00DA   (0x0001)  
	bool                                               IsEscapeComplete;                                           // 0x00DB   (0x0001)  
	int32_t                                            TimeToCompleteAreaFour;                                     // 0x00DC   (0x0004)  
	int32_t                                            TotalTimeInTutorial;                                        // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	SDK_UNDEFINED(16,4068) /* FString */               __um(tutorialId);                                           // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,4069) /* FString */               __um(OnboardingModeId);                                     // 0x00F8   (0x0010)  
	int32_t                                            OnboardingEnabled;                                          // 0x0108   (0x0004)  
	int32_t                                            OnboardingABTestingEnabled;                                 // 0x010C   (0x0004)  
	int32_t                                            OnboardingNumberActiveModes;                                // 0x0110   (0x0004)  
	int32_t                                            OnboardingNewAssignedMode;                                  // 0x0114   (0x0004)  
};

/// Struct /Script/DBDAnalytics.SyncLoadAnalytics
/// Size: 0x0060 (0x0000B8 - 0x000118)
struct FSyncLoadAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,4070) /* FString */               __um(AssetName);                                            // 0x00B8   (0x0010)  
	float                                              LoadTimeMilliseconds;                                       // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	SDK_UNDEFINED(16,4071) /* FString */               __um(DeviceProfileName);                                    // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,4072) /* FString */               __um(BuildConfiguration);                                   // 0x00E0   (0x0010)  
	int32_t                                            ChangelistNumber;                                           // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00F4   (0x0004)  MISSED
	SDK_UNDEFINED(16,4073) /* FString */               __um(MapName);                                              // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,4074) /* FString */               __um(GameFlowContext);                                      // 0x0108   (0x0010)  
};

/// Struct /Script/DBDAnalytics.TexturegroupChartingAnalytics
/// Size: 0x0050 (0x0000B8 - 0x000108)
struct FTexturegroupChartingAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,4075) /* FString */               __um(texturegroup_name);                                    // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,4076) /* FString */               __um(texturegroups_guid);                                   // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,4077) /* FString */               __um(map_name);                                             // 0x00D8   (0x0010)  
	int32_t                                            avg_qty_streaming;                                          // 0x00E8   (0x0004)  
	int32_t                                            max_qty_streaming;                                          // 0x00EC   (0x0004)  
	int32_t                                            avg_memory_streaming;                                       // 0x00F0   (0x0004)  
	int32_t                                            max_memory_streaming;                                       // 0x00F4   (0x0004)  
	int32_t                                            avg_qty_non_streaming;                                      // 0x00F8   (0x0004)  
	int32_t                                            max_qty_non_streaming;                                      // 0x00FC   (0x0004)  
	int32_t                                            avg_memory_non_streaming;                                   // 0x0100   (0x0004)  
	int32_t                                            max_memory_non_streaming;                                   // 0x0104   (0x0004)  
};

/// Struct /Script/DBDAnalytics.TransactionAnalytics
/// Size: 0x0088 (0x0000B8 - 0x000140)
struct FTransactionAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,4078) /* FString */               __um(TransactionType);                                      // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,4079) /* FString */               __um(TransactionSource);                                    // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,4080) /* FString */               __um(SourceID);                                             // 0x00D8   (0x0010)  
	int32_t                                            SourceTier;                                                 // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00EC   (0x0004)  MISSED
	SDK_UNDEFINED(16,4081) /* FString */               __um(CurrencyType);                                         // 0x00F0   (0x0010)  
	int32_t                                            CurrencyAmount;                                             // 0x0100   (0x0004)  
	int32_t                                            CurrencyBalance;                                            // 0x0104   (0x0004)  
	int32_t                                            LevelAchieved;                                              // 0x0108   (0x0004)  
	int32_t                                            Prestige;                                                   // 0x010C   (0x0004)  
	SDK_UNDEFINED(16,4082) /* FString */               __um(ItemIDAcquired);                                       // 0x0110   (0x0010)  
	int32_t                                            Rank;                                                       // 0x0120   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0124   (0x0004)  MISSED
	SDK_UNDEFINED(16,4083) /* FString */               __um(SelectedCharacter);                                    // 0x0128   (0x0010)  
	bool                                               TransactionTriggeredLevelUp;                                // 0x0138   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0139   (0x0007)  MISSED
};

/// Struct /Script/DBDAnalytics.UnknownPrivilegeErrorAnalytics
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
struct FUnknownPrivilegeErrorAnalytics : FUniquelyIdentifiedAnalytic
{ 
	int32_t                                            PrivilegeResults;                                           // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00BC   (0x0004)  MISSED
	SDK_UNDEFINED(16,4084) /* TArray<FString> */       __um(PlatformResults);                                      // 0x00C0   (0x0010)  
};

/// Struct /Script/DBDAnalytics.WalesCypherAnalytics
/// Size: 0x0030 (0x0000B8 - 0x0000E8)
struct FWalesCypherAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,4085) /* FString */               __um(EnteredSequence);                                      // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,4086) /* FString */               __um(ExpectedSequence);                                     // 0x00C8   (0x0010)  
	int32_t                                            TimeoutThreshold;                                           // 0x00D8   (0x0004)  
	bool                                               success;                                                    // 0x00DC   (0x0001)  
	bool                                               TIMEOUT;                                                    // 0x00DD   (0x0001)  
	bool                                               CharmGranted;                                               // 0x00DE   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x00DF   (0x0001)  MISSED
	int32_t                                            ValidCharacterSelcted;                                      // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00E4   (0x0004)  MISSED
};

