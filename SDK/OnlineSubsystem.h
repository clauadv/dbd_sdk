
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/OnlineSubsystem.EInAppPurchaseState
/// Size: 0x09
enum class EInAppPurchaseState : uint8_t
{
	EInAppPurchaseState__Unknown                                                     = 0,
	EInAppPurchaseState__Success                                                     = 1,
	EInAppPurchaseState__Failed                                                      = 2,
	EInAppPurchaseState__Cancelled                                                   = 3,
	EInAppPurchaseState__Invalid                                                     = 4,
	EInAppPurchaseState__NotAllowed                                                  = 5,
	EInAppPurchaseState__Restored                                                    = 6,
	EInAppPurchaseState__AlreadyOwned                                                = 7,
	EInAppPurchaseState__EInAppPurchaseState_MAX                                     = 8
};

/// Enum /Script/OnlineSubsystem.EMPMatchOutcome
/// Size: 0x11
enum class EMPMatchOutcome : uint8_t
{
	EMPMatchOutcome__None                                                            = 0,
	EMPMatchOutcome__Quit                                                            = 1,
	EMPMatchOutcome__Won                                                             = 2,
	EMPMatchOutcome__Lost                                                            = 3,
	EMPMatchOutcome__Tied                                                            = 4,
	EMPMatchOutcome__TimeExpired                                                     = 5,
	EMPMatchOutcome__First                                                           = 6,
	EMPMatchOutcome__Second                                                          = 7,
	EMPMatchOutcome__Third                                                           = 8,
	EMPMatchOutcome__Fourth                                                          = 9,
	EMPMatchOutcome__EMPMatchOutcome_MAX                                             = 10
};

/// Struct /Script/OnlineSubsystem.NamedInterface
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNamedInterface
{ 
	FName                                              InterfaceName;                                              // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UObject*                                     InterfaceObject;                                            // 0x0010   (0x0008)  
};

/// Struct /Script/OnlineSubsystem.NamedInterfaceDef
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNamedInterfaceDef
{ 
	FName                                              InterfaceName;                                              // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(16,4904) /* FString */               __um(InterfaceClassName);                                   // 0x0010   (0x0010)  
};

/// Class /Script/OnlineSubsystem.NamedInterfaces
/// Size: 0x0038 (0x000030 - 0x000068)
class UNamedInterfaces : public UObject
{ 
public:
	TArray<FNamedInterface>                            NamedInterfaces;                                            // 0x0030   (0x0010)  
	TArray<FNamedInterfaceDef>                         NamedInterfaceDefs;                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0050   (0x0018)  MISSED
};

/// Class /Script/OnlineSubsystem.TurnBasedMatchInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UTurnBasedMatchInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn
	// void OnMatchReceivedTurn(FString Match, bool bDidBecomeActive);                                                       // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded
	// void OnMatchEnded(FString Match);                                                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
};

/// Struct /Script/OnlineSubsystem.InAppPurchaseProductInfo
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FInAppPurchaseProductInfo
{ 
	SDK_UNDEFINED(16,4905) /* FString */               __um(Identifier);                                           // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,4906) /* FString */               __um(TransactionIdentifier);                                // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,4907) /* FString */               __um(DisplayName);                                          // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,4908) /* FString */               __um(DisplayDescription);                                   // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,4909) /* FString */               __um(DisplayPrice);                                         // 0x0040   (0x0010)  
	float                                              RawPrice;                                                   // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	SDK_UNDEFINED(16,4910) /* FString */               __um(CurrencyCode);                                         // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,4911) /* FString */               __um(CurrencySymbol);                                       // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,4912) /* FString */               __um(DecimalSeparator);                                     // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,4913) /* FString */               __um(GroupingSeparator);                                    // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,4914) /* FString */               __um(ReceiptData);                                          // 0x0098   (0x0010)  
};

/// Struct /Script/OnlineSubsystem.InAppPurchaseRestoreInfo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FInAppPurchaseRestoreInfo
{ 
	SDK_UNDEFINED(16,4915) /* FString */               __um(Identifier);                                           // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,4916) /* FString */               __um(ReceiptData);                                          // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,4917) /* FString */               __um(TransactionIdentifier);                                // 0x0020   (0x0010)  
};

/// Struct /Script/OnlineSubsystem.InAppPurchaseProductRequest
/// Size: 0x0018 (0x000000 - 0x000018)
struct FInAppPurchaseProductRequest
{ 
	SDK_UNDEFINED(16,4918) /* FString */               __um(ProductIdentifier);                                    // 0x0000   (0x0010)  
	bool                                               bIsConsumable;                                              // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

