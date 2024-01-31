
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: TimeUtilities

/// Class /Script/StartupInitializer.StartupInitializer
/// Size: 0x00B0 (0x000030 - 0x0000E0)
class UStartupInitializer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xB0];                                      // 0x0030   (0x00B0)  MISSED
};

/// Class /Script/StartupInitializer.ClientStartupInitializer
/// Size: 0x00E8 (0x0000E0 - 0x0001C8)
class UClientStartupInitializer : public UStartupInitializer
{ 
public:
	unsigned char                                      UnknownData00_1[0xE8];                                      // 0x00E0   (0x00E8)  MISSED


	/// Functions
	// Function /Script/StartupInitializer.ClientStartupInitializer.OnDynamicContentLoaded
	// void OnDynamicContentLoaded(bool success);                                                                            // [0x5a0a640] Final|Native|Private 
};

/// Class /Script/StartupInitializer.DedicatedServerStartupInitializer
/// Size: 0x0038 (0x0000E0 - 0x000118)
class UDedicatedServerStartupInitializer : public UStartupInitializer
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00E0   (0x0008)  MISSED
	class UDBDTimeUtilities*                           _dbdTimeUtilities;                                          // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x00F0   (0x0028)  MISSED
};

