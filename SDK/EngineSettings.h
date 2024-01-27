
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/EngineSettings.ESubLevelStripMode
/// Size: 0x03
enum class ESubLevelStripMode : uint8_t
{
	ESubLevelStripMode__ExactClass                                                   = 0,
	ESubLevelStripMode__IsChildOf                                                    = 1,
	ESubLevelStripMode__ESubLevelStripMode_MAX                                       = 2
};

/// Enum /Script/EngineSettings.EFourPlayerSplitScreenType
/// Size: 0x04
enum class EFourPlayerSplitScreenType : uint8_t
{
	EFourPlayerSplitScreenType__Grid                                                 = 0,
	EFourPlayerSplitScreenType__Vertical                                             = 1,
	EFourPlayerSplitScreenType__Horizontal                                           = 2,
	EFourPlayerSplitScreenType__EFourPlayerSplitScreenType_MAX                       = 3
};

/// Enum /Script/EngineSettings.EThreePlayerSplitScreenType
/// Size: 0x05
enum class EThreePlayerSplitScreenType : uint8_t
{
	EThreePlayerSplitScreenType__FavorTop                                            = 0,
	EThreePlayerSplitScreenType__FavorBottom                                         = 1,
	EThreePlayerSplitScreenType__Vertical                                            = 2,
	EThreePlayerSplitScreenType__Horizontal                                          = 3,
	EThreePlayerSplitScreenType__EThreePlayerSplitScreenType_MAX                     = 4
};

/// Enum /Script/EngineSettings.ETwoPlayerSplitScreenType
/// Size: 0x03
enum class ETwoPlayerSplitScreenType : uint8_t
{
	ETwoPlayerSplitScreenType__Horizontal                                            = 0,
	ETwoPlayerSplitScreenType__Vertical                                              = 1,
	ETwoPlayerSplitScreenType__ETwoPlayerSplitScreenType_MAX                         = 2
};

/// Struct /Script/EngineSettings.AutoCompleteCommand
/// Size: 0x0028 (0x000000 - 0x000028)
struct FAutoCompleteCommand
{ 
	SDK_UNDEFINED(16,4616) /* FString */               __um(Command);                                              // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,4617) /* FString */               __um(Desc);                                                 // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Class /Script/EngineSettings.ConsoleSettings
/// Size: 0x0048 (0x000030 - 0x000078)
class UConsoleSettings : public UObject
{ 
public:
	int32_t                                            MaxScrollbackSize;                                          // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<FAutoCompleteCommand>                       ManualAutoCompleteList;                                     // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,4618) /* TArray<FString> */       __um(AutoCompleteMapPaths);                                 // 0x0048   (0x0010)  
	float                                              BackgroundOpacityPercentage;                                // 0x0058   (0x0004)  
	bool                                               bOrderTopToBottom;                                          // 0x005C   (0x0001)  
	bool                                               bDisplayHelpInAutoComplete;                                 // 0x005D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x005E   (0x0002)  MISSED
	FColor                                             InputColor;                                                 // 0x0060   (0x0004)  
	FColor                                             HistoryColor;                                               // 0x0064   (0x0004)  
	FColor                                             AutoCompleteCommandColor;                                   // 0x0068   (0x0004)  
	FColor                                             AutoCompleteCVarColor;                                      // 0x006C   (0x0004)  
	FColor                                             AutoCompleteFadedColor;                                     // 0x0070   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Struct /Script/EngineSettings.GameModeName
/// Size: 0x0030 (0x000000 - 0x000030)
struct FGameModeName
{ 
	SDK_UNDEFINED(16,4619) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	FSoftClassPath                                     GameMode;                                                   // 0x0010   (0x0020)  
};

/// Class /Script/EngineSettings.GameMapsSettings
/// Size: 0x00F8 (0x000030 - 0x000128)
class UGameMapsSettings : public UObject
{ 
public:
	SDK_UNDEFINED(16,4620) /* FString */               __um(LocalMapOptions);                                      // 0x0030   (0x0010)  
	FSoftObjectPath                                    TransitionMap;                                              // 0x0040   (0x0020)  
	bool                                               bUseSplitscreen;                                            // 0x0060   (0x0001)  
	SDK_UNDEFINED(1,4621) /* TEnumAsByte<ETwoPlayerSplitScreenType> */ __um(TwoPlayerSplitscreenLayout);           // 0x0061   (0x0001)  
	SDK_UNDEFINED(1,4622) /* TEnumAsByte<EThreePlayerSplitScreenType> */ __um(ThreePlayerSplitscreenLayout);       // 0x0062   (0x0001)  
	EFourPlayerSplitScreenType                         FourPlayerSplitscreenLayout;                                // 0x0063   (0x0001)  
	bool                                               bOffsetPlayerGamepadIds;                                    // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0065   (0x0003)  MISSED
	FSoftClassPath                                     GameInstanceClass;                                          // 0x0068   (0x0020)  
	FSoftObjectPath                                    GameDefaultMap;                                             // 0x0088   (0x0020)  
	FSoftObjectPath                                    ServerDefaultMap;                                           // 0x00A8   (0x0020)  
	FSoftClassPath                                     GlobalDefaultGameMode;                                      // 0x00C8   (0x0020)  
	FSoftClassPath                                     GlobalDefaultServerGameMode;                                // 0x00E8   (0x0020)  
	TArray<FGameModeName>                              GameModeMapPrefixes;                                        // 0x0108   (0x0010)  
	TArray<FGameModeName>                              GameModeClassAliases;                                       // 0x0118   (0x0010)  


	/// Functions
	// Function /Script/EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1
	// void SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer);                                                         // [0x6592d10] Final|Native|Public|BlueprintCallable 
	// Function /Script/EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1
	// bool GetSkipAssigningGamepadToPlayer1();                                                                              // [0x6592ce0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EngineSettings.GameMapsSettings.GetGameMapsSettings
	// class UGameMapsSettings* GetGameMapsSettings();                                                                       // [0x6592cb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/EngineSettings.GameNetworkManagerSettings
/// Size: 0x0030 (0x000030 - 0x000060)
class UGameNetworkManagerSettings : public UObject
{ 
public:
	int32_t                                            MinDynamicBandwidth;                                        // 0x0030   (0x0004)  
	int32_t                                            MaxDynamicBandwidth;                                        // 0x0034   (0x0004)  
	int32_t                                            TotalNetBandwidth;                                          // 0x0038   (0x0004)  
	int32_t                                            BadPingThreshold;                                           // 0x003C   (0x0004)  
	bool                                               bIsStandbyCheckingEnabled : 1;                              // 0x0040:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              StandbyRxCheatTime;                                         // 0x0044   (0x0004)  
	float                                              StandbyTxCheatTime;                                         // 0x0048   (0x0004)  
	float                                              PercentMissingForRxStandby;                                 // 0x004C   (0x0004)  
	float                                              PercentMissingForTxStandby;                                 // 0x0050   (0x0004)  
	float                                              PercentForBadPing;                                          // 0x0054   (0x0004)  
	float                                              JoinInProgressStandbyWaitTime;                              // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Class /Script/EngineSettings.GameSessionSettings
/// Size: 0x0010 (0x000030 - 0x000040)
class UGameSessionSettings : public UObject
{ 
public:
	int32_t                                            MaxSpectators;                                              // 0x0030   (0x0004)  
	int32_t                                            MaxPlayers;                                                 // 0x0034   (0x0004)  
	bool                                               bRequiresPushToTalk : 1;                                    // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/EngineSettings.GeneralEngineSettings
/// Size: 0x0000 (0x000030 - 0x000030)
class UGeneralEngineSettings : public UObject
{ 
public:
};

/// Struct /Script/EngineSettings.PathPak
/// Size: 0x0028 (0x000000 - 0x000028)
struct FPathPak
{ 
	SDK_UNDEFINED(16,4623) /* FString */               __um(Path);                                                 // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,4624) /* FString */               __um(PakName);                                              // 0x0010   (0x0010)  
	bool                                               BringHardDependencies;                                      // 0x0020   (0x0001)  
	bool                                               BringSoftDependencies;                                      // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0022   (0x0006)  MISSED
};

/// Struct /Script/EngineSettings.PakDefinition
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPakDefinition
{ 
	SDK_UNDEFINED(16,4625) /* FString */               __um(PakName);                                              // 0x0000   (0x0010)  
	int32_t                                            PakId;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/EngineSettings.GeneralProjectChunkingSettings
/// Size: 0x00C0 (0x000030 - 0x0000F0)
class UGeneralProjectChunkingSettings : public UObject
{ 
public:
	int32_t                                            NumberOfPaksInInitialChunk;                                 // 0x0030   (0x0004)  
	int32_t                                            NumberOfPaksInAllChunks;                                    // 0x0034   (0x0004)  
	int32_t                                            LeftoverPakId;                                              // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<FPathPak>                                   PakAssignmentPaths;                                         // 0x0040   (0x0010)  
	TArray<FPakDefinition>                             PakDefinitions;                                             // 0x0050   (0x0010)  
	int32_t                                            AtlantaNumberOfPaksInInitialChunk;                          // 0x0060   (0x0004)  
	int32_t                                            AtlantaAndroidNumberOfPaksInAllChunks;                      // 0x0064   (0x0004)  
	int32_t                                            AtlantaIOSNumberOfPaksInAllChunks;                          // 0x0068   (0x0004)  
	int32_t                                            AtlantaLeftoverPakId;                                       // 0x006C   (0x0004)  
	TArray<FPathPak>                                   AtlantaPakAssignmentPaths;                                  // 0x0070   (0x0010)  
	TArray<FPathPak>                                   AtlantaAndroidPakAssignmentPaths;                           // 0x0080   (0x0010)  
	TArray<FPathPak>                                   AtlantaIOSPakAssignmentPaths;                               // 0x0090   (0x0010)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x00A0   (0x0050)  MISSED
};

/// Class /Script/EngineSettings.GeneralProjectSettings
/// Size: 0x00E8 (0x000030 - 0x000118)
class UGeneralProjectSettings : public UObject
{ 
public:
	SDK_UNDEFINED(16,4626) /* FString */               __um(CompanyName);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,4627) /* FString */               __um(CompanyDistinguishedName);                             // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,4628) /* FString */               __um(CopyrightNotice);                                      // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,4629) /* FString */               __um(Description);                                          // 0x0060   (0x0010)  
	SDK_UNDEFINED(16,4630) /* FString */               __um(Homepage);                                             // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,4631) /* FString */               __um(LicensingTerms);                                       // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,4632) /* FString */               __um(PrivacyPolicy);                                        // 0x0090   (0x0010)  
	FGuid                                              ProjectID;                                                  // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,4633) /* FString */               __um(ProjectName);                                          // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,4634) /* FString */               __um(ProjectVersion);                                       // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,4635) /* FString */               __um(SupportContact);                                       // 0x00D0   (0x0010)  
	SDK_UNDEFINED(24,4636) /* FText */                 __um(ProjectDisplayedTitle);                                // 0x00E0   (0x0018)  
	SDK_UNDEFINED(24,4637) /* FText */                 __um(ProjectDebugTitleInfo);                                // 0x00F8   (0x0018)  
	bool                                               bShouldWindowPreserveAspectRatio;                           // 0x0110   (0x0001)  
	bool                                               bUseBorderlessWindow;                                       // 0x0111   (0x0001)  
	bool                                               bStartInVR;                                                 // 0x0112   (0x0001)  
	bool                                               bAllowWindowResize;                                         // 0x0113   (0x0001)  
	bool                                               bAllowClose;                                                // 0x0114   (0x0001)  
	bool                                               bAllowMaximize;                                             // 0x0115   (0x0001)  
	bool                                               bAllowMinimize;                                             // 0x0116   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0117   (0x0001)  MISSED
};

/// Class /Script/EngineSettings.HudSettings
/// Size: 0x0018 (0x000030 - 0x000048)
class UHudSettings : public UObject
{ 
public:
	bool                                               bShowHUD : 1;                                               // 0x0030:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0031   (0x0007)  MISSED
	TArray<FName>                                      DebugDisplay;                                               // 0x0038   (0x0010)  
};

