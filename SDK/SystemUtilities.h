
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/SystemUtilities.DateTimeProvider
/// Size: 0x0000 (0x000030 - 0x000030)
class UDateTimeProvider : public UObject
{ 
public:
};

/// Class /Script/SystemUtilities.ArrayExt
/// Size: 0x0000 (0x000030 - 0x000030)
class UArrayExt : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/SystemUtilities.BoolExt
/// Size: 0x0000 (0x000030 - 0x000030)
class UBoolExt : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SystemUtilities.BoolExt.ToString
	// FString ToString(bool boolToConvert);                                                                                 // [0x848bec0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SystemUtilities.TimeProviderMock
/// Size: 0x0008 (0x000030 - 0x000038)
class UTimeProviderMock : public UDateTimeProvider
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/SystemUtilities.DateTimerUpdater
/// Size: 0x00A8 (0x000030 - 0x0000D8)
class UDateTimerUpdater : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	SDK_UNDEFINED(80,1731) /* TMap<UClass*, FDateTimerArray> */ __um(_timers);                                     // 0x0038   (0x0050)  
	SDK_UNDEFINED(80,1732) /* TMap<UClass*, UDateTimeProvider*> */ __um(_dateTimeProvider);                        // 0x0088   (0x0050)  
};

/// Class /Script/SystemUtilities.DebugUtilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UDebugUtilities : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/SystemUtilities.GameStreamingSubsytem
/// Size: 0x0000 (0x000038 - 0x000038)
class UGameStreamingSubsytem : public UGameInstanceSubsystem
{ 
public:
};

/// Class /Script/SystemUtilities.GameStreamingGDK
/// Size: 0x0000 (0x000038 - 0x000038)
class UGameStreamingGDK : public UGameStreamingSubsytem
{ 
public:
};

/// Class /Script/SystemUtilities.GameStreamingGeForceNow
/// Size: 0x0000 (0x000038 - 0x000038)
class UGameStreamingGeForceNow : public UGameStreamingSubsytem
{ 
public:
};

/// Class /Script/SystemUtilities.PlatformUtilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UPlatformUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SystemUtilities.PlatformUtilities.GetPlatform
	// FString GetPlatform();                                                                                                // [0x848d350] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/SystemUtilities.DateTimer
/// Size: 0x0028 (0x000000 - 0x000028)
struct FDateTimer
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/SystemUtilities.DateTimerHandle
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDateTimerHandle
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SystemUtilities.DateTimerArray
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDateTimerArray
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/SystemUtilities.FastTimer
/// Size: 0x0030 (0x000000 - 0x000030)
struct FFastTimer
{ 
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED
};

