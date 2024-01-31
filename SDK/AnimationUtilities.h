
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags

/// Enum /Script/AnimationUtilities.EEditorCollectionType
/// Size: 0x04
enum class EEditorCollectionType : uint8_t
{
	Animation                                                                        = 0,
	BlendSpace                                                                       = 1,
	Selector                                                                         = 2,
	EEditorCollectionType_MAX                                                        = 3
};

/// Class /Script/AnimationUtilities.SleepingAnimInstance
/// Size: 0x0010 (0x0002C0 - 0x0002D0)
class USleepingAnimInstance : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x02C0   (0x0010)  MISSED


	/// Functions
	// Function /Script/AnimationUtilities.SleepingAnimInstance.Wakeup
	// void Wakeup();                                                                                                        // [0x8584f40] Final|Native|Public|BlueprintCallable 
	// Function /Script/AnimationUtilities.SleepingAnimInstance.SetNeverIdle
	// void SetNeverIdle(bool neverIdle);                                                                                    // [0x8584eb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AnimationUtilities.SleepingAnimInstance.OnMontageStart
	// void OnMontageStart(class UAnimMontage* Montage);                                                                     // [0x8584e20] Final|Native|Public  
};

/// Class /Script/AnimationUtilities.BaseGroundDetectorComponent
/// Size: 0x0118 (0x0000B8 - 0x0001D0)
class UBaseGroundDetectorComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0xB0];                                      // 0x00B8   (0x00B0)  MISSED
	FName                                              _startTransformName;                                        // 0x0168   (0x000C)  
	SDK_UNDEFINED(1,1247) /* TEnumAsByte<ECollisionChannel> */ __um(_walkableCollisionChannel);                    // 0x0174   (0x0001)  
	bool                                               _traceComplex;                                              // 0x0175   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0176   (0x0002)  MISSED
	float                                              _extraTraceDistance;                                        // 0x0178   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x017C   (0x0004)  MISSED
	class USkinnedMeshComponent*                       _skinnedMeshComponent;                                      // 0x0180   (0x0008)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0188   (0x0008)  MISSED
	FName                                              _startSlopeTransformName;                                   // 0x0190   (0x000C)  
	unsigned char                                      UnknownData04_6[0x34];                                      // 0x019C   (0x0034)  MISSED


	/// Functions
	// Function /Script/AnimationUtilities.BaseGroundDetectorComponent.InitSkinnedMeshComponent
	// void InitSkinnedMeshComponent(class USkinnedMeshComponent* Mesh);                                                     // [0x8583800] Final|Native|Public|BlueprintCallable 
	// Function /Script/AnimationUtilities.BaseGroundDetectorComponent.GetGroundPosition
	// FVector GetGroundPosition(FVector targetPos, FVector extraOffset);                                                    // [0x8583700] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AnimationUtilities.AnimCollection
/// Size: 0x0108 (0x000038 - 0x000140)
class UAnimCollection : public UDataAsset
{ 
public:
	SDK_UNDEFINED(80,1248) /* TMap<FGameplayTag, UAnimSequence*> */ __um(_taggedAnimSequences);                    // 0x0038   (0x0050)  
	SDK_UNDEFINED(80,1249) /* TMap<FGameplayTag, UBlendSpaceBase*> */ __um(_taggedAnimBlendspaces);                // 0x0088   (0x0050)  
	SDK_UNDEFINED(80,1250) /* TMap<FGameplayTag, FAnimSequenceSelector> */ __um(_taggedAnimSelectors);             // 0x00D8   (0x0050)  
	class UAnimCollection*                             _parent;                                                    // 0x0128   (0x0008)  
	TArray<class UAnimCollection*>                     _children;                                                  // 0x0130   (0x0010)  
};

/// Class /Script/AnimationUtilities.AnimEffectBlackBoard
/// Size: 0x0050 (0x000030 - 0x000080)
class UAnimEffectBlackBoard : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0030   (0x0050)  MISSED
};

/// Class /Script/AnimationUtilities.AnimEffectHandler
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimEffectHandler : public UObject
{ 
public:


	/// Functions
	// Function /Script/AnimationUtilities.AnimEffectHandler.HandleAnimNotify
	// bool HandleAnimNotify(class AActor* Player, FName& NotifyName);                                                       // [0x8582a40] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/AnimationUtilities.AnimInstanceExt
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimInstanceExt : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AnimationUtilities.AnimInstanceExt.GetSubAnimInstance
	// class UAnimInstance* GetSubAnimInstance(class UAnimInstance* Root, class UClass* Type);                               // [0x8582f90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimationUtilities.AnimInstanceExt.GetRootSkeletalMeshComponent
	// class USkeletalMeshComponent* GetRootSkeletalMeshComponent(class UAnimInstance* AnimInstance);                        // [0x8582f00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimationUtilities.AnimInstanceExt.GetOwningCharacterSkeletalMeshComponent
	// class USkeletalMeshComponent* GetOwningCharacterSkeletalMeshComponent(class UAnimInstance* AnimInstance);             // [0x8582e70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimationUtilities.AnimInstanceExt.GetOwningCharacter
	// class ACharacter* GetOwningCharacter(class UAnimInstance* AnimInstance);                                              // [0x8582de0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimationUtilities.AnimInstanceExt.GetOwningActor
	// class AActor* GetOwningActor(class UAnimInstance* AnimInstance);                                                      // [0x8582d50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AnimationUtilities.AnimLayerUpdateInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimLayerUpdateInterface : public UInterface
{ 
public:
};

/// Class /Script/AnimationUtilities.DetectionFanComponent
/// Size: 0x0060 (0x000220 - 0x000280)
class UDetectionFanComponent : public USceneComponent
{ 
public:
	FFloatRange                                        _angleRange;                                                // 0x0218   (0x0010)  
	FVector                                            _originWorldOffset;                                         // 0x0228   (0x000C)  
	int32_t                                            _numberOfSpots;                                             // 0x0234   (0x0004)  
	float                                              _defaultRingRadius;                                         // 0x0238   (0x0004)  
	SDK_UNDEFINED(1,1251) /* TEnumAsByte<ECollisionChannel> */ __um(_collisionChannel);                            // 0x023C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x023D   (0x0003)  MISSED
	class USkeletalMeshComponent*                      _meshComponent;                                             // 0x0240   (0x0008)  
	unsigned char                                      UnknownData01_6[0x38];                                      // 0x0248   (0x0038)  MISSED
};

/// Class /Script/AnimationUtilities.ArmDetectionFanComponent
/// Size: 0x0090 (0x000280 - 0x000310)
class UArmDetectionFanComponent : public UDetectionFanComponent
{ 
public:
	FName                                              _shoulderBone;                                              // 0x0278   (0x000C)  
	FName                                              _elbowBone;                                                 // 0x0284   (0x000C)  
	FName                                              _handBone;                                                  // 0x0290   (0x000C)  
	FName                                              _indexBone;                                                 // 0x029C   (0x000C)  
	FName                                              _hipBone;                                                   // 0x02A8   (0x000C)  
	unsigned char                                      UnknownData00_6[0x5C];                                      // 0x02B4   (0x005C)  MISSED
};

/// Class /Script/AnimationUtilities.BoneSocketLocalVelocityEvaluator
/// Size: 0x0028 (0x0000B8 - 0x0000E0)
class UBoneSocketLocalVelocityEvaluator : public UActorComponent
{ 
public:
	class USkeletalMeshComponent*                      _meshComponent;                                             // 0x00B8   (0x0008)  
	TArray<FName>                                      _trackedBoneSocketNames;                                    // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00D0   (0x0010)  MISSED


	/// Functions
	// Function /Script/AnimationUtilities.BoneSocketLocalVelocityEvaluator.GetLocalVelocity
	// FVector GetLocalVelocity(FName BoneSocketName);                                                                       // [0x8583a00] Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AnimationUtilities.FootGroundDetectorComponent
/// Size: 0x0030 (0x0001D0 - 0x000200)
class UFootGroundDetectorComponent : public UBaseGroundDetectorComponent
{ 
public:
	FName                                              _hipTransformName;                                          // 0x01D0   (0x000C)  
	FVector                                            _slopeStartOffset;                                          // 0x01DC   (0x000C)  
	float                                              _footLength;                                                // 0x01E8   (0x0004)  
	float                                              _traceRadius;                                               // 0x01EC   (0x0004)  
	float                                              _maxWalkableSlopeAngle;                                     // 0x01F0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01F4   (0x0004)  MISSED
	class UCharacterMovementComponent*                 _movementComp;                                              // 0x01F8   (0x0008)  
};

/// Class /Script/AnimationUtilities.FromBoneGroundDetectorComponent
/// Size: 0x0010 (0x0001D0 - 0x0001E0)
class UFromBoneGroundDetectorComponent : public UBaseGroundDetectorComponent
{ 
public:
	FVector                                            _startOffset;                                               // 0x01D0   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x01DC   (0x0004)  MISSED
};

/// Class /Script/AnimationUtilities.AnimationDependency
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimationDependency : public UInterface
{ 
public:
};

/// Class /Script/AnimationUtilities.AnimInstanceLeader
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimInstanceLeader : public UInterface
{ 
public:
};

/// Class /Script/AnimationUtilities.SleepableSkeletalMesh
/// Size: 0x0000 (0x000030 - 0x000030)
class USleepableSkeletalMesh : public UInterface
{ 
public:
};

/// Class /Script/AnimationUtilities.MoveComponentToComponent
/// Size: 0x0048 (0x0000B8 - 0x000100)
class UMoveComponentToComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x00B8   (0x0048)  MISSED


	/// Functions
	// Function /Script/AnimationUtilities.MoveComponentToComponent.Stop
	// void Stop();                                                                                                          // [0x8584830] Final|Native|Public|BlueprintCallable 
	// Function /Script/AnimationUtilities.MoveComponentToComponent.Start
	// void Start(class USceneComponent* componentToMove, class USceneComponent* Target, float Duration);                    // [0x8584710] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AnimationUtilities.ResetControlPitchAnimNotify
/// Size: 0x0000 (0x000040 - 0x000040)
class UResetControlPitchAnimNotify : public UAnimNotify
{ 
public:
};

/// Class /Script/AnimationUtilities.SlaveAnimInstance
/// Size: 0x0010 (0x0002C0 - 0x0002D0)
class USlaveAnimInstance : public UAnimInstance
{ 
public:
	SDK_UNDEFINED(8,1252) /* TWeakObjectPtr<USkeletalMeshComponent*> */ __um(_masterMesh);                         // 0x02C0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x02C8   (0x0008)  MISSED


	/// Functions
	// Function /Script/AnimationUtilities.SlaveAnimInstance.SetMasterMesh
	// void SetMasterMesh(class USkeletalMeshComponent* masterMesh);                                                         // [0x8584b80] Final|Native|Public|BlueprintCallable 
	// Function /Script/AnimationUtilities.SlaveAnimInstance.GetMasterMesh
	// class USkeletalMeshComponent* GetMasterMesh();                                                                        // [0x8584b50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AnimationUtilities.SleepingSkinnedMeshRegisterer
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class USleepingSkinnedMeshRegisterer : public UActorComponent
{ 
public:
};

/// Struct /Script/AnimationUtilities.AnimationMontageDescriptor
/// Size: 0x0020 (0x000000 - 0x000020)
struct FAnimationMontageDescriptor
{ 
	FName                                              MontageID;                                                  // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FName>                                      Tags;                                                       // 0x0010   (0x0010)  
};

/// Struct /Script/AnimationUtilities.MontagePlaybackDefinition
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMontagePlaybackDefinition
{ 
	FAnimationMontageDescriptor                        Descriptor;                                                 // 0x0000   (0x0020)  
	float                                              PlayRate;                                                   // 0x0020   (0x0004)  
	bool                                               Follower;                                                   // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/AnimationUtilities.SocketOrBoneCache
/// Size: 0x0060 (0x000000 - 0x000060)
struct FSocketOrBoneCache
{ 
	SDK_UNDEFINED(48,1253) /* TWeakObjectPtr<UAnimSequence*> */ __um(_sourceAnimation);                            // 0x0000   (0x0030)  
	FName                                              _socketName;                                                // 0x0030   (0x000C)  
	FName                                              _notifyName;                                                // 0x003C   (0x000C)  
	FVector                                            _location;                                                  // 0x0048   (0x000C)  
	FRotator                                           _rotation;                                                  // 0x0054   (0x000C)  
};

/// Struct /Script/AnimationUtilities.MontageStopDefinition
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMontageStopDefinition
{ 
	FAnimationMontageDescriptor                        Descriptor;                                                 // 0x0000   (0x0020)  
	float                                              BlendOutTime;                                               // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/AnimationUtilities.EditorAnimCollectionDisplay
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FEditorAnimCollectionDisplay
{ 
	SDK_UNDEFINED(80,1254) /* TMap<FGameplayTag, FEditorCollectionMetadata> */ __um(_taggedAnimSequencesMetadata); // 0x0000   (0x0050)  
	SDK_UNDEFINED(80,1255) /* TMap<FGameplayTag, FEditorCollectionMetadata> */ __um(_taggedAnimBlendspacesMetadata); // 0x0050   (0x0050)  
	SDK_UNDEFINED(80,1256) /* TMap<FGameplayTag, FEditorCollectionMetadata> */ __um(_taggedAnimSelectorsMetadata); // 0x00A0   (0x0050)  
};

/// Struct /Script/AnimationUtilities.EditorCollectionMetadata
/// Size: 0x0001 (0x000000 - 0x000001)
struct FEditorCollectionMetadata
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/AnimationUtilities.TaggedAnimSequence
/// Size: 0x0028 (0x000000 - 0x000028)
struct FTaggedAnimSequence
{ 
	class UAnimSequence*                               Sequence;                                                   // 0x0000   (0x0008)  
	FGameplayTagContainer                              Tags;                                                       // 0x0008   (0x0020)  
};

/// Struct /Script/AnimationUtilities.AnimSequenceSelector
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAnimSequenceSelector
{ 
	class UAnimSequence*                               _selected;                                                  // 0x0000   (0x0008)  
	TArray<FTaggedAnimSequence>                        _taggedSequences;                                           // 0x0008   (0x0010)  
};

/// Struct /Script/AnimationUtilities.TaggedAnimCollection
/// Size: 0x0040 (0x000000 - 0x000040)
struct FTaggedAnimCollection
{ 
	FGameplayTag                                       Tag;                                                        // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(48,1257) /* TWeakObjectPtr<UAnimCollection*> */ __um(AnimCollection);                            // 0x0010   (0x0030)  
};

