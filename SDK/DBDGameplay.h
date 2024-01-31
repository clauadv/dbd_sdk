
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: AkAudio
/// dependency: Competence
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: DBDAnimationBudgetAllocator
/// dependency: DBDInteraction
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: GameplayTagUtilities
/// dependency: GameplayUtilities
/// dependency: GFXUtilities
/// dependency: NetworkUtilities
/// dependency: Niagara
/// dependency: StatSystem
/// dependency: VFXUtilities

/// Enum /Script/DBDGameplay.EInteractionOwnerType
/// Size: 0x05
enum class EInteractionOwnerType : uint8_t
{
	EInteractionOwnerType__SurvivorsSelfInteractor                                   = 0,
	EInteractionOwnerType__OwningSurvivorSelfInteractor                              = 1,
	EInteractionOwnerType__SurvivorsKillerInteractor                                 = 2,
	EInteractionOwnerType__SurvivorsHealingInteractor1                               = 3,
	EInteractionOwnerType__EInteractionOwnerType_MAX                                 = 4
};

/// Enum /Script/DBDGameplay.ESteamPipeState
/// Size: 0x06
enum class ESteamPipeState : uint8_t
{
	ESteamPipeState__Ready                                                           = 0,
	ESteamPipeState__Charged                                                         = 1,
	ESteamPipeState__Warning                                                         = 2,
	ESteamPipeState__Activated                                                       = 3,
	ESteamPipeState__Disabled                                                        = 4,
	ESteamPipeState__ESteamPipeState_MAX                                             = 5
};

/// Class /Script/DBDGameplay.ActorPairQueryEvaluatorUtilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UActorPairQueryEvaluatorUtilities : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/DBDGameplay.AimableComponent
/// Size: 0x0058 (0x0000B8 - 0x000110)
class UAimableComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	TArray<class AActor*>                              _occlusionIgnoredActors;                                    // 0x00C0   (0x0010)  
	float                                              _maxAimDistance;                                            // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00D4   (0x0004)  MISSED
	class UAimDirectionProvider*                       _aimDirectionProvider;                                      // 0x00D8   (0x0008)  
	bool                                               _useOcclusion;                                              // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00E1   (0x0003)  MISSED
	float                                              _aimPointLerpFactor;                                        // 0x00E4   (0x0004)  
	TArray<class UAimPointProcessor*>                  _preOcclusionAimPointProcessors;                            // 0x00E8   (0x0010)  
	unsigned char                                      UnknownData03_6[0x18];                                      // 0x00F8   (0x0018)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.AimableComponent.SetProcessors
	// void SetProcessors(TArray<UAimPointProcessor*> processors);                                                           // [0x5060d70] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDGameplay.AimableComponent.SetOcclusionIgnoredActors
	// void SetOcclusionIgnoredActors(TArray<AActor*>& IgnoredActors);                                                       // [0x5060ba0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDGameplay.AimableComponent.SetMaxAimDistance
	// void SetMaxAimDistance(float maxAimDistance);                                                                         // [0x5060a20] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDGameplay.AimDirectionProvider
/// Size: 0x0000 (0x000030 - 0x000030)
class UAimDirectionProvider : public UObject
{ 
public:
};

/// Class /Script/DBDGameplay.AimPointProcessor
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UAimPointProcessor : public UActorComponent
{ 
public:
};

/// Class /Script/DBDGameplay.AimPointPerlinNoise
/// Size: 0x0038 (0x0000B8 - 0x0000F0)
class UAimPointPerlinNoise : public UAimPointProcessor
{ 
public:
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x00B8   (0x0004)  MISSED
	float                                              _baseInaccuracyNoisePersistence;                            // 0x00BC   (0x0004)  
	int32_t                                            _baseInaccuracyNoiseOctaveCount;                            // 0x00C0   (0x0004)  
	float                                              _baseInaccuracyNoiseAmplitude;                              // 0x00C4   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00C8   (0x0004)  MISSED
	float                                              _baseInaccuracyNoiseFrequency;                              // 0x00CC   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x00D0   (0x0004)  MISSED
	float                                              _timeOffset;                                                // 0x00D4   (0x0004)  
	unsigned char                                      UnknownData03_6[0x18];                                      // 0x00D8   (0x0018)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.AimPointPerlinNoise.SetNoiseFrequencyMultiplier
	// void SetNoiseFrequencyMultiplier(float Multiplier);                                                                   // [0x5060b20] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDGameplay.AimPointPerlinNoise.SetNoiseAmplitudeMultiplier
	// void SetNoiseAmplitudeMultiplier(float Multiplier);                                                                   // [0x5060aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoisePersistence
	// void SetBaseInaccuracyNoisePersistence(float noisePersistence);                                                       // [0x5060620] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseOctaveCount
	// void SetBaseInaccuracyNoiseOctaveCount(int32_t octaveCount);                                                          // [0x5060590] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseFrequency
	// void SetBaseInaccuracyNoiseFrequency(float Frequency);                                                                // [0x5060510] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDGameplay.AimPointPerlinNoise.SetBaseInaccuracyNoiseAmplitude
	// void SetBaseInaccuracyNoiseAmplitude(float Amplitude);                                                                // [0x5060490] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDGameplay.AISenseConfig_Terror
/// Size: 0x0068 (0x000050 - 0x0000B8)
class UAISenseConfig_Terror : public UAISenseConfig
{ 
public:
	class UClass*                                      Implementation;                                             // 0x0050   (0x0008)  
	float                                              MaxBreathingSoundRange;                                     // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	SDK_UNDEFINED(80,3120) /* TMap<EAITerrorLevel, float> */ __um(TerrorRanges);                                   // 0x0060   (0x0050)  
	FAISenseAffiliationFilter                          DetectionByAffiliation;                                     // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
};

/// Struct /Script/DBDGameplay.AITerrorEvent
/// Size: 0x0028 (0x000000 - 0x000028)
struct FAITerrorEvent
{ 
	FVector                                            Location;                                                   // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	class AActor*                                      Instigator;                                                 // 0x0010   (0x0008)  
	class UTerrorRadiusEmitterComponent*               TerrorEmitter;                                              // 0x0018   (0x0008)  
	FGenericTeamId                                     TeamIdentifier;                                             // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Class /Script/DBDGameplay.AISenseEvent_Terror
/// Size: 0x0028 (0x000030 - 0x000058)
class UAISenseEvent_Terror : public UAISenseEvent
{ 
public:
	FAITerrorEvent                                     Event;                                                      // 0x0030   (0x0028)  
};

/// Class /Script/DBDGameplay.AISense_Terror
/// Size: 0x0060 (0x000090 - 0x0000F0)
class UAISense_Terror : public UAISense
{ 
public:
	TArray<FAITerrorEvent>                             _events;                                                    // 0x0090   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x00A0   (0x0050)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.AISense_Terror.ReportTerrorEvent
	// void ReportTerrorEvent(class UObject* worldContextObj, FVector Location, class AActor* Instigator, class UTerrorRadiusEmitterComponent* TerrorEmitter); // [0x50602b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/DBDGameplay.BlockFeedbackBase
/// Size: 0x0008 (0x000230 - 0x000238)
class ABlockFeedbackBase : public AActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0230   (0x0008)  MISSED
};

/// Class /Script/DBDGameplay.AudioBlockFeedback
/// Size: 0x0018 (0x000238 - 0x000250)
class AAudioBlockFeedback : public ABlockFeedbackBase
{ 
public:
	class UAkAudioEvent*                               _akAudioEventBlockStart;                                    // 0x0238   (0x0008)  
	class UAkAudioEvent*                               _akAudioEventBlockStop;                                     // 0x0240   (0x0008)  
	class UAkComponent*                                _blockableAudioComponent;                                   // 0x0248   (0x0008)  
};

/// Class /Script/DBDGameplay.AuraOverriderComponent
/// Size: 0x0050 (0x0000B8 - 0x000108)
class UAuraOverriderComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x00B8   (0x0050)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.AuraOverriderComponent.ResetAura
	// void ResetAura(class AActor* Actor);                                                                                  // [0x5060400] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDGameplay.AuraOverriderComponent.ForceShowAura
	// void ForceShowAura(class AActor* Actor, FLinearColor& Color, bool IsAlwaysVisible, float MinimumOutlineDistanceVisible, float MinimumOutlineDistance); // [0x505fa40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/DBDGameplay.BaseActorAttackableComponent
/// Size: 0x0038 (0x0000B8 - 0x0000F0)
class UBaseActorAttackableComponent : public UAttackableComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	FGameplayTagContainer                              _killerProjectilesThatCanDamageActor;                       // 0x00D0   (0x0020)  


	/// Functions
	// Function /Script/DBDGameplay.BaseActorAttackableComponent.HitWithProjectile
	// void HitWithProjectile(class ABaseProjectile* Projectile);                                                            // [0x505fd60] Native|Public|BlueprintCallable 
};

/// Class /Script/DBDGameplay.BaseCamperCollectable
/// Size: 0x0048 (0x0004C8 - 0x000510)
class ABaseCamperCollectable : public ACollectable
{ 
public:
	class USpherePlayerOverlapComponent*               _interactable;                                              // 0x04C8   (0x0008)  
	class UInteractor*                                 _collectableInteractor;                                     // 0x04D0   (0x0008)  
	class UDropItemInteraction*                        _dropInteraction;                                           // 0x04D8   (0x0008)  
	class UCollectItemInteraction*                     _collectInteraction;                                        // 0x04E0   (0x0008)  
	class USphereComponent*                            _infectablePrimitive;                                       // 0x04E8   (0x0008)  
	class UDBDOutlineComponent*                        _outlineComponent;                                          // 0x04F0   (0x0008)  
	class UMaterialHelper*                             _materialHelper;                                            // 0x04F8   (0x0008)  
	class USurvivorCollectableOutlineUpdateStrategy*   _survivorCollectableOutlineUpdateStrategy;                  // 0x0500   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0508   (0x0008)  MISSED
};

/// Class /Script/DBDGameplay.BaseHusk
/// Size: 0x0028 (0x000238 - 0x000260)
class ABaseHusk : public ABaseVFX
{ 
public:
	class USceneComponent*                             _rootComponent;                                             // 0x0238   (0x0008)  
	class UDBDSkeletalMeshComponentBudgeted*           _huskMesh;                                                  // 0x0240   (0x0008)  
	class UCustomizedSkeletalMesh*                     _huskCustomizedSkeletalMesh;                                // 0x0248   (0x0008)  
	bool                                               _shouldDeactivateVFX;                                       // 0x0250   (0x0001)  
	unsigned char                                      UnknownData00_5[0xB];                                       // 0x0251   (0x000B)  MISSED
	bool                                               _updateWeaponAccessories;                                   // 0x025C   (0x0001)  
	bool                                               _shouldWeaponBeVisible;                                     // 0x025D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x025E   (0x0002)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.BaseHusk.SetScalarParameterOnAllChildrenMeshes
	// void SetScalarParameterOnAllChildrenMeshes(FName ParameterName, float value, class USkeletalMeshComponent* Mesh);     // [0x5060e60] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DBDGameplay.BaseHusk.SetHuskVisibility
	// void SetHuskVisibility(bool visible);                                                                                 // [0x5060990] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DBDGameplay.BaseHusk.InitializeHusk
	// void InitializeHusk(class UCustomizedSkeletalMesh* customizedSkeletalMeshToCopy);                                     // [0x505fdf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDGameplay.BaseHusk.GetCopiedCustomizedSkeletalMesh
	// class UCustomizedSkeletalMesh* GetCopiedCustomizedSkeletalMesh();                                                     // [0x505fca0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplay.BaseHusk.Cosmetic_InitializeSkeletalMesh
	// void Cosmetic_InitializeSkeletalMesh(class USkeletalMeshComponent* Mesh);                                             // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/DBDGameplay.FlashlightableLightingStrategy
/// Size: 0x0000 (0x000030 - 0x000030)
class UFlashlightableLightingStrategy : public UObject
{ 
public:
};

/// Class /Script/DBDGameplay.FlashlightablePointsLightingStrategy
/// Size: 0x0010 (0x000030 - 0x000040)
class UFlashlightablePointsLightingStrategy : public UFlashlightableLightingStrategy
{ 
public:
	class UPointsProvider*                             _pointsProvider;                                            // 0x0030   (0x0008)  
	float                                              _impactPointDistanceError;                                  // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/DBDGameplay.BlindFlashlightableLightingStrategy
/// Size: 0x0010 (0x000040 - 0x000050)
class UBlindFlashlightableLightingStrategy : public UFlashlightablePointsLightingStrategy
{ 
public:
	TArray<FGameplayTag>                               _flashlightableIgnoreTags;                                  // 0x0040   (0x0010)  
};

/// Class /Script/DBDGameplay.FlashlightTargetFXComponent
/// Size: 0x0048 (0x0000B8 - 0x000100)
class UFlashlightTargetFXComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x00B8   (0x0030)  MISSED
	bool                                               _modifiesBeamAngle;                                         // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00E9   (0x0007)  MISSED
	class UFlashlightableComponent*                    _flashlightable;                                            // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x00F8   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.FlashlightTargetFXComponent.OnIsLitChanged
	// void OnIsLitChanged(bool IsLit);                                                                                      // [0x5064800] Final|Native|Private 
};

/// Class /Script/DBDGameplay.BlindFlashlightTargetFXComponent
/// Size: 0x0030 (0x000100 - 0x000130)
class UBlindFlashlightTargetFXComponent : public UFlashlightTargetFXComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0100   (0x0030)  MISSED
};

/// Struct /Script/DBDGameplay.BlockFeedbackStyleOverride
/// Size: 0x0030 (0x000000 - 0x000030)
struct FBlockFeedbackStyleOverride
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
	TArray<class ABlockFeedbackBase*>                  BlockSelfFeedbacks;                                         // 0x0010   (0x0010)  
	TArray<class ABlockFeedbackBase*>                  BlockOtherFeedbacks;                                        // 0x0020   (0x0010)  
};

/// Class /Script/DBDGameplay.BlockFeedbackComponent
/// Size: 0x0088 (0x0000B8 - 0x000140)
class UBlockFeedbackComponent : public UActorComponent
{ 
public:
	class ULocalPlayerTrackerComponent*                _localPlayerTracker;                                        // 0x00B8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x00C0   (0x0010)  MISSED
	TArray<class ABlockFeedbackBase*>                  _defaultBlockSelfFeedbacks;                                 // 0x00D0   (0x0010)  
	TArray<class ABlockFeedbackBase*>                  _defaultBlockOtherFeedbacks;                                // 0x00E0   (0x0010)  
	TArray<class UClass*>                              _defaultBlockSelfFeedbackClasses;                           // 0x00F0   (0x0010)  
	TArray<class UClass*>                              _defaultBlockOtherFeedbackClasses;                          // 0x0100   (0x0010)  
	TArray<FBlockFeedbackStyleOverride>                _styleOverrides;                                            // 0x0110   (0x0010)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0120   (0x0020)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.BlockFeedbackComponent.OnLocallyObservedChanged
	// void OnLocallyObservedChanged();                                                                                      // [0x505ffa0] Final|Native|Private 
};

/// Class /Script/DBDGameplay.FootstepCreatorComponent
/// Size: 0x0050 (0x0000B8 - 0x000108)
class UFootstepCreatorComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x00B8   (0x0020)  MISSED
	class UCurveFloat*                                 _fadeCurve;                                                 // 0x00D8   (0x0008)  
	class UCurveFloat*                                 _veinsCurve;                                                // 0x00E0   (0x0008)  
	class UClass*                                      _footstepManagerComponentClass;                             // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00F0   (0x0008)  MISSED
	float                                              _secondsUntilFootprintTrigger;                              // 0x00F8   (0x0004)  
	bool                                               _canSpawnFootstepsDefaultValue;                             // 0x00FC   (0x0001)  
	unsigned char                                      UnknownData02_6[0xB];                                       // 0x00FD   (0x000B)  MISSED
};

/// Class /Script/DBDGameplay.CamperFootstepCreatorComponent
/// Size: 0x0238 (0x000108 - 0x000340)
class UCamperFootstepCreatorComponent : public UFootstepCreatorComponent
{ 
public:
	TArray<FGameplayTag>                               _disallowFootstepsSpawnPerkFlags;                           // 0x0108   (0x0010)  
	FStatProperty                                      _footstepIndicatorAngle;                                    // 0x0118   (0x0088)  
	FStatProperty                                      _footstepIndicatorDecalSize;                                // 0x01A0   (0x0088)  
	FStatProperty                                      _footstepIndicatorDurationAdditive;                         // 0x0228   (0x0088)  
	FStatProperty                                      _footstepIndicatorDurationMultiplictive;                    // 0x02B0   (0x0088)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0338   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.CamperFootstepCreatorComponent.OnLoudNoiseTriggered
	// void OnLoudNoiseTriggered(class AActor* originator, class AActor* instigatingActor, FVector Location, bool shouldTrack, float& audibleRange, bool isQuickAction, bool isDeceivingNoise); // [0x505ffc0] Final|Native|Protected|HasOutParms|HasDefaults 
};

/// Class /Script/DBDGameplay.FootstepPerceptionComponent
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UFootstepPerceptionComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x00B8   (0x0010)  MISSED
	bool                                               _canSeeFootstepsDefaultValue;                               // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00C9   (0x0007)  MISSED
};

/// Class /Script/DBDGameplay.PlayerFootstepPerceptionComponent
/// Size: 0x0040 (0x0000D0 - 0x000110)
class UPlayerFootstepPerceptionComponent : public UFootstepPerceptionComponent
{ 
public:
	TArray<FGameplayTag>                               _allowFootstepsSeenPerkFlags;                               // 0x00D0   (0x0010)  
	TArray<FGameplayTag>                               _disallowFootstepsSeenPerkFlags;                            // 0x00E0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x00F0   (0x0020)  MISSED
};

/// Class /Script/DBDGameplay.CamperFootstepPerceptionComponent
/// Size: 0x0000 (0x000110 - 0x000110)
class UCamperFootstepPerceptionComponent : public UPlayerFootstepPerceptionComponent
{ 
public:
};

/// Class /Script/DBDGameplay.CharacterOptimizer
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class UCharacterOptimizer : public UActorComponent
{ 
public:
	float                                              _characterMovementTickRateWhenInsignificant;                // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x00BC   (0x000C)  MISSED
};

/// Class /Script/DBDGameplay.ClosetHideInteraction
/// Size: 0x0000 (0x000680 - 0x000680)
class UClosetHideInteraction : public UBaseLockerInteraction
{ 
public:


	/// Functions
	// Function /Script/DBDGameplay.ClosetHideInteraction.SetPlayerInCloset
	// void SetPlayerInCloset(class ADBDPlayer* Player);                                                                     // [0x5060ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDGameplay.ClosetHideInteraction.SetOtherInteractorsUsable
	// void SetOtherInteractorsUsable(bool IsEnabled);                                                                       // [0x5060c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDGameplay.ClosetHideInteraction.SetCollisionWithCloset
	// void SetCollisionWithCloset(bool IsEnabled, class ADBDPlayer* Player);                                                // [0x50606a0] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/DBDGameplay.ClosetHideInteraction.IsRushed
	// bool IsRushed();                                                                                                      // [0x505ff80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplay.ClosetHideInteraction.IsOccupied
	// bool IsOccupied();                                                                                                    // [0x505ff50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplay.ClosetHideInteraction.IsInteractingPlayerInsideCloset
	// bool IsInteractingPlayerInsideCloset(class ADBDPlayer* Player);                                                       // [0x505feb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplay.ClosetHideInteraction.GetPlayerInCloset
	// class ADBDPlayer* GetPlayerInCloset();                                                                                // [0x505fd00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplay.ClosetHideInteraction.GetInsideInteractor
	// class UInteractor* GetInsideInteractor();                                                                             // [0x505fcd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplay.ClosetHideInteraction.FireSoundEventFromInteractor
	// void FireSoundEventFromInteractor(class AActor* Instigator, class ADBDPlayer* instigatingPlayer);                     // [0x505f970] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDGameplay.ClosetHideEnterInteraction
/// Size: 0x0020 (0x000680 - 0x0006A0)
class UClosetHideEnterInteraction : public UClosetHideInteraction
{ 
public:
	class UClass*                                      _closetBlindnessStatusEffectClass;                          // 0x0680   (0x0008)  
	float                                              _ejectionFromLockerDelaySeconds;                            // 0x0688   (0x0004)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x068C   (0x0014)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.ClosetHideEnterInteraction.NotifyClosetAnalytics
	// void NotifyClosetAnalytics(class ACamperPlayer* Survivor);                                                            // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/DBDGameplay.ClosetHideEnterInteraction.EjectSurvivorFromLocker
	// void EjectSurvivorFromLocker(class ACamperPlayer* Survivor, class ALocker* Locker);                                   // [0x505f8a0] Final|Native|Protected 
	// Function /Script/DBDGameplay.ClosetHideEnterInteraction.AdjustActorLocation
	// void AdjustActorLocation(class ADBDPlayer* Player);                                                                   // [0x61d2f50] Event|Protected|BlueprintEvent 
};

/// Class /Script/DBDGameplay.CollectableComponentUtilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UCollectableComponentUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DBDGameplay.CollectableComponentUtilities.GetCollector
	// class ADBDPlayer* GetCollector(class UActorComponent* Component);                                                     // [0x505fc10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/DBDGameplay.ConspicuousActionComponent
/// Size: 0x0030 (0x0000B8 - 0x0000E8)
class UConspicuousActionComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x00B8   (0x0030)  MISSED
};

/// Class /Script/DBDGameplay.DBDCharacterPusherComponent
/// Size: 0x0010 (0x000170 - 0x000180)
class UDBDCharacterPusherComponent : public UCharacterPusherComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0170   (0x0010)  MISSED
};

/// Class /Script/DBDGameplay.DebugIndicator
/// Size: 0x0020 (0x000230 - 0x000250)
class ADebugIndicator : public AActor
{ 
public:
	class UStaticMeshComponent*                        _staticMeshComponent;                                       // 0x0230   (0x0008)  
	class UDBDOutlineComponent*                        _outlineComponent;                                          // 0x0238   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0240   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.DebugIndicator.SetVisible
	// void SetVisible(bool visible);                                                                                        // [0x5060f90] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDGameplay.DebugIndicator.SetColor
	// void SetColor(FLinearColor Color);                                                                                    // [0x5060770] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDGameplay.DebugTimerLogComponent
/// Size: 0x0080 (0x0000B8 - 0x000138)
class UDebugTimerLogComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x00B8   (0x0030)  MISSED
	SDK_UNDEFINED(16,3121) /* FString */               __um(_timerDisplayName);                                    // 0x00E8   (0x0010)  
	FSpeedBasedNetSyncedValue                          _timerCountdown;                                            // 0x00F8   (0x0038)  
	float                                              _timerRemainingPercent;                                     // 0x0130   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0134   (0x0004)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.DebugTimerLogComponent.OnRep_TimerCountdown
	// void OnRep_TimerCountdown();                                                                                          // [0x5060290] Final|Native|Private 
};

/// Class /Script/DBDGameplay.DecoySlasherComponent
/// Size: 0x0040 (0x0000B8 - 0x0000F8)
class UDecoySlasherComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	SDK_UNDEFINED(16,3122) /* FMulticastInlineDelegate */ __um(OnStunned);                                         // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,3123) /* FMulticastInlineDelegate */ __um(TriggerDecoyVisibilityVFX);                         // 0x00D0   (0x0010)  
	bool                                               HasTerrorRadius;                                            // 0x00E0   (0x0001)  
	bool                                               HasRedGlow;                                                 // 0x00E1   (0x0001)  
	bool                                               _isActive;                                                  // 0x00E2   (0x0001)  
	bool                                               _initialized;                                               // 0x00E3   (0x0001)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	class UTerrorRadiusEmitterComponent*               _terrorRadiusEmitter;                                       // 0x00E8   (0x0008)  
	class URedStainComponent*                          _redStainComponent;                                         // 0x00F0   (0x0008)  


	/// Functions
	// Function /Script/DBDGameplay.DecoySlasherComponent.SetDecoyIsActive
	// void SetDecoyIsActive(bool IsActive, FVector& Location, FRotator& Rotation, bool visibleRedGlow);                     // [0x5060800] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/DBDGameplay.DecoySlasherComponent.OnRealSlasherTerrorRadiusChanged
	// void OnRealSlasherTerrorRadiusChanged(float NewValue);                                                                // [0x5060210] Final|Native|Private 
	// Function /Script/DBDGameplay.DecoySlasherComponent.IsDecoyActive
	// bool IsDecoyActive();                                                                                                 // [0x505fe80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplay.DecoySlasherComponent.GetRealSlasher
	// class ASlasherPlayer* GetRealSlasher();                                                                               // [0x505fd30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplay.DecoySlasherComponent.DoPostVFXUpdates
	// void DoPostVFXUpdates(FVector& Location, FRotator& Rotation);                                                         // [0x505f7c0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/DBDGameplay.DecoySlasherComponent.CopyCustomizationFromSlasher
	// void CopyCustomizationFromSlasher();                                                                                  // [0x505f7a0] Final|Native|Private 
};

/// Class /Script/DBDGameplay.EndGameEffectsComponent
/// Size: 0x0028 (0x0000B8 - 0x0000E0)
class UEndGameEffectsComponent : public UActorComponent
{ 
public:
	bool                                               _hasEndGameBegun;                                           // 0x00B8   (0x0001)  
	bool                                               _playCameraShakeOnce;                                       // 0x00B9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x26];                                      // 0x00BA   (0x0026)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.EndGameEffectsComponent.UnregisterLocallyObservedEvents
	// void UnregisterLocallyObservedEvents();                                                                               // [0x61d2f50] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDGameplay.EndGameEffectsComponent.StartUpdateTimer
	// void StartUpdateTimer(FGameplayTag gameEventType, FGameEventData& GameEventData);                                     // [0x61d2f50] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDGameplay.EndGameEffectsComponent.RegisterLocallyObservedEvents
	// void RegisterLocallyObservedEvents();                                                                                 // [0x61d2f50] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDGameplay.EndGameEffectsComponent.OnLocallyObservedChanged
	// void OnLocallyObservedChanged(class ADBDPlayer* Player);                                                              // [0x61d2f50] Event|Protected|BlueprintEvent 
};

/// Class /Script/DBDGameplay.EtherealComponent
/// Size: 0x0040 (0x0000B8 - 0x0000F8)
class UEtherealComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x00B8   (0x0028)  MISSED
	bool                                               _isEthereal;                                                // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x17];                                      // 0x00E1   (0x0017)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.EtherealComponent.Server_SetIsEthereal
	// void Server_SetIsEthereal(float Timestamp, bool Ethereal);                                                            // [0x5064ae0] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/DBDGameplay.EtherealComponent.OnRep_OnIsEtherealChanged
	// void OnRep_OnIsEtherealChanged();                                                                                     // [0x5064910] Final|Native|Private 
};

/// Class /Script/DBDGameplay.RangeToActorsTrackerStrategy
/// Size: 0x0040 (0x000030 - 0x000070)
class URangeToActorsTrackerStrategy : public UObject
{ 
public:
	FDBDTunableRowHandle                               _range;                                                     // 0x0030   (0x0028)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0058   (0x0018)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.RangeToActorsTrackerStrategy.OnInRangeToTrackedActorsChanged
	// void OnInRangeToTrackedActorsChanged(bool inRange);                                                                   // [0x506d940] Final|Native|Private 
};

/// Class /Script/DBDGameplay.ExitGateSwitchesRangeTrackerStrategy
/// Size: 0x0000 (0x000070 - 0x000070)
class UExitGateSwitchesRangeTrackerStrategy : public URangeToActorsTrackerStrategy
{ 
public:
};

/// Class /Script/DBDGameplay.FadeComponent
/// Size: 0x0020 (0x0000B8 - 0x0000D8)
class UFadeComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,3124) /* FMulticastInlineDelegate */ __um(OnFadePercentChanged);                              // 0x00B8   (0x0010)  
	float                                              _fadeDuration;                                              // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x00CC   (0x000C)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.FadeComponent.GetFadePercent
	// float GetFadePercent();                                                                                               // [0x5064680] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDGameplay.FadingBlockFeedback
/// Size: 0x0018 (0x000238 - 0x000250)
class AFadingBlockFeedback : public ABlockFeedbackBase
{ 
public:
	class UCurveFloat*                                 _fadeCurve;                                                 // 0x0238   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0240   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.FadingBlockFeedback.OnFadeOutStarted
	// void OnFadeOutStarted(float fadeDuration);                                                                            // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/DBDGameplay.FadingBlockFeedback.OnFadeOutEnded
	// void OnFadeOutEnded();                                                                                                // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
};

/// Class /Script/DBDGameplay.FirecrackerSpawner
/// Size: 0x0010 (0x000510 - 0x000520)
class AFirecrackerSpawner : public ABaseCamperCollectable
{ 
public:
	class UClass*                                      _firecrackerClass;                                          // 0x0510   (0x0008)  
	float                                              _possibleThrowHeight;                                       // 0x0518   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x051C   (0x0004)  MISSED
};

/// Class /Script/DBDGameplay.FirecrackerSpawnInteraction
/// Size: 0x0000 (0x000650 - 0x000650)
class UFirecrackerSpawnInteraction : public UInteractionDefinition
{ 
public:
};

/// Class /Script/DBDGameplay.Flashlight
/// Size: 0x00C8 (0x000510 - 0x0005D8)
class AFlashlight : public ABaseCamperCollectable
{ 
public:
	FGameplayTagContainer                              _allowedInteractionSemanticsDuringUse;                      // 0x0510   (0x0020)  
	unsigned char                                      UnknownData00_5[0x58];                                      // 0x0530   (0x0058)  MISSED
	bool                                               _shouldUseCooldowns;                                        // 0x0588   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0589   (0x0003)  MISSED
	float                                              _cooldownWhileOnDuration;                                   // 0x058C   (0x0004)  
	float                                              _cooldownWhileOffDuration;                                  // 0x0590   (0x0004)  
	unsigned char                                      UnknownData02_6[0x44];                                      // 0x0594   (0x0044)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.Flashlight.GetSpotlightComponent
	// class USpotLightComponent* GetSpotlightComponent();                                                                   // [0x50646e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDGameplay.FlashlightableComponent
/// Size: 0x0088 (0x0000B8 - 0x000140)
class UFlashlightableComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,3125) /* FMulticastInlineDelegate */ __um(OnFlashlightAddedEvent);                            // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3126) /* FMulticastInlineDelegate */ __um(OnFlashlightRemovedEvent);                          // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,3127) /* FMulticastInlineDelegate */ __um(OnFlashlightLitChangedEvent);                       // 0x00D8   (0x0010)  
	class UFlashlightableLightingStrategy*             _lightingStrategy;                                          // 0x00E8   (0x0008)  
	SDK_UNDEFINED(80,3128) /* TSet<UFlashlightComponent*> */ __um(_flashlights);                                   // 0x00F0   (0x0050)  


	/// Functions
	// Function /Script/DBDGameplay.FlashlightableComponent.OnFlashlightLitChangedEvent__DelegateSignature
	// void OnFlashlightLitChangedEvent__DelegateSignature(bool IsLit);                                                      // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/DBDGameplay.FlashlightableComponent.OnFlashlightAddedRemovedEvent__DelegateSignature
	// void OnFlashlightAddedRemovedEvent__DelegateSignature(class UFlashlightComponent* Flashlight);                        // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/DBDGameplay.FlashlightableComponent.IsLit
	// bool IsLit();                                                                                                         // [0x5064710] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDGameplay.FlashlightComponent
/// Size: 0x0150 (0x0000B8 - 0x000208)
class UFlashlightComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	SDK_UNDEFINED(16,3129) /* FMulticastInlineDelegate */ __um(OnFlashlightTurnedOn);                              // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,3130) /* FMulticastInlineDelegate */ __um(OnFlashlightTurnedOff);                             // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,3131) /* FMulticastInlineDelegate */ __um(OnFlashlightablesUpdated);                          // 0x00E0   (0x0010)  
	FDBDTunableRowHandle                               _baseBlindnessDuration;                                     // 0x00F0   (0x0028)  
	float                                              _baseAccuracy;                                              // 0x0118   (0x0004)  
	float                                              _lagDuration;                                               // 0x011C   (0x0004)  
	SDK_UNDEFINED(80,3132) /* TSet<UFlashlightableComponent*> */ __um(_flashlightables);                           // 0x0120   (0x0050)  
	SDK_UNDEFINED(80,3133) /* TSet<UFlashlightableComponent*> */ __um(_autonomousLitFlashlightables);              // 0x0170   (0x0050)  
	TArray<class UFlashlightableComponent*>            _replicatedLitFlashlightables;                              // 0x01C0   (0x0010)  
	bool                                               _isOwnerLagging;                                            // 0x01D0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x37];                                      // 0x01D1   (0x0037)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.FlashlightComponent.TurnOn
	// void TurnOn();                                                                                                        // [0x5064ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDGameplay.FlashlightComponent.TurnOff
	// void TurnOff();                                                                                                       // [0x5064cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDGameplay.FlashlightComponent.Server_SetAndUpdateAutonomousLitFlashlightables
	// void Server_SetAndUpdateAutonomousLitFlashlightables(TArray<UFlashlightableComponent*> newLitFlashlightables);        // [0x5064a40] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/DBDGameplay.FlashlightComponent.OnRep_ReplicatedLitFlashlightables
	// void OnRep_ReplicatedLitFlashlightables();                                                                            // [0x5064930] Final|Native|Private 
	// Function /Script/DBDGameplay.FlashlightComponent.OnRep_IsOwnerLagging
	// void OnRep_IsOwnerLagging();                                                                                          // [0x50648f0] Final|Native|Private 
	// Function /Script/DBDGameplay.FlashlightComponent.OnFlashlightEvent__DelegateSignature
	// void OnFlashlightEvent__DelegateSignature();                                                                          // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/DBDGameplay.FlashlightComponent.IsOn
	// bool IsOn();                                                                                                          // [0x5064740] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplay.FlashlightComponent.GetEffectiveTimeToBlindModifier
	// float GetEffectiveTimeToBlindModifier();                                                                              // [0x5064650] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplay.FlashlightComponent.GetEffectiveBlindnessDuration
	// float GetEffectiveBlindnessDuration();                                                                                // [0x50645c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDGameplay.FlashlightConeComponent
/// Size: 0x00A0 (0x0000B8 - 0x000158)
class UFlashlightConeComponent : public UActorComponent
{ 
public:
	FVector                                            AIAimBeamLocationOffset;                                    // 0x00B8   (0x000C)  
	FRotator                                           AIAimBeamRotationOffset;                                    // 0x00C4   (0x000C)  
	class USceneComponent*                             _flashlightBottom;                                          // 0x00D0   (0x0008)  
	FDBDTunableRowHandle                               _baseBeamAngle;                                             // 0x00D8   (0x0028)  
	FDBDTunableRowHandle                               _baseBeamLength;                                            // 0x0100   (0x0028)  
	SDK_UNDEFINED(8,3134) /* TWeakObjectPtr<AActor*> */ __um(_cacheCollidingActor);                                // 0x0128   (0x0008)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0130   (0x0018)  MISSED
	TArray<FGameplayTag>                               _tagsPreventingBeamOcclusion;                               // 0x0148   (0x0010)  


	/// Functions
	// Function /Script/DBDGameplay.FlashlightConeComponent.GetOcclusionDistance
	// float GetOcclusionDistance();                                                                                         // [0x50646b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplay.FlashlightConeComponent.GetEffectiveConeLength
	// float GetEffectiveConeLength();                                                                                       // [0x5064620] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplay.FlashlightConeComponent.GetEffectiveConeHalfAngle
	// float GetEffectiveConeHalfAngle();                                                                                    // [0x50645f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDGameplay.FlashlightFXComponent
/// Size: 0x01B0 (0x0000B8 - 0x000268)
class UFlashlightFXComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,3135) /* FMulticastInlineDelegate */ __um(OnFlashEvent);                                      // 0x00B8   (0x0010)  
	class USceneComponent*                             _tip;                                                       // 0x00C8   (0x0008)  
	class UStaticMeshComponent*                        _centerGlowMesh;                                            // 0x00D0   (0x0008)  
	class USplineMeshComponent*                        _beamMesh;                                                  // 0x00D8   (0x0008)  
	float                                              _minimumOcclusionDistanceForSpotlight;                      // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	class UCurveFloat*                                 _flashEffectIntensityCurve;                                 // 0x00E8   (0x0008)  
	float                                              _flashEffectDuration;                                       // 0x00F0   (0x0004)  
	float                                              _spotLightHalfAngle;                                        // 0x00F4   (0x0004)  
	float                                              _spotLightIntensity;                                        // 0x00F8   (0x0004)  
	float                                              _beamBlindingHalfAngle;                                     // 0x00FC   (0x0004)  
	float                                              _beamFlashHalfAngle;                                        // 0x0100   (0x0004)  
	float                                              _beamBlindingRatioInterpSpeedWithTarget;                    // 0x0104   (0x0004)  
	float                                              _beamBlindingRatioInterpSpeedWithoutTarget;                 // 0x0108   (0x0004)  
	bool                                               _resizeConeLength;                                          // 0x010C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x010D   (0x0003)  MISSED
	float                                              _centerGlowWidthScaleWithoutBlindTarget;                    // 0x0110   (0x0004)  
	float                                              _centerGlowWidthScaleWithBlindTarget;                       // 0x0114   (0x0004)  
	float                                              _centerGlowWidthScaleDuringFlash;                           // 0x0118   (0x0004)  
	float                                              _centerGlowShrinkDistance;                                  // 0x011C   (0x0004)  
	float                                              _centerGlowLengthMaxScale;                                  // 0x0120   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0124   (0x0004)  MISSED
	FAkObservedPlayerSoundLoop                         _aimedAtSoundLoop;                                          // 0x0128   (0x0040)  
	class UFlashlightTargetFXComponent*                _currentBeamModifyingTarget;                                // 0x0168   (0x0008)  
	SDK_UNDEFINED(80,3136) /* TSet<UFlashlightTargetFXComponent*> */ __um(_targets);                               // 0x0170   (0x0050)  
	unsigned char                                      UnknownData03_6[0xA8];                                      // 0x01C0   (0x00A8)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.FlashlightFXComponent.UpdateFXTargets
	// void UpdateFXTargets();                                                                                               // [0x5064d00] Final|Native|Private 
	// Function /Script/DBDGameplay.FlashlightFXComponent.UpdateConeEvent
	// void UpdateConeEvent(float Length, float halfAngle);                                                                  // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/DBDGameplay.FlashlightFXComponent.PostUpdateEvent
	// void PostUpdateEvent();                                                                                               // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/DBDGameplay.FlashlightFXComponent.OnTurnedOn
	// void OnTurnedOn();                                                                                                    // [0x5064970] Final|Native|Private 
	// Function /Script/DBDGameplay.FlashlightFXComponent.OnTurnedOff
	// void OnTurnedOff();                                                                                                   // [0x5064950] Final|Native|Private 
	// Function /Script/DBDGameplay.FlashlightFXComponent.OnStopEvent
	// void OnStopEvent();                                                                                                   // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/DBDGameplay.FlashlightFXComponent.OnStartEvent
	// void OnStartEvent();                                                                                                  // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/DBDGameplay.FlashlightFXComponent.OnFlashEvent__DelegateSignature
	// void OnFlashEvent__DelegateSignature();                                                                               // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/DBDGameplay.FlashlightFXComponent.OnDroppedEvent
	// void OnDroppedEvent();                                                                                                // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/DBDGameplay.FlashlightFXComponent.OnCollectorLocallyObservedChangedEvent
	// void OnCollectorLocallyObservedChangedEvent(bool IsLocallyObserved);                                                  // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/DBDGameplay.FlashlightFXComponent.OnCollectedEvent
	// void OnCollectedEvent(class ADBDPlayer* collector);                                                                   // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/DBDGameplay.FlashlightFXComponent.GetBlindingSuccessRatio
	// float GetBlindingSuccessRatio();                                                                                      // [0x5064590] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDGameplay.FlashlightUtilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UFlashlightUtilities : public UObject
{ 
public:
};

/// Struct /Script/DBDGameplay.Footstep
/// Size: 0x0050 (0x000000 - 0x000050)
struct FFootstep
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
	class UCurveFloat*                                 FadeCurve;                                                  // 0x0020   (0x0008)  
	class UCurveFloat*                                 VeinsCurve;                                                 // 0x0028   (0x0008)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0030   (0x0010)  MISSED
	class UDBDDecalComponent*                          _decal;                                                     // 0x0040   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Class /Script/DBDGameplay.FootstepManagerComponent
/// Size: 0x0330 (0x0000B8 - 0x0003E8)
class UFootstepManagerComponent : public UActorComponent
{ 
public:
	FBHVRPerDetailModeInt                              _decalPoolSize;                                             // 0x00B8   (0x00A0)  
	FBHVRPerDetailModeFloat                            _recycleThresholdPercentage;                                // 0x0158   (0x00A0)  
	FBHVRPerDetailModeFloat                            _recycleDistancePercentage;                                 // 0x01F8   (0x00A0)  
	FBHVRPerDetailModeInt                              _maxOverlapping;                                            // 0x0298   (0x00A0)  
	float                                              _raycastHalfAngle;                                          // 0x0338   (0x0004)  
	float                                              _raycastZOffset;                                            // 0x033C   (0x0004)  
	float                                              _raycastDistance;                                           // 0x0340   (0x0004)  
	float                                              _minimumDecalSize;                                          // 0x0344   (0x0004)  
	float                                              _maximumDecalSize;                                          // 0x0348   (0x0004)  
	float                                              _projectionTickness;                                        // 0x034C   (0x0004)  
	class UMaterial*                                   _footstepsMaterial;                                         // 0x0350   (0x0008)  
	TArray<FFootstep>                                  _currentFootSteps;                                          // 0x0358   (0x0010)  
	class UDecalSpawner*                               _decalSpawner;                                              // 0x0368   (0x0008)  
	unsigned char                                      UnknownData00_6[0x78];                                      // 0x0370   (0x0078)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.FootstepManagerComponent.TriggerSpawnFootstep
	// void TriggerSpawnFootstep(class UFootstepCreatorComponent* originatorComponent, FVector Location);                    // [0x5064be0] Final|Native|Public|HasDefaults 
	// Function /Script/DBDGameplay.FootstepManagerComponent.OnUpdateObserverFootsteps
	// void OnUpdateObserverFootsteps();                                                                                     // [0x5064a20] Final|Native|Public  
	// Function /Script/DBDGameplay.FootstepManagerComponent.OnUpdateCreatorFootsteps
	// void OnUpdateCreatorFootsteps(class UFootstepCreatorComponent* creator);                                              // [0x5064990] Final|Native|Public  
};

/// Class /Script/DBDGameplay.GeneratorWithMostProgressTracker
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class UGeneratorWithMostProgressTracker : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00B8   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.GeneratorWithMostProgressTracker.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x5064890] Final|Native|Private 
	// Function /Script/DBDGameplay.GeneratorWithMostProgressTracker.OnGeneratorCompleted
	// void OnGeneratorCompleted(bool isAutoCompleted);                                                                      // [0x5064770] Final|Native|Private 
};

/// Class /Script/DBDGameplay.GlassBeadMapAddon
/// Size: 0x0018 (0x0002B8 - 0x0002D0)
class UGlassBeadMapAddon : public UItemAddon
{ 
public:
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x02B8   (0x0004)  MISSED
	float                                              _spawningCooldownTimer;                                     // 0x02BC   (0x0004)  
	class UClass*                                      _mapMarkerBPClass;                                          // 0x02C0   (0x0008)  
	class AMapMarkerActor*                             _currentMapMarker;                                          // 0x02C8   (0x0008)  


	/// Functions
	// Function /Script/DBDGameplay.GlassBeadMapAddon.Authority_OnSecondaryInputPressed
	// void Authority_OnSecondaryInputPressed(class ADBDPlayer* Player, class UInteractionDefinition* Interaction, bool fromCancelRequest); // [0x5064480] Final|Native|Private 
};

/// Class /Script/DBDGameplay.HooksWithSurvivorRangeTrackerStrategy
/// Size: 0x0068 (0x000070 - 0x0000D8)
class UHooksWithSurvivorRangeTrackerStrategy : public URangeToActorsTrackerStrategy
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0070   (0x0068)  MISSED
};

/// Class /Script/DBDGameplay.InteractionAttacherComponent
/// Size: 0x00A0 (0x0000B8 - 0x000158)
class UInteractionAttacherComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x00B8   (0x0020)  MISSED
	TArray<class UInteractionDefinition*>              _interactionDefinitions;                                    // 0x00D8   (0x0010)  
	TArray<class UChargeableComponent*>                _chargeableComponents;                                      // 0x00E8   (0x0010)  
	class UClass*                                      _interactionDefinition;                                     // 0x00F8   (0x0008)  
	EInteractionOwnerType                              _restriction;                                               // 0x0100   (0x0001)  
	bool                                               _useChargeableInteraction;                                  // 0x0101   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0102   (0x0002)  MISSED
	FName                                              _chargeableComponentID;                                     // 0x0104   (0x000C)  
	FName                                              _chargeableComponentName;                                   // 0x0110   (0x000C)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x011C   (0x0004)  MISSED
	FDBDTunableRowHandle                               _secondsToCharge;                                           // 0x0120   (0x0028)  
	bool                                               _clientWaitForOwnerInitialization;                          // 0x0148   (0x0001)  
	unsigned char                                      UnknownData03_6[0xF];                                       // 0x0149   (0x000F)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.InteractionAttacherComponent.OnRep_InteractionDefinitions
	// void OnRep_InteractionDefinitions();                                                                                  // [0x50648d0] Final|Native|Private 
	// Function /Script/DBDGameplay.InteractionAttacherComponent.OnRep_ChargeableComponents
	// void OnRep_ChargeableComponents();                                                                                    // [0x50648b0] Final|Native|Private 
};

/// Class /Script/DBDGameplay.InteractionStarterComponent
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UInteractionStarterComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	class UInteractionDefinition*                      _interaction;                                               // 0x00C0   (0x0008)  
	bool                                               _shouldStartInteraction;                                    // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00C9   (0x0007)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.InteractionStarterComponent.OnRep_ShouldStartInteraction
	// void OnRep_ShouldStartInteraction();                                                                                  // [0x50697a0] Final|Native|Private 
	// Function /Script/DBDGameplay.InteractionStarterComponent.OnInteractionStarted
	// void OnInteractionStarted();                                                                                          // [0x50692a0] Final|Native|Private 
};

/// Class /Script/DBDGameplay.KillerFlashlightSFXComponent
/// Size: 0x00A0 (0x0000B8 - 0x000158)
class UKillerFlashlightSFXComponent : public UActorComponent
{ 
public:
	FAkObservedPlayerSoundLoop                         _targetSoundLoop;                                           // 0x00B8   (0x0040)  
	TArray<class UFlashlightTargetFXComponent*>        _flashlightTargets;                                         // 0x00F8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0108   (0x0050)  MISSED
};

/// Class /Script/DBDGameplay.KillerFootstepPerceptionComponent
/// Size: 0x0000 (0x000110 - 0x000110)
class UKillerFootstepPerceptionComponent : public UPlayerFootstepPerceptionComponent
{ 
public:
};

/// Struct /Script/DBDGameplay.CustomKillerInstinctData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FCustomKillerInstinctData
{ 
	class UNiagaraSystem*                              ParticleSystemAsset;                                        // 0x0000   (0x0008)  
	TArray<FGameplayTag>                               SurvivorStateTags;                                          // 0x0008   (0x0010)  
	TArray<FGameplayTag>                               KillerStateTags;                                            // 0x0018   (0x0010)  
};

/// Class /Script/DBDGameplay.KillerInstinctComponent
/// Size: 0x0178 (0x0000B8 - 0x000230)
class UKillerInstinctComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	FCustomKillerInstinctData                          _defaultKillerInstinctAsset;                                // 0x00C0   (0x0028)  
	class UNiagaraComponent*                           _particleSystemComponent;                                   // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00F0   (0x0004)  MISSED
	FLinearColor                                       _camperHighlightColorOverride;                              // 0x00F4   (0x0010)  
	unsigned char                                      UnknownData02_5[0xAC];                                      // 0x0104   (0x00AC)  MISSED
	TArray<FCustomKillerInstinctData>                  _customKillerInstinctData;                                  // 0x01B0   (0x0010)  
	FCustomKillerInstinctData                          _currentKillerInstinctData;                                 // 0x01C0   (0x0028)  
	unsigned char                                      UnknownData03_6[0x48];                                      // 0x01E8   (0x0048)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.KillerInstinctComponent.SetParticleSystem
	// void SetParticleSystem(class UNiagaraComponent* ParticleSystemComponent);                                             // [0x5069850] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DBDGameplay.KillerInstinctComponent.OnKillerLocallyObservedChanged
	// void OnKillerLocallyObservedChanged(bool locallyObserved);                                                            // [0x50692c0] Final|Native|Private 
	// Function /Script/DBDGameplay.KillerInstinctComponent.IsOwnerInKillerInstinctRadius
	// bool IsOwnerInKillerInstinctRadius();                                                                                 // [0x50684a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplay.KillerInstinctComponent.GetParticleSystem
	// class UNiagaraComponent* GetParticleSystem();                                                                         // [0x5068440] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/DBDGameplay.KillerScoringComponent
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UKillerScoringComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00B8   (0x0018)  MISSED
};

/// Class /Script/DBDGameplay.LimitGeneratorRegressionEventComponent
/// Size: 0x01A8 (0x0000B8 - 0x000260)
class ULimitGeneratorRegressionEventComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,3137) /* FMulticastInlineDelegate */ __um(Cosmetic_OnRegressionEvent);                        // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3138) /* FMulticastInlineDelegate */ __um(Cosmetic_OnRegressionEventZoneEntered);             // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,3139) /* FMulticastInlineDelegate */ __um(Cosmetic_OnRegressionEventZoneExited);              // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,3140) /* FMulticastInlineDelegate */ __um(Cosmetic_OnRepairStarted);                          // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,3141) /* FMulticastInlineDelegate */ __um(Cosmetic_OnRepairStopped);                          // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,3142) /* FMulticastInlineDelegate */ __um(Cosmetic_OnBlockingStatusChanged);                  // 0x0108   (0x0010)  
	int32_t                                            _regressionEventsSuffered;                                  // 0x0118   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x011C   (0x0004)  MISSED
	FDBDTunableRowHandle                               _numberLastRegressionEventsToShow;                          // 0x0120   (0x0028)  
	FDBDTunableRowHandle                               _maxNumberRegressionEventsAllowed;                          // 0x0148   (0x0028)  
	FDBDTunableRowHandle                               _thresholdImmediateRegressionToConsiderRegressionEvent;     // 0x0170   (0x0028)  
	FDBDTunableRowHandle                               _immediateRegressionPercentage;                             // 0x0198   (0x0028)  
	FDBDTunableRowHandle                               _immediateRegressionPercentageLimitRegressionEvents;        // 0x01C0   (0x0028)  
	float                                              _killerProximityZoneRadius;                                 // 0x01E8   (0x0004)  
	FCollisionProfileName                              _killerProximityZoneDefaultCollisionProfile;                // 0x01EC   (0x000C)  
	FCollisionProfileName                              _killerProximityZoneNoCollisionProfile;                     // 0x01F8   (0x000C)  
	float                                              _waitTimeAfterGeneratorWasInteractedUponToTriggerVfx;       // 0x0204   (0x0004)  
	class USphereComponent*                            _killerProximityZoneForRegressionEvents;                    // 0x0208   (0x0008)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0210   (0x0050)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.LimitGeneratorRegressionEventComponent.OnRep_RegressionEventsSuffered
	// void OnRep_RegressionEventsSuffered();                                                                                // [0x5069780] Final|Native|Private 
	// Function /Script/DBDGameplay.LimitGeneratorRegressionEventComponent.OnRegressionEvent__DelegateSignature
	// void OnRegressionEvent__DelegateSignature(int32_t currentRegressionLevel, bool survivorInteracting);                  // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/DBDGameplay.LimitGeneratorRegressionEventComponent.OnKillerProximityZoneForRegressionEventsOverlapEnd
	// void OnKillerProximityZoneForRegressionEventsOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x5069570] Final|Native|Private 
	// Function /Script/DBDGameplay.LimitGeneratorRegressionEventComponent.OnKillerProximityZoneForRegressionEventsOverlapBegin
	// void OnKillerProximityZoneForRegressionEventsOverlapBegin(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x5069350] Final|Native|Private|HasOutParms 
	// Function /Script/DBDGameplay.LimitGeneratorRegressionEventComponent.OnBlockingStatusChanged__DelegateSignature
	// void OnBlockingStatusChanged__DelegateSignature(int32_t currentRegressionLevel, bool Blocked);                        // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/DBDGameplay.LimitGeneratorRegressionEventComponent.GetMaxNumberRegressionEventsAllowed
	// int32_t GetMaxNumberRegressionEventsAllowed();                                                                        // [0x5068410] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplay.LimitGeneratorRegressionEventComponent.CosmeticEvent__DelegateSignature
	// void CosmeticEvent__DelegateSignature(int32_t currentRegressionLevel);                                                // [0x61d2f50] MulticastDelegate|Public|Delegate 
};

/// Class /Script/DBDGameplay.LockerExitInteraction
/// Size: 0x0010 (0x000680 - 0x000690)
class ULockerExitInteraction : public UClosetHideInteraction
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0680   (0x0010)  MISSED
};

/// Class /Script/DBDGameplay.LockerGrabInteraction
/// Size: 0x0010 (0x000680 - 0x000690)
class ULockerGrabInteraction : public USearchLockerInteraction
{ 
public:
	class UClass*                                      _lockerGrabBlindImmunity;                                   // 0x0680   (0x0008)  
	class ACamperPlayer*                               _survivorInLocker;                                          // 0x0688   (0x0008)  
};

/// Struct /Script/DBDGameplay.LullabyKillerData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FLullabyKillerData
{ 
	FGameplayTag                                       KillerPresenceTag;                                          // 0x0000   (0x000C)  
	FGameplayTag                                       KillerLullabyActivationState;                               // 0x000C   (0x000C)  
	FGameplayTag                                       SurvivorLullabyActivationState;                             // 0x0018   (0x000C)  
	float                                              KillerLullabyDistance;                                      // 0x0024   (0x0004)  
};

/// Class /Script/DBDGameplay.LullabyFeedbackComponent
/// Size: 0x0080 (0x0000B8 - 0x000138)
class ULullabyFeedbackComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	TArray<FLullabyKillerData>                         _killersData;                                               // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x58];                                      // 0x00E0   (0x0058)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.LullabyFeedbackComponent.OnSlasherSet
	// void OnSlasherSet(class ASlasherPlayer* killer);                                                                      // [0x50697c0] Final|Native|Private 
};

/// Class /Script/DBDGameplay.MapCollectable
/// Size: 0x0000 (0x000510 - 0x000510)
class AMapCollectable : public ABaseCamperCollectable
{ 
public:


	/// Functions
	// Function /Script/DBDGameplay.MapCollectable.GetChargerComponent
	// class UChargerComponent* GetChargerComponent();                                                                       // [0x61d2f50] Event|Public|BlueprintEvent|Const 
	// Function /Script/DBDGameplay.MapCollectable.GetChargeableComponent
	// class UChargeableComponent* GetChargeableComponent();                                                                 // [0x61d2f50] Event|Public|BlueprintEvent|Const 
	// Function /Script/DBDGameplay.MapCollectable.GetActorKnowledgeCollection
	// class UActorKnowledgeCollection* GetActorKnowledgeCollection();                                                       // [0x61d2f50] Event|Public|BlueprintEvent|Const 
};

/// Class /Script/DBDGameplay.MapMarkerActor
/// Size: 0x0000 (0x000230 - 0x000230)
class AMapMarkerActor : public AActor
{ 
public:


	/// Functions
	// Function /Script/DBDGameplay.MapMarkerActor.OnDestroy
	// void OnDestroy();                                                                                                     // [0x61d2f50] Event|Protected|BlueprintEvent 
};

/// Class /Script/DBDGameplay.Medkit
/// Size: 0x0040 (0x000510 - 0x000550)
class AMedkit : public ABaseCamperCollectable
{ 
public:
	class UAkComponent*                                _akComponent;                                               // 0x0510   (0x0008)  
	class UChargerComponent*                           _charger;                                                   // 0x0518   (0x0008)  
	class UParticleSystem*                             _dustRingTemplate;                                          // 0x0520   (0x0008)  
	class UAkAudioEvent*                               _medkitGetAkEvent;                                          // 0x0528   (0x0008)  
	class UAkAudioEvent*                               _medkitDropAkEvent;                                         // 0x0530   (0x0008)  
	class UAkAudioBank*                                _medkitBank;                                                // 0x0538   (0x0008)  
	float                                              _healOtherChargeMultiplier;                                 // 0x0540   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0544   (0x000C)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.Medkit.UseCharge
	// void UseCharge(float Seconds);                                                                                        // [0x5069aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDGameplay.Medkit.OnMedkitHealedCamper
	// void OnMedkitHealedCamper(class ADBDPlayer* healedPlayer);                                                            // [0x50696d0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDGameplay.Medkit.HasCharge
	// bool HasCharge();                                                                                                     // [0x5068470] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplay.Medkit.GetChargeMultiplier
	// float GetChargeMultiplier();                                                                                          // [0x50683e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplay.Medkit.GetCharge
	// float GetCharge();                                                                                                    // [0x50683b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplay.Medkit.Authority_OnChargeStateChange
	// void Authority_OnChargeStateChange(bool Empty);                                                                       // [0x50681a0] Final|Native|Protected 
	// Function /Script/DBDGameplay.Medkit.Authority_OnAnyOngoingInteractionChanged
	// void Authority_OnAnyOngoingInteractionChanged(bool IsInteracting);                                                    // [0x5067ef0] Final|Native|Protected 
	// Function /Script/DBDGameplay.Medkit.Authority_ConsumeIfNotInteracting
	// void Authority_ConsumeIfNotInteracting();                                                                             // [0x5067ed0] Final|Native|Protected 
};

/// Class /Script/DBDGameplay.PointsProvider
/// Size: 0x0000 (0x000030 - 0x000030)
class UPointsProvider : public UObject
{ 
public:
};

/// Class /Script/DBDGameplay.MeshSocketPointsProvider
/// Size: 0x0048 (0x000030 - 0x000078)
class UMeshSocketPointsProvider : public UPointsProvider
{ 
public:
	FComponentReference                                _meshReference;                                             // 0x0030   (0x0030)  
	class UMeshComponent*                              _mesh;                                                      // 0x0060   (0x0008)  
	TArray<FName>                                      _sockets;                                                   // 0x0068   (0x0010)  
};

/// Class /Script/DBDGameplay.MoveToGroundComponent
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class UMoveToGroundComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00B8   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.MoveToGroundComponent.MoveOwnerToGround
	// void MoveOwnerToGround();                                                                                             // [0x5069150] Final|Native|Private 
};

/// Class /Script/DBDGameplay.MultiSceneComponentPointProvider
/// Size: 0x0020 (0x000030 - 0x000050)
class UMultiSceneComponentPointProvider : public UPointsProvider
{ 
public:
	TArray<FComponentReference>                        _sceneReferences;                                           // 0x0030   (0x0010)  
	TArray<class USceneComponent*>                     _sceneComponents;                                           // 0x0040   (0x0010)  
};

/// Class /Script/DBDGameplay.NearestOutsideMapBoundsLocator
/// Size: 0x0028 (0x0000B8 - 0x0000E0)
class UNearestOutsideMapBoundsLocator : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	class UAkComponent*                                _akComponent;                                               // 0x00C0   (0x0008)  
	float                                              _maxDistanceFromBorderAllowed;                              // 0x00C8   (0x0004)  
	float                                              _heightOfOOBPosition;                                       // 0x00CC   (0x0004)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x00D0   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.NearestOutsideMapBoundsLocator.OnGameEnd
	// void OnGameEnd(EEndGameReason endGameReason);                                                                         // [0x5069220] Final|Native|Private 
	// Function /Script/DBDGameplay.NearestOutsideMapBoundsLocator.OnGameBegin
	// void OnGameBegin();                                                                                                   // [0x5069200] Final|Native|Private 
	// Function /Script/DBDGameplay.NearestOutsideMapBoundsLocator.Client_InitializeAkLimitPointEvent
	// void Client_InitializeAkLimitPointEvent();                                                                            // [0x5068390] Final|Native|Private 
};

/// Class /Script/DBDGameplay.NiagaraBlockFeedback
/// Size: 0x0008 (0x000250 - 0x000258)
class ANiagaraBlockFeedback : public AFadingBlockFeedback
{ 
public:
	class UNiagaraComponent*                           _effect;                                                    // 0x0250   (0x0008)  
};

/// Class /Script/DBDGameplay.ParticleBlockFeedback
/// Size: 0x0008 (0x000250 - 0x000258)
class AParticleBlockFeedback : public AFadingBlockFeedback
{ 
public:
	class UParticleSystemComponent*                    _effect;                                                    // 0x0250   (0x0008)  
};

/// Class /Script/DBDGameplay.PlayerCameraAimDirectionProvider
/// Size: 0x0000 (0x000030 - 0x000030)
class UPlayerCameraAimDirectionProvider : public UAimDirectionProvider
{ 
public:
};

/// Class /Script/DBDGameplay.PlayerInteractionListenerComponent
/// Size: 0x0050 (0x0000B8 - 0x000108)
class UPlayerInteractionListenerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x00B8   (0x0050)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.PlayerInteractionListenerComponent.UnlistenToInteractionStart
	// void UnlistenToInteractionStart(class ADBDPlayer* Player, FGameplayTag& interactionSemantic);                         // [0x50699c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDGameplay.PlayerInteractionListenerComponent.UnlistenToInteractionEnd
	// void UnlistenToInteractionEnd(class ADBDPlayer* Player, FGameplayTag& interactionSemantic);                           // [0x50698e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDGameplay.PlayerInteractionListenerComponent.OnActorDestroyed
	// void OnActorDestroyed(class AActor* DestroyedActor);                                                                  // [0x5069170] Final|Native|Private 
	// Function /Script/DBDGameplay.PlayerInteractionListenerComponent.ListenToInteractionStart
	// void ListenToInteractionStart(class ADBDPlayer* Player, FGameplayTag& interactionSemantic, FDelegateProperty& interactionDelegate); // [0x5068630] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDGameplay.PlayerInteractionListenerComponent.ListenToInteractionEnd
	// void ListenToInteractionEnd(class ADBDPlayer* Player, FGameplayTag& interactionSemantic, FDelegateProperty& interactionDelegate); // [0x50684d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDGameplay.PlayerInteractionListenerComponent.InteractionMulticastDelegate__DelegateSignature
	// void InteractionMulticastDelegate__DelegateSignature(class ADBDPlayer* Player, FGameplayTag interactionSemantic);     // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/DBDGameplay.PlayerInteractionListenerComponent.InteractionDelegate__DelegateSignature
	// void InteractionDelegate__DelegateSignature(class ADBDPlayer* Player, FGameplayTag interactionSemantic);              // [0x61d2f50] Public|Delegate      
};

/// Class /Script/DBDGameplay.PlayerMovementUtilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UPlayerMovementUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DBDGameplay.PlayerMovementUtilities.Local_SetGamepadYawCurve
	// void Local_SetGamepadYawCurve(class ADBDPlayer* Player, class UCurveFloat* Curve);                                    // [0x5069090] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DBDGameplay.PlayerMovementUtilities.Local_SetGamepadPitchCurve
	// void Local_SetGamepadPitchCurve(class ADBDPlayer* Player, class UCurveFloat* Curve);                                  // [0x5068fd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DBDGameplay.PlayerMovementUtilities.Local_ResetRotationScale
	// void Local_ResetRotationScale(class ADBDPlayer* Player, float adjustmentTime);                                        // [0x5068f10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DBDGameplay.PlayerMovementUtilities.Local_ResetGamepadLookCurves
	// void Local_ResetGamepadLookCurves(class ADBDPlayer* Player);                                                          // [0x5068e90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DBDGameplay.PlayerMovementUtilities.Local_ApplyYawScaleMultiplier
	// void Local_ApplyYawScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime);                 // [0x5068d90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DBDGameplay.PlayerMovementUtilities.Local_ApplyRotationScaleMultiplier
	// void Local_ApplyRotationScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime);            // [0x5068c90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DBDGameplay.PlayerMovementUtilities.Local_ApplyPitchScaleMultiplier
	// void Local_ApplyPitchScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime);               // [0x5068b90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DBDGameplay.PlayerMovementUtilities.Local_ApplyMouseYawScaleMultiplier
	// void Local_ApplyMouseYawScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime);            // [0x5068a90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DBDGameplay.PlayerMovementUtilities.Local_ApplyMousePitchScaleMultiplier
	// void Local_ApplyMousePitchScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime);          // [0x5068990] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DBDGameplay.PlayerMovementUtilities.Local_ApplyGamepadYawScaleMultiplier
	// void Local_ApplyGamepadYawScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime);          // [0x5068890] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DBDGameplay.PlayerMovementUtilities.Local_ApplyGamepadPitchScaleMultiplier
	// void Local_ApplyGamepadPitchScaleMultiplier(class ADBDPlayer* Player, float Multiplier, float adjustmentTime);        // [0x5068790] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/DBDGameplay.PlayersInZoneTracker
/// Size: 0x00A0 (0x0000B8 - 0x000158)
class UPlayersInZoneTracker : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x00B8   (0x0030)  MISSED
	SDK_UNDEFINED(16,3143) /* FMulticastInlineDelegate */ __um(Cosmetic_OnPlayerEnterZone);                        // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,3144) /* FMulticastInlineDelegate */ __um(Cosmetic_OnPlayerExitZone);                         // 0x00F8   (0x0010)  
	TArray<FGameplayTag>                               _tagsPreventingEnteringRange;                               // 0x0108   (0x0010)  
	TArray<FGameplayTag>                               _tagsToAddToPlayerInZone;                                   // 0x0118   (0x0010)  
	class USphereComponent*                            _playerTracker;                                             // 0x0128   (0x0008)  
	SDK_UNDEFINED(16,3145) /* TArray<TWeakObjectPtr<ADBDPlayer*>> */ __um(_playersInRange);                        // 0x0130   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0140   (0x0018)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.PlayersInZoneTracker.OnRep_PlayersInRange
	// void OnRep_PlayersInRange();                                                                                          // [0x5069760] Final|Native|Private 
	// Function /Script/DBDGameplay.PlayersInZoneTracker.OnCosmeticNeeded__DelegateSignature
	// void OnCosmeticNeeded__DelegateSignature(class ADBDPlayer* Player);                                                   // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/DBDGameplay.PlayersInZoneTracker.Authority_OnEndPlayerOverlap
	// void Authority_OnEndPlayerOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x5068230] Final|Native|Private 
	// Function /Script/DBDGameplay.PlayersInZoneTracker.Authority_OnBeginPlayerOverlap
	// void Authority_OnBeginPlayerOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x5067f80] Final|Native|Private|HasOutParms 
};

/// Class /Script/DBDGameplay.PoseableHusk
/// Size: 0x0008 (0x000260 - 0x000268)
class APoseableHusk : public ABaseHusk
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0260   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.PoseableHusk.SetIsActive
	// void SetIsActive(bool IsActive);                                                                                      // [0x506deb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDGameplay.PoseableHusk.OnActiveStateChanged
	// void OnActiveStateChanged(bool IsActive);                                                                             // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/DBDGameplay.PoseableHusk.GetIsActive
	// bool GetIsActive();                                                                                                   // [0x506d740] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplay.PoseableHusk.Cosmetic_OnAnimationPoseCaptured
	// void Cosmetic_OnAnimationPoseCaptured();                                                                              // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/DBDGameplay.PoseableHusk.CapturePose
	// void CapturePose();                                                                                                   // [0x506d6d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDGameplay.PositionLagCompensationComponent
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UPositionLagCompensationComponent : public UActorComponent
{ 
public:
	float                                              _maxExtrapolationDurationInSeconds;                         // 0x00B8   (0x0004)  
	float                                              _maxInterpolationToServerMoveInSeconds;                     // 0x00BC   (0x0004)  
};

/// Class /Script/DBDGameplay.PowerChargeComponent
/// Size: 0x00A8 (0x0000B8 - 0x000160)
class UPowerChargeComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,3146) /* FMulticastInlineDelegate */ __um(OnPowerChargeChanged);                              // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData00_5[0x54];                                      // 0x00C8   (0x0054)  MISSED
	float                                              _chargeRate;                                                // 0x011C   (0x0004)  
	FSpeedBasedNetSyncedValue                          _currentCharge;                                             // 0x0120   (0x0038)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0158   (0x0004)  MISSED
	bool                                               _forceFullCharge;                                           // 0x015C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x015D   (0x0003)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.PowerChargeComponent.OnRep_CurrentCharge
	// void OnRep_CurrentCharge();                                                                                           // [0x506da10] Final|Native|Private 
	// Function /Script/DBDGameplay.PowerChargeComponent.OnCurrentChargeChanged
	// void OnCurrentChargeChanged(float value);                                                                             // [0x506d8c0] Final|Native|Private 
};

/// Class /Script/DBDGameplay.PowerChargePresentationItemProgressComponent
/// Size: 0x0018 (0x0000C0 - 0x0000D8)
class UPowerChargePresentationItemProgressComponent : public UPresentationItemProgressComponent
{ 
public:
	class UPowerChargeComponent*                       _powerChargeComponent;                                      // 0x00C0   (0x0008)  
	class UPowerToggleComponent*                       _powerToggleComponent;                                      // 0x00C8   (0x0008)  
	float                                              _chargeReadyThreshold;                                      // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00D4   (0x0004)  MISSED
};

/// Class /Script/DBDGameplay.PowerToggleComponent
/// Size: 0x0020 (0x0000B8 - 0x0000D8)
class UPowerToggleComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	bool                                               _isInPower;                                                 // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00D1   (0x0007)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.PowerToggleComponent.OnRep_IsInPower
	// void OnRep_IsInPower();                                                                                               // [0x506da30] Final|Native|Private|Const 
};

/// Class /Script/DBDGameplay.RangeToActorsTrackerComponent
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class URangeToActorsTrackerComponent : public UActorComponent
{ 
public:
	TArray<class URangeToActorsTrackerStrategy*>       _rangeTrackers;                                             // 0x00B8   (0x0010)  


	/// Functions
	// Function /Script/DBDGameplay.RangeToActorsTrackerComponent.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x506d9d0] Final|Native|Private 
};

/// Class /Script/DBDGameplay.RangeToActorsTrackerDefaultStrategy
/// Size: 0x0008 (0x000070 - 0x000078)
class URangeToActorsTrackerDefaultStrategy : public URangeToActorsTrackerStrategy
{ 
public:
	class UClass*                                      _actorClass;                                                // 0x0070   (0x0008)  
};

/// Class /Script/DBDGameplay.ReadMapInteraction
/// Size: 0x0010 (0x000790 - 0x0007A0)
class UReadMapInteraction : public UChargeableInteractionDefinition
{ 
public:
	bool                                               _chargeCompleted;                                           // 0x0790   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0791   (0x000F)  MISSED
};

/// Class /Script/DBDGameplay.RespawnableComponent
/// Size: 0x01E0 (0x0000B8 - 0x000298)
class URespawnableComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x00B8   (0x0030)  MISSED
	SDK_UNDEFINED(16,3147) /* FMulticastInlineDelegate */ __um(Cosmetic_OnRespawn);                                // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,3148) /* FMulticastInlineDelegate */ __um(Cosmetic_OnDespawn);                                // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,3149) /* FMulticastInlineDelegate */ __um(Cosmetic_OnFirstSpawn);                             // 0x0108   (0x0010)  
	bool                                               _hasStartedRespawning;                                      // 0x0118   (0x0001)  
	bool                                               _hasExceededMinRespawnTime;                                 // 0x0119   (0x0001)  
	EGameplayElementType                               _gameplayElementSpawnType;                                  // 0x011A   (0x0001)  
	ETileSpawnPointType                                _tileSpawnType;                                             // 0x011B   (0x0001)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x011C   (0x0004)  MISSED
	class UActorSpawner*                               _actorSpawnerInUse;                                         // 0x0120   (0x0008)  
	class UTileSpawnPoint*                             _tileSpawnInUse;                                            // 0x0128   (0x0008)  
	bool                                               _usesTimers;                                                // 0x0130   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0131   (0x0007)  MISSED
	FDBDTunableRowHandle                               _respawnFrequencyMin;                                       // 0x0138   (0x0028)  
	FDBDTunableRowHandle                               _respawnFrequencyMax;                                       // 0x0160   (0x0028)  
	float                                              _disappearDuration;                                         // 0x0188   (0x0004)  
	float                                              _minTimeBetweenRespawns;                                    // 0x018C   (0x0004)  
	float                                              _spawnHeightOffset;                                         // 0x0190   (0x0004)  
	unsigned char                                      UnknownData03_5[0x34];                                      // 0x0194   (0x0034)  MISSED
	bool                                               _usesGameplayElementSpawner;                                // 0x01C8   (0x0001)  
	unsigned char                                      UnknownData04_5[0x67];                                      // 0x01C9   (0x0067)  MISSED
	FVector                                            _actorLocation;                                             // 0x0230   (0x000C)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x023C   (0x0004)  MISSED
	float                                              _collisionCapsuleHalfHeight;                                // 0x0240   (0x0004)  
	float                                              _collisionCapsuleRadius;                                    // 0x0244   (0x0004)  
	class UDebugTimerLogComponent*                     _debugLogTimer;                                             // 0x0248   (0x0008)  
	bool                                               _onlyLimitDistanceBetweenSameActorType;                     // 0x0250   (0x0001)  
	unsigned char                                      UnknownData06_5[0x7];                                       // 0x0251   (0x0007)  MISSED
	FDBDTunableRowHandle                               _minDistanceFromActivatedSpawnElements;                     // 0x0258   (0x0028)  
	unsigned char                                      UnknownData07_5[0x8];                                       // 0x0280   (0x0008)  MISSED
	SDK_UNDEFINED(16,3150) /* TArray<TEnumAsByte<ECollisionChannel>> */ __um(_collisionChannelsToCheckOnRespawn);  // 0x0288   (0x0010)  


	/// Functions
	// Function /Script/DBDGameplay.RespawnableComponent.OnRep_OnLocationChanged
	// void OnRep_OnLocationChanged();                                                                                       // [0x506da90] Final|Native|Private 
	// Function /Script/DBDGameplay.RespawnableComponent.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x4d82970] Native|Protected     
	// Function /Script/DBDGameplay.RespawnableComponent.OnDespawnCosmeticsComplete
	// void OnDespawnCosmeticsComplete();                                                                                    // [0x4dd4860] Native|Public|BlueprintCallable 
	// Function /Script/DBDGameplay.RespawnableComponent.OnCosmeticNeeded__DelegateSignature
	// void OnCosmeticNeeded__DelegateSignature();                                                                           // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/DBDGameplay.RespawnableComponent.Authority_TryTeleport
	// bool Authority_TryTeleport();                                                                                         // [0x506d680] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/DBDGameplay.RespawnableComponent.Authority_OnTimerDone
	// void Authority_OnTimerDone();                                                                                         // [0x4dd4880] Final|Native|Private 
	// Function /Script/DBDGameplay.RespawnableComponent.Authority_OnMinRespawnTimerDone
	// void Authority_OnMinRespawnTimerDone();                                                                               // [0x4dd4840] Final|Native|Private 
};

/// Class /Script/DBDGameplay.SceneComponentPointProvider
/// Size: 0x0038 (0x000030 - 0x000068)
class USceneComponentPointProvider : public UPointsProvider
{ 
public:
	FComponentReference                                _sceneReference;                                            // 0x0030   (0x0030)  
	class USceneComponent*                             _sceneComponent;                                            // 0x0060   (0x0008)  
};

/// Class /Script/DBDGameplay.SightRevealableComponent
/// Size: 0x0218 (0x0000B8 - 0x0002D0)
class USightRevealableComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x00B8   (0x0048)  MISSED
	FGameplayTagContainer                              _ignoredTags;                                               // 0x0100   (0x0020)  
	FTunableStat                                       _revealTimeBase;                                            // 0x0120   (0x0080)  
	FTunableStat                                       _revealRate;                                                // 0x01A0   (0x0080)  
	FTunableStat                                       _revealRegressionRate;                                      // 0x0220   (0x0080)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x02A0   (0x0030)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.SightRevealableComponent.Authority_IsBeingRevealed
	// bool Authority_IsBeingRevealed();                                                                                     // [0x506ce10] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDGameplay.TerrorRadiusEmitterComponent
/// Size: 0x00F0 (0x000220 - 0x000310)
class UTerrorRadiusEmitterComponent : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0220   (0x0028)  MISSED
	float                                              _simulatedFixedDistance;                                    // 0x0248   (0x0004)  
	bool                                               _imitatesAudioOnly;                                         // 0x024C   (0x0001)  
	bool                                               _active;                                                    // 0x024D   (0x0001)  
	bool                                               _isFakeTerrorRadius;                                        // 0x024E   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x024F   (0x0001)  MISSED
	float                                              _radius;                                                    // 0x0250   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0254   (0x0004)  MISSED
	SDK_UNDEFINED(80,3151) /* TMap<TWeakObjectPtr<UTerrorRadiusReceiverComponent*>, bool> */ __um(_receiversInTerrorRadiusMap); // 0x0258   (0x0050)  
	SDK_UNDEFINED(80,3152) /* TMap<TWeakObjectPtr<UTerrorRadiusReceiverComponent*>, bool> */ __um(_receiversPhysicallyInRadiusRangeMap); // 0x02A8   (0x0050)  
	unsigned char                                      UnknownData03_6[0x18];                                      // 0x02F8   (0x0018)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.TerrorRadiusEmitterComponent.SetTerrorRadius
	// void SetTerrorRadius(float Radius);                                                                                   // [0x506e050] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDGameplay.TerrorRadiusEmitterComponent.SetSimulatedFixedDistance
	// void SetSimulatedFixedDistance(float distance);                                                                       // [0x506dfd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDGameplay.TerrorRadiusEmitterComponent.SetIsFakeTerrorRadius
	// void SetIsFakeTerrorRadius(bool value);                                                                               // [0x506df40] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDGameplay.TerrorRadiusEmitterComponent.SetImitatesAudioOnly
	// void SetImitatesAudioOnly(bool imitatesAudioOnly);                                                                    // [0x506de20] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDGameplay.TerrorRadiusEmitterComponent.SetEmitterActive
	// void SetEmitterActive(bool Active);                                                                                   // [0x506dd90] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDGameplay.TerrorRadiusEmitterComponent.IsInTerrorRadius
	// bool IsInTerrorRadius(class UTerrorRadiusReceiverComponent* receiver);                                                // [0x506d820] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplay.TerrorRadiusEmitterComponent.GetSimulatedFixedDistance
	// float GetSimulatedFixedDistance();                                                                                    // [0x506d7c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplay.TerrorRadiusEmitterComponent.GetRadius
	// float GetRadius();                                                                                                    // [0x506d7a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplay.TerrorRadiusEmitterComponent.GetIsActive
	// bool GetIsActive();                                                                                                   // [0x506d770] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplay.TerrorRadiusEmitterComponent.GetImitatesAudioOnly
	// bool GetImitatesAudioOnly();                                                                                          // [0x506d710] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDGameplay.SlasherTerrorRadiusEmitterComponent
/// Size: 0x0090 (0x000310 - 0x0003A0)
class USlasherTerrorRadiusEmitterComponent : public UTerrorRadiusEmitterComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x90];                                      // 0x0310   (0x0090)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.SlasherTerrorRadiusEmitterComponent.SetBaseTerrorRadius
	// void SetBaseTerrorRadius(float baseTerrorRadius, bool progressive);                                                   // [0x506dcb0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDGameplay.StaticMeshBlockFeedback
/// Size: 0x0010 (0x000250 - 0x000260)
class AStaticMeshBlockFeedback : public AFadingBlockFeedback
{ 
public:
	class UStaticMeshComponent*                        _mesh;                                                      // 0x0250   (0x0008)  
	class UMaterialHelper*                             _materialHelper;                                            // 0x0258   (0x0008)  
};

/// Class /Script/DBDGameplay.SteamPipe
/// Size: 0x00E8 (0x000230 - 0x000318)
class ASteamPipe : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0230   (0x0018)  MISSED
	class UBoxComponent*                               _overlapVolume;                                             // 0x0248   (0x0008)  
	ESteamPipeState                                    _currentSteamPipeState;                                     // 0x0250   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0251   (0x0007)  MISSED
	SDK_UNDEFINED(16,3153) /* TArray<TWeakObjectPtr<USteamPipeEffectComponent*>> */ __um(_overlappingPlayerComponents); // 0x0258   (0x0010)  
	unsigned char                                      UnknownData02_5[0x30];                                      // 0x0268   (0x0030)  MISSED
	float                                              _debugResetTimer;                                           // 0x0298   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x029C   (0x0004)  MISSED
	FDBDTunableRowHandle                               _warningStateTime;                                          // 0x02A0   (0x0028)  
	FDBDTunableRowHandle                               _activeTime;                                                // 0x02C8   (0x0028)  
	FDBDTunableRowHandle                               _warningStateTimeNoCharge;                                  // 0x02F0   (0x0028)  


	/// Functions
	// Function /Script/DBDGameplay.SteamPipe.OnRep_SteamPipeState
	// void OnRep_SteamPipeState();                                                                                          // [0x506dad0] Final|Native|Private 
	// Function /Script/DBDGameplay.SteamPipe.GetCurrentSteamPipeState
	// ESteamPipeState GetCurrentSteamPipeState();                                                                           // [0x506d6f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplay.SteamPipe.Cosmetic_OnSteamPipeStateChanged
	// void Cosmetic_OnSteamPipeStateChanged(ESteamPipeState NewState);                                                      // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/DBDGameplay.SteamPipe.Authority_OnEndOverlap
	// void Authority_OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x506d0f0] Final|Native|Private 
	// Function /Script/DBDGameplay.SteamPipe.Authority_OnBeginOverlap
	// void Authority_OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x506ce40] Final|Native|Private|HasOutParms 
};

/// Class /Script/DBDGameplay.SteamPipeEffectComponent
/// Size: 0x0068 (0x0000B8 - 0x000120)
class USteamPipeEffectComponent : public UActorComponent
{ 
public:
	class UClass*                                      _hinderedEffectClass;                                       // 0x00B8   (0x0008)  
	TArray<FGameplayTag>                               _stateTagsToIgnore;                                         // 0x00C0   (0x0010)  
	FTagStateBool                                      _isInActiveSteamPipeZone;                                   // 0x00D0   (0x0030)  
	SDK_UNDEFINED(8,3154) /* TWeakObjectPtr<ASteamPipe*> */ __um(_overlappingSteamPipe);                           // 0x0100   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0108   (0x0018)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.SteamPipeEffectComponent.Authority_OnStoppedCrouching
	// void Authority_OnStoppedCrouching(FGameplayTag GameplayTag, FGameEventData& GameEventData);                           // [0x506d530] Final|Native|Private|HasOutParms 
	// Function /Script/DBDGameplay.SteamPipeEffectComponent.Authority_OnHealthStateChanged
	// void Authority_OnHealthStateChanged(FGameplayTag GameplayTag, FGameEventData& GameEventData);                         // [0x506d250] Final|Native|Private|HasOutParms 
};

/// Class /Script/DBDGameplay.SteamPipeManagerComponent
/// Size: 0x00B8 (0x0000B8 - 0x000170)
class USteamPipeManagerComponent : public UActorComponent
{ 
public:
	class UClass*                                      _steamPipeEffectComponentClass;                             // 0x00B8   (0x0008)  
	class UClass*                                      _chargeableComponentClass;                                  // 0x00C0   (0x0008)  
	FDBDTunableRowHandle                               _resetSwitchCooldownTime;                                   // 0x00C8   (0x0028)  
	class UChargeableComponent*                        _sharedChargeableComponent;                                 // 0x00F0   (0x0008)  
	SDK_UNDEFINED(16,3155) /* TArray<TWeakObjectPtr<ASteamPipe*>> */ __um(_steamPipes);                            // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,3156) /* TArray<TWeakObjectPtr<ASteamPipeResetSwitch*>> */ __um(_steamPipeResetSwitches);     // 0x0108   (0x0010)  
	unsigned char                                      UnknownData00_5[0x40];                                      // 0x0118   (0x0040)  MISSED
	SDK_UNDEFINED(16,3157) /* TArray<TWeakObjectPtr<ADBDPlayer*>> */ __um(_interactingPlayersArray);               // 0x0158   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0168   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.SteamPipeManagerComponent.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x506d9f0] Final|Native|Private 
	// Function /Script/DBDGameplay.SteamPipeManagerComponent.Authority_UpdateCanUseResetSwitch
	// void Authority_UpdateCanUseResetSwitch();                                                                             // [0x506d6b0] Final|Native|Private 
	// Function /Script/DBDGameplay.SteamPipeManagerComponent.Authority_OnSwitchCooldownComplete
	// void Authority_OnSwitchCooldownComplete();                                                                            // [0x506d640] Final|Native|Private 
	// Function /Script/DBDGameplay.SteamPipeManagerComponent.Authority_OnSteamPipeStateChanged
	// void Authority_OnSteamPipeStateChanged(class ASteamPipe* SteamPipe, ESteamPipeState NewState);                        // [0x506d460] Final|Native|Private 
	// Function /Script/DBDGameplay.SteamPipeManagerComponent.Authority_OnResetInteractionComplete
	// void Authority_OnResetInteractionComplete(bool COMPLETED, TArray<AActor*>& instigatorsForCompletion);                 // [0x506d360] Final|Native|Private|HasOutParms 
	// Function /Script/DBDGameplay.SteamPipeManagerComponent.Authority_OnCharacterAdded
	// void Authority_OnCharacterAdded(class ADBDPlayer* Character);                                                         // [0x506d060] Final|Native|Private 
};

/// Class /Script/DBDGameplay.SteamPipeResetSwitch
/// Size: 0x0070 (0x000338 - 0x0003A8)
class ASteamPipeResetSwitch : public AInteractable
{ 
public:
	class UDBDSkeletalMeshComponentBudgeted*           _skeletalMeshComponent;                                     // 0x0338   (0x0008)  
	FDBDTunableRowHandle                               _resetSoundDistance;                                        // 0x0340   (0x0028)  
	class UClass*                                      _managerComponentClass;                                     // 0x0368   (0x0008)  
	class UChargeableComponent*                        _sharedChargeableComponent;                                 // 0x0370   (0x0008)  
	unsigned char                                      UnknownData00_5[0x14];                                      // 0x0378   (0x0014)  MISSED
	bool                                               _isOnCooldown;                                              // 0x038C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x038D   (0x0003)  MISSED
	int32_t                                            _numberOfDisabledSteamPipes;                                // 0x0390   (0x0004)  
	int32_t                                            _totalSteamPipesInLevel;                                    // 0x0394   (0x0004)  
	SDK_UNDEFINED(8,3158) /* TWeakObjectPtr<USteamPipeManagerComponent*> */ __um(_steamPipeManagerComponent);      // 0x0398   (0x0008)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x03A0   (0x0004)  MISSED
	bool                                               _canUseResetSwitch;                                         // 0x03A4   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x03A5   (0x0003)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.SteamPipeResetSwitch.OnRep_SharedChargeableComponent
	// void OnRep_SharedChargeableComponent();                                                                               // [0x506dab0] Final|Native|Private 
	// Function /Script/DBDGameplay.SteamPipeResetSwitch.OnRep_NumberOfDisabledSteamPipes
	// void OnRep_NumberOfDisabledSteamPipes();                                                                              // [0x506da70] Final|Native|Private 
	// Function /Script/DBDGameplay.SteamPipeResetSwitch.OnRep_IsOnCooldown
	// void OnRep_IsOnCooldown();                                                                                            // [0x506da50] Final|Native|Private 
	// Function /Script/DBDGameplay.SteamPipeResetSwitch.GetTotalSteamPipesInLevel
	// int32_t GetTotalSteamPipesInLevel();                                                                                  // [0x506d7f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplay.SteamPipeResetSwitch.Cosmetic_OnTotalSteamPipesInLevelChanged
	// void Cosmetic_OnTotalSteamPipesInLevelChanged(int32_t totalSteamPipesInLevel);                                        // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/DBDGameplay.SteamPipeResetSwitch.Cosmetic_OnSwitchTriggered
	// void Cosmetic_OnSwitchTriggered(float cooldownTime);                                                                  // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/DBDGameplay.SteamPipeResetSwitch.Cosmetic_OnCooldownDone
	// void Cosmetic_OnCooldownDone();                                                                                       // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/DBDGameplay.SteamPipeResetSwitch.Cosmetic_NumberOfDisabledSteamPipesChanged
	// void Cosmetic_NumberOfDisabledSteamPipesChanged(int32_t numberOfDisabledSteamPipes);                                  // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/DBDGameplay.SteamPipeResetSwitchInteraction
/// Size: 0x0050 (0x000790 - 0x0007E0)
class USteamPipeResetSwitchInteraction : public UChargeableInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0790   (0x0050)  MISSED
};

/// Class /Script/DBDGameplay.StruggleComponent
/// Size: 0x00C8 (0x0000B8 - 0x000180)
class UStruggleComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x5C];                                      // 0x00B8   (0x005C)  MISSED
	int32_t                                            _skillCheckCount;                                           // 0x0114   (0x0004)  
	unsigned char                                      UnknownData01_6[0x68];                                      // 0x0118   (0x0068)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.StruggleComponent.OnSkillCheckEnd
	// void OnSkillCheckEnd(bool hadInput, bool success, bool Bonus, ESkillCheckCustomType Type, class ADBDPlayer* Player);  // [0x506daf0] Final|Native|Private 
	// Function /Script/DBDGameplay.StruggleComponent.Authority_TryActivateSkillCheck
	// void Authority_TryActivateSkillCheck();                                                                               // [0x506d660] Final|Native|Private 
};

/// Class /Script/DBDGameplay.SurvivorAimStanceCameraDirectionProvider
/// Size: 0x0000 (0x000030 - 0x000030)
class USurvivorAimStanceCameraDirectionProvider : public UAimDirectionProvider
{ 
public:
};

/// Class /Script/DBDGameplay.SurvivorAimStateComponent
/// Size: 0x0068 (0x0000B8 - 0x000120)
class USurvivorAimStateComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	class ACollectable*                                _aimableCollectable;                                        // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x48];                                      // 0x00D8   (0x0048)  MISSED
};

/// Class /Script/DBDGameplay.TerrorRadiusAudioFeedbackComponent
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class UTerrorRadiusAudioFeedbackComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00B8   (0x0010)  MISSED
};

/// Class /Script/DBDGameplay.TerrorRadiusBPMComponent
/// Size: 0x0058 (0x0000B8 - 0x000110)
class UTerrorRadiusBPMComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x00B8   (0x0058)  MISSED
};

/// Class /Script/DBDGameplay.TerrorRadiusEmitterFunctionLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UTerrorRadiusEmitterFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DBDGameplay.TerrorRadiusEmitterFunctionLibrary.GetActiveFakeTerrorRadiusEmittersCount
	// int32_t GetActiveFakeTerrorRadiusEmittersCount(class UObject* WorldContextObject);                                    // [0x50700d0] Final|Native|Static|Private|BlueprintCallable|BlueprintPure 
};

/// Class /Script/DBDGameplay.TerrorRadiusReceiverComponent
/// Size: 0x0148 (0x0000B8 - 0x000200)
class UTerrorRadiusReceiverComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x00B8   (0x0030)  MISSED
	class UCurveFloat*                                 _trVerticalDistanceFactor;                                  // 0x00E8   (0x0008)  
	float                                              _heartbeatSmoothingInterpolationSpeed;                      // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00F4   (0x0004)  MISSED
	SDK_UNDEFINED(16,3159) /* FMulticastInlineDelegate */ __um(OnIsInTerrorRadiusChanged);                         // 0x00F8   (0x0010)  
	unsigned char                                      UnknownData02_6[0xF8];                                      // 0x0108   (0x00F8)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.TerrorRadiusReceiverComponent.OnIsInTerrorRadiusChanged__DelegateSignature
	// void OnIsInTerrorRadiusChanged__DelegateSignature();                                                                  // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/DBDGameplay.TerrorRadiusReceiverComponent.IsInTerrorRadiusRange
	// bool IsInTerrorRadiusRange();                                                                                         // [0x50701c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplay.TerrorRadiusReceiverComponent.IsInTerrorRadius
	// bool IsInTerrorRadius();                                                                                              // [0x5070190] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/DBDGameplay.HideHeartIndicatorWithDelay
/// Size: 0x0010 (0x000000 - 0x000010)
struct FHideHeartIndicatorWithDelay
{ 
	FGameplayTag                                       HideTag;                                                    // 0x0000   (0x000C)  
	float                                              DelayWhenTagRemoved;                                        // 0x000C   (0x0004)  
};

/// Class /Script/DBDGameplay.TerrorRadiusScreenIndicatorComponent
/// Size: 0x00C0 (0x000230 - 0x0002F0)
class UTerrorRadiusScreenIndicatorComponent : public UScreenIndicatorWorldMarkerComponent
{ 
public:
	TArray<FHideHeartIndicatorWithDelay>               _hideHeartIndicatorWithDelay;                               // 0x0230   (0x0010)  
	unsigned char                                      UnknownData00_6[0xB0];                                      // 0x0240   (0x00B0)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.TerrorRadiusScreenIndicatorComponent.OnHeartStateChanged
	// void OnHeartStateChanged(FGameplayTag heartState);                                                                    // [0x50701f0] Final|Native|Private 
};

/// Struct /Script/DBDGameplay.TerrorRadiusVisualIndicatorHeartStateRange
/// Size: 0x0010 (0x000000 - 0x000010)
struct FTerrorRadiusVisualIndicatorHeartStateRange
{ 
	float                                              StartVolume;                                                // 0x0000   (0x0004)  
	FGameplayTag                                       HeartTag;                                                   // 0x0004   (0x000C)  
};

/// Class /Script/DBDGameplay.TerrorRadiusVisualFeedbackComponent
/// Size: 0x00B8 (0x0000B8 - 0x000170)
class UTerrorRadiusVisualFeedbackComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,3160) /* FMulticastInlineDelegate */ __um(OnHeartStateChanged);                               // 0x00B8   (0x0010)  
	TArray<FTerrorRadiusVisualIndicatorHeartStateRange> _heartStateRanges;                                         // 0x00C8   (0x0010)  
	TArray<FGameplayTag>                               _hideHeartStateTags;                                        // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,3161) /* FMulticastInlineDelegate */ __um(OnHeartBeat);                                       // 0x00E8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x78];                                      // 0x00F8   (0x0078)  MISSED
};

/// Class /Script/DBDGameplay.TracingConeFlashlightableLightingStrategy
/// Size: 0x0008 (0x000030 - 0x000038)
class UTracingConeFlashlightableLightingStrategy : public UFlashlightableLightingStrategy
{ 
public:
	int32_t                                            _aroundConeCircleTraceCount;                                // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/DBDGameplay.TurnLimitationStrategy
/// Size: 0x0028 (0x000030 - 0x000058)
class UTurnLimitationStrategy : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0030   (0x0028)  MISSED
};

/// Class /Script/DBDGameplay.UnhookedSurvivorTrackerComponent
/// Size: 0x0030 (0x0000B8 - 0x0000E8)
class UUnhookedSurvivorTrackerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x00B8   (0x0030)  MISSED
};

/// Class /Script/DBDGameplay.VisibleHatchRangeTrackerStrategy
/// Size: 0x0028 (0x000070 - 0x000098)
class UVisibleHatchRangeTrackerStrategy : public URangeToActorsTrackerStrategy
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0070   (0x0028)  MISSED
};

/// Class /Script/DBDGameplay.WiggleComponent
/// Size: 0x0190 (0x0000B8 - 0x000248)
class UWiggleComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	SDK_UNDEFINED(16,3162) /* FMulticastInlineDelegate */ __um(OnFailSkillCheckAudioEvent);                        // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,3163) /* FMulticastInlineDelegate */ __um(OnMissSkillCheckAudioEvent);                        // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,3164) /* FString */               __um(AUDIO_EVENT_SKILL_CHECK_WARNING);                      // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,3165) /* FString */               __um(AUDIO_EVENT_SKILL_CHECK_GOOD);                         // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,3166) /* FString */               __um(AUDIO_EVENT_SKILL_CHECK_GREAT);                        // 0x0100   (0x0010)  
	class UChargeableComponent*                        _wiggleProgress;                                            // 0x0110   (0x0008)  
	SDK_UNDEFINED(8,3167) /* TWeakObjectPtr<ASlasherPlayer*> */ __um(_killerWigglingFrom);                         // 0x0118   (0x0008)  
	SDK_UNDEFINED(8,3168) /* TWeakObjectPtr<UInputComponent*> */ __um(_inputComponent);                            // 0x0120   (0x0008)  
	unsigned char                                      UnknownData01_5[0x110];                                     // 0x0128   (0x0110)  MISSED
	float                                              _wiggleInputLockTime;                                       // 0x0238   (0x0004)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x023C   (0x000C)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.WiggleComponent.Server_OnWiggleEnd
	// void Server_OnWiggleEnd();                                                                                            // [0x4dd4860] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/DBDGameplay.WiggleComponent.OnWiggleSkillCheckEnd
	// void OnWiggleSkillCheckEnd(bool hadInput, bool success, bool Bonus, ESkillCheckCustomType Type, class ADBDPlayer* Player); // [0x5070810] Final|Native|Private 
	// Function /Script/DBDGameplay.WiggleComponent.OnWiggleInput
	// void OnWiggleInput();                                                                                                 // [0x50707f0] Final|Native|Private 
	// Function /Script/DBDGameplay.WiggleComponent.OnWiggleEnd
	// void OnWiggleEnd();                                                                                                   // [0x50707d0] Final|Native|Private 
	// Function /Script/DBDGameplay.WiggleComponent.OnPlayerPickedUpStart
	// void OnPlayerPickedUpStart(class ADBDPlayer* picker);                                                                 // [0x5070620] Final|Native|Private 
	// Function /Script/DBDGameplay.WiggleComponent.OnPlayerPickedUpEnd
	// void OnPlayerPickedUpEnd(class ADBDPlayer* picker);                                                                   // [0x5070590] Final|Native|Private 
	// Function /Script/DBDGameplay.WiggleComponent.OnPickedUpSkillCheckEnd
	// void OnPickedUpSkillCheckEnd(bool hadInput, bool success, bool Bonus, ESkillCheckCustomType Type, class ADBDPlayer* Player); // [0x50703d0] Final|Native|Private 
	// Function /Script/DBDGameplay.WiggleComponent.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x50703b0] Final|Native|Private 
	// Function /Script/DBDGameplay.WiggleComponent.OnKeyBindingsChanged
	// void OnKeyBindingsChanged();                                                                                          // [0x5070390] Final|Native|Private 
	// Function /Script/DBDGameplay.WiggleComponent.OnHideWiggleSkillCheck
	// void OnHideWiggleSkillCheck(ESkillCheckCustomType Type);                                                              // [0x5070290] Final|Native|Private 
	// Function /Script/DBDGameplay.WiggleComponent.GetWiggleChargeable
	// class UChargeableComponent* GetWiggleChargeable();                                                                    // [0x5070160] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplay.WiggleComponent.DBD_SetWiggleProgress
	// void DBD_SetWiggleProgress(float ProgressPercent);                                                                    // [0x496cad0] Final|Exec|Native|Public|Const 
	// Function /Script/DBDGameplay.WiggleComponent.Authority_TutorialEndWiggle
	// void Authority_TutorialEndWiggle();                                                                                   // [0x50700b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDGameplay.WiggleComponent.Authority_AddWiggleCharge
	// void Authority_AddWiggleCharge(float ChargeAmount);                                                                   // [0x506fe60] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDGameplay.WiggleFreeComponent
/// Size: 0x0030 (0x0000B8 - 0x0000E8)
class UWiggleFreeComponent : public UActorComponent
{ 
public:
	class ASlasherPlayer*                              _killerWigglingFrom;                                        // 0x00B8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x00C0   (0x0028)  MISSED


	/// Functions
	// Function /Script/DBDGameplay.WiggleFreeComponent.Authority_OnWiggleEnd
	// void Authority_OnWiggleEnd();                                                                                         // [0x5070090] Final|Native|Private 
	// Function /Script/DBDGameplay.WiggleFreeComponent.Authority_OnPlayerPickedUpEnd
	// void Authority_OnPlayerPickedUpEnd(class ADBDPlayer* picker);                                                         // [0x5070000] Final|Native|Private 
	// Function /Script/DBDGameplay.WiggleFreeComponent.Authority_OnLevelReadyToPlay
	// void Authority_OnLevelReadyToPlay();                                                                                  // [0x506ffe0] Final|Native|Private 
	// Function /Script/DBDGameplay.WiggleFreeComponent.Authority_OnChargeableCompleteEvent
	// void Authority_OnChargeableCompleteEvent(bool COMPLETED, TArray<AActor*>& instigatorsForCompletion);                  // [0x506fee0] Final|Native|Private|HasOutParms 
};

/// Class /Script/DBDGameplay.WiggleMotionComponent
/// Size: 0x00A8 (0x0000B8 - 0x000160)
class UWiggleMotionComponent : public UActorComponent
{ 
public:
	class ADBDPlayer*                                  _carriedPlayer;                                             // 0x00B8   (0x0008)  
	class UDBDCharacterMovementComponent*              _ownerMovementComponent;                                    // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData00_5[0x48];                                      // 0x00C8   (0x0048)  MISSED
	FDBDTunableRowHandle                               _goodSkillCheckBumpsAmplitude;                              // 0x0110   (0x0028)  
	FDBDTunableRowHandle                               _greatSkillCheckBumpsAmplitude;                             // 0x0138   (0x0028)  


	/// Functions
	// Function /Script/DBDGameplay.WiggleMotionComponent.SetIsBeingWiggled
	// void SetIsBeingWiggled(bool isBeingWiggled);                                                                          // [0x5070c20] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDGameplay.WiggleMotionComponent.Server_SetIsBeingWiggled
	// void Server_SetIsBeingWiggled(bool isBeingWiggled);                                                                   // [0x5070b90] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/DBDGameplay.WiggleMotionComponent.OnWiggleSkillCheckEnd
	// void OnWiggleSkillCheckEnd(bool hadInput, bool success, bool Bonus, ESkillCheckCustomType Type, class ADBDPlayer* Player); // [0x50709d0] Final|Native|Private 
	// Function /Script/DBDGameplay.WiggleMotionComponent.OnSurvivorRemoved
	// void OnSurvivorRemoved(class ADBDPlayer* Target);                                                                     // [0x5070740] Final|Native|Private 
	// Function /Script/DBDGameplay.WiggleMotionComponent.OnSurvivorPickedUp
	// void OnSurvivorPickedUp(class ADBDPlayer* Target);                                                                    // [0x50706b0] Final|Native|Private 
	// Function /Script/DBDGameplay.WiggleMotionComponent.OnHideWiggleSkillCheck
	// void OnHideWiggleSkillCheck(ESkillCheckCustomType Type);                                                              // [0x5070310] Final|Native|Private 
};

/// Struct /Script/DBDGameplay.AimDirection
/// Size: 0x0024 (0x000000 - 0x000024)
struct FAimDirection
{ 
	unsigned char                                      UnknownData00_1[0x24];                                      // 0x0000   (0x0024)  MISSED
};

/// Struct /Script/DBDGameplay.DBDBidirectionalTimer
/// Size: 0x0000 (0x000028 - 0x000028)
struct FDBDBidirectionalTimer : FDBDTimer
{ 
};

/// Struct /Script/DBDGameplay.BlindTargetViewData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FBlindTargetViewData
{ 
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Struct /Script/DBDGameplay.FootstepSpawnParameters
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFootstepSpawnParameters
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
	class UCurveFloat*                                 FadeCurve;                                                  // 0x0010   (0x0008)  
	class UCurveFloat*                                 VeinsCurve;                                                 // 0x0018   (0x0008)  
};

/// Struct /Script/DBDGameplay.ForAllSurvivorsStatusEffectImposer
/// Size: 0x0018 (0x000000 - 0x000018)
struct FForAllSurvivorsStatusEffectImposer
{ 
	class UClass*                                      _effectClass;                                               // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Struct /Script/DBDGameplay.TestableStatModifier
/// Size: 0x0000 (0x000030 - 0x000030)
struct FTestableStatModifier : FStatModifier
{ 
};

/// Struct /Script/DBDGameplay.TestableStat
/// Size: 0x0008 (0x000080 - 0x000088)
struct FTestableStat : FTunableStat
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0080   (0x0008)  MISSED
};

