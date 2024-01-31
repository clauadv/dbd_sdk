
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: Competence
/// dependency: CoreUObject
/// dependency: DeadByDaylight
/// dependency: Engine

/// Class /Script/Halloween2020.BlightedSerumAddon
/// Size: 0x0058 (0x0002B8 - 0x000310)
class UBlightedSerumAddon : public UItemAddon
{ 
public:
	class UClass*                                      _blightedSerumCollectable;                                  // 0x02B8   (0x0008)  
	class UBlightedSerumDashInteraction*               _dashInteraction;                                           // 0x02C0   (0x0008)  
	int32_t                                            _theBlightExtraTokens;                                      // 0x02C8   (0x0004)  
	int32_t                                            _numberOfDashesPerEvent;                                    // 0x02CC   (0x0004)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x02D0   (0x0040)  MISSED


	/// Functions
	// Function /Script/Halloween2020.BlightedSerumAddon.OnRep_DashInteraction
	// void OnRep_DashInteraction();                                                                                         // [0x5994be0] Final|Native|Private 
	// Function /Script/Halloween2020.BlightedSerumAddon.OnBlightedDashEnabledVfxSfx
	// void OnBlightedDashEnabledVfxSfx();                                                                                   // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
};

/// Class /Script/Halloween2020.BlightedSerumCollisionInteraction
/// Size: 0x0010 (0x000650 - 0x000660)
class UBlightedSerumCollisionInteraction : public UInteractionDefinition
{ 
public:
	class UBlightedSerumCooldownInteraction*           _cooldownInteraction;                                       // 0x0648   (0x0008)  
	float                                              _bounceTime;                                                // 0x0650   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0654   (0x000C)  MISSED


	/// Functions
	// Function /Script/Halloween2020.BlightedSerumCollisionInteraction.SetCooldownInteraction
	// void SetCooldownInteraction(class UBlightedSerumCooldownInteraction* cooldownInteraction);                            // [0x5994d70] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Halloween2020.BlightedSerumCooldownInteraction
/// Size: 0x0010 (0x000650 - 0x000660)
class UBlightedSerumCooldownInteraction : public UInteractionDefinition
{ 
public:
	float                                              _cooldownTime;                                              // 0x0648   (0x0004)  
	float                                              _cameraPitchRecenterTime;                                   // 0x064C   (0x0004)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0650   (0x0010)  MISSED
};

/// Class /Script/Halloween2020.BlightedSerumDashInteraction
/// Size: 0x0090 (0x000650 - 0x0006E0)
class UBlightedSerumDashInteraction : public UInteractionDefinition
{ 
public:
	class UBlightedSerumCooldownInteraction*           _cooldownInteraction;                                       // 0x0648   (0x0008)  
	class UBlightedSerumCollisionInteraction*          _collisionInteraction;                                      // 0x0650   (0x0008)  
	class UCurveFloat*                                 _dashSpeedCurve;                                            // 0x0658   (0x0008)  
	class UCurveFloat*                                 _lookAngleToTurnRateCurveController;                        // 0x0660   (0x0008)  
	class UCurveFloat*                                 _lookAngleToTurnRateCurveMouse;                             // 0x0668   (0x0008)  
	float                                              _dashDuration;                                              // 0x0670   (0x0004)  
	float                                              _vectorInterpToSpeed;                                       // 0x0674   (0x0004)  
	float                                              _wallDashAccelerationMultiplier;                            // 0x0678   (0x0004)  
	float                                              _cameraPitchRecenterTime;                                   // 0x067C   (0x0004)  
	float                                              _lookAngleTurnRateModifier;                                 // 0x0680   (0x0004)  
	float                                              _wallDashCollisionRadius;                                   // 0x0684   (0x0004)  
	float                                              _wallDashCollisionHeight;                                   // 0x0688   (0x0004)  
	float                                              _wallDashCollisionRange;                                    // 0x068C   (0x0004)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0690   (0x0050)  MISSED


	/// Functions
	// Function /Script/Halloween2020.BlightedSerumDashInteraction.SetCooldownInteraction
	// void SetCooldownInteraction(class UBlightedSerumCooldownInteraction* cooldownInteraction);                            // [0x5994d70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Halloween2020.BlightedSerumDashInteraction.SetCollisionInteraction
	// void SetCollisionInteraction(class UBlightedSerumCollisionInteraction* collisionInteraction);                         // [0x59950b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Halloween2020.ToxinPlantInteractable
/// Size: 0x0008 (0x000378 - 0x000380)
class AToxinPlantInteractable : public ASpecialBehaviourInteractable
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0378   (0x0008)  MISSED


	/// Functions
	// Function /Script/Halloween2020.ToxinPlantInteractable.SetToxinPlantComplete
	// void SetToxinPlantComplete(bool IsComplete);                                                                          // [0x59954b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Halloween2020.ToxinPlantInteractable.OnToxinPlantComplete
	// void OnToxinPlantComplete();                                                                                          // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/Halloween2020.ToxinPlantInteractable.OnSalvageInteractionStart
	// void OnSalvageInteractionStart();                                                                                     // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/Halloween2020.ToxinPlantInteractable.OnSalvageInteractionFinished
	// void OnSalvageInteractionFinished();                                                                                  // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/Halloween2020.ToxinPlantInteractable.IsToxinPlantComplete
	// bool IsToxinPlantComplete();                                                                                          // [0x5995480] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

