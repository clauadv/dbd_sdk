
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: DBDSharedTypes
/// dependency: Engine

/// Enum /Script/Onboarding.EOnboardingModeList
/// Size: 0x04
enum class EOnboardingModeList : uint8_t
{
	EOnboardingModeList__DefaultMode                                                 = 0,
	EOnboardingModeList__MenuForced                                                  = 1,
	EOnboardingModeList__TutorialForced                                              = 2,
	EOnboardingModeList__EOnboardingModeList_MAX                                     = 3
};

/// Class /Script/Onboarding.OnboardingManager
/// Size: 0x0200 (0x000038 - 0x000238)
class UOnboardingManager : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x200];                                     // 0x0038   (0x0200)  MISSED
};

/// Struct /Script/Onboarding.OnboardingBotMatchDefinition
/// Size: 0x0058 (0x000018 - 0x000070)
struct FOnboardingBotMatchDefinition : FDBDTableRowBaseWithId
{ 
	SDK_UNDEFINED(24,5284) /* FText */                 __um(DisplayName);                                          // 0x0018   (0x0018)  
	SDK_UNDEFINED(24,5285) /* FText */                 __um(Description);                                          // 0x0030   (0x0018)  
	FName                                              DefaultMapId;                                               // 0x0048   (0x000C)  
	int32_t                                            DefaultSurvivorId;                                          // 0x0054   (0x0004)  
	int32_t                                            DefaultKillerId;                                            // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	TArray<int32_t>                                    DefaultBotsId;                                              // 0x0060   (0x0010)  
};

/// Struct /Script/Onboarding.OnboardingTutorialDefinition
/// Size: 0x00B0 (0x000018 - 0x0000C8)
struct FOnboardingTutorialDefinition : FDBDTableRowBaseWithId
{ 
	SDK_UNDEFINED(24,5286) /* FText */                 __um(DisplayName);                                          // 0x0018   (0x0018)  
	SDK_UNDEFINED(24,5287) /* FText */                 __um(CompletedDisplayName);                                 // 0x0030   (0x0018)  
	SDK_UNDEFINED(24,5288) /* FText */                 __um(Description);                                          // 0x0048   (0x0018)  
	SDK_UNDEFINED(24,5289) /* FText */                 __um(CompletedDescription);                                 // 0x0060   (0x0018)  
	EOnboardingTutorialType                            TutorialType;                                               // 0x0078   (0x0001)  
	EOnboardingTutorialButtonStyle                     ButtonStyle;                                                // 0x0079   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x007A   (0x0006)  MISSED
	SDK_UNDEFINED(16,5290) /* FString */               __um(LevelId);                                              // 0x0080   (0x0010)  
	SDK_UNDEFINED(48,5291) /* TWeakObjectPtr<UTexture2D*> */ __um(Icon);                                           // 0x0090   (0x0030)  
	int32_t                                            DefaultCharacterId;                                         // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00C4   (0x0004)  MISSED
};

/// Struct /Script/Onboarding.SecretBotMatchLoadoutDefinition
/// Size: 0x0028 (0x000008 - 0x000030)
struct FSecretBotMatchLoadoutDefinition : FDBDTableRowBase
{ 
	char                                               BotRank;                                                    // 0x0008   (0x0001)  
	ELoadoutItemType                                   ItemEquipped;                                               // 0x0009   (0x0001)  
	EItemRarity                                        ItemRarity;                                                 // 0x000A   (0x0001)  
	char                                               NbAddons;                                                   // 0x000B   (0x0001)  
	EItemRarity                                        AddonsRarity;                                               // 0x000C   (0x0001)  
	EItemRarity                                        OfferingRarity;                                             // 0x000D   (0x0001)  
	char                                               NbGenericPerks;                                             // 0x000E   (0x0001)  
	char                                               NbCharacterSpecificPerks;                                   // 0x000F   (0x0001)  
	TArray<int32_t>                                    PerkTiersList;                                              // 0x0010   (0x0010)  
	TArray<int32_t>                                    CharactersIndexList;                                        // 0x0020   (0x0010)  
};

/// Struct /Script/Onboarding.SecretBotMatchNamesDefinition
/// Size: 0x0018 (0x000008 - 0x000020)
struct FSecretBotMatchNamesDefinition : FDBDTableRowBase
{ 
	char                                               ID;                                                         // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	SDK_UNDEFINED(16,5292) /* FString */               __um(Name);                                                 // 0x0010   (0x0010)  
};

