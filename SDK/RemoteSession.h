
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: MediaIOCore

/// Enum /Script/RemoteSession.ERemoteSessionConnectionChange
/// Size: 0x03
enum class ERemoteSessionConnectionChange : uint8_t
{
	ERemoteSessionConnectionChange__Connected                                        = 0,
	ERemoteSessionConnectionChange__Disconnected                                     = 1,
	ERemoteSessionConnectionChange__ERemoteSessionConnectionChange_MAX               = 2
};

/// Enum /Script/RemoteSession.ERemoteSessionChannelChange
/// Size: 0x03
enum class ERemoteSessionChannelChange : uint8_t
{
	ERemoteSessionChannelChange__Created                                             = 0,
	ERemoteSessionChannelChange__Destroyed                                           = 1,
	ERemoteSessionChannelChange__ERemoteSessionChannelChange_MAX                     = 2
};

/// Enum /Script/RemoteSession.ERemoteSessionChannelMode
/// Size: 0x05
enum class ERemoteSessionChannelMode : uint32_t
{
	ERemoteSessionChannelMode__Unknown                                               = 0,
	ERemoteSessionChannelMode__Read                                                  = 1,
	ERemoteSessionChannelMode__Write                                                 = 2,
	ERemoteSessionChannelMode__MaxValue                                              = 3,
	ERemoteSessionChannelMode__ERemoteSessionChannelMode_MAX                         = 4
};

/// Class /Script/RemoteSession.RemoteSessionMediaOutput
/// Size: 0x0010 (0x000038 - 0x000048)
class URemoteSessionMediaOutput : public UMediaOutput
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Class /Script/RemoteSession.RemoteSessionMediaCapture
/// Size: 0x0010 (0x000110 - 0x000120)
class URemoteSessionMediaCapture : public UMediaCapture
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0110   (0x0010)  MISSED
};

/// Class /Script/RemoteSession.RemoteSessionSettings
/// Size: 0x0040 (0x000030 - 0x000070)
class URemoteSessionSettings : public UObject
{ 
public:
	int32_t                                            HostPort;                                                   // 0x0030   (0x0004)  
	int32_t                                            ConnectionTimeout;                                          // 0x0034   (0x0004)  
	int32_t                                            ConnectionTimeoutWhenDebugging;                             // 0x0038   (0x0004)  
	int32_t                                            PingTime;                                                   // 0x003C   (0x0004)  
	bool                                               bAllowInShipping;                                           // 0x0040   (0x0001)  
	bool                                               bAutoHostWithPIE;                                           // 0x0041   (0x0001)  
	bool                                               bAutoHostWithGame;                                          // 0x0042   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0043   (0x0001)  MISSED
	int32_t                                            ImageQuality;                                               // 0x0044   (0x0004)  
	int32_t                                            FrameRate;                                                  // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	SDK_UNDEFINED(16,4952) /* TArray<FString> */       __um(WhitelistedChannels);                                  // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,4953) /* TArray<FString> */       __um(BlacklistedChannels);                                  // 0x0060   (0x0010)  
};

/// Struct /Script/RemoteSession.RemoteSessionChannelInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRemoteSessionChannelInfo
{ 
	SDK_UNDEFINED(16,4954) /* FString */               __um(Type);                                                 // 0x0000   (0x0010)  
	ERemoteSessionChannelMode                          Mode;                                                       // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

