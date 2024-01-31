
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: AnimationBudgetAllocator
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SignificanceUtilities

/// Class /Script/DBDAnimationBudgetAllocator.DBDSkeletalMeshComponentBudgeted
/// Size: 0x0070 (0x000FC0 - 0x001030)
class UDBDSkeletalMeshComponentBudgeted : public USkeletalMeshComponentBudgeted
{ 
public:
	unsigned char                                      UnknownData00_2[0x49];                                      // 0x0FC0   (0x0049)  MISSED
	bool                                               _autoRegisterToAnimBudgeter;                                // 0x1009   (0x0001)  
	bool                                               _autoComputeSignificance;                                   // 0x100A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x100B   (0x0005)  MISSED
	class USignificanceStrategy*                       _significanceStrategy;                                      // 0x1010   (0x0008)  
	class UAnimBudgeterSignificanceStrategy*           _animBudgeterSignificanceStrategy;                          // 0x1018   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x1020   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDAnimationBudgetAllocator.DBDSkeletalMeshComponentBudgeted.SetAnimationDependency
	// void SetAnimationDependency(class USkeletalMeshComponent* meshDependency);                                            // [0x4ea68e0] Native|Public|BlueprintCallable 
};

/// Class /Script/DBDAnimationBudgetAllocator.AnimBudgeterSignificanceStrategy
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimBudgeterSignificanceStrategy : public UObject
{ 
public:
};

/// Class /Script/DBDAnimationBudgetAllocator.SimpleAnimBudgeterSignificanceStrategy
/// Size: 0x0008 (0x000030 - 0x000038)
class USimpleAnimBudgeterSignificanceStrategy : public UAnimBudgeterSignificanceStrategy
{ 
public:
	bool                                               _tickEvenIfNotRendered;                                     // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/DBDAnimationBudgetAllocator.DBDAnimationBudgetAllocator
/// Size: 0x0120 (0x000038 - 0x000158)
class UDBDAnimationBudgetAllocator : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x120];                                     // 0x0038   (0x0120)  MISSED
};

/// Class /Script/DBDAnimationBudgetAllocator.SkeletalMeshActorBudgeted
/// Size: 0x0000 (0x0002B8 - 0x0002B8)
class ASkeletalMeshActorBudgeted : public ASkeletalMeshActor
{ 
public:
};

/// Struct /Script/DBDAnimationBudgetAllocator.RootPrerequisiteRegisteredHandle
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRootPrerequisiteRegisteredHandle
{ 
	class USkeletalMeshComponentBudgeted*              RootPrerequisite;                                           // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Struct /Script/DBDAnimationBudgetAllocator.DBDAnimBudgetAllocatorComponentData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FDBDAnimBudgetAllocatorComponentData
{ 
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Struct /Script/DBDAnimationBudgetAllocator.SkeletalMeshComponentData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSkeletalMeshComponentData
{ 
	class UDBDSkeletalMeshComponentBudgeted*           SkeletalMeshComponent;                                      // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0008   (0x0018)  MISSED
};

