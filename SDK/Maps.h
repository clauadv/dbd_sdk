
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: LevelSequence

/// Class /Game/Maps/StartScreen.StartScreen_C
/// Size: 0x0010 (0x000238 - 0x000248)
class AStartScreen_C : public AStartScreenBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0238   (0x0008)  
	class ALevelSequenceActor*                         SQ_fade_menu_ExecuteUbergraph_StartScreen_RefProperty;      // 0x0240   (0x0008)  


	/// Functions
	// Function /Game/Maps/StartScreen.StartScreen_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Game/Maps/StartScreen.StartScreen_C.BeginDestroyTravelSequence
	// void BeginDestroyTravelSequence();                                                                                    // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Maps/StartScreen.StartScreen_C.FadeOutEvent
	// void FadeOutEvent();                                                                                                  // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/StartScreen.StartScreen_C.ExecuteUbergraph_StartScreen
	// void ExecuteUbergraph_StartScreen(int32_t EntryPoint);                                                                // [0x61d2f50] Final                
};

/// Class /Game/Maps/LevelTransition_LightsEffects.LevelTransition_LightsEffects_C
/// Size: 0x0028 (0x000238 - 0x000260)
class ALevelTransition_LightsEffects_C : public ALevelScriptActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0238   (0x0008)  
	float                                              Fade_Out_Intensity_Multiplier__23A1AA444F5E07D5215601B3AED70035; // 0x0240   (0x0004)  
	SDK_UNDEFINED(1,5270) /* TEnumAsByte<ETimelineDirection> */ __um(Fade_Out__Direction_23A1AA444F5E07D5215601B3AED70035); // 0x0244   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0245   (0x0003)  MISSED
	class UTimelineComponent*                          Fade_Out;                                                   // 0x0248   (0x0008)  
	TArray<float>                                      Fog_Densities;                                              // 0x0250   (0x0010)  


	/// Functions
	// Function /Game/Maps/LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.Fade Out__FinishedFunc
	// void Fade Out__FinishedFunc();                                                                                        // [0x61d2f50] BlueprintEvent       
	// Function /Game/Maps/LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.Fade Out__UpdateFunc
	// void Fade Out__UpdateFunc();                                                                                          // [0x61d2f50] BlueprintEvent       
	// Function /Game/Maps/LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Game/Maps/LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                 // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Maps/LevelTransition_LightsEffects.LevelTransition_LightsEffects_C.ExecuteUbergraph_LevelTransition_LightsEffects
	// void ExecuteUbergraph_LevelTransition_LightsEffects(int32_t EntryPoint);                                              // [0x61d2f50] Final|HasDefaults    
};

/// Class /Game/Maps/Audio.Audio_C
/// Size: 0x0008 (0x000238 - 0x000240)
class AAudio_C : public ALevelScriptActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0238   (0x0008)  


	/// Functions
	// Function /Game/Maps/Audio.Audio_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Game/Maps/Audio.Audio_C.ExecuteUbergraph_Audio
	// void ExecuteUbergraph_Audio(int32_t EntryPoint);                                                                      // [0x61d2f50] Final                
};

