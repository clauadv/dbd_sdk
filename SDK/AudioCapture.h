
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AudioCapture.AudioCapture
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UAudioCapture : public UAudioGenerator
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B0   (0x0008)  MISSED


	/// Functions
	// Function /Script/AudioCapture.AudioCapture.StopCapturingAudio
	// void StopCapturingAudio();                                                                                            // [0x4cf1430] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioCapture.AudioCapture.StartCapturingAudio
	// void StartCapturingAudio();                                                                                           // [0x4cf1410] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioCapture.AudioCapture.IsCapturingAudio
	// bool IsCapturingAudio();                                                                                              // [0x4cf13e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
	// bool GetAudioCaptureDeviceInfo(FAudioCaptureDeviceInfo& OutInfo);                                                     // [0x4cf1330] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AudioCapture.AudioCaptureFunctionLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
	// class UAudioCapture* CreateAudioCapture();                                                                            // [0x4cf1300] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AudioCapture.AudioCaptureComponent
/// Size: 0x00C0 (0x0006E0 - 0x0007A0)
class UAudioCaptureComponent : public USynthComponent
{ 
public:
	int32_t                                            JitterLatencyFrames;                                        // 0x06E0   (0x0004)  
	unsigned char                                      UnknownData00_6[0xBC];                                      // 0x06E4   (0x00BC)  MISSED
};

/// Struct /Script/AudioCapture.AudioCaptureDeviceInfo
/// Size: 0x0014 (0x000000 - 0x000014)
struct FAudioCaptureDeviceInfo
{ 
	FName                                              DeviceName;                                                 // 0x0000   (0x000C)  
	int32_t                                            NumInputChannels;                                           // 0x000C   (0x0004)  
	int32_t                                            SampleRate;                                                 // 0x0010   (0x0004)  
};

