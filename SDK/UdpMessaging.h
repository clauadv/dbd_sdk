
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/UdpMessaging.EUdpMessageFormat
/// Size: 0x06
enum class EUdpMessageFormat : uint8_t
{
	EUdpMessageFormat__None                                                          = 0,
	EUdpMessageFormat__Json                                                          = 1,
	EUdpMessageFormat__TaggedProperty                                                = 2,
	EUdpMessageFormat__CborPlatformEndianness                                        = 3,
	EUdpMessageFormat__CborStandardEndianness                                        = 4,
	EUdpMessageFormat__EUdpMessageFormat_MAX                                         = 5
};

/// Class /Script/UdpMessaging.UdpMessagingSettings
/// Size: 0x0080 (0x000030 - 0x0000B0)
class UUdpMessagingSettings : public UObject
{ 
public:
	bool                                               EnabledByDefault;                                           // 0x0030   (0x0001)  
	bool                                               EnableTransport;                                            // 0x0031   (0x0001)  
	bool                                               bAutoRepair;                                                // 0x0032   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0033   (0x0001)  MISSED
	float                                              MaxSendRate;                                                // 0x0034   (0x0004)  
	uint32_t                                           AutoRepairAttemptLimit;                                     // 0x0038   (0x0004)  
	bool                                               bStopServiceWhenAppDeactivates;                             // 0x003C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x003D   (0x0003)  MISSED
	SDK_UNDEFINED(16,5596) /* FString */               __um(UnicastEndpoint);                                      // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,5597) /* FString */               __um(MulticastEndpoint);                                    // 0x0050   (0x0010)  
	EUdpMessageFormat                                  MessageFormat;                                              // 0x0060   (0x0001)  
	char                                               MulticastTimeToLive;                                        // 0x0061   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x0062   (0x0006)  MISSED
	SDK_UNDEFINED(16,5598) /* TArray<FString> */       __um(StaticEndpoints);                                      // 0x0068   (0x0010)  
	bool                                               EnableTunnel;                                               // 0x0078   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0079   (0x0007)  MISSED
	SDK_UNDEFINED(16,5599) /* FString */               __um(TunnelUnicastEndpoint);                                // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,5600) /* FString */               __um(TunnelMulticastEndpoint);                              // 0x0090   (0x0010)  
	SDK_UNDEFINED(16,5601) /* TArray<FString> */       __um(RemoteTunnelEndpoints);                                // 0x00A0   (0x0010)  
};

/// Struct /Script/UdpMessaging.UdpMockMessage
/// Size: 0x0010 (0x000000 - 0x000010)
struct FUdpMockMessage
{ 
	TArray<char>                                       Data;                                                       // 0x0000   (0x0010)  
};

