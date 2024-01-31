
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once

/// Enum /Script/RewardUtilities.ERewardItemType
/// Size: 0x04
enum class ERewardItemType : uint8_t
{
	ERewardItemType__None                                                            = 0,
	ERewardItemType__Currency                                                        = 1,
	ERewardItemType__Inventory                                                       = 2,
	ERewardItemType__ERewardItemType_MAX                                             = 3
};

/// Struct /Script/RewardUtilities.RewardItem
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRewardItem
{ 
	ERewardItemType                                    Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,1722) /* FString */               __um(ID);                                                   // 0x0008   (0x0010)  
	int32_t                                            Amount;                                                     // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

