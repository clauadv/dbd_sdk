
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/OodleNetworkHandlerComponent.EOodleEnableMode
/// Size: 0x03
enum class EOodleEnableMode : uint8_t
{
	EOodleEnableMode__AlwaysEnabled                                                  = 0,
	EOodleEnableMode__WhenCompressedPacketReceived                                   = 1,
	EOodleEnableMode__EOodleEnableMode_MAX                                           = 2
};

/// Class /Script/OodleNetworkHandlerComponent.OodleNetworkTrainerCommandlet
/// Size: 0x0020 (0x000088 - 0x0000A8)
class UOodleNetworkTrainerCommandlet : public UCommandlet
{ 
public:
	bool                                               bCompressionTest;                                           // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0089   (0x0003)  MISSED
	int32_t                                            HashTableSize;                                              // 0x008C   (0x0004)  
	int32_t                                            DictionarySize;                                             // 0x0090   (0x0004)  
	int32_t                                            DictionaryTrials;                                           // 0x0094   (0x0004)  
	int32_t                                            TrialRandomness;                                            // 0x0098   (0x0004)  
	int32_t                                            TrialGenerations;                                           // 0x009C   (0x0004)  
	bool                                               bNoTrials;                                                  // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00A1   (0x0007)  MISSED
};

