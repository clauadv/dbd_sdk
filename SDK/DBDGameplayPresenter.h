
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: DeadByDaylight
/// dependency: Engine

/// Class /Script/DBDGameplayPresenter.SurvivorStatusComponent
/// Size: 0x0040 (0x0000B8 - 0x0000F8)
class USurvivorStatusComponent : public UActorComponent
{ 
public:
	class ACamperPlayer*                               _survivor;                                                  // 0x00B8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x00C0   (0x0038)  MISSED


	/// Functions
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.OnValidatedInteractionStarted
	// void OnValidatedInteractionStarted();                                                                                 // [0x5092960] Final|Native|Private 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.OnValidatedInteractionEnded
	// void OnValidatedInteractionEnded();                                                                                   // [0x5092960] Final|Native|Private 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.OnSuvivorDamaged
	// void OnSuvivorDamaged(ECamperDamageState oldDamageState, ECamperDamageState newDamageState);                          // [0x5092980] Final|Native|Private 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.OnSurivorStatusChange
	// void OnSurivorStatusChange();                                                                                         // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.OnRunningAndMovementChanged
	// void OnRunningAndMovementChanged(bool isRunningAndMoving);                                                            // [0x50928d0] Final|Native|Private 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.OnHookedStateChanged
	// void OnHookedStateChanged();                                                                                          // [0x5092960] Final|Native|Private 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.OnGuidedStateChanged
	// void OnGuidedStateChanged();                                                                                          // [0x5092960] Final|Native|Private 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.OnCrouchChanged
	// void OnCrouchChanged(bool isCrouched);                                                                                // [0x50928d0] Final|Native|Private 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.IsSleeping
	// bool IsSleeping();                                                                                                    // [0x50928a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.IsRunning
	// bool IsRunning();                                                                                                     // [0x5092870] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.IsInjured
	// bool IsInjured();                                                                                                     // [0x5092840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.IsHooked
	// bool IsHooked();                                                                                                      // [0x5092810] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.IsHiding
	// bool IsHiding();                                                                                                      // [0x50927e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.IsHealing
	// bool IsHealing();                                                                                                     // [0x50927b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.IsHarpooned
	// bool IsHarpooned();                                                                                                   // [0x5092780] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.IsGettingStrangled
	// bool IsGettingStrangled();                                                                                            // [0x5092750] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.IsGettingSacrificed
	// bool IsGettingSacrificed();                                                                                           // [0x5092720] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.IsDying
	// bool IsDying();                                                                                                       // [0x50926f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.IsDead
	// bool IsDead();                                                                                                        // [0x50926c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.IsCrouching
	// bool IsCrouching();                                                                                                   // [0x5092690] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.IsCaptured
	// bool IsCaptured();                                                                                                    // [0x5092660] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDGameplayPresenter.SurvivorStatusComponent.GetMovementSpeed
	// void GetMovementSpeed(float& currentMovementSpeed, float& percentMovementSpeed, float& maximumMovementSpeed);         // [0x5092520] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

