
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: AkAudio
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Wwise/AnimNotify_AkEvent.AnimNotify_AkEvent_C
/// Size: 0x0030 (0x000040 - 0x000070)
class UAnimNotify_AkEvent_C : public UAnimNotify
{ 
public:
	SDK_UNDEFINED(16,3479) /* FString */               __um(Attach_Name);                                          // 0x0040   (0x0010)  
	class UAkAudioEvent*                               Event;                                                      // 0x0050   (0x0008)  
	bool                                               Follow;                                                     // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0059   (0x0007)  MISSED
	SDK_UNDEFINED(16,3480) /* FString */               __um(EventName);                                            // 0x0060   (0x0010)  


	/// Functions
	// Function /Wwise/AnimNotify_AkEvent.AnimNotify_AkEvent_C.Received_Notify
	// bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);                     // [0x61c32d0] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
};

