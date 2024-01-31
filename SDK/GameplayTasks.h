
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/GameplayTasks.ETaskResourceOverlapPolicy
/// Size: 0x03
enum class ETaskResourceOverlapPolicy : uint8_t
{
	ETaskResourceOverlapPolicy__StartOnTop                                           = 0,
	ETaskResourceOverlapPolicy__StartAtEnd                                           = 1,
	ETaskResourceOverlapPolicy__ETaskResourceOverlapPolicy_MAX                       = 2
};

/// Enum /Script/GameplayTasks.EGameplayTaskState
/// Size: 0x06
enum class EGameplayTaskState : uint8_t
{
	EGameplayTaskState__Uninitialized                                                = 0,
	EGameplayTaskState__AwaitingActivation                                           = 1,
	EGameplayTaskState__Paused                                                       = 2,
	EGameplayTaskState__Active                                                       = 3,
	EGameplayTaskState__Finished                                                     = 4,
	EGameplayTaskState__EGameplayTaskState_MAX                                       = 5
};

/// Enum /Script/GameplayTasks.EGameplayTaskRunResult
/// Size: 0x06
enum class EGameplayTaskRunResult : uint8_t
{
	EGameplayTaskRunResult__Error                                                    = 0,
	EGameplayTaskRunResult__Failed                                                   = 1,
	EGameplayTaskRunResult__Success_Paused                                           = 2,
	EGameplayTaskRunResult__Success_Active                                           = 3,
	EGameplayTaskRunResult__Success_Finished                                         = 4,
	EGameplayTaskRunResult__EGameplayTaskRunResult_MAX                               = 5
};

/// Class /Script/GameplayTasks.GameplayTask
/// Size: 0x0040 (0x000030 - 0x000070)
class UGameplayTask : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	FName                                              InstanceName;                                               // 0x0038   (0x000C)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0044   (0x0002)  MISSED
	ETaskResourceOverlapPolicy                         ResourceOverlapPolicy;                                      // 0x0046   (0x0001)  
	unsigned char                                      UnknownData02_5[0x21];                                      // 0x0047   (0x0021)  MISSED
	class UGameplayTask*                               ChildTask;                                                  // 0x0068   (0x0008)  


	/// Functions
	// Function /Script/GameplayTasks.GameplayTask.ReadyForActivation
	// void ReadyForActivation();                                                                                            // [0x84a3d10] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature
	// void GenericGameplayTaskDelegate__DelegateSignature();                                                                // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/GameplayTasks.GameplayTask.EndTask
	// void EndTask();                                                                                                       // [0x84a39b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayTasks.GameplayTask_ClaimResource
/// Size: 0x0000 (0x000070 - 0x000070)
class UGameplayTask_ClaimResource : public UGameplayTask
{ 
public:


	/// Functions
	// Function /Script/GameplayTasks.GameplayTask_ClaimResource.ClaimResources
	// class UGameplayTask_ClaimResource* ClaimResources(TScriptInterface<Class> InTaskOwner, TArray<UClass*> ResourceClasses, char Priority, FName TaskInstanceName); // [0x84a37e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask_ClaimResource.ClaimResource
	// class UGameplayTask_ClaimResource* ClaimResource(TScriptInterface<Class> InTaskOwner, class UClass* ResourceClass, char Priority, FName TaskInstanceName); // [0x84a3670] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayTasks.GameplayTask_SpawnActor
/// Size: 0x0040 (0x000070 - 0x0000B0)
class UGameplayTask_SpawnActor : public UGameplayTask
{ 
public:
	SDK_UNDEFINED(16,852) /* FMulticastInlineDelegate */ __um(success);                                            // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,853) /* FMulticastInlineDelegate */ __um(DidNotSpawn);                                        // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0090   (0x0018)  MISSED
	class UClass*                                      ClassToSpawn;                                               // 0x00A8   (0x0008)  


	/// Functions
	// Function /Script/GameplayTasks.GameplayTask_SpawnActor.SpawnActor
	// class UGameplayTask_SpawnActor* SpawnActor(TScriptInterface<Class> TaskOwner, FVector SpawnLocation, FRotator SpawnRotation, class UClass* Class, bool bSpawnOnlyOnAuthority); // [0x84a3d30] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
	// void FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor);                              // [0x84a39d0] Native|Public|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
	// bool BeginSpawningActor(class UObject* WorldContextObject, class AActor*& SpawnedActor);                              // [0x84a3590] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayTasks.GameplayTask_TimeLimitedExecution
/// Size: 0x0030 (0x000070 - 0x0000A0)
class UGameplayTask_TimeLimitedExecution : public UGameplayTask
{ 
public:
	SDK_UNDEFINED(16,854) /* FMulticastInlineDelegate */ __um(OnFinished);                                         // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,855) /* FMulticastInlineDelegate */ __um(OnTimeExpired);                                      // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0090   (0x0010)  MISSED
};

/// Class /Script/GameplayTasks.GameplayTask_WaitDelay
/// Size: 0x0018 (0x000070 - 0x000088)
class UGameplayTask_WaitDelay : public UGameplayTask
{ 
public:
	SDK_UNDEFINED(16,856) /* FMulticastInlineDelegate */ __um(OnFinish);                                           // 0x0070   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0080   (0x0008)  MISSED


	/// Functions
	// Function /Script/GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
	// class UGameplayTask_WaitDelay* TaskWaitDelay(TScriptInterface<Class> TaskOwner, float Time, char Priority);           // [0x84a3f00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature
	// void TaskDelayDelegate__DelegateSignature();                                                                          // [0x61d2f50] MulticastDelegate|Public|Delegate 
};

/// Class /Script/GameplayTasks.GameplayTaskOwnerInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UGameplayTaskOwnerInterface : public UInterface
{ 
public:
};

/// Class /Script/GameplayTasks.GameplayTaskResource
/// Size: 0x0010 (0x000030 - 0x000040)
class UGameplayTaskResource : public UObject
{ 
public:
	int32_t                                            ManualResourceID;                                           // 0x0030   (0x0004)  
	int8_t                                             AutoResourceID;                                             // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	bool                                               bManuallySetID : 1;                                         // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/GameplayTasks.GameplayTasksComponent
/// Size: 0x0070 (0x0000B8 - 0x000128)
class UGameplayTasksComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0xC];                                       // 0x00B8   (0x000C)  MISSED
	bool                                               bIsNetDirty : 1;                                            // 0x00C4:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x00C5   (0x0003)  MISSED
	TArray<class UGameplayTask*>                       SimulatedTasks;                                             // 0x00C8   (0x0010)  
	TArray<class UGameplayTask*>                       TaskPriorityQueue;                                          // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x00E8   (0x0010)  MISSED
	TArray<class UGameplayTask*>                       TickingTasks;                                               // 0x00F8   (0x0010)  
	TArray<class UGameplayTask*>                       KnownTasks;                                                 // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,857) /* FMulticastInlineDelegate */ __um(OnClaimedResourcesChange);                           // 0x0118   (0x0010)  


	/// Functions
	// Function /Script/GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
	// void OnRep_SimulatedTasks();                                                                                          // [0x84a3cf0] Final|Native|Public  
	// Function /Script/GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
	// EGameplayTaskRunResult K2_RunGameplayTask(TScriptInterface<Class> TaskOwner, class UGameplayTask* Task, char Priority, TArray<UClass*> AdditionalRequiredResources, TArray<UClass*> AdditionalClaimedResources); // [0x84a3aa0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/GameplayTasks.GameplayResourceSet
/// Size: 0x0002 (0x000000 - 0x000002)
struct FGameplayResourceSet
{ 
	unsigned char                                      UnknownData00_1[0x2];                                       // 0x0000   (0x0002)  MISSED
};

