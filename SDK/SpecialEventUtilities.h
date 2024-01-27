
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags

/// Class /Script/SpecialEventUtilities.RespawnableInteractable
/// Size: 0x0028 (0x000338 - 0x000360)
class ARespawnableInteractable : public AInteractable
{ 
public:
	SDK_UNDEFINED(16,3533) /* FMulticastInlineDelegate */ __um(OnInteractionEnded);                                // 0x0338   (0x0010)  
	SDK_UNDEFINED(16,3534) /* FMulticastInlineDelegate */ __um(OnIsInteractingChanged);                            // 0x0348   (0x0010)  
	bool                                               _isHidden;                                                  // 0x0358   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0359   (0x0007)  MISSED


	/// Functions
	// Function /Script/SpecialEventUtilities.RespawnableInteractable.OnUnhidden
	// void OnUnhidden();                                                                                                    // [0x43c3630] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventUtilities.RespawnableInteractable.OnRep_IsHidden
	// void OnRep_IsHidden();                                                                                                // [0x59e2a60] Final|Native|Private 
	// Function /Script/SpecialEventUtilities.RespawnableInteractable.OnHidden
	// void OnHidden();                                                                                                      // [0x58e20b0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventUtilities.RespawnableInteractable.IsHidden
	// bool IsHidden();                                                                                                      // [0x59e2a30] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SpecialEventUtilities.RespawningEventComponent
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class URespawningEventComponent : public UActorComponent
{ 
public:
	class URespawnableStrategy*                        _respawnableStrategy;                                       // 0x00B8   (0x0008)  
	class URespawnablePositioner*                      _respawnablePositioner;                                     // 0x00C0   (0x0008)  


	/// Functions
	// Function /Script/SpecialEventUtilities.RespawningEventComponent.DBD_ForceRespawnSpecialEventObject
	// void DBD_ForceRespawnSpecialEventObject();                                                                            // [0x45fe020] Final|Exec|Native|Private 
	// Function /Script/SpecialEventUtilities.RespawningEventComponent.Authority_OnIsInteractingWithAnyRespawnableInteractableChanged
	// void Authority_OnIsInteractingWithAnyRespawnableInteractableChanged(class ARespawnableInteractable* RespawnableInteractable, bool IsInteracting); // [0x59e34f0] Native|Protected     
};

/// Class /Script/SpecialEventUtilities.DebugTimedRespawnableTriggerCountdownTimer
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UDebugTimedRespawnableTriggerCountdownTimer : public UActorComponent
{ 
public:
	float                                              _countdownTimeRemaining;                                    // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00BC   (0x0004)  MISSED


	/// Functions
	// Function /Script/SpecialEventUtilities.DebugTimedRespawnableTriggerCountdownTimer.OnRep_CountdownTimeRemaining
	// void OnRep_CountdownTimeRemaining();                                                                                  // [0x45fe020] Final|Native|Private 
};

/// Class /Script/SpecialEventUtilities.DisableActorOnEventsComponent
/// Size: 0x0028 (0x0000B8 - 0x0000E0)
class UDisableActorOnEventsComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	TArray<FGameplayTag>                               _triggerEvents;                                             // 0x00D0   (0x0010)  
};

/// Class /Script/SpecialEventUtilities.RespawnableTrigger
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class URespawnableTrigger : public UActorComponent
{ 
public:
};

/// Class /Script/SpecialEventUtilities.InteractionRespawnableTrigger
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UInteractionRespawnableTrigger : public URespawnableTrigger
{ 
public:
	class URespawningEventComponent*                   _respawningEventComponent;                                  // 0x00B8   (0x0008)  


	/// Functions
	// Function /Script/SpecialEventUtilities.InteractionRespawnableTrigger.Authority_OnNewRespawnableSubscribed
	// void Authority_OnNewRespawnableSubscribed(class ARespawnableInteractable* newRespawnableInteractable);                // [0x59e24d0] Final|Native|Public  
	// Function /Script/SpecialEventUtilities.InteractionRespawnableTrigger.Authority_OnInteractionEnded
	// void Authority_OnInteractionEnded(class ARespawnableInteractable* RespawnableInteractable);                           // [0x59e2440] Native|Public        
};

/// Class /Script/SpecialEventUtilities.PlayerEventDispatcher
/// Size: 0x0090 (0x0000B8 - 0x000148)
class UPlayerEventDispatcher : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x90];                                      // 0x00B8   (0x0090)  MISSED
};

/// Class /Script/SpecialEventUtilities.RespawnablePositioner
/// Size: 0x0028 (0x0000B8 - 0x0000E0)
class URespawnablePositioner : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,3535) /* FMulticastInlineDelegate */ __um(OnIsInteractingWithAnyRespawnableInteractableChangedEvent); // 0x00B8   (0x0010)  
	TArray<class ARespawnableInteractable*>            _respawnableInteractables;                                  // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00D8   (0x0008)  MISSED


	/// Functions
	// Function /Script/SpecialEventUtilities.RespawnablePositioner.Authority_OnIsInteractingChangedEvent
	// void Authority_OnIsInteractingChangedEvent(class ARespawnableInteractable* RespawnableInteractable, bool IsInteracting); // [0x59e2d30] Final|Native|Private 
	// Function /Script/SpecialEventUtilities.RespawnablePositioner.Authority_GetRespawnables
	// TArray<ARespawnableInteractable*> Authority_GetRespawnables();                                                        // [0x59e2ca0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SpecialEventUtilities.RespawnableStrategy
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class URespawnableStrategy : public UActorComponent
{ 
public:
};

/// Class /Script/SpecialEventUtilities.RespawnAtRandomLocationStrategy
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class URespawnAtRandomLocationStrategy : public URespawnableStrategy
{ 
public:
};

/// Class /Script/SpecialEventUtilities.RespawnFurthestFromPlayersStrategy
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class URespawnFurthestFromPlayersStrategy : public URespawnableStrategy
{ 
public:
	float                                              _collisionCapsuleHalfHeight;                                // 0x00B8   (0x0004)  
	float                                              _collisionCapsuleRadius;                                    // 0x00BC   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00C0   (0x0008)  MISSED
};

/// Class /Script/SpecialEventUtilities.RespawningEventUtilities
/// Size: 0x0000 (0x000030 - 0x000030)
class URespawningEventUtilities : public UBlueprintFunctionLibrary
{ 
public:
};

/// Struct /Script/SpecialEventUtilities.ComponentToAddInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FComponentToAddInfo
{ 
	class UClass*                                      Component;                                                  // 0x0000   (0x0008)  
	FName                                              Name;                                                       // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/SpecialEventUtilities.SpecialEventPlayerComponent
/// Size: 0x0020 (0x0000B8 - 0x0000D8)
class USpecialEventPlayerComponent : public UActorComponent
{ 
public:
	TArray<FComponentToAddInfo>                        _componentsAddToSurvivor;                                   // 0x00B8   (0x0010)  
	TArray<FComponentToAddInfo>                        _componentsAddToKiller;                                     // 0x00C8   (0x0010)  
};

/// Class /Script/SpecialEventUtilities.TimedInteractionRespawnableTrigger
/// Size: 0x0038 (0x0000C0 - 0x0000F8)
class UTimedInteractionRespawnableTrigger : public UInteractionRespawnableTrigger
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x00C0   (0x0038)  MISSED
};

/// Class /Script/SpecialEventUtilities.TimedRespawnableTrigger
/// Size: 0x0048 (0x0000B8 - 0x000100)
class UTimedRespawnableTrigger : public URespawnableTrigger
{ 
public:
	class URespawningEventComponent*                   _respawningEventComponent;                                  // 0x00B8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x00C0   (0x0040)  MISSED
};

