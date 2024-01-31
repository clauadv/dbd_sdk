
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/OnlineMessagesUtilities.EClaimableInboxMessageState
/// Size: 0x03
enum class EClaimableInboxMessageState : uint8_t
{
	EClaimableInboxMessageState__NONE                                                = 0,
	EClaimableInboxMessageState__CLAIMED                                             = 1,
	EClaimableInboxMessageState__EClaimableInboxMessageState_MAX                     = 2
};

/// Enum /Script/OnlineMessagesUtilities.EClaimableInboxMessageType
/// Size: 0x04
enum class EClaimableInboxMessageType : uint8_t
{
	EClaimableInboxMessageType__None                                                 = 0,
	EClaimableInboxMessageType__Currency                                             = 1,
	EClaimableInboxMessageType__Inventory                                            = 2,
	EClaimableInboxMessageType__EClaimableInboxMessageType_MAX                       = 3
};

/// Enum /Script/OnlineMessagesUtilities.EOnlineMessageFlag
/// Size: 0x04
enum class EOnlineMessageFlag : uint8_t
{
	EOnlineMessageFlag__New                                                          = 0,
	EOnlineMessageFlag__Read                                                         = 1,
	EOnlineMessageFlag__Archived                                                     = 2,
	EOnlineMessageFlag__EOnlineMessageFlag_MAX                                       = 3
};

/// Struct /Script/OnlineMessagesUtilities.ClaimableInboxMessageData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FClaimableInboxMessageData
{ 
	EClaimableInboxMessageType                         Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            Amount;                                                     // 0x0004   (0x0004)  
	SDK_UNDEFINED(16,1615) /* FString */               __um(ID);                                                   // 0x0008   (0x0010)  
};

/// Struct /Script/OnlineMessagesUtilities.InboxMessageData
/// Size: 0x0070 (0x000000 - 0x000070)
struct FInboxMessageData
{ 
	int64_t                                            ID;                                                         // 0x0000   (0x0008)  
	SDK_UNDEFINED(16,1616) /* FString */               __um(Origin);                                               // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,1617) /* FString */               __um(RecipientId);                                          // 0x0018   (0x0010)  
	int64_t                                            ReceivedTimestamp;                                          // 0x0028   (0x0008)  
	SDK_UNDEFINED(16,1618) /* FString */               __um(Subject);                                              // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1619) /* FString */               __um(Body);                                                 // 0x0040   (0x0010)  
	TArray<FClaimableInboxMessageData>                 Claimable;                                                  // 0x0050   (0x0010)  
	bool                                               AreRewardsClaimed;                                          // 0x0060   (0x0001)  
	bool                                               IsRead;                                                     // 0x0061   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0062   (0x0006)  MISSED
	int64_t                                            ExpireTimestamp;                                            // 0x0068   (0x0008)  
};

/// Class /Script/OnlineMessagesUtilities.OnlineMessagesContainerComponent
/// Size: 0x0030 (0x0000B8 - 0x0000E8)
class UOnlineMessagesContainerComponent : public UActorComponent
{ 
public:
	TArray<FInboxMessageData>                          _messages;                                                  // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x00C8   (0x0020)  MISSED
};

/// Struct /Script/OnlineMessagesUtilities.ClaimableInboxMessage
/// Size: 0x0018 (0x000000 - 0x000018)
struct FClaimableInboxMessage
{ 
	TArray<FClaimableInboxMessageData>                 Data;                                                       // 0x0000   (0x0010)  
	EClaimableInboxMessageState                        State;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

