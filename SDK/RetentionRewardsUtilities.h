
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: RewardUtilities

/// Enum /Script/RetentionRewardsUtilities.EClaimType
/// Size: 0x07
enum class EClaimType : uint8_t
{
	EClaimType__Minute                                                               = 0,
	EClaimType__Hour                                                                 = 1,
	EClaimType__Day                                                                  = 2,
	EClaimType__Week                                                                 = 3,
	EClaimType__Month                                                                = 4,
	EClaimType__Year                                                                 = 5,
	EClaimType__EClaimType_MAX                                                       = 6
};

/// Enum /Script/RetentionRewardsUtilities.EClaimResponseCodes
/// Size: 0x05
enum class EClaimResponseCodes : uint8_t
{
	EClaimResponseCodes__Claimed                                                     = 0,
	EClaimResponseCodes__CalendarNotFound                                            = 1,
	EClaimResponseCodes__RewardNotAvailable                                          = 2,
	EClaimResponseCodes__RewardNotSupported                                          = 3,
	EClaimResponseCodes__EClaimResponseCodes_MAX                                     = 4
};

/// Class /Script/RetentionRewardsUtilities.RetentionRewardsSubsystem
/// Size: 0x0148 (0x000038 - 0x000180)
class URetentionRewardsSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x148];                                     // 0x0038   (0x0148)  MISSED
};

/// Struct /Script/RetentionRewardsUtilities.RetentionReward
/// Size: 0x0068 (0x000000 - 0x000068)
struct FRetentionReward
{ 
	SDK_UNDEFINED(16,5341) /* FString */               __um(ItemId);                                               // 0x0000   (0x0010)  
	uint32_t                                           Amount;                                                     // 0x0010   (0x0004)  
	ERewardItemType                                    RewardType;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	SDK_UNDEFINED(80,5342) /* TMap<FName, FString> */  __um(GameSpecificData);                                     // 0x0018   (0x0050)  
};

/// Struct /Script/RetentionRewardsUtilities.RetentionCalendar
/// Size: 0x0038 (0x000000 - 0x000038)
struct FRetentionCalendar
{ 
	SDK_UNDEFINED(16,5343) /* FString */               __um(ID);                                                   // 0x0000   (0x0010)  
	FDateTime                                          starttime;                                                  // 0x0010   (0x0008)  
	FDateTime                                          EndTime;                                                    // 0x0018   (0x0008)  
	EClaimType                                         ClaimType;                                                  // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	TArray<FRetentionReward>                           Rewards;                                                    // 0x0028   (0x0010)  
};

/// Struct /Script/RetentionRewardsUtilities.CampaignStatus
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCampaignStatus
{ 
	bool                                               IsValid;                                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FDateTime                                          StartDate;                                                  // 0x0008   (0x0008)  
	FDateTime                                          EndDate;                                                    // 0x0010   (0x0008)  
};

/// Struct /Script/RetentionRewardsUtilities.ClaimStatus
/// Size: 0x0010 (0x000000 - 0x000010)
struct FClaimStatus
{ 
	bool                                               isSet;                                                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            LastClaimedIndex;                                           // 0x0004   (0x0004)  
	FDateTime                                          NextClaimTime;                                              // 0x0008   (0x0008)  
};

