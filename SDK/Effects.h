
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
/// dependency: DBDGameplay
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayCameras
/// dependency: GFXUtilities
/// dependency: LevelSequence
/// dependency: VFXUtilities

/// Class /Game/Effects/Blueprints/Interface/General/BPI_Effect_Environment.BPI_Effect_Environment_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UBPI_Effect_Environment_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_Environment.BPI_Effect_Environment_C.KNY_StartSnowstorm
	// void KNY_StartSnowstorm();                                                                                            // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Effects/Blueprints/BP_Effect_Mist.BP_Effect_Mist_C
/// Size: 0x0018 (0x000238 - 0x000250)
class ABP_Effect_Mist_C : public ABaseVFX
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0238   (0x0008)  
	class UDBDAggregateParticleLocatorComponent*       DBDAggregateParticleLocator;                                // 0x0240   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0248   (0x0008)  


	/// Functions
	// Function /Game/Effects/Blueprints/BP_Effect_Mist.BP_Effect_Mist_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                 // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Blueprints/BP_Effect_Mist.BP_Effect_Mist_C.ExecuteUbergraph_BP_Effect_Mist
	// void ExecuteUbergraph_BP_Effect_Mist(int32_t EntryPoint);                                                             // [0x61d2f50] Final                
};

/// Class /Game/Effects/Blueprints/Libraries/VFX_Function_Lib_Character.VFX_Function_Lib_Character_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UVFX_Function_Lib_Character_C : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Game/Effects/Blueprints/Libraries/VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.Spawn Niagara Particles Character Dissolve
	// void Spawn Niagara Particles Character Dissolve(bool Survivor/Killer, class AActor* Actor, class UCustomizedSkeletalMesh* CustomizedSkeletalMesh, bool In/Out, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Libraries/VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.SpawnFootstepKillerVFX
	// void SpawnFootstepKillerVFX(bool Run, bool Left, class ASlasherPlayer* SlasherPlayer, class UObject* __WorldContext); // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Libraries/VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.SpawnFootstepVFX
	// void SpawnFootstepVFX(bool Run, bool Left, class ACamperPlayer* CamperCharacter, class UObject* __WorldContext, bool& Bloody Footprints, FName& Footprint Socket, int32_t& Surface Type); // [0x61d2f50] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Libraries/VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.ManageInteractiveMist
	// void ManageInteractiveMist(class APawn* Pawn, class UActorComponent* MistActor, class UObject* __WorldContext);       // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Libraries/VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.MakeCharacter_Visible
	// void MakeCharacter_Visible(class ADBDPlayer* Character, class UObject* __WorldContext);                               // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Libraries/VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.MakeCharacter_Invisible
	// void MakeCharacter_Invisible(class ADBDPlayer* Character, class UObject* __WorldContext);                             // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Libraries/VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.MaskFPV_Visible
	// void MaskFPV_Visible(class ADBDPlayer* Character, class UObject* __WorldContext);                                     // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Libraries/VFX_Function_Lib_Character.VFX_Function_Lib_Character_C.MaskFPV_Hidden
	// void MaskFPV_Hidden(class ADBDPlayer* Character, class UObject* __WorldContext);                                      // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Effects/Blueprints/Interface/Camper/BPI_SurvivorMenu_Anim.BPI_SurvivorMenu_Anim_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UBPI_SurvivorMenu_Anim_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/Effects/Blueprints/Interface/Camper/BPI_SurvivorMenu_Anim.BPI_SurvivorMenu_Anim_C.Get_BP_MenuBaseCamper
	// void Get_BP_MenuBaseCamper(class ABP_Menu_Base_Camper_C*& BP_MenuBaseCamper);                                         // [0x61d2f50] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/Camper/BPI_SurvivorMenu_Anim.BPI_SurvivorMenu_Anim_C.SetCamperMenuAnimationState
	// void SetCamperMenuAnimationState(TEnumAsByte<Enum_CamperMenuAnimationState> State);                                   // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/Camper/BPI_SurvivorMenu_Anim.BPI_SurvivorMenu_Anim_C.IsPlayingMenuInterrupt
	// void IsPlayingMenuInterrupt(bool IsPlayingAnimation);                                                                 // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Effects/UI/Logos/BP_Logo.BP_Logo_C
/// Size: 0x0050 (0x000230 - 0x000280)
class ABP_Logo_C : public ADBDLogo
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0230   (0x0008)  
	class UMaterialHelper*                             MaterialHelper;                                             // 0x0238   (0x0008)  
	class UStaticMeshComponent*                        Cube;                                                       // 0x0240   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0248   (0x0008)  
	float                                              Timeline_0_Fade_E88DB81340E64A2D6C8133B1212395F5;           // 0x0250   (0x0004)  
	float                                              Timeline_0_Timing_E88DB81340E64A2D6C8133B1212395F5;         // 0x0254   (0x0004)  
	SDK_UNDEFINED(1,4193) /* TEnumAsByte<ETimelineDirection> */ __um(Timeline_0__Direction_E88DB81340E64A2D6C8133B1212395F5); // 0x0258   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0259   (0x0007)  MISSED
	class UTimelineComponent*                          Timeline;                                                   // 0x0260   (0x0008)  
	float                                              Anim_Fade_89F4B59C42CBB8068E84979C128BB364;                 // 0x0268   (0x0004)  
	float                                              Anim_Timing_89F4B59C42CBB8068E84979C128BB364;               // 0x026C   (0x0004)  
	SDK_UNDEFINED(1,4194) /* TEnumAsByte<ETimelineDirection> */ __um(Anim__Direction_89F4B59C42CBB8068E84979C128BB364); // 0x0270   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0271   (0x0007)  MISSED
	class UTimelineComponent*                          Anim;                                                       // 0x0278   (0x0008)  


	/// Functions
	// Function /Game/Effects/UI/Logos/BP_Logo.BP_Logo_C.Anim__FinishedFunc
	// void Anim__FinishedFunc();                                                                                            // [0x61d2f50] BlueprintEvent       
	// Function /Game/Effects/UI/Logos/BP_Logo.BP_Logo_C.Anim__UpdateFunc
	// void Anim__UpdateFunc();                                                                                              // [0x61d2f50] BlueprintEvent       
	// Function /Game/Effects/UI/Logos/BP_Logo.BP_Logo_C.Timeline_0__FinishedFunc
	// void Timeline_0__FinishedFunc();                                                                                      // [0x61d2f50] BlueprintEvent       
	// Function /Game/Effects/UI/Logos/BP_Logo.BP_Logo_C.Timeline_0__UpdateFunc
	// void Timeline_0__UpdateFunc();                                                                                        // [0x61d2f50] BlueprintEvent       
	// Function /Game/Effects/UI/Logos/BP_Logo.BP_Logo_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/UI/Logos/BP_Logo.BP_Logo_C.ExecuteUbergraph_BP_Logo
	// void ExecuteUbergraph_BP_Logo(int32_t EntryPoint);                                                                    // [0x61d2f50] Final                
};

/// Class /Game/Effects/Blueprints/BP_Lobby_StartScreen_Lite.BP_Lobby_StartScreen_Lite_C
/// Size: 0x0020 (0x000230 - 0x000250)
class ABP_Lobby_StartScreen_Lite_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0230   (0x0008)  
	class UAkComponent*                                AudioEvent_Burning_Menu;                                    // 0x0238   (0x0008)  
	class UParticleSystemComponent*                    P_Lobby_StartScreen_Lite;                                   // 0x0240   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0248   (0x0008)  


	/// Functions
	// Function /Game/Effects/Blueprints/BP_Lobby_StartScreen_Lite.BP_Lobby_StartScreen_Lite_C.BndEvt__BP_Lobby_StartScreen_Lite_P_Lobby_StartScreen_Lite_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature
	// void BndEvt__BP_Lobby_StartScreen_Lite_P_Lobby_StartScreen_Lite_K2Node_ComponentBoundEvent_0_ParticleSpawnSignature__DelegateSignature(FName EventName, float EmitterTime, FVector Location, FVector Velocity); // [0x61d2f50] BlueprintEvent       
	// Function /Game/Effects/Blueprints/BP_Lobby_StartScreen_Lite.BP_Lobby_StartScreen_Lite_C.ExecuteUbergraph_BP_Lobby_StartScreen_Lite
	// void ExecuteUbergraph_BP_Lobby_StartScreen_Lite(int32_t EntryPoint);                                                  // [0x61d2f50] Final|HasDefaults    
};

/// Class /Game/Effects/Sequence/Lobby/StartScreen/FadedOutEventInterface.FadedOutEventInterface_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UFadedOutEventInterface_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/Effects/Sequence/Lobby/StartScreen/FadedOutEventInterface.FadedOutEventInterface_C.FadeOutEvent
	// void FadeOutEvent();                                                                                                  // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Effects/Sequence/Lobby/StartScreen/SQ_fade_menu.SequenceDirector_C
/// Size: 0x0010 (0x000040 - 0x000050)
class USequenceDirector_C : public ULevelSequenceDirector
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0040   (0x0008)  
	class UObject*                                     levelBP;                                                    // 0x0048   (0x0008)  


	/// Functions
	// Function /Game/Effects/Sequence/Lobby/StartScreen/SQ_fade_menu.SequenceDirector_C.SequenceEvent__ENTRYPOINTSequenceDirector
	// void SequenceEvent__ENTRYPOINTSequenceDirector(TScriptInterface<BlueprintGeneratedClass> Target);                     // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Sequence/Lobby/StartScreen/SQ_fade_menu.SequenceDirector_C.FadeOutEvent
	// void FadeOutEvent();                                                                                                  // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Sequence/Lobby/StartScreen/SQ_fade_menu.SequenceDirector_C.SQ_FadedOutEvent
	// void SQ_FadedOutEvent(TScriptInterface<BlueprintGeneratedClass> Target);                                              // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Sequence/Lobby/StartScreen/SQ_fade_menu.SequenceDirector_C.ExecuteUbergraph_SequenceDirector
	// void ExecuteUbergraph_SequenceDirector(int32_t EntryPoint);                                                           // [0x61d2f50] Final                
};

/// Class /Game/Effects/Blueprints/Interface/Camper/BPI_Effect_Camper_Anim.BPI_Effect_Camper_Anim_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UBPI_Effect_Camper_Anim_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/Effects/Blueprints/Interface/Camper/BPI_Effect_Camper_Anim.BPI_Effect_Camper_Anim_C.HideProps
	// void HideProps();                                                                                                     // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/Camper/BPI_Effect_Camper_Anim.BPI_Effect_Camper_Anim_C.ShowProps
	// void ShowProps();                                                                                                     // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/Camper/BPI_Effect_Camper_Anim.BPI_Effect_Camper_Anim_C.AddBloodOnCamper
	// void AddBloodOnCamper();                                                                                              // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/Camper/BPI_Effect_Camper_Anim.BPI_Effect_Camper_Anim_C.CK_StartSacrificeDissolve
	// void CK_StartSacrificeDissolve();                                                                                     // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/Camper/BPI_Effect_Camper_Anim.BPI_Effect_Camper_Anim_C.StartEndGameDissolve
	// void StartEndGameDissolve();                                                                                          // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/Camper/BPI_Effect_Camper_Anim.BPI_Effect_Camper_Anim_C.GoToAddVomitDecal
	// void GoToAddVomitDecal();                                                                                             // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/Camper/BPI_Effect_Camper_Anim.BPI_Effect_Camper_Anim_C.GoToAddMoriVomitStain
	// void GoToAddMoriVomitStain();                                                                                         // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Effects/Blueprints/Interface/K03/BPI_Effect_K03.BPI_Effect_K03_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UBPI_Effect_K03_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/Effects/Blueprints/Interface/K03/BPI_Effect_K03.BPI_Effect_K03_C.K03_FX_ShowChainsaw
	// void K03_FX_ShowChainsaw();                                                                                           // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Effects/Blueprints/Interface/K08/BPI_Effect_K08.BPI_Effect_K08_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UBPI_Effect_K08_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/Effects/Blueprints/Interface/K08/BPI_Effect_K08.BPI_Effect_K08_C.K08_FX_MakeHatchetDisappear
	// void K08_FX_MakeHatchetDisappear();                                                                                   // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K08/BPI_Effect_K08.BPI_Effect_K08_C.K08_FX_MakeHatchetAppear
	// void K08_FX_MakeHatchetAppear();                                                                                      // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Effects/Blueprints/Interface/K24/BPI_Effect_K24_Menu.BPI_Effect_K24_Menu_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UBPI_Effect_K24_Menu_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/Effects/Blueprints/Interface/K24/BPI_Effect_K24_Menu.BPI_Effect_K24_Menu_C.K24_FX_HideTentacle
	// void K24_FX_HideTentacle();                                                                                           // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K24/BPI_Effect_K24_Menu.BPI_Effect_K24_Menu_C.K24_FX_ShowTentacle
	// void K24_FX_ShowTentacle();                                                                                           // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Effects/Blueprints/NotifyState/General/BP_NS_SetMesh_VisibleToInVisible.BP_NS_SetMesh_VisibleToInVisible_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UBP_NS_SetMesh_VisibleToInVisible_C : public UAnimNotifyState
{ 
public:


	/// Functions
	// Function /Game/Effects/Blueprints/NotifyState/General/BP_NS_SetMesh_VisibleToInVisible.BP_NS_SetMesh_VisibleToInVisible_C.Received_NotifyEnd
	// bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);                  // [0x61d2f50] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Effects/Blueprints/NotifyState/General/BP_NS_SetMesh_VisibleToInVisible.BP_NS_SetMesh_VisibleToInVisible_C.Received_NotifyBegin
	// bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration); // [0x61d2f50] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Effects/Blueprints/Interface/K23/BPI_Effect_K23.BPI_Effect_K23_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UBPI_Effect_K23_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/Effects/Blueprints/Interface/K23/BPI_Effect_K23.BPI_Effect_K23_C.K23_HideBat
	// void K23_HideBat();                                                                                                   // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K23/BPI_Effect_K23.BPI_Effect_K23_C.K23_ShowBat
	// void K23_ShowBat();                                                                                                   // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K23/BPI_Effect_K23.BPI_Effect_K23_C.K23_StunnedByPallet
	// void K23_StunnedByPallet();                                                                                           // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K23/BPI_Effect_K23.BPI_Effect_K23_C.K23_Hide_LTKnife
	// void K23_Hide_LTKnife();                                                                                              // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K23/BPI_Effect_K23.BPI_Effect_K23_C.K23_Hide_RTKnife
	// void K23_Hide_RTKnife();                                                                                              // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K23/BPI_Effect_K23.BPI_Effect_K23_C.K23_Show_LTKnife
	// void K23_Show_LTKnife();                                                                                              // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K23/BPI_Effect_K23.BPI_Effect_K23_C.K23_Show_RTKnife
	// void K23_Show_RTKnife();                                                                                              // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K23/BPI_Effect_K23.BPI_Effect_K23_C.K23_Exit_SuperMode
	// void K23_Exit_SuperMode();                                                                                            // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K23/BPI_Effect_K23.BPI_Effect_K23_C.K23_Enter_SuperMode
	// void K23_Enter_SuperMode();                                                                                           // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K23/BPI_Effect_K23.BPI_Effect_K23_C.EventK23Camper
	// void EventK23Camper();                                                                                                // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UBPI_Effect_General_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.Boon_Unbound
	// void Boon_Unbound();                                                                                                  // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.Survivor_BoonRadius_Exit
	// void Survivor_BoonRadius_Exit();                                                                                      // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.Survivor_BoonRadius_Enter
	// void Survivor_BoonRadius_Enter();                                                                                     // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.ReturnOniToNormal
	// void ReturnOniToNormal();                                                                                             // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.AddBloodDrippingGKMoriMale
	// void AddBloodDrippingGKMoriMale();                                                                                    // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K22_IsAttachedLocker
	// void K22_IsAttachedLocker(bool IsAttachedLocker);                                                                     // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K22_HighlightMissJump_Stop
	// void K22_HighlightMissJump_Stop();                                                                                    // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K22_BrotherDissolveLocker
	// void K22_BrotherDissolveLocker();                                                                                     // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.Camper_AntidoteBoostVignette_End
	// void Camper_AntidoteBoostVignette_End();                                                                              // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.Camper_AntidoteBoostVignette_Start
	// void Camper_AntidoteBoostVignette_Start();                                                                            // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.Killer_LungeAttack_End
	// void Killer_LungeAttack_End();                                                                                        // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.Killer_LungeAttack_Start
	// void Killer_LungeAttack_Start();                                                                                      // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K22_QuickDissolveBrother
	// void K22_QuickDissolveBrother();                                                                                      // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K12_Killer_PlaceVignette
	// void K12_Killer_PlaceVignette();                                                                                      // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K12_Killer_RemoveVignette
	// void K12_Killer_RemoveVignette();                                                                                     // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K12_Killer_BombSmokeColor
	// void K12_Killer_BombSmokeColor();                                                                                     // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K12_Killer_AntidoteBegin
	// void K12_Killer_AntidoteBegin();                                                                                      // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K12_Killer_AntidoteEnd
	// void K12_Killer_AntidoteEnd();                                                                                        // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K12_GetAntidoteVignette
	// void K12_GetAntidoteVignette();                                                                                       // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K12_GetToxinVignette
	// void K12_GetToxinVignette(EBombType Bomb Type);                                                                       // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K22_WrongLandingVignette
	// void K22_WrongLandingVignette(bool WrongLanding);                                                                     // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K22_DetachedFromSurvivor_VFX
	// void K22_DetachedFromSurvivor_VFX();                                                                                  // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K22_AttachedToSurvivor_VFX
	// void K22_AttachedToSurvivor_VFX();                                                                                    // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K22_WrongLanding
	// void K22_WrongLanding(bool Wrong Landing);                                                                            // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K04_TelekinesisOff
	// void K04_TelekinesisOff();                                                                                            // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K04_TelekinesisOn
	// void K04_TelekinesisOn();                                                                                             // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K04_InvisibleOff
	// void K04_InvisibleOff();                                                                                              // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K04_InvisibleOn
	// void K04_InvisibleOn();                                                                                               // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K05_BloodDrops
	// void K05_BloodDrops();                                                                                                // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K05_TrapImpactOff
	// void K05_TrapImpactOff();                                                                                             // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K05_TrapImpact
	// void K05_TrapImpact();                                                                                                // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K05_SetTrap
	// void K05_SetTrap();                                                                                                   // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.On Execution
	// void On Execution();                                                                                                  // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K22_Jump_Inactive
	// void K22_Jump_Inactive();                                                                                             // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K22_Jump_Active
	// void K22_Jump_Active();                                                                                               // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K22_BabyRespawn
	// void K22_BabyRespawn();                                                                                               // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K22_BabyBloodDissolve
	// void K22_BabyBloodDissolve();                                                                                         // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K22_MembraneDelete
	// void K22_MembraneDelete();                                                                                            // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K22_MembraneRecovery
	// void K22_MembraneRecovery();                                                                                          // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K22_ReleaseBrother
	// void K22_ReleaseBrother();                                                                                            // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K22_JumpTrail_Deactivate
	// void K22_JumpTrail_Deactivate();                                                                                      // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K22_JumpTrail_Activate
	// void K22_JumpTrail_Activate();                                                                                        // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K22_DormantAttachedSlasher
	// void K22_DormantAttachedSlasher();                                                                                    // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K22_HighlightMissJump
	// void K22_HighlightMissJump();                                                                                         // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K22_HighlightDormant
	// void K22_HighlightDormant(bool IsDormant?);                                                                           // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K22_HighlightDormantMain
	// void K22_HighlightDormantMain(bool IsDormantMain?);                                                                   // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.K22_SpawnWipeVFX
	// void K22_SpawnWipeVFX();                                                                                              // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.HideSyringeOnStun
	// void HideSyringeOnStun();                                                                                             // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.ActivateVignetteOnWallCollision
	// void ActivateVignetteOnWallCollision();                                                                               // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.AnimateLiquidSyringe
	// void AnimateLiquidSyringe();                                                                                          // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.HideSyringe
	// void HideSyringe();                                                                                                   // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.ShowSyringe
	// void ShowSyringe();                                                                                                   // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.ActivateAttemptEscapeVFX
	// void ActivateAttemptEscapeVFX();                                                                                      // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.StartDeathBedRelocateVignette
	// void StartDeathBedRelocateVignette();                                                                                 // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.SpawnFullScreenBlood
	// void SpawnFullScreenBlood();                                                                                          // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.ActivateKnockoutVFX
	// void ActivateKnockoutVFX();                                                                                           // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.DeactivateKnockoutVFX
	// void DeactivateKnockoutVFX();                                                                                         // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.StartDeathBedDissolve
	// void StartDeathBedDissolve();                                                                                         // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.ActivateSacrificeCamBlood
	// void ActivateSacrificeCamBlood();                                                                                     // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.SpawnFakeBullet
	// void SpawnFakeBullet();                                                                                               // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.HideGunBullet
	// void HideGunBullet();                                                                                                 // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.ShowGunBullet
	// void ShowGunBullet();                                                                                                 // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.Hide Oni Katana_TPV
	// void Hide Oni Katana_TPV();                                                                                           // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.ReturnToDemonMode
	// void ReturnToDemonMode();                                                                                             // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.DisableDemonMode
	// void DisableDemonMode();                                                                                              // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.HideDemonCosmetic
	// void HideDemonCosmetic();                                                                                             // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.ShowDemonCosmetic
	// void ShowDemonCosmetic();                                                                                             // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.Switch Oni Weapons To Normal
	// void Switch Oni Weapons To Normal();                                                                                  // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.Destroy Blood Orb
	// void Destroy Blood Orb();                                                                                             // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.Show Oni Katana
	// void Show Oni Katana();                                                                                               // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.Hide Oni Katana
	// void Hide Oni Katana();                                                                                               // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.Switch Kanobo to Normal Mode
	// void Switch Kanobo to Normal Mode();                                                                                  // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.Switch Kanobo To Demon Mode
	// void Switch Kanobo To Demon Mode();                                                                                   // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.ActivatePounceStateVFX
	// void ActivatePounceStateVFX();                                                                                        // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.Stop Travelling PP
	// void Stop Travelling PP();                                                                                            // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.Stop Saliva VFX
	// void Stop Saliva VFX();                                                                                               // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.Start Saliva VFX
	// void Start Saliva VFX();                                                                                              // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.Stop Pounce VFX
	// void Stop Pounce VFX();                                                                                               // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.Start Pounce VFX
	// void Start Pounce VFX();                                                                                              // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.Stop Travelling Dissolve
	// void Stop Travelling Dissolve();                                                                                      // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.Start Travelling Dissolve
	// void Start Travelling Dissolve();                                                                                     // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.Start Travelling PP
	// void Start Travelling PP();                                                                                           // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.ActivatePlayerGlitchVFX
	// void ActivatePlayerGlitchVFX(class UMaterialInstanceDynamic*& GlitchFX, bool Face, bool Madness, bool killer);        // [0x61d2f50] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.ActivatePlayerLightningVFX
	// void ActivatePlayerLightningVFX(class UMaterialInstanceDynamic*& LightningFX, bool intense);                          // [0x61d2f50] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.SetHighlightedVFX
	// void SetHighlightedVFX();                                                                                             // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.SetPlayerExposedVFX
	// void SetPlayerExposedVFX();                                                                                           // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.ActivateLocalPlayerExposedVFX
	// void ActivateLocalPlayerExposedVFX();                                                                                 // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.ActivatePlayerExposedVFX
	// void ActivatePlayerExposedVFX();                                                                                      // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/General/BPI_Effect_General.BPI_Effect_General_C.ActivateEndGameVignette
	// void ActivateEndGameVignette(bool IsActive);                                                                          // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Effects/Blueprints/Libraries/VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UVFX_Function_Lib_AnimNotifies_C : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Game/Effects/Blueprints/Libraries/VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Trickster
	// bool HandleKillerNotifies_Trickster(FName Selection, class ASlasherPlayer* MySlasher, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Libraries/VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Blight
	// bool HandleKillerNotifies_Blight(class ASlasherPlayer* My Slasher1, class UObject* __WorldContext);                   // [0x61d2f50] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Libraries/VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Deathslinger
	// bool HandleKillerNotifies_Deathslinger(class ASlasherPlayer* My Slasher1, FName Selection, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Libraries/VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Oni
	// bool HandleKillerNotifies_Oni(class UObject* Target, class UObject* Get Killer1, FName Selection, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Libraries/VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Demogorgon
	// bool HandleKillerNotifies_Demogorgon(FName Selection, class UObject* Target, class UObject* __WorldContext);          // [0x61d2f50] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Libraries/VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Nurse
	// bool HandleKillerNotifies_Nurse(FName Selection, class ASlasherPlayer* My Slasher1, class UObject* __WorldContext);   // [0x61d2f50] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Libraries/VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Hag
	// bool HandleKillerNotifies_Hag(FName Selection, class ASlasherPlayer* My Slasher1, class UObject* __WorldContext);     // [0x61d2f50] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Libraries/VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Trapper
	// void HandleKillerNotifies_Trapper(class UObject* __WorldContext);                                                     // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Libraries/VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_General
	// bool HandleKillerNotifies_General(class ASlasherPlayer* My Slasher1, FName Selection, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Libraries/VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_WallBreak
	// void HandleKillerNotifies_WallBreak(FName Selection, class UObject* WorldContextObject, class UObject* __WorldContext, bool& Return Value); // [0x61d2f50] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Libraries/VFX_Function_Lib_AnimNotifies.VFX_Function_Lib_AnimNotifies_C.HandleKillerNotifies_Footsteps
	// bool HandleKillerNotifies_Footsteps(FName Selection, class ASlasherPlayer* Slasher, class UObject* __WorldContext);   // [0x61d2f50] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Effects/Blueprints/Interface/K13/BPI_K13_Killer.BPI_K13_Killer_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UBPI_K13_Killer_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/Effects/Blueprints/Interface/K13/BPI_K13_Killer.BPI_K13_Killer_C.K13_FX_Mori_SpawnPoseableMesh
	// void K13_FX_Mori_SpawnPoseableMesh(bool First Time to Mori);                                                          // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K13/BPI_K13_Killer.BPI_K13_Killer_C.K13_FX_Mori_ResetVariable
	// void K13_FX_Mori_ResetVariable();                                                                                     // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K13/BPI_K13_Killer.BPI_K13_Killer_C.K13_FX_Vault_SpawnPoseableMesh
	// void K13_FX_Vault_SpawnPoseableMesh();                                                                                // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K13/BPI_K13_Killer.BPI_K13_Killer_C.K13_FX_CarryAttack_WeaponDisappear
	// void K13_FX_CarryAttack_WeaponDisappear();                                                                            // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K13/BPI_K13_Killer.BPI_K13_Killer_C.K13_FX_CarryAttack_BOW
	// void K13_FX_CarryAttack_BOW();                                                                                        // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K13/BPI_K13_Killer.BPI_K13_Killer_C.K13_FX_MakeSwordNotVisible_Attack_Wipe_FPV
	// void K13_FX_MakeSwordNotVisible_Attack_Wipe_FPV();                                                                    // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K13/BPI_K13_Killer.BPI_K13_Killer_C.K13_FX_MakeSwordNotVisible_Attack_Miss_FPV
	// void K13_FX_MakeSwordNotVisible_Attack_Miss_FPV();                                                                    // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K13/BPI_K13_Killer.BPI_K13_Killer_C.K13_FX_MakeSwordNotVisible_Attack_Wipe
	// void K13_FX_MakeSwordNotVisible_Attack_Wipe();                                                                        // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K13/BPI_K13_Killer.BPI_K13_Killer_C.K13_FX_MakeSwordNotVisible_Attack_Miss
	// void K13_FX_MakeSwordNotVisible_Attack_Miss();                                                                        // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K13/BPI_K13_Killer.BPI_K13_Killer_C.K13_FX_Attack_In_MakeWeaponAppear_FPV
	// void K13_FX_Attack_In_MakeWeaponAppear_FPV();                                                                         // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K13/BPI_K13_Killer.BPI_K13_Killer_C.K13_FX_Attack_In_MakeWeaponAppear
	// void K13_FX_Attack_In_MakeWeaponAppear();                                                                             // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K13/BPI_K13_Killer.BPI_K13_Killer_C.K13_FX_MakeSwordNotVisible
	// void K13_FX_MakeSwordNotVisible();                                                                                    // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K13/BPI_K13_Killer.BPI_K13_Killer_C.K13_FX_MakeSwordVisible
	// void K13_FX_MakeSwordVisible();                                                                                       // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K13/BPI_K13_Killer.BPI_K13_Killer_C.ResetChargeVFX
	// void ResetChargeVFX();                                                                                                // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K13/BPI_K13_Killer.BPI_K13_Killer_C.TriggerActivePhaseChargeVFX
	// void TriggerActivePhaseChargeVFX(float chargeTime);                                                                   // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Effects/Blueprints/Killer13/BP_VFX_Slasher_13_AnimNotifies_Handler.BP_VFX_Slasher_13_AnimNotifies_Handler_C
/// Size: 0x0008 (0x000030 - 0x000038)
class UBP_VFX_Slasher_13_AnimNotifies_Handler_C : public UAnimEffectHandler
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0030   (0x0008)  


	/// Functions
	// Function /Game/Effects/Blueprints/Killer13/BP_VFX_Slasher_13_AnimNotifies_Handler.BP_VFX_Slasher_13_AnimNotifies_Handler_C.K13_FX_Mori_SpawnPoseableMesh
	// void K13_FX_Mori_SpawnPoseableMesh(bool First Time to Mori);                                                          // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Killer13/BP_VFX_Slasher_13_AnimNotifies_Handler.BP_VFX_Slasher_13_AnimNotifies_Handler_C.HandleAnimNotify
	// bool HandleAnimNotify(class AActor* Player, FName& NotifyName);                                                       // [0x61d2f50] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Effects/Blueprints/Killer13/BP_VFX_Slasher_13_AnimNotifies_Handler.BP_VFX_Slasher_13_AnimNotifies_Handler_C.TriggerActivePhaseChargeVFX
	// void TriggerActivePhaseChargeVFX(float chargeTime);                                                                   // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Killer13/BP_VFX_Slasher_13_AnimNotifies_Handler.BP_VFX_Slasher_13_AnimNotifies_Handler_C.ResetChargeVFX
	// void ResetChargeVFX();                                                                                                // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Killer13/BP_VFX_Slasher_13_AnimNotifies_Handler.BP_VFX_Slasher_13_AnimNotifies_Handler_C.K13_FX_MakeSwordVisible
	// void K13_FX_MakeSwordVisible();                                                                                       // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Killer13/BP_VFX_Slasher_13_AnimNotifies_Handler.BP_VFX_Slasher_13_AnimNotifies_Handler_C.K13_FX_MakeSwordNotVisible
	// void K13_FX_MakeSwordNotVisible();                                                                                    // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Killer13/BP_VFX_Slasher_13_AnimNotifies_Handler.BP_VFX_Slasher_13_AnimNotifies_Handler_C.K13_FX_Attack_In_MakeWeaponAppear
	// void K13_FX_Attack_In_MakeWeaponAppear();                                                                             // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Killer13/BP_VFX_Slasher_13_AnimNotifies_Handler.BP_VFX_Slasher_13_AnimNotifies_Handler_C.K13_FX_Attack_In_MakeWeaponAppear_FPV
	// void K13_FX_Attack_In_MakeWeaponAppear_FPV();                                                                         // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Killer13/BP_VFX_Slasher_13_AnimNotifies_Handler.BP_VFX_Slasher_13_AnimNotifies_Handler_C.K13_FX_MakeSwordNotVisible_Attack_Miss
	// void K13_FX_MakeSwordNotVisible_Attack_Miss();                                                                        // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Killer13/BP_VFX_Slasher_13_AnimNotifies_Handler.BP_VFX_Slasher_13_AnimNotifies_Handler_C.K13_FX_MakeSwordNotVisible_Attack_Wipe
	// void K13_FX_MakeSwordNotVisible_Attack_Wipe();                                                                        // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Killer13/BP_VFX_Slasher_13_AnimNotifies_Handler.BP_VFX_Slasher_13_AnimNotifies_Handler_C.K13_FX_MakeSwordNotVisible_Attack_Miss_FPV
	// void K13_FX_MakeSwordNotVisible_Attack_Miss_FPV();                                                                    // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Killer13/BP_VFX_Slasher_13_AnimNotifies_Handler.BP_VFX_Slasher_13_AnimNotifies_Handler_C.K13_FX_MakeSwordNotVisible_Attack_Wipe_FPV
	// void K13_FX_MakeSwordNotVisible_Attack_Wipe_FPV();                                                                    // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Killer13/BP_VFX_Slasher_13_AnimNotifies_Handler.BP_VFX_Slasher_13_AnimNotifies_Handler_C.K13_FX_CarryAttack_BOW
	// void K13_FX_CarryAttack_BOW();                                                                                        // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Killer13/BP_VFX_Slasher_13_AnimNotifies_Handler.BP_VFX_Slasher_13_AnimNotifies_Handler_C.K13_FX_CarryAttack_WeaponDisappear
	// void K13_FX_CarryAttack_WeaponDisappear();                                                                            // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Killer13/BP_VFX_Slasher_13_AnimNotifies_Handler.BP_VFX_Slasher_13_AnimNotifies_Handler_C.K13_FX_Vault_SpawnPoseableMesh
	// void K13_FX_Vault_SpawnPoseableMesh();                                                                                // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Killer13/BP_VFX_Slasher_13_AnimNotifies_Handler.BP_VFX_Slasher_13_AnimNotifies_Handler_C.K13_FX_Mori_ResetVariable
	// void K13_FX_Mori_ResetVariable();                                                                                     // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Killer13/BP_VFX_Slasher_13_AnimNotifies_Handler.BP_VFX_Slasher_13_AnimNotifies_Handler_C.ExecuteUbergraph_BP_VFX_Slasher_13_AnimNotifies_Handler
	// void ExecuteUbergraph_BP_VFX_Slasher_13_AnimNotifies_Handler(int32_t EntryPoint);                                     // [0x61d2f50] Final                
};

/// Class /Game/Effects/Blueprints/Interface/K13/BPI_Effect_K13_Menu.BPI_Effect_K13_Menu_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UBPI_Effect_K13_Menu_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/Effects/Blueprints/Interface/K13/BPI_Effect_K13_Menu.BPI_Effect_K13_Menu_C.K13_FX_ModifyFace
	// void K13_FX_ModifyFace(float SadFaceCurveValue, float MadFaceCurveValue);                                             // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K13/BPI_Effect_K13_Menu.BPI_Effect_K13_Menu_C.K13_FX_MakeSwordInvisible
	// void K13_FX_MakeSwordInvisible();                                                                                     // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K13/BPI_Effect_K13_Menu.BPI_Effect_K13_Menu_C.K13_FX_MakeSwordVisible
	// void K13_FX_MakeSwordVisible();                                                                                       // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K13/BPI_Effect_K13_Menu.BPI_Effect_K13_Menu_C.K13_FX_MakeSwordDisappear
	// void K13_FX_MakeSwordDisappear();                                                                                     // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K13/BPI_Effect_K13_Menu.BPI_Effect_K13_Menu_C.K13_FX_MakeSwordAppear
	// void K13_FX_MakeSwordAppear();                                                                                        // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Effects/Blueprints/Killer27/Menu/BP_k27_MenuIdleInterrupt_02.BP_k27_MenuIdleInterrupt_02_C
/// Size: 0x0030 (0x000230 - 0x000260)
class ABP_k27_MenuIdleInterrupt_02_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0230   (0x0008)  
	class UPostProcessComponent*                       Actor_PostProcess_K27_Interrupt_02;                         // 0x0238   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0240   (0x0008)  
	float                                              TML_PP_IdleInterrupt_02_Int_Vignette_A015685E4996C78ADD577788FC36D84F; // 0x0248   (0x0004)  
	SDK_UNDEFINED(1,4195) /* TEnumAsByte<ETimelineDirection> */ __um(TML_PP_IdleInterrupt_02__Direction_A015685E4996C78ADD577788FC36D84F); // 0x024C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x024D   (0x0003)  MISSED
	class UTimelineComponent*                          TML_PP_IdleInterrupt_02;                                    // 0x0250   (0x0008)  
	class UMaterialInstanceDynamic*                    PP_InterruptIdle_02;                                        // 0x0258   (0x0008)  


	/// Functions
	// Function /Game/Effects/Blueprints/Killer27/Menu/BP_k27_MenuIdleInterrupt_02.BP_k27_MenuIdleInterrupt_02_C.TML_PP_IdleInterrupt_02__FinishedFunc
	// void TML_PP_IdleInterrupt_02__FinishedFunc();                                                                         // [0x61d2f50] BlueprintEvent       
	// Function /Game/Effects/Blueprints/Killer27/Menu/BP_k27_MenuIdleInterrupt_02.BP_k27_MenuIdleInterrupt_02_C.TML_PP_IdleInterrupt_02__UpdateFunc
	// void TML_PP_IdleInterrupt_02__UpdateFunc();                                                                           // [0x61d2f50] BlueprintEvent       
	// Function /Game/Effects/Blueprints/Killer27/Menu/BP_k27_MenuIdleInterrupt_02.BP_k27_MenuIdleInterrupt_02_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Killer27/Menu/BP_k27_MenuIdleInterrupt_02.BP_k27_MenuIdleInterrupt_02_C.Destroy_PP_IdleInterrupt_02
	// void Destroy_PP_IdleInterrupt_02();                                                                                   // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Killer27/Menu/BP_k27_MenuIdleInterrupt_02.BP_k27_MenuIdleInterrupt_02_C.ExecuteUbergraph_BP_k27_MenuIdleInterrupt_02
	// void ExecuteUbergraph_BP_k27_MenuIdleInterrupt_02(int32_t EntryPoint);                                                // [0x61d2f50] Final|HasDefaults    
};

/// Class /Game/Effects/Blueprints/Killer27/Menu/BP_k27_IdleInterrupt_01.BP_k27_IdleInterrupt_01_C
/// Size: 0x0598 (0x000230 - 0x0007C8)
class ABP_k27_IdleInterrupt_01_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0230   (0x0008)  
	class UPostProcessComponent*                       Actor_PostProcess_K27_Interrupt_01;                         // 0x0238   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0240   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0248   (0x0008)  MISSED
	FPostProcessSettings                               NewVar;                                                     // 0x0250   (0x0560)  
	class UMaterialInstanceDynamic*                    PP_InterruptIdle_01;                                        // 0x07B0   (0x0008)  
	TArray<float>                                      RandomArray;                                                // 0x07B8   (0x0010)  


	/// Functions
	// Function /Game/Effects/Blueprints/Killer27/Menu/BP_k27_IdleInterrupt_01.BP_k27_IdleInterrupt_01_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x61d2f50] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Killer27/Menu/BP_k27_IdleInterrupt_01.BP_k27_IdleInterrupt_01_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Killer27/Menu/BP_k27_IdleInterrupt_01.BP_k27_IdleInterrupt_01_C.ExecuteUbergraph_BP_k27_IdleInterrupt_01
	// void ExecuteUbergraph_BP_k27_IdleInterrupt_01(int32_t EntryPoint);                                                    // [0x61d2f50] Final                
};

/// Class /Game/Effects/Blueprints/Interface/K27/BPI_Effect_K27.BPI_Effect_K27_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UBPI_Effect_K27_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/Effects/Blueprints/Interface/K27/BPI_Effect_K27.BPI_Effect_K27_C.FX_K27_HideTape
	// void FX_K27_HideTape();                                                                                               // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K27/BPI_Effect_K27.BPI_Effect_K27_C.FX_K27_ShowTape
	// void FX_K27_ShowTape();                                                                                               // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K27/BPI_Effect_K27.BPI_Effect_K27_C.FX_FadeCondemnedStatus
	// void FX_FadeCondemnedStatus();                                                                                        // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K27/BPI_Effect_K27.BPI_Effect_K27_C.FX_K27_SpawnMiniMoriVignette
	// void FX_K27_SpawnMiniMoriVignette();                                                                                  // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Effects/Blueprints/Killer01/BP_VFX_Slasher_01_AnimNotifies_Handler.BP_VFX_Slasher_01_AnimNotifies_Handler_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UBP_VFX_Slasher_01_AnimNotifies_Handler_C : public UAnimEffectHandler
{ 
public:


	/// Functions
	// Function /Game/Effects/Blueprints/Killer01/BP_VFX_Slasher_01_AnimNotifies_Handler.BP_VFX_Slasher_01_AnimNotifies_Handler_C.HandleAnimNotify
	// bool HandleAnimNotify(class AActor* Player, FName& NotifyName);                                                       // [0x61d2f50] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Effects/Blueprints/Gameplay/EndGameScenario/EndGame_CameraShake_End_Camper.EndGame_CameraShake_End_Camper_C
/// Size: 0x0000 (0x0001B0 - 0x0001B0)
class UEndGame_CameraShake_End_Camper_C : public UMatineeCameraShake
{ 
public:
};

/// Class /Game/Effects/Blueprints/Gameplay/EndGameScenario/EndGame_CameraShake_End.EndGame_CameraShake_End_C
/// Size: 0x0000 (0x0001B0 - 0x0001B0)
class UEndGame_CameraShake_End_C : public UMatineeCameraShake
{ 
public:
};

/// Class /Game/Effects/Blueprints/Gameplay/EndGameScenario/EndGame_CameraShake_Camper.EndGame_CameraShake_Camper_C
/// Size: 0x0000 (0x0001B0 - 0x0001B0)
class UEndGame_CameraShake_Camper_C : public UMatineeCameraShake
{ 
public:
};

/// Class /Game/Effects/Blueprints/Gameplay/EndGameScenario/EndGame_CameraShake.EndGame_CameraShake_C
/// Size: 0x0000 (0x0001B0 - 0x0001B0)
class UEndGame_CameraShake_C : public UMatineeCameraShake
{ 
public:
};

/// Class /Game/Effects/Blueprints/Interface/K27/BPI_K27.BPI_K27_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UBPI_K27_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/Effects/Blueprints/Interface/K27/BPI_K27.BPI_K27_C.Pause And Reset Flicker
	// void Pause And Reset Flicker(bool isFlickerPaused);                                                                   // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Effects/Blueprints/Interface/K27/BPI_Effect_Onryo.BPI_Effect_Onryo_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UBPI_Effect_Onryo_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/Effects/Blueprints/Interface/K27/BPI_Effect_Onryo.BPI_Effect_Onryo_C.FX_K27_InteractionStart_Vignette
	// void FX_K27_InteractionStart_Vignette();                                                                              // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K27/BPI_Effect_Onryo.BPI_Effect_Onryo_C.CosmeticOnUnmanifestChargeChanged
	// void CosmeticOnUnmanifestChargeChanged(float Charge Percent);                                                         // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K27/BPI_Effect_Onryo.BPI_Effect_Onryo_C.CosmeticOnManifestChargeChanged
	// void CosmeticOnManifestChargeChanged(float Charge Percent);                                                           // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Effects/Blueprints/Libraries/VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UVFX_FunctionLib_Blood_C : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Game/Effects/Blueprints/Libraries/VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.GetDecalTransform
	// FTransform GetDecalTransform(class USceneComponent* Mesh, class UObject* __WorldContext);                             // [0x61d2f50] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Effects/Blueprints/Libraries/VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.SpawnBleedEffect
	// void SpawnBleedEffect(class USceneComponent* Mesh, class UObject* __WorldContext, class UParticleSystemComponent*& ParticleSystem); // [0x61d2f50] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Libraries/VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.SpawnBloodSpurtsParticles
	// class UNiagaraComponent* SpawnBloodSpurtsParticles(class USceneComponent* Mesh, class UObject* __WorldContext);       // [0x61d2f50] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Libraries/VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.GetSlasherBloodOpacityPlayrate
	// float GetSlasherBloodOpacityPlayrate(class UObject* __WorldContext);                                                  // [0x61d2f50] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Effects/Blueprints/Libraries/VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.GetBloodFramePlayRate
	// float GetBloodFramePlayRate(class UObject* __WorldContext);                                                           // [0x61d2f50] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Effects/Blueprints/Libraries/VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.CreatePP_BloodMaterial
	// void CreatePP_BloodMaterial(class UObject* __WorldContext, class UMaterialInstanceDynamic*& PostProcessMaterialInstance); // [0x61d2f50] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Libraries/VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.ManagePostProcessParameters
	// void ManagePostProcessParameters(bool Add/Remove, class UCameraComponent* Camera, class UObject* PostProcessMaterial, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Libraries/VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.RandomizeBloodPostProcess
	// void RandomizeBloodPostProcess(class UMaterialInstanceDynamic* MaterialInstance, class ADBDPlayer* DBDPlayer, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Libraries/VFX_FunctionLib_Blood.VFX_FunctionLib_Blood_C.RandomizeBloodLayer
	// void RandomizeBloodLayer(class UMaterialInstanceDynamic* MaterialInstance, FName OffsetX_MaterialParameter, FName OffsetY_MaterialParameter, FName Texture_MaterialParameter, FName Scale_Parameter, int32_t Dimension 1, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Effects/Blueprints/Killer27/Power/BP_Effect_K27_AfterImage_01.BP_Effect_K27_AfterImage_01_C
/// Size: 0x0020 (0x000268 - 0x000288)
class ABP_Effect_K27_AfterImage_01_C : public APoseableHusk
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0268   (0x0008)  
	float                                              Fade_Fade_5487A9754B5AE15B4E9D0F8644A2CE40;                 // 0x0270   (0x0004)  
	SDK_UNDEFINED(1,4196) /* TEnumAsByte<ETimelineDirection> */ __um(Fade__Direction_5487A9754B5AE15B4E9D0F8644A2CE40); // 0x0274   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0275   (0x0003)  MISSED
	class UTimelineComponent*                          fade;                                                       // 0x0278   (0x0008)  
	float                                              opacityValue;                                               // 0x0280   (0x0004)  
	float                                              Speed;                                                      // 0x0284   (0x0004)  


	/// Functions
	// Function /Game/Effects/Blueprints/Killer27/Power/BP_Effect_K27_AfterImage_01.BP_Effect_K27_AfterImage_01_C.Fade__FinishedFunc
	// void Fade__FinishedFunc();                                                                                            // [0x61d2f50] BlueprintEvent       
	// Function /Game/Effects/Blueprints/Killer27/Power/BP_Effect_K27_AfterImage_01.BP_Effect_K27_AfterImage_01_C.Fade__UpdateFunc
	// void Fade__UpdateFunc();                                                                                              // [0x61d2f50] BlueprintEvent       
	// Function /Game/Effects/Blueprints/Killer27/Power/BP_Effect_K27_AfterImage_01.BP_Effect_K27_AfterImage_01_C.Fade__RemoveVFX__EventFunc
	// void Fade__RemoveVFX__EventFunc();                                                                                    // [0x61d2f50] BlueprintEvent       
	// Function /Game/Effects/Blueprints/Killer27/Power/BP_Effect_K27_AfterImage_01.BP_Effect_K27_AfterImage_01_C.Cosmetic_OnAnimationPoseCaptured
	// void Cosmetic_OnAnimationPoseCaptured();                                                                              // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Killer27/Power/BP_Effect_K27_AfterImage_01.BP_Effect_K27_AfterImage_01_C.HideHusk
	// void HideHusk();                                                                                                      // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Killer27/Power/BP_Effect_K27_AfterImage_01.BP_Effect_K27_AfterImage_01_C.Cosmetic_InitializeSkeletalMesh
	// void Cosmetic_InitializeSkeletalMesh(class USkeletalMeshComponent* Mesh);                                             // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Killer27/Power/BP_Effect_K27_AfterImage_01.BP_Effect_K27_AfterImage_01_C.ExecuteUbergraph_BP_Effect_K27_AfterImage_01
	// void ExecuteUbergraph_BP_Effect_K27_AfterImage_01(int32_t EntryPoint);                                                // [0x61d2f50] Final                
};

/// Class /Game/Effects/Blueprints/BP_VFX_Killer_AnimNotifies_Handler.BP_VFX_Killer_AnimNotifies_Handler_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UBP_VFX_Killer_AnimNotifies_Handler_C : public UAnimEffectHandler
{ 
public:


	/// Functions
	// Function /Game/Effects/Blueprints/BP_VFX_Killer_AnimNotifies_Handler.BP_VFX_Killer_AnimNotifies_Handler_C.HandleAnimNotify
	// bool HandleAnimNotify(class AActor* Player, FName& NotifyName);                                                       // [0x61d2f50] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Effects/Blueprints/NotifyState/General/BP_NS_SetMesh_InvisibleToVisible.BP_NS_SetMesh_InvisibleToVisible_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UBP_NS_SetMesh_InvisibleToVisible_C : public UAnimNotifyState
{ 
public:


	/// Functions
	// Function /Game/Effects/Blueprints/NotifyState/General/BP_NS_SetMesh_InvisibleToVisible.BP_NS_SetMesh_InvisibleToVisible_C.Received_NotifyEnd
	// bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);                  // [0x61d2f50] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Effects/Blueprints/NotifyState/General/BP_NS_SetMesh_InvisibleToVisible.BP_NS_SetMesh_InvisibleToVisible_C.Received_NotifyBegin
	// bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration); // [0x61d2f50] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Effects/Blueprints/Interface/K28/BPI_Effect_K28_Slasher.BPI_Effect_K28_Slasher_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UBPI_Effect_K28_Slasher_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/Effects/Blueprints/Interface/K28/BPI_Effect_K28_Slasher.BPI_Effect_K28_Slasher_C.FX_K28_HideKiller
	// void FX_K28_HideKiller();                                                                                             // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K28/BPI_Effect_K28_Slasher.BPI_Effect_K28_Slasher_C.FX_K28_ShowKiller
	// void FX_K28_ShowKiller();                                                                                             // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K28/BPI_Effect_K28_Slasher.BPI_Effect_K28_Slasher_C.FX_K28_ExitingLocker
	// void FX_K28_ExitingLocker();                                                                                          // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K28/BPI_Effect_K28_Slasher.BPI_Effect_K28_Slasher_C.FX_K28_NightEnds
	// void FX_K28_NightEnds();                                                                                              // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Interface/K28/BPI_Effect_K28_Slasher.BPI_Effect_K28_Slasher_C.FX_K28_NightBegins
	// void FX_K28_NightBegins();                                                                                            // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Effects/Blueprints/Killer16/BP_VFX_Slasher_16_AnimNotifies_Handler.BP_VFX_Slasher_16_AnimNotifies_Handler_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UBP_VFX_Slasher_16_AnimNotifies_Handler_C : public UAnimEffectHandler
{ 
public:


	/// Functions
	// Function /Game/Effects/Blueprints/Killer16/BP_VFX_Slasher_16_AnimNotifies_Handler.BP_VFX_Slasher_16_AnimNotifies_Handler_C.HandleAnimNotify
	// bool HandleAnimNotify(class AActor* Player, FName& NotifyName);                                                       // [0x61d2f50] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Effects/Blueprints/Libraries/VFX_FunctionLib_Weapons.VFX_FunctionLib_Weapons_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UVFX_FunctionLib_Weapons_C : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Game/Effects/Blueprints/Libraries/VFX_FunctionLib_Weapons.VFX_FunctionLib_Weapons_C.FX_SpawnDissolveEmitter
	// void FX_SpawnDissolveEmitter(bool HideWeapon, bool FPV, class USceneComponent* Mesh, class UObject* __WorldContext);  // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Effects/Blueprints/Killer04/BP_VFX_Slasher_04_AnimNotifies_Handler.BP_VFX_Slasher_04_AnimNotifies_Handler_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UBP_VFX_Slasher_04_AnimNotifies_Handler_C : public UAnimEffectHandler
{ 
public:


	/// Functions
	// Function /Game/Effects/Blueprints/Killer04/BP_VFX_Slasher_04_AnimNotifies_Handler.BP_VFX_Slasher_04_AnimNotifies_Handler_C.HandleAnimNotify
	// bool HandleAnimNotify(class AActor* Player, FName& NotifyName);                                                       // [0x61d2f50] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Effects/Blueprints/Environment/Wormhole/BPI_AnimNotify_Quesita.BPI_AnimNotify_Quesita_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UBPI_AnimNotify_Quesita_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/Effects/Blueprints/Environment/Wormhole/BPI_AnimNotify_Quesita.BPI_AnimNotify_Quesita_C.AnimNotify_Quesita_MenuDissolve_Out
	// void AnimNotify_Quesita_MenuDissolve_Out();                                                                           // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Blueprints/Environment/Wormhole/BPI_AnimNotify_Quesita.BPI_AnimNotify_Quesita_C.AnimNotify_Quesita_MenuDissolve_In
	// void AnimNotify_Quesita_MenuDissolve_In();                                                                            // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
};

