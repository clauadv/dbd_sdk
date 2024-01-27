
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: DataTableUtilities
/// dependency: GameplayTags

/// Enum /Script/StatSystem.EModifierCompoundStrategy
/// Size: 0x09
enum class EModifierCompoundStrategy : uint8_t
{
	EModifierCompoundStrategy__Add                                                   = 0,
	EModifierCompoundStrategy__AddPlusOne                                            = 1,
	EModifierCompoundStrategy__Min                                                   = 2,
	EModifierCompoundStrategy__Max                                                   = 3,
	EModifierCompoundStrategy__Mult                                                  = 4,
	EModifierCompoundStrategy__MultWithCompoundNegative                              = 5,
	EModifierCompoundStrategy__MultWithCompoundNegativeMinusOne                      = 6,
	EModifierCompoundStrategy__Average                                               = 7,
	EModifierCompoundStrategy__EModifierCompoundStrategy_MAX                         = 8
};

/// Enum /Script/StatSystem.EModifierOperationStrategy
/// Size: 0x06
enum class EModifierOperationStrategy : uint8_t
{
	EModifierOperationStrategy__Add                                                  = 0,
	EModifierOperationStrategy__Subs                                                 = 1,
	EModifierOperationStrategy__Mult                                                 = 2,
	EModifierOperationStrategy__Div                                                  = 3,
	EModifierOperationStrategy__MultIncludingZero                                    = 4,
	EModifierOperationStrategy__EModifierOperationStrategy_MAX                       = 5
};

/// Struct /Script/StatSystem.StatModifier
/// Size: 0x0030 (0x000000 - 0x000030)
struct FStatModifier
{ 
	EModifierOperationStrategy                         OperationStrategy;                                          // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FGameplayTag                                       ModifierTag;                                                // 0x0004   (0x000C)  
	EModifierCompoundStrategy                          CompoundStrategy;                                           // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1F];                                      // 0x0011   (0x001F)  MISSED
};

/// Struct /Script/StatSystem.BaseStat
/// Size: 0x0058 (0x000000 - 0x000058)
struct FBaseStat
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
	TArray<FStatModifier>                              _statModifiers;                                             // 0x0020   (0x0010)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0030   (0x0028)  MISSED
};

/// Struct /Script/StatSystem.TunableStat
/// Size: 0x0028 (0x000058 - 0x000080)
struct FTunableStat : FBaseStat
{ 
	FDBDTunableRowHandle                               _baseValue;                                                 // 0x0058   (0x0028)  
};

/// Struct /Script/StatSystem.NonTunableStat
/// Size: 0x0008 (0x000058 - 0x000060)
struct FNonTunableStat : FBaseStat
{ 
	float                                              _baseValue;                                                 // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Struct /Script/StatSystem.StatProperty
/// Size: 0x0030 (0x000058 - 0x000088)
struct FStatProperty : FBaseStat
{ 
	bool                                               _useTunable;                                                // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0059   (0x0003)  MISSED
	float                                              _nonTunableValue;                                           // 0x005C   (0x0004)  
	FDBDTunableRowHandle                               _tunableValue;                                              // 0x0060   (0x0028)  
};

