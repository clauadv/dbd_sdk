
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AkAudio
/// dependency: AnimationUtilities
/// dependency: CoreUObject
/// dependency: DeadByDaylight
/// dependency: Engine

/// Class /Game/Audio/AnimNotify/AnimNotify_AkEventWithSubtitles.AnimNotify_AkEventWithSubtitles_C
/// Size: 0x005A (0x000040 - 0x00009A)
class UAnimNotify_AkEventWithSubtitles_C : public UAnimNotify
{ 
public:
	SDK_UNDEFINED(16,3636) /* FString */               __um(Attach_Name);                                          // 0x0040   (0x0010)  
	TArray<FAkEventWithSubtitle>                       EventRandomizer;                                            // 0x0050   (0x0010)  
	float                                              maxSubtitleDistance;                                        // 0x0060   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0064   (0x0004)  MISSED
	TArray<FCustomSoundFXData>                         RequiredAudioSwitch;                                        // 0x0068   (0x0010)  
	TArray<FCustomSoundFXData>                         ForbiddenAudioSwitch;                                       // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,3637) /* FString */               __um(AnimNotifyName);                                       // 0x0088   (0x0010)  
	bool                                               IsOnlyPlayingOnce;                                          // 0x0098   (0x0001)  
	bool                                               OnlyPlayIfLocallyObserved;                                  // 0x0099   (0x0001)  


	/// Functions
	// Function /Game/Audio/AnimNotify/AnimNotify_AkEventWithSubtitles.AnimNotify_AkEventWithSubtitles_C.Should Execute Notify
	// void Should Execute Notify(class ADBDBasePlayer*& OwningPlayer, bool& ShouldExecute);                                 // [0x61d2f50] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Audio/AnimNotify/AnimNotify_AkEventWithSubtitles.AnimNotify_AkEventWithSubtitles_C.Received_Notify
	// bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);                     // [0x61d2f50] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UBP_Audio_FunctionLibrary_C : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_K34_Distraction_Footstep_Only
	// void Audio_K34_Distraction_Footstep_Only(class UAkAudioEvent* AkAudioEvent, class ABP_K34TipToeDistraction_C* K34Distraction, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Footstep_Only_Right_Back
	// void Audio_Killer_Footstep_Only_Right_Back(class UAkAudioEvent* Ak Audio Event, class ADBDBasePlayer* Player, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Footstep_Only_Left_Back
	// void Audio_Killer_Footstep_Only_Left_Back(class UAkAudioEvent* Ak Audio Event, class ADBDBasePlayer* Player, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Generator_Occlusion_Deactivate
	// void Audio_Generator_Occlusion_Deactivate(class UAkComponent* AkComponent, class AActor* Player, class UObject* __WorldContext); // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Generator_Occlusion_Activate
	// void Audio_Generator_Occlusion_Activate(class UAkComponent* AkComponent, class AActor* Player, class UObject* __WorldContext); // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Player_LocallyObserved
	// void Audio_Player_LocallyObserved(class AActor* Player, class UObject* __WorldContext, bool& IsLocallyObserved);      // [0x61d2f50] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Hurt_Light_Hooked
	// void Audio_Survivor_Grunt_Hurt_Light_Hooked(class ADBDBasePlayer* Player, class UObject* __WorldContext);             // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Hurt_Light_Wiggle
	// void Audio_Survivor_Grunt_Hurt_Light_Wiggle(class ADBDBasePlayer* Player, class UObject* __WorldContext, bool& Return Value); // [0x61d2f50] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Cloth_ShuffleAttack
	// void Audio_Killer_Cloth_ShuffleAttack(class ADBDBasePlayer* Player, class UObject* __WorldContext);                   // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Attack_Carry
	// void Audio_Killer_Weapon_Attack_Carry(class ADBDBasePlayer* Player, class UObject* __WorldContext);                   // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Haptic_LocallyObserved
	// void Audio_Haptic_LocallyObserved(class AActor* Actor, class UObject* __WorldContext);                                // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Cloth_Spawning
	// void Audio_Killer_Cloth_Spawning(class ADBDBasePlayer* Player, class UObject* __WorldContext);                        // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Cooldown
	// void Audio_Killer_Weapon_Cooldown(class ADBDBasePlayer* Player, class UObject* __WorldContext);                       // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Scream_Short_K28
	// void Audio_Survivor_Grunt_Scream_Short_K28(class ADBDBasePlayer* Player, class UObject* __WorldContext);              // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Scream_Long_Mori_K28
	// void Audio_Survivor_Grunt_Scream_Long_Mori_K28(class ADBDBasePlayer* Player, class UObject* __WorldContext);          // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Dead
	// void Audio_Survivor_Dead(class ADBDBasePlayer* Player, class UObject* __WorldContext);                                // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Status_Start
	// void Audio_Survivor_Status_Start(class ADBDBasePlayer* Player, class UObject* __WorldContext);                        // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Stop
	// void Audio_Survivor_Grunt_Stop(class ADBDBasePlayer* Player, class UObject* __WorldContext);                          // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Scream_Long_Mori
	// void Audio_Survivor_Grunt_Scream_Long_Mori(class ADBDBasePlayer* Player, class UObject* __WorldContext);              // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Insanity_SnapOfIt
	// void Audio_Survivor_Grunt_Insanity_SnapOfIt(class ADBDBasePlayer* Player, class UObject* __WorldContext);             // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Insanity
	// void Audio_Survivor_Grunt_Insanity(class ADBDBasePlayer* Player, class UObject* __WorldContext);                      // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Scream_Hit_Mori
	// void Audio_Survivor_Grunt_Scream_Hit_Mori(class ADBDBasePlayer* Player, class UObject* __WorldContext);               // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Scream_Hit
	// void Audio_Survivor_Grunt_Scream_Hit(class ADBDBasePlayer* Player, class UObject* __WorldContext);                    // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Scream_Long
	// void Audio_Survivor_Grunt_Scream_Long(class ADBDBasePlayer* Player, class UObject* __WorldContext);                   // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Scream_Scare2d
	// void Audio_Survivor_Grunt_Scream_Scare2d(class ADBDBasePlayer* Player, class UObject* __WorldContext);                // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Scream_Scare
	// void Audio_Survivor_Grunt_Scream_Scare(class ADBDBasePlayer* Player, class UObject* __WorldContext);                  // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Hurt_Hard
	// void Audio_Survivor_Grunt_Hurt_Hard(class ADBDBasePlayer* Player, class UObject* __WorldContext);                     // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Cough
	// void Audio_Survivor_Grunt_Cough(class ADBDBasePlayer* Player, class UObject* __WorldContext);                         // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Hurt_Light
	// void Audio_Survivor_Grunt_Hurt_Light(class ADBDBasePlayer* Player, class UObject* __WorldContext, bool& Return Value); // [0x61d2f50] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Effort_Hard
	// void Audio_Survivor_Grunt_Effort_Hard(class ADBDBasePlayer* Player, class UObject* __WorldContext);                   // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt_Effort_Light
	// void Audio_Survivor_Grunt_Effort_Light(class ADBDBasePlayer* Player, class UObject* __WorldContext);                  // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Status
	// void Audio_Survivor_Status(FString AK Audio State, class ADBDBasePlayer* Player, class UObject* __WorldContext, FString& Audio State); // [0x61d2f50] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Post_AkEvent
	// void Audio_Survivor_Post_AkEvent(class UAkAudioEvent* Ak Audio Event, class ADBDBasePlayer* Player, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Footstep_Right
	// void Audio_Survivor_Footstep_Right(class UAkAudioEvent* Ak Audio Event, class ADBDBasePlayer* Player, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Footstep_Left
	// void Audio_Survivor_Footstep_Left(class UAkAudioEvent* Ak Audio Event, class ADBDBasePlayer* Player, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Grunt
	// void Audio_Survivor_Grunt(class UAkAudioEvent* Ak Audio Event, class ADBDBasePlayer* Player, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Survivor_Body
	// void Audio_Survivor_Body(class UAkAudioEvent* Ak Audio Event, class ADBDBasePlayer* Player, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_K20_Weapon_Scrap
	// void Audio_K20_Weapon_Scrap(class UAkAudioEvent* Ak Audio Event, class ADBDBasePlayer* Player, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Surface_Impact
	// void Audio_Killer_Surface_Impact(class UAkAudioEvent* Ak Audio Event, class ADBDBasePlayer* Player, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Impact_Survivor
	// void Audio_Killer_Weapon_Impact_Survivor(class ADBDBasePlayer* camper, class ADBDBasePlayer* Slasher, class UObject* __WorldContext); // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Impact
	// void Audio_Killer_Weapon_Impact(class ADBDBasePlayer* Player, class UObject* __WorldContext);                         // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_PullOut
	// void Audio_Killer_Weapon_PullOut(class ADBDBasePlayer* Player, class UObject* __WorldContext);                        // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Clean
	// void Audio_Killer_Weapon_Clean(class ADBDBasePlayer* Player, class UObject* __WorldContext);                          // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Attack
	// void Audio_Killer_Weapon_Attack(class ADBDBasePlayer* Player, class UObject* __WorldContext);                         // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon_Arm
	// void Audio_Killer_Weapon_Arm(class ADBDBasePlayer* Player, class UObject* __WorldContext);                            // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Setup
	// void Audio_Killer_Setup(class UAkComponent* AudioComponent, FName AudioStateKiller, class UAkAudioEvent* StartEvent, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Post_AkEvent
	// void Audio_Killer_Post_AkEvent(class UAkAudioEvent* Ak Audio Event, class ADBDBasePlayer* Player, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Weapon
	// void Audio_Killer_Weapon(class UAkAudioEvent* Ak Audio Event, class ADBDBasePlayer* Player, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Grunt
	// void Audio_Killer_Grunt(class UAkAudioEvent* Ak Audio Event, class ADBDBasePlayer* Player, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Footstep_Only_Right_Front
	// void Audio_Killer_Footstep_Only_Right_Front(class UAkAudioEvent* Ak Audio Event, class ADBDBasePlayer* Player, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Footstep_Only_Right
	// void Audio_Killer_Footstep_Only_Right(class UAkAudioEvent* Ak Audio Event, class ADBDBasePlayer* Player, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Footstep_Only_Left_Front
	// void Audio_Killer_Footstep_Only_Left_Front(class UAkAudioEvent* Ak Audio Event, class ADBDBasePlayer* Player, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Footstep_Only_Left
	// void Audio_Killer_Footstep_Only_Left(class UAkAudioEvent* Ak Audio Event, class ADBDBasePlayer* Player, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Footstep_Right_Front
	// void Audio_Killer_Footstep_Right_Front(class UAkAudioEvent* Ak Audio Event, class ADBDBasePlayer* Player, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Footstep_Right
	// void Audio_Killer_Footstep_Right(class UAkAudioEvent* Ak Audio Event, class ADBDBasePlayer* Player, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Footstep_Left_Front
	// void Audio_Killer_Footstep_Left_Front(class UAkAudioEvent* Ak Audio Event, class ADBDBasePlayer* Player, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Footstep_Left
	// void Audio_Killer_Footstep_Left(class UAkAudioEvent* Ak Audio Event, class ADBDBasePlayer* Player, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Cloth_Land
	// void Audio_Killer_Cloth_Land(class UAkAudioEvent* Ak Audio Event, class ADBDBasePlayer* Player, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Cloth_ShuffleLow
	// void Audio_Killer_Cloth_ShuffleLow(class UAkAudioEvent* Ak Audio Event, class ADBDBasePlayer* Player, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Cloth_ShuffleHigh
	// void Audio_Killer_Cloth_ShuffleHigh(class UAkAudioEvent* Ak Audio Event, class ADBDBasePlayer* Player, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/BP_Audio_FunctionLibrary.BP_Audio_FunctionLibrary_C.Audio_Killer_Cloth_Move
	// void Audio_Killer_Cloth_Move(class UAkAudioEvent* Ak Audio Event, class ADBDBasePlayer* Player, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_Base.BP_Audio_KLR_Base_C
/// Size: 0x0040 (0x0001C8 - 0x000208)
class UBP_Audio_KLR_Base_C : public UKillerAudioHandlerComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x01C8   (0x0008)  
	class UAkAudioBank*                                _killerAudioBank;                                           // 0x01D0   (0x0008)  
	class UAkAudioEvent*                               _defaultAudioStatusStartEvent;                              // 0x01D8   (0x0008)  
	class UAkComponent*                                _audioComponent;                                            // 0x01E0   (0x0008)  
	bool                                               _isInMenu;                                                  // 0x01E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01E9   (0x0003)  MISSED
	FName                                              _audioCharacterName;                                        // 0x01EC   (0x000C)  
	class UAkAudioEvent*                               _audioStartEvent;                                           // 0x01F8   (0x0008)  
	class ADBDBasePlayer*                              _ownerKiller;                                               // 0x0200   (0x0008)  


	/// Functions
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.OnKillerSoundbankLoaded
	// void OnKillerSoundbankLoaded(EAkResult Result);                                                                       // [0x61d2f50] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.OnKillerAudioDisabled
	// void OnKillerAudioDisabled();                                                                                         // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.OnKillerAudioEnabled
	// void OnKillerAudioEnabled();                                                                                          // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.SelectAudioStatusStartEvent
	// void SelectAudioStatusStartEvent(bool IsInMenu, class UAkAudioEvent*& AudioEvent);                                    // [0x61d2f50] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.GetAudioCharacterName
	// void GetAudioCharacterName(class ADBDBasePlayer* Player, FName& AudioCharacterName);                                  // [0x61d2f50] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.InititializeComponent
	// void InititializeComponent();                                                                                         // [0x61d2f50] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                       // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.TriggerSurvivorDamageHitAudioSFX
	// void TriggerSurvivorDamageHitAudioSFX(class ACamperPlayer* camper, EAttackType attackType, bool CausedKO, bool IsWeaponHit, bool isLightHit); // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.HitImpactOnSurvivorSFX
	// void HitImpactOnSurvivorSFX(class ACamperPlayer* camper, EAttackType attackType, bool IsWeaponHit);                   // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_Base.BP_Audio_KLR_Base_C.ExecuteUbergraph_BP_Audio_KLR_Base
	// void ExecuteUbergraph_BP_Audio_KLR_Base(int32_t EntryPoint);                                                          // [0x61d2f50] Final|HasDefaults    
};

/// Class /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_01.BP_Audio_KLR_01_C
/// Size: 0x0008 (0x000208 - 0x000210)
class UBP_Audio_KLR_01_C : public UBP_Audio_KLR_Base_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  


	/// Functions
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_01.BP_Audio_KLR_01_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_01.BP_Audio_KLR_01_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                       // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_01.BP_Audio_KLR_01_C.ExecuteUbergraph_BP_Audio_KLR_01
	// void ExecuteUbergraph_BP_Audio_KLR_01(int32_t EntryPoint);                                                            // [0x61d2f50] Final                
};

/// Class /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_02.BP_Audio_KLR_02_C
/// Size: 0x0000 (0x000208 - 0x000208)
class UBP_Audio_KLR_02_C : public UBP_Audio_KLR_Base_C
{ 
public:
};

/// Class /Game/Audio/BP_Audio_Killer_AnimNotifies_Handler.BP_Audio_Killer_AnimNotifies_Handler_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UBP_Audio_Killer_AnimNotifies_Handler_C : public UAnimEffectHandler
{ 
public:


	/// Functions
	// Function /Game/Audio/BP_Audio_Killer_AnimNotifies_Handler.BP_Audio_Killer_AnimNotifies_Handler_C.HandleAnimNotify
	// bool HandleAnimNotify(class AActor* Player, FName& NotifyName);                                                       // [0x61d2f50] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_03.BP_Audio_KLR_03_C
/// Size: 0x0008 (0x000208 - 0x000210)
class UBP_Audio_KLR_03_C : public UBP_Audio_KLR_Base_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  


	/// Functions
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_03.BP_Audio_KLR_03_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_03.BP_Audio_KLR_03_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                       // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_03.BP_Audio_KLR_03_C.ExecuteUbergraph_BP_Audio_KLR_03
	// void ExecuteUbergraph_BP_Audio_KLR_03(int32_t EntryPoint);                                                            // [0x61d2f50] Final                
};

/// Class /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_05.BP_Audio_KLR_05_C
/// Size: 0x0008 (0x000208 - 0x000210)
class UBP_Audio_KLR_05_C : public UBP_Audio_KLR_Base_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  


	/// Functions
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_05.BP_Audio_KLR_05_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_05.BP_Audio_KLR_05_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                       // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_05.BP_Audio_KLR_05_C.ExecuteUbergraph_BP_Audio_KLR_05
	// void ExecuteUbergraph_BP_Audio_KLR_05(int32_t EntryPoint);                                                            // [0x61d2f50] Final                
};

/// Class /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_22_C
/// Size: 0x0010 (0x000208 - 0x000218)
class UBP_Audio_KLR_22_C : public UBP_Audio_KLR_Base_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  
	class UAkAudioEvent*                               AudioStatusStartMenuEvent;                                  // 0x0210   (0x0008)  


	/// Functions
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_22_C.SelectAudioStatusStartEvent
	// void SelectAudioStatusStartEvent(bool IsInMenu, class UAkAudioEvent*& AudioEvent);                                    // [0x61d2f50] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_22_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_22_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                       // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_22_C.ExecuteUbergraph_BP_Audio_KLR
	// void ExecuteUbergraph_BP_Audio_KLR(int32_t EntryPoint);                                                               // [0x61d2f50] Final                
};

/// Class /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_09.BP_Audio_KLR_09_C
/// Size: 0x0008 (0x000208 - 0x000210)
class UBP_Audio_KLR_09_C : public UBP_Audio_KLR_Base_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  


	/// Functions
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_09.BP_Audio_KLR_09_C.OnKillerSoundbankLoaded
	// void OnKillerSoundbankLoaded(EAkResult Result);                                                                       // [0x61d2f50] Protected|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_09.BP_Audio_KLR_09_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_09.BP_Audio_KLR_09_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                       // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_09.BP_Audio_KLR_09_C.ExecuteUbergraph_BP_Audio_KLR_09
	// void ExecuteUbergraph_BP_Audio_KLR_09(int32_t EntryPoint);                                                            // [0x61d2f50] Final                
};

/// Class /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_23_C
/// Size: 0x0010 (0x000208 - 0x000218)
class UBP_Audio_KLR_23_C : public UBP_Audio_KLR_Base_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  
	class UAkAudioEvent*                               AudioStatusStartMenuEvent;                                  // 0x0210   (0x0008)  


	/// Functions
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_23_C.SelectAudioStatusStartEvent
	// void SelectAudioStatusStartEvent(bool IsInMenu, class UAkAudioEvent*& AudioEvent);                                    // [0x61d2f50] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_23_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_23_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                       // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_23_C.ExecuteUbergraph_BP_Audio_KLR
	// void ExecuteUbergraph_BP_Audio_KLR(int32_t EntryPoint);                                                               // [0x61d2f50] Final                
};

/// Class /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_06.BP_Audio_KLR_06_C
/// Size: 0x0000 (0x000208 - 0x000208)
class UBP_Audio_KLR_06_C : public UBP_Audio_KLR_Base_C
{ 
public:


	/// Functions
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_06.BP_Audio_KLR_06_C.OnKillerSoundbankLoaded
	// void OnKillerSoundbankLoaded(EAkResult Result);                                                                       // [0x61d2f50] Protected|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_07.BP_Audio_KLR_07_C
/// Size: 0x0008 (0x000208 - 0x000210)
class UBP_Audio_KLR_07_C : public UBP_Audio_KLR_Base_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  


	/// Functions
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_07.BP_Audio_KLR_07_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_07.BP_Audio_KLR_07_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                       // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_07.BP_Audio_KLR_07_C.ExecuteUbergraph_BP_Audio_KLR_07
	// void ExecuteUbergraph_BP_Audio_KLR_07(int32_t EntryPoint);                                                            // [0x61d2f50] Final                
};

/// Class /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_08.BP_Audio_KLR_08_C
/// Size: 0x0010 (0x000208 - 0x000218)
class UBP_Audio_KLR_08_C : public UBP_Audio_KLR_Base_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  
	class UAkAudioEvent*                               AudioStatusStartMenuEvent;                                  // 0x0210   (0x0008)  


	/// Functions
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_08.BP_Audio_KLR_08_C.SelectAudioStatusStartEvent
	// void SelectAudioStatusStartEvent(bool IsInMenu, class UAkAudioEvent*& AudioEvent);                                    // [0x61d2f50] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_08.BP_Audio_KLR_08_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_08.BP_Audio_KLR_08_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                       // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_08.BP_Audio_KLR_08_C.ExecuteUbergraph_BP_Audio_KLR_08
	// void ExecuteUbergraph_BP_Audio_KLR_08(int32_t EntryPoint);                                                            // [0x61d2f50] Final                
};

/// Class /Game/Audio/AudioBlueprints/Killer/KillerMenuReaction/K24_KillerAudioMenuReaction.K24_KillerAudioMenuReaction_C
/// Size: 0x0018 (0x0000C8 - 0x0000E0)
class UK24_KillerAudioMenuReaction_C : public UKillerAudioMenuReactionComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00C8   (0x0008)  
	SDK_UNDEFINED(16,3638) /* TArray<FString> */       __um(starsCharacter);                                       // 0x00D0   (0x0010)  


	/// Functions
	// Function /Game/Audio/AudioBlueprints/Killer/KillerMenuReaction/K24_KillerAudioMenuReaction.K24_KillerAudioMenuReaction_C.LobbyKillerReactionSpecificSurvivorSFX
	// void LobbyKillerReactionSpecificSurvivorSFX(TArray<ADBDMenuPlayer*>& menuPlayers);                                    // [0x61d2f50] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/KillerMenuReaction/K24_KillerAudioMenuReaction.K24_KillerAudioMenuReaction_C.ExecuteUbergraph_K24_KillerAudioMenuReaction
	// void ExecuteUbergraph_K24_KillerAudioMenuReaction(int32_t EntryPoint);                                                // [0x61d2f50] Final|HasDefaults    
};

/// Class /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_24_C
/// Size: 0x0020 (0x000208 - 0x000228)
class UBP_Audio_KLR_24_C : public UBP_Audio_KLR_Base_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  
	class UAkAudioEvent*                               AudioStatusStartMenuEvent;                                  // 0x0210   (0x0008)  
	SDK_UNDEFINED(16,3639) /* TArray<FString> */       __um(starsCharacter);                                       // 0x0218   (0x0010)  


	/// Functions
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_24_C.IsCharacter
	// void IsCharacter(class ADBDPlayer* CamperPlayer, TArray<FString>& characterName, bool& IsCharacter);                  // [0x61d2f50] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_24_C.SelectAudioStatusStartEvent
	// void SelectAudioStatusStartEvent(bool IsInMenu, class UAkAudioEvent*& AudioEvent);                                    // [0x61d2f50] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_24_C.TriggerKillerReactionSpecificSurvivorSFX
	// void TriggerKillerReactionSpecificSurvivorSFX(class ADBDPlayer* camper);                                              // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_24_C.ChaseTriggerKillerReactionSpecificSurvivorSFX
	// void ChaseTriggerKillerReactionSpecificSurvivorSFX(class ADBDPlayer* camper);                                         // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_24_C.HitImpactOnSurvivorSFX
	// void HitImpactOnSurvivorSFX(class ACamperPlayer* camper, EAttackType attackType, bool IsWeaponHit);                   // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_24_C.ExecuteUbergraph_BP_Audio_KLR
	// void ExecuteUbergraph_BP_Audio_KLR(int32_t EntryPoint);                                                               // [0x61d2f50] Final|HasDefaults    
};

/// Class /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_10_C
/// Size: 0x0000 (0x000208 - 0x000208)
class UBP_Audio_KLR_10_C : public UBP_Audio_KLR_Base_C
{ 
public:


	/// Functions
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_10_C.OnKillerSoundbankLoaded
	// void OnKillerSoundbankLoaded(EAkResult Result);                                                                       // [0x61d2f50] Protected|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_11_C
/// Size: 0x0008 (0x000208 - 0x000210)
class UBP_Audio_KLR_11_C : public UBP_Audio_KLR_Base_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  


	/// Functions
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_11_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_11_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                       // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_11_C.ExecuteUbergraph_BP_Audio_KLR
	// void ExecuteUbergraph_BP_Audio_KLR(int32_t EntryPoint);                                                               // [0x61d2f50] Final                
};

/// Class /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_25_C
/// Size: 0x0020 (0x000208 - 0x000228)
class UBP_Audio_KLR_25_C : public UBP_Audio_KLR_Base_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  
	class UAkAudioEvent*                               AudioStatusStartMenuEvent;                                  // 0x0210   (0x0008)  
	SDK_UNDEFINED(16,3640) /* TArray<FString> */       __um(starsCharacter);                                       // 0x0218   (0x0010)  


	/// Functions
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_25_C.IsCharacter
	// void IsCharacter(class ADBDPlayer* CamperPlayer, TArray<FString>& characterName, bool& IsCharacter);                  // [0x61d2f50] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_25_C.SelectAudioStatusStartEvent
	// void SelectAudioStatusStartEvent(bool IsInMenu, class UAkAudioEvent*& AudioEvent);                                    // [0x61d2f50] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_25_C.HitImpactOnSurvivorSFX
	// void HitImpactOnSurvivorSFX(class ACamperPlayer* camper, EAttackType attackType, bool IsWeaponHit);                   // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_25_C.ExecuteUbergraph_BP_Audio_KLR
	// void ExecuteUbergraph_BP_Audio_KLR(int32_t EntryPoint);                                                               // [0x61d2f50] Final|HasDefaults    
};

/// Class /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_12_C
/// Size: 0x0008 (0x000208 - 0x000210)
class UBP_Audio_KLR_12_C : public UBP_Audio_KLR_Base_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  


	/// Functions
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_12_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_12_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                       // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_12_C.ExecuteUbergraph_BP_Audio_KLR
	// void ExecuteUbergraph_BP_Audio_KLR(int32_t EntryPoint);                                                               // [0x61d2f50] Final                
};

/// Class /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_13_C
/// Size: 0x0008 (0x000208 - 0x000210)
class UBP_Audio_KLR_13_C : public UBP_Audio_KLR_Base_C
{ 
public:
	class UAkAudioEvent*                               AudioStatusStartMenuEvent;                                  // 0x0208   (0x0008)  


	/// Functions
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_13_C.SelectAudioStatusStartEvent
	// void SelectAudioStatusStartEvent(bool IsInMenu, class UAkAudioEvent*& AudioEvent);                                    // [0x61d2f50] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
};

/// Class /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_26_C
/// Size: 0x0010 (0x000208 - 0x000218)
class UBP_Audio_KLR_26_C : public UBP_Audio_KLR_Base_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  
	class UAkAudioEvent*                               AudioStatusStartMenuEvent;                                  // 0x0210   (0x0008)  


	/// Functions
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_26_C.IsCharacter
	// void IsCharacter(class ADBDPlayer* CamperPlayer, TArray<FString>& characterName, bool& IsCharacter);                  // [0x61d2f50] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_26_C.SelectAudioStatusStartEvent
	// void SelectAudioStatusStartEvent(bool IsInMenu, class UAkAudioEvent*& AudioEvent);                                    // [0x61d2f50] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_26_C.HitImpactOnSurvivorSFX
	// void HitImpactOnSurvivorSFX(class ACamperPlayer* camper, EAttackType attackType, bool IsWeaponHit);                   // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_26_C.ExecuteUbergraph_BP_Audio_KLR
	// void ExecuteUbergraph_BP_Audio_KLR(int32_t EntryPoint);                                                               // [0x61d2f50] Final|HasDefaults    
};

/// Class /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_14_C
/// Size: 0x0008 (0x000208 - 0x000210)
class UBP_Audio_KLR_14_C : public UBP_Audio_KLR_Base_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  


	/// Functions
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_14_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_14_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                       // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_14_C.ExecuteUbergraph_BP_Audio_KLR
	// void ExecuteUbergraph_BP_Audio_KLR(int32_t EntryPoint);                                                               // [0x61d2f50] Final                
};

/// Class /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_27_C
/// Size: 0x0010 (0x000208 - 0x000218)
class UBP_Audio_KLR_27_C : public UBP_Audio_KLR_Base_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  
	class UAkAudioEvent*                               AudioStatusStartMenuEvent;                                  // 0x0210   (0x0008)  


	/// Functions
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_27_C.OnKillerSoundbankLoaded
	// void OnKillerSoundbankLoaded(EAkResult Result);                                                                       // [0x61d2f50] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_27_C.IsCharacter
	// void IsCharacter(class ADBDPlayer* CamperPlayer, TArray<FString>& characterName, bool& IsCharacter);                  // [0x61d2f50] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_27_C.SelectAudioStatusStartEvent
	// void SelectAudioStatusStartEvent(bool IsInMenu, class UAkAudioEvent*& AudioEvent);                                    // [0x61d2f50] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_27_C.HitImpactOnSurvivorSFX
	// void HitImpactOnSurvivorSFX(class ACamperPlayer* camper, EAttackType attackType, bool IsWeaponHit);                   // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_27_C.ExecuteUbergraph_BP_Audio_KLR
	// void ExecuteUbergraph_BP_Audio_KLR(int32_t EntryPoint);                                                               // [0x61d2f50] Final|HasDefaults    
};

/// Class /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_15_C
/// Size: 0x0008 (0x000208 - 0x000210)
class UBP_Audio_KLR_15_C : public UBP_Audio_KLR_Base_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  


	/// Functions
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_15_C.OnKillerSoundbankLoaded
	// void OnKillerSoundbankLoaded(EAkResult Result);                                                                       // [0x61d2f50] Protected|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_15_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_15_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                       // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_15_C.ExecuteUbergraph_BP_Audio_KLR
	// void ExecuteUbergraph_BP_Audio_KLR(int32_t EntryPoint);                                                               // [0x61d2f50] Final                
};

/// Class /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_28_C
/// Size: 0x0010 (0x000208 - 0x000218)
class UBP_Audio_KLR_28_C : public UBP_Audio_KLR_Base_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  
	class UAkAudioEvent*                               AudioStatusStartMenuEvent;                                  // 0x0210   (0x0008)  


	/// Functions
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_28_C.IsCharacter
	// void IsCharacter(class ADBDPlayer* CamperPlayer, TArray<FString>& characterName, bool& IsCharacter);                  // [0x61d2f50] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_28_C.SelectAudioStatusStartEvent
	// void SelectAudioStatusStartEvent(bool IsInMenu, class UAkAudioEvent*& AudioEvent);                                    // [0x61d2f50] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_28_C.HitImpactOnSurvivorSFX
	// void HitImpactOnSurvivorSFX(class ACamperPlayer* camper, EAttackType attackType, bool IsWeaponHit);                   // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_28_C.ExecuteUbergraph_BP_Audio_KLR
	// void ExecuteUbergraph_BP_Audio_KLR(int32_t EntryPoint);                                                               // [0x61d2f50] Final|HasDefaults    
};

/// Class /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_16_C
/// Size: 0x0010 (0x000208 - 0x000218)
class UBP_Audio_KLR_16_C : public UBP_Audio_KLR_Base_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  
	class UAkAudioEvent*                               AudioStatusStartMenuEvent;                                  // 0x0210   (0x0008)  


	/// Functions
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_16_C.OnKillerSoundbankLoaded
	// void OnKillerSoundbankLoaded(EAkResult Result);                                                                       // [0x61d2f50] Protected|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_16_C.SelectAudioStatusStartEvent
	// void SelectAudioStatusStartEvent(bool IsInMenu, class UAkAudioEvent*& AudioEvent);                                    // [0x61d2f50] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_16_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_16_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                       // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_16_C.ExecuteUbergraph_BP_Audio_KLR
	// void ExecuteUbergraph_BP_Audio_KLR(int32_t EntryPoint);                                                               // [0x61d2f50] Final                
};

/// Class /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_29_C
/// Size: 0x0010 (0x000208 - 0x000218)
class UBP_Audio_KLR_29_C : public UBP_Audio_KLR_Base_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  
	class UAkAudioEvent*                               AudioStatusStartMenuEvent;                                  // 0x0210   (0x0008)  


	/// Functions
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_29_C.IsCharacter
	// void IsCharacter(class ADBDPlayer* CamperPlayer, TArray<FString>& characterName, bool& IsCharacter);                  // [0x61d2f50] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_29_C.SelectAudioStatusStartEvent
	// void SelectAudioStatusStartEvent(bool IsInMenu, class UAkAudioEvent*& AudioEvent);                                    // [0x61d2f50] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_29_C.HitImpactOnSurvivorSFX
	// void HitImpactOnSurvivorSFX(class ACamperPlayer* camper, EAttackType attackType, bool IsWeaponHit);                   // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_29_C.ExecuteUbergraph_BP_Audio_KLR
	// void ExecuteUbergraph_BP_Audio_KLR(int32_t EntryPoint);                                                               // [0x61d2f50] Final|HasDefaults    
};

/// Class /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_17_C
/// Size: 0x0008 (0x000208 - 0x000210)
class UBP_Audio_KLR_17_C : public UBP_Audio_KLR_Base_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  


	/// Functions
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_17_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_17_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                       // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_17_C.ExecuteUbergraph_BP_Audio_KLR
	// void ExecuteUbergraph_BP_Audio_KLR(int32_t EntryPoint);                                                               // [0x61d2f50] Final                
};

/// Class /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_30_C
/// Size: 0x0010 (0x000208 - 0x000218)
class UBP_Audio_KLR_30_C : public UBP_Audio_KLR_Base_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  
	class UAkAudioEvent*                               AudioStatusStartMenuEvent;                                  // 0x0210   (0x0008)  


	/// Functions
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_30_C.IsCharacter
	// void IsCharacter(class ADBDPlayer* CamperPlayer, TArray<FString>& characterName, bool& IsCharacter);                  // [0x61d2f50] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_30_C.SelectAudioStatusStartEvent
	// void SelectAudioStatusStartEvent(bool IsInMenu, class UAkAudioEvent*& AudioEvent);                                    // [0x61d2f50] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_30_C.HitImpactOnSurvivorSFX
	// void HitImpactOnSurvivorSFX(class ACamperPlayer* camper, EAttackType attackType, bool IsWeaponHit);                   // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_30_C.ExecuteUbergraph_BP_Audio_KLR
	// void ExecuteUbergraph_BP_Audio_KLR(int32_t EntryPoint);                                                               // [0x61d2f50] Final|HasDefaults    
};

/// Class /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_31_C
/// Size: 0x0010 (0x000208 - 0x000218)
class UBP_Audio_KLR_31_C : public UBP_Audio_KLR_Base_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  
	class UAkAudioEvent*                               AudioStatusStartMenuEvent;                                  // 0x0210   (0x0008)  


	/// Functions
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_31_C.OnKillerSoundbankLoaded
	// void OnKillerSoundbankLoaded(EAkResult Result);                                                                       // [0x61d2f50] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_31_C.IsCharacter
	// void IsCharacter(class ADBDPlayer* CamperPlayer, TArray<FString>& characterName, bool& IsCharacter);                  // [0x61d2f50] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_31_C.SelectAudioStatusStartEvent
	// void SelectAudioStatusStartEvent(bool IsInMenu, class UAkAudioEvent*& AudioEvent);                                    // [0x61d2f50] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_31_C.HitImpactOnSurvivorSFX
	// void HitImpactOnSurvivorSFX(class ACamperPlayer* camper, EAttackType attackType, bool IsWeaponHit);                   // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_31_C.ExecuteUbergraph_BP_Audio_KLR
	// void ExecuteUbergraph_BP_Audio_KLR(int32_t EntryPoint);                                                               // [0x61d2f50] Final|HasDefaults    
};

/// Class /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_18_C
/// Size: 0x0008 (0x000208 - 0x000210)
class UBP_Audio_KLR_18_C : public UBP_Audio_KLR_Base_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  


	/// Functions
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_18_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_18_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                       // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_18_C.ExecuteUbergraph_BP_Audio_KLR
	// void ExecuteUbergraph_BP_Audio_KLR(int32_t EntryPoint);                                                               // [0x61d2f50] Final                
};

/// Class /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_04.BP_Audio_KLR_04_C
/// Size: 0x0008 (0x000208 - 0x000210)
class UBP_Audio_KLR_04_C : public UBP_Audio_KLR_Base_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  


	/// Functions
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_04.BP_Audio_KLR_04_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_04.BP_Audio_KLR_04_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                       // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR_04.BP_Audio_KLR_04_C.ExecuteUbergraph_BP_Audio_KLR_04
	// void ExecuteUbergraph_BP_Audio_KLR_04(int32_t EntryPoint);                                                            // [0x61d2f50] Final                
};

/// Class /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_19_C
/// Size: 0x0008 (0x000208 - 0x000210)
class UBP_Audio_KLR_19_C : public UBP_Audio_KLR_Base_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  


	/// Functions
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_19_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_19_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                       // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_19_C.ExecuteUbergraph_BP_Audio_KLR
	// void ExecuteUbergraph_BP_Audio_KLR(int32_t EntryPoint);                                                               // [0x61d2f50] Final                
};

/// Class /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_32_C
/// Size: 0x0010 (0x000208 - 0x000218)
class UBP_Audio_KLR_32_C : public UBP_Audio_KLR_Base_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  
	class UAkAudioEvent*                               AudioStatusStartMenuEvent;                                  // 0x0210   (0x0008)  


	/// Functions
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_32_C.OnKillerSoundbankLoaded
	// void OnKillerSoundbankLoaded(EAkResult Result);                                                                       // [0x61d2f50] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_32_C.IsCharacter
	// void IsCharacter(class ADBDPlayer* CamperPlayer, TArray<FString>& characterName, bool& IsCharacter);                  // [0x61d2f50] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_32_C.SelectAudioStatusStartEvent
	// void SelectAudioStatusStartEvent(bool IsInMenu, class UAkAudioEvent*& AudioEvent);                                    // [0x61d2f50] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_32_C.HitImpactOnSurvivorSFX
	// void HitImpactOnSurvivorSFX(class ACamperPlayer* camper, EAttackType attackType, bool IsWeaponHit);                   // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_32_C.ExecuteUbergraph_BP_Audio_KLR
	// void ExecuteUbergraph_BP_Audio_KLR(int32_t EntryPoint);                                                               // [0x61d2f50] Final|HasDefaults    
};

/// Class /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_20_C
/// Size: 0x0008 (0x000208 - 0x000210)
class UBP_Audio_KLR_20_C : public UBP_Audio_KLR_Base_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  


	/// Functions
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_20_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_20_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                       // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_20_C.ExecuteUbergraph_BP_Audio_KLR
	// void ExecuteUbergraph_BP_Audio_KLR(int32_t EntryPoint);                                                               // [0x61d2f50] Final                
};

/// Class /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_33_C
/// Size: 0x0010 (0x000208 - 0x000218)
class UBP_Audio_KLR_33_C : public UBP_Audio_KLR_Base_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  
	class UAkAudioEvent*                               AudioStatusStartMenuEvent;                                  // 0x0210   (0x0008)  


	/// Functions
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_33_C.OnKillerSoundbankLoaded
	// void OnKillerSoundbankLoaded(EAkResult Result);                                                                       // [0x61d2f50] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_33_C.IsCharacter
	// void IsCharacter(class ADBDPlayer* CamperPlayer, TArray<FString>& characterName, bool& IsCharacter);                  // [0x61d2f50] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_33_C.SelectAudioStatusStartEvent
	// void SelectAudioStatusStartEvent(bool IsInMenu, class UAkAudioEvent*& AudioEvent);                                    // [0x61d2f50] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_33_C.HitImpactOnSurvivorSFX
	// void HitImpactOnSurvivorSFX(class ACamperPlayer* camper, EAttackType attackType, bool IsWeaponHit);                   // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_33_C.ExecuteUbergraph_BP_Audio_KLR
	// void ExecuteUbergraph_BP_Audio_KLR(int32_t EntryPoint);                                                               // [0x61d2f50] Final|HasDefaults    
};

/// Class /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_21_C
/// Size: 0x0008 (0x000208 - 0x000210)
class UBP_Audio_KLR_21_C : public UBP_Audio_KLR_Base_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  


	/// Functions
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_21_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_21_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                       // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_21_C.ExecuteUbergraph_BP_Audio_KLR
	// void ExecuteUbergraph_BP_Audio_KLR(int32_t EntryPoint);                                                               // [0x61d2f50] Final                
};

/// Class /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_34_C
/// Size: 0x0010 (0x000208 - 0x000218)
class UBP_Audio_KLR_34_C : public UBP_Audio_KLR_Base_C
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0208   (0x0008)  
	class UAkAudioEvent*                               AudioStatusStartMenuEvent;                                  // 0x0210   (0x0008)  


	/// Functions
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_34_C.OnKillerSoundbankLoaded
	// void OnKillerSoundbankLoaded(EAkResult Result);                                                                       // [0x61d2f50] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_34_C.IsCharacter
	// void IsCharacter(class ADBDPlayer* CamperPlayer, TArray<FString>& characterName, bool& IsCharacter);                  // [0x61d2f50] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_34_C.SelectAudioStatusStartEvent
	// void SelectAudioStatusStartEvent(bool IsInMenu, class UAkAudioEvent*& AudioEvent);                                    // [0x61d2f50] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_34_C.HitImpactOnSurvivorSFX
	// void HitImpactOnSurvivorSFX(class ACamperPlayer* camper, EAttackType attackType, bool IsWeaponHit);                   // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/Audio/AudioBlueprints/Killer/BP_Audio_KLR.BP_Audio_KLR_34_C.ExecuteUbergraph_BP_Audio_KLR
	// void ExecuteUbergraph_BP_Audio_KLR(int32_t EntryPoint);                                                               // [0x61d2f50] Final|HasDefaults    
};

