
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UAnimationBudgetBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.SetAnimationBudgetParameters
	// void SetAnimationBudgetParameters(class UObject* WorldContextObject, FAnimationBudgetAllocatorParameters& InParameters); // [0x4bdc270] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget
	// void EnableAnimationBudget(class UObject* WorldContextObject, bool bEnabled);                                         // [0x4bdc1b0] Final|Native|Static|Private|BlueprintCallable 
};

/// Class /Script/AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
/// Size: 0x0020 (0x000FA0 - 0x000FC0)
class USkeletalMeshComponentBudgeted : public USkeletalMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0FA0   (0x0018)  MISSED
	bool                                               bAutoRegisterWithBudgetAllocator : 1;                       // 0x0FB8:0 (0x0001)  
	bool                                               bAutoCalculateSignificance : 1;                             // 0x0FB8:1 (0x0001)  
	bool                                               bShouldUseActorRenderedFlag : 1;                            // 0x0FB8:2 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0FB9   (0x0007)  MISSED


	/// Functions
	// Function /Script/AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator
	// void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator);                                     // [0x4bdc430] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/AnimationBudgetAllocator.AnimationBudgetAllocatorParameters
/// Size: 0x0058 (0x000000 - 0x000058)
struct FAnimationBudgetAllocatorParameters
{ 
	float                                              BudgetInMs;                                                 // 0x0000   (0x0004)  
	float                                              MinQuality;                                                 // 0x0004   (0x0004)  
	int32_t                                            MaxTickRate;                                                // 0x0008   (0x0004)  
	float                                              WorkUnitSmoothingSpeed;                                     // 0x000C   (0x0004)  
	float                                              AlwaysTickFalloffAggression;                                // 0x0010   (0x0004)  
	float                                              InterpolationFalloffAggression;                             // 0x0014   (0x0004)  
	int32_t                                            InterpolationMaxRate;                                       // 0x0018   (0x0004)  
	int32_t                                            MaxInterpolatedComponents;                                  // 0x001C   (0x0004)  
	float                                              MaxInterpolateRatio;                                        // 0x0020   (0x0004)  
	float                                              InterpolationTickMultiplier;                                // 0x0024   (0x0004)  
	float                                              InitialEstimatedWorkUnitTimeMs;                             // 0x0028   (0x0004)  
	int32_t                                            MaxTickedOffsreenComponents;                                // 0x002C   (0x0004)  
	int32_t                                            StateChangeThrottleInFrames;                                // 0x0030   (0x0004)  
	float                                              BudgetFactorBeforeReducedWork;                              // 0x0034   (0x0004)  
	float                                              BudgetFactorBeforeReducedWorkEpsilon;                       // 0x0038   (0x0004)  
	float                                              BudgetPressureSmoothingSpeed;                               // 0x003C   (0x0004)  
	int32_t                                            ReducedWorkThrottleMinInFrames;                             // 0x0040   (0x0004)  
	int32_t                                            ReducedWorkThrottleMaxInFrames;                             // 0x0044   (0x0004)  
	float                                              BudgetFactorBeforeAggressiveReducedWork;                    // 0x0048   (0x0004)  
	int32_t                                            ReducedWorkThrottleMaxPerFrame;                             // 0x004C   (0x0004)  
	float                                              BudgetPressureBeforeEmergencyReducedWork;                   // 0x0050   (0x0004)  
	float                                              SignificancePowerValue;                                     // 0x0054   (0x0004)  
};

