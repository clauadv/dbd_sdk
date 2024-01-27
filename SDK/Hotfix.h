
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/Hotfix.EHotfixResult
/// Size: 0x06
enum class EHotfixResult : uint8_t
{
	EHotfixResult__Failed                                                            = 0,
	EHotfixResult__Success                                                           = 1,
	EHotfixResult__SuccessNoChange                                                   = 2,
	EHotfixResult__SuccessNeedsReload                                                = 3,
	EHotfixResult__SuccessNeedsRelaunch                                              = 4,
	EHotfixResult__EHotfixResult_MAX                                                 = 5
};

/// Enum /Script/Hotfix.EUpdateCompletionStatus
/// Size: 0x10
enum class EUpdateCompletionStatus : uint16_t
{
	EUpdateCompletionStatus__UpdateUnknown                                           = 0,
	EUpdateCompletionStatus__UpdateSuccess                                           = 1,
	EUpdateCompletionStatus__UpdateSuccess_NoChange                                  = 2,
	EUpdateCompletionStatus__UpdateSuccess_NeedsReload                               = 3,
	EUpdateCompletionStatus__UpdateSuccess_NeedsRelaunch                             = 4,
	EUpdateCompletionStatus__UpdateSuccess_NeedsPatch                                = 5,
	EUpdateCompletionStatus__UpdateFailure_PatchCheck                                = 6,
	EUpdateCompletionStatus__UpdateFailure_HotfixCheck                               = 7,
	EUpdateCompletionStatus__UpdateFailure_NotLoggedIn                               = 8,
	EUpdateCompletionStatus__EUpdateCompletionStatus_MAX                             = 9
};

/// Enum /Script/Hotfix.EUpdateState
/// Size: 0x09
enum class EUpdateState : uint8_t
{
	EUpdateState__UpdateIdle                                                         = 0,
	EUpdateState__UpdatePending                                                      = 1,
	EUpdateState__CheckingForPatch                                                   = 2,
	EUpdateState__DetectingPlatformEnvironment                                       = 3,
	EUpdateState__CheckingForHotfix                                                  = 4,
	EUpdateState__WaitingOnInitialLoad                                               = 5,
	EUpdateState__InitialLoadComplete                                                = 6,
	EUpdateState__UpdateComplete                                                     = 7,
	EUpdateState__EUpdateState_MAX                                                   = 8
};

/// Class /Script/Hotfix.OnlineHotfixManager
/// Size: 0x0200 (0x000030 - 0x000230)
class UOnlineHotfixManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x1C0];                                     // 0x0030   (0x01C0)  MISSED
	SDK_UNDEFINED(16,4699) /* FString */               __um(OSSName);                                              // 0x01F0   (0x0010)  
	SDK_UNDEFINED(16,4700) /* FString */               __um(HotfixManagerClassName);                               // 0x0200   (0x0010)  
	SDK_UNDEFINED(16,4701) /* FString */               __um(DebugPrefix);                                          // 0x0210   (0x0010)  
	TArray<class UObject*>                             AssetsHotfixedFromIniFiles;                                 // 0x0220   (0x0010)  


	/// Functions
	// Function /Script/Hotfix.OnlineHotfixManager.StartHotfixProcess
	// void StartHotfixProcess();                                                                                            // [0x433b920] Native|Public|BlueprintCallable 
};

/// Class /Script/Hotfix.UpdateManager
/// Size: 0x00E8 (0x000030 - 0x000118)
class UUpdateManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x60];                                      // 0x0030   (0x0060)  MISSED
	float                                              HotfixCheckCompleteDelay;                                   // 0x0090   (0x0004)  
	float                                              UpdateCheckCompleteDelay;                                   // 0x0094   (0x0004)  
	float                                              HotfixAvailabilityCheckCompleteDelay;                       // 0x0098   (0x0004)  
	float                                              UpdateCheckAvailabilityCompleteDelay;                       // 0x009C   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00A0   (0x0004)  MISSED
	int32_t                                            AppSuspendedUpdateCheckTimeSeconds;                         // 0x00A4   (0x0004)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x00A8   (0x0008)  MISSED
	bool                                               bPlatformEnvironmentDetected;                               // 0x00B0   (0x0001)  
	bool                                               bInitialUpdateFinished;                                     // 0x00B1   (0x0001)  
	bool                                               bCheckHotfixAvailabilityOnly;                               // 0x00B2   (0x0001)  
	EUpdateState                                       CurrentUpdateState;                                         // 0x00B3   (0x0001)  
	int32_t                                            WorstNumFilesPendingLoadViewed;                             // 0x00B4   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x00B8   (0x0004)  MISSED
	EHotfixResult                                      LastHotfixResult;                                           // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData04_5[0x23];                                      // 0x00BD   (0x0023)  MISSED
	FDateTime                                          LastUpdateCheck;                                            // 0x00E0   (0x0010)  
	EUpdateCompletionStatus                            LastCompletionResult;                                       // 0x00F0   (0x0002)  
	unsigned char                                      UnknownData05_5[0x16];                                      // 0x00F2   (0x0016)  MISSED
	class UEnum*                                       UpdateStateEnum;                                            // 0x0108   (0x0008)  
	class UEnum*                                       UpdateCompletionEnum;                                       // 0x0110   (0x0008)  
};

