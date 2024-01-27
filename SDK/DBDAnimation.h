
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Activation
/// dependency: AnimationUtilities
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: DBDGameplay
/// dependency: DBDSharedTypes
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: GameplayTagUtilities

/// Enum /Script/DBDAnimation.EArmIkMode
/// Size: 0x07
enum class EArmIkMode : uint8_t
{
	EArmIkMode__None                                                                 = 0,
	EArmIkMode__BothHand                                                             = 1,
	EArmIkMode__OnlyRight                                                            = 2,
	EArmIkMode__OnlyLeft                                                             = 3,
	EArmIkMode__OneHandAtTime                                                        = 4,
	EArmIkMode__BothAtSameTime                                                       = 5,
	EArmIkMode__EArmIkMode_MAX                                                       = 6
};

/// Class /Script/DBDAnimation.DBDBaseAnimInstance
/// Size: 0x0030 (0x0002C0 - 0x0002F0)
class UDBDBaseAnimInstance : public UAnimInstance
{ 
public:
	class UAnimEffectBlackBoard*                       _animEffectBlackBoard;                                      // 0x02C0   (0x0008)  
	class UAnimEffectHandler*                          _animEffectHandlerForSFX;                                   // 0x02C8   (0x0008)  
	class UAnimEffectHandler*                          _animEffectHandlerForVFX;                                   // 0x02D0   (0x0008)  
	class UClass*                                      _animEffectHandlerClassForSFX;                              // 0x02D8   (0x0008)  
	class UClass*                                      _animEffectHandlerClassForVFX;                              // 0x02E0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x02E8   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDAnimation.DBDBaseAnimInstance.HasBeenNotified
	// bool HasBeenNotified(FName AnimNotify);                                                                               // [0x4ec27a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDAnimation.PlayerAnimInstance
/// Size: 0x0250 (0x0002F0 - 0x000540)
class UPlayerAnimInstance : public UDBDBaseAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x02F0   (0x0020)  MISSED
	class ADBDPlayer*                                  _owningPlayer;                                              // 0x0310   (0x0008)  
	TArray<FTaggedAnimCollection>                      _taggedAnimCollections;                                     // 0x0318   (0x0010)  
	SDK_UNDEFINED(80,3097) /* TMap<FGameplayTag, UAnimSequence*> */ __um(_animations);                             // 0x0328   (0x0050)  
	SDK_UNDEFINED(80,3098) /* TMap<FGameplayTag, UBlendSpace*> */ __um(_blendspaces);                              // 0x0378   (0x0050)  
	SDK_UNDEFINED(80,3099) /* TMap<FGameplayTag, UAimOffsetBlendSpace*> */ __um(_aimoffsets);                      // 0x03C8   (0x0050)  
	SDK_UNDEFINED(80,3100) /* TMap<FGameplayTag, UBlendSpace1D*> */ __um(_blendspaces1d);                          // 0x0418   (0x0050)  
	SDK_UNDEFINED(80,3101) /* TMap<FGameplayTag, UAimOffsetBlendSpace1D*> */ __um(_aimoffsets1d);                  // 0x0468   (0x0050)  
	SDK_UNDEFINED(80,3102) /* TMap<FGameplayTag, FAnimSequenceSelector> */ __um(_selectors);                       // 0x04B8   (0x0050)  
	bool                                               _isInParadise;                                              // 0x0508   (0x0001)  
	bool                                               _isIntroCompleted;                                          // 0x0509   (0x0001)  
	bool                                               _isLevelReadyToPlay;                                        // 0x050A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x050B   (0x0005)  MISSED
	FActivationDefinition                              _activationDefinition;                                      // 0x0510   (0x0028)  
	float                                              _interactionDuration;                                       // 0x0538   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x053C   (0x0004)  MISSED


	/// Functions
	// Function /Script/DBDAnimation.PlayerAnimInstance.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x4ec51e0] Final|Native|Protected 
	// Function /Script/DBDAnimation.PlayerAnimInstance.OnIntroCompleted
	// void OnIntroCompleted();                                                                                              // [0x4ec51c0] Native|Protected     
	// Function /Script/DBDAnimation.PlayerAnimInstance.GetOwningPlayer
	// class ADBDPlayer* GetOwningPlayer();                                                                                  // [0x4ec4e60] Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDAnimation.BaseSurvivorAnimInstance
/// Size: 0x0010 (0x000540 - 0x000550)
class UBaseSurvivorAnimInstance : public UPlayerAnimInstance
{ 
public:
	class ACamperPlayer*                               _owningSurvivor;                                            // 0x0540   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0548   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDAnimation.BaseSurvivorAnimInstance.IsPlayingMontageByName
	// bool IsPlayingMontageByName(FName MontageID);                                                                         // [0x4ec2850] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDAnimation.BaseSurvivorAnimInstance.GetOwningSurvivor
	// class ACamperPlayer* GetOwningSurvivor();                                                                             // [0x4ec2770] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDAnimation.AimOffsetSurvivorSubAnimInstance
/// Size: 0x0050 (0x000550 - 0x0005A0)
class UAimOffsetSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:
	float                                              _pitch;                                                     // 0x0548   (0x0004)  
	float                                              _yaw;                                                       // 0x054C   (0x0004)  
	float                                              _yawInterpolated;                                           // 0x0550   (0x0004)  
	bool                                               _allowLookAt;                                               // 0x0554   (0x0001)  
	bool                                               _isUsingAimItem;                                            // 0x0555   (0x0001)  
	bool                                               _isInjured;                                                 // 0x0556   (0x0001)  
	bool                                               _isCrawling;                                                // 0x0557   (0x0001)  
	bool                                               _isIdle;                                                    // 0x0558   (0x0001)  
	bool                                               _isDrasticYawChangeDetected;                                // 0x0559   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x055A   (0x0002)  MISSED
	float                                              _yawInterpolationSpeed;                                     // 0x055C   (0x0004)  
	float                                              _yawDeadzoneStart;                                          // 0x0560   (0x0004)  
	float                                              _yawClampValue;                                             // 0x0564   (0x0004)  
	float                                              _yawDrasticChangeUpperLimit;                                // 0x0568   (0x0004)  
	float                                              _yawDrasticChangeLowerLimit;                                // 0x056C   (0x0004)  
	float                                              _yawDrasticChangeInterpolationSpeed;                        // 0x0570   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0574   (0x0004)  MISSED
	class UCurveFloat*                                 _yawInterpolateEaseIn;                                      // 0x0578   (0x0008)  
	class UCurveFloat*                                 _yawInterpolateEaseOut;                                     // 0x0580   (0x0008)  
	float                                              _yawInterpolationEaseInLength;                              // 0x0588   (0x0004)  
	float                                              _yawInterpolationEaseOutDistance;                           // 0x058C   (0x0004)  
	bool                                               _isYawInDeadZone;                                           // 0x0590   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0591   (0x0003)  MISSED
	float                                              _currentTargetYaw;                                          // 0x0594   (0x0004)  
	float                                              _yawAcceleration;                                           // 0x0598   (0x0004)  
	float                                              _yawAccelerationTime;                                       // 0x059C   (0x0004)  
};

/// Class /Script/DBDAnimation.AnyPlayerInRangeAnimInstance
/// Size: 0x0010 (0x0002C0 - 0x0002D0)
class UAnyPlayerInRangeAnimInstance : public UAnimInstance
{ 
public:
	bool                                               _isAnyPlayerInNearbyRange;                                  // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02C1   (0x0003)  MISSED
	float                                              _nearbyRangeCm;                                             // 0x02C4   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x02C8   (0x0008)  MISSED
};

/// Class /Script/DBDAnimation.ArmIKSurvivorSubAnimInstance
/// Size: 0x0080 (0x000550 - 0x0005D0)
class UArmIKSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:
	FRotator                                           _rightWristUpRotation;                                      // 0x0548   (0x000C)  
	FRotator                                           _leftWristUpRotation;                                       // 0x0554   (0x000C)  
	FFloatRange                                        _localWristYawRange;                                        // 0x0560   (0x0010)  
	FFloatRange                                        _localWristPitchRange;                                      // 0x0570   (0x0010)  
	float                                              _armInterpolationSpeed;                                     // 0x0580   (0x0004)  
	float                                              _handInterpolationSpeed;                                    // 0x0584   (0x0004)  
	float                                              _alphaLerpTime;                                             // 0x0588   (0x0004)  
	float                                              _reachPadding;                                              // 0x058C   (0x0004)  
	float                                              _rightArmIKAlpha;                                           // 0x0590   (0x0004)  
	float                                              _leftArmIKAlpha;                                            // 0x0594   (0x0004)  
	EArmIkMode                                         _armIkMode;                                                 // 0x0598   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0599   (0x0007)  MISSED
	class UArmDetectionFanComponent*                   _rightDetectionFan;                                         // 0x05A0   (0x0008)  
	class UArmDetectionFanComponent*                   _leftDetectionFan;                                          // 0x05A8   (0x0008)  
	class USkeletalMeshComponent*                      _meshComponent;                                             // 0x05B0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x05B8   (0x0018)  MISSED


	/// Functions
	// Function /Script/DBDAnimation.ArmIKSurvivorSubAnimInstance.ChangeMode
	// void ChangeMode(EArmIkMode newMode);                                                                                  // [0x4ec2660] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDAnimation.BaseKillerAnimInstance
/// Size: 0x0020 (0x000540 - 0x000560)
class UBaseKillerAnimInstance : public UPlayerAnimInstance
{ 
public:
	class ASlasherPlayer*                              _owningKiller;                                              // 0x0540   (0x0008)  
	bool                                               _firstPersonView;                                           // 0x0548   (0x0001)  
	unsigned char                                      UnknownData00_6[0x17];                                      // 0x0549   (0x0017)  MISSED


	/// Functions
	// Function /Script/DBDAnimation.BaseKillerAnimInstance.GetOwningKiller
	// class ASlasherPlayer* GetOwningKiller();                                                                              // [0x4ec2710] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDAnimation.BaseKillerAnimInstance.DBD_ForceAnimPOV
	// void DBD_ForceAnimPOV(int32_t animPOV);                                                                               // [0x4e00fc0] Final|Exec|Native|Private 
};

/// Class /Script/DBDAnimation.BasePlayerAttackSubAnimInstance
/// Size: 0x00D0 (0x000540 - 0x000610)
class UBasePlayerAttackSubAnimInstance : public UPlayerAnimInstance
{ 
public:
	EAttackSubstate                                    _attackState;                                               // 0x0540   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0541   (0x0003)  MISSED
	float                                              _direction;                                                 // 0x0544   (0x0004)  
	float                                              _strafeAngle;                                               // 0x0548   (0x0004)  
	bool                                               _isStrafe;                                                  // 0x054C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x054D   (0x0003)  MISSED
	float                                              _attackInPlayRate;                                          // 0x0550   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0554   (0x0004)  MISSED
	FAnimSequenceSelector                              _attackIn;                                                  // 0x0558   (0x0018)  
	float                                              _attackSwingPlayRate;                                       // 0x0570   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0574   (0x0004)  MISSED
	FAnimSequenceSelector                              _attackSwing;                                               // 0x0578   (0x0018)  
	float                                              _attackMissPlayRate;                                        // 0x0590   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x0594   (0x0004)  MISSED
	FAnimSequenceSelector                              _attackMiss;                                                // 0x0598   (0x0018)  
	float                                              _attackHitPlayRate;                                         // 0x05B0   (0x0004)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x05B4   (0x0004)  MISSED
	FAnimSequenceSelector                              _attackHit;                                                 // 0x05B8   (0x0018)  
	float                                              _attackBounceOfWallPlayRate;                                // 0x05D0   (0x0004)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x05D4   (0x0004)  MISSED
	FAnimSequenceSelector                              _attackBounceOfWall;                                        // 0x05D8   (0x0018)  
	unsigned char                                      UnknownData07_5[0x18];                                      // 0x05F0   (0x0018)  MISSED
	bool                                               _firstPersonView;                                           // 0x0608   (0x0001)  
	unsigned char                                      UnknownData08_6[0x7];                                       // 0x0609   (0x0007)  MISSED
};

/// Class /Script/DBDAnimation.BaseKillerAttackSubAnimInstance
/// Size: 0x0010 (0x000610 - 0x000620)
class UBaseKillerAttackSubAnimInstance : public UBasePlayerAttackSubAnimInstance
{ 
public:
	class ASlasherPlayer*                              _owningKiller;                                              // 0x0610   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0618   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDAnimation.BaseKillerAttackSubAnimInstance.GetOwningKiller
	// class ASlasherPlayer* GetOwningKiller();                                                                              // [0x4ec2710] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDAnimation.BaseKillerWeaponAnimInstance
/// Size: 0x00C0 (0x0002C0 - 0x000380)
class UBaseKillerWeaponAnimInstance : public UAnimInstance
{ 
public:
	EAttackSubstate                                    _attackState;                                               // 0x02C0   (0x0001)  
	bool                                               _isCarrying;                                                // 0x02C1   (0x0001)  
	bool                                               _isActive;                                                  // 0x02C2   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x02C3   (0x0001)  MISSED
	float                                              _attackInPlayRate;                                          // 0x02C4   (0x0004)  
	FAnimSequenceSelector                              _attackIn;                                                  // 0x02C8   (0x0018)  
	float                                              _attackSwingPlayRate;                                       // 0x02E0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02E4   (0x0004)  MISSED
	FAnimSequenceSelector                              _attackSwing;                                               // 0x02E8   (0x0018)  
	float                                              _attackMissPlayRate;                                        // 0x0300   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0304   (0x0004)  MISSED
	FAnimSequenceSelector                              _attackMiss;                                                // 0x0308   (0x0018)  
	float                                              _attackHitPlayRate;                                         // 0x0320   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0324   (0x0004)  MISSED
	FAnimSequenceSelector                              _attackHit;                                                 // 0x0328   (0x0018)  
	float                                              _attackBounceOfWallPlayRate;                                // 0x0340   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x0344   (0x0004)  MISSED
	FAnimSequenceSelector                              _attackBounceOfWall;                                        // 0x0348   (0x0018)  
	unsigned char                                      UnknownData05_5[0x14];                                      // 0x0360   (0x0014)  MISSED
	bool                                               _firstPersonView;                                           // 0x0374   (0x0001)  
	unsigned char                                      UnknownData06_6[0xB];                                       // 0x0375   (0x000B)  MISSED
};

/// Class /Script/DBDAnimation.BaseMenuAnimInstance
/// Size: 0x0010 (0x0002F0 - 0x000300)
class UBaseMenuAnimInstance : public UDBDBaseAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x02F0   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDAnimation.BaseMenuAnimInstance.OnCustomizationChanged
	// void OnCustomizationChanged(TArray<FName>& customizationArray);                                                       // [0x61c32d0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/DBDAnimation.BaseMenuAnimInstance.GetOwningMenuPlayer
	// class ADBDMenuPlayer* GetOwningMenuPlayer();                                                                          // [0x4ec2740] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDAnimation.BaseMenuAnimInstance.GetCurrentMenu
	// EGameFlowStep GetCurrentMenu();                                                                                       // [0x4ec26e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDAnimation.BasePowerSubAnimInstance
/// Size: 0x0000 (0x000560 - 0x000560)
class UBasePowerSubAnimInstance : public UBaseKillerAnimInstance
{ 
public:
};

/// Class /Script/DBDAnimation.BipedIKSubAnimInstance
/// Size: 0x0280 (0x0002F0 - 0x000570)
class UBipedIKSubAnimInstance : public UDBDBaseAnimInstance
{ 
public:
	bool                                               _enableIK;                                                  // 0x02F0   (0x0001)  
	bool                                               _isIdle;                                                    // 0x02F1   (0x0001)  
	SDK_UNDEFINED(1,3103) /* TEnumAsByte<ETraceTypeQuery> */ __um(_traceTypeQuery);                                // 0x02F2   (0x0001)  
	bool                                               _traceComplex;                                              // 0x02F3   (0x0001)  
	bool                                               _ignoreTouches;                                             // 0x02F4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02F5   (0x0003)  MISSED
	FName                                              _noGroundTag;                                               // 0x02F8   (0x000C)  
	float                                              _footIkSpeed;                                               // 0x0304   (0x0004)  
	float                                              _pelvisIkSpeed;                                             // 0x0308   (0x0004)  
	float                                              _maxExtensionLeftFoot;                                      // 0x030C   (0x0004)  
	float                                              _maxExtensionRightFoot;                                     // 0x0310   (0x0004)  
	float                                              _footIkSpeedMovingHF2;                                      // 0x0314   (0x0004)  
	float                                              _footIkSpeedIdleHF2;                                        // 0x0318   (0x0004)  
	float                                              _ikBlendSpeedHF2;                                           // 0x031C   (0x0004)  
	float                                              _footIkRotationSpeed;                                       // 0x0320   (0x0004)  
	float                                              _pelvisIkSpeedHF2;                                          // 0x0324   (0x0004)  
	float                                              _maxIKTargetDistance;                                       // 0x0328   (0x0004)  
	float                                              _pelvisPositionOffsetMin;                                   // 0x032C   (0x0004)  
	float                                              _pelvisPositionOffsetMax;                                   // 0x0330   (0x0004)  
	float                                              _pelvisPositionOffsetMinHF2;                                // 0x0334   (0x0004)  
	float                                              _pelvisPositionOffsetMaxHF2;                                // 0x0338   (0x0004)  
	float                                              _pelvisPositionOffsetMinIdleHF2;                            // 0x033C   (0x0004)  
	float                                              _pelvisPositionOffsetMaxIdleHF2;                            // 0x0340   (0x0004)  
	float                                              _frontFeetLineTraceStartOffset;                             // 0x0344   (0x0004)  
	float                                              _frontFeetLineTraceEndOffset;                               // 0x0348   (0x0004)  
	float                                              _backFeetLineTraceStartOffset;                              // 0x034C   (0x0004)  
	float                                              _backFeetLineTraceEndOffset;                                // 0x0350   (0x0004)  
	float                                              _minDistanceFromCapsuleIdle;                                // 0x0354   (0x0004)  
	float                                              _maxDistanceFromCapsuleIdle;                                // 0x0358   (0x0004)  
	float                                              _minDistanceFromCapsuleMoving;                              // 0x035C   (0x0004)  
	float                                              _maxDistanceFromCapsuleMoving;                              // 0x0360   (0x0004)  
	FName                                              _pelvisSocketName;                                          // 0x0364   (0x000C)  
	FName                                              _leftBackFootSocketName;                                    // 0x0370   (0x000C)  
	FName                                              _rightBackFootSocketName;                                   // 0x037C   (0x000C)  
	FName                                              _leftBackFootBoneName;                                      // 0x0388   (0x000C)  
	FName                                              _rightBackFootBoneName;                                     // 0x0394   (0x000C)  
	FName                                              _leftBackFootRootBoneName;                                  // 0x03A0   (0x000C)  
	FName                                              _rightBackFootRootBoneName;                                 // 0x03AC   (0x000C)  
	FVector                                            _pelvisPositionOffset;                                      // 0x03B8   (0x000C)  
	FVector                                            _leftBackFootLocation;                                      // 0x03C4   (0x000C)  
	FVector                                            _rightBackFootLocation;                                     // 0x03D0   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x03DC   (0x0004)  MISSED
	FTransform                                         _leftBackFootTransform;                                     // 0x03E0   (0x0030)  
	FTransform                                         _rightBackFootTransform;                                    // 0x0410   (0x0030)  
	FRotator                                           _leftBackFootRotation;                                      // 0x0440   (0x000C)  
	FRotator                                           _rightBackFootRotation;                                     // 0x044C   (0x000C)  
	class USkeletalMeshComponent*                      _skeletalMeshComponent;                                     // 0x0458   (0x0008)  
	class UWorld*                                      _world;                                                     // 0x0460   (0x0008)  
	unsigned char                                      UnknownData02_6[0x108];                                     // 0x0468   (0x0108)  MISSED
};

/// Class /Script/DBDAnimation.BreathingSurvivorSubAnimInstance
/// Size: 0x0010 (0x000550 - 0x000560)
class UBreathingSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:
	bool                                               _isDead;                                                    // 0x0548   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0549   (0x0007)  MISSED
	class UAnimSequence*                               _breathing;                                                 // 0x0550   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0558   (0x0008)  MISSED
};

/// Class /Script/DBDAnimation.ChestAnimInstance
/// Size: 0x0020 (0x0002C0 - 0x0002E0)
class UChestAnimInstance : public UAnimInstance
{ 
public:
	class ASearchable*                                 _owningChest;                                               // 0x02C0   (0x0008)  
	bool                                               _isOpen;                                                    // 0x02C8   (0x0001)  
	bool                                               _isBeingPriedOpen;                                          // 0x02C9   (0x0001)  
	unsigned char                                      UnknownData00_5[0xE];                                       // 0x02CA   (0x000E)  MISSED
	class UInteractionDefinition*                      _openChestInteraction;                                      // 0x02D8   (0x0008)  


	/// Functions
	// Function /Script/DBDAnimation.ChestAnimInstance.OnSearchedChanged
	// void OnSearchedChanged(bool searched);                                                                                // [0x4ec2a80] Final|Native|Private 
	// Function /Script/DBDAnimation.ChestAnimInstance.OnBeingPriedOpenStopped
	// void OnBeingPriedOpenStopped();                                                                                       // [0x4ec2990] Final|Native|Private 
	// Function /Script/DBDAnimation.ChestAnimInstance.OnBeingPriedOpenStarted
	// void OnBeingPriedOpenStarted(class ADBDPlayer* Player);                                                               // [0x4ec2900] Final|Native|Private 
};

/// Class /Script/DBDAnimation.CrowAnimInstance
/// Size: 0x0010 (0x0002C0 - 0x0002D0)
class UCrowAnimInstance : public UAnimInstance
{ 
public:
	bool                                               _shouldTakeOff;                                             // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02C1   (0x0007)  MISSED
	class UWorldRunawayMeshComponent*                  _crow;                                                      // 0x02C8   (0x0008)  
};

/// Class /Script/DBDAnimation.CustomizationAnimationSelector
/// Size: 0x0068 (0x000030 - 0x000098)
class UCustomizationAnimationSelector : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0030   (0x0018)  MISSED
	class UDataTable*                                  _customizationAnimationMappings;                            // 0x0048   (0x0008)  
	unsigned char                                      UnknownData01_5[0x38];                                      // 0x0050   (0x0038)  MISSED
	class UCustomizedSkeletalMesh*                     _customizedSkeletalMesh;                                    // 0x0088   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0090   (0x0008)  MISSED
};

/// Class /Script/DBDAnimation.DynamicAccessoryAnimInstance
/// Size: 0x0010 (0x0002C0 - 0x0002D0)
class UDynamicAccessoryAnimInstance : public UAnimInstance
{ 
public:
	bool                                               _isInMenu;                                                  // 0x02C0   (0x0001)  
	bool                                               _isInGame;                                                  // 0x02C1   (0x0001)  
	bool                                               _isPoseableHusk;                                            // 0x02C2   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x02C3   (0x0001)  MISSED
	SDK_UNDEFINED(8,3104) /* TWeakObjectPtr<USkeletalMeshComponent*> */ __um(_masterMesh);                         // 0x02C4   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x02CC   (0x0004)  MISSED
};

/// Class /Script/DBDAnimation.EntityAnimInstance
/// Size: 0x0010 (0x0002C0 - 0x0002D0)
class UEntityAnimInstance : public UAnimInstance
{ 
public:
	bool                                               _isStruggling;                                              // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02C1   (0x0003)  MISSED
	float                                              _strugglePercent;                                           // 0x02C4   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x02C8   (0x0008)  MISSED
};

/// Class /Script/DBDAnimation.FaceCorrectionSurvivorSubAnimInstance
/// Size: 0x0000 (0x000550 - 0x000550)
class UFaceCorrectionSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:
};

/// Class /Script/DBDAnimation.GeneratorAnimInstance
/// Size: 0x0010 (0x0002D0 - 0x0002E0)
class UGeneratorAnimInstance : public USleepingAnimInstance
{ 
public:
	class AGenerator*                                  _owningGenerator;                                           // 0x02D0   (0x0008)  
	bool                                               _rushFailed;                                                // 0x02D8   (0x0001)  
	bool                                               _isActivated;                                               // 0x02D9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x02DA   (0x0002)  MISSED
	float                                              _percentComplete;                                           // 0x02DC   (0x0004)  


	/// Functions
	// Function /Script/DBDAnimation.GeneratorAnimInstance.SetSkillCheckSuccess
	// void SetSkillCheckSuccess(bool success);                                                                              // [0x4ec2b30] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDAnimation.HatchAnimInstance
/// Size: 0x0010 (0x0002D0 - 0x0002E0)
class UHatchAnimInstance : public USleepingAnimInstance
{ 
public:
	bool                                               _isOpen;                                                    // 0x02D0   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x02D1   (0x000F)  MISSED
};

/// Class /Script/DBDAnimation.HealSurvivorSubAnimInstance
/// Size: 0x0050 (0x000550 - 0x0005A0)
class UHealSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0550   (0x0038)  MISSED
	bool                                               _isHealingACrawlingTarget;                                  // 0x0588   (0x0001)  
	bool                                               _isHealingOtherNoMedkit;                                    // 0x0589   (0x0001)  
	bool                                               _isHealingOtherMedkit;                                      // 0x058A   (0x0001)  
	bool                                               _isHealingSelfNoMedkit;                                     // 0x058B   (0x0001)  
	bool                                               _isHealingSelfMedkit;                                       // 0x058C   (0x0001)  
	bool                                               _isWakingUpOther;                                           // 0x058D   (0x0001)  
	bool                                               _isBeingHealed;                                             // 0x058E   (0x0001)  
	bool                                               _isBeingMended;                                             // 0x058F   (0x0001)  
	bool                                               _isMendingOther;                                            // 0x0590   (0x0001)  
	bool                                               _hasSkillCheckFailed;                                       // 0x0591   (0x0001)  
	bool                                               _isCrawling;                                                // 0x0592   (0x0001)  
	bool                                               _hasHealerSkillCheckFailed;                                 // 0x0593   (0x0001)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0594   (0x000C)  MISSED


	/// Functions
	// Function /Script/DBDAnimation.HealSurvivorSubAnimInstance.ResetHealerSkillCheckFailed
	// void ResetHealerSkillCheckFailed();                                                                                   // [0x4ec2b10] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DBDAnimation.HealSurvivorSubAnimInstance.OnHealerSkillCheckResponseAesthetic
	// void OnHealerSkillCheckResponseAesthetic(bool success, class ADBDPlayer* healer);                                     // [0x4ec29b0] Final|Native|Protected 
};

/// Class /Script/DBDAnimation.InteractionSurvivorSubAnimInstance
/// Size: 0x0040 (0x000550 - 0x000590)
class UInteractionSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:
	bool                                               _isAgainstSmallKiller;                                      // 0x0548   (0x0001)  
	bool                                               _isInsideCloset;                                            // 0x0549   (0x0001)  
	bool                                               _isBeingCarried;                                            // 0x054A   (0x0001)  
	bool                                               _isHooked;                                                  // 0x054B   (0x0001)  
	bool                                               _isSacrificeStruggling;                                     // 0x054C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x054D   (0x0003)  MISSED
	float                                              _sacrificeStrugglePercent;                                  // 0x0550   (0x0004)  
	bool                                               _selfUnhookFailed;                                          // 0x0554   (0x0001)  
	EInteractionAnimation                              _interactionAnimation;                                      // 0x0555   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0556   (0x0002)  MISSED
	FVector                                            _snapPosition;                                              // 0x0558   (0x000C)  
	bool                                               _isInteractingWithSwitch;                                   // 0x0564   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2B];                                      // 0x0565   (0x002B)  MISSED
};

/// Class /Script/DBDAnimation.KillerAnimInstance
/// Size: 0x00B0 (0x000560 - 0x000610)
class UKillerAnimInstance : public UBaseKillerAnimInstance
{ 
public:
	FVector                                            _leftHandIKLocationFPV;                                     // 0x0558   (0x000C)  
	FVector                                            _rightHandIKLocationFPV;                                    // 0x0564   (0x000C)  
	bool                                               _isAnyMontagePlaying;                                       // 0x0570   (0x0001)  
	bool                                               _isCarrying;                                                // 0x0571   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0572   (0x0002)  MISSED
	FVector                                            _firstPersonCarryOffset;                                    // 0x0574   (0x000C)  
	FVector                                            _firstPersonCarryOffsetLookingDown;                         // 0x0580   (0x000C)  
	bool                                               _isInAir;                                                   // 0x058C   (0x0001)  
	bool                                               _isSpectator;                                               // 0x058D   (0x0001)  
	bool                                               _isIdle;                                                    // 0x058E   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x058F   (0x0001)  MISSED
	float                                              _animDirection;                                             // 0x0590   (0x0004)  
	float                                              _animSpeed;                                                 // 0x0594   (0x0004)  
	float                                              _animPitch;                                                 // 0x0598   (0x0004)  
	float                                              _animYaw;                                                   // 0x059C   (0x0004)  
	float                                              _pelvisHeight;                                              // 0x05A0   (0x0004)  
	float                                              _idleTime;                                                  // 0x05A4   (0x0004)  
	int32_t                                            _directionSwitch;                                           // 0x05A8   (0x0004)  
	bool                                               _isAttacking;                                               // 0x05AC   (0x0001)  
	bool                                               _isPlayingAnyMontage;                                       // 0x05AD   (0x0001)  
	bool                                               _isKilling;                                                 // 0x05AE   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x05AF   (0x0001)  MISSED
	float                                              _minAnimPitchAngle;                                         // 0x05B0   (0x0004)  
	float                                              _maxAnimPitchAngle;                                         // 0x05B4   (0x0004)  
	FVector                                            _leftClearFrontSpaceVector;                                 // 0x05B8   (0x000C)  
	FVector                                            _rightClearFrontSpaceVector;                                // 0x05C4   (0x000C)  
	FVector                                            _velocity;                                                  // 0x05D0   (0x000C)  
	FVector                                            _rightFootEffectorLocation;                                 // 0x05DC   (0x000C)  
	FVector                                            _leftFootEffectorLocation;                                  // 0x05E8   (0x000C)  
	EInteractionAnimation                              _interactionType;                                           // 0x05F4   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x05F5   (0x0003)  MISSED
	class UArmIKSensorComponent*                       _armIKSensorComponent;                                      // 0x05F8   (0x0008)  
	EAttackSubstate                                    _attackState;                                               // 0x0600   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0601   (0x0003)  MISSED
	float                                              _forwardVelocity;                                           // 0x0604   (0x0004)  
	float                                              _lateralVelocity;                                           // 0x0608   (0x0004)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x060C   (0x0004)  MISSED


	/// Functions
	// Function /Script/DBDAnimation.KillerAnimInstance.GetWeaponCustomizationId
	// FName GetWeaponCustomizationId();                                                                                     // [0x4ec4e90] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDAnimation.KillerAttackSubAnimInstance
/// Size: 0x0000 (0x000620 - 0x000620)
class UKillerAttackSubAnimInstance : public UBaseKillerAttackSubAnimInstance
{ 
public:
};

/// Class /Script/DBDAnimation.KillerLocomotionSubAnimInstance
/// Size: 0x00B0 (0x000560 - 0x000610)
class UKillerLocomotionSubAnimInstance : public UBaseKillerAnimInstance
{ 
public:
	class UAnimSequence*                               _landLightTPV;                                              // 0x0558   (0x0008)  
	class UAnimSequence*                               _landLightFPV;                                              // 0x0560   (0x0008)  
	class UBlendSpace1D*                               _BSLandTPV;                                                 // 0x0568   (0x0008)  
	class UBlendSpace1D*                               _BSLandFPV;                                                 // 0x0570   (0x0008)  
	class UAnimSequence*                               _walkToFallTPV;                                             // 0x0578   (0x0008)  
	class UAnimSequence*                               _walkToFallFPV;                                             // 0x0580   (0x0008)  
	class UAnimSequence*                               _carryIdleTPV;                                              // 0x0588   (0x0008)  
	class UAnimSequence*                               _carryIdleFPV;                                              // 0x0590   (0x0008)  
	class UAnimSequence*                               _fallingTPV;                                                // 0x0598   (0x0008)  
	class UAnimSequence*                               _fallingFPV;                                                // 0x05A0   (0x0008)  
	class UAnimSequence*                               _landLight;                                                 // 0x05A8   (0x0008)  
	class UBlendSpace1D*                               _BSLand;                                                    // 0x05B0   (0x0008)  
	class UAnimSequence*                               _walkToFall;                                                // 0x05B8   (0x0008)  
	class UAnimSequence*                               _carryIdle;                                                 // 0x05C0   (0x0008)  
	class UAnimSequence*                               _falling;                                                   // 0x05C8   (0x0008)  
	bool                                               _isVaultingToFall;                                          // 0x05D0   (0x0001)  
	EIntroState                                        _introState;                                                // 0x05D1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x05D2   (0x0006)  MISSED
	FTagStateBool                                      _isVaultingToFallState;                                     // 0x05D8   (0x0030)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0608   (0x0008)  MISSED
};

/// Class /Script/DBDAnimation.KillerSpecificSurvivorAnimationPicker
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UKillerSpecificSurvivorAnimationPicker : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	class UClass*                                      _killerSpecificAnimInstanceClass;                           // 0x00C0   (0x0008)  
	class UDataTable*                                  _killerSpecificSurvivorAnimationDB;                         // 0x00C8   (0x0008)  
};

/// Class /Script/DBDAnimation.LegIKSurvivorSubAnimInstance
/// Size: 0x0100 (0x000550 - 0x000650)
class ULegIKSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:
	FVector                                            _leftFootOffset;                                            // 0x0548   (0x000C)  
	FVector                                            _rightFootOffset;                                           // 0x0554   (0x000C)  
	FVector                                            _pelvisOffset;                                              // 0x0560   (0x000C)  
	bool                                               _isIdle;                                                    // 0x056C   (0x0001)  
	bool                                               _isCrouched;                                                // 0x056D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x056E   (0x0002)  MISSED
	FRotator                                           _rightFootDeltaRotator;                                     // 0x0570   (0x000C)  
	FRotator                                           _leftFootDeltaRotator;                                      // 0x057C   (0x000C)  
	class UAnimCollection*                             AnimCollection;                                             // 0x0588   (0x0008)  
	FName                                              _floorJoint;                                                // 0x0590   (0x000C)  
	float                                              _pelvisOffsetTreshold;                                      // 0x059C   (0x0004)  
	FFloatRange                                        _pelvisOffsetRange;                                         // 0x05A0   (0x0010)  
	FFloatRange                                        _pelvisOffsetRangeCrouched;                                 // 0x05B0   (0x0010)  
	float                                              _pelvisOffsetInterpolationSpeed;                            // 0x05C0   (0x0004)  
	FFloatRange                                        _footOffsetRange;                                           // 0x05C4   (0x0010)  
	FFloatRange                                        _footOffsetRangeCrouched;                                   // 0x05D4   (0x0010)  
	float                                              _footOffsetInterpolationSpeed;                              // 0x05E4   (0x0004)  
	FFloatRange                                        _footPitchDeltaRange;                                       // 0x05E8   (0x0010)  
	class UBaseGroundDetectorComponent*                _leftFootGroundDetector;                                    // 0x05F8   (0x0008)  
	class UBaseGroundDetectorComponent*                _rightFootGroundDetector;                                   // 0x0600   (0x0008)  
	float                                              maxLocalHeightForPlanting;                                  // 0x0608   (0x0004)  
	unsigned char                                      UnknownData01_5[0x3C];                                      // 0x060C   (0x003C)  MISSED
	class ULocomotionPredictor*                        _locomotionPredictor;                                       // 0x0648   (0x0008)  
};

/// Class /Script/DBDAnimation.LocomotionLookAtSurvivorSubAnimInstance
/// Size: 0x0070 (0x000550 - 0x0005C0)
class ULocomotionLookAtSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:
	bool                                               _isHealthy;                                                 // 0x0548   (0x0001)  
	bool                                               _isUsingAimItem;                                            // 0x0549   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x054A   (0x0002)  MISSED
	float                                              _aimOffsetPitch;                                            // 0x054C   (0x0004)  
	float                                              _aimOffsetYaw;                                              // 0x0550   (0x0004)  
	float                                              _aimOffsetYawInterpolated;                                  // 0x0554   (0x0004)  
	bool                                               _allowLookAt;                                               // 0x0558   (0x0001)  
	bool                                               _isDrasticAimOffsetYawChangeDetected;                       // 0x0559   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x055A   (0x0002)  MISSED
	float                                              _aimOffsetYawInterpolationSpeed;                            // 0x055C   (0x0004)  
	float                                              _aimOffsetYawDeadzoneStart;                                 // 0x0560   (0x0004)  
	float                                              _aimOffsetYawClampValue;                                    // 0x0564   (0x0004)  
	float                                              _aimOffsetYawDrasticChangeUpperLimit;                       // 0x0568   (0x0004)  
	float                                              _aimOffsetYawDrasticChangeLowerLimit;                       // 0x056C   (0x0004)  
	float                                              _aimOffsetYawDrasticChangeInterpolationSpeed;               // 0x0570   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0574   (0x0004)  MISSED
	class UCurveFloat*                                 _aimOffsetYawInterpolateEaseIn;                             // 0x0578   (0x0008)  
	class UCurveFloat*                                 _aimOffsetYawInterpolateEaseOut;                            // 0x0580   (0x0008)  
	float                                              _aimOffsetYawInterpolationEaseInLength;                     // 0x0588   (0x0004)  
	float                                              _aimOffsetYawInterpolationEaseOutDistance;                  // 0x058C   (0x0004)  
	bool                                               _isAimOffsetYawInDeadZone;                                  // 0x0590   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0591   (0x0003)  MISSED
	float                                              _alphaAimOffsetPitchDown;                                   // 0x0594   (0x0004)  
	float                                              _alphaAimOffsetPitchCenter;                                 // 0x0598   (0x0004)  
	float                                              _alphaAimOffsetPitchUp;                                     // 0x059C   (0x0004)  
	bool                                               _isUsingHeavyCarry;                                         // 0x05A0   (0x0001)  
	bool                                               _isUsingLightCarry;                                         // 0x05A1   (0x0001)  
	unsigned char                                      UnknownData04_6[0x1E];                                      // 0x05A2   (0x001E)  MISSED
};

/// Class /Script/DBDAnimation.LocomotionPredictor
/// Size: 0x0050 (0x000030 - 0x000080)
class ULocomotionPredictor : public UObject
{ 
public:
	SDK_UNDEFINED(80,3105) /* TMap<UAnimSequence*, FFootBoneData> */ __um(_animFootData);                          // 0x0030   (0x0050)  
};

/// Class /Script/DBDAnimation.LocomotionSurvivorSubAnimInstance
/// Size: 0x00C0 (0x000550 - 0x000610)
class ULocomotionSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:
	bool                                               _isPlayerInPerkInteraction;                                 // 0x0548   (0x0001)  
	bool                                               _isRecoveringWhileCrawling;                                 // 0x0549   (0x0001)  
	bool                                               _isTenacityPerkActive;                                      // 0x054A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x054B   (0x0001)  MISSED
	float                                              _wasMovingResetTime;                                        // 0x054C   (0x0004)  
	bool                                               _isIdle;                                                    // 0x0550   (0x0001)  
	bool                                               _shouldPlayLowerCarryAnimation;                             // 0x0551   (0x0001)  
	bool                                               _isRunning;                                                 // 0x0552   (0x0001)  
	bool                                               _isCrouching;                                               // 0x0553   (0x0001)  
	bool                                               _isCrawling;                                                // 0x0554   (0x0001)  
	bool                                               _isDead;                                                    // 0x0555   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0556   (0x0002)  MISSED
	float                                              _walkAnimSpeed;                                             // 0x0558   (0x0004)  
	float                                              _walkAnimStartOffset;                                       // 0x055C   (0x0004)  
	float                                              _walkAnimPlayRateMultiplier;                                // 0x0560   (0x0004)  
	bool                                               _wasLastDamageSourceDeepWounds;                             // 0x0564   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x0565   (0x0001)  MISSED
	bool                                               _isStrafing;                                                // 0x0566   (0x0001)  
	bool                                               _isUsingDeadHard;                                           // 0x0567   (0x0001)  
	float                                              _direction;                                                 // 0x0568   (0x0004)  
	bool                                               _isUsingAimItem;                                            // 0x056C   (0x0001)  
	bool                                               _isBeingCarried;                                            // 0x056D   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x056E   (0x0002)  MISSED
	float                                              _crawlingDirectionWhileMoving;                              // 0x0570   (0x0004)  
	bool                                               _crawlMovingJustStopped;                                    // 0x0574   (0x0001)  
	bool                                               _isImmobilized;                                             // 0x0575   (0x0001)  
	unsigned char                                      UnknownData04_5[0x2];                                       // 0x0576   (0x0002)  MISSED
	float                                              _aimOffsetYawInterpolated;                                  // 0x0578   (0x0004)  
	bool                                               _allowLookAt;                                               // 0x057C   (0x0001)  
	bool                                               _isDrasticAimOffsetYawChangeDetected;                       // 0x057D   (0x0001)  
	unsigned char                                      UnknownData05_5[0x2];                                       // 0x057E   (0x0002)  MISSED
	float                                              _lookAtAlphaBlendMultiDown;                                 // 0x0580   (0x0004)  
	float                                              _lookAtAlphaBlendMultiCenter;                               // 0x0584   (0x0004)  
	float                                              _lookAtAlphaBlendMultiUp;                                   // 0x0588   (0x0004)  
	float                                              _lookAtStandIdleAnimationLength;                            // 0x058C   (0x0004)  
	float                                              _aimOffsetYawClampValue;                                    // 0x0590   (0x0004)  
	float                                              _maxParadiseWalkCycleOffSet;                                // 0x0594   (0x0004)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x0598   (0x0004)  MISSED
	float                                              _minParadiseWalkPlayRateMultiplier;                         // 0x059C   (0x0004)  
	unsigned char                                      UnknownData07_5[0x8];                                       // 0x05A0   (0x0008)  MISSED
	TArray<FGameplayTag>                               _lowerCarryAnimationPresenceTags;                           // 0x05A8   (0x0010)  
	unsigned char                                      UnknownData08_6[0x58];                                      // 0x05B8   (0x0058)  MISSED
};

/// Class /Script/DBDAnimation.LookAtKillerSubAnimInstance
/// Size: 0x0060 (0x0002C0 - 0x000320)
class ULookAtKillerSubAnimInstance : public UAnimInstance
{ 
public:
	class ADBDPlayer*                                  _owningPawn;                                                // 0x02C0   (0x0008)  
	class ASlasherPlayer*                              _owningKiller;                                              // 0x02C8   (0x0008)  
	bool                                               _enableDynamics;                                            // 0x02D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02D1   (0x0003)  MISSED
	float                                              _dynamicsAlpha;                                             // 0x02D4   (0x0004)  
	bool                                               _shouldApplyDynamics;                                       // 0x02D8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02D9   (0x0003)  MISSED
	float                                              _blendTime;                                                 // 0x02DC   (0x0004)  
	float                                              _animYaw;                                                   // 0x02E0   (0x0004)  
	bool                                               _enableTurnInPlace;                                         // 0x02E4   (0x0001)  
	bool                                               _shouldResetLookAtOnAnyMontagePlay;                         // 0x02E5   (0x0001)  
	bool                                               _shouldTurnLeft;                                            // 0x02E6   (0x0001)  
	bool                                               _shouldTurnRight;                                           // 0x02E7   (0x0001)  
	float                                              _turnInPlaceThresholdAngle;                                 // 0x02E8   (0x0004)  
	float                                              _idleNeutralRotationYaw;                                    // 0x02EC   (0x0004)  
	bool                                               _isIdle;                                                    // 0x02F0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x17];                                      // 0x02F1   (0x0017)  MISSED
	class USkeletalMeshComponent*                      _skeletalMeshComponent;                                     // 0x0308   (0x0008)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0310   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDAnimation.LookAtKillerSubAnimInstance.IsLookAtAllowed
	// bool IsLookAtAllowed();                                                                                               // [0x4ec4ed0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DBDAnimation.LookAtKillerSubAnimInstance.GetBlendDuration
	// float GetBlendDuration();                                                                                             // [0x4ec4e20] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/DBDAnimation.LookAtTargetKillerSubAnimInstance
/// Size: 0x01B0 (0x000560 - 0x000710)
class ULookAtTargetKillerSubAnimInstance : public UBaseKillerAnimInstance
{ 
public:
	float                                              _maxDistanceForTargetDetection;                             // 0x0558   (0x0004)  
	FName                                              _headSocket;                                                // 0x055C   (0x000C)  
	FName                                              _rootSocket;                                                // 0x0568   (0x000C)  
	float                                              _preferredMinLookAtTime;                                    // 0x0574   (0x0004)  
	float                                              _distanceScoreFactor;                                       // 0x0578   (0x0004)  
	float                                              _angleScoreFactor;                                          // 0x057C   (0x0004)  
	float                                              _sameTargetScoreFactor;                                     // 0x0580   (0x0004)  
	float                                              _yawToTarget;                                               // 0x0584   (0x0004)  
	float                                              _pitchToTarget;                                             // 0x0588   (0x0004)  
	bool                                               _hasVisibleTarget;                                          // 0x058C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x183];                                     // 0x058D   (0x0183)  MISSED


	/// Functions
	// Function /Script/DBDAnimation.LookAtTargetKillerSubAnimInstance.OnChaseStarted
	// void OnChaseStarted(class ADBDPlayer* Target);                                                                        // [0x4ec5130] Final|Native|Private 
	// Function /Script/DBDAnimation.LookAtTargetKillerSubAnimInstance.OnChaseEnded
	// void OnChaseEnded(class ADBDPlayer* Target, float chaseTime);                                                         // [0x4ec5060] Final|Native|Private 
};

/// Class /Script/DBDAnimation.LookAtThreatSurvivorSubAnimInstance
/// Size: 0x0160 (0x000550 - 0x0006B0)
class ULookAtThreatSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:
	float                                              _maxDistanceForThreatDetection;                             // 0x0548   (0x0004)  
	FName                                              _headSocket;                                                // 0x054C   (0x000C)  
	FName                                              _rootSocket;                                                // 0x0558   (0x000C)  
	float                                              _yawToThreat;                                               // 0x0564   (0x0004)  
	float                                              _pitchToThreat;                                             // 0x0568   (0x0004)  
	bool                                               _isVisibleThreat;                                           // 0x056C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x143];                                     // 0x056D   (0x0143)  MISSED
};

/// Class /Script/DBDAnimation.MeshRotationCorrectionSubAnimInstance
/// Size: 0x0020 (0x000550 - 0x000570)
class UMeshRotationCorrectionSubAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:
	float                                              _rotationInterpSpeed;                                       // 0x0548   (0x0004)  
	bool                                               _isCrawling;                                                // 0x054C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x054D   (0x0003)  MISSED
	FRotator                                           _toSlopeRotation;                                           // 0x0550   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x055C   (0x0004)  MISSED
	class UCharacterMovementComponent*                 _movementComponent;                                         // 0x0560   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0568   (0x0008)  MISSED
};

/// Class /Script/DBDAnimation.OpenChestSurvivorSubAnimInstance
/// Size: 0x0020 (0x000550 - 0x000570)
class UOpenChestSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:
	bool                                               _isInteractingWithChest;                                    // 0x0548   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0549   (0x0003)  MISSED
	FGameplayTag                                       _interactionPhase;                                          // 0x054C   (0x000C)  
	bool                                               _isInteractingWithOpenChest;                                // 0x0558   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0559   (0x0003)  MISSED
	FVector                                            _snapPosition;                                              // 0x055C   (0x000C)  
	bool                                               _isVomiting;                                                // 0x0568   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0569   (0x0007)  MISSED
};

/// Class /Script/DBDAnimation.PalletAnimInstance
/// Size: 0x0020 (0x0002D0 - 0x0002F0)
class UPalletAnimInstance : public USleepingAnimInstance
{ 
public:
	bool                                               _isPulledDown;                                              // 0x02D0   (0x0001)  
	bool                                               _isBeingPulledUp;                                           // 0x02D1   (0x0001)  
	bool                                               _isBeingDestroyed;                                          // 0x02D2   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x02D3   (0x0001)  MISSED
	float                                              _isBeingDestroyedPlayRate;                                  // 0x02D4   (0x0004)  
	FAnimSequenceSelector                              _destroyPalletAnim;                                         // 0x02D8   (0x0018)  


	/// Functions
	// Function /Script/DBDAnimation.PalletAnimInstance.OnBeingPulledUpStopped
	// void OnBeingPulledUpStopped();                                                                                        // [0x4ec5040] Final|Native|Private 
	// Function /Script/DBDAnimation.PalletAnimInstance.OnBeingPulledUpStarted
	// void OnBeingPulledUpStarted(class ADBDPlayer* Player);                                                                // [0x4ec4fb0] Final|Native|Private 
	// Function /Script/DBDAnimation.PalletAnimInstance.OnBeingDestroyedStopped
	// void OnBeingDestroyedStopped();                                                                                       // [0x4ec4f90] Final|Native|Private 
	// Function /Script/DBDAnimation.PalletAnimInstance.OnBeingDestroyedStarted
	// void OnBeingDestroyedStarted(class ADBDPlayer* Player);                                                               // [0x4ec4f00] Final|Native|Private 
};

/// Class /Script/DBDAnimation.QuadrupedIKSubAnimInstance
/// Size: 0x0440 (0x0002F0 - 0x000730)
class UQuadrupedIKSubAnimInstance : public UDBDBaseAnimInstance
{ 
public:
	bool                                               _enableIK;                                                  // 0x02F0   (0x0001)  
	SDK_UNDEFINED(1,3106) /* TEnumAsByte<ETraceTypeQuery> */ __um(_traceTypeQuery);                                // 0x02F1   (0x0001)  
	bool                                               _traceComplex;                                              // 0x02F2   (0x0001)  
	bool                                               _ignoreTouches;                                             // 0x02F3   (0x0001)  
	FName                                              _noGroundTag;                                               // 0x02F4   (0x000C)  
	bool                                               _adjustCamera;                                              // 0x0300   (0x0001)  
	bool                                               _adjustTail;                                                // 0x0301   (0x0001)  
	bool                                               _firstPersonView;                                           // 0x0302   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0303   (0x0001)  MISSED
	float                                              _footIkSpeed;                                               // 0x0304   (0x0004)  
	float                                              _pelvisIkSpeed;                                             // 0x0308   (0x0004)  
	float                                              _pelvisIkSpeedFPV;                                          // 0x030C   (0x0004)  
	float                                              _maxIKTargetDistance;                                       // 0x0310   (0x0004)  
	float                                              _maxBoneDistanceFromTargetMoving;                           // 0x0314   (0x0004)  
	float                                              _maxBoneDistanceFromTargetIdle;                             // 0x0318   (0x0004)  
	float                                              _minDistanceFromCapsuleFrontFeetIdle;                       // 0x031C   (0x0004)  
	float                                              _maxDistanceFromCapsuleFrontFeetIdle;                       // 0x0320   (0x0004)  
	float                                              _minDistanceFromCapsuleBackFeetIdle;                        // 0x0324   (0x0004)  
	float                                              _maxDistanceFromCapsuleBackFeetIdle;                        // 0x0328   (0x0004)  
	float                                              _minDistanceFromCapsuleFrontFeetMoving;                     // 0x032C   (0x0004)  
	float                                              _maxDistanceFromCapsuleFrontFeetMoving;                     // 0x0330   (0x0004)  
	float                                              _minDistanceFromCapsuleBackFeetMoving;                      // 0x0334   (0x0004)  
	float                                              _maxDistanceFromCapsuleBackFeetMoving;                      // 0x0338   (0x0004)  
	float                                              _maxIKTargetDistanceFromPose;                               // 0x033C   (0x0004)  
	float                                              _pelvisRotationMinOffset;                                   // 0x0340   (0x0004)  
	float                                              _pelvisRotationMaxOffset;                                   // 0x0344   (0x0004)  
	float                                              _pelvisPositionOffsetMin;                                   // 0x0348   (0x0004)  
	float                                              _pelvisPositionOffsetMax;                                   // 0x034C   (0x0004)  
	float                                              _pelvisPositionOffsetMinFPV;                                // 0x0350   (0x0004)  
	float                                              _pelvisPositionOffsetMaxFPV;                                // 0x0354   (0x0004)  
	float                                              _frontFeetLineTraceStartOffset;                             // 0x0358   (0x0004)  
	float                                              _frontFeetLineTraceEndOffset;                               // 0x035C   (0x0004)  
	float                                              _backFeetLineTraceStartOffset;                              // 0x0360   (0x0004)  
	float                                              _backFeetLineTraceEndOffset;                                // 0x0364   (0x0004)  
	float                                              _frontFeetUpDisplacement;                                   // 0x0368   (0x0004)  
	float                                              _frontFeetDownDisplacement;                                 // 0x036C   (0x0004)  
	float                                              _backFeetUpDisplacement;                                    // 0x0370   (0x0004)  
	float                                              _backFeetDownDisplacement;                                  // 0x0374   (0x0004)  
	float                                              _footDistance;                                              // 0x0378   (0x0004)  
	float                                              _isMovingTolerance;                                         // 0x037C   (0x0004)  
	float                                              _ungroundedFeetDistance;                                    // 0x0380   (0x0004)  
	FName                                              _pelvisSocketName;                                          // 0x0384   (0x000C)  
	FName                                              _cameraSocketName;                                          // 0x0390   (0x000C)  
	FName                                              _tailSocketName;                                            // 0x039C   (0x000C)  
	FName                                              _leftFrontFootSocketName;                                   // 0x03A8   (0x000C)  
	FName                                              _leftFrontFootPoleSocketName;                               // 0x03B4   (0x000C)  
	FName                                              _rightFrontFootSocketName;                                  // 0x03C0   (0x000C)  
	FName                                              _rightFrontFootPoleSocketName;                              // 0x03CC   (0x000C)  
	FName                                              _leftBackFootSocketName;                                    // 0x03D8   (0x000C)  
	FName                                              _rightBackFootSocketName;                                   // 0x03E4   (0x000C)  
	FName                                              _leftFrontFootBoneName;                                     // 0x03F0   (0x000C)  
	FName                                              _rightFrontFootBoneName;                                    // 0x03FC   (0x000C)  
	FName                                              _leftBackFootBoneName;                                      // 0x0408   (0x000C)  
	FName                                              _rightBackFootBoneName;                                     // 0x0414   (0x000C)  
	FName                                              _leftFrontFootRootSocketName;                               // 0x0420   (0x000C)  
	FName                                              _rightFrontFootRootSocketName;                              // 0x042C   (0x000C)  
	FName                                              _leftBackFootRootSocketName;                                // 0x0438   (0x000C)  
	FName                                              _rightBackFootRootSocketName;                               // 0x0444   (0x000C)  
	float                                              _leftFrontFootMaxExtension;                                 // 0x0450   (0x0004)  
	float                                              _rightFrontFootMaxExtension;                                // 0x0454   (0x0004)  
	float                                              _leftBackFootMaxExtension;                                  // 0x0458   (0x0004)  
	float                                              _rightBackFootMaxExtension;                                 // 0x045C   (0x0004)  
	float                                              _leftFrontFootUngroundedTolerance;                          // 0x0460   (0x0004)  
	float                                              _rightFrontFootUngroundedTolerance;                         // 0x0464   (0x0004)  
	float                                              _leftBackFootUngroundedTolerance;                           // 0x0468   (0x0004)  
	float                                              _rightBackFootUngroundedTolerance;                          // 0x046C   (0x0004)  
	FVector                                            _pelvisPositionOffset;                                      // 0x0470   (0x000C)  
	FRotator                                           _worldPitch;                                                // 0x047C   (0x000C)  
	FRotator                                           _cameraRotationOffset;                                      // 0x0488   (0x000C)  
	FVector                                            _cameraPositionOffset;                                      // 0x0494   (0x000C)  
	FRotator                                           _tailRotationOffset;                                        // 0x04A0   (0x000C)  
	FVector                                            _tailPositionOffset;                                        // 0x04AC   (0x000C)  
	FVector                                            _leftFrontFootLocation;                                     // 0x04B8   (0x000C)  
	FVector                                            _leftFrontFootPoleLocation;                                 // 0x04C4   (0x000C)  
	FVector                                            _leftFrontFootPoleCurrentLocation;                          // 0x04D0   (0x000C)  
	FVector                                            _rightFrontFootPoleCurrentLocation;                         // 0x04DC   (0x000C)  
	FVector                                            _rightFrontFootLocation;                                    // 0x04E8   (0x000C)  
	FVector                                            _rightFrontFootPoleLocation;                                // 0x04F4   (0x000C)  
	FVector                                            _leftBackFootLocation;                                      // 0x0500   (0x000C)  
	FVector                                            _rightBackFootLocation;                                     // 0x050C   (0x000C)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0518   (0x0008)  MISSED
	FTransform                                         _leftBackFootTransform;                                     // 0x0520   (0x0030)  
	FTransform                                         _rightBackFootTransform;                                    // 0x0550   (0x0030)  
	FRotator                                           _leftFrontFootRotation;                                     // 0x0580   (0x000C)  
	FRotator                                           _rightFrontFootRotation;                                    // 0x058C   (0x000C)  
	FRotator                                           _leftBackFootRotation;                                      // 0x0598   (0x000C)  
	FRotator                                           _rightBackFootRotation;                                     // 0x05A4   (0x000C)  
	class USkeletalMeshComponent*                      _skeletalMeshComponent;                                     // 0x05B0   (0x0008)  
	class UWorld*                                      _world;                                                     // 0x05B8   (0x0008)  
	unsigned char                                      UnknownData02_6[0x170];                                     // 0x05C0   (0x0170)  MISSED
};

/// Class /Script/DBDAnimation.RepairGeneratorSubAnimInstance
/// Size: 0x0090 (0x0002C0 - 0x000350)
class URepairGeneratorSubAnimInstance : public UAnimInstance
{ 
public:
	class AGenerator*                                  _owningGenerator;                                           // 0x02C0   (0x0008)  
	bool                                               _isBeingRepaired;                                           // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02C9   (0x0007)  MISSED
	class ACamperPlayer*                               _repairingSurvivor;                                         // 0x02D0   (0x0008)  
	class UAnimSequence*                               _animSequence;                                              // 0x02D8   (0x0008)  
	FGameplayTag                                       _interactionTag;                                            // 0x02E0   (0x000C)  
	FGameplayTag                                       _currentAnimId;                                             // 0x02EC   (0x000C)  
	SDK_UNDEFINED(80,3107) /* TMap<FGameplayTag, UAnimSequence*> */ __um(_taggedAnimSequences);                    // 0x02F8   (0x0050)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0348   (0x0008)  MISSED
};

/// Class /Script/DBDAnimation.RepairGeneratorSurvivorSubAnimInstance
/// Size: 0x0070 (0x000550 - 0x0005C0)
class URepairGeneratorSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0550   (0x0040)  MISSED
	FVector                                            _snapPosition;                                              // 0x0590   (0x000C)  
	int32_t                                            _side;                                                      // 0x059C   (0x0004)  
	int32_t                                            _repairAnimIndex;                                           // 0x05A0   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x05A4   (0x000C)  MISSED
	bool                                               _isRepairingGenerator;                                      // 0x05B0   (0x0001)  
	bool                                               _rightFootDown;                                             // 0x05B1   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x05B2   (0x0002)  MISSED
	int32_t                                            _animSequenceVariationCount;                                // 0x05B4   (0x0004)  
	bool                                               _isVomiting;                                                // 0x05B8   (0x0001)  
	bool                                               _hasSkillCheckFailed;                                       // 0x05B9   (0x0001)  
	bool                                               _isS34P01Accumulating;                                      // 0x05BA   (0x0001)  
	unsigned char                                      UnknownData03_6[0x5];                                       // 0x05BB   (0x0005)  MISSED
};

/// Class /Script/DBDAnimation.SabotageSurvivorSubAnimInstance
/// Size: 0x0040 (0x000550 - 0x000590)
class USabotageSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0550   (0x0038)  MISSED
	bool                                               _isSabotaging;                                              // 0x0588   (0x0001)  
	bool                                               _hasSkillCheckFailed;                                       // 0x0589   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x058A   (0x0006)  MISSED
};

/// Class /Script/DBDAnimation.ScreamSurvivorSubAnimInstance
/// Size: 0x0000 (0x000550 - 0x000550)
class UScreamSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:


	/// Functions
	// Function /Script/DBDAnimation.ScreamSurvivorSubAnimInstance.ResetScreamTrigger
	// void ResetScreamTrigger();                                                                                            // [0x4ec7600] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/DBDAnimation.SkillCheckFailureTracker
/// Size: 0x0000 (0x000030 - 0x000030)
class USkillCheckFailureTracker : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDAnimation.SkillCheckFailureTracker.ResetSkillCheckFailed
	// void ResetSkillCheckFailed();                                                                                         // [0x49e9490] Native|Public|BlueprintCallable 
	// Function /Script/DBDAnimation.SkillCheckFailureTracker.OnSkillCheckFailed
	// void OnSkillCheckFailed(FGameplayTag gameEventType, FGameEventData& GameEventData);                                   // [0x4ec74d0] Native|Protected|HasOutParms 
};

/// Class /Script/DBDAnimation.SteamPipeResetSwitchAnimInstance
/// Size: 0x0010 (0x0002C0 - 0x0002D0)
class USteamPipeResetSwitchAnimInstance : public UAnimInstance
{ 
public:
	bool                                               _handleIsDown;                                              // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02C1   (0x0007)  MISSED
	class ASteamPipeResetSwitch*                       _resetSwitch;                                               // 0x02C8   (0x0008)  
};

/// Class /Script/DBDAnimation.SurvivorAimableArmSensor
/// Size: 0x0040 (0x000138 - 0x000178)
class USurvivorAimableArmSensor : public UArmIKSensorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0138   (0x0018)  MISSED
	class ACollectable*                                _aimableCollectable;                                        // 0x0150   (0x0008)  
	class UAimableComponent*                           _aimable;                                                   // 0x0158   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0160   (0x0018)  MISSED
};

/// Class /Script/DBDAnimation.SurvivorAimableSubAnimInstance
/// Size: 0x0030 (0x000550 - 0x000580)
class USurvivorAimableSubAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:
	float                                              _pitch;                                                     // 0x0548   (0x0004)  
	bool                                               _isHoldingAimItem;                                          // 0x054C   (0x0001)  
	bool                                               _isAiming;                                                  // 0x054D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x054E   (0x0002)  MISSED
	float                                              _isAimingAlpha;                                             // 0x0550   (0x0004)  
	FVector                                            _aimPoint;                                                  // 0x0554   (0x000C)  
	float                                              _shoulderToCollisionDistance;                               // 0x0560   (0x0004)  
	unsigned char                                      UnknownData01_6[0x1C];                                      // 0x0564   (0x001C)  MISSED
};

/// Class /Script/DBDAnimation.SurvivorAnimInstance
/// Size: 0x0120 (0x000550 - 0x000670)
class USurvivorAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:
	class ACamperPlayer*                               CamperPlayer;                                               // 0x0548   (0x0008)  
	bool                                               IsHooked;                                                   // 0x0550   (0x0001)  
	bool                                               IsSacrificeStruggling;                                      // 0x0551   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0552   (0x0006)  MISSED
	class UAnimMontage*                                MontageMadnessTierUp;                                       // 0x0558   (0x0008)  
	TArray<class UAnimCompositeBase*>                  ArrayCarryAttackMontage;                                    // 0x0560   (0x0010)  
	EIntroState                                        _introState;                                                // 0x0570   (0x0001)  
	bool                                               _isFrightScreaming;                                         // 0x0571   (0x0001)  
	bool                                               IsBeingCarried;                                             // 0x0572   (0x0001)  
	bool                                               IsBeingPutOnHook;                                           // 0x0573   (0x0001)  
	bool                                               isCrouched;                                                 // 0x0574   (0x0001)  
	EGuidedState                                       GuidedAction;                                               // 0x0575   (0x0001)  
	bool                                               IsCrawling;                                                 // 0x0576   (0x0001)  
	bool                                               IsDead;                                                     // 0x0577   (0x0001)  
	float                                              MaxSpeed;                                                   // 0x0578   (0x0004)  
	bool                                               IsInsideCloset;                                             // 0x057C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x057D   (0x0003)  MISSED
	float                                              IsPlayingMadnessTierUpWeight;                               // 0x0580   (0x0004)  
	bool                                               IsBeingKilled;                                              // 0x0584   (0x0001)  
	bool                                               IsBeingHealed;                                              // 0x0585   (0x0001)  
	bool                                               IsCarryAttackSucess;                                        // 0x0586   (0x0001)  
	bool                                               IsUsingAimItem;                                             // 0x0587   (0x0001)  
	bool                                               IsHoldingAimItem;                                           // 0x0588   (0x0001)  
	bool                                               AllowLookAt;                                                // 0x0589   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x058A   (0x0002)  MISSED
	float                                              DropStaggerTimeLeft;                                        // 0x058C   (0x0004)  
	float                                              RightArmIKAlpha;                                            // 0x0590   (0x0004)  
	unsigned char                                      UnknownData03_5[0xC];                                       // 0x0594   (0x000C)  MISSED
	FTransform                                         RightHandIKTransform;                                       // 0x05A0   (0x0030)  
	bool                                               Strafe;                                                     // 0x05D0   (0x0001)  
	bool                                               IsInteracting;                                              // 0x05D1   (0x0001)  
	bool                                               Injured;                                                    // 0x05D2   (0x0001)  
	EInteractionAnimation                              interactionType;                                            // 0x05D3   (0x0001)  
	EInteractionAnimation                              PreviousInteractionType;                                    // 0x05D4   (0x0001)  
	bool                                               IsSlasherInFPV;                                             // 0x05D5   (0x0001)  
	unsigned char                                      UnknownData04_5[0x2];                                       // 0x05D6   (0x0002)  MISSED
	float                                              CarriedAlpha;                                               // 0x05D8   (0x0004)  
	bool                                               IsHoldingHandleItem;                                        // 0x05DC   (0x0001)  
	bool                                               IsHoldingSmallItem;                                         // 0x05DD   (0x0001)  
	bool                                               IsHoldingFirecracker;                                       // 0x05DE   (0x0001)  
	bool                                               IsHoldingFlashbang;                                         // 0x05DF   (0x0001)  
	bool                                               IsHoldingVaccine;                                           // 0x05E0   (0x0001)  
	bool                                               IsHoldingAnyItem;                                           // 0x05E1   (0x0001)  
	bool                                               IsHoldingLamentConfiguration;                               // 0x05E2   (0x0001)  
	bool                                               IsHoldingFragileObject;                                     // 0x05E3   (0x0001)  
	bool                                               IsHoldingSprayObject;                                       // 0x05E4   (0x0001)  
	bool                                               IsHoldingVHS;                                               // 0x05E5   (0x0001)  
	bool                                               IsHoldingWormholeFatherKeyCard;                             // 0x05E6   (0x0001)  
	bool                                               IsArmOverrideDisabled;                                      // 0x05E7   (0x0001)  
	bool                                               InAir;                                                      // 0x05E8   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x05E9   (0x0003)  MISSED
	float                                              _walkAnimSpeed;                                             // 0x05EC   (0x0004)  
	float                                              Direction;                                                  // 0x05F0   (0x0004)  
	float                                              Pitch;                                                      // 0x05F4   (0x0004)  
	float                                              Yaw;                                                        // 0x05F8   (0x0004)  
	FVector                                            RightFootEffectorLocation;                                  // 0x05FC   (0x000C)  
	FVector                                            LeftFootEffectorLocation;                                   // 0x0608   (0x000C)  
	bool                                               Idle;                                                       // 0x0614   (0x0001)  
	bool                                               HasAnyMontagePlaying;                                       // 0x0615   (0x0001)  
	unsigned char                                      UnknownData06_5[0x2];                                       // 0x0616   (0x0002)  MISSED
	FName                                              CurrentlyPlayerMontageId;                                   // 0x0618   (0x000C)  
	bool                                               IsBeingCarriedByTheSpirit;                                  // 0x0624   (0x0001)  
	bool                                               IsBeingCarriedByTheNightmare;                               // 0x0625   (0x0001)  
	bool                                               IsBeingCarriedByThePig;                                     // 0x0626   (0x0001)  
	bool                                               IsBeingCarriedByTheHag;                                     // 0x0627   (0x0001)  
	bool                                               IsBeingCarriedByTheLegion;                                  // 0x0628   (0x0001)  
	bool                                               IsBeingCarriedByTheGhostFace;                               // 0x0629   (0x0001)  
	bool                                               IsPlayingWakeUpOther;                                       // 0x062A   (0x0001)  
	bool                                               IsPlayingFreddyMori;                                        // 0x062B   (0x0001)  
	bool                                               HasLinkInput;                                               // 0x062C   (0x0001)  
	bool                                               _isMale;                                                    // 0x062D   (0x0001)  
	unsigned char                                      UnknownData07_5[0x2];                                       // 0x062E   (0x0002)  MISSED
	float                                              _animMontageLeaderForwardVelocity;                          // 0x0630   (0x0004)  
	float                                              _animMontageLeaderLateralVelocity;                          // 0x0634   (0x0004)  
	unsigned char                                      UnknownData08_6[0x38];                                      // 0x0638   (0x0038)  MISSED


	/// Functions
	// Function /Script/DBDAnimation.SurvivorAnimInstance.SetAudioRummageAkEvent
	// void SetAudioRummageAkEvent(FName distance);                                                                          // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDAnimation.SurvivorAnimInstance.OnInfectiousFrightScream
	// void OnInfectiousFrightScream();                                                                                      // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDAnimation.SurvivorAnimInstance.AddAudioRepairRateRadius
	// void AddAudioRepairRateRadius(int32_t distance);                                                                      // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDAnimation.WakerObjectAnimInstance
/// Size: 0x0040 (0x0002C0 - 0x000300)
class UWakerObjectAnimInstance : public UAnimInstance
{ 
public:
	float                                              _reappearTimerCooldown;                                     // 0x02C0   (0x0004)  
	float                                              _wakeUpCharge;                                              // 0x02C4   (0x0004)  
	bool                                               _chargeStarted;                                             // 0x02C8   (0x0001)  
	bool                                               _interactionComplete;                                       // 0x02C9   (0x0001)  
	bool                                               _outEnd;                                                    // 0x02CA   (0x0001)  
	bool                                               _reset;                                                     // 0x02CB   (0x0001)  
	bool                                               _inEnd;                                                     // 0x02CC   (0x0001)  
	bool                                               _wakerObjectStarted;                                        // 0x02CD   (0x0001)  
	bool                                               _respawnEnd;                                                // 0x02CE   (0x0001)  
	bool                                               _cancelEnd;                                                 // 0x02CF   (0x0001)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x02D0   (0x0030)  MISSED


	/// Functions
	// Function /Script/DBDAnimation.WakerObjectAnimInstance.ResetReappearTimer
	// void ResetReappearTimer();                                                                                            // [0x4ec75e0] Final|Native|Private|BlueprintCallable 
	// Function /Script/DBDAnimation.WakerObjectAnimInstance.OnReappear
	// void OnReappear();                                                                                                    // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDAnimation.WakerObjectAnimInstance.GetWakerObjectStarted
	// bool GetWakerObjectStarted();                                                                                         // [0x4ec74a0] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDAnimation.WakerObjectAnimInstance.GetWakerObjectChargeComplete
	// bool GetWakerObjectChargeComplete();                                                                                  // [0x4ec7470] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDAnimation.WakerObjectAnimInstance.GetWakerObjectCharge
	// float GetWakerObjectCharge();                                                                                         // [0x4ec7440] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDAnimation.WakerObjectAnimInstance.GetWakerObject
	// class AWakerObject* GetWakerObject();                                                                                 // [0x4ec7410] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/DBDAnimation.CustomizationCategoryAnimationMappingInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCustomizationCategoryAnimationMappingInfo
{ 
	ECustomizationCategory                             CustomizationCategory;                                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FName>                                      Tags;                                                       // 0x0008   (0x0010)  
};

/// Struct /Script/DBDAnimation.CustomizationAnimationMapping
/// Size: 0x0028 (0x000008 - 0x000030)
struct FCustomizationAnimationMapping : FDBDTableRowBase
{ 
	int32_t                                            ID;                                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FName>                                      AnimTags;                                                   // 0x0010   (0x0010)  
	TArray<FCustomizationCategoryAnimationMappingInfo> _mappingInfos;                                              // 0x0020   (0x0010)  
};

/// Struct /Script/DBDAnimation.KillerSpecificSurvivorAnimationsRow
/// Size: 0x0040 (0x000008 - 0x000048)
struct FKillerSpecificSurvivorAnimationsRow : FDBDTableRowBase
{ 
	FGameplayTag                                       KillerPresenceStateTag;                                     // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	SDK_UNDEFINED(48,3108) /* TWeakObjectPtr<UClass*> */ __um(KillerSpecificSurvivorAnimation);                    // 0x0018   (0x0030)  
};

/// Struct /Script/DBDAnimation.FootBoneData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FFootBoneData
{ 
	class UCurveVector*                                RightFootCurve;                                             // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0008   (0x0010)  MISSED
	class UCurveVector*                                LeftFootCurve;                                              // 0x0018   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0020   (0x0010)  MISSED
};

/// Struct /Script/DBDAnimation.PerspectiveDependentAnimSequenceSelector
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPerspectiveDependentAnimSequenceSelector
{ 
	class UAnimSequence*                               _current;                                                   // 0x0000   (0x0008)  
	class UAnimSequence*                               _thirdPerson;                                               // 0x0008   (0x0008)  
	class UAnimSequence*                               _firstPerson;                                               // 0x0010   (0x0008)  
};

