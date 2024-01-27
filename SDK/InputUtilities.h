
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/InputUtilities.AxisFlick
/// Size: 0x0030 (0x000030 - 0x000060)
class UAxisFlick : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED
};

/// Class /Script/InputUtilities.AxisFlickMasher
/// Size: 0x0040 (0x0000B8 - 0x0000F8)
class UAxisFlickMasher : public UActorComponent
{ 
public:
	class UInputComponent*                             _inputComponent;                                            // 0x00B8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x00C0   (0x0008)  MISSED
	class UAxisFlick*                                  _axisFlick1;                                                // 0x00C8   (0x0008)  
	class UAxisFlick*                                  _axisFlick2;                                                // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x00D8   (0x0020)  MISSED


	/// Functions
	// Function /Script/InputUtilities.AxisFlickMasher.OnAxisFlicked2
	// void OnAxisFlicked2();                                                                                                // [0x59c1470] Final|Native|Private 
	// Function /Script/InputUtilities.AxisFlickMasher.OnAxisFlicked1
	// void OnAxisFlicked1();                                                                                                // [0x59c1450] Final|Native|Private 
};

/// Class /Script/InputUtilities.ButtonPressTracker
/// Size: 0x0050 (0x000038 - 0x000088)
class UButtonPressTracker : public ULocalPlayerSubsystem
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0038   (0x0018)  MISSED
	SDK_UNDEFINED(8,1258) /* TWeakObjectPtr<UInputComponent*> */ __um(_trackedInputComponent);                     // 0x0050   (0x0008)  
	SDK_UNDEFINED(8,1259) /* TWeakObjectPtr<UPlayerInput*> */ __um(_playerInput);                                  // 0x0058   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0060   (0x0028)  MISSED
};

/// Class /Script/InputUtilities.InputMasher
/// Size: 0x0038 (0x0000B8 - 0x0000F0)
class UInputMasher : public UActorComponent
{ 
public:
	class UInputComponent*                             _inputComponent;                                            // 0x00B8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x00C0   (0x0030)  MISSED
};

/// Class /Script/InputUtilities.VirtualKeyboard
/// Size: 0x0010 (0x000030 - 0x000040)
class UVirtualKeyboard : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Struct /Script/InputUtilities.ButtonSequenceData
/// Size: 0x0040 (0x000008 - 0x000048)
struct FButtonSequenceData : FTableRowBase
{ 
	FName                                              SequenceId;                                                 // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FName>                                      Sequence;                                                   // 0x0018   (0x0010)  
	int32_t                                            TIMEOUT;                                                    // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	SDK_UNDEFINED(16,1260) /* TArray<FString> */       __um(Platforms);                                            // 0x0030   (0x0010)  
	int32_t                                            MinKeysForFailedAttempt;                                    // 0x0040   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

