
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: Competence
/// dependency: CoreUObject
/// dependency: DBDAnimation
/// dependency: DBDInteraction
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: StatSystem

/// Class /Script/TheWraith.Addon_Wraith_TheSerpentSoot
/// Size: 0x0000 (0x0002B8 - 0x0002B8)
class UAddon_Wraith_TheSerpentSoot : public UItemAddon
{ 
public:
};

/// Class /Script/TheWraith.BaseCloakInteraction
/// Size: 0x0050 (0x0007C0 - 0x000810)
class UBaseCloakInteraction : public UBasicChargeableInteraction
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x07C0   (0x0050)  MISSED
};

/// Class /Script/TheWraith.CloakComponent
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UCloakComponent : public UActorComponent
{ 
public:
	bool                                               _isCloaked;                                                 // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00B9   (0x0007)  MISSED
	class UBasicChargeableInteraction*                 _cloakInteraction;                                          // 0x00C0   (0x0008)  
	class UBasicChargeableInteraction*                 _uncloakInteraction;                                        // 0x00C8   (0x0008)  


	/// Functions
	// Function /Script/TheWraith.CloakComponent.OnRep_IsCloaked
	// void OnRep_IsCloaked();                                                                                               // [0x5e4bec0] Final|Native|Private 
};

/// Class /Script/TheWraith.CloakInteraction
/// Size: 0x0000 (0x000810 - 0x000810)
class UCloakInteraction : public UBaseCloakInteraction
{ 
public:
};

/// Class /Script/TheWraith.UncloakInteraction
/// Size: 0x0080 (0x000810 - 0x000890)
class UUncloakInteraction : public UBaseCloakInteraction
{ 
public:
	class UCurveFloat*                                 _postUncloakSpeedCurve;                                     // 0x0808   (0x0008)  
	FTunableStat                                       _postUncloakSpeedCurveDuration;                             // 0x0810   (0x0080)  
};

/// Class /Script/TheWraith.WraithAnimInstance
/// Size: 0x00A0 (0x000610 - 0x0006B0)
class UWraithAnimInstance : public UKillerAnimInstance
{ 
public:
	bool                                               _isRingingBell;                                             // 0x0610   (0x0001)  
	bool                                               _isCloaking;                                                // 0x0611   (0x0001)  
	bool                                               _isUncloaking;                                              // 0x0612   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0613   (0x0005)  MISSED
	FPerspectiveDependentAnimSequenceSelector          _cloakingInSelector;                                        // 0x0618   (0x0018)  
	FPerspectiveDependentAnimSequenceSelector          _cloakingSelector;                                          // 0x0630   (0x0018)  
	FPerspectiveDependentAnimSequenceSelector          _cloakingOutSelector;                                       // 0x0648   (0x0018)  
	FPerspectiveDependentAnimSequenceSelector          _uncloakingInSelector;                                      // 0x0660   (0x0018)  
	FPerspectiveDependentAnimSequenceSelector          _uncloakingSelector;                                        // 0x0678   (0x0018)  
	FPerspectiveDependentAnimSequenceSelector          _uncloakingOutSelector;                                     // 0x0690   (0x0018)  
	float                                              _cloakingPlayRate;                                          // 0x06A8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x06AC   (0x0004)  MISSED
};

/// Class /Script/TheWraith.WraithPower
/// Size: 0x0018 (0x0004C8 - 0x0004E0)
class AWraithPower : public ACollectable
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x04C8   (0x0018)  MISSED


	/// Functions
	// Function /Script/TheWraith.WraithPower.IsUncloaking
	// bool IsUncloaking();                                                                                                  // [0x5e4c710] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheWraith.WraithPower.IsCloaking
	// bool IsCloaking();                                                                                                    // [0x5e4c6e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheWraith.WraithPower.ForceUncloak
	// void ForceUncloak();                                                                                                  // [0x5e4c6c0] Final|Native|Public|BlueprintCallable 
};

