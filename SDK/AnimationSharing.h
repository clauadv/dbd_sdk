
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AnimationSharing.AnimSharingStateInstance
/// Size: 0x0020 (0x0002C0 - 0x0002E0)
class UAnimSharingStateInstance : public UAnimInstance
{ 
public:
	class UAnimSequence*                               AnimationToPlay;                                            // 0x02C0   (0x0008)  
	float                                              PermutationTimeOffset;                                      // 0x02C8   (0x0004)  
	float                                              PlayRate;                                                   // 0x02CC   (0x0004)  
	bool                                               bStateBool;                                                 // 0x02D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02D1   (0x0007)  MISSED
	class UAnimSharingInstance*                        Instance;                                                   // 0x02D8   (0x0008)  


	/// Functions
	// Function /Script/AnimationSharing.AnimSharingStateInstance.GetInstancedActors
	// void GetInstancedActors(TArray<AActor*>& Actors);                                                                     // [0x4c469c0] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Class /Script/AnimationSharing.AnimSharingTransitionInstance
/// Size: 0x0020 (0x0002C0 - 0x0002E0)
class UAnimSharingTransitionInstance : public UAnimInstance
{ 
public:
	SDK_UNDEFINED(8,3558) /* TWeakObjectPtr<USkeletalMeshComponent*> */ __um(FromComponent);                       // 0x02C0   (0x0008)  
	SDK_UNDEFINED(8,3559) /* TWeakObjectPtr<USkeletalMeshComponent*> */ __um(ToComponent);                         // 0x02C8   (0x0008)  
	float                                              BlendTime;                                                  // 0x02D0   (0x0004)  
	bool                                               bBlendBool;                                                 // 0x02D4   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x02D5   (0x000B)  MISSED
};

/// Class /Script/AnimationSharing.AnimSharingAdditiveInstance
/// Size: 0x0020 (0x0002C0 - 0x0002E0)
class UAnimSharingAdditiveInstance : public UAnimInstance
{ 
public:
	SDK_UNDEFINED(8,3560) /* TWeakObjectPtr<USkeletalMeshComponent*> */ __um(BaseComponent);                       // 0x02C0   (0x0008)  
	SDK_UNDEFINED(8,3561) /* TWeakObjectPtr<UAnimSequence*> */ __um(AdditiveAnimation);                            // 0x02C8   (0x0008)  
	float                                              alpha;                                                      // 0x02D0   (0x0004)  
	bool                                               bStateBool;                                                 // 0x02D4   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x02D5   (0x000B)  MISSED
};

/// Class /Script/AnimationSharing.AnimSharingInstance
/// Size: 0x00F0 (0x000030 - 0x000120)
class UAnimSharingInstance : public UObject
{ 
public:
	TArray<class AActor*>                              RegisteredActors;                                           // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_5[0x50];                                      // 0x0040   (0x0050)  MISSED
	class UAnimationSharingStateProcessor*             StateProcessor;                                             // 0x0090   (0x0008)  
	unsigned char                                      UnknownData01_5[0x38];                                      // 0x0098   (0x0038)  MISSED
	TArray<class UAnimSequence*>                       UsedAnimationSequences;                                     // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x00E0   (0x0010)  MISSED
	class UEnum*                                       StateEnum;                                                  // 0x00F0   (0x0008)  
	class AActor*                                      SharingActor;                                               // 0x00F8   (0x0008)  
	unsigned char                                      UnknownData03_6[0x20];                                      // 0x0100   (0x0020)  MISSED
};

/// Class /Script/AnimationSharing.AnimationSharingManager
/// Size: 0x0060 (0x000030 - 0x000090)
class UAnimationSharingManager : public UObject
{ 
public:
	TArray<class USkeleton*>                           Skeletons;                                                  // 0x0030   (0x0010)  
	TArray<class UAnimSharingInstance*>                PerSkeletonData;                                            // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0050   (0x0040)  MISSED


	/// Functions
	// Function /Script/AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP
	// void RegisterActorWithSkeletonBP(class AActor* InActor, class USkeleton* SharingSkeleton);                            // [0x4c46c30] Final|Native|Public|BlueprintCallable 
	// Function /Script/AnimationSharing.AnimationSharingManager.GetAnimationSharingManager
	// class UAnimationSharingManager* GetAnimationSharingManager(class UObject* WorldContextObject);                        // [0x4c46900] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager
	// bool CreateAnimationSharingManager(class UObject* WorldContextObject, class UAnimationSharingSetup* Setup);           // [0x4c46830] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnimationSharing.AnimationSharingManager.AnimationSharingEnabled
	// bool AnimationSharingEnabled();                                                                                       // [0x4c46800] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/AnimationSharing.AnimationSetup
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAnimationSetup
{ 
	class UAnimSequence*                               AnimSequence;                                               // 0x0000   (0x0008)  
	class UClass*                                      AnimBlueprint;                                              // 0x0008   (0x0008)  
	FPerPlatformInt                                    NumRandomizedInstances;                                     // 0x0010   (0x0004)  
	FPerPlatformBool                                   Enabled;                                                    // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/AnimationSharing.AnimationStateEntry
/// Size: 0x0030 (0x000000 - 0x000030)
struct FAnimationStateEntry
{ 
	char                                               State;                                                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FAnimationSetup>                            AnimationSetups;                                            // 0x0008   (0x0010)  
	bool                                               bOnDemand;                                                  // 0x0018   (0x0001)  
	bool                                               bAdditive;                                                  // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x001A   (0x0002)  MISSED
	float                                              BlendTime;                                                  // 0x001C   (0x0004)  
	bool                                               bReturnToPreviousState;                                     // 0x0020   (0x0001)  
	bool                                               bSetNextState;                                              // 0x0021   (0x0001)  
	char                                               NextState;                                                  // 0x0022   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x0023   (0x0001)  MISSED
	FPerPlatformInt                                    MaximumNumberOfConcurrentInstances;                         // 0x0024   (0x0004)  
	float                                              WiggleTimePercentage;                                       // 0x0028   (0x0004)  
	bool                                               bRequiresCurves;                                            // 0x002C   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Struct /Script/AnimationSharing.PerSkeletonAnimationSharingSetup
/// Size: 0x0038 (0x000000 - 0x000038)
struct FPerSkeletonAnimationSharingSetup
{ 
	class USkeleton*                                   Skeleton;                                                   // 0x0000   (0x0008)  
	class USkeletalMesh*                               SkeletalMesh;                                               // 0x0008   (0x0008)  
	class UClass*                                      BlendAnimBlueprint;                                         // 0x0010   (0x0008)  
	class UClass*                                      AdditiveAnimBlueprint;                                      // 0x0018   (0x0008)  
	class UClass*                                      StateProcessorClass;                                        // 0x0020   (0x0008)  
	TArray<FAnimationStateEntry>                       AnimationStates;                                            // 0x0028   (0x0010)  
};

/// Struct /Script/AnimationSharing.AnimationSharingScalability
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAnimationSharingScalability
{ 
	FPerPlatformBool                                   UseBlendTransitions;                                        // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FPerPlatformFloat                                  BlendSignificanceValue;                                     // 0x0004   (0x0004)  
	FPerPlatformInt                                    MaximumNumberConcurrentBlends;                              // 0x0008   (0x0004)  
	FPerPlatformFloat                                  TickSignificanceValue;                                      // 0x000C   (0x0004)  
};

/// Class /Script/AnimationSharing.AnimationSharingSetup
/// Size: 0x0020 (0x000030 - 0x000050)
class UAnimationSharingSetup : public UObject
{ 
public:
	TArray<FPerSkeletonAnimationSharingSetup>          SkeletonSetups;                                             // 0x0030   (0x0010)  
	FAnimationSharingScalability                       ScalabilitySettings;                                        // 0x0040   (0x0010)  
};

/// Class /Script/AnimationSharing.AnimationSharingStateProcessor
/// Size: 0x0030 (0x000030 - 0x000060)
class UAnimationSharingStateProcessor : public UObject
{ 
public:
	SDK_UNDEFINED(48,3562) /* TWeakObjectPtr<UEnum*> */ __um(AnimationStateEnum);                                  // 0x0030   (0x0030)  


	/// Functions
	// Function /Script/AnimationSharing.AnimationSharingStateProcessor.ProcessActorState
	// void ProcessActorState(int32_t& OutState, class AActor* InActor, char CurrentState, char OnDemandState, bool& bShouldProcess); // [0x4c46a70] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum
	// class UEnum* GetAnimationStateEnum();                                                                                 // [0x4c46990] Native|Event|Public|BlueprintEvent 
};

/// Struct /Script/AnimationSharing.TickAnimationSharingFunction
/// Size: 0x0008 (0x000028 - 0x000030)
struct FTickAnimationSharingFunction : FTickFunction
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

