
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: OnlineSubsystemUtils

/// Enum /Script/Party.EApprovalAction
/// Size: 0x05
enum class EApprovalAction : uint8_t
{
	EApprovalAction__Approve                                                         = 0,
	EApprovalAction__Enqueue                                                         = 1,
	EApprovalAction__EnqueueAndStartBeacon                                           = 2,
	EApprovalAction__Deny                                                            = 3,
	EApprovalAction__EApprovalAction_MAX                                             = 4
};

/// Enum /Script/Party.EPartyJoinDenialReason
/// Size: 0x65
enum class EPartyJoinDenialReason : uint8_t
{
	EPartyJoinDenialReason__NoReason                                                 = 0,
	EPartyJoinDenialReason__JoinAttemptAborted                                       = 1,
	EPartyJoinDenialReason__Busy                                                     = 2,
	EPartyJoinDenialReason__OssUnavailable                                           = 3,
	EPartyJoinDenialReason__PartyFull                                                = 4,
	EPartyJoinDenialReason__GameFull                                                 = 5,
	EPartyJoinDenialReason__NotPartyLeader                                           = 6,
	EPartyJoinDenialReason__PartyPrivate                                             = 7,
	EPartyJoinDenialReason__JoinerCrossplayRestricted                                = 8,
	EPartyJoinDenialReason__MemberCrossplayRestricted                                = 9,
	EPartyJoinDenialReason__GameModeRestricted                                       = 10,
	EPartyJoinDenialReason__Banned                                                   = 11,
	EPartyJoinDenialReason__NotLoggedIn                                              = 12,
	EPartyJoinDenialReason__CheckingForRejoin                                        = 13,
	EPartyJoinDenialReason__TargetUserMissingPresence                                = 14,
	EPartyJoinDenialReason__TargetUserUnjoinable                                     = 15,
	EPartyJoinDenialReason__TargetUserAway                                           = 16,
	EPartyJoinDenialReason__AlreadyLeaderInPlatformSession                           = 17,
	EPartyJoinDenialReason__TargetUserPlayingDifferentGame                           = 18,
	EPartyJoinDenialReason__TargetUserMissingPlatformSession                         = 19,
	EPartyJoinDenialReason__PlatformSessionMissingJoinInfo                           = 20,
	EPartyJoinDenialReason__FailedToStartFindConsoleSession                          = 21,
	EPartyJoinDenialReason__MissingPartyClassForTypeId                               = 22,
	EPartyJoinDenialReason__TargetUserBlocked                                        = 23,
	EPartyJoinDenialReason__CustomReason0                                            = 24,
	EPartyJoinDenialReason__CustomReason1                                            = 25,
	EPartyJoinDenialReason__CustomReason2                                            = 26,
	EPartyJoinDenialReason__CustomReason3                                            = 27,
	EPartyJoinDenialReason__CustomReason4                                            = 28,
	EPartyJoinDenialReason__CustomReason5                                            = 29,
	EPartyJoinDenialReason__CustomReason6                                            = 30,
	EPartyJoinDenialReason__CustomReason7                                            = 31,
	EPartyJoinDenialReason__CustomReason8                                            = 32,
	EPartyJoinDenialReason__CustomReason9                                            = 33,
	EPartyJoinDenialReason__CustomReason10                                           = 34,
	EPartyJoinDenialReason__CustomReason11                                           = 35,
	EPartyJoinDenialReason__CustomReason12                                           = 36,
	EPartyJoinDenialReason__CustomReason13                                           = 37,
	EPartyJoinDenialReason__CustomReason14                                           = 38,
	EPartyJoinDenialReason__CustomReason15                                           = 39,
	EPartyJoinDenialReason__CustomReason16                                           = 40,
	EPartyJoinDenialReason__CustomReason17                                           = 41,
	EPartyJoinDenialReason__CustomReason18                                           = 42,
	EPartyJoinDenialReason__CustomReason19                                           = 43,
	EPartyJoinDenialReason__CustomReason20                                           = 44,
	EPartyJoinDenialReason__CustomReason21                                           = 45,
	EPartyJoinDenialReason__CustomReason22                                           = 46,
	EPartyJoinDenialReason__CustomReason23                                           = 47,
	EPartyJoinDenialReason__CustomReason24                                           = 48,
	EPartyJoinDenialReason__CustomReason25                                           = 49,
	EPartyJoinDenialReason__CustomReason26                                           = 50,
	EPartyJoinDenialReason__CustomReason27                                           = 51,
	EPartyJoinDenialReason__CustomReason28                                           = 52,
	EPartyJoinDenialReason__CustomReason29                                           = 53,
	EPartyJoinDenialReason__CustomReason30                                           = 54,
	EPartyJoinDenialReason__CustomReason31                                           = 55,
	EPartyJoinDenialReason__CustomReason32                                           = 56,
	EPartyJoinDenialReason__CustomReason33                                           = 57,
	EPartyJoinDenialReason__CustomReason34                                           = 58,
	EPartyJoinDenialReason__CustomReason35                                           = 59,
	EPartyJoinDenialReason__CustomReason36                                           = 60,
	EPartyJoinDenialReason__CustomReason37                                           = 61,
	EPartyJoinDenialReason__CustomReason38                                           = 62,
	EPartyJoinDenialReason__CustomReason39                                           = 63,
	EPartyJoinDenialReason__MAX                                                      = 64
};

/// Enum /Script/Party.EPartyInviteRestriction
/// Size: 0x04
enum class EPartyInviteRestriction : uint8_t
{
	EPartyInviteRestriction__AnyMember                                               = 0,
	EPartyInviteRestriction__LeaderOnly                                              = 1,
	EPartyInviteRestriction__NoInvites                                               = 2,
	EPartyInviteRestriction__EPartyInviteRestriction_MAX                             = 3
};

/// Enum /Script/Party.EPartyType
/// Size: 0x04
enum class EPartyType : uint8_t
{
	EPartyType__Public                                                               = 0,
	EPartyType__FriendsOnly                                                          = 1,
	EPartyType__Private                                                              = 2,
	EPartyType__EPartyType_MAX                                                       = 3
};

/// Enum /Script/Party.ESocialChannelType
/// Size: 0x07
enum class ESocialChannelType : uint8_t
{
	ESocialChannelType__General                                                      = 0,
	ESocialChannelType__Founder                                                      = 1,
	ESocialChannelType__Party                                                        = 2,
	ESocialChannelType__Team                                                         = 3,
	ESocialChannelType__System                                                       = 4,
	ESocialChannelType__Private                                                      = 5,
	ESocialChannelType__ESocialChannelType_MAX                                       = 6
};

/// Enum /Script/Party.EPlatformIconDisplayRule
/// Size: 0x06
enum class EPlatformIconDisplayRule : uint8_t
{
	EPlatformIconDisplayRule__Always                                                 = 0,
	EPlatformIconDisplayRule__AlwaysIfDifferent                                      = 1,
	EPlatformIconDisplayRule__AlwaysWhenInCrossplayParty                             = 2,
	EPlatformIconDisplayRule__AlwaysIfDifferentWhenInCrossplayParty                  = 3,
	EPlatformIconDisplayRule__Never                                                  = 4,
	EPlatformIconDisplayRule__EPlatformIconDisplayRule_MAX                           = 5
};

/// Enum /Script/Party.ECrossplayPreference
/// Size: 0x05
enum class ECrossplayPreference : uint8_t
{
	ECrossplayPreference__NoSelection                                                = 0,
	ECrossplayPreference__OptedIn                                                    = 1,
	ECrossplayPreference__OptedOut                                                   = 2,
	ECrossplayPreference__OptedOutRestricted                                         = 3,
	ECrossplayPreference__ECrossplayPreference_MAX                                   = 4
};

/// Enum /Script/Party.ESocialRelationship
/// Size: 0x09
enum class ESocialRelationship : uint8_t
{
	ESocialRelationship__Any                                                         = 0,
	ESocialRelationship__FriendInviteReceived                                        = 1,
	ESocialRelationship__FriendInviteSent                                            = 2,
	ESocialRelationship__PartyInvite                                                 = 3,
	ESocialRelationship__Friend                                                      = 4,
	ESocialRelationship__BlockedPlayer                                               = 5,
	ESocialRelationship__SuggestedFriend                                             = 6,
	ESocialRelationship__RecentPlayer                                                = 7,
	ESocialRelationship__ESocialRelationship_MAX                                     = 8
};

/// Enum /Script/Party.ESocialSubsystem
/// Size: 0x03
enum class ESocialSubsystem : uint8_t
{
	ESocialSubsystem__Primary                                                        = 0,
	ESocialSubsystem__Platform                                                       = 1,
	ESocialSubsystem__MAX                                                            = 2
};

/// Class /Script/Party.Chatroom
/// Size: 0x0030 (0x000030 - 0x000060)
class UChatroom : public UObject
{ 
public:
	SDK_UNDEFINED(16,5314) /* FString */               __um(CurrentChatRoomId);                                    // 0x0030   (0x0010)  
	int32_t                                            MaxChatRoomRetries;                                         // 0x0040   (0x0004)  
	int32_t                                            NumChatRoomRetries;                                         // 0x0044   (0x0004)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0048   (0x0018)  MISSED
};

/// Class /Script/Party.SocialManager
/// Size: 0x0180 (0x000030 - 0x0001B0)
class USocialManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0030   (0x0028)  MISSED
	TArray<class USocialToolkit*>                      SocialToolkits;                                             // 0x0058   (0x0010)  
	class USocialDebugTools*                           SocialDebugTools;                                           // 0x0068   (0x0008)  
	unsigned char                                      UnknownData01_6[0x140];                                     // 0x0070   (0x0140)  MISSED
};

/// Class /Script/Party.SocialParty
/// Size: 0x02A0 (0x000030 - 0x0002D0)
class USocialParty : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0030   (0x0030)  MISSED
	class UClass*                                      ReservationBeaconClientClass;                               // 0x0060   (0x0008)  
	class UClass*                                      SpectatorBeaconClientClass;                                 // 0x0068   (0x0008)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0070   (0x0010)  MISSED
	FUniqueNetIdRepl                                   OwningLocalUserId;                                          // 0x0080   (0x0028)  
	FUniqueNetIdRepl                                   CurrentLeaderId;                                            // 0x00A8   (0x0028)  
	SDK_UNDEFINED(80,5315) /* TMap<FUniqueNetIdRepl, UPartyMember*> */ __um(PartyMembersById);                     // 0x00D0   (0x0050)  
	bool                                               bEnableAutomaticPartyRejoin;                                // 0x0120   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7F];                                      // 0x0121   (0x007F)  MISSED
	class APartyBeaconClient*                          ReservationBeaconClient;                                    // 0x01A0   (0x0008)  
	unsigned char                                      UnknownData03_5[0x10];                                      // 0x01A8   (0x0010)  MISSED
	class ASpectatorBeaconClient*                      SpectatorBeaconClient;                                      // 0x01B8   (0x0008)  
	unsigned char                                      UnknownData04_6[0x110];                                     // 0x01C0   (0x0110)  MISSED
};

/// Class /Script/Party.PartyMember
/// Size: 0x00C8 (0x000030 - 0x0000F8)
class UPartyMember : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0030   (0x0040)  MISSED
	class USocialUser*                                 SocialUser;                                                 // 0x0070   (0x0008)  
	unsigned char                                      UnknownData01_6[0x80];                                      // 0x0078   (0x0080)  MISSED
};

/// Class /Script/Party.SocialToolkit
/// Size: 0x01D0 (0x000030 - 0x000200)
class USocialToolkit : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0030   (0x0040)  MISSED
	class USocialUser*                                 LocalUser;                                                  // 0x0070   (0x0008)  
	TArray<class USocialUser*>                         AllUsers;                                                   // 0x0078   (0x0010)  
	unsigned char                                      UnknownData01_5[0x50];                                      // 0x0088   (0x0050)  MISSED
	class ULocalPlayer*                                LocalPlayerOwner;                                           // 0x00D8   (0x0008)  
	class USocialChatManager*                          SocialChatManager;                                          // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x118];                                     // 0x00E8   (0x0118)  MISSED
};

/// Class /Script/Party.SocialChatManager
/// Size: 0x01F8 (0x000030 - 0x000228)
class USocialChatManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0030   (0x0050)  MISSED
	SDK_UNDEFINED(80,5316) /* TMap<TWeakObjectPtr<USocialUser*>, USocialPrivateMessageChannel*> */ __um(DirectChannelsByTargetUser); // 0x0080   (0x0050)  
	SDK_UNDEFINED(80,5317) /* TMap<FString, USocialChatRoom*> */ __um(ChatRoomsById);                              // 0x00D0   (0x0050)  
	SDK_UNDEFINED(80,5318) /* TMap<FString, USocialReadOnlyChatChannel*> */ __um(ReadOnlyChannelsByDisplayName);   // 0x0120   (0x0050)  
	bool                                               bEnableChatSlashCommands;                                   // 0x0170   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0171   (0x0007)  MISSED
	SDK_UNDEFINED(80,5319) /* TMap<FUniqueNetIdRepl, USocialGroupChannel*> */ __um(GroupChannels);                 // 0x0178   (0x0050)  
	unsigned char                                      UnknownData02_6[0x60];                                      // 0x01C8   (0x0060)  MISSED
};

/// Class /Script/Party.SocialChatChannel
/// Size: 0x00C0 (0x000030 - 0x0000F0)
class USocialChatChannel : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xC0];                                      // 0x0030   (0x00C0)  MISSED
};

/// Class /Script/Party.SocialChatRoom
/// Size: 0x0010 (0x0000F0 - 0x000100)
class USocialChatRoom : public USocialChatChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00F0   (0x0010)  MISSED
};

/// Class /Script/Party.SocialDebugTools
/// Size: 0x0060 (0x000030 - 0x000090)
class USocialDebugTools : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0030   (0x0060)  MISSED
};

/// Class /Script/Party.SocialGroupChannel
/// Size: 0x0068 (0x000030 - 0x000098)
class USocialGroupChannel : public UObject
{ 
public:
	class USocialUser*                                 SocialUser;                                                 // 0x0030   (0x0008)  
	FUniqueNetIdRepl                                   GroupID;                                                    // 0x0038   (0x0028)  
	SDK_UNDEFINED(24,5320) /* FText */                 __um(DisplayName);                                          // 0x0060   (0x0018)  
	TArray<class USocialUser*>                         Members;                                                    // 0x0078   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0088   (0x0010)  MISSED
};

/// Class /Script/Party.SocialPartyChatRoom
/// Size: 0x0000 (0x000100 - 0x000100)
class USocialPartyChatRoom : public USocialChatRoom
{ 
public:
};

/// Class /Script/Party.SocialPrivateMessageChannel
/// Size: 0x0008 (0x0000F0 - 0x0000F8)
class USocialPrivateMessageChannel : public USocialChatChannel
{ 
public:
	class USocialUser*                                 TargetUser;                                                 // 0x00F0   (0x0008)  
};

/// Class /Script/Party.SocialReadOnlyChatChannel
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class USocialReadOnlyChatChannel : public USocialChatChannel
{ 
public:
};

/// Struct /Script/Party.SocialPlatformDescription
/// Size: 0x0060 (0x000000 - 0x000060)
struct FSocialPlatformDescription
{ 
	SDK_UNDEFINED(16,5321) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,5322) /* FString */               __um(PlatformType);                                         // 0x0010   (0x0010)  
	FName                                              OnlineSubsystem;                                            // 0x0020   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	SDK_UNDEFINED(16,5323) /* FString */               __um(SessionType);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,5324) /* FString */               __um(ExternalAccountType);                                  // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,5325) /* FString */               __um(CrossplayPool);                                        // 0x0050   (0x0010)  
};

/// Class /Script/Party.SocialSettings
/// Size: 0x0038 (0x000030 - 0x000068)
class USocialSettings : public UObject
{ 
public:
	TArray<FName>                                      OssNamesWithEnvironmentIdPrefix;                            // 0x0030   (0x0010)  
	int32_t                                            DefaultMaxPartySize;                                        // 0x0040   (0x0004)  
	bool                                               bPreferPlatformInvites;                                     // 0x0044   (0x0001)  
	bool                                               bMustSendPrimaryInvites;                                    // 0x0045   (0x0001)  
	bool                                               bLeavePartyOnDisconnect;                                    // 0x0046   (0x0001)  
	bool                                               bSetDesiredPrivacyOnLocalPlayerBecomesLeader;               // 0x0047   (0x0001)  
	float                                              UserListAutoUpdateRate;                                     // 0x0048   (0x0004)  
	int32_t                                            MinNicknameLength;                                          // 0x004C   (0x0004)  
	int32_t                                            MaxNicknameLength;                                          // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	TArray<FSocialPlatformDescription>                 SocialPlatformDescriptions;                                 // 0x0058   (0x0010)  
};

/// Class /Script/Party.SocialUser
/// Size: 0x0140 (0x000030 - 0x000170)
class USocialUser : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x140];                                     // 0x0030   (0x0140)  MISSED
};

/// Struct /Script/Party.OnlinePartyRepDataBase
/// Size: 0x0018 (0x000000 - 0x000018)
struct FOnlinePartyRepDataBase
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/Party.UserPlatform
/// Size: 0x0060 (0x000000 - 0x000060)
struct FUserPlatform
{ 
	FSocialPlatformDescription                         PlatformDescription;                                        // 0x0000   (0x0060)  
};

/// Struct /Script/Party.PartyMemberRepData
/// Size: 0x0168 (0x000018 - 0x000180)
struct FPartyMemberRepData : FOnlinePartyRepDataBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0018   (0x0008)  MISSED
	FUserPlatform                                      platform;                                                   // 0x0020   (0x0060)  
	unsigned char                                      UnknownData01_5[0x30];                                      // 0x0080   (0x0030)  MISSED
	FUniqueNetIdRepl                                   PlatformUniqueId;                                           // 0x00B0   (0x0028)  
	unsigned char                                      UnknownData02_5[0x30];                                      // 0x00D8   (0x0030)  MISSED
	SDK_UNDEFINED(16,5326) /* FString */               __um(PlatformSessionId);                                    // 0x0108   (0x0010)  
	unsigned char                                      UnknownData03_5[0x30];                                      // 0x0118   (0x0030)  MISSED
	ECrossplayPreference                               CrossplayPreference;                                        // 0x0148   (0x0001)  
	unsigned char                                      UnknownData04_6[0x37];                                      // 0x0149   (0x0037)  MISSED
};

/// Struct /Script/Party.PartyPrivacySettings
/// Size: 0x0003 (0x000000 - 0x000003)
struct FPartyPrivacySettings
{ 
	EPartyType                                         PartyType;                                                  // 0x0000   (0x0001)  
	EPartyInviteRestriction                            PartyInviteRestriction;                                     // 0x0001   (0x0001)  
	bool                                               bOnlyLeaderFriendsCanJoin;                                  // 0x0002   (0x0001)  
};

/// Struct /Script/Party.PartyPlatformSessionInfo
/// Size: 0x0048 (0x000000 - 0x000048)
struct FPartyPlatformSessionInfo
{ 
	SDK_UNDEFINED(16,5327) /* FString */               __um(SessionType);                                          // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,5328) /* FString */               __um(SESSIONID);                                            // 0x0010   (0x0010)  
	FUniqueNetIdRepl                                   OwnerPrimaryId;                                             // 0x0020   (0x0028)  
};

/// Struct /Script/Party.SocialChatChannelConfig
/// Size: 0x0040 (0x000000 - 0x000040)
struct FSocialChatChannelConfig
{ 
	class USocialUser*                                 SocialUser;                                                 // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0008   (0x0010)  MISSED
	TArray<class USocialChatChannel*>                  ListenChannels;                                             // 0x0018   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Struct /Script/Party.PartyRepData
/// Size: 0x0068 (0x000018 - 0x000080)
struct FPartyRepData : FOnlinePartyRepDataBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0018   (0x0008)  MISSED
	FPartyPrivacySettings                              PrivacySettings;                                            // 0x0020   (0x0003)  
	unsigned char                                      UnknownData01_5[0x35];                                      // 0x0023   (0x0035)  MISSED
	TArray<FPartyPlatformSessionInfo>                  PlatformSessions;                                           // 0x0058   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0068   (0x0018)  MISSED
};

