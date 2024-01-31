
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Activation
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: Engine
/// dependency: GameplayTags

/// Enum /Script/GameplayUtilities.ESightStatus
/// Size: 0x04
enum class ESightStatus : uint8_t
{
	ESightStatus__OutOfSight                                                         = 0,
	ESightStatus__Discerned                                                          = 1,
	ESightStatus__Sighted                                                            = 2,
	ESightStatus__ESightStatus_MAX                                                   = 3
};

/// Enum /Script/GameplayUtilities.EComparisonOperation
/// Size: 0x07
enum class EComparisonOperation : uint8_t
{
	EComparisonOperation__EqualTo                                                    = 0,
	EComparisonOperation__NotEqualTo                                                 = 1,
	EComparisonOperation__GreaterThan                                                = 2,
	EComparisonOperation__GreaterThanOrEqualTo                                       = 3,
	EComparisonOperation__LesserThan                                                 = 4,
	EComparisonOperation__LesserThanOrEqualTo                                        = 5,
	EComparisonOperation__EComparisonOperation_MAX                                   = 6
};

/// Class /Script/GameplayUtilities.CharacterPusherComponent
/// Size: 0x00B8 (0x0000B8 - 0x000170)
class UCharacterPusherComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x00B8   (0x0030)  MISSED
	TArray<class ACharacter*>                          _charactersToPush;                                          // 0x00E8   (0x0010)  
	SDK_UNDEFINED(80,1504) /* TSet<ACharacter*> */     __um(_ignoredCharacters);                                   // 0x00F8   (0x0050)  
	class UCapsuleComponent*                           _characterDetector;                                         // 0x0148   (0x0008)  
	class UCapsuleComponent*                           _characterCollision;                                        // 0x0150   (0x0008)  
	class UBasePushStrategyComponent*                  _pushStrategy;                                              // 0x0158   (0x0008)  
	TArray<class ACharacter*>                          _ignoredByPushedCharacters;                                 // 0x0160   (0x0010)  


	/// Functions
	// Function /Script/GameplayUtilities.CharacterPusherComponent.SetIgnoredCharacter
	// void SetIgnoredCharacter(class ACharacter* Character, bool ignore);                                                   // [0x8561a50] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayUtilities.CharacterPusherComponent.OnCharacterDetectorOverlapExit
	// void OnCharacterDetectorOverlapExit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x8561720] Final|Native|Protected 
	// Function /Script/GameplayUtilities.CharacterPusherComponent.Construct
	// void Construct(class UCapsuleComponent* characterDetector, class UCapsuleComponent* characterCollision, class UBasePushStrategyComponent* pushStrategy); // [0x8561090] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayUtilities.BasePoolableActorComponent
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UBasePoolableActorComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	SDK_UNDEFINED(16,1505) /* FMulticastInlineDelegate */ __um(OnAcquiredChanged);                                 // 0x00C0   (0x0010)  


	/// Functions
	// Function /Script/GameplayUtilities.BasePoolableActorComponent.SetAcquired
	// void SetAcquired(bool Active);                                                                                        // [0x85619c0] Native|Public|BlueprintCallable 
	// Function /Script/GameplayUtilities.BasePoolableActorComponent.IsAcquired
	// bool IsAcquired();                                                                                                    // [0x5d85f60] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GameplayUtilities.AuthoritativePoolableActorComponent
/// Size: 0x0008 (0x0000D0 - 0x0000D8)
class UAuthoritativePoolableActorComponent : public UBasePoolableActorComponent
{ 
public:
	bool                                               _acquired;                                                  // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00D1   (0x0007)  MISSED


	/// Functions
	// Function /Script/GameplayUtilities.AuthoritativePoolableActorComponent.OnRep_Acquired
	// void OnRep_Acquired();                                                                                                // [0x8561880] Final|Native|Private 
};

/// Class /Script/GameplayUtilities.BaseInputAccelerationConstraintStrategy
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UBaseInputAccelerationConstraintStrategy : public UActorComponent
{ 
public:
};

/// Class /Script/GameplayUtilities.BaseCharacterVelocityAdditiveStrategy
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UBaseCharacterVelocityAdditiveStrategy : public UActorComponent
{ 
public:
};

/// Class /Script/GameplayUtilities.ActorPoolComponent
/// Size: 0x0040 (0x0000B8 - 0x0000F8)
class UActorPoolComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x00B8   (0x0030)  MISSED
	class UClass*                                      _actorClass;                                                // 0x00E8   (0x0008)  
	int32_t                                            _size;                                                      // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00F4   (0x0004)  MISSED


	/// Functions
	// Function /Script/GameplayUtilities.ActorPoolComponent.OnActorsInPoolAcquiredChanged
	// void OnActorsInPoolAcquiredChanged(bool acquired);                                                                    // [0x8561690] Final|Native|Protected 
	// Function /Script/GameplayUtilities.ActorPoolComponent.OnActorDestroyed
	// void OnActorDestroyed(class AActor* DestroyedActor);                                                                  // [0x8561600] Final|Native|Private 
};

/// Class /Script/GameplayUtilities.AuthoritativeActorPoolComponent
/// Size: 0x0020 (0x0000F8 - 0x000118)
class UAuthoritativeActorPoolComponent : public UActorPoolComponent
{ 
public:
	TArray<class AActor*>                              _replicatedPool;                                            // 0x00F8   (0x0010)  
	TArray<class AActor*>                              _local_oldPool;                                             // 0x0108   (0x0010)  


	/// Functions
	// Function /Script/GameplayUtilities.AuthoritativeActorPoolComponent.OnRep_ReplicatedPool
	// void OnRep_ReplicatedPool();                                                                                          // [0x85618e0] Final|Native|Private 
};

/// Class /Script/GameplayUtilities.BaseCharacterRotationStrategy
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UBaseCharacterRotationStrategy : public UActorComponent
{ 
public:
};

/// Class /Script/GameplayUtilities.BaseReplicatedState
/// Size: 0x0020 (0x000030 - 0x000050)
class UBaseReplicatedState : public UObject
{ 
public:
	FGameplayTag                                       _id;                                                        // 0x0030   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	class UStateController*                            _stateController;                                           // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Class /Script/GameplayUtilities.ActorPoolInitializer
/// Size: 0x0040 (0x0000B8 - 0x0000F8)
class UActorPoolInitializer : public UActorComponent
{ 
public:
	FDBDTunableRowHandle                               _poolSize;                                                  // 0x00B8   (0x0028)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00E0   (0x0018)  MISSED
};

/// Class /Script/GameplayUtilities.BasePushStrategyComponent
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UBasePushStrategyComponent : public UActorComponent
{ 
public:
};

/// Class /Script/GameplayUtilities.BoxOcclusionQueryComponent
/// Size: 0x0010 (0x0004B0 - 0x0004C0)
class UBoxOcclusionQueryComponent : public UBoxComponent
{ 
public:
	float                                              TimeUntilOccluded;                                          // 0x04A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x04AC   (0x0014)  MISSED


	/// Functions
	// Function /Script/GameplayUtilities.BoxOcclusionQueryComponent.GetVisiblePercentOfScreen
	// float GetVisiblePercentOfScreen();                                                                                    // [0x8561470] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayUtilities.BoxOcclusionQueryComponent.GetNumberOfVisiblePixels
	// float GetNumberOfVisiblePixels();                                                                                     // [0x85613b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayUtilities.BoxOcclusionQueryComponent.GetEstimatedRenderedPixelCount
	// float GetEstimatedRenderedPixelCount();                                                                               // [0x85612c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GameplayUtilities.CameraUtilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UCameraUtilities : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/GameplayUtilities.CharacterPositionRecorderComponent
/// Size: 0x0020 (0x0000B8 - 0x0000D8)
class UCharacterPositionRecorderComponent : public UActorComponent
{ 
public:
	float                                              _cacheTimespan;                                             // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x1C];                                      // 0x00BC   (0x001C)  MISSED
};

/// Class /Script/GameplayUtilities.CharacterSightableComponent
/// Size: 0x00E8 (0x0000B8 - 0x0001A0)
class UCharacterSightableComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x00B8   (0x0030)  MISSED
	SDK_UNDEFINED(16,1506) /* FMulticastInlineDelegate */ __um(OnHighestSightStatusChangedBP);                     // 0x00E8   (0x0010)  
	SDK_UNDEFINED(80,1507) /* TMap<TWeakObjectPtr<ACharacter*>, FDelegateHandleWrapper> */ __um(_sightDelegateHandles); // 0x00F8   (0x0050)  
	SDK_UNDEFINED(80,1508) /* TMap<TWeakObjectPtr<ACharacter*>, ESightStatus> */ __um(_sightersStatus);            // 0x0148   (0x0050)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0198   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayUtilities.CharacterSightableComponent.OnHighestSightStatusChangedBP__DelegateSignature
	// void OnHighestSightStatusChangedBP__DelegateSignature(ESightStatus Status);                                           // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/GameplayUtilities.CharacterSightableComponent.GetHighestSightStatus
	// ESightStatus GetHighestSightStatus();                                                                                 // [0x85612f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/GameplayUtilities.AuthorityDiscernedCharacter
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAuthorityDiscernedCharacter
{ 
	class ACharacter*                                  _character;                                                 // 0x0000   (0x0008)  
	bool                                               _isSighted;                                                 // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/GameplayUtilities.DiscernibleCharacter
/// Size: 0x0018 (0x000000 - 0x000018)
struct FDiscernibleCharacter
{ 
	class ACharacter*                                  _character;                                                 // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Class /Script/GameplayUtilities.CharacterSightComponent
/// Size: 0x00D8 (0x0000B8 - 0x000190)
class UCharacterSightComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x00B8   (0x0038)  MISSED
	float                                              _minimumCharacterScreenPercentInZoneTrigger;                // 0x00F0   (0x0004)  
	float                                              _minimumCharacterScreenPercentInZoneUntrigger;              // 0x00F4   (0x0004)  
	float                                              _minimumCharacterScreenPercentNotInZoneTrigger;             // 0x00F8   (0x0004)  
	float                                              _minimumCharacterScreenPercentNotInZoneUntrigger;           // 0x00FC   (0x0004)  
	float                                              _minimumCharacterVisiblePixelsPercentTrigger;               // 0x0100   (0x0004)  
	float                                              _minimumCharacterVisiblePixelsPercentUntrigger;             // 0x0104   (0x0004)  
	float                                              _maximumSightDistance;                                      // 0x0108   (0x0004)  
	float                                              _screenVisibilityZoneRadiusPercentX;                        // 0x010C   (0x0004)  
	float                                              _screenVisibilityZoneRadiusPercentY;                        // 0x0110   (0x0004)  
	float                                              _sightingDelay;                                             // 0x0114   (0x0004)  
	float                                              _discerningDelay;                                           // 0x0118   (0x0004)  
	float                                              _undiscerningDelay;                                         // 0x011C   (0x0004)  
	class UClass*                                      _sightableCharacterClass;                                   // 0x0120   (0x0008)  
	TArray<FAuthorityDiscernedCharacter>               _discernedCharacters;                                       // 0x0128   (0x0010)  
	TArray<FDiscernibleCharacter>                      _localDiscernibleCharacters;                                // 0x0138   (0x0010)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0148   (0x0010)  MISSED
	bool                                               _debugMode;                                                 // 0x0158   (0x0001)  
	bool                                               _canSee;                                                    // 0x0159   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x015A   (0x0006)  MISSED
	FActivationDefinition                              _activationDefinition;                                      // 0x0160   (0x0028)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0188   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayUtilities.CharacterSightComponent.SetScreenVisibilityZoneRadiusPercent
	// void SetScreenVisibilityZoneRadiusPercent(float ValueX, float ValueY);                                                // [0x8561e10] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayUtilities.CharacterSightComponent.SetMinimumCharacterVisiblePixelsPercent
	// void SetMinimumCharacterVisiblePixelsPercent(float Trigger, float untrigger);                                         // [0x8561d40] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayUtilities.CharacterSightComponent.SetMinimumCharacterScreenPercentNotInZone
	// void SetMinimumCharacterScreenPercentNotInZone(float Trigger, float untrigger);                                       // [0x8561c70] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayUtilities.CharacterSightComponent.SetMinimumCharacterScreenPercentInZone
	// void SetMinimumCharacterScreenPercentInZone(float Trigger, float untrigger);                                          // [0x8561ba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayUtilities.CharacterSightComponent.SetMaximumSightDistance
	// void SetMaximumSightDistance(float value);                                                                            // [0x8561b20] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayUtilities.CharacterSightComponent.Server_UpdateDiscernedCharacters
	// void Server_UpdateDiscernedCharacters(TArray<ACharacter*> Characters);                                                // [0x8561900] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/GameplayUtilities.CharacterSightComponent.OnRep_DiscernibleCharacters
	// void OnRep_DiscernibleCharacters();                                                                                   // [0x85618c0] Final|Native|Private 
	// Function /Script/GameplayUtilities.CharacterSightComponent.OnRep_CanSee
	// void OnRep_CanSee();                                                                                                  // [0x85618a0] Final|Native|Private 
};

/// Class /Script/GameplayUtilities.ChargeableUtilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UChargeableUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GameplayUtilities.ChargeableUtilities.ConvertSecondsToAddToRateMultiplier
	// float ConvertSecondsToAddToRateMultiplier(float secondsToAdd, float baseMaxSeconds, float baseRate);                  // [0x85611a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/GameplayUtilities.CollectedObjectCollection
/// Size: 0x00A0 (0x0000B8 - 0x000158)
class UCollectedObjectCollection : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x00B8   (0x00A0)  MISSED
};

/// Class /Script/GameplayUtilities.ContainerUtilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UContainerUtilities : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/GameplayUtilities.FallOutOfWorldPositionFinder
/// Size: 0x0000 (0x000030 - 0x000030)
class UFallOutOfWorldPositionFinder : public UInterface
{ 
public:
};

/// Class /Script/GameplayUtilities.PoolableActor
/// Size: 0x0000 (0x000030 - 0x000030)
class UPoolableActor : public UInterface
{ 
public:
};

/// Class /Script/GameplayUtilities.PotentialAttack
/// Size: 0x0000 (0x000030 - 0x000030)
class UPotentialAttack : public UInterface
{ 
public:
};

/// Class /Script/GameplayUtilities.IsLookingTowardsQueryComponent
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class UIsLookingTowardsQueryComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00B8   (0x0010)  MISSED
};

/// Class /Script/GameplayUtilities.LocalActorPoolComponent
/// Size: 0x0010 (0x0000F8 - 0x000108)
class ULocalActorPoolComponent : public UActorPoolComponent
{ 
public:
	TArray<class AActor*>                              _pool;                                                      // 0x00F8   (0x0010)  
};

/// Class /Script/GameplayUtilities.MockPoolableActor
/// Size: 0x0008 (0x000230 - 0x000238)
class AMockPoolableActor : public AActor
{ 
public:
	class UPoolableActorComponent*                     _poolable;                                                  // 0x0230   (0x0008)  
};

/// Class /Script/GameplayUtilities.MovableCamera
/// Size: 0x0028 (0x000298 - 0x0002C0)
class AMovableCamera : public APawn
{ 
public:
	float                                              MovementSpeed;                                              // 0x0298   (0x0004)  
	bool                                               RequiresShiftModifierForInput;                              // 0x029C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1B];                                      // 0x029D   (0x001B)  MISSED
	class APlayerController*                           _playerController;                                          // 0x02B8   (0x0008)  
};

/// Class /Script/GameplayUtilities.MoveActorToComponent
/// Size: 0x0038 (0x0000B8 - 0x0000F0)
class UMoveActorToComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x00B8   (0x0038)  MISSED
};

/// Class /Script/GameplayUtilities.MovementUtilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UMovementUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GameplayUtilities.MovementUtilities.Local_MoveActorTo
	// void Local_MoveActorTo(class AActor* Actor, FVector& Location, FRotator& Rotation, float Duration);                   // [0x85614a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayUtilities.PawnUtilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UPawnUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GameplayUtilities.PawnUtilities.GetOwningPawn
	// class APawn* GetOwningPawn(class AActor* Origin);                                                                     // [0x85613e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayUtilities.PawnUtilities.GetLocallyObservedPawn
	// class APawn* GetLocallyObservedPawn(class UObject* WorldContext);                                                     // [0x8561320] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/GameplayUtilities.PlayerStateExt
/// Size: 0x0000 (0x000030 - 0x000030)
class UPlayerStateExt : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/GameplayUtilities.PoolableActorComponent
/// Size: 0x0008 (0x0000D0 - 0x0000D8)
class UPoolableActorComponent : public UBasePoolableActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00D0   (0x0008)  MISSED
};

/// Class /Script/GameplayUtilities.SceneComponentExt
/// Size: 0x0000 (0x000030 - 0x000030)
class USceneComponentExt : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/GameplayUtilities.SidePushStrategyComponent
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class USidePushStrategyComponent : public UBasePushStrategyComponent
{ 
public:
	float                                              _maxImpulseStrength;                                        // 0x00B8   (0x0004)  
	float                                              _minImpulseStrength;                                        // 0x00BC   (0x0004)  
	float                                              _detectorCapsuleInflation;                                  // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00C4   (0x0004)  MISSED
};

/// Class /Script/GameplayUtilities.StateController
/// Size: 0x0098 (0x0000B8 - 0x000150)
class UStateController : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x00B8   (0x0030)  MISSED
	SDK_UNDEFINED(16,1509) /* FMulticastInlineDelegate */ __um(OnStateChangedBlueprintEvent);                      // 0x00E8   (0x0010)  
	TArray<class UClass*>                              _stateClasses;                                              // 0x00F8   (0x0010)  
	class UClass*                                      _defaultStateClass;                                         // 0x0108   (0x0008)  
	TArray<class UBaseReplicatedState*>                _states;                                                    // 0x0110   (0x0010)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0120   (0x0010)  MISSED
	class UBaseReplicatedState*                        _local_currentState;                                        // 0x0130   (0x0008)  
	class UBaseReplicatedState*                        _authority_RepCurrentState;                                 // 0x0138   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/GameplayUtilities.StateController.OnStateChangedBlueprintEvent__DelegateSignature
	// void OnStateChangedBlueprintEvent__DelegateSignature(FGameplayTag oldState, FGameplayTag NewState);                   // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/GameplayUtilities.StateController.OnRep_States
	// void OnRep_States();                                                                                                  // [0x85622f0] Final|Native|Private 
	// Function /Script/GameplayUtilities.StateController.OnRep_AuthorityRepCurrentState
	// void OnRep_AuthorityRepCurrentState();                                                                                // [0x85622d0] Final|Native|Private 
	// Function /Script/GameplayUtilities.StateController.GetCurrentStateID
	// FGameplayTag GetCurrentStateID();                                                                                     // [0x8562290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GameplayUtilities.VisualLoggerExt
/// Size: 0x0000 (0x000030 - 0x000030)
class UVisualLoggerExt : public UObject
{ 
public:
};

/// Struct /Script/GameplayUtilities.HitValidatorInstigatorParams
/// Size: 0x0060 (0x000000 - 0x000060)
struct FHitValidatorInstigatorParams
{ 
	class AActor*                                      Instigator;                                                 // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_5[0x48];                                      // 0x0008   (0x0048)  MISSED
	class UPrimitiveComponent*                         HitPrimitive;                                               // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/GameplayUtilities.HitValidatorTargetParams
/// Size: 0x0018 (0x000000 - 0x000018)
struct FHitValidatorTargetParams
{ 
	class ACharacter*                                  Target;                                                     // 0x0000   (0x0008)  
	class UCapsuleComponent*                           HittableCapsule;                                            // 0x0008   (0x0008)  
	float                                              TargetLocationTimestamp;                                    // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/GameplayUtilities.HitValidationReport
/// Size: 0x0160 (0x000000 - 0x000160)
struct FHitValidationReport
{ 
	FHitValidatorInstigatorParams                      InstigatorParams;                                           // 0x0000   (0x0060)  
	FHitValidatorTargetParams                          TargetParams;                                               // 0x0060   (0x0018)  
	float                                              ValidationTimestamp;                                        // 0x0078   (0x0004)  
	FFloatRange                                        TargetRecorderTimeRange;                                    // 0x007C   (0x0010)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x008C   (0x0004)  MISSED
	class ACharacter*                                  InstigatorOwningCharacter;                                  // 0x0090   (0x0008)  
	float                                              MaximumDistance;                                            // 0x0098   (0x0004)  
	float                                              CapsuleInflation;                                           // 0x009C   (0x0004)  
	bool                                               IsValidHit;                                                 // 0x00A0   (0x0001)  
	bool                                               IsValidDistance;                                            // 0x00A1   (0x0001)  
	bool                                               IsValidNotStunned;                                          // 0x00A2   (0x0001)  
	unsigned char                                      UnknownData01_5[0xD];                                       // 0x00A3   (0x000D)  MISSED
	FTransform                                         InstigatorTransform;                                        // 0x00B0   (0x0030)  
	FVector                                            RewindedTargetLocation;                                     // 0x00E0   (0x000C)  
	FVector                                            targetLocation;                                             // 0x00EC   (0x000C)  
	float                                              SquareDistance;                                             // 0x00F8   (0x0004)  
	bool                                               HasPerformCollisionCheck;                                   // 0x00FC   (0x0001)  
	bool                                               IsValidCollision;                                           // 0x00FD   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x00FE   (0x0002)  MISSED
	FTransform                                         HitPrimitiveTransform;                                      // 0x0100   (0x0030)  
	FTransform                                         HittablePrimitiveTransform;                                 // 0x0130   (0x0030)  
};

