
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/DBDGraphics.FogOverrideComponent
/// Size: 0x0048 (0x0000B8 - 0x000100)
class UFogOverrideComponent : public UActorComponent
{ 
public:
	float                                              _interpolationDistance;                                     // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x3C];                                      // 0x00BC   (0x003C)  MISSED
	bool                                               _canBeDisabledByGameType;                                   // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00F9   (0x0007)  MISSED
};

/// Class /Script/DBDGraphics.FogOverrideManager
/// Size: 0x0028 (0x0000B8 - 0x0000E0)
class UFogOverrideManager : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x00B8   (0x0028)  MISSED
};

