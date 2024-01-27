
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject

/// Enum /Script/OnlinePresence.ERichPresenceUserType
/// Size: 0x03
enum class ERichPresenceUserType : uint8_t
{
	ERichPresenceUserType__Player                                                    = 0,
	ERichPresenceUserType__Server                                                    = 1,
	ERichPresenceUserType__ERichPresenceUserType_MAX                                 = 2
};

/// Enum /Script/OnlinePresence.ERichPresenceStatus
/// Size: 0x07
enum class ERichPresenceStatus : uint8_t
{
	ERichPresenceStatus__Offline                                                     = 0,
	ERichPresenceStatus__Connected                                                   = 1,
	ERichPresenceStatus__InMenus                                                     = 2,
	ERichPresenceStatus__InPartyLobby                                                = 3,
	ERichPresenceStatus__InOnlineLobby                                               = 4,
	ERichPresenceStatus__InMatch                                                     = 5,
	ERichPresenceStatus__ERichPresenceStatus_MAX                                     = 6
};

/// Class /Script/OnlinePresence.MirrorsConfig
/// Size: 0x0000 (0x000030 - 0x000030)
class UMirrorsConfig : public UObject
{ 
public:
};

/// Class /Script/OnlinePresence.OnlinePresenceExternalCommands
/// Size: 0x0018 (0x000030 - 0x000048)
class UOnlinePresenceExternalCommands : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0030   (0x0018)  MISSED


	/// Functions
	// Function /Script/OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsWalletWithdraw
	// void DBD_MirrorsWalletWithdraw(FString CurrencyName, int32_t value);                                                  // [0x44bdad0] Final|Exec|Native|Public 
	// Function /Script/OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsWalletGetCurrency
	// void DBD_MirrorsWalletGetCurrency(FString CurrencyName);                                                              // [0x44bd9e0] Final|Exec|Native|Public 
	// Function /Script/OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsSaveTestValue
	// void DBD_MirrorsSaveTestValue(FString StateName, int32_t Version);                                                    // [0x44bdad0] Final|Exec|Native|Public 
	// Function /Script/OnlinePresence.OnlinePresenceExternalCommands.DBD_MirrorsGetValue
	// void DBD_MirrorsGetValue(FString StateName);                                                                          // [0x44bd9e0] Final|Exec|Native|Public 
	// Function /Script/OnlinePresence.OnlinePresenceExternalCommands.DBD_IsDlcInstalled
	// bool DBD_IsDlcInstalled(FString inString);                                                                            // [0x44bd930] Final|Exec|Native|Public 
	// Function /Script/OnlinePresence.OnlinePresenceExternalCommands.DBD_GrantPromoItems
	// bool DBD_GrantPromoItems();                                                                                           // [0x44bd900] Final|Exec|Native|Public 
	// Function /Script/OnlinePresence.OnlinePresenceExternalCommands.DBD_GenerateTestItems
	// bool DBD_GenerateTestItems();                                                                                         // [0x44bd900] Final|Exec|Native|Public 
};

/// Class /Script/OnlinePresence.SteamConfig
/// Size: 0x0000 (0x000030 - 0x000030)
class USteamConfig : public UObject
{ 
public:
};

