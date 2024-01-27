
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Enum /Script/OnlineSubsystemUtils.EInAppPurchaseStatus
/// Size: 0x07
enum class EInAppPurchaseStatus : uint8_t
{
	EInAppPurchaseStatus__Invalid                                                    = 0,
	EInAppPurchaseStatus__Failed                                                     = 1,
	EInAppPurchaseStatus__Deferred                                                   = 2,
	EInAppPurchaseStatus__Canceled                                                   = 3,
	EInAppPurchaseStatus__Purchased                                                  = 4,
	EInAppPurchaseStatus__Restored                                                   = 5,
	EInAppPurchaseStatus__EInAppPurchaseStatus_MAX                                   = 6
};

/// Enum /Script/OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
/// Size: 0x05
enum class EOnlineProxyStoreOfferDiscountType : uint8_t
{
	EOnlineProxyStoreOfferDiscountType__NotOnSale                                    = 0,
	EOnlineProxyStoreOfferDiscountType__Percentage                                   = 1,
	EOnlineProxyStoreOfferDiscountType__DiscountAmount                               = 2,
	EOnlineProxyStoreOfferDiscountType__PayAmount                                    = 3,
	EOnlineProxyStoreOfferDiscountType__EOnlineProxyStoreOfferDiscountType_MAX       = 4
};

/// Enum /Script/OnlineSubsystemUtils.EBeaconConnectionState
/// Size: 0x05
enum class EBeaconConnectionState : uint8_t
{
	EBeaconConnectionState__Invalid                                                  = 0,
	EBeaconConnectionState__Closed                                                   = 1,
	EBeaconConnectionState__Pending                                                  = 2,
	EBeaconConnectionState__Open                                                     = 3,
	EBeaconConnectionState__EBeaconConnectionState_MAX                               = 4
};

/// Enum /Script/OnlineSubsystemUtils.EClientRequestType
/// Size: 0x09
enum class EClientRequestType : uint8_t
{
	EClientRequestType__NonePending                                                  = 0,
	EClientRequestType__ExistingSessionReservation                                   = 1,
	EClientRequestType__ReservationUpdate                                            = 2,
	EClientRequestType__EmptyServerReservation                                       = 3,
	EClientRequestType__Reconnect                                                    = 4,
	EClientRequestType__Abandon                                                      = 5,
	EClientRequestType__ReservationRemoveMembers                                     = 6,
	EClientRequestType__AddOrUpdateReservation                                       = 7,
	EClientRequestType__EClientRequestType_MAX                                       = 8
};

/// Enum /Script/OnlineSubsystemUtils.EPartyReservationResult
/// Size: 0x17
enum class EPartyReservationResult : uint8_t
{
	EPartyReservationResult__NoResult                                                = 0,
	EPartyReservationResult__RequestPending                                          = 1,
	EPartyReservationResult__GeneralError                                            = 2,
	EPartyReservationResult__PartyLimitReached                                       = 3,
	EPartyReservationResult__IncorrectPlayerCount                                    = 4,
	EPartyReservationResult__RequestTimedOut                                         = 5,
	EPartyReservationResult__ReservationDuplicate                                    = 6,
	EPartyReservationResult__ReservationNotFound                                     = 7,
	EPartyReservationResult__ReservationAccepted                                     = 8,
	EPartyReservationResult__ReservationDenied                                       = 9,
	EPartyReservationResult__ReservationDenied_CrossPlayRestriction                  = 10,
	EPartyReservationResult__ReservationDenied_Banned                                = 11,
	EPartyReservationResult__ReservationRequestCanceled                              = 12,
	EPartyReservationResult__ReservationInvalid                                      = 13,
	EPartyReservationResult__BadSessionId                                            = 14,
	EPartyReservationResult__ReservationDenied_ContainsExistingPlayers               = 15,
	EPartyReservationResult__EPartyReservationResult_MAX                             = 16
};

/// Enum /Script/OnlineSubsystemUtils.ESpectatorClientRequestType
/// Size: 0x07
enum class ESpectatorClientRequestType : uint8_t
{
	ESpectatorClientRequestType__NonePending                                         = 0,
	ESpectatorClientRequestType__ExistingSessionReservation                          = 1,
	ESpectatorClientRequestType__ReservationUpdate                                   = 2,
	ESpectatorClientRequestType__EmptyServerReservation                              = 3,
	ESpectatorClientRequestType__Reconnect                                           = 4,
	ESpectatorClientRequestType__Abandon                                             = 5,
	ESpectatorClientRequestType__ESpectatorClientRequestType_MAX                     = 6
};

/// Enum /Script/OnlineSubsystemUtils.ESpectatorReservationResult
/// Size: 0x17
enum class ESpectatorReservationResult : uint8_t
{
	ESpectatorReservationResult__NoResult                                            = 0,
	ESpectatorReservationResult__RequestPending                                      = 1,
	ESpectatorReservationResult__GeneralError                                        = 2,
	ESpectatorReservationResult__SpectatorLimitReached                               = 3,
	ESpectatorReservationResult__IncorrectPlayerCount                                = 4,
	ESpectatorReservationResult__RequestTimedOut                                     = 5,
	ESpectatorReservationResult__ReservationDuplicate                                = 6,
	ESpectatorReservationResult__ReservationNotFound                                 = 7,
	ESpectatorReservationResult__ReservationAccepted                                 = 8,
	ESpectatorReservationResult__ReservationDenied                                   = 9,
	ESpectatorReservationResult__ReservationDenied_CrossPlayRestriction              = 10,
	ESpectatorReservationResult__ReservationDenied_Banned                            = 11,
	ESpectatorReservationResult__ReservationRequestCanceled                          = 12,
	ESpectatorReservationResult__ReservationInvalid                                  = 13,
	ESpectatorReservationResult__BadSessionId                                        = 14,
	ESpectatorReservationResult__ReservationDenied_ContainsExistingPlayers           = 15,
	ESpectatorReservationResult__ESpectatorReservationResult_MAX                     = 16
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeacon
/// Size: 0x0038 (0x000230 - 0x000268)
class AOnlineBeacon : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0230   (0x0008)  MISSED
	float                                              BeaconConnectionInitialTimeout;                             // 0x0238   (0x0004)  
	float                                              BeaconConnectionTimeout;                                    // 0x023C   (0x0004)  
	class UNetDriver*                                  NetDriver;                                                  // 0x0240   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0248   (0x0020)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconClient
/// Size: 0x0060 (0x000268 - 0x0002C8)
class AOnlineBeaconClient : public AOnlineBeacon
{ 
public:
	class AOnlineBeaconHostObject*                     BeaconOwner;                                                // 0x0268   (0x0008)  
	class UNetConnection*                              BeaconConnection;                                           // 0x0270   (0x0008)  
	EBeaconConnectionState                             ConnectionState;                                            // 0x0278   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4F];                                      // 0x0279   (0x004F)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
	// void ClientOnConnected();                                                                                             // [0x43c1740] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconHostObject
/// Size: 0x0028 (0x000230 - 0x000258)
class AOnlineBeaconHostObject : public AActor
{ 
public:
	SDK_UNDEFINED(16,1595) /* FString */               __um(BeaconTypeName);                                       // 0x0230   (0x0010)  
	class UClass*                                      ClientBeaconActorClass;                                     // 0x0240   (0x0008)  
	TArray<class AOnlineBeaconClient*>                 ClientActors;                                               // 0x0248   (0x0010)  
};

/// Class /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
	// void GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, FName AchievementID, bool& bFoundID, float& Progress); // [0x43bd0b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
	// void GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, FName AchievementID, bool& bFoundID, FText& Title, FText& LockedDescription, FText& UnlockedDescription, bool& bHidden); // [0x43bcd40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy
/// Size: 0x0038 (0x000038 - 0x000070)
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1596) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,1597) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0058   (0x0018)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
	// class UAchievementQueryCallbackProxy* CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController); // [0x43bbab0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
	// class UAchievementQueryCallbackProxy* CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController); // [0x43bb9e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy
/// Size: 0x0058 (0x000038 - 0x000090)
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1598) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,1599) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0058   (0x0038)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
	// class UAchievementWriteCallbackProxy* WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, FName AchievementName, float Progress, int32_t UserTag); // [0x43bdb20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.ConnectionCallbackProxy
/// Size: 0x0048 (0x000038 - 0x000080)
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1600) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,1601) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0058   (0x0028)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
	// class UConnectionCallbackProxy* ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController); // [0x43bbb80] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.CreateSessionCallbackProxy
/// Size: 0x0068 (0x000038 - 0x0000A0)
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1602) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,1603) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x0058   (0x0048)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
	// class UCreateSessionCallbackProxy* CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN); // [0x43bc3b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.DestroySessionCallbackProxy
/// Size: 0x0048 (0x000038 - 0x000080)
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1604) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,1605) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0058   (0x0028)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
	// class UDestroySessionCallbackProxy* DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController); // [0x43bc500] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.EndMatchCallbackProxy
/// Size: 0x0050 (0x000038 - 0x000088)
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1606) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,1607) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0058   (0x0030)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
	// class UEndMatchCallbackProxy* EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, TScriptInterface<Class> MatchActor, FString MatchID, TEnumAsByte<EMPMatchOutcome> LocalPlayerOutcome, TEnumAsByte<EMPMatchOutcome> OtherPlayersOutcome); // [0x43bc5d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.EndTurnCallbackProxy
/// Size: 0x0048 (0x000038 - 0x000080)
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1608) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,1609) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0058   (0x0028)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
	// class UEndTurnCallbackProxy* EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, TScriptInterface<Class> TurnBasedMatchInterface); // [0x43bc800] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy
/// Size: 0x0060 (0x000038 - 0x000098)
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1610) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,1611) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0058   (0x0040)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
	// FString GetServerName(FBlueprintSessionResult& Result);                                                               // [0x43bd8c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
	// int32_t GetPingInMs(FBlueprintSessionResult& Result);                                                                 // [0x43bd6a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
	// int32_t GetMaxPlayers(FBlueprintSessionResult& Result);                                                               // [0x43bd480] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
	// int32_t GetCurrentPlayers(FBlueprintSessionResult& Result);                                                           // [0x43bd260] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
	// class UFindSessionsCallbackProxy* FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN); // [0x43bc9c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
/// Size: 0x0058 (0x000038 - 0x000090)
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1612) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,1613) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0058   (0x0038)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
	// class UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, TScriptInterface<Class> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches); // [0x43bcb10] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy
/// Size: 0x0058 (0x000030 - 0x000088)
class UInAppPurchaseCallbackProxy : public UObject
{ 
public:
	SDK_UNDEFINED(16,1614) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1615) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0050   (0x0038)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase
	// class UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, FInAppPurchaseProductRequest& ProductRequest); // [0x43bbd40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
/// Size: 0x0080 (0x000030 - 0x0000B0)
class UInAppPurchaseCallbackProxy2 : public UObject
{ 
public:
	SDK_UNDEFINED(16,1616) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1617) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0050   (0x0060)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases
	// class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(class APlayerController* PlayerController); // [0x43bc320] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned
	// class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(class APlayerController* PlayerController); // [0x43bc050] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase
	// class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, FInAppPurchaseProductRequest2& ProductRequest); // [0x43bbc50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
/// Size: 0x0068 (0x000030 - 0x000098)
class UInAppPurchaseQueryCallbackProxy : public UObject
{ 
public:
	SDK_UNDEFINED(16,1618) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1619) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x0050   (0x0048)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery
	// class UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<FString>& ProductIdentifiers); // [0x43bbf40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
/// Size: 0x0040 (0x000030 - 0x000070)
class UInAppPurchaseQueryCallbackProxy2 : public UObject
{ 
public:
	SDK_UNDEFINED(16,1620) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1621) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0050   (0x0020)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery
	// class UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<FString>& ProductIdentifiers); // [0x43bbe30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
/// Size: 0x0068 (0x000030 - 0x000098)
class UInAppPurchaseRestoreCallbackProxy : public UObject
{ 
public:
	SDK_UNDEFINED(16,1622) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1623) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x0050   (0x0048)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore
	// class UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(TArray<FInAppPurchaseProductRequest>& ConsumableProductFlags, class APlayerController* PlayerController); // [0x43bc200] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
/// Size: 0x0080 (0x000030 - 0x0000B0)
class UInAppPurchaseRestoreCallbackProxy2 : public UObject
{ 
public:
	SDK_UNDEFINED(16,1624) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1625) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0050   (0x0060)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore
	// class UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(TArray<FInAppPurchaseProductRequest2>& ConsumableProductFlags, class APlayerController* PlayerController); // [0x43bc0e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.IpConnection
/// Size: 0x00A0 (0x001BC8 - 0x001C68)
class UIpConnection : public UNetConnection
{ 
public:
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x1BC8   (0x0050)  MISSED
	float                                              SocketErrorDisconnectDelay;                                 // 0x1C18   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4C];                                      // 0x1C1C   (0x004C)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.IpNetDriver
/// Size: 0x0070 (0x000780 - 0x0007F0)
class UIpNetDriver : public UNetDriver
{ 
public:
	bool                                               LogPortUnreach : 1;                                         // 0x0780:0 (0x0001)  
	bool                                               AllowPlayerPortUnreach : 1;                                 // 0x0780:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0781   (0x0003)  MISSED
	uint32_t                                           MaxPortCountToTry;                                          // 0x0784   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0788   (0x000C)  MISSED
	uint32_t                                           ServerDesiredSocketReceiveBufferBytes;                      // 0x0794   (0x0004)  
	uint32_t                                           ServerDesiredSocketSendBufferBytes;                         // 0x0798   (0x0004)  
	uint32_t                                           ClientDesiredSocketReceiveBufferBytes;                      // 0x079C   (0x0004)  
	uint32_t                                           ClientDesiredSocketSendBufferBytes;                         // 0x07A0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x07A4   (0x0004)  MISSED
	double                                             MaxSecondsInReceive;                                        // 0x07A8   (0x0008)  
	int32_t                                            NbPacketsBetweenReceiveTimeTest;                            // 0x07B0   (0x0004)  
	float                                              ResolutionConnectionTimeout;                                // 0x07B4   (0x0004)  
	unsigned char                                      UnknownData03_6[0x38];                                      // 0x07B8   (0x0038)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.JoinSessionCallbackProxy
/// Size: 0x0150 (0x000038 - 0x000188)
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1626) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,1627) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x130];                                     // 0x0058   (0x0130)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
	// class UJoinSessionCallbackProxy* JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, FBlueprintSessionResult& SearchResult); // [0x43c1ba0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardBlueprintLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
	// bool WriteLeaderboardInteger(class APlayerController* PlayerController, FName StatName, int32_t StatValue);           // [0x43c2db0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
/// Size: 0x0040 (0x000030 - 0x000070)
class ULeaderboardFlushCallbackProxy : public UObject
{ 
public:
	SDK_UNDEFINED(16,1628) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1629) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0050   (0x0020)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
	// class ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(class APlayerController* PlayerController, FName SessionName); // [0x43c19c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
/// Size: 0x0070 (0x000030 - 0x0000A0)
class ULeaderboardQueryCallbackProxy : public UObject
{ 
public:
	SDK_UNDEFINED(16,1630) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1631) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0050   (0x0050)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
	// class ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(class APlayerController* PlayerController, FName StatName); // [0x43c1ab0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.LogoutCallbackProxy
/// Size: 0x0038 (0x000038 - 0x000070)
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1632) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,1633) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0058   (0x0018)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LogoutCallbackProxy.Logout
	// class ULogoutCallbackProxy* Logout(class UObject* WorldContextObject, class APlayerController* PlayerController);     // [0x43c1cf0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconHost
/// Size: 0x00B8 (0x000268 - 0x000320)
class AOnlineBeaconHost : public AOnlineBeacon
{ 
public:
	int32_t                                            ListenPort;                                                 // 0x0268   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x026C   (0x0004)  MISSED
	TArray<class AOnlineBeaconClient*>                 ClientActors;                                               // 0x0270   (0x0010)  
	unsigned char                                      UnknownData01_6[0xA0];                                      // 0x0280   (0x00A0)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.OnlineEngineInterfaceImpl
/// Size: 0x0168 (0x000030 - 0x000198)
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{ 
public:
	SDK_UNDEFINED(80,1634) /* TMap<FName, FName> */    __um(MappedUniqueNetIdTypes);                               // 0x0030   (0x0050)  
	TArray<FName>                                      CompatibleUniqueNetIdTypes;                                 // 0x0080   (0x0010)  
	FName                                              VoiceSubsystemNameOverride;                                 // 0x0090   (0x000C)  
	unsigned char                                      UnknownData00_6[0xFC];                                      // 0x009C   (0x00FC)  MISSED
};

/// Struct /Script/OnlineSubsystemUtils.PIELoginSettingsInternal
/// Size: 0x0040 (0x000000 - 0x000040)
struct FPIELoginSettingsInternal
{ 
	SDK_UNDEFINED(16,1635) /* FString */               __um(ID);                                                   // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1636) /* FString */               __um(Token);                                                // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,1637) /* FString */               __um(Type);                                                 // 0x0020   (0x0010)  
	TArray<char>                                       TokenBytes;                                                 // 0x0030   (0x0010)  
};

/// Class /Script/OnlineSubsystemUtils.OnlinePIESettings
/// Size: 0x0018 (0x000048 - 0x000060)
class UOnlinePIESettings : public UDeveloperSettings
{ 
public:
	bool                                               bOnlinePIEEnabled;                                          // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	TArray<FPIELoginSettingsInternal>                  Logins;                                                     // 0x0050   (0x0010)  
};

/// Class /Script/OnlineSubsystemUtils.OnlineSessionClient
/// Size: 0x01D0 (0x000030 - 0x000200)
class UOnlineSessionClient : public UOnlineSession
{ 
public:
	unsigned char                                      UnknownData00_2[0x1C8];                                     // 0x0030   (0x01C8)  MISSED
	bool                                               bIsFromInvite;                                              // 0x01F8   (0x0001)  
	bool                                               bHandlingDisconnect;                                        // 0x01F9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x01FA   (0x0006)  MISSED
};

/// Struct /Script/OnlineSubsystemUtils.PlayerReservation
/// Size: 0x0050 (0x000000 - 0x000050)
struct FPlayerReservation
{ 
	FUniqueNetIdRepl                                   UniqueId;                                                   // 0x0000   (0x0028)  
	SDK_UNDEFINED(16,1638) /* FString */               __um(ValidationStr);                                        // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,1639) /* FString */               __um(platform);                                             // 0x0038   (0x0010)  
	bool                                               bAllowCrossplay;                                            // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0049   (0x0003)  MISSED
	float                                              ElapsedTime;                                                // 0x004C   (0x0004)  
};

/// Struct /Script/OnlineSubsystemUtils.PartyReservation
/// Size: 0x0050 (0x000000 - 0x000050)
struct FPartyReservation
{ 
	int32_t                                            TeamNum;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FUniqueNetIdRepl                                   PartyLeader;                                                // 0x0008   (0x0028)  
	TArray<FPlayerReservation>                         PartyMembers;                                               // 0x0030   (0x0010)  
	TArray<FPlayerReservation>                         RemovedPartyMembers;                                        // 0x0040   (0x0010)  
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconClient
/// Size: 0x00C0 (0x0002C8 - 0x000388)
class APartyBeaconClient : public AOnlineBeaconClient
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x02C8   (0x0030)  MISSED
	SDK_UNDEFINED(16,1640) /* FString */               __um(DestSessionId);                                        // 0x02F8   (0x0010)  
	FPartyReservation                                  PendingReservation;                                         // 0x0308   (0x0050)  
	EClientRequestType                                 RequestType;                                                // 0x0358   (0x0001)  
	bool                                               bPendingReservationSent;                                    // 0x0359   (0x0001)  
	bool                                               bCancelReservation;                                         // 0x035A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2D];                                      // 0x035B   (0x002D)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
	// void ServerUpdateReservationRequest(FString SESSIONID, FPartyReservation ReservationUpdate);                          // [0x43c2a50] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
	// void ServerReservationRequest(FString SESSIONID, FPartyReservation Reservation);                                      // [0x43c25c0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest
	// void ServerRemoveMemberFromReservationRequest(FString SESSIONID, FPartyReservation ReservationUpdate);                // [0x43c2330] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
	// void ServerCancelReservationRequest(FUniqueNetIdRepl PartyLeader);                                                    // [0x43c2220] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerAddOrUpdateReservationRequest
	// void ServerAddOrUpdateReservationRequest(FString SESSIONID, FPartyReservation Reservation);                           // [0x43c1f90] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
	// void ClientSendReservationUpdates(int32_t NumRemainingReservations);                                                  // [0x43c18a0] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
	// void ClientSendReservationFull();                                                                                     // [0x43c1860] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
	// void ClientReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse);                             // [0x43c1760] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
	// void ClientCancelReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse);                       // [0x43c1640] Net|NetReliableNative|Event|Public|NetClient 
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconHost
/// Size: 0x0078 (0x000258 - 0x0002D0)
class APartyBeaconHost : public AOnlineBeaconHostObject
{ 
public:
	class UPartyBeaconState*                           State;                                                      // 0x0258   (0x0008)  
	unsigned char                                      UnknownData00_5[0x60];                                      // 0x0260   (0x0060)  MISSED
	bool                                               bLogoutOnSessionTimeout;                                    // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02C1   (0x0003)  MISSED
	float                                              SessionTimeoutSecs;                                         // 0x02C4   (0x0004)  
	float                                              TravelSessionTimeoutSecs;                                   // 0x02C8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x02CC   (0x0004)  MISSED
};

/// Struct /Script/OnlineSubsystemUtils.PartyBeaconCrossplayPlatformMapping
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPartyBeaconCrossplayPlatformMapping
{ 
	SDK_UNDEFINED(16,1641) /* FString */               __um(PlatformName);                                         // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1642) /* FString */               __um(PlatformType);                                         // 0x0010   (0x0010)  
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconState
/// Size: 0x0080 (0x000030 - 0x0000B0)
class UPartyBeaconState : public UObject
{ 
public:
	FName                                              SessionName;                                                // 0x0030   (0x000C)  
	int32_t                                            NumConsumedReservations;                                    // 0x003C   (0x0004)  
	int32_t                                            MaxReservations;                                            // 0x0040   (0x0004)  
	int32_t                                            NumTeams;                                                   // 0x0044   (0x0004)  
	int32_t                                            NumPlayersPerTeam;                                          // 0x0048   (0x0004)  
	FName                                              TeamAssignmentMethod;                                       // 0x004C   (0x000C)  
	int32_t                                            ReservedHostTeamNum;                                        // 0x0058   (0x0004)  
	int32_t                                            ForceTeamNum;                                               // 0x005C   (0x0004)  
	bool                                               bRestrictCrossConsole;                                      // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0061   (0x0007)  MISSED
	SDK_UNDEFINED(16,1643) /* TArray<FString> */       __um(PlatformCrossplayRestrictions);                        // 0x0068   (0x0010)  
	TArray<FPartyBeaconCrossplayPlatformMapping>       PlatformTypeMapping;                                        // 0x0078   (0x0010)  
	bool                                               bEnableRemovalRequests;                                     // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0089   (0x0007)  MISSED
	TArray<FPartyReservation>                          Reservations;                                               // 0x0090   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x00A0   (0x0010)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.QuitMatchCallbackProxy
/// Size: 0x0048 (0x000038 - 0x000080)
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1644) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,1645) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0058   (0x0028)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
	// class UQuitMatchCallbackProxy* QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, TEnumAsByte<EMPMatchOutcome> Outcome, int32_t TurnTimeoutInSeconds); // [0x43c1dc0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.ShowLoginUICallbackProxy
/// Size: 0x0030 (0x000038 - 0x000068)
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1646) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,1647) /* FMulticastInlineDelegate */ __um(OnFailure);                                         // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0058   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
	// class UShowLoginUICallbackProxy* ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController); // [0x43c2ce0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemUtils.SpectatorReservation
/// Size: 0x0078 (0x000000 - 0x000078)
struct FSpectatorReservation
{ 
	FUniqueNetIdRepl                                   SpectatorId;                                                // 0x0000   (0x0028)  
	FPlayerReservation                                 Spectator;                                                  // 0x0028   (0x0050)  
};

/// Class /Script/OnlineSubsystemUtils.SpectatorBeaconClient
/// Size: 0x00E8 (0x0002C8 - 0x0003B0)
class ASpectatorBeaconClient : public AOnlineBeaconClient
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x02C8   (0x0030)  MISSED
	SDK_UNDEFINED(16,1648) /* FString */               __um(DestSessionId);                                        // 0x02F8   (0x0010)  
	FSpectatorReservation                              PendingReservation;                                         // 0x0308   (0x0078)  
	ESpectatorClientRequestType                        RequestType;                                                // 0x0380   (0x0001)  
	bool                                               bPendingReservationSent;                                    // 0x0381   (0x0001)  
	bool                                               bCancelReservation;                                         // 0x0382   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2D];                                      // 0x0383   (0x002D)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest
	// void ServerReservationRequest(FString SESSIONID, FSpectatorReservation Reservation);                                  // [0x43c2850] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest
	// void ServerCancelReservationRequest(FUniqueNetIdRepl Spectator);                                                      // [0x43c2220] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates
	// void ClientSendReservationUpdates(int32_t NumRemainingReservations);                                                  // [0x43c1930] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull
	// void ClientSendReservationFull();                                                                                     // [0x43c1880] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse
	// void ClientReservationResponse(TEnumAsByte<ESpectatorReservationResult> ReservationResponse);                         // [0x43c17e0] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse
	// void ClientCancelReservationResponse(TEnumAsByte<ESpectatorReservationResult> ReservationResponse);                   // [0x43c16c0] Net|NetReliableNative|Event|Public|NetClient 
};

/// Class /Script/OnlineSubsystemUtils.SpectatorBeaconHost
/// Size: 0x0078 (0x000258 - 0x0002D0)
class ASpectatorBeaconHost : public AOnlineBeaconHostObject
{ 
public:
	class USpectatorBeaconState*                       State;                                                      // 0x0258   (0x0008)  
	unsigned char                                      UnknownData00_5[0x60];                                      // 0x0260   (0x0060)  MISSED
	bool                                               bLogoutOnSessionTimeout;                                    // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02C1   (0x0003)  MISSED
	float                                              SessionTimeoutSecs;                                         // 0x02C4   (0x0004)  
	float                                              TravelSessionTimeoutSecs;                                   // 0x02C8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x02CC   (0x0004)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.SpectatorBeaconState
/// Size: 0x0038 (0x000030 - 0x000068)
class USpectatorBeaconState : public UObject
{ 
public:
	FName                                              SessionName;                                                // 0x0030   (0x000C)  
	int32_t                                            NumConsumedReservations;                                    // 0x003C   (0x0004)  
	int32_t                                            MaxReservations;                                            // 0x0040   (0x0004)  
	bool                                               bRestrictCrossConsole;                                      // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0045   (0x0003)  MISSED
	TArray<FSpectatorReservation>                      Reservations;                                               // 0x0048   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0058   (0x0010)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.TestBeaconClient
/// Size: 0x0000 (0x0002C8 - 0x0002C8)
class ATestBeaconClient : public AOnlineBeaconClient
{ 
public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.TestBeaconClient.ServerPong
	// void ServerPong();                                                                                                    // [0x43c3ce0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.TestBeaconClient.ClientPing
	// void ClientPing();                                                                                                    // [0x43c3630] Net|NetReliableNative|Event|Public|NetClient 
};

/// Class /Script/OnlineSubsystemUtils.TestBeaconHost
/// Size: 0x0000 (0x000258 - 0x000258)
class ATestBeaconHost : public AOnlineBeaconHostObject
{ 
public:
};

/// Class /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
	// void RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object); // [0x43c3be0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
	// void GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, int32_t PlayerIndex, FString& PlayerDisplayName); // [0x43c39b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
	// void GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, int32_t& PlayerIndex); // [0x43c3800] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
	// void GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, bool& bIsMyTurn); // [0x43c3650] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.VoipListenerSynthComponent
/// Size: 0x0060 (0x0006E0 - 0x000740)
class UVoipListenerSynthComponent : public USynthComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x06E0   (0x0060)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling
	// bool IsIdling();                                                                                                      // [0x43c3bb0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemUtils.BlueprintSessionResult
/// Size: 0x0108 (0x000000 - 0x000108)
struct FBlueprintSessionResult
{ 
	unsigned char                                      UnknownData00_1[0x108];                                     // 0x0000   (0x0108)  MISSED
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseReceiptInfo2
/// Size: 0x0030 (0x000000 - 0x000030)
struct FInAppPurchaseReceiptInfo2
{ 
	SDK_UNDEFINED(16,1649) /* FString */               __um(ItemName);                                             // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1650) /* FString */               __um(ItemId);                                               // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,1651) /* FString */               __um(ValidationInfo);                                       // 0x0020   (0x0010)  
};

/// Struct /Script/OnlineSubsystemUtils.OnlineProxyStoreOffer
/// Size: 0x0110 (0x000000 - 0x000110)
struct FOnlineProxyStoreOffer
{ 
	SDK_UNDEFINED(16,1652) /* FString */               __um(OfferId);                                              // 0x0000   (0x0010)  
	SDK_UNDEFINED(24,1653) /* FText */                 __um(Title);                                                // 0x0010   (0x0018)  
	SDK_UNDEFINED(24,1654) /* FText */                 __um(Description);                                          // 0x0028   (0x0018)  
	SDK_UNDEFINED(24,1655) /* FText */                 __um(LongDescription);                                      // 0x0040   (0x0018)  
	SDK_UNDEFINED(24,1656) /* FText */                 __um(RegularPriceText);                                     // 0x0058   (0x0018)  
	int32_t                                            RegularPrice;                                               // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	SDK_UNDEFINED(24,1657) /* FText */                 __um(PriceText);                                            // 0x0078   (0x0018)  
	int32_t                                            NumericPrice;                                               // 0x0090   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0094   (0x0004)  MISSED
	SDK_UNDEFINED(16,1658) /* FString */               __um(CurrencyCode);                                         // 0x0098   (0x0010)  
	FDateTime                                          ReleaseDate;                                                // 0x00A8   (0x0008)  
	FDateTime                                          ExpirationDate;                                             // 0x00B0   (0x0008)  
	EOnlineProxyStoreOfferDiscountType                 DiscountType;                                               // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00B9   (0x0007)  MISSED
	SDK_UNDEFINED(80,1659) /* TMap<FString, FString> */ __um(DynamicFields);                                       // 0x00C0   (0x0050)  
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseRestoreInfo2
/// Size: 0x0030 (0x000000 - 0x000030)
struct FInAppPurchaseRestoreInfo2
{ 
	SDK_UNDEFINED(16,1660) /* FString */               __um(ItemName);                                             // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1661) /* FString */               __um(ItemId);                                               // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,1662) /* FString */               __um(ValidationInfo);                                       // 0x0020   (0x0010)  
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseReceiptInfo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FInAppPurchaseReceiptInfo
{ 
	SDK_UNDEFINED(16,1663) /* FString */               __um(ItemName);                                             // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1664) /* FString */               __um(ItemId);                                               // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,1665) /* FString */               __um(ValidationInfo);                                       // 0x0020   (0x0010)  
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseProductInfo2
/// Size: 0x00F8 (0x000000 - 0x0000F8)
struct FInAppPurchaseProductInfo2
{ 
	SDK_UNDEFINED(16,1666) /* FString */               __um(Identifier);                                           // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1667) /* FString */               __um(TransactionIdentifier);                                // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,1668) /* FString */               __um(DisplayName);                                          // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,1669) /* FString */               __um(DisplayDescription);                                   // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1670) /* FString */               __um(DisplayPrice);                                         // 0x0040   (0x0010)  
	float                                              RawPrice;                                                   // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	SDK_UNDEFINED(16,1671) /* FString */               __um(CurrencyCode);                                         // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,1672) /* FString */               __um(CurrencySymbol);                                       // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,1673) /* FString */               __um(DecimalSeparator);                                     // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,1674) /* FString */               __um(GroupingSeparator);                                    // 0x0088   (0x0010)  
	SDK_UNDEFINED(16,1675) /* FString */               __um(ReceiptData);                                          // 0x0098   (0x0010)  
	SDK_UNDEFINED(80,1676) /* TMap<FString, FString> */ __um(DynamicFields);                                       // 0x00A8   (0x0050)  
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseProductRequest2
/// Size: 0x0018 (0x000000 - 0x000018)
struct FInAppPurchaseProductRequest2
{ 
	SDK_UNDEFINED(16,1677) /* FString */               __um(ProductIdentifier);                                    // 0x0000   (0x0010)  
	bool                                               bIsConsumable;                                              // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

