
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

/// Enum /Script/SubscriptionSubsystem.ESubscriptionClaimType
/// Size: 0x04
enum class ESubscriptionClaimType : uint8_t
{
	ESubscriptionClaimType__None                                                     = 0,
	ESubscriptionClaimType__Daily                                                    = 1,
	ESubscriptionClaimType__Renewal                                                  = 2,
	ESubscriptionClaimType__ESubscriptionClaimType_MAX                               = 3
};

/// Class /Script/SubscriptionSubsystem.SubscriptionSubsystem
/// Size: 0x0038 (0x000038 - 0x000070)
class USubscriptionSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0038   (0x0038)  MISSED
};

/// Struct /Script/SubscriptionSubsystem.SubscriptionRewardMap
/// Size: 0x0050 (0x000000 - 0x000050)
struct FSubscriptionRewardMap
{ 
	SDK_UNDEFINED(80,5422) /* TMap<ESubscriptionClaimType, FSubscriptionReward> */ __um(RewardsByClaimType);       // 0x0000   (0x0050)  
};

/// Struct /Script/SubscriptionSubsystem.SubscriptionReward
/// Size: 0x0028 (0x000000 - 0x000028)
struct FSubscriptionReward
{ 
	TArray<FRewardItem>                                Rewards;                                                    // 0x0000   (0x0010)  
	FDateTime                                          NextClaimTime;                                              // 0x0010   (0x0008)  
	SDK_UNDEFINED(16,5423) /* FString */               __um(AnalyticsEventId);                                     // 0x0018   (0x0010)  
};

