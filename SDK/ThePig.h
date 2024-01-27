
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: Competence
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: DBDAnimation
/// dependency: DBDAttack
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: NetworkUtilities

/// Class /Script/ThePig.Addon_ThePig_JigsawSketch
/// Size: 0x0050 (0x0002B8 - 0x000308)
class UAddon_ThePig_JigsawSketch : public UItemAddon
{ 
public:
	SDK_UNDEFINED(80,5193) /* TMap<ACamperPlayer*, AGenerator*> */ __um(_trackedGeneratorRepairs);                 // 0x02B8   (0x0050)  
};

/// Class /Script/ThePig.AttachReverseBearTrap
/// Size: 0x0000 (0x000650 - 0x000650)
class UAttachReverseBearTrap : public UInteractionDefinition
{ 
public:


	/// Functions
	// Function /Script/ThePig.AttachReverseBearTrap.GetCamper
	// class ACamperPlayer* GetCamper();                                                                                     // [0x5de6080] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ThePig.DetectivesHunch
/// Size: 0x0270 (0x0003C8 - 0x000638)
class UDetectivesHunch : public UPerk
{ 
public:
	SDK_UNDEFINED(80,5194) /* TSet<TWeakObjectPtr<UClass*>> */ __um(_interactableClasses);                         // 0x03C8   (0x0050)  
	float                                              _revealRanges;                                              // 0x0418   (0x000C)  
	float                                              _revealDuration;                                            // 0x0424   (0x0004)  
	SDK_UNDEFINED(80,5195) /* TMap<AActor*, FTimerHandle> */ __um(_actorToTimerMap);                               // 0x0428   (0x0050)  
	unsigned char                                      UnknownData00_5[0x50];                                      // 0x0478   (0x0050)  MISSED
	FObjectFastArray                                   _revealedActors;                                            // 0x04C8   (0x0148)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0610   (0x0028)  MISSED


	/// Functions
	// Function /Script/ThePig.DetectivesHunch.GetRevealRangeAtLevel
	// float GetRevealRangeAtLevel();                                                                                        // [0x5de6650] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ThePig.DetectivesHunch.GetRevealDuration
	// float GetRevealDuration();                                                                                            // [0x5de6630] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ThePig.K11AnimInstance
/// Size: 0x0060 (0x000610 - 0x000670)
class UK11AnimInstance : public UKillerAnimInstance
{ 
public:
	bool                                               _isAmbushAttack;                                            // 0x0610   (0x0001)  
	bool                                               _isCrouched;                                                // 0x0611   (0x0001)  
	bool                                               _isCrouchPressed;                                           // 0x0612   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0613   (0x0001)  MISSED
	float                                              _crouchPlayRate;                                            // 0x0614   (0x0004)  
	float                                              _uncrouchPlayRate;                                          // 0x0618   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x061C   (0x0004)  MISSED
	class UClass*                                      _crouchInteractionDefinitionClass;                          // 0x0620   (0x0008)  
	class UClass*                                      _uncrouchInteractionDefinitionClass;                        // 0x0628   (0x0008)  
	class UAnimSequence*                               _crouchToStand;                                             // 0x0630   (0x0008)  
	class UAnimSequence*                               _standToCrouch;                                             // 0x0638   (0x0008)  
	class UAnimSequence*                               _crouchToStandFPV;                                          // 0x0640   (0x0008)  
	class UAnimSequence*                               _standToCrouchFPV;                                          // 0x0648   (0x0008)  
	class UInteractionDefinition*                      _crouchInteractionDefinition;                               // 0x0650   (0x0008)  
	class UInteractionDefinition*                      _uncrouchInteractionDefinition;                             // 0x0658   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0660   (0x0010)  MISSED
};

/// Class /Script/ThePig.PigAmbushAttack
/// Size: 0x0010 (0x000390 - 0x0003A0)
class UPigAmbushAttack : public UPounceAttack
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0390   (0x0010)  MISSED
};

/// Class /Script/ThePig.PigAmbushAttackOpenSubstate
/// Size: 0x0008 (0x000130 - 0x000138)
class UPigAmbushAttackOpenSubstate : public UPounceAttackOpenSubstate
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0130   (0x0008)  MISSED
};

/// Class /Script/ThePig.PigAmbushAttackHittingSubstate
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UPigAmbushAttackHittingSubstate : public UPounceAttackHittingSubstate
{ 
public:
};

/// Class /Script/ThePig.PigAmbushAttackSuccessSubstate
/// Size: 0x0000 (0x000118 - 0x000118)
class UPigAmbushAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{ 
public:
};

/// Class /Script/ThePig.PigAmbushAttackMissSubstate
/// Size: 0x0000 (0x000120 - 0x000120)
class UPigAmbushAttackMissSubstate : public UPounceAttackMissSubstate
{ 
public:
};

/// Class /Script/ThePig.PigAmbushAttackObstructSubstate
/// Size: 0x0000 (0x000128 - 0x000128)
class UPigAmbushAttackObstructSubstate : public UPounceAttackObstructSubstate
{ 
public:
};

/// Class /Script/ThePig.RBTSurvivorSubAnimInstance
/// Size: 0x0040 (0x000550 - 0x000590)
class URBTSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0550   (0x0038)  MISSED
	bool                                               _isRemovingRBT;                                             // 0x0588   (0x0001)  
	bool                                               _hasSkillCheckFailed;                                       // 0x0589   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x058A   (0x0006)  MISSED
};

/// Class /Script/ThePig.RemoveReverseBearTrapChargeable
/// Size: 0x0040 (0x000790 - 0x0007D0)
class URemoveReverseBearTrapChargeable : public UChargeableInteractionDefinition
{ 
public:
	FDBDTunableRowHandle                               _audibleRangeOnSearch;                                      // 0x0788   (0x0028)  
	class UClass*                                      _timedRevealStatusEffect;                                   // 0x07B0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x07B8   (0x0018)  MISSED


	/// Functions
	// Function /Script/ThePig.RemoveReverseBearTrapChargeable.HasSuccessfullyRemoved
	// bool HasSuccessfullyRemoved();                                                                                        // [0x5de76a0] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ThePig.RemoveReverseBearTrapChargeable.BP_OnFinishWithoutDetach
	// void BP_OnFinishWithoutDetach(class ACamperPlayer* searchingPlayer);                                                  // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/ThePig.RemoveReverseBearTrapChargeable.BP_OnFinishWithDetach
	// void BP_OnFinishWithDetach(class ACamperPlayer* searchingPlayer);                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
};

/// Struct /Script/ThePig.RBTSurvivorPair
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRBTSurvivorPair
{ 
	class AReverseBearTrap*                            ReverseBearTrap;                                            // 0x0000   (0x0008)  
	class ACamperPlayer*                               Survivor;                                                   // 0x0008   (0x0008)  
};

