
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: AkAudio
/// dependency: AnimationUtilities
/// dependency: Competence
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: DBDAnimation
/// dependency: DBDAttack
/// dependency: DBDCompetence
/// dependency: DBDCosmetic
/// dependency: DBDGameplay
/// dependency: DBDSharedTypes
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: GameplayTagUtilities
/// dependency: GameplayUtilities
/// dependency: NetworkUtilities
/// dependency: StatSystem

/// Enum /Script/TheK34.EK34Foot
/// Size: 0x03
enum class EK34Foot : uint8_t
{
	EK34Foot__LeftFoot                                                               = 0,
	EK34Foot__RightFoot                                                              = 1,
	EK34Foot__EK34Foot_MAX                                                           = 2
};

/// Enum /Script/TheK34.EScamperPhase
/// Size: 0x05
enum class EScamperPhase : uint8_t
{
	EScamperPhase__Charging                                                          = 0,
	EScamperPhase__Dashing                                                           = 1,
	EScamperPhase__Chaining                                                          = 2,
	EScamperPhase__Completed                                                         = 3,
	EScamperPhase__EScamperPhase_MAX                                                 = 4
};

/// Class /Script/TheK34.K34AnimInstance
/// Size: 0x0010 (0x000610 - 0x000620)
class UK34AnimInstance : public UKillerAnimInstance
{ 
public:
	bool                                               _isDodson;                                                  // 0x0610   (0x0001)  
	bool                                               _shouldUseLookAt;                                           // 0x0611   (0x0001)  
	unsigned char                                      UnknownData00_6[0xE];                                       // 0x0612   (0x000E)  MISSED
};

/// Class /Script/TheK34.K34CheatComponent
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UK34CheatComponent : public UActorComponent
{ 
public:
};

/// Class /Script/TheK34.K34DistractionGroundDetectorComponent
/// Size: 0x0008 (0x0001D0 - 0x0001D8)
class UK34DistractionGroundDetectorComponent : public UBaseGroundDetectorComponent
{ 
public:
	float                                              _startPositionZOffSet;                                      // 0x01D0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x01D4   (0x0004)  MISSED
};

/// Class /Script/TheK34.K34DistractionNavMovementComponent
/// Size: 0x0080 (0x000168 - 0x0001E8)
class UK34DistractionNavMovementComponent : public UActorNavMovementComponent
{ 
public:
	FAIMoveRequest                                     _moveRequest;                                               // 0x0168   (0x0040)  
	class UClass*                                      _navFilter;                                                 // 0x01A8   (0x0008)  
	float                                              _movementAcceptanceRadius;                                  // 0x01B0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01B4   (0x0004)  MISSED
	FDBDTunableRowHandle                               _moveSpeed;                                                 // 0x01B8   (0x0028)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x01E0   (0x0008)  MISSED
};

/// Class /Script/TheK34.K34Dodson
/// Size: 0x0018 (0x000230 - 0x000248)
class AK34Dodson : public AActor
{ 
public:
	class USkeletalMeshComponent*                      _skeletalMesh;                                              // 0x0230   (0x0008)  
	class USceneComponent*                             _rootComponent;                                             // 0x0238   (0x0008)  
	class UAnimationMontageSlave*                      _animationMontageSlave;                                     // 0x0240   (0x0008)  


	/// Functions
	// Function /Script/TheK34.K34Dodson.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5d67490] Final|Native|Private 
	// Function /Script/TheK34.K34Dodson.Cosmetic_OnExitDodson
	// void Cosmetic_OnExitDodson();                                                                                         // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK34.K34Dodson.Cosmetic_OnEnterDodson
	// void Cosmetic_OnEnterDodson();                                                                                        // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK34.K34DodsonComponent
/// Size: 0x0070 (0x0000B8 - 0x000128)
class UK34DodsonComponent : public UActorComponent
{ 
public:
	class UClass*                                      _dodsonActorClass;                                          // 0x00B8   (0x0008)  
	FVector                                            _dodsonActorOffsetOnK34;                                    // 0x00C0   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	class AK34Dodson*                                  _dodsonActor;                                               // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x30];                                      // 0x00D8   (0x0030)  MISSED
	bool                                               _isDodson;                                                  // 0x0108   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1F];                                      // 0x0109   (0x001F)  MISSED


	/// Functions
	// Function /Script/TheK34.K34DodsonComponent.OnRep_IsDodson
	// void OnRep_IsDodson();                                                                                                // [0x5d676f0] Final|Native|Private 
	// Function /Script/TheK34.K34DodsonComponent.IsDodson
	// bool IsDodson();                                                                                                      // [0x5d676c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/TheK34.K34EnterTipToeModeInteraction
/// Size: 0x0000 (0x000650 - 0x000650)
class UK34EnterTipToeModeInteraction : public UInteractionDefinition
{ 
public:
};

/// Class /Script/TheK34.K34ExitTipToeModeInteraction
/// Size: 0x0000 (0x000650 - 0x000650)
class UK34ExitTipToeModeInteraction : public UInteractionDefinition
{ 
public:
};

/// Class /Script/TheK34.K34FirstPersonViewComponent
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UK34FirstPersonViewComponent : public UFirstPersonViewComponent
{ 
public:
};

/// Struct /Script/TheK34.K34FootstepVisibilityRaycastDefinition
/// Size: 0x000C (0x000000 - 0x00000C)
struct FK34FootstepVisibilityRaycastDefinition
{ 
	float                                              HeightOffset;                                               // 0x0000   (0x0004)  
	float                                              HorizontalOffset;                                           // 0x0004   (0x0004)  
	float                                              SphereTraceRadius;                                          // 0x0008   (0x0004)  
};

/// Class /Script/TheK34.K34Footstep
/// Size: 0x0190 (0x000230 - 0x0003C0)
class AK34Footstep : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0230   (0x0008)  MISSED
	EK34Foot                                           _currentFootType;                                           // 0x0238   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0239   (0x0007)  MISSED
	FTunableStat                                       _footstepLifetime;                                          // 0x0240   (0x0080)  
	FTunableStat                                       _footstepMaximumVisibilityDistance;                         // 0x02C0   (0x0080)  
	SDK_UNDEFINED(16,3604) /* FMulticastInlineDelegate */ __um(OnAcquiredChanged);                                 // 0x0340   (0x0010)  
	bool                                               _isActive;                                                  // 0x0350   (0x0001)  
	unsigned char                                      UnknownData02_5[0x47];                                      // 0x0351   (0x0047)  MISSED
	class AActor*                                      _owningActor;                                               // 0x0398   (0x0008)  
	class ASlasherPlayer*                              _owningKiller;                                              // 0x03A0   (0x0008)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x03A8   (0x0008)  MISSED
	TArray<FK34FootstepVisibilityRaycastDefinition>    _visibilityRaycastProperties;                               // 0x03B0   (0x0010)  


	/// Functions
	// Function /Script/TheK34.K34Footstep.OnRep_IsActive
	// void OnRep_IsActive();                                                                                                // [0x5d67fd0] Final|Native|Private 
	// Function /Script/TheK34.K34Footstep.GetOwningActorsVelocity
	// FVector GetOwningActorsVelocity();                                                                                    // [0x5d67f90] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK34.K34Footstep.Cosmetic_TriggerFootstepVisibility
	// void Cosmetic_TriggerFootstepVisibility(EK34Foot footType, bool IsVisible);                                           // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK34.K34FootstepsComponent
/// Size: 0x00A8 (0x0000B8 - 0x000160)
class UK34FootstepsComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	FDBDTunableRowHandle                               _footstepFrequency;                                         // 0x00C0   (0x0028)  
	FDBDTunableRowHandle                               _footstepsShouldOnlySpawnWhenMoving;                        // 0x00E8   (0x0028)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x0110   (0x0001)  MISSED
	bool                                               _showFootstepsInTipToeMode;                                 // 0x0111   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x0112   (0x0006)  MISSED
	FGameplayTagQuery                                  _normalFootfallSpawningStateTagQuery;                       // 0x0118   (0x0048)  
};

/// Class /Script/TheK34.K34FXInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UK34FXInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/TheK34.K34FXInterface.Cosmetic_UndetectableStart
	// void Cosmetic_UndetectableStart();                                                                                    // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK34.K34FXInterface.Cosmetic_UndetectableEnd
	// void Cosmetic_UndetectableEnd();                                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK34.K34FXInterface.Cosmetic_StartSliceAndDiceAttack
	// void Cosmetic_StartSliceAndDiceAttack();                                                                              // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK34.K34FXInterface.Cosmetic_ScamperStart
	// void Cosmetic_ScamperStart(bool isOnPallet, bool isChaining);                                                         // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK34.K34FXInterface.Cosmetic_ScamperEnd
	// void Cosmetic_ScamperEnd(bool isOnPallet, bool isChaining);                                                           // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK34.K34FXInterface.Cosmetic_OnTipToeModeCooldownFinished
	// void Cosmetic_OnTipToeModeCooldownFinished();                                                                         // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK34.K34FXInterface.Cosmetic_OnExitDodson
	// void Cosmetic_OnExitDodson();                                                                                         // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK34.K34FXInterface.Cosmetic_OnEnterDodson
	// void Cosmetic_OnEnterDodson();                                                                                        // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK34.K34FXInterface.Cosmetic_HideyHoModeDurationWarningTimeUp
	// void Cosmetic_HideyHoModeDurationWarningTimeUp();                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK34.K34FXInterface.Cosmetic_ExitTipToeMode
	// void Cosmetic_ExitTipToeMode();                                                                                       // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK34.K34FXInterface.Cosmetic_ExitSliceAndDice
	// void Cosmetic_ExitSliceAndDice();                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK34.K34FXInterface.Cosmetic_EnterTipToeMode
	// void Cosmetic_EnterTipToeMode();                                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK34.K34FXInterface.Cosmetic_EnterSliceAndDice
	// void Cosmetic_EnterSliceAndDice();                                                                                    // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/TheK34.K34FXInterface.Cosmetic_EndSliceAndDiceAttack
	// void Cosmetic_EndSliceAndDiceAttack();                                                                                // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
};

/// Class /Script/TheK34.K34KillerAttackSubAnimInstance
/// Size: 0x0020 (0x000620 - 0x000640)
class UK34KillerAttackSubAnimInstance : public UKillerAttackSubAnimInstance
{ 
public:
	bool                                               _shouldTriggerSpecialAnimation;                             // 0x0620   (0x0001)  
	bool                                               _isDodson;                                                  // 0x0621   (0x0001)  
	EAttackSubstate                                    _anticipatedAttackSubStateAfterHitting;                     // 0x0622   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0623   (0x0001)  MISSED
	FVector                                            _targetWorldLocation;                                       // 0x0624   (0x000C)  
	float                                              _targetDistanceHorizontal;                                  // 0x0630   (0x0004)  
	float                                              _percentOfJumpDistance;                                     // 0x0634   (0x0004)  
	float                                              _maxJumpDistance;                                           // 0x0638   (0x0004)  
	float                                              _specialAnimationTriggerChance;                             // 0x063C   (0x0004)  
};

/// Class /Script/TheK34.K34P01
/// Size: 0x0038 (0x000448 - 0x000480)
class UK34P01 : public UHexPerk
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0448   (0x0018)  MISSED
	class UClass*                                      _rampingBlindEffectClass;                                   // 0x0460   (0x0008)  
	float                                              _rampingBlindRampTime;                                      // 0x0468   (0x0004)  
	int32_t                                            _stunnedOrBlindedTimesRequired;                             // 0x046C   (0x000C)  
	float                                              _blindedEffectTime;                                         // 0x0478   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x047C   (0x0004)  MISSED


	/// Functions
	// Function /Script/TheK34.K34P01.Client_UpdateHudIcon
	// void Client_UpdateHudIcon(float percent);                                                                             // [0x5d68db0] Final|Net|Native|Event|Private|NetClient 
	// Function /Script/TheK34.K34P01.Authority_OnTotemStateChanged
	// void Authority_OnTotemStateChanged(ETotemState oldState, ETotemState NewState);                                       // [0x5d68ce0] Final|Native|Private 
};

/// Class /Script/TheK34.K34P02
/// Size: 0x0040 (0x0003C8 - 0x000408)
class UK34P02 : public UPerk
{ 
public:
	class UClass*                                      _exposedStatusEffectClass;                                  // 0x03C8   (0x0008)  
	class UStatusEffect*                               _exposedStatusEffect;                                       // 0x03D0   (0x0008)  
	class UClass*                                      _survivorAuraRevealClass;                                   // 0x03D8   (0x0008)  
	class UStatusEffect*                               _survivorAuraRevealEffect;                                  // 0x03E0   (0x0008)  
	float                                              _exposedEffectTime;                                         // 0x03E8   (0x000C)  
	float                                              _auraRevealEffectTime;                                      // 0x03F4   (0x000C)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0400   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheK34.K34P02.Multicast_RevealAndMakeSurvivorScream
	// void Multicast_RevealAndMakeSurvivorScream(class ACamperPlayer* Survivor);                                            // [0x501b930] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/TheK34.K34P02.BP_RevealAndMakeSurvivorScream
	// void BP_RevealAndMakeSurvivorScream(class ACamperPlayer* survivorPlayer);                                             // [0x61c32d0] Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK34.K34P03
/// Size: 0x0058 (0x0003C8 - 0x000420)
class UK34P03 : public UPerk
{ 
public:
	float                                              _generatorRangeFromPlayer;                                  // 0x03C8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x24];                                      // 0x03CC   (0x0024)  MISSED
	bool                                               _hasAnyGeneratorsInRange;                                   // 0x03F0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x03F1   (0x0007)  MISSED
	class UClass*                                      _hasteEffectClass;                                          // 0x03F8   (0x0008)  
	class UStatusEffect*                               _hasteEffect;                                               // 0x0400   (0x0008)  
	float                                              _hasteEffectAmount;                                         // 0x0408   (0x0004)  
	float                                              _hasteLingerTimes;                                          // 0x040C   (0x000C)  
	bool                                               _disablePerkWhenExitGatesArePowered;                        // 0x0418   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0419   (0x0007)  MISSED


	/// Functions
	// Function /Script/TheK34.K34P03.HasAnyGeneratorsInRange
	// bool HasAnyGeneratorsInRange();                                                                                       // [0x58e0f00] Final|Native|Public|Const 
};

/// Class /Script/TheK34.K34P03IconStrategy
/// Size: 0x0000 (0x000038 - 0x000038)
class UK34P03IconStrategy : public UBasePerkIconStrategy
{ 
public:
};

/// Class /Script/TheK34.K34PerspectiveChangeComponent
/// Size: 0x0098 (0x000128 - 0x0001C0)
class UK34PerspectiveChangeComponent : public UPlayerPerspectiveChangeComponent
{ 
public:
	FPlayerPerspectiveChangeTargetData                 _firstPersonYerkesPerspectiveChangeTargetData;              // 0x0128   (0x0030)  
	FPlayerPerspectiveChangeTargetData                 _firstPersonDodsonPerspectiveChangeTargetData;              // 0x0158   (0x0030)  
	FPlayerPerspectiveChangeTargetData                 _thirdPersonYerkesPerspectiveChangeTargetData;              // 0x0188   (0x0030)  
	float                                              _dodsonThirdPersonViewTransitionTime;                       // 0x01B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x01BC   (0x0004)  MISSED
};

/// Class /Script/TheK34.K34PounceAttack
/// Size: 0x0030 (0x000390 - 0x0003C0)
class UK34PounceAttack : public UPounceAttack
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0390   (0x0010)  MISSED
	float                                              _sphereTraceRadiusObstruction;                              // 0x03A0   (0x0004)  
	float                                              _maxSphereTraceDistanceObstruction;                         // 0x03A4   (0x0004)  
	float                                              _sphereTraceRadiusMidairLeap;                               // 0x03A8   (0x0004)  
	float                                              _sphereTraceStartForwardOffsetMidairLeap;                   // 0x03AC   (0x0004)  
	float                                              _sphereTraceEndForwardOffsetMidairLeap;                     // 0x03B0   (0x0004)  
	float                                              _sphereTraceVerticalOffsetMidairLeap;                       // 0x03B4   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x03B8   (0x0008)  MISSED
};

/// Class /Script/TheK34.K34PounceAttackOpenSubstate
/// Size: 0x0000 (0x000130 - 0x000130)
class UK34PounceAttackOpenSubstate : public UPounceAttackOpenSubstate
{ 
public:
};

/// Class /Script/TheK34.K34PounceAttackHittingSubstate
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UK34PounceAttackHittingSubstate : public UPounceAttackHittingSubstate
{ 
public:
};

/// Class /Script/TheK34.K34AttackSuccessSubstate
/// Size: 0x0000 (0x000118 - 0x000118)
class UK34AttackSuccessSubstate : public UPounceAttackSuccessSubstate
{ 
public:
};

/// Class /Script/TheK34.K34AttackMissSubstate
/// Size: 0x0000 (0x000120 - 0x000120)
class UK34AttackMissSubstate : public UPounceAttackMissSubstate
{ 
public:
};

/// Class /Script/TheK34.K34AttackObstructSubstate
/// Size: 0x0000 (0x000128 - 0x000128)
class UK34AttackObstructSubstate : public UPounceAttackObstructSubstate
{ 
public:
};

/// Class /Script/TheK34.K34Power
/// Size: 0x0070 (0x0004C8 - 0x000538)
class AK34Power : public ACollectable
{ 
public:
	class UClass*                                      _tipToeModeComponentClassToSpawn;                           // 0x04C8   (0x0008)  
	class UClass*                                      _footstepsComponentClassToSpawn;                            // 0x04D0   (0x0008)  
	class UClass*                                      _dodsonComponentClassToSpawn;                               // 0x04D8   (0x0008)  
	class UClass*                                      _k34PerspectiveChangeComponentClass;                        // 0x04E0   (0x0008)  
	class UClass*                                      _k34ScoringComponentClass;                                  // 0x04E8   (0x0008)  
	class UAuthoritativeActorPoolComponent*            _feetActorPool;                                             // 0x04F0   (0x0008)  
	class UK34PowerChargePresentationPowerFadeComponent* _presentationPowerFadeComponent;                          // 0x04F8   (0x0008)  
	class UK34PowerChargePresentationItemProgressComponent* _presentationItemProgressComponent;                    // 0x0500   (0x0008)  
	class UTurnLimitationStrategy*                     _viewRotationStrategy;                                      // 0x0508   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0510   (0x0028)  MISSED


	/// Functions
	// Function /Script/TheK34.K34Power.OnKillerIntroCompleted
	// void OnKillerIntroCompleted();                                                                                        // [0x5d6a1c0] Final|Native|Public|Const 
	// Function /Script/TheK34.K34Power.OnFootstepAddedToPool
	// void OnFootstepAddedToPool(class AActor* Actor);                                                                      // [0x5d6a130] Final|Native|Private|Const 
	// Function /Script/TheK34.K34Power.GetOwningKiller
	// class ASlasherPlayer* GetOwningKiller();                                                                              // [0x5d6a100] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheK34.K34PowerAnimInstance
/// Size: 0x0060 (0x0002F0 - 0x000350)
class UK34PowerAnimInstance : public UDBDBaseAnimInstance
{ 
public:
	bool                                               _isInTipToeMode;                                            // 0x02F0   (0x0001)  
	bool                                               _isChargingScamper;                                         // 0x02F1   (0x0001)  
	bool                                               _isScampering;                                              // 0x02F2   (0x0001)  
	bool                                               _isChainScampering;                                         // 0x02F3   (0x0001)  
	float                                              _forwardVelocity;                                           // 0x02F4   (0x0004)  
	float                                              _lateralVelocity;                                           // 0x02F8   (0x0004)  
	EAttackSubstate                                    _attackState;                                               // 0x02FC   (0x0001)  
	bool                                               _shouldTriggerLookBackAnimation;                            // 0x02FD   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4A];                                      // 0x02FE   (0x004A)  MISSED
	float                                              _minTimeToStartLookBackAnimation;                           // 0x0348   (0x0004)  
	float                                              _maxTimeToStartLookBackAnimation;                           // 0x034C   (0x0004)  
};

/// Class /Script/TheK34.K34PowerChargePresentationItemProgressComponent
/// Size: 0x0018 (0x0000C0 - 0x0000D8)
class UK34PowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00C0   (0x0018)  MISSED
};

/// Class /Script/TheK34.K34PowerChargePresentationPowerFadeComponent
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UK34PowerChargePresentationPowerFadeComponent : public UPresentationPowerFadeComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00B8   (0x0018)  MISSED
};

/// Class /Script/TheK34.K34ScamperChargeableInteraction
/// Size: 0x0250 (0x000790 - 0x0009E0)
class UK34ScamperChargeableInteraction : public UChargeableInteractionDefinition
{ 
public:
	EScamperPhase                                      _currentPhase;                                              // 0x0788   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1C7];                                     // 0x0789   (0x01C7)  MISSED
	SDK_UNDEFINED(80,3605) /* TMap<EScamperPhase, FK34ScamperMovementSpeedSetting> */ __um(_scamperMovementSpeedSettings); // 0x0950   (0x0050)  
	float                                              _chainVaultDetectionRange;                                  // 0x09A0   (0x0004)  
	float                                              _serverChainVaultDetectionRange;                            // 0x09A4   (0x0004)  
	FDBDTunableRowHandle                               _chainingHeldInputBuffer;                                   // 0x09A8   (0x0028)  
	float                                              _chainVaultSweepRadius;                                     // 0x09D0   (0x0004)  
	float                                              _cameraTransitionToThirdPersonViewDuration;                 // 0x09D4   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x09D8   (0x0008)  MISSED


	/// Functions
	// Function /Script/TheK34.K34ScamperChargeableInteraction.Server_ActivateChaining
	// void Server_ActivateChaining(class UInteractionDefinition* chainInteraction);                                         // [0x50aead0] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/TheK34.K34ScamperChargeableInteraction.OnRep_CurrentPhase
	// void OnRep_CurrentPhase();                                                                                            // [0x5d6adb0] Final|Native|Private 
	// Function /Script/TheK34.K34ScamperChargeableInteraction.Cosmetic_EndChargingPhase
	// void Cosmetic_EndChargingPhase();                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheK34.K34ScamperChargeableInteraction.Cosmetic_BeginChargingPhase
	// void Cosmetic_BeginChargingPhase();                                                                                   // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK34.K34ScoringComponent
/// Size: 0x0070 (0x0000B8 - 0x000128)
class UK34ScoringComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x00B8   (0x0048)  MISSED
	FDBDTunableRowHandle                               _windowToFollowUpAScamperWithAHitTunableValue;              // 0x0100   (0x0028)  
};

/// Class /Script/TheK34.K34SliceAndDiceAttack
/// Size: 0x00D0 (0x000390 - 0x000460)
class UK34SliceAndDiceAttack : public UPounceAttack
{ 
public:
	FDBDTunableRowHandle                               _attackZoneScaleFactor;                                     // 0x0390   (0x0028)  
	class UCurveFloat*                                 _mouseMaxTurnAngleCurve;                                    // 0x03B8   (0x0008)  
	class UCurveFloat*                                 _controllerMaxTurnAngleCurve;                               // 0x03C0   (0x0008)  
	FDBDTunableRowHandle                               _turnRateLimit;                                             // 0x03C8   (0x0028)  
	float                                              _endChaseAfterHitBuffer;                                    // 0x03F0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x6C];                                      // 0x03F4   (0x006C)  MISSED
};

/// Class /Script/TheK34.K34SliceAndDiceAttackOpenSubstate
/// Size: 0x0000 (0x000130 - 0x000130)
class UK34SliceAndDiceAttackOpenSubstate : public UPounceAttackOpenSubstate
{ 
public:
};

/// Class /Script/TheK34.K34SliceAndDiceAttackSuccessSubstate
/// Size: 0x0000 (0x000118 - 0x000118)
class UK34SliceAndDiceAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{ 
public:
};

/// Class /Script/TheK34.K34SliceAndDiceAttackMissSubstate
/// Size: 0x0000 (0x000120 - 0x000120)
class UK34SliceAndDiceAttackMissSubstate : public UPounceAttackMissSubstate
{ 
public:
};

/// Class /Script/TheK34.K34SliceAndDiceAttackObstructSubstate
/// Size: 0x0000 (0x000128 - 0x000128)
class UK34SliceAndDiceAttackObstructSubstate : public UPounceAttackObstructSubstate
{ 
public:
};

/// Class /Script/TheK34.K34SurvivorCosmeticHelperActor
/// Size: 0x0000 (0x000270 - 0x000270)
class AK34SurvivorCosmeticHelperActor : public ASurvivorCosmeticHelperActor
{ 
public:
};

/// Class /Script/TheK34.K34TipToeDistraction
/// Size: 0x0308 (0x000230 - 0x000538)
class AK34TipToeDistraction : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0230   (0x0010)  MISSED
	SDK_UNDEFINED(16,3606) /* FMulticastInlineDelegate */ __um(_onAcquiredChanged);                                // 0x0240   (0x0010)  
	FDBDTunableRowHandle                               _maximumVisibilityDistance;                                 // 0x0250   (0x0028)  
	FDBDTunableRowHandle                               _footStepSpawnRate;                                         // 0x0278   (0x0028)  
	FDBDTunableRowHandle                               _chanceToRandomlyTurnBackOnPath;                            // 0x02A0   (0x0028)  
	FDBDTunableRowHandle                               _chanceToRandomlyChangeDirection;                           // 0x02C8   (0x0028)  
	FDBDTunableRowHandle                               _chanceToRandomlyStop;                                      // 0x02F0   (0x0028)  
	FDBDTunableRowHandle                               _newTargetRadius;                                           // 0x0318   (0x0028)  
	float                                              _minTimeIdle;                                               // 0x0340   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0344   (0x0004)  MISSED
	FDBDTunableRowHandle                               _maxTimeIdle;                                               // 0x0348   (0x0028)  
	int8_t                                             _maxCountSameLocationConsideredStuck;                       // 0x0370   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0371   (0x0003)  MISSED
	float                                              _distanceConsideredStuck;                                   // 0x0374   (0x0004)  
	float                                              _randomBehaviourCheckRate;                                  // 0x0378   (0x0004)  
	float                                              _overlapRadius;                                             // 0x037C   (0x0004)  
	float                                              _cosmeticFootSpawnRate;                                     // 0x0380   (0x0004)  
	bool                                               _isAcquiredFromPool;                                        // 0x0384   (0x0001)  
	bool                                               _isInUse;                                                   // 0x0385   (0x0001)  
	unsigned char                                      UnknownData03_5[0x19A];                                     // 0x0386   (0x019A)  MISSED
	class UK34DistractionNavMovementComponent*         _navMovementComponent;                                      // 0x0520   (0x0008)  
	class UBaseGroundDetectorComponent*                _groundDetector;                                            // 0x0528   (0x0008)  
	class UAkComponent*                                _akComponent;                                               // 0x0530   (0x0008)  


	/// Functions
	// Function /Script/TheK34.K34TipToeDistraction.Multicast_ShowDistractionDebug
	// void Multicast_ShowDistractionDebug(float HalfSize, float Radius);                                                    // [0x5d6bbf0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK34.K34TipToeDistraction.Multicast_OnSpawned
	// void Multicast_OnSpawned(class ADBDPlayer* OwningPlayer);                                                             // [0x5bdc5f0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK34.K34TipToeDistraction.Multicast_OnDeactivated
	// void Multicast_OnDeactivated();                                                                                       // [0x5b98c20] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheK34.K34TipToeDistraction.GetOwningPlayer
	// class ADBDPlayer* GetOwningPlayer();                                                                                  // [0x5d6bbc0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/TheK34.K34TipToeDistraction.GetFootAudioSurfaceName
	// FString GetFootAudioSurfaceName();                                                                                    // [0x5d6bb40] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK34.K34TipToeDistraction.GetCustomizedAudio
	// class UCustomizedAudioComponent* GetCustomizedAudio();                                                                // [0x5d6bb10] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK34.K34TipToeDistraction.GetAkComponent
	// class UAkComponent* GetAkComponent();                                                                                 // [0x5aefde0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK34.K34TipToeDistraction.Cosmetic_OnFootHitGround
	// void Cosmetic_OnFootHitGround();                                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/TheK34.K34TipToeModeComponent
/// Size: 0x05F8 (0x0000B8 - 0x0006B0)
class UK34TipToeModeComponent : public UActorComponent
{ 
public:
	FTagStateBool                                      _isInTipToeMode;                                            // 0x00B8   (0x0030)  
	FTagStateBool                                      _isInTipToeModeCooldown;                                    // 0x00E8   (0x0030)  
	class UClass*                                      _tipToeModeStatusEffectClass;                               // 0x0118   (0x0008)  
	FStatProperty                                      _tipToeModeCooldown;                                        // 0x0120   (0x0088)  
	class UTimerObject*                                _tipToeModeCooldownTimer;                                   // 0x01A8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x30];                                      // 0x01B0   (0x0030)  MISSED
	FStatProperty                                      _tipToeModeDuration;                                        // 0x01E0   (0x0088)  
	FStatProperty                                      _tipToeModeDurationPenaltyPercentagePerM1Attempt;           // 0x0268   (0x0088)  
	FDBDTunableRowHandle                               _tipToeModeDurationWarningTimeUpAdvanceNotice;              // 0x02F0   (0x0028)  
	class UTimerObject*                                _tipToeModeDurationTimer;                                   // 0x0318   (0x0008)  
	class UTimerObject*                                _tipToeModeDurationWarningTimeUpTimer;                      // 0x0320   (0x0008)  
	class ULocalActorPoolComponent*                    _authority_distractionPoolComponent;                        // 0x0328   (0x0008)  
	EInputInteractionType                              _inputToDisplayWhileInTipToeMode;                           // 0x0330   (0x0001)  
	EInputInteractionType                              _inputToDisplayWhileInNormalMode;                           // 0x0331   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0332   (0x0006)  MISSED
	FDBDTunableRowHandle                               _enterTipToeBufferToExit;                                   // 0x0338   (0x0028)  
	int8_t                                             _distractionPoolSize;                                       // 0x0360   (0x0001)  
	int8_t                                             _maxTryPerTickToFindSpawn;                                  // 0x0361   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x0362   (0x0006)  MISSED
	FStatProperty                                      _maxDistractionPerSurvivor;                                 // 0x0368   (0x0088)  
	FStatProperty                                      _distractionRandomSpawnRateMin;                             // 0x03F0   (0x0088)  
	FStatProperty                                      _distractionRandomSpawnRateMax;                             // 0x0478   (0x0088)  
	FStatProperty                                      _distractionLifetime;                                       // 0x0500   (0x0088)  
	FDBDTunableRowHandle                               _spawnRadius;                                               // 0x0588   (0x0028)  
	FDBDTunableRowHandle                               _spawnRadiusBuffer;                                         // 0x05B0   (0x0028)  
	FDBDTunableRowHandle                               _directionRadius;                                           // 0x05D8   (0x0028)  
	FDBDTunableRowHandle                               _maxVerticalDistance;                                       // 0x0600   (0x0028)  
	bool                                               _shouldMinimizeSpawnDistanceWhenInChase;                    // 0x0628   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0629   (0x0007)  MISSED
	class UClass*                                      _tipToeDistractionClass;                                    // 0x0630   (0x0008)  
	class UClass*                                      _navQueryFilter;                                            // 0x0638   (0x0008)  
	SDK_UNDEFINED(80,3607) /* TMap<ACamperPlayer*, FCamperDistractionData> */ __um(_authority_survivorsData);      // 0x0640   (0x0050)  
	unsigned char                                      UnknownData04_6[0x20];                                      // 0x0690   (0x0020)  MISSED


	/// Functions
	// Function /Script/TheK34.K34TipToeModeComponent.OnRep_TipToeModeDurationWarningTimeUpTimer
	// void OnRep_TipToeModeDurationWarningTimeUpTimer();                                                                    // [0x5d6c7c0] Final|Native|Private 
	// Function /Script/TheK34.K34TipToeModeComponent.OnRep_IsInTipToeModeCooldown
	// void OnRep_IsInTipToeModeCooldown();                                                                                  // [0x5d6c7a0] Final|Native|Protected|Const 
	// Function /Script/TheK34.K34TipToeModeComponent.OnRep_IsInTipToeMode
	// void OnRep_IsInTipToeMode();                                                                                          // [0x5d6c780] Final|Native|Protected 
	// Function /Script/TheK34.K34TipToeModeComponent.IsInTipToeMode
	// bool IsInTipToeMode();                                                                                                // [0x57dfe70] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK34.K34TipToeModeComponent.GetTipToeModeDuration
	// float GetTipToeModeDuration();                                                                                        // [0x5d6c750] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK34.K34TipToeModeComponent.GetTipToeModeCooldownDuration
	// float GetTipToeModeCooldownDuration();                                                                                // [0x5d6c720] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK34.K34TipToeModeComponent.GetRemainingTipToeModeDuration
	// float GetRemainingTipToeModeDuration();                                                                               // [0x5d6c6f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK34.K34TipToeModeComponent.GetRemainingTipToeModeCooldownDuration
	// float GetRemainingTipToeModeCooldownDuration();                                                                       // [0x5d6c6c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK34.K34TipToeModeComponent.GetKiller
	// class ASlasherPlayer* GetKiller();                                                                                    // [0x5d6c690] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK34.K34TipToeModeComponent.CanEnterTipToeMode
	// bool CanEnterTipToeMode();                                                                                            // [0x5d6c660] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheK34.K34TipToeModeComponent.Authority_SetIsInTipToeMode
	// void Authority_SetIsInTipToeMode(bool IsInTipToeMode);                                                                // [0x5d6c5d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK34.K34TipToeModeComponent.Authority_ReduceDuration
	// void Authority_ReduceDuration(float reductionPercentage);                                                             // [0x5d6c550] Final|Native|Public|BlueprintCallable 
	// Function /Script/TheK34.K34TipToeModeComponent.Authority_ReduceCooldown
	// void Authority_ReduceCooldown(float reductionPercentage);                                                             // [0x5d6c4d0] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/TheK34.K34TipToeModeComponent.Authority_OnIntroCompleted
	// void Authority_OnIntroCompleted();                                                                                    // [0x5d6c4b0] Final|Native|Public  
};

/// Class /Script/TheK34.K34Utilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UK34Utilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/TheK34.K34Utilities.GetK34VFXFeetPool
	// class UAuthoritativeActorPoolComponent* GetK34VFXFeetPool(class ADBDPlayer* Player);                                  // [0x5d6ca00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TheK34.K34Utilities.GetK34Power
	// class AK34Power* GetK34Power(class ADBDPlayer* Player);                                                               // [0x5d6c970] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/TheK34.K34VaultInteraction
/// Size: 0x0010 (0x000710 - 0x000720)
class UK34VaultInteraction : public UKillerVaultDefinition
{ 
public:
	class UCurveFloat*                                 _cachedChainingLimitationCurve;                             // 0x0710   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0718   (0x0008)  MISSED
};

/// Struct /Script/TheK34.K34ScamperMovementSpeedSetting
/// Size: 0x0130 (0x000000 - 0x000130)
struct FK34ScamperMovementSpeedSetting
{ 
	class UCurveFloat*                                 SpeedCurve;                                                 // 0x0000   (0x0008)  
	class UCurveFloat*                                 MouseTurnLimitationCurve;                                   // 0x0008   (0x0008)  
	class UCurveFloat*                                 ControllerTurnLimitationCurve;                              // 0x0010   (0x0008)  
	FStatProperty                                      AccelerationMultiplierModifier;                             // 0x0018   (0x0088)  
	FStatProperty                                      Duration;                                                   // 0x00A0   (0x0088)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0128   (0x0008)  MISSED
};

/// Struct /Script/TheK34.CamperDistractionData
/// Size: 0x0068 (0x000000 - 0x000068)
struct FCamperDistractionData
{ 
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0000   (0x0068)  MISSED
};

