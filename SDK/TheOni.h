
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimationUtilities
/// dependency: Competence
/// dependency: CoreUObject
/// dependency: DBDAnimation
/// dependency: DBDAttack
/// dependency: DBDBots
/// dependency: DBDCompetence
/// dependency: DBDGameplay
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags

/// Enum /Script/TheOni.EBloodOrbState
/// Size: 0x08
enum class EBloodOrbState : uint8_t
{
	EBloodOrbState__Invalid                                                          = 0,
	EBloodOrbState__BeingDropped                                                     = 1,
	EBloodOrbState__Idle                                                             = 2,
	EBloodOrbState__WaitingToMove                                                    = 3,
	EBloodOrbState__Attracted                                                        = 4,
	EBloodOrbState__Absorbed                                                         = 5,
	EBloodOrbState__Destroyed                                                        = 6,
	EBloodOrbState__EBloodOrbState_MAX                                               = 7
};

/// Enum /Script/TheOni.EBloodOrbVisibilityMode
/// Size: 0x03
enum class EBloodOrbVisibilityMode : uint8_t
{
	EBloodOrbVisibilityMode__VisibleWithinRange                                      = 0,
	EBloodOrbVisibilityMode__HideAll                                                 = 1,
	EBloodOrbVisibilityMode__EBloodOrbVisibilityMode_MAX                             = 2
};

/// Enum /Script/TheOni.EDemonModeState
/// Size: 0x06
enum class EDemonModeState : uint8_t
{
	EDemonModeState__Invalid                                                         = 0,
	EDemonModeState__NotInPower                                                      = 1,
	EDemonModeState__Activation                                                      = 2,
	EDemonModeState__InPower                                                         = 3,
	EDemonModeState__Cooldown                                                        = 4,
	EDemonModeState__EDemonModeState_MAX                                             = 5
};

/// Class /Script/TheOni.AbsorbBloodOrbsInteraction
/// Size: 0x0040 (0x000650 - 0x000690)
class UAbsorbBloodOrbsInteraction : public UInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0650   (0x0040)  MISSED


	/// Functions
	// Function /Script/TheOni.AbsorbBloodOrbsInteraction.SetPlayerOwner
	// void SetPlayerOwner(class ADBDPlayer* Player);                                                                        // [0x5dc5ba0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/TheOni.AISkill_FindOrb
/// Size: 0x0008 (0x000180 - 0x000188)
class UAISkill_FindOrb : public UAISkill_Find
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0180   (0x0008)  MISSED
};

/// Class /Script/TheOni.AISkill_Interaction_OrbAbsorb
/// Size: 0x0000 (0x000190 - 0x000190)
class UAISkill_Interaction_OrbAbsorb : public UAISkill_Interaction
{ 
public:
};

/// Class /Script/TheOni.AISkill_InteractionTarget_DashOni
/// Size: 0x0000 (0x000240 - 0x000240)
class UAISkill_InteractionTarget_DashOni : public UAISkill_InteractionTarget_Dash
{ 
public:
};

/// Class /Script/TheOni.AISkill_InteractionTarget_DemonMode
/// Size: 0x0000 (0x000240 - 0x000240)
class UAISkill_InteractionTarget_DemonMode : public UAISkill_InteractionTarget
{ 
public:
};

/// Class /Script/TheOni.BloodOrb
/// Size: 0x0060 (0x000230 - 0x000290)
class ABloodOrb : public AActor
{ 
public:
	FFloatInterval                                     _randomMoveDelayInterval;                                   // 0x0230   (0x0008)  
	class USceneComponent*                             _absorbReference;                                           // 0x0238   (0x0008)  
	class UDBDOutlineComponent*                        _outlineComponent;                                          // 0x0240   (0x0008)  
	float                                              _despawnDelay;                                              // 0x0248   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x024C   (0x0004)  MISSED
	SDK_UNDEFINED(8,4233) /* TWeakObjectPtr<ADBDPlayer*> */ __um(_droppingPlayer);                                 // 0x0250   (0x0008)  
	EBloodOrbState                                     _state;                                                     // 0x0258   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0259   (0x0007)  MISSED
	class UBloodOrbFadeComponent*                      _fadeComponent;                                             // 0x0260   (0x0008)  
	unsigned char                                      UnknownData02_6[0x28];                                      // 0x0268   (0x0028)  MISSED


	/// Functions
	// Function /Script/TheOni.BloodOrb.UpdateAttracted_Cosmetic
	// void UpdateAttracted_Cosmetic(FVector Destination, class ADBDPlayer* absorber, float DeltaTime);                      // [0x61d2f50] BlueprintCosmetic|Event|Protected|HasDefaults|BlueprintEvent 
	// Function /Script/TheOni.BloodOrb.UpdateAbsorbed_Cosmetic
	// void UpdateAbsorbed_Cosmetic(FVector Destination, class ADBDPlayer* absorber, float DeltaTime);                       // [0x61d2f50] BlueprintCosmetic|Event|Protected|HasDefaults|BlueprintEvent 
	// Function /Script/TheOni.BloodOrb.OnRep_State
	// void OnRep_State(EBloodOrbState oldState);                                                                            // [0x5dc5a90] Final|Native|Private 
	// Function /Script/TheOni.BloodOrb.OnIsAttractedChangedCosmetic
	// void OnIsAttractedChangedCosmetic(bool isAttracted);                                                                  // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheOni.BloodOrb.OnDestroyedCosmetic
	// void OnDestroyedCosmetic();                                                                                           // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheOni.BloodOrb.OnAbsorbedCosmetic
	// void OnAbsorbedCosmetic();                                                                                            // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheOni.BloodOrb.GetDroppingPlayer
	// class ADBDPlayer* GetDroppingPlayer();                                                                                // [0x5dc5560] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheOni.BloodOrb.Authority_OnDropped
	// void Authority_OnDropped(class ADBDPlayer* droppedBy, float ImpulseFactor);                                           // [0x61d2f50] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Script/TheOni.BloodOrb.Authority_OnDropFinished
	// void Authority_OnDropFinished();                                                                                      // [0x5dc4f50] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/TheOni.BloodOrb.Authority_DestroyBloodOrb
	// void Authority_DestroyBloodOrb();                                                                                     // [0x5dc45a0] Final|Native|Private 
	// Function /Script/TheOni.BloodOrb.Authority_Despawn
	// void Authority_Despawn();                                                                                             // [0x5dc4580] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/TheOni.BloodOrbAbsorberComponent
/// Size: 0x0058 (0x0000B8 - 0x000110)
class UBloodOrbAbsorberComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,4234) /* FMulticastInlineDelegate */ __um(Authority_OnBloodOrbAbsorbed);                      // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,4235) /* FMulticastInlineDelegate */ __um(OnIsAbsorbingChanged);                              // 0x00C8   (0x0010)  
	FVector                                            AbsorbLocationOffset;                                       // 0x00D8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x1C];                                      // 0x00E4   (0x001C)  MISSED
	TArray<class UBloodOrbDropperComponent*>           _camperBloodOrbDropperComponents;                           // 0x0100   (0x0010)  


	/// Functions
	// Function /Script/TheOni.BloodOrbAbsorberComponent.SetInAbsorbMode
	// void SetInAbsorbMode(bool inAbsorptionMode);                                                                          // [0x5dc5b10] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheOni.BloodOrbAbsorberComponent.IsInAbsorbMode
	// bool IsInAbsorbMode();                                                                                                // [0x5dc55d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheOni.BloodOrbCollection
/// Size: 0x0048 (0x0000B8 - 0x000100)
class UBloodOrbCollection : public UActorComponent
{ 
public:
	TArray<class ABloodOrb*>                           _bloodOrbs;                                                 // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x00C8   (0x0038)  MISSED
};

/// Struct /Script/TheOni.GameEventBloodOrbDropParams
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGameEventBloodOrbDropParams
{ 
	FGameplayTag                                       GameEvent;                                                  // 0x0000   (0x000C)  
	float                                              ImpulseFactor;                                              // 0x000C   (0x0004)  
};

/// Class /Script/TheOni.BloodOrbConfiguratorComponent
/// Size: 0x0070 (0x0000B8 - 0x000128)
class UBloodOrbConfiguratorComponent : public UActorComponent
{ 
public:
	class UClass*                                      _bloodOrbClass;                                             // 0x00B8   (0x0008)  
	TArray<FGameEventBloodOrbDropParams>               _bloodOrbDropGameEvents;                                    // 0x00C0   (0x0010)  
	float                                              _fadeDuration;                                              // 0x00D0   (0x0004)  
	float                                              _initialFadeOutDelay;                                       // 0x00D4   (0x0004)  
	FLinearColor                                       _bloodOrbAuraColor;                                         // 0x00D8   (0x0010)  
	FLinearColor                                       _bloodOrbAttractedAuraColor;                                // 0x00E8   (0x0010)  
	float                                              _bloodOrbVisibilityRangeInterpolationSpeed;                 // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00FC   (0x0004)  MISSED
	class UClass*                                      _mobileBloodOrbRendererClass;                               // 0x0100   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0108   (0x0020)  MISSED


	/// Functions
	// Function /Script/TheOni.BloodOrbConfiguratorComponent.UpdateSurvivorBloodOrbVisibilityRange
	// void UpdateSurvivorBloodOrbVisibilityRange(class UBloodOrbVisibilityComponent* BloodOrbVisibilityComponent, class ADBDPlayer* killer); // [0x5dc5fa0] Final|Native|Private|Const 
	// Function /Script/TheOni.BloodOrbConfiguratorComponent.UpdateKillerBloodOrbVisiblityRanges
	// void UpdateKillerBloodOrbVisiblityRanges(class UBloodOrbVisibilityComponent* BloodOrbVisibilityComponent, class ADBDPlayer* killer); // [0x5dc5ed0] Final|Native|Private|Const 
	// Function /Script/TheOni.BloodOrbConfiguratorComponent.UpdateBloodOrbAttractSpeed
	// void UpdateBloodOrbAttractSpeed(class UBloodOrbAbsorberComponent* BloodOrbAbsorberComponent, class ADBDPlayer* killer); // [0x5dc5e00] Final|Native|Private|Const 
	// Function /Script/TheOni.BloodOrbConfiguratorComponent.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5dc59a0] Final|Native|Private 
	// Function /Script/TheOni.BloodOrbConfiguratorComponent.Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier
	// void Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier(class ADBDPlayer* killer);                               // [0x5dc52f0] Final|Native|Private|Const 
};

/// Class /Script/TheOni.BloodOrbDropperComponent
/// Size: 0x0080 (0x0000B8 - 0x000138)
class UBloodOrbDropperComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x80];                                      // 0x00B8   (0x0080)  MISSED


	/// Functions
	// Function /Script/TheOni.BloodOrbDropperComponent.DBD_DropBloodOrbs
	// void DBD_DropBloodOrbs(int32_t numOrbs);                                                                              // [0x4dd9ef0] Final|Exec|Native|Private|Const 
	// Function /Script/TheOni.BloodOrbDropperComponent.Authority_SetPaused
	// void Authority_SetPaused(bool paused);                                                                                // [0x5dc5260] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/TheOni.BloodOrbDropperComponent.Authority_OnOwningCamperDamageStateChanged
	// void Authority_OnOwningCamperDamageStateChanged(ECamperDamageState oldState, ECamperDamageState NewState);            // [0x5dc5100] Final|Native|Private 
	// Function /Script/TheOni.BloodOrbDropperComponent.Authority_OnDropOrbsGameEvent
	// void Authority_OnDropOrbsGameEvent(FGameplayTag GameEvent, FGameEventData& GameEventData, FBloodOrbDropParams dropParams); // [0x5dc4f70] Final|Native|Private|HasOutParms|Const 
	// Function /Script/TheOni.BloodOrbDropperComponent.Authority_OnCamperUnhooked
	// void Authority_OnCamperUnhooked(FGameplayTag GameEvent, FGameEventData& GameEventData);                               // [0x5dc4d30] Final|Native|Private|HasOutParms 
	// Function /Script/TheOni.BloodOrbDropperComponent.Authority_OnCamperHooked
	// void Authority_OnCamperHooked(FGameplayTag GameEvent, FGameEventData& GameEventData);                                 // [0x5dc4c20] Final|Native|Private|HasOutParms|Const 
	// Function /Script/TheOni.BloodOrbDropperComponent.Authority_OnCamperCrouched
	// void Authority_OnCamperCrouched(FGameplayTag GameEvent, FGameEventData& GameEventData);                               // [0x5dc4b10] Final|Native|Private|HasOutParms 
};

/// Class /Script/TheOni.BloodOrbFadeComponent
/// Size: 0x0008 (0x0000D8 - 0x0000E0)
class UBloodOrbFadeComponent : public UFadeComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00D8   (0x0008)  MISSED
};

/// Class /Script/TheOni.BloodOrbOverlapComponent
/// Size: 0x0040 (0x0000B8 - 0x0000F8)
class UBloodOrbOverlapComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	int32_t                                            _currentOverlappingOrbs;                                    // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x34];                                      // 0x00C4   (0x0034)  MISSED


	/// Functions
	// Function /Script/TheOni.BloodOrbOverlapComponent.OnRep_CurrentOverlappingOrbs
	// void OnRep_CurrentOverlappingOrbs(int32_t previousOverlappingOrbs);                                                   // [0x5dc5a00] Final|Native|Private 
	// Function /Script/TheOni.BloodOrbOverlapComponent.Authority_OnDestroyedBloodOrb
	// void Authority_OnDestroyedBloodOrb(class AActor* DestroyedActor);                                                     // [0x5dc4ec0] Final|Native|Private 
	// Function /Script/TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbVisibilityModeChanged
	// void Authority_OnBloodOrbVisibilityModeChanged(EBloodOrbVisibilityMode visibilityMode);                               // [0x5dc4a90] Final|Native|Private 
	// Function /Script/TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbEndOverlap
	// void Authority_OnBloodOrbEndOverlap(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x5dc4930] Final|Native|Private 
	// Function /Script/TheOni.BloodOrbOverlapComponent.Authority_OnBloodOrbBeginOverlap
	// void Authority_OnBloodOrbBeginOverlap(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x5dc4710] Final|Native|Private|HasOutParms 
};

/// Class /Script/TheOni.BloodOrbOverlapRevealToKiller
/// Size: 0x0028 (0x000350 - 0x000378)
class UBloodOrbOverlapRevealToKiller : public UStatusEffect
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0350   (0x0028)  MISSED
};

/// Class /Script/TheOni.BloodOrbStateMonitorComponent
/// Size: 0x0070 (0x0000B8 - 0x000128)
class UBloodOrbStateMonitorComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,4236) /* FMulticastInlineDelegate */ __um(OnBloodOrbAbsorbedCosmetic);                        // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x00C8   (0x0060)  MISSED


	/// Functions
	// Function /Script/TheOni.BloodOrbStateMonitorComponent.OnBloodOrbStateChanged
	// void OnBloodOrbStateChanged(EBloodOrbState oldState, EBloodOrbState NewState, class ABloodOrb* BloodOrb);             // [0x5dc57e0] Final|Native|Private|Const 
	// Function /Script/TheOni.BloodOrbStateMonitorComponent.OnBloodOrbSpawned
	// void OnBloodOrbSpawned(class ABloodOrb* BloodOrb);                                                                    // [0x5dc56c0] Final|Native|Private 
	// Function /Script/TheOni.BloodOrbStateMonitorComponent.OnBloodOrbDestroyed
	// void OnBloodOrbDestroyed(class ABloodOrb* BloodOrb);                                                                  // [0x5dc5630] Final|Native|Private 
};

/// Class /Script/TheOni.BloodOrbUtilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UBloodOrbUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/TheOni.BloodOrbUtilities.GetAllBloodOrbs
	// TArray<ABloodOrb*> GetAllBloodOrbs(class UObject* WorldContextObject);                                                // [0x5dc53b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/TheOni.BloodOrbVisibilityComponent
/// Size: 0x0038 (0x0000B8 - 0x0000F0)
class UBloodOrbVisibilityComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x00B8   (0x0038)  MISSED


	/// Functions
	// Function /Script/TheOni.BloodOrbVisibilityComponent.SetVisibilityRange
	// void SetVisibilityRange(float visibilityRange);                                                                       // [0x5060aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheOni.BloodOrbVisibilityComponent.SetVisibilityMode
	// void SetVisibilityMode(EBloodOrbVisibilityMode visibilityMode);                                                       // [0x5dc5cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheOni.BloodOrbVisibilityComponent.SetShowAttractedBloodOrbsAuras
	// void SetShowAttractedBloodOrbsAuras(bool Show);                                                                       // [0x5dc5c30] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheOni.BloodOrbVisibilityComponent.SetAuraVisibilityRange
	// void SetAuraVisibilityRange(float auraVisibilityRange);                                                               // [0x5060b20] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheOni.BloodOrbVisibilityComponent.OnBloodOrbSpawned
	// void OnBloodOrbSpawned(class ABloodOrb* BloodOrb);                                                                    // [0x5dc5750] Final|Native|Private|Const 
};

/// Class /Script/TheOni.DemonModeComponent
/// Size: 0x0150 (0x0000B8 - 0x000208)
class UDemonModeComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,4237) /* FMulticastInlineDelegate */ __um(OnDemonModeReady);                                  // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,4238) /* FMulticastInlineDelegate */ __um(OnDemonModeStarted);                                // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,4239) /* FMulticastInlineDelegate */ __um(OnDemonModeEnded);                                  // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,4240) /* FMulticastInlineDelegate */ __um(OnDemonModeInterruptedDuringStartup);               // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,4241) /* FMulticastInlineDelegate */ __um(OnDemonModeInterruptedDuringEnding);                // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,4242) /* FMulticastInlineDelegate */ __um(OnChargeGainedAfterAttackCosmetic);                 // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,4243) /* FMulticastInlineDelegate */ __um(OnChargeGainedAfterLockerGrabCosmetic);             // 0x0118   (0x0010)  
	class UPowerChargeComponent*                       _powerChargeComponent;                                      // 0x0128   (0x0008)  
	class UPowerToggleComponent*                       _powerToggleComponent;                                      // 0x0130   (0x0008)  
	class UInteractionStarterComponent*                _authority_demonModeCooldownStarterComponent;               // 0x0138   (0x0008)  
	class UInteractionDefinition*                      _demonModeCooldownInteraction;                              // 0x0140   (0x0008)  
	unsigned char                                      UnknownData00_5[0x34];                                      // 0x0148   (0x0034)  MISSED
	EDemonModeState                                    _demonModeState;                                            // 0x017C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5B];                                      // 0x017D   (0x005B)  MISSED
	TArray<class USkeletalMeshComponent*>              _normalModeCustomization;                                   // 0x01D8   (0x0010)  
	TArray<class USkeletalMeshComponent*>              _demonModeCustomization;                                    // 0x01E8   (0x0010)  
	TArray<class UParticleSystemComponent*>            _demonModeVfx;                                              // 0x01F8   (0x0010)  


	/// Functions
	// Function /Script/TheOni.DemonModeComponent.ShowDemonModeCustomization
	// void ShowDemonModeCustomization(bool showDemonMode);                                                                  // [0x5dc5d70] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheOni.DemonModeComponent.ShouldLoseDemonModeOnStun
	// bool ShouldLoseDemonModeOnStun();                                                                                     // [0x5dc5d40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheOni.DemonModeComponent.OnPowerChargeFull
	// void OnPowerChargeFull();                                                                                             // [0x5dc59e0] Final|Native|Private|Const 
	// Function /Script/TheOni.DemonModeComponent.OnPowerChargeEmpty
	// void OnPowerChargeEmpty();                                                                                            // [0x5dc59c0] Final|Native|Private|Const 
	// Function /Script/TheOni.DemonModeComponent.OnIsPowerChanged
	// void OnIsPowerChanged(bool IsInPower);                                                                                // [0x5dc5910] Final|Native|Private|Const 
	// Function /Script/TheOni.DemonModeComponent.OnCustomizationChanged
	// void OnCustomizationChanged();                                                                                        // [0x5dc58f0] Final|Native|Private 
	// Function /Script/TheOni.DemonModeComponent.Multicast_DemonModeInterruptedOnStartup
	// void Multicast_DemonModeInterruptedOnStartup();                                                                       // [0x4d82970] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheOni.DemonModeComponent.Multicast_DemonModeInterruptedOnEnding
	// void Multicast_DemonModeInterruptedOnEnding();                                                                        // [0x4dd4860] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheOni.DemonModeComponent.IsInDemonMode
	// bool IsInDemonMode();                                                                                                 // [0x5dc5600] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheOni.DemonModeComponent.GetNormalModeCustomization
	// TArray<USkeletalMeshComponent*> GetNormalModeCustomization();                                                         // [0x5dc5590] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheOni.DemonModeComponent.GetDemonModeState
	// EDemonModeState GetDemonModeState();                                                                                  // [0x5dc5530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheOni.DemonModeComponent.GetDemonModeCustomization
	// TArray<USkeletalMeshComponent*> GetDemonModeCustomization();                                                          // [0x5dc54f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheOni.DemonModeComponent.GetCurrentCharge
	// float GetCurrentCharge();                                                                                             // [0x5dc54c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheOni.DemonModeComponent.GetChargePercent
	// float GetChargePercent();                                                                                             // [0x5dc5490] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheOni.DemonModeComponent.DBD_DemonModeForever
	// void DBD_DemonModeForever(bool forever);                                                                              // [0x581c030] Final|Exec|Native|Public 
	// Function /Script/TheOni.DemonModeComponent.CanStartDemonMode
	// bool CanStartDemonMode();                                                                                             // [0x5dc5380] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheOni.DemonModeComponent.Authority_SetDemonModeCooldownInteraction
	// void Authority_SetDemonModeCooldownInteraction(class UInteractionDefinition* Interaction);                            // [0x5dc51d0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/TheOni.DemonModeComponent.Authority_OnLevelReadyToPlay
	// void Authority_OnLevelReadyToPlay();                                                                                  // [0x5dc50e0] Final|Native|Private 
	// Function /Script/TheOni.DemonModeComponent.Authority_OnChargeChanged
	// void Authority_OnChargeChanged(float currentChargePercent);                                                           // [0x5dc4e40] Final|Native|Private 
	// Function /Script/TheOni.DemonModeComponent.Authority_InterruptedMontage
	// void Authority_InterruptedMontage(FAnimationMontageDescriptor Montage, bool interrupted);                             // [0x5dc45c0] Final|Native|Private 
	// Function /Script/TheOni.DemonModeComponent.Authority_AddCharge
	// void Authority_AddCharge(float ChargeAmount);                                                                         // [0x5dc4500] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/TheOni.DemonModeCooldownInteraction
/// Size: 0x0020 (0x000650 - 0x000670)
class UDemonModeCooldownInteraction : public UInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0650   (0x0020)  MISSED


	/// Functions
	// Function /Script/TheOni.DemonModeCooldownInteraction.SetPlayerOwner
	// void SetPlayerOwner(class ADBDPlayer* Owner);                                                                         // [0x5dc8850] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheOni.DemonModeCooldownInteraction.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5dc86d0] Final|Native|Private 
};

/// Class /Script/TheOni.DemonModeMenuComponent
/// Size: 0x0020 (0x0000B8 - 0x0000D8)
class UDemonModeMenuComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x00B8   (0x0020)  MISSED


	/// Functions
	// Function /Script/TheOni.DemonModeMenuComponent.SetInMenuDemonMode
	// void SetInMenuDemonMode(bool inMenuDemonMode);                                                                        // [0x5dc8730] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/TheOni.IsPlayerAbsorbingBloodOrbsCondition
/// Size: 0x0000 (0x000130 - 0x000130)
class UIsPlayerAbsorbingBloodOrbsCondition : public UIsPlayerPerformingInteraction
{ 
public:
};

/// Class /Script/TheOni.K18AnimInstance
/// Size: 0x0030 (0x000610 - 0x000640)
class UK18AnimInstance : public UKillerAnimInstance
{ 
public:
	bool                                               _isAbsorbing;                                               // 0x0610   (0x0001)  
	bool                                               _isDemonMode;                                               // 0x0611   (0x0001)  
	bool                                               _isCharging;                                                // 0x0612   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0613   (0x0001)  MISSED
	float                                              _absorbCharge;                                              // 0x0614   (0x0004)  
	bool                                               _isDashing;                                                 // 0x0618   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0619   (0x0003)  MISSED
	float                                              _chargeDuration;                                            // 0x061C   (0x0004)  
	bool                                               _powerAttackOpen;                                           // 0x0620   (0x0001)  
	EOniAttackType                                     _attackType;                                                // 0x0621   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1E];                                      // 0x0622   (0x001E)  MISSED


	/// Functions
	// Function /Script/TheOni.K18AnimInstance.UpdatePowerAttackOpen
	// void UpdatePowerAttackOpen();                                                                                         // [0x5dc8a00] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/TheOni.MobileBloodOrbRenderer
/// Size: 0x0090 (0x000230 - 0x0002C0)
class AMobileBloodOrbRenderer : public AActor
{ 
public:
	class UMaterialInstance*                           OrbMaterialInstance;                                        // 0x0230   (0x0008)  
	class UMaterialInstance*                           OutlineMaterialInstance;                                    // 0x0238   (0x0008)  
	float                                              CullInterval;                                               // 0x0240   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0244   (0x0004)  MISSED
	class UInstancedStaticMeshComponent*               _ismComponent;                                              // 0x0248   (0x0008)  
	class UInstancedStaticMeshComponent*               _outlineIsmComponent;                                       // 0x0250   (0x0008)  
	SDK_UNDEFINED(80,4244) /* TMap<ABloodOrb*, FBloodOrbInfo> */ __um(_instanceMap);                               // 0x0258   (0x0050)  
	class UMaterialInstanceDynamic*                    _outlineMaterialInstanceDynamic;                            // 0x02A8   (0x0008)  
	class UMaterialInstanceDynamic*                    _orbMaterialInstanceDynamic;                                // 0x02B0   (0x0008)  
	class UBloodOrbVisibilityComponent*                _bloodOrbVisibilityComponent;                               // 0x02B8   (0x0008)  
};

/// Class /Script/TheOni.OniAttackPicker
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UOniAttackPicker : public USlasherAttackPickerComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00B8   (0x0018)  MISSED
};

/// Class /Script/TheOni.OniBasicAttack
/// Size: 0x0010 (0x000390 - 0x0003A0)
class UOniBasicAttack : public UPounceAttack
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0390   (0x0010)  MISSED
};

/// Class /Script/TheOni.OniBasicAttackSuccessSubstate
/// Size: 0x0000 (0x000118 - 0x000118)
class UOniBasicAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{ 
public:
};

/// Class /Script/TheOni.OniCustomizationItemAnimInstance
/// Size: 0x0020 (0x0002C0 - 0x0002E0)
class UOniCustomizationItemAnimInstance : public UAnimInstance
{ 
public:
	bool                                               _isInDemonMode;                                             // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1F];                                      // 0x02C1   (0x001F)  MISSED


	/// Functions
	// Function /Script/TheOni.OniCustomizationItemAnimInstance.SetIsInDemonMode
	// void SetIsInDemonMode(bool IsInDemonMode);                                                                            // [0x5dc87c0] Final|Native|Private 
};

/// Class /Script/TheOni.OniDashInteraction
/// Size: 0x0050 (0x000790 - 0x0007E0)
class UOniDashInteraction : public UChargeableInteractionDefinition
{ 
public:
	class UCurveFloat*                                 _chargingSpeedCurve;                                        // 0x0790   (0x0008)  
	class UCurveFloat*                                 _dashingSpeedCurve;                                         // 0x0798   (0x0008)  
	float                                              _yawAdjustTime;                                             // 0x07A0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x07A4   (0x0004)  MISSED
	class UCurveFloat*                                 _cooldownSpeedCurve;                                        // 0x07A8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x07B0   (0x0030)  MISSED


	/// Functions
	// Function /Script/TheOni.OniDashInteraction.SetPlayerOwner
	// void SetPlayerOwner(class ADBDPlayer* Player);                                                                        // [0x5dc88e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheOni.OniDashInteraction.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5dc86f0] Final|Native|Private 
	// Function /Script/TheOni.OniDashInteraction.OnDashEnd
	// void OnDashEnd(class ADBDPlayer* Player);                                                                             // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheOni.OniDashInteraction.OnDashBegin
	// void OnDashBegin(class ADBDPlayer* Player);                                                                           // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheOni.OniDashInteraction.OnChargeEnd
	// void OnChargeEnd(class ADBDPlayer* Player, bool chargeCompleted);                                                     // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheOni.OniDashInteraction.OnChargeBegin
	// void OnChargeBegin(class ADBDPlayer* Player);                                                                         // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheOni.OniDemonBasicAttack
/// Size: 0x0000 (0x000390 - 0x000390)
class UOniDemonBasicAttack : public UPounceAttack
{ 
public:
};

/// Class /Script/TheOni.OniDemonPowerAttack
/// Size: 0x0030 (0x000390 - 0x0003C0)
class UOniDemonPowerAttack : public UPounceAttack
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0390   (0x0030)  MISSED
};

/// Class /Script/TheOni.OniDemonDashAttack
/// Size: 0x0000 (0x0003C0 - 0x0003C0)
class UOniDemonDashAttack : public UOniDemonPowerAttack
{ 
public:
};

/// Class /Script/TheOni.OniDemonPowerAttackOpenSubstate
/// Size: 0x0018 (0x000130 - 0x000148)
class UOniDemonPowerAttackOpenSubstate : public UPounceAttackOpenSubstate
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0130   (0x0018)  MISSED
};

/// Class /Script/TheOni.OniDemonDashAttackOpenSubstate
/// Size: 0x0000 (0x000148 - 0x000148)
class UOniDemonDashAttackOpenSubstate : public UOniDemonPowerAttackOpenSubstate
{ 
public:
};

/// Class /Script/TheOni.OniDemonPowerAttackHittingSubstate
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UOniDemonPowerAttackHittingSubstate : public UPounceAttackHittingSubstate
{ 
public:
};

/// Class /Script/TheOni.OniDemonPowerAttackSuccessSubstate
/// Size: 0x0030 (0x000118 - 0x000148)
class UOniDemonPowerAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0118   (0x0030)  MISSED
};

/// Class /Script/TheOni.OniDemonPowerAttackMissSubstate
/// Size: 0x0000 (0x000120 - 0x000120)
class UOniDemonPowerAttackMissSubstate : public UPounceAttackMissSubstate
{ 
public:
};

/// Class /Script/TheOni.OniDemonPowerAttackObstructSubstate
/// Size: 0x0000 (0x000128 - 0x000128)
class UOniDemonPowerAttackObstructSubstate : public UPounceAttackObstructSubstate
{ 
public:
};

/// Class /Script/TheOni.OniPounceInteraction
/// Size: 0x0030 (0x000790 - 0x0007C0)
class UOniPounceInteraction : public UChargeableInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0790   (0x0010)  MISSED
	class UOniDemonModeAttackStateComponent*           _chargedAttackState;                                        // 0x07A0   (0x0008)  
	class UDemonModeComponent*                         _demonModeComponent;                                        // 0x07A8   (0x0008)  
	class ASlasherPlayer*                              _owningSlasher;                                             // 0x07B0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x07B8   (0x0008)  MISSED
};

/// Class /Script/TheOni.RenjirosBloodyGlove
/// Size: 0x00B8 (0x0002B8 - 0x000370)
class URenjirosBloodyGlove : public UItemAddon
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x02B8   (0x0008)  MISSED
	float                                              _revealTime;                                                // 0x02C0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02C4   (0x0004)  MISSED
	class UClass*                                      _bloodOrbRevealToKillerStatusEffectClass;                   // 0x02C8   (0x0008)  
	SDK_UNDEFINED(80,4245) /* TMap<ACamperPlayer*, UBloodOrbOverlapRevealToKiller*> */ __um(_revealEffectPerCamper); // 0x02D0   (0x0050)  
	unsigned char                                      UnknownData02_6[0x50];                                      // 0x0320   (0x0050)  MISSED


	/// Functions
	// Function /Script/TheOni.RenjirosBloodyGlove.Authority_OnBloodOrbOverlapBegin
	// void Authority_OnBloodOrbOverlapBegin(class AActor* overlappingActor, class ABloodOrb* BloodOrb);                     // [0x5dc8600] Final|Native|Private 
};

/// Class /Script/TheOni.StartDemonModeInteraction
/// Size: 0x0050 (0x000790 - 0x0007E0)
class UStartDemonModeInteraction : public UChargeableInteractionDefinition
{ 
public:
	float                                              YawAdjustTime;                                              // 0x0790   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0794   (0x0004)  MISSED
	FAnimationMontageDescriptor                        DemonModeActivationMontage;                                 // 0x0798   (0x0020)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x07B8   (0x0028)  MISSED


	/// Functions
	// Function /Script/TheOni.StartDemonModeInteraction.SetPlayerOwner
	// void SetPlayerOwner(class ADBDPlayer* Owner);                                                                         // [0x5dc8970] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheOni.StartDemonModeInteraction.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5dc8710] Final|Native|Private 
};

/// Struct /Script/TheOni.Accumulator
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAccumulator
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/TheOni.BloodOrbDropParams
/// Size: 0x0008 (0x000000 - 0x000008)
struct FBloodOrbDropParams
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/TheOni.BloodOrbInfo
/// Size: 0x0060 (0x000000 - 0x000060)
struct FBloodOrbInfo
{ 
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0000   (0x0050)  MISSED
	class UStaticMeshComponent*                        originalStaticMesh;                                         // 0x0050   (0x0008)  
	class UStaticMeshComponent*                        clonedStaticMesh;                                           // 0x0058   (0x0008)  
};

