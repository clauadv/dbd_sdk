
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Struct /Script/S3Command.AccessKey
/// Size: 0x0020 (0x000000 - 0x000020)
struct FAccessKey
{ 
	SDK_UNDEFINED(16,4958) /* FString */               __um(KeyId);                                                // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,4959) /* FString */               __um(Key);                                                  // 0x0010   (0x0010)  
};

/// Class /Script/S3Command.AccessKeys
/// Size: 0x0010 (0x000030 - 0x000040)
class UAccessKeys : public UObject
{ 
public:
	TArray<FAccessKey>                                 AccessKeys;                                                 // 0x0030   (0x0010)  
};

/// Struct /Script/S3Command.EmblemTunableItem
/// Size: 0x0018 (0x000000 - 0x000018)
struct FEmblemTunableItem
{ 
	SDK_UNDEFINED(16,4960) /* FString */               __um(ID);                                                   // 0x0000   (0x0010)  
	double                                             value;                                                      // 0x0010   (0x0008)  
};

/// Struct /Script/S3Command.EmblemTunableData
/// Size: 0x0060 (0x000000 - 0x000060)
struct FEmblemTunableData
{ 
	TArray<FEmblemTunableItem>                         EmblemValues;                                               // 0x0000   (0x0010)  
	SDK_UNDEFINED(80,4961) /* TMap<FString, FEmblemThreshold> */ __um(EmblemThresholds);                           // 0x0010   (0x0050)  
};

/// Struct /Script/S3Command.EmblemThreshold
/// Size: 0x0010 (0x000000 - 0x000010)
struct FEmblemThreshold
{ 
	TArray<int32_t>                                    Thresholds;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/S3Command.RankThresholdsData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FRankThresholdsData
{ 
	TArray<int32_t>                                    PipsRequired;                                               // 0x0000   (0x0010)  
	TArray<int32_t>                                    ResetStartingPips;                                          // 0x0010   (0x0010)  
	bool                                               ResetStartingPips_IsSet;                                    // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/S3Command.RankGroupData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRankGroupData
{ 
	TArray<double>                                     EmblemThreshold;                                            // 0x0000   (0x0010)  
	int32_t                                            RankThreshold;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/S3Command.RankGroups
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRankGroups
{ 
	TArray<FRankGroupData>                             KillerRankGroup;                                            // 0x0000   (0x0010)  
	TArray<FRankGroupData>                             SurvivorRankGroup;                                          // 0x0010   (0x0010)  
};

/// Struct /Script/S3Command.RankResetDateData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRankResetDateData
{ 
	int32_t                                            StartYear;                                                  // 0x0000   (0x0004)  
	int32_t                                            StartMonth;                                                 // 0x0004   (0x0004)  
	int32_t                                            ResetDay;                                                   // 0x0008   (0x0004)  
	int32_t                                            ResetHour;                                                  // 0x000C   (0x0004)  
};

/// Struct /Script/S3Command.RankGlobalData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRankGlobalData
{ 
	int32_t                                            NoPipLossRankThreshold;                                     // 0x0000   (0x0004)  
	int32_t                                            NoRankLossThreshold;                                        // 0x0004   (0x0004)  
	int32_t                                            BaseTrialPips;                                              // 0x0008   (0x0004)  
	int32_t                                            MaxPips;                                                    // 0x000C   (0x0004)  
	TArray<FRankResetDateData>                         RankResetDates;                                             // 0x0010   (0x0010)  
};

/// Struct /Script/S3Command.RankDefinitionData
/// Size: 0x0068 (0x000000 - 0x000068)
struct FRankDefinitionData
{ 
	FRankThresholdsData                                RankThreshold;                                              // 0x0000   (0x0028)  
	FRankGroups                                        RankGroupDefinition;                                        // 0x0028   (0x0020)  
	FRankGlobalData                                    GlobalData;                                                 // 0x0048   (0x0020)  
};

