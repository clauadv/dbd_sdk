
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

/// Enum /Script/Lobby.ELobbyBeaconJoinState
/// Size: 0x04
enum class ELobbyBeaconJoinState : uint8_t
{
	ELobbyBeaconJoinState__None                                                      = 0,
	ELobbyBeaconJoinState__SentJoinRequest                                           = 1,
	ELobbyBeaconJoinState__JoinRequestAcknowledged                                   = 2,
	ELobbyBeaconJoinState__ELobbyBeaconJoinState_MAX                                 = 3
};

/// Class /Script/Lobby.LobbyBeaconClient
/// Size: 0x0088 (0x0002C8 - 0x000350)
class ALobbyBeaconClient : public AOnlineBeaconClient
{ 
public:
	class ALobbyBeaconState*                           LobbyState;                                                 // 0x02C8   (0x0008)  
	class ALobbyBeaconPlayerState*                     PlayerState;                                                // 0x02D0   (0x0008)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x02D8   (0x0001)  MISSED
	ELobbyBeaconJoinState                              LobbyJoinServerState;                                       // 0x02D9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x76];                                      // 0x02DA   (0x0076)  MISSED


	/// Functions
	// Function /Script/Lobby.LobbyBeaconClient.ServerSetPartyOwner
	// void ServerSetPartyOwner(FUniqueNetIdRepl InUniqueId, FUniqueNetIdRepl InPartyOwnerId);                               // [0x4327730] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/Lobby.LobbyBeaconClient.ServerNotifyJoiningServer
	// void ServerNotifyJoiningServer();                                                                                     // [0x43276e0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/Lobby.LobbyBeaconClient.ServerLoginPlayer
	// void ServerLoginPlayer(FString InSessionId, FUniqueNetIdRepl InUniqueId, FString UrlString);                          // [0x4327520] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/Lobby.LobbyBeaconClient.ServerKickPlayer
	// void ServerKickPlayer(FUniqueNetIdRepl PlayerToKick, FText Reason);                                                   // [0x4327380] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/Lobby.LobbyBeaconClient.ServerDisconnectFromLobby
	// void ServerDisconnectFromLobby();                                                                                     // [0x4327330] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/Lobby.LobbyBeaconClient.ServerCheat
	// void ServerCheat(FString Msg);                                                                                        // [0x4327270] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/Lobby.LobbyBeaconClient.ClientWasKicked
	// void ClientWasKicked(FText KickReason);                                                                               // [0x4327110] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/Lobby.LobbyBeaconClient.ClientSetInviteFlags
	// void ClientSetInviteFlags(FJoinabilitySettings Settings);                                                             // [0x4327070] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/Lobby.LobbyBeaconClient.ClientPlayerLeft
	// void ClientPlayerLeft(FUniqueNetIdRepl InUniqueId);                                                                   // [0x4326f80] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/Lobby.LobbyBeaconClient.ClientPlayerJoined
	// void ClientPlayerJoined(FText NewPlayerName, FUniqueNetIdRepl InUniqueId);                                            // [0x4326e00] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/Lobby.LobbyBeaconClient.ClientLoginComplete
	// void ClientLoginComplete(FUniqueNetIdRepl InUniqueId, bool bWasSuccessful);                                           // [0x4326cd0] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/Lobby.LobbyBeaconClient.ClientJoinGame
	// void ClientJoinGame();                                                                                                // [0x4326cb0] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/Lobby.LobbyBeaconClient.ClientAckJoiningServer
	// void ClientAckJoiningServer();                                                                                        // [0x4326c90] Net|NetReliableNative|Event|Protected|NetClient 
};

/// Class /Script/Lobby.LobbyBeaconHost
/// Size: 0x0048 (0x000258 - 0x0002A0)
class ALobbyBeaconHost : public AOnlineBeaconHostObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0258   (0x0010)  MISSED
	SDK_UNDEFINED(48,4871) /* TWeakObjectPtr<UClass*> */ __um(LobbyStateClass);                                    // 0x0268   (0x0030)  
	class ALobbyBeaconState*                           LobbyState;                                                 // 0x0298   (0x0008)  
};

/// Class /Script/Lobby.LobbyBeaconPlayerState
/// Size: 0x00C0 (0x000230 - 0x0002F0)
class ALobbyBeaconPlayerState : public AInfo
{ 
public:
	SDK_UNDEFINED(24,4872) /* FText */                 __um(DisplayName);                                          // 0x0230   (0x0018)  
	FUniqueNetIdRepl                                   UniqueId;                                                   // 0x0248   (0x0028)  
	FUniqueNetIdRepl                                   PartyOwnerUniqueId;                                         // 0x0270   (0x0028)  
	bool                                               bInLobby;                                                   // 0x0298   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0299   (0x0007)  MISSED
	class AOnlineBeaconClient*                         ClientActor;                                                // 0x02A0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x48];                                      // 0x02A8   (0x0048)  MISSED


	/// Functions
	// Function /Script/Lobby.LobbyBeaconPlayerState.OnRep_UniqueId
	// void OnRep_UniqueId();                                                                                                // [0x4327230] Final|Native|Protected 
	// Function /Script/Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner
	// void OnRep_PartyOwner();                                                                                              // [0x4327210] Final|Native|Protected 
	// Function /Script/Lobby.LobbyBeaconPlayerState.OnRep_InLobby
	// void OnRep_InLobby();                                                                                                 // [0x43271d0] Final|Native|Protected 
};

/// Struct /Script/Lobby.LobbyPlayerStateActorInfo
/// Size: 0x000C (0x00000C - 0x000018)
struct FLobbyPlayerStateActorInfo : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x000C   (0x0004)  MISSED
	class ALobbyBeaconPlayerState*                     LobbyPlayerState;                                           // 0x0010   (0x0008)  
};

/// Struct /Script/Lobby.LobbyPlayerStateInfoArray
/// Size: 0x0018 (0x000108 - 0x000120)
struct FLobbyPlayerStateInfoArray : FFastArraySerializer
{ 
	TArray<FLobbyPlayerStateActorInfo>                 Players;                                                    // 0x0108   (0x0010)  
	class ALobbyBeaconState*                           ParentState;                                                // 0x0118   (0x0008)  
};

/// Class /Script/Lobby.LobbyBeaconState
/// Size: 0x01A8 (0x000230 - 0x0003D8)
class ALobbyBeaconState : public AInfo
{ 
public:
	int32_t                                            MaxPlayers;                                                 // 0x0230   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0234   (0x0004)  MISSED
	class UClass*                                      LobbyBeaconPlayerStateClass;                                // 0x0238   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0240   (0x0008)  MISSED
	bool                                               bLobbyStarted;                                              // 0x0248   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0249   (0x0003)  MISSED
	float                                              WaitForPlayersTimeRemaining;                                // 0x024C   (0x0004)  
	FLobbyPlayerStateInfoArray                         Players;                                                    // 0x0250   (0x0120)  
	unsigned char                                      UnknownData03_6[0x68];                                      // 0x0370   (0x0068)  MISSED


	/// Functions
	// Function /Script/Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining
	// void OnRep_WaitForPlayersTimeRemaining();                                                                             // [0x4327250] Final|Native|Protected 
	// Function /Script/Lobby.LobbyBeaconState.OnRep_LobbyStarted
	// void OnRep_LobbyStarted();                                                                                            // [0x43271f0] Final|Native|Protected 
};

