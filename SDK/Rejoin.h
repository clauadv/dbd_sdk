
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject

/// Enum /Script/Rejoin.ERejoinStatus
/// Size: 0x06
enum class ERejoinStatus : uint8_t
{
	ERejoinStatus__NoMatchToRejoin                                                   = 0,
	ERejoinStatus__RejoinAvailable                                                   = 1,
	ERejoinStatus__UpdatingStatus                                                    = 2,
	ERejoinStatus__NeedsRecheck                                                      = 3,
	ERejoinStatus__NoMatchToRejoin_MatchEnded                                        = 4,
	ERejoinStatus__ERejoinStatus_MAX                                                 = 5
};

/// Class /Script/Rejoin.RejoinCheck
/// Size: 0x0148 (0x000030 - 0x000178)
class URejoinCheck : public UObject
{ 
public:
	ERejoinStatus                                      LastKnownStatus;                                            // 0x0030   (0x0001)  
	bool                                               bRejoinAfterCheck;                                          // 0x0031   (0x0001)  
	bool                                               bAttemptingRejoin;                                          // 0x0032   (0x0001)  
	unsigned char                                      UnknownData00_6[0x145];                                     // 0x0033   (0x0145)  MISSED
};

