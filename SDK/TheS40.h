
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: Competence
/// dependency: CoreUObject
/// dependency: DeadByDaylight
/// dependency: Engine

/// Class /Script/TheS40.S40CheatComponent
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class US40CheatComponent : public UActorComponent
{ 
public:
};

/// Class /Script/TheS40.S40P01
/// Size: 0x0040 (0x0003C8 - 0x000408)
class US40P01 : public UPerk
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x03C8   (0x0010)  MISSED
	class UClass*                                      _S40P01HasteEffectClass;                                    // 0x03D8   (0x0008)  
	class UClass*                                      _hinderedEffectClass;                                       // 0x03E0   (0x0008)  
	class UStatusEffect*                               _S40P01HasteEffect;                                         // 0x03E8   (0x0008)  
	float                                              _hasteEffectPercent;                                        // 0x03F0   (0x0004)  
	float                                              _hinderedEffectTime;                                        // 0x03F4   (0x0004)  
	float                                              _hinderedEffectPercent;                                     // 0x03F8   (0x0004)  
	float                                              _cooldownTriggerTime;                                       // 0x03FC   (0x000C)  
};

/// Class /Script/TheS40.S40P02
/// Size: 0x0000 (0x0003C8 - 0x0003C8)
class US40P02 : public UPerk
{ 
public:
};

