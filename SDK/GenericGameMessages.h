
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once

/// Struct /Script/GenericGameMessages.OpenCurrentCalendarMessage
/// Size: 0x0004 (0x000000 - 0x000004)
struct FOpenCurrentCalendarMessage
{ 
	int32_t                                            RemainingDailyRewards;                                      // 0x0000   (0x0004)  
};

/// Struct /Script/GenericGameMessages.LoginMessage
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLoginMessage
{ 
	SDK_UNDEFINED(16,4649) /* FString */               __um(MirrorsId);                                            // 0x0000   (0x0010)  
};

/// Struct /Script/GenericGameMessages.RateAppMessage
/// Size: 0x0001 (0x000000 - 0x000001)
struct FRateAppMessage
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/GenericGameMessages.UserCenterMessage
/// Size: 0x0001 (0x000000 - 0x000001)
struct FUserCenterMessage
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/GenericGameMessages.ForceLogoutMessage
/// Size: 0x0001 (0x000000 - 0x000001)
struct FForceLogoutMessage
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/GenericGameMessages.SkuDetailsMessage
/// Size: 0x0050 (0x000000 - 0x000050)
struct FSkuDetailsMessage
{ 
	SDK_UNDEFINED(80,4650) /* TMap<FString, FString> */ __um(BundlePrices);                                        // 0x0000   (0x0050)  
};

/// Struct /Script/GenericGameMessages.BuyTipsMessage
/// Size: 0x0004 (0x000000 - 0x000004)
struct FBuyTipsMessage
{ 
	int32_t                                            Result;                                                     // 0x0000   (0x0004)  
};

/// Struct /Script/GenericGameMessages.OrderDoneMessage
/// Size: 0x0028 (0x000000 - 0x000028)
struct FOrderDoneMessage
{ 
	int32_t                                            Code;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,4651) /* FString */               __um(OrderId);                                              // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,4652) /* FString */               __um(OrderChannel);                                         // 0x0018   (0x0010)  
};

/// Struct /Script/GenericGameMessages.BuyCurrencyMessage
/// Size: 0x0010 (0x000000 - 0x000010)
struct FBuyCurrencyMessage
{ 
	SDK_UNDEFINED(16,4653) /* FString */               __um(ItemId);                                               // 0x0000   (0x0010)  
};

/// Struct /Script/GenericGameMessages.FAQMessage
/// Size: 0x0001 (0x000000 - 0x000001)
struct FFAQMessage
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/GenericGameMessages.LanguageMessage
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLanguageMessage
{ 
	SDK_UNDEFINED(16,4654) /* FString */               __um(Language);                                             // 0x0000   (0x0010)  
};

/// Struct /Script/GenericGameMessages.PlayerNameMessage
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPlayerNameMessage
{ 
	SDK_UNDEFINED(16,4655) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/GenericGameMessages.GameVersionMessage
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGameVersionMessage
{ 
	SDK_UNDEFINED(16,4656) /* FString */               __um(Version);                                              // 0x0000   (0x0010)  
};

/// Struct /Script/GenericGameMessages.MatchEndMessage
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMatchEndMessage
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/GenericGameMessages.RoleUnlockMessage
/// Size: 0x0001 (0x000000 - 0x000001)
struct FRoleUnlockMessage
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/GenericGameMessages.PlayerLevelMessage
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPlayerLevelMessage
{ 
	int32_t                                            Level;                                                      // 0x0000   (0x0004)  
	int32_t                                            TotalXp;                                                    // 0x0004   (0x0004)  
};

/// Struct /Script/GenericGameMessages.TutorialEndMessage
/// Size: 0x0001 (0x000000 - 0x000001)
struct FTutorialEndMessage
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/GenericGameMessages.LoginJsonMessage
/// Size: 0x0038 (0x000000 - 0x000038)
struct FLoginJsonMessage
{ 
	SDK_UNDEFINED(16,4657) /* FString */               __um(LoginJson);                                            // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,4658) /* FString */               __um(LoginType);                                            // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,4659) /* FString */               __um(RoleID);                                               // 0x0020   (0x0010)  
	bool                                               IsNewAccount;                                               // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/GenericGameMessages.LoadEndMessage
/// Size: 0x0001 (0x000000 - 0x000001)
struct FLoadEndMessage
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/GenericGameMessages.LoadStartMessage
/// Size: 0x0001 (0x000000 - 0x000001)
struct FLoadStartMessage
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/GenericGameMessages.SDKEndMessage
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSDKEndMessage
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/GenericGameMessages.SDKUIMessage
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSDKUIMessage
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/GenericGameMessages.PatchFailMessage
/// Size: 0x0001 (0x000000 - 0x000001)
struct FPatchFailMessage
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/GenericGameMessages.PatchEndMessage
/// Size: 0x0001 (0x000000 - 0x000001)
struct FPatchEndMessage
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/GenericGameMessages.PatchStartMessage
/// Size: 0x0001 (0x000000 - 0x000001)
struct FPatchStartMessage
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

