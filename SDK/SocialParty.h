
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Customization

/// Enum /Script/SocialParty.EJoinPartyMethod
/// Size: 0x05
enum class EJoinPartyMethod : uint8_t
{
	EJoinPartyMethod__None                                                           = 0,
	EJoinPartyMethod__PlatformInvitation                                             = 1,
	EJoinPartyMethod__InGameInvitation                                               = 2,
	EJoinPartyMethod__JoinRequest                                                    = 3,
	EJoinPartyMethod__EJoinPartyMethod_MAX                                           = 4
};

/// Enum /Script/SocialParty.EPartyBusyReason
/// Size: 0x22
enum class EPartyBusyReason : uint8_t
{
	EPartyBusyReason__None                                                           = 0,
	EPartyBusyReason__CreatingParty                                                  = 1,
	EPartyBusyReason__LeavingParty                                                   = 2,
	EPartyBusyReason__SyncingParty                                                   = 3,
	EPartyBusyReason__DestroyingParty                                                = 4,
	EPartyBusyReason__InvitingPlayer                                                 = 5,
	EPartyBusyReason__AcceptingPartyInvite                                           = 6,
	EPartyBusyReason__RejectingPartyInvite                                           = 7,
	EPartyBusyReason__CancelingPartyInvite                                           = 8,
	EPartyBusyReason__RequestingJoinParty                                            = 9,
	EPartyBusyReason__ValidatingInvite                                               = 10,
	EPartyBusyReason__AcceptingRequestJoinParty                                      = 11,
	EPartyBusyReason__RejectingRequestJoinParty                                      = 12,
	EPartyBusyReason__CancelingRequestJoinParty                                      = 13,
	EPartyBusyReason__AcceptingPlatformInvite                                        = 14,
	EPartyBusyReason__KickingPlayerFromParty                                         = 15,
	EPartyBusyReason__LeavingPartyFromKick                                           = 16,
	EPartyBusyReason__CreatingPartyPlatformSession                                   = 17,
	EPartyBusyReason__LeavingCrossplatformPlatformSession                            = 18,
	EPartyBusyReason__WaitingForPlatformSessionInfo                                  = 19,
	EPartyBusyReason__ProcessingPlatformSession                                      = 20,
	EPartyBusyReason__EPartyBusyReason_MAX                                           = 21
};

/// Enum /Script/SocialParty.EPartyError
/// Size: 0x59
enum class EPartyError : uint8_t
{
	EPartyError__None                                                                = 0,
	EPartyError__CreatePartyFail                                                     = 1,
	EPartyError__CreatePartyFail_PlayerAlreadyInParty                                = 2,
	EPartyError__ConnectionToPartyManagementLost                                     = 3,
	EPartyError__AcceptInvitationFail                                                = 4,
	EPartyError__AcceptInvitationFail_InvitationExpired                              = 5,
	EPartyError__AcceptInvitationFail_PartyIsFull                                    = 6,
	EPartyError__AcceptInvitationFail_PartyDoesNotExists                             = 7,
	EPartyError__AcceptInvitationFail_VersionMismatch                                = 8,
	EPartyError__AcceptInvitationFail_StreamingInstallationIncomplete                = 9,
	EPartyError__AcceptInvitationFail_PartyAlreadyInMatchmaking                      = 10,
	EPartyError__AcceptInvitationFail_AllPartyMembersAreInMatch                      = 11,
	EPartyError__RejectInvitationFail                                                = 12,
	EPartyError__RejectInvitationFail_PartyDoesNotExists                             = 13,
	EPartyError__InvitationFail                                                      = 14,
	EPartyError__InvitationFail_PartyDoesNotExists                                   = 15,
	EPartyError__InvitationFail_PlayerAlreadyInParty                                 = 16,
	EPartyError__InvitationFail_NotFriendsWithUser                                   = 17,
	EPartyError__JoinRequestFail                                                     = 18,
	EPartyError__JoinRequestFail_PartyDoesNotExists                                  = 19,
	EPartyError__JoinRequestFail_PlayerAlreadyInPartyOrPartyFull                     = 20,
	EPartyError__JoinRequestFail_BannedFromParty                                     = 21,
	EPartyError__JoinRequestFail_FriendNotInParty                                    = 22,
	EPartyError__JoinRequestFail_PartyIsPrivate                                      = 23,
	EPartyError__JoinRequestAcceptedFail                                             = 24,
	EPartyError__JoinRequestAcceptedFail_PartyDoesNotExists                          = 25,
	EPartyError__AcceptJoinRequestFail                                               = 26,
	EPartyError__AcceptJoinRequestFail_RequestNotFound                               = 27,
	EPartyError__AcceptJoinRequestFail_PartyDoesNotExists                            = 28,
	EPartyError__RejectJoinRequestFail                                               = 29,
	EPartyError__RejectJoinRequestFail_RequestNotFound                               = 30,
	EPartyError__RejectJoinRequestFail_PartyDoesNotExists                            = 31,
	EPartyError__CancelJoinRequestFail                                               = 32,
	EPartyError__CancelJoinRequestFail_RequestNotFound                               = 33,
	EPartyError__RealTimeMessagingDisconnected                                       = 34,
	EPartyError__FriendBlocked_UnableToJoinParty                                     = 35,
	EPartyError__FriendBlocked_UnableToRemainInParty                                 = 36,
	EPartyError__CancelInvitationFail                                                = 37,
	EPartyError__CancelInvitationFail_PartyDoesNotExists                             = 38,
	EPartyError__SendPartyChatMessageFail                                            = 39,
	EPartyError__SendPartyChatMessageFail_PartyDoesNotExists                         = 40,
	EPartyError__SendPartyChatMessageFail_MessageNotAllowed                          = 41,
	EPartyError__InvitationValidationError                                           = 42,
	EPartyError__InvitationValidationError_StandardInviteFlowButActiveCrowdPlay      = 43,
	EPartyError__InvitationValidationError_QueueToPlayInviteButInactiveCrowdPlay     = 44,
	EPartyError__InvitationValidationError_PartyIsFull                               = 45,
	EPartyError__InvitationValidationError_PartyDoesNotExists                        = 46,
	EPartyError__InvitationValidationError_VersionMismatch                           = 47,
	EPartyError__InvitationValidationError_StreamingInstallationIncomplete           = 48,
	EPartyError__InvitationValidationError_FriendBlocked                             = 49,
	EPartyError__InvitationValidationError_InsufficientPrivileges                    = 50,
	EPartyError__InvitationValidationError_PlayerBanned                              = 51,
	EPartyError__InvitationValidationError_LocalCrossplayIncompatibility             = 52,
	EPartyError__InvitationValidationError_RemoteCrossplayIncompatibility            = 53,
	EPartyError__InvitationValidationError_ListenServerCrossplayIncompatibility      = 54,
	EPartyError__RemovePlayerFromPartyFail                                           = 55,
	EPartyError__JoinFail_PlayerAlreadyInParty                                       = 56,
	EPartyError__UnknownError                                                        = 57,
	EPartyError__EPartyError_MAX                                                     = 58
};

/// Enum /Script/SocialParty.EPartyPostMatchmakingState
/// Size: 0x05
enum class EPartyPostMatchmakingState : uint8_t
{
	EPartyPostMatchmakingState__None                                                 = 0,
	EPartyPostMatchmakingState__InProgress                                           = 1,
	EPartyPostMatchmakingState__Completed                                            = 2,
	EPartyPostMatchmakingState__Error                                                = 3,
	EPartyPostMatchmakingState__EPartyPostMatchmakingState_MAX                       = 4
};

/// Enum /Script/SocialParty.EPartyPostMatchmakingRole
/// Size: 0x04
enum class EPartyPostMatchmakingRole : uint8_t
{
	EPartyPostMatchmakingRole__None                                                  = 0,
	EPartyPostMatchmakingRole__Client                                                = 1,
	EPartyPostMatchmakingRole__Host                                                  = 2,
	EPartyPostMatchmakingRole__EPartyPostMatchmakingRole_MAX                         = 3
};

/// Enum /Script/SocialParty.EMatchmakingState
/// Size: 0x05
enum class EMatchmakingState : uint8_t
{
	EMatchmakingState__None                                                          = 0,
	EMatchmakingState__Searching                                                     = 1,
	EMatchmakingState__MatchFound                                                    = 2,
	EMatchmakingState__Error                                                         = 3,
	EMatchmakingState__EMatchmakingState_MAX                                         = 4
};

/// Class /Script/SocialParty.PartyFacade
/// Size: 0x0498 (0x000030 - 0x0004C8)
class UPartyFacade : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x498];                                     // 0x0030   (0x0498)  MISSED
};

/// Struct /Script/SocialParty.Loadout
/// Size: 0x0050 (0x000000 - 0x000050)
struct FLoadout
{ 
	FName                                              Offering;                                                   // 0x0000   (0x000C)  
	FName                                              Item;                                                       // 0x000C   (0x000C)  
	FName                                              addon1;                                                     // 0x0018   (0x000C)  
	FName                                              addon2;                                                     // 0x0024   (0x000C)  
	TArray<FName>                                      _perks;                                                     // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Struct /Script/SocialParty.CustomGameBot
/// Size: 0x00C0 (0x000000 - 0x0000C0)
struct FCustomGameBot
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
	char                                               _role;                                                      // 0x0001   (0x0001)  
	char                                               _difficulty;                                                // 0x0002   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x0003   (0x0001)  MISSED
	int32_t                                            _characterIndex;                                            // 0x0004   (0x0004)  
	int32_t                                            _slotIndex;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(16,1716) /* FString */               __um(_botGUID);                                             // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,1717) /* FString */               __um(_botName);                                             // 0x0020   (0x0010)  
	FLoadout                                           _loadout;                                                   // 0x0030   (0x0050)  
	unsigned char                                      UnknownData03_6[0x40];                                      // 0x0080   (0x0040)  MISSED
};

/// Struct /Script/SocialParty.CustomGameBotsData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCustomGameBotsData
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	TArray<FCustomGameBot>                             _bots;                                                      // 0x0008   (0x0010)  
};

/// Struct /Script/SocialParty.SocialPartyMember
/// Size: 0x00E8 (0x000000 - 0x0000E8)
struct FSocialPartyMember
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	FEquippedPlayerCustomization                       _playerCustomization;                                       // 0x0008   (0x0038)  
	SDK_UNDEFINED(16,1718) /* FString */               __um(_playerName);                                          // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,1719) /* FString */               __um(_platformSessionId);                                   // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,1720) /* FString */               __um(_uniquePlayerId);                                      // 0x0060   (0x0010)  
	int32_t                                            _playerRank;                                                // 0x0070   (0x0004)  
	int32_t                                            _characterLevel;                                            // 0x0074   (0x0004)  
	int32_t                                            _prestigeLevel;                                             // 0x0078   (0x0004)  
	int32_t                                            _gameRole;                                                  // 0x007C   (0x0004)  
	int32_t                                            _characterId;                                               // 0x0080   (0x0004)  
	FName                                              _powerId;                                                   // 0x0084   (0x000C)  
	int32_t                                            _location;                                                  // 0x0090   (0x0004)  
	int32_t                                            _queueDelayIteration;                                       // 0x0094   (0x0004)  
	bool                                               _ready;                                                     // 0x0098   (0x0001)  
	bool                                               _crossplayAllowed;                                          // 0x0099   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x009A   (0x0006)  MISSED
	SDK_UNDEFINED(16,1721) /* FString */               __um(_playerPlatform);                                      // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,1722) /* FString */               __um(_playerProvider);                                      // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,1723) /* FString */               __um(_matchId);                                             // 0x00C0   (0x0010)  
	EPartyPostMatchmakingRole                          _postMatchmakingRole;                                       // 0x00D0   (0x0001)  
	EPartyPostMatchmakingState                         _postMatchmakingState;                                      // 0x00D1   (0x0001)  
	char                                               _roleRequested;                                             // 0x00D2   (0x0001)  
	char                                               _anonymousSuffix;                                           // 0x00D3   (0x0001)  
	bool                                               _isStateInitialized;                                        // 0x00D4   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00D5   (0x0003)  MISSED
	int64_t                                            _disconnectionPenaltyEndOfBan;                              // 0x00D8   (0x0008)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x00E0   (0x0008)  MISSED
};

/// Struct /Script/SocialParty.CustomGamePresetData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FCustomGamePresetData
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	TArray<char>                                       _mapAvailabilities;                                         // 0x0008   (0x0010)  
	bool                                               _arePerkAvailable;                                          // 0x0018   (0x0001)  
	bool                                               _areOfferingAvailable;                                      // 0x0019   (0x0001)  
	bool                                               _areItemAvailable;                                          // 0x001A   (0x0001)  
	bool                                               _areItemAddonAvailable;                                     // 0x001B   (0x0001)  
	bool                                               _areDlcContentAllowed;                                      // 0x001C   (0x0001)  
	bool                                               _isPrivateMatch;                                            // 0x001D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x001E   (0x0002)  MISSED
	FCustomGameBotsData                                _botsData;                                                  // 0x0020   (0x0018)  
};

/// Struct /Script/SocialParty.PartySessionSettings
/// Size: 0x0098 (0x000000 - 0x000098)
struct FPartySessionSettings
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	SDK_UNDEFINED(16,1724) /* FString */               __um(_sessionId);                                           // 0x0008   (0x0010)  
	SDK_UNDEFINED(80,1725) /* TMap<FString, FString> */ __um(_gameSessionInfos);                                   // 0x0018   (0x0050)  
	SDK_UNDEFINED(16,1726) /* FString */               __um(_owningUserId);                                        // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,1727) /* FString */               __um(_owningUserName);                                      // 0x0078   (0x0010)  
	bool                                               _isDedicated;                                               // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0089   (0x0007)  MISSED
	int64_t                                            _matchmakingTimestamp;                                      // 0x0090   (0x0008)  
};

/// Struct /Script/SocialParty.PartyMatchmakingSettings
/// Size: 0x0038 (0x000000 - 0x000038)
struct FPartyMatchmakingSettings
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	SDK_UNDEFINED(16,1728) /* TArray<FString> */       __um(_playerIds);                                           // 0x0008   (0x0010)  
	EMatchmakingState                                  _matchmakingState;                                          // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	int64_t                                            _startMatchmakingDateTimestamp;                             // 0x0020   (0x0008)  
	uint32_t                                           _matchIncentive;                                            // 0x0028   (0x0004)  
	bool                                               _isInFinalCountdown;                                        // 0x002C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x002D   (0x0003)  MISSED
	int32_t                                            _postMatchmakingTransitionId;                               // 0x0030   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/SocialParty.SocialPartyState
/// Size: 0x0190 (0x000000 - 0x000190)
struct FSocialPartyState
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	FCustomGamePresetData                              _customGamePresetData;                                      // 0x0008   (0x0038)  
	FPartySessionSettings                              _partySessionSettings;                                      // 0x0040   (0x0098)  
	FPartyMatchmakingSettings                          _partyMatchmakingSettings;                                  // 0x00D8   (0x0038)  
	TArray<FName>                                      _playerJoinOrder;                                           // 0x0110   (0x0010)  
	SDK_UNDEFINED(80,1729) /* TMap<FName, char> */     __um(_playerChatIndices);                                   // 0x0120   (0x0050)  
	int32_t                                            _gameType;                                                  // 0x0170   (0x0004)  
	bool                                               _isCrowdPlay;                                               // 0x0174   (0x0001)  
	bool                                               _isUsingDedicatedServer;                                    // 0x0175   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0176   (0x0002)  MISSED
	SDK_UNDEFINED(16,1730) /* FString */               __um(_version);                                             // 0x0178   (0x0010)  
	int32_t                                            _lastUpdatedTime;                                           // 0x0188   (0x0004)  
	int32_t                                            _lastSentTime;                                              // 0x018C   (0x0004)  
};

