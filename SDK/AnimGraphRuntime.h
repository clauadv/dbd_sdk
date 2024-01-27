
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimationCore
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/AnimGraphRuntime.ESphericalLimitType
/// Size: 0x03
enum class ESphericalLimitType : uint8_t
{
	ESphericalLimitType__Inner                                                       = 0,
	ESphericalLimitType__Outer                                                       = 1,
	ESphericalLimitType__ESphericalLimitType_MAX                                     = 2
};

/// Enum /Script/AnimGraphRuntime.AnimPhysSimSpaceType
/// Size: 0x06
enum class AnimPhysSimSpaceType : uint8_t
{
	AnimPhysSimSpaceType__Component                                                  = 0,
	AnimPhysSimSpaceType__Actor                                                      = 1,
	AnimPhysSimSpaceType__World                                                      = 2,
	AnimPhysSimSpaceType__RootRelative                                               = 3,
	AnimPhysSimSpaceType__BoneRelative                                               = 4,
	AnimPhysSimSpaceType__AnimPhysSimSpaceType_MAX                                   = 5
};

/// Enum /Script/AnimGraphRuntime.AnimPhysLinearConstraintType
/// Size: 0x03
enum class AnimPhysLinearConstraintType : uint8_t
{
	AnimPhysLinearConstraintType__Free                                               = 0,
	AnimPhysLinearConstraintType__Limited                                            = 1,
	AnimPhysLinearConstraintType__AnimPhysLinearConstraintType_MAX                   = 2
};

/// Enum /Script/AnimGraphRuntime.AnimPhysAngularConstraintType
/// Size: 0x03
enum class AnimPhysAngularConstraintType : uint8_t
{
	AnimPhysAngularConstraintType__Angular                                           = 0,
	AnimPhysAngularConstraintType__Cone                                              = 1,
	AnimPhysAngularConstraintType__AnimPhysAngularConstraintType_MAX                 = 2
};

/// Enum /Script/AnimGraphRuntime.EBlendListTransitionType
/// Size: 0x03
enum class EBlendListTransitionType : uint8_t
{
	EBlendListTransitionType__StandardBlend                                          = 0,
	EBlendListTransitionType__Inertialization                                        = 1,
	EBlendListTransitionType__EBlendListTransitionType_MAX                           = 2
};

/// Enum /Script/AnimGraphRuntime.EDrivenDestinationMode
/// Size: 0x04
enum class EDrivenDestinationMode : uint8_t
{
	EDrivenDestinationMode__Bone                                                     = 0,
	EDrivenDestinationMode__MorphTarget                                              = 1,
	EDrivenDestinationMode__MaterialParameter                                        = 2,
	EDrivenDestinationMode__EDrivenDestinationMode_MAX                               = 3
};

/// Enum /Script/AnimGraphRuntime.EDrivenBoneModificationMode
/// Size: 0x04
enum class EDrivenBoneModificationMode : uint8_t
{
	EDrivenBoneModificationMode__AddToInput                                          = 0,
	EDrivenBoneModificationMode__ReplaceComponent                                    = 1,
	EDrivenBoneModificationMode__AddToRefPose                                        = 2,
	EDrivenBoneModificationMode__EDrivenBoneModificationMode_MAX                     = 3
};

/// Enum /Script/AnimGraphRuntime.EConstraintOffsetOption
/// Size: 0x03
enum class EConstraintOffsetOption : uint8_t
{
	EConstraintOffsetOption__None                                                    = 0,
	EConstraintOffsetOption__Offset_RefPose                                          = 1,
	EConstraintOffsetOption__EConstraintOffsetOption_MAX                             = 2
};

/// Enum /Script/AnimGraphRuntime.CopyBoneDeltaMode
/// Size: 0x03
enum class CopyBoneDeltaMode : uint8_t
{
	CopyBoneDeltaMode__Accumulate                                                    = 0,
	CopyBoneDeltaMode__Copy                                                          = 1,
	CopyBoneDeltaMode__CopyBoneDeltaMode_MAX                                         = 2
};

/// Enum /Script/AnimGraphRuntime.EInterpolationBlend
/// Size: 0x08
enum class EInterpolationBlend : uint8_t
{
	EInterpolationBlend__Linear                                                      = 0,
	EInterpolationBlend__Cubic                                                       = 1,
	EInterpolationBlend__Sinusoidal                                                  = 2,
	EInterpolationBlend__EaseInOutExponent2                                          = 3,
	EInterpolationBlend__EaseInOutExponent3                                          = 4,
	EInterpolationBlend__EaseInOutExponent4                                          = 5,
	EInterpolationBlend__EaseInOutExponent5                                          = 6,
	EInterpolationBlend__MAX                                                         = 7
};

/// Enum /Script/AnimGraphRuntime.EBoneModificationMode
/// Size: 0x04
enum class EBoneModificationMode : uint8_t
{
	BMM_Ignore                                                                       = 0,
	BMM_Replace                                                                      = 1,
	BMM_Additive                                                                     = 2,
	BMM_MAX                                                                          = 3
};

/// Enum /Script/AnimGraphRuntime.EModifyCurveApplyMode
/// Size: 0x06
enum class EModifyCurveApplyMode : uint8_t
{
	EModifyCurveApplyMode__Add                                                       = 0,
	EModifyCurveApplyMode__Scale                                                     = 1,
	EModifyCurveApplyMode__Blend                                                     = 2,
	EModifyCurveApplyMode__WeightedMovingAverage                                     = 3,
	EModifyCurveApplyMode__RemapCurve                                                = 4,
	EModifyCurveApplyMode__EModifyCurveApplyMode_MAX                                 = 5
};

/// Enum /Script/AnimGraphRuntime.EPoseDriverOutput
/// Size: 0x03
enum class EPoseDriverOutput : uint8_t
{
	EPoseDriverOutput__DrivePoses                                                    = 0,
	EPoseDriverOutput__DriveCurves                                                   = 1,
	EPoseDriverOutput__EPoseDriverOutput_MAX                                         = 2
};

/// Enum /Script/AnimGraphRuntime.EPoseDriverSource
/// Size: 0x03
enum class EPoseDriverSource : uint8_t
{
	EPoseDriverSource__Rotation                                                      = 0,
	EPoseDriverSource__Translation                                                   = 1,
	EPoseDriverSource__EPoseDriverSource_MAX                                         = 2
};

/// Enum /Script/AnimGraphRuntime.EPoseDriverType
/// Size: 0x04
enum class EPoseDriverType : uint8_t
{
	EPoseDriverType__SwingAndTwist                                                   = 0,
	EPoseDriverType__SwingOnly                                                       = 1,
	EPoseDriverType__Translation                                                     = 2,
	EPoseDriverType__EPoseDriverType_MAX                                             = 3
};

/// Enum /Script/AnimGraphRuntime.ESnapshotSourceMode
/// Size: 0x03
enum class ESnapshotSourceMode : uint8_t
{
	ESnapshotSourceMode__NamedSnapshot                                               = 0,
	ESnapshotSourceMode__SnapshotPin                                                 = 1,
	ESnapshotSourceMode__ESnapshotSourceMode_MAX                                     = 2
};

/// Enum /Script/AnimGraphRuntime.ERefPoseType
/// Size: 0x03
enum class ERefPoseType : uint8_t
{
	EIT_LocalSpace                                                                   = 0,
	EIT_Additive                                                                     = 1,
	EIT_MAX                                                                          = 2
};

/// Enum /Script/AnimGraphRuntime.ESimulationSpace
/// Size: 0x04
enum class ESimulationSpace : uint8_t
{
	ESimulationSpace__ComponentSpace                                                 = 0,
	ESimulationSpace__WorldSpace                                                     = 1,
	ESimulationSpace__BaseBoneSpace                                                  = 2,
	ESimulationSpace__ESimulationSpace_MAX                                           = 3
};

/// Enum /Script/AnimGraphRuntime.EScaleChainInitialLength
/// Size: 0x04
enum class EScaleChainInitialLength : uint8_t
{
	EScaleChainInitialLength__FixedDefaultLengthValue                                = 0,
	EScaleChainInitialLength__Distance                                               = 1,
	EScaleChainInitialLength__ChainLength                                            = 2,
	EScaleChainInitialLength__EScaleChainInitialLength_MAX                           = 3
};

/// Enum /Script/AnimGraphRuntime.ESequenceEvalReinit
/// Size: 0x04
enum class ESequenceEvalReinit : uint8_t
{
	ESequenceEvalReinit__NoReset                                                     = 0,
	ESequenceEvalReinit__StartPosition                                               = 1,
	ESequenceEvalReinit__ExplicitTime                                                = 2,
	ESequenceEvalReinit__ESequenceEvalReinit_MAX                                     = 3
};

/// Enum /Script/AnimGraphRuntime.ESplineBoneAxis
/// Size: 0x05
enum class ESplineBoneAxis : uint8_t
{
	ESplineBoneAxis__None                                                            = 0,
	ESplineBoneAxis__X                                                               = 1,
	ESplineBoneAxis__Y                                                               = 2,
	ESplineBoneAxis__Z                                                               = 3,
	ESplineBoneAxis__ESplineBoneAxis_MAX                                             = 4
};

/// Enum /Script/AnimGraphRuntime.ERotationComponent
/// Size: 0x07
enum class ERotationComponent : uint8_t
{
	ERotationComponent__EulerX                                                       = 0,
	ERotationComponent__EulerY                                                       = 1,
	ERotationComponent__EulerZ                                                       = 2,
	ERotationComponent__QuaternionAngle                                              = 3,
	ERotationComponent__SwingAngle                                                   = 4,
	ERotationComponent__TwistAngle                                                   = 5,
	ERotationComponent__ERotationComponent_MAX                                       = 6
};

/// Enum /Script/AnimGraphRuntime.EEasingFuncType
/// Size: 0x16
enum class EEasingFuncType : uint8_t
{
	EEasingFuncType__Linear                                                          = 0,
	EEasingFuncType__Sinusoidal                                                      = 1,
	EEasingFuncType__Cubic                                                           = 2,
	EEasingFuncType__QuadraticInOut                                                  = 3,
	EEasingFuncType__CubicInOut                                                      = 4,
	EEasingFuncType__HermiteCubic                                                    = 5,
	EEasingFuncType__QuarticInOut                                                    = 6,
	EEasingFuncType__QuinticInOut                                                    = 7,
	EEasingFuncType__CircularIn                                                      = 8,
	EEasingFuncType__CircularOut                                                     = 9,
	EEasingFuncType__CircularInOut                                                   = 10,
	EEasingFuncType__ExpIn                                                           = 11,
	EEasingFuncType__ExpOut                                                          = 12,
	EEasingFuncType__ExpInOut                                                        = 13,
	EEasingFuncType__CustomCurve                                                     = 14,
	EEasingFuncType__EEasingFuncType_MAX                                             = 15
};

/// Enum /Script/AnimGraphRuntime.ERBFNormalizeMethod
/// Size: 0x05
enum class ERBFNormalizeMethod : uint8_t
{
	ERBFNormalizeMethod__OnlyNormalizeAboveOne                                       = 0,
	ERBFNormalizeMethod__AlwaysNormalize                                             = 1,
	ERBFNormalizeMethod__NormalizeWithinMedian                                       = 2,
	ERBFNormalizeMethod__NoNormalization                                             = 3,
	ERBFNormalizeMethod__ERBFNormalizeMethod_MAX                                     = 4
};

/// Enum /Script/AnimGraphRuntime.ERBFDistanceMethod
/// Size: 0x06
enum class ERBFDistanceMethod : uint8_t
{
	ERBFDistanceMethod__Euclidean                                                    = 0,
	ERBFDistanceMethod__Quaternion                                                   = 1,
	ERBFDistanceMethod__SwingAngle                                                   = 2,
	ERBFDistanceMethod__TwistAngle                                                   = 3,
	ERBFDistanceMethod__DefaultMethod                                                = 4,
	ERBFDistanceMethod__ERBFDistanceMethod_MAX                                       = 5
};

/// Enum /Script/AnimGraphRuntime.ERBFFunctionType
/// Size: 0x07
enum class ERBFFunctionType : uint8_t
{
	ERBFFunctionType__Gaussian                                                       = 0,
	ERBFFunctionType__Exponential                                                    = 1,
	ERBFFunctionType__Linear                                                         = 2,
	ERBFFunctionType__Cubic                                                          = 3,
	ERBFFunctionType__Quintic                                                        = 4,
	ERBFFunctionType__DefaultFunction                                                = 5,
	ERBFFunctionType__ERBFFunctionType_MAX                                           = 6
};

/// Enum /Script/AnimGraphRuntime.ERBFSolverType
/// Size: 0x03
enum class ERBFSolverType : uint8_t
{
	ERBFSolverType__Additive                                                         = 0,
	ERBFSolverType__Interpolative                                                    = 1,
	ERBFSolverType__ERBFSolverType_MAX                                               = 2
};

/// Class /Script/AnimGraphRuntime.AnimNotify_PlayMontageNotify
/// Size: 0x0010 (0x000040 - 0x000050)
class UAnimNotify_PlayMontageNotify : public UAnimNotify
{ 
public:
	FName                                              NotifyName;                                                 // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
/// Size: 0x0010 (0x000038 - 0x000048)
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{ 
public:
	FName                                              NotifyName;                                                 // 0x0038   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/AnimGraphRuntime.AnimSequencerInstance
/// Size: 0x0010 (0x0002C0 - 0x0002D0)
class UAnimSequencerInstance : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x02C0   (0x0010)  MISSED
};

/// Class /Script/AnimGraphRuntime.KismetAnimationLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
	// void K2_TwoBoneIK(FVector& RootPos, FVector& JointPos, FVector& EndPos, FVector& JointTarget, FVector& effector, FVector& OutJointPos, FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale); // [0x7160ad0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer
	// void K2_StartProfilingTimer();                                                                                        // [0x7160ab0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap
	// FVector K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ); // [0x71607d0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
	// float K2_MakePerlinNoiseAndRemap(float value, float RangeOutMin, float RangeOutMax);                                  // [0x71606b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
	// FTransform K2_LookAt(FTransform& CurrentTransform, FVector& targetPosition, FVector LookAtVector, bool bUseUpVector, FVector UpVector, float ClampConeInDegree); // [0x7160410] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer
	// float K2_EndProfilingTimer(bool bLog, FString LogPrefix);                                                             // [0x7160320] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
	// float K2_DistanceBetweenTwoSocketsAndMapRange(class USkeletalMeshComponent* Component, FName SocketOrBoneNameA, TEnumAsByte<ERelativeTransformSpace> SocketSpaceA, FName SocketOrBoneNameB, TEnumAsByte<ERelativeTransformSpace> SocketSpaceB, bool bRemapRange, float InRangeMin, float InRangeMax, float OutRangeMin, float OutRangeMax); // [0x7160010] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
	// FVector K2_DirectionBetweenSockets(class USkeletalMeshComponent* Component, FName SocketOrBoneNameFrom, FName SocketOrBoneNameTo); // [0x715fec0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets
	// float K2_CalculateVelocityFromSockets(float DeltaSeconds, class USkeletalMeshComponent* Component, FName SocketOrBoneName, FName ReferenceSocketOrBone, TEnumAsByte<ERelativeTransformSpace> SocketSpace, FVector OffsetInBoneSpace, FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax, EEasingFuncType EasingType, FRuntimeFloatCurve& CustomCurve); // [0x715fa30] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory
	// float K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, FVector position, FPositionHistory& History, int32_t NumberOfSamples, float VelocityMin, float VelocityMax); // [0x715f810] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AnimGraphRuntime.PlayMontageCallbackProxy
/// Size: 0x0080 (0x000030 - 0x0000B0)
class UPlayMontageCallbackProxy : public UObject
{ 
public:
	SDK_UNDEFINED(16,3447) /* FMulticastInlineDelegate */ __um(OnCompleted);                                       // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,3448) /* FMulticastInlineDelegate */ __um(OnBlendOut);                                        // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,3449) /* FMulticastInlineDelegate */ __um(OnInterrupted);                                     // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,3450) /* FMulticastInlineDelegate */ __um(OnNotifyBegin);                                     // 0x0060   (0x0010)  
	SDK_UNDEFINED(16,3451) /* FMulticastInlineDelegate */ __um(OnNotifyEnd);                                       // 0x0070   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0080   (0x0030)  MISSED


	/// Functions
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
	// void OnNotifyEndReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload);                // [0x7161e70] Final|Native|Protected|HasOutParms 
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
	// void OnNotifyBeginReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload);              // [0x7161d70] Final|Native|Protected|HasOutParms 
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
	// void OnMontageEnded(FGuid MontageInstanceId, class UAnimMontage* Montage, bool bInterrupted);                         // [0x7161c50] Final|Native|Protected|HasDefaults 
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
	// void OnMontageBlendingOut(FGuid MontageInstanceId, class UAnimMontage* Montage, bool bInterrupted);                   // [0x7161b30] Final|Native|Protected|HasDefaults 
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
	// class UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, FName StartingSection); // [0x7161990] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AnimGraphRuntime.SequencerAnimationSupport
/// Size: 0x0000 (0x000030 - 0x000030)
class USequencerAnimationSupport : public UInterface
{ 
public:
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SkeletalControlBase
/// Size: 0x00C0 (0x000010 - 0x0000D0)
struct FAnimNode_SkeletalControlBase : FAnimNode_Base
{ 
	FComponentSpacePoseLink                            ComponentPose;                                              // 0x0010   (0x0010)  
	int32_t                                            LODThreshold;                                               // 0x0020   (0x0004)  
	float                                              ActualAlpha;                                                // 0x0024   (0x0004)  
	EAnimAlphaInputType                                AlphaInputType;                                             // 0x0028   (0x0001)  
	bool                                               bAlphaBoolEnabled;                                          // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x002A   (0x0002)  MISSED
	float                                              alpha;                                                      // 0x002C   (0x0004)  
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0030   (0x0008)  
	FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0038   (0x0048)  
	FName                                              AlphaCurveName;                                             // 0x0080   (0x000C)  
	FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x008C   (0x0030)  
	unsigned char                                      UnknownData01_6[0x14];                                      // 0x00BC   (0x0014)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer
/// Size: 0x00B0 (0x000038 - 0x0000E8)
struct FAnimNode_BlendSpacePlayer : FAnimNode_AssetPlayerBase
{ 
	float                                              X;                                                          // 0x0038   (0x0004)  
	float                                              Y;                                                          // 0x003C   (0x0004)  
	float                                              Z;                                                          // 0x0040   (0x0004)  
	float                                              PlayRate;                                                   // 0x0044   (0x0004)  
	bool                                               bLoop;                                                      // 0x0048   (0x0001)  
	bool                                               bResetPlayTimeWhenBlendSpaceChanges;                        // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x004A   (0x0002)  MISSED
	float                                              StartPosition;                                              // 0x004C   (0x0004)  
	class UBlendSpaceBase*                             BlendSpace;                                                 // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_5[0x88];                                      // 0x0058   (0x0088)  MISSED
	class UBlendSpaceBase*                             PreviousBlendSpace;                                         // 0x00E0   (0x0008)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_AimOffsetLookAt
/// Size: 0x00E8 (0x0000E8 - 0x0001D0)
struct FAnimNode_AimOffsetLookAt : FAnimNode_BlendSpacePlayer
{ 
	unsigned char                                      UnknownData00_2[0x68];                                      // 0x00E8   (0x0068)  MISSED
	FPoseLink                                          BasePose;                                                   // 0x0150   (0x0010)  
	int32_t                                            LODThreshold;                                               // 0x0160   (0x0004)  
	FName                                              SourceSocketName;                                           // 0x0164   (0x000C)  
	FName                                              PivotSocketName;                                            // 0x0170   (0x000C)  
	FVector                                            LookAtLocation;                                             // 0x017C   (0x000C)  
	FVector                                            SocketAxis;                                                 // 0x0188   (0x000C)  
	float                                              alpha;                                                      // 0x0194   (0x0004)  
	unsigned char                                      UnknownData01_6[0x38];                                      // 0x0198   (0x0038)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimPhysConstraintSetup
/// Size: 0x0048 (0x000000 - 0x000048)
struct FAnimPhysConstraintSetup
{ 
	AnimPhysLinearConstraintType                       LinearXLimitType;                                           // 0x0000   (0x0001)  
	AnimPhysLinearConstraintType                       LinearYLimitType;                                           // 0x0001   (0x0001)  
	AnimPhysLinearConstraintType                       LinearZLimitType;                                           // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0003   (0x0001)  MISSED
	FVector                                            LinearAxesMin;                                              // 0x0004   (0x000C)  
	FVector                                            LinearAxesMax;                                              // 0x0010   (0x000C)  
	AnimPhysAngularConstraintType                      AngularConstraintType;                                      // 0x001C   (0x0001)  
	AnimPhysTwistAxis                                  TwistAxis;                                                  // 0x001D   (0x0001)  
	AnimPhysTwistAxis                                  AngularTargetAxis;                                          // 0x001E   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x001F   (0x0001)  MISSED
	float                                              ConeAngle;                                                  // 0x0020   (0x0004)  
	FVector                                            AngularLimitsMin;                                           // 0x0024   (0x000C)  
	FVector                                            AngularLimitsMax;                                           // 0x0030   (0x000C)  
	FVector                                            AngularTarget;                                              // 0x003C   (0x000C)  
};

/// Struct /Script/AnimGraphRuntime.AnimPhysSphericalLimit
/// Size: 0x0028 (0x000000 - 0x000028)
struct FAnimPhysSphericalLimit
{ 
	FBoneReference                                     DrivingBone;                                                // 0x0000   (0x0014)  
	FVector                                            SphereLocalOffset;                                          // 0x0014   (0x000C)  
	float                                              LimitRadius;                                                // 0x0020   (0x0004)  
	ESphericalLimitType                                LimitType;                                                  // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimPhysPlanarLimit
/// Size: 0x0050 (0x000000 - 0x000050)
struct FAnimPhysPlanarLimit
{ 
	FBoneReference                                     DrivingBone;                                                // 0x0000   (0x0014)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0014   (0x000C)  MISSED
	FTransform                                         PlaneTransform;                                             // 0x0020   (0x0030)  
};

/// Struct /Script/AnimGraphRuntime.RotationRetargetingInfo
/// Size: 0x0130 (0x000000 - 0x000130)
struct FRotationRetargetingInfo
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0001   (0x000F)  MISSED
	FTransform                                         Source;                                                     // 0x0010   (0x0030)  
	FTransform                                         Target;                                                     // 0x0040   (0x0030)  
	ERotationComponent                                 RotationComponent;                                          // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0071   (0x0003)  MISSED
	FVector                                            TwistAxis;                                                  // 0x0074   (0x000C)  
	bool                                               bUseAbsoluteAngle;                                          // 0x0080   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	float                                              SourceMinimum;                                              // 0x0084   (0x0004)  
	float                                              SourceMaximum;                                              // 0x0088   (0x0004)  
	float                                              TargetMinimum;                                              // 0x008C   (0x0004)  
	float                                              TargetMaximum;                                              // 0x0090   (0x0004)  
	EEasingFuncType                                    EasingType;                                                 // 0x0094   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0095   (0x0003)  MISSED
	FRuntimeFloatCurve                                 CustomCurve;                                                // 0x0098   (0x0088)  
	bool                                               bFlipEasing;                                                // 0x0120   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0121   (0x0003)  MISSED
	float                                              EasingWeight;                                               // 0x0124   (0x0004)  
	bool                                               bClamp;                                                     // 0x0128   (0x0001)  
	unsigned char                                      UnknownData05_6[0x7];                                       // 0x0129   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_AnimDynamics
/// Size: 0x0390 (0x0000D0 - 0x000460)
struct FAnimNode_AnimDynamics : FAnimNode_SkeletalControlBase
{ 
	float                                              LinearDampingOverride;                                      // 0x00D0   (0x0004)  
	float                                              AngularDampingOverride;                                     // 0x00D4   (0x0004)  
	unsigned char                                      UnknownData00_5[0x68];                                      // 0x00D8   (0x0068)  MISSED
	FBoneReference                                     RelativeSpaceBone;                                          // 0x0140   (0x0014)  
	bool                                               bHardLinkChain;                                             // 0x0154   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0155   (0x0003)  MISSED
	FBoneReference                                     BoundBone;                                                  // 0x0158   (0x0014)  
	FBoneReference                                     ChainEnd;                                                   // 0x016C   (0x0014)  
	FVector                                            BoxExtents;                                                 // 0x0180   (0x000C)  
	FVector                                            LocalJointOffset;                                           // 0x018C   (0x000C)  
	float                                              GravityScale;                                               // 0x0198   (0x0004)  
	FVector                                            GravityOverride;                                            // 0x019C   (0x000C)  
	float                                              LinearSpringConstant;                                       // 0x01A8   (0x0004)  
	float                                              AngularSpringConstant;                                      // 0x01AC   (0x0004)  
	float                                              WindScale;                                                  // 0x01B0   (0x0004)  
	FVector                                            ComponentLinearAccScale;                                    // 0x01B4   (0x000C)  
	FVector                                            ComponentLinearVelScale;                                    // 0x01C0   (0x000C)  
	FVector                                            ComponentAppliedLinearAccClamp;                             // 0x01CC   (0x000C)  
	float                                              AngularBiasOverride;                                        // 0x01D8   (0x0004)  
	int32_t                                            NumSolverIterationsPreUpdate;                               // 0x01DC   (0x0004)  
	int32_t                                            NumSolverIterationsPostUpdate;                              // 0x01E0   (0x0004)  
	FAnimPhysConstraintSetup                           ConstraintSetup;                                            // 0x01E4   (0x0048)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x022C   (0x0004)  MISSED
	TArray<FAnimPhysSphericalLimit>                    SphericalLimits;                                            // 0x0230   (0x0010)  
	float                                              SphereCollisionRadius;                                      // 0x0240   (0x0004)  
	FVector                                            ExternalForce;                                              // 0x0244   (0x000C)  
	TArray<FAnimPhysPlanarLimit>                       PlanarLimits;                                               // 0x0250   (0x0010)  
	AnimPhysCollisionType                              CollisionType;                                              // 0x0260   (0x0001)  
	AnimPhysSimSpaceType                               SimulationSpace;                                            // 0x0261   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x0262   (0x0002)  MISSED
	bool                                               bUseSphericalLimits : 1;                                    // 0x0264:0 (0x0001)  
	bool                                               bUsePlanarLimit : 1;                                        // 0x0264:1 (0x0001)  
	bool                                               bDoUpdate : 1;                                              // 0x0264:2 (0x0001)  
	bool                                               bDoEval : 1;                                                // 0x0264:3 (0x0001)  
	bool                                               bOverrideLinearDamping : 1;                                 // 0x0264:4 (0x0001)  
	bool                                               bOverrideAngularBias : 1;                                   // 0x0264:5 (0x0001)  
	bool                                               bOverrideAngularDamping : 1;                                // 0x0264:6 (0x0001)  
	bool                                               bEnableWind : 1;                                            // 0x0264:7 (0x0001)  
	unsigned char                                      UnknownBit04 : 1;                                           // 0x0265:0 (0x0001)  MISSED
	bool                                               bUseGravityOverride : 1;                                    // 0x0265:1 (0x0001)  
	bool                                               bLinearSpring : 1;                                          // 0x0265:2 (0x0001)  
	bool                                               bAngularSpring : 1;                                         // 0x0265:3 (0x0001)  
	bool                                               bChain : 1;                                                 // 0x0265:4 (0x0001)  
	unsigned char                                      UnknownData05_4[0xA];                                       // 0x0266   (0x000A)  MISSED
	FRotationRetargetingInfo                           RetargetingSettings;                                        // 0x0270   (0x0130)  
	unsigned char                                      UnknownData06_6[0xC0];                                      // 0x03A0   (0x00C0)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ApplyAdditive
/// Size: 0x00C0 (0x000010 - 0x0000D0)
struct FAnimNode_ApplyAdditive : FAnimNode_Base
{ 
	FPoseLink                                          Base;                                                       // 0x0010   (0x0010)  
	FPoseLink                                          Additive;                                                   // 0x0020   (0x0010)  
	float                                              alpha;                                                      // 0x0030   (0x0004)  
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0034   (0x0008)  
	int32_t                                            LODThreshold;                                               // 0x003C   (0x0004)  
	FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0040   (0x0048)  
	FName                                              AlphaCurveName;                                             // 0x0088   (0x000C)  
	FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x0094   (0x0030)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00C4   (0x0004)  MISSED
	EAnimAlphaInputType                                AlphaInputType;                                             // 0x00C8   (0x0001)  
	bool                                               bAlphaBoolEnabled;                                          // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x00CA   (0x0006)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AngularRangeLimit
/// Size: 0x002C (0x000000 - 0x00002C)
struct FAngularRangeLimit
{ 
	FVector                                            LimitMin;                                                   // 0x0000   (0x000C)  
	FVector                                            LimitMax;                                                   // 0x000C   (0x000C)  
	FBoneReference                                     Bone;                                                       // 0x0018   (0x0014)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ApplyLimits
/// Size: 0x0020 (0x0000D0 - 0x0000F0)
struct FAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase
{ 
	TArray<FAngularRangeLimit>                         AngularRangeLimits;                                         // 0x00D0   (0x0010)  
	TArray<FVector>                                    AngularOffsets;                                             // 0x00E0   (0x0010)  
};

/// Struct /Script/AnimGraphRuntime.BlendBoneByChannelEntry
/// Size: 0x002C (0x000000 - 0x00002C)
struct FBlendBoneByChannelEntry
{ 
	FBoneReference                                     SourceBone;                                                 // 0x0000   (0x0014)  
	FBoneReference                                     TargetBone;                                                 // 0x0014   (0x0014)  
	bool                                               bBlendTranslation;                                          // 0x0028   (0x0001)  
	bool                                               bBlendRotation;                                             // 0x0029   (0x0001)  
	bool                                               bBlendScale;                                                // 0x002A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x002B   (0x0001)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendBoneByChannel
/// Size: 0x0058 (0x000010 - 0x000068)
struct FAnimNode_BlendBoneByChannel : FAnimNode_Base
{ 
	FPoseLink                                          A;                                                          // 0x0010   (0x0010)  
	FPoseLink                                          B;                                                          // 0x0020   (0x0010)  
	TArray<FBlendBoneByChannelEntry>                   BoneDefinitions;                                            // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0040   (0x0010)  MISSED
	float                                              alpha;                                                      // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0058   (0x0008)  
	SDK_UNDEFINED(1,3452) /* TEnumAsByte<EBoneControlSpace> */ __um(TransformsSpace);                              // 0x0060   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListBase
/// Size: 0x0088 (0x000010 - 0x000098)
struct FAnimNode_BlendListBase : FAnimNode_Base
{ 
	TArray<FPoseLink>                                  BlendPose;                                                  // 0x0010   (0x0010)  
	TArray<float>                                      BlendTime;                                                  // 0x0020   (0x0010)  
	EBlendListTransitionType                           TransitionType;                                             // 0x0030   (0x0001)  
	EAlphaBlendOption                                  BlendType;                                                  // 0x0031   (0x0001)  
	bool                                               bResetChildOnActivation;                                    // 0x0032   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0033   (0x0005)  MISSED
	class UCurveFloat*                                 CustomBlendCurve;                                           // 0x0038   (0x0008)  
	class UBlendProfile*                               BlendProfile;                                               // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0048   (0x0050)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListByBool
/// Size: 0x0008 (0x000098 - 0x0000A0)
struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase
{ 
	bool                                               bActiveValue;                                               // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListByEnum
/// Size: 0x0018 (0x000098 - 0x0000B0)
struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase
{ 
	TArray<int32_t>                                    EnumToPoseIndex;                                            // 0x0098   (0x0010)  
	char                                               ActiveEnumValue;                                            // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListByInt
/// Size: 0x0008 (0x000098 - 0x0000A0)
struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase
{ 
	int32_t                                            ActiveChildIndex;                                           // 0x0098   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x009C   (0x0004)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
/// Size: 0x0008 (0x0000E8 - 0x0000F0)
struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer
{ 
	float                                              NormalizedTime;                                             // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00EC   (0x0004)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BoneDrivenController
/// Size: 0x0060 (0x0000D0 - 0x000130)
struct FAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     SourceBone;                                                 // 0x00D0   (0x0014)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	class UCurveFloat*                                 DrivingCurve;                                               // 0x00E8   (0x0008)  
	float                                              Multiplier;                                                 // 0x00F0   (0x0004)  
	float                                              RangeMin;                                                   // 0x00F4   (0x0004)  
	float                                              RangeMax;                                                   // 0x00F8   (0x0004)  
	float                                              RemappedMin;                                                // 0x00FC   (0x0004)  
	float                                              RemappedMax;                                                // 0x0100   (0x0004)  
	FName                                              ParameterName;                                              // 0x0104   (0x000C)  
	FBoneReference                                     TargetBone;                                                 // 0x0110   (0x0014)  
	EDrivenDestinationMode                             DestinationMode;                                            // 0x0124   (0x0001)  
	EDrivenBoneModificationMode                        ModificationMode;                                           // 0x0125   (0x0001)  
	SDK_UNDEFINED(1,3453) /* TEnumAsByte<EComponentType> */ __um(SourceComponent);                                 // 0x0126   (0x0001)  
	bool                                               bUseRange : 1;                                              // 0x0127:0 (0x0001)  
	bool                                               bAffectTargetTranslationX : 1;                              // 0x0127:1 (0x0001)  
	bool                                               bAffectTargetTranslationY : 1;                              // 0x0127:2 (0x0001)  
	bool                                               bAffectTargetTranslationZ : 1;                              // 0x0127:3 (0x0001)  
	bool                                               bAffectTargetRotationX : 1;                                 // 0x0127:4 (0x0001)  
	bool                                               bAffectTargetRotationY : 1;                                 // 0x0127:5 (0x0001)  
	bool                                               bAffectTargetRotationZ : 1;                                 // 0x0127:6 (0x0001)  
	bool                                               bAffectTargetScaleX : 1;                                    // 0x0127:7 (0x0001)  
	bool                                               bAffectTargetScaleY : 1;                                    // 0x0128:0 (0x0001)  
	bool                                               bAffectTargetScaleZ : 1;                                    // 0x0128:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0129   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.SocketReference
/// Size: 0x0050 (0x000000 - 0x000050)
struct FSocketReference
{ 
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0000   (0x0030)  MISSED
	FName                                              SocketName;                                                 // 0x0030   (0x000C)  
	unsigned char                                      UnknownData01_6[0x14];                                      // 0x003C   (0x0014)  MISSED
};

/// Struct /Script/AnimGraphRuntime.BoneSocketTarget
/// Size: 0x0070 (0x000000 - 0x000070)
struct FBoneSocketTarget
{ 
	bool                                               bUseSocket;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FBoneReference                                     BoneReference;                                              // 0x0004   (0x0014)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FSocketReference                                   SocketReference;                                            // 0x0020   (0x0050)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CCDIK
/// Size: 0x00D0 (0x0000D0 - 0x0001A0)
struct FAnimNode_CCDIK : FAnimNode_SkeletalControlBase
{ 
	FVector                                            EffectorLocation;                                           // 0x00D0   (0x000C)  
	SDK_UNDEFINED(1,3454) /* TEnumAsByte<EBoneControlSpace> */ __um(EffectorLocationSpace);                        // 0x00DC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00DD   (0x0003)  MISSED
	FBoneSocketTarget                                  EffectorTarget;                                             // 0x00E0   (0x0070)  
	FBoneReference                                     TipBone;                                                    // 0x0150   (0x0014)  
	FBoneReference                                     RootBone;                                                   // 0x0164   (0x0014)  
	float                                              Precision;                                                  // 0x0178   (0x0004)  
	int32_t                                            MaxIterations;                                              // 0x017C   (0x0004)  
	bool                                               bStartFromTail;                                             // 0x0180   (0x0001)  
	bool                                               bEnableRotationLimit;                                       // 0x0181   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0182   (0x0006)  MISSED
	TArray<float>                                      RotationLimitPerJoints;                                     // 0x0188   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0198   (0x0008)  MISSED
};

/// Struct /Script/AnimGraphRuntime.Constraint
/// Size: 0x0020 (0x000000 - 0x000020)
struct FConstraint
{ 
	FBoneReference                                     TargetBone;                                                 // 0x0000   (0x0014)  
	EConstraintOffsetOption                            OffsetOption;                                               // 0x0014   (0x0001)  
	ETransformConstraintType                           TransformType;                                              // 0x0015   (0x0001)  
	FFilterOptionPerAxis                               PerAxis;                                                    // 0x0016   (0x0003)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Constraint
/// Size: 0x0048 (0x0000D0 - 0x000118)
struct FAnimNode_Constraint : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     BoneToModify;                                               // 0x00D0   (0x0014)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	TArray<FConstraint>                                ConstraintSetup;                                            // 0x00E8   (0x0010)  
	TArray<float>                                      ConstraintWeights;                                          // 0x00F8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0108   (0x0010)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CopyBone
/// Size: 0x0030 (0x0000D0 - 0x000100)
struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     SourceBone;                                                 // 0x00D0   (0x0014)  
	FBoneReference                                     TargetBone;                                                 // 0x00E4   (0x0014)  
	bool                                               bCopyTranslation;                                           // 0x00F8   (0x0001)  
	bool                                               bCopyRotation;                                              // 0x00F9   (0x0001)  
	bool                                               bCopyScale;                                                 // 0x00FA   (0x0001)  
	SDK_UNDEFINED(1,3455) /* TEnumAsByte<EBoneControlSpace> */ __um(ControlSpace);                                 // 0x00FB   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CopyBoneDelta
/// Size: 0x0038 (0x0000D0 - 0x000108)
struct FAnimNode_CopyBoneDelta : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     SourceBone;                                                 // 0x00D0   (0x0014)  
	FBoneReference                                     TargetBone;                                                 // 0x00E4   (0x0014)  
	bool                                               bCopyTranslation;                                           // 0x00F8   (0x0001)  
	bool                                               bCopyRotation;                                              // 0x00F9   (0x0001)  
	bool                                               bCopyScale;                                                 // 0x00FA   (0x0001)  
	CopyBoneDeltaMode                                  CopyMode;                                                   // 0x00FB   (0x0001)  
	float                                              TranslationMultiplier;                                      // 0x00FC   (0x0004)  
	float                                              RotationMultiplier;                                         // 0x0100   (0x0004)  
	float                                              ScaleMultiplier;                                            // 0x0104   (0x0004)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CopyPoseFromMesh
/// Size: 0x01C8 (0x000010 - 0x0001D8)
struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base
{ 
	SDK_UNDEFINED(8,3456) /* TWeakObjectPtr<USkeletalMeshComponent*> */ __um(SourceMeshComponent);                 // 0x0010   (0x0008)  
	bool                                               bUseAttachedParent : 1;                                     // 0x0018:0 (0x0001)  
	bool                                               bCopyCurves : 1;                                            // 0x0018:1 (0x0001)  
	bool                                               bCopyCustomAttributes;                                      // 0x0019   (0x0001)  
	bool                                               bUseMeshPose : 1;                                           // 0x001A:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x1];                                       // 0x001B   (0x0001)  MISSED
	FName                                              RootBoneToCopy;                                             // 0x001C   (0x000C)  
	unsigned char                                      UnknownData01_6[0x1B0];                                     // 0x0028   (0x01B0)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CurveSource
/// Size: 0x0030 (0x000010 - 0x000040)
struct FAnimNode_CurveSource : FAnimNode_Base
{ 
	FPoseLink                                          SourcePose;                                                 // 0x0010   (0x0010)  
	FName                                              SourceBinding;                                              // 0x0020   (0x000C)  
	float                                              alpha;                                                      // 0x002C   (0x0004)  
	SDK_UNDEFINED(16,3457) /* TScriptInterface<Class> */ __um(CurveSource);                                        // 0x0030   (0x0010)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Fabrik
/// Size: 0x00E0 (0x0000D0 - 0x0001B0)
struct FAnimNode_Fabrik : FAnimNode_SkeletalControlBase
{ 
	FTransform                                         EffectorTransform;                                          // 0x00D0   (0x0030)  
	FBoneSocketTarget                                  EffectorTarget;                                             // 0x0100   (0x0070)  
	FBoneReference                                     TipBone;                                                    // 0x0170   (0x0014)  
	FBoneReference                                     RootBone;                                                   // 0x0184   (0x0014)  
	float                                              Precision;                                                  // 0x0198   (0x0004)  
	int32_t                                            MaxIterations;                                              // 0x019C   (0x0004)  
	SDK_UNDEFINED(1,3458) /* TEnumAsByte<EBoneControlSpace> */ __um(EffectorTransformSpace);                       // 0x01A0   (0x0001)  
	SDK_UNDEFINED(1,3459) /* TEnumAsByte<EBoneRotationSource> */ __um(EffectorRotationSource);                     // 0x01A1   (0x0001)  
	unsigned char                                      UnknownData00_6[0xE];                                       // 0x01A2   (0x000E)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_HandIKRetargeting
/// Size: 0x0068 (0x0000D0 - 0x000138)
struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     RightHandFK;                                                // 0x00D0   (0x0014)  
	FBoneReference                                     LeftHandFK;                                                 // 0x00E4   (0x0014)  
	FBoneReference                                     RightHandIK;                                                // 0x00F8   (0x0014)  
	FBoneReference                                     LeftHandIK;                                                 // 0x010C   (0x0014)  
	TArray<FBoneReference>                             IKBonesToMove;                                              // 0x0120   (0x0010)  
	float                                              HandFKWeight;                                               // 0x0130   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0134   (0x0004)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_LayeredBoneBlend
/// Size: 0x00B0 (0x000010 - 0x0000C0)
struct FAnimNode_LayeredBoneBlend : FAnimNode_Base
{ 
	FPoseLink                                          BasePose;                                                   // 0x0010   (0x0010)  
	TArray<FPoseLink>                                  BlendPoses;                                                 // 0x0020   (0x0010)  
	TArray<FInputBlendPose>                            LayerSetup;                                                 // 0x0030   (0x0010)  
	TArray<float>                                      BlendWeights;                                               // 0x0040   (0x0010)  
	bool                                               bMeshSpaceRotationBlend;                                    // 0x0050   (0x0001)  
	bool                                               bMeshSpaceScaleBlend;                                       // 0x0051   (0x0001)  
	SDK_UNDEFINED(1,3460) /* TEnumAsByte<ECurveBlendOption> */ __um(CurveBlendOption);                             // 0x0052   (0x0001)  
	bool                                               bBlendRootMotionBasedOnRootBone;                            // 0x0053   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	int32_t                                            LODThreshold;                                               // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	TArray<FPerBoneBlendWeight>                        PerBoneBlendWeights;                                        // 0x0060   (0x0010)  
	FGuid                                              SkeletonGuid;                                               // 0x0070   (0x0010)  
	FGuid                                              VirtualBoneGuid;                                            // 0x0080   (0x0010)  
	unsigned char                                      UnknownData02_6[0x30];                                      // 0x0090   (0x0030)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimLegIKDefinition
/// Size: 0x0034 (0x000000 - 0x000034)
struct FAnimLegIKDefinition
{ 
	FBoneReference                                     IKFootBone;                                                 // 0x0000   (0x0014)  
	FBoneReference                                     FKFootBone;                                                 // 0x0014   (0x0014)  
	int32_t                                            NumBonesInLimb;                                             // 0x0028   (0x0004)  
	float                                              MinRotationAngle;                                           // 0x002C   (0x0004)  
	SDK_UNDEFINED(1,3461) /* TEnumAsByte<EAxis> */     __um(FootBoneForwardAxis);                                  // 0x0030   (0x0001)  
	SDK_UNDEFINED(1,3462) /* TEnumAsByte<EAxis> */     __um(HingeRotationAxis);                                    // 0x0031   (0x0001)  
	bool                                               bEnableRotationLimit;                                       // 0x0032   (0x0001)  
	bool                                               bEnableKneeTwistCorrection;                                 // 0x0033   (0x0001)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_LegIK
/// Size: 0x0030 (0x0000D0 - 0x000100)
struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase
{ 
	float                                              ReachPrecision;                                             // 0x00D0   (0x0004)  
	int32_t                                            MaxIterations;                                              // 0x00D4   (0x0004)  
	TArray<FAnimLegIKDefinition>                       LegsDefinition;                                             // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00E8   (0x0018)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimLegIKData
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FAnimLegIKData
{ 
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0000   (0x00A0)  MISSED
};

/// Struct /Script/AnimGraphRuntime.IKChain
/// Size: 0x0038 (0x000000 - 0x000038)
struct FIKChain
{ 
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Struct /Script/AnimGraphRuntime.IKChainLink
/// Size: 0x0040 (0x000000 - 0x000040)
struct FIKChainLink
{ 
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_LookAt
/// Size: 0x0100 (0x0000D0 - 0x0001D0)
struct FAnimNode_LookAt : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     BoneToModify;                                               // 0x00D0   (0x0014)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x00E4   (0x000C)  MISSED
	FBoneSocketTarget                                  LookAtTarget;                                               // 0x00F0   (0x0070)  
	FVector                                            LookAtLocation;                                             // 0x0160   (0x000C)  
	FAxis                                              LookAt_Axis;                                                // 0x016C   (0x0010)  
	bool                                               bUseLookUpAxis;                                             // 0x017C   (0x0001)  
	SDK_UNDEFINED(1,3463) /* TEnumAsByte<EInterpolationBlend> */ __um(InterpolationType);                          // 0x017D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x017E   (0x0002)  MISSED
	FAxis                                              LookUp_Axis;                                                // 0x0180   (0x0010)  
	float                                              LookAtClamp;                                                // 0x0190   (0x0004)  
	float                                              InterpolationTime;                                          // 0x0194   (0x0004)  
	float                                              InterpolationTriggerThreashold;                             // 0x0198   (0x0004)  
	unsigned char                                      UnknownData02_6[0x34];                                      // 0x019C   (0x0034)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_MakeDynamicAdditive
/// Size: 0x0028 (0x000010 - 0x000038)
struct FAnimNode_MakeDynamicAdditive : FAnimNode_Base
{ 
	FPoseLink                                          Base;                                                       // 0x0010   (0x0010)  
	FPoseLink                                          Additive;                                                   // 0x0020   (0x0010)  
	bool                                               bMeshSpaceAdditive;                                         // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ModifyBone
/// Size: 0x0040 (0x0000D0 - 0x000110)
struct FAnimNode_ModifyBone : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     BoneToModify;                                               // 0x00D0   (0x0014)  
	FVector                                            Translation;                                                // 0x00E4   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x00F0   (0x000C)  
	FVector                                            Scale;                                                      // 0x00FC   (0x000C)  
	SDK_UNDEFINED(1,3464) /* TEnumAsByte<EBoneModificationMode> */ __um(TranslationMode);                          // 0x0108   (0x0001)  
	SDK_UNDEFINED(1,3465) /* TEnumAsByte<EBoneModificationMode> */ __um(RotationMode);                             // 0x0109   (0x0001)  
	SDK_UNDEFINED(1,3466) /* TEnumAsByte<EBoneModificationMode> */ __um(ScaleMode);                                // 0x010A   (0x0001)  
	SDK_UNDEFINED(1,3467) /* TEnumAsByte<EBoneControlSpace> */ __um(TranslationSpace);                             // 0x010B   (0x0001)  
	SDK_UNDEFINED(1,3468) /* TEnumAsByte<EBoneControlSpace> */ __um(RotationSpace);                                // 0x010C   (0x0001)  
	SDK_UNDEFINED(1,3469) /* TEnumAsByte<EBoneControlSpace> */ __um(ScaleSpace);                                   // 0x010D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x010E   (0x0002)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ModifyCurve
/// Size: 0x0048 (0x000010 - 0x000058)
struct FAnimNode_ModifyCurve : FAnimNode_Base
{ 
	FPoseLink                                          SourcePose;                                                 // 0x0010   (0x0010)  
	TArray<float>                                      CurveValues;                                                // 0x0020   (0x0010)  
	TArray<FName>                                      CurveNames;                                                 // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0040   (0x0010)  MISSED
	float                                              alpha;                                                      // 0x0050   (0x0004)  
	EModifyCurveApplyMode                              ApplyMode;                                                  // 0x0054   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0055   (0x0003)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_MultiWayBlend
/// Size: 0x0040 (0x000010 - 0x000050)
struct FAnimNode_MultiWayBlend : FAnimNode_Base
{ 
	TArray<FPoseLink>                                  Poses;                                                      // 0x0010   (0x0010)  
	TArray<float>                                      DesiredAlphas;                                              // 0x0020   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0030   (0x0010)  MISSED
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0040   (0x0008)  
	bool                                               bAdditiveNode;                                              // 0x0048   (0x0001)  
	bool                                               bNormalizeAlpha;                                            // 0x0049   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x004A   (0x0006)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ObserveBone
/// Size: 0x0040 (0x0000D0 - 0x000110)
struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     BoneToObserve;                                              // 0x00D0   (0x0014)  
	SDK_UNDEFINED(1,3470) /* TEnumAsByte<EBoneControlSpace> */ __um(DisplaySpace);                                 // 0x00E4   (0x0001)  
	bool                                               bRelativeToRefPose;                                         // 0x00E5   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00E6   (0x0002)  MISSED
	FVector                                            Translation;                                                // 0x00E8   (0x000C)  
	FRotator                                           Rotation;                                                   // 0x00F4   (0x000C)  
	FVector                                            Scale;                                                      // 0x0100   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x010C   (0x0004)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseHandler
/// Size: 0x0048 (0x000038 - 0x000080)
struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase
{ 
	class UPoseAsset*                                  PoseAsset;                                                  // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0040   (0x0040)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseBlendNode
/// Size: 0x0020 (0x000080 - 0x0000A0)
struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler
{ 
	FPoseLink                                          SourcePose;                                                 // 0x0080   (0x0010)  
	EAlphaBlendOption                                  BlendOption;                                                // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0091   (0x0007)  MISSED
	class UCurveFloat*                                 CustomCurve;                                                // 0x0098   (0x0008)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseByName
/// Size: 0x0020 (0x000080 - 0x0000A0)
struct FAnimNode_PoseByName : FAnimNode_PoseHandler
{ 
	FName                                              PoseName;                                                   // 0x0080   (0x000C)  
	float                                              PoseWeight;                                                 // 0x008C   (0x0004)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0090   (0x0010)  MISSED
};

/// Struct /Script/AnimGraphRuntime.PoseDriverTransform
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPoseDriverTransform
{ 
	FVector                                            TargetTranslation;                                          // 0x0000   (0x000C)  
	FRotator                                           TargetRotation;                                             // 0x000C   (0x000C)  
};

/// Struct /Script/AnimGraphRuntime.PoseDriverTarget
/// Size: 0x00C0 (0x000000 - 0x0000C0)
struct FPoseDriverTarget
{ 
	TArray<FPoseDriverTransform>                       BoneTransforms;                                             // 0x0000   (0x0010)  
	FRotator                                           TargetRotation;                                             // 0x0010   (0x000C)  
	float                                              TargetScale;                                                // 0x001C   (0x0004)  
	ERBFDistanceMethod                                 DistanceMethod;                                             // 0x0020   (0x0001)  
	ERBFFunctionType                                   FunctionType;                                               // 0x0021   (0x0001)  
	bool                                               bApplyCustomCurve;                                          // 0x0022   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0023   (0x0005)  MISSED
	FRichCurve                                         CustomCurve;                                                // 0x0028   (0x0080)  
	FName                                              DrivenName;                                                 // 0x00A8   (0x000C)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00B4   (0x0008)  MISSED
	bool                                               bIsHidden;                                                  // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00BD   (0x0003)  MISSED
};

/// Struct /Script/AnimGraphRuntime.RBFParams
/// Size: 0x002C (0x000000 - 0x00002C)
struct FRBFParams
{ 
	int32_t                                            TargetDimensions;                                           // 0x0000   (0x0004)  
	ERBFSolverType                                     SolverType;                                                 // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              Radius;                                                     // 0x0008   (0x0004)  
	bool                                               bAutomaticRadius;                                           // 0x000C   (0x0001)  
	ERBFFunctionType                                   Function;                                                   // 0x000D   (0x0001)  
	ERBFDistanceMethod                                 DistanceMethod;                                             // 0x000E   (0x0001)  
	SDK_UNDEFINED(1,3471) /* TEnumAsByte<EBoneAxis> */ __um(TwistAxis);                                            // 0x000F   (0x0001)  
	float                                              WeightThreshold;                                            // 0x0010   (0x0004)  
	ERBFNormalizeMethod                                NormalizeMethod;                                            // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	FVector                                            MedianReference;                                            // 0x0018   (0x000C)  
	float                                              MedianMin;                                                  // 0x0024   (0x0004)  
	float                                              MedianMax;                                                  // 0x0028   (0x0004)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseDriver
/// Size: 0x00E8 (0x000080 - 0x000168)
struct FAnimNode_PoseDriver : FAnimNode_PoseHandler
{ 
	FPoseLink                                          SourcePose;                                                 // 0x0080   (0x0010)  
	TArray<FBoneReference>                             SourceBones;                                                // 0x0090   (0x0010)  
	TArray<FBoneReference>                             OnlyDriveBones;                                             // 0x00A0   (0x0010)  
	TArray<FPoseDriverTarget>                          PoseTargets;                                                // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData00_5[0x30];                                      // 0x00C0   (0x0030)  MISSED
	FBoneReference                                     EvalSpaceBone;                                              // 0x00F0   (0x0014)  
	FRBFParams                                         RBFParams;                                                  // 0x0104   (0x002C)  
	EPoseDriverSource                                  DriveSource;                                                // 0x0130   (0x0001)  
	EPoseDriverOutput                                  DriveOutput;                                                // 0x0131   (0x0001)  
	bool                                               bOnlyDriveSelectedBones : 1;                                // 0x0132:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x1];                                       // 0x0133   (0x0001)  MISSED
	int32_t                                            LODThreshold;                                               // 0x0134   (0x0004)  
	unsigned char                                      UnknownData02_6[0x30];                                      // 0x0138   (0x0030)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseSnapshot
/// Size: 0x00A0 (0x000010 - 0x0000B0)
struct FAnimNode_PoseSnapshot : FAnimNode_Base
{ 
	FName                                              SnapshotName;                                               // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FPoseSnapshot                                      Snapshot;                                                   // 0x0020   (0x0040)  
	ESnapshotSourceMode                                Mode;                                                       // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_6[0x4F];                                      // 0x0061   (0x004F)  MISSED
};

/// Struct /Script/AnimGraphRuntime.RandomPlayerSequenceEntry
/// Size: 0x0050 (0x000000 - 0x000050)
struct FRandomPlayerSequenceEntry
{ 
	class UAnimSequence*                               Sequence;                                                   // 0x0000   (0x0008)  
	float                                              ChanceToPlay;                                               // 0x0008   (0x0004)  
	int32_t                                            MinLoopCount;                                               // 0x000C   (0x0004)  
	int32_t                                            MaxLoopCount;                                               // 0x0010   (0x0004)  
	float                                              MinPlayRate;                                                // 0x0014   (0x0004)  
	float                                              MaxPlayRate;                                                // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FAlphaBlend                                        BlendIn;                                                    // 0x0020   (0x0030)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RandomPlayer
/// Size: 0x0068 (0x000010 - 0x000078)
struct FAnimNode_RandomPlayer : FAnimNode_Base
{ 
	TArray<FRandomPlayerSequenceEntry>                 Entries;                                                    // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_5[0x50];                                      // 0x0020   (0x0050)  MISSED
	bool                                               bShuffleMode;                                               // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_MeshSpaceRefPose
/// Size: 0x0000 (0x000010 - 0x000010)
struct FAnimNode_MeshSpaceRefPose : FAnimNode_Base
{ 
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RefPose
/// Size: 0x0008 (0x000010 - 0x000018)
struct FAnimNode_RefPose : FAnimNode_Base
{ 
	SDK_UNDEFINED(1,3472) /* TEnumAsByte<ERefPoseType> */ __um(RefPoseType);                                       // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ResetRoot
/// Size: 0x0010 (0x0000D0 - 0x0000E0)
struct FAnimNode_ResetRoot : FAnimNode_SkeletalControlBase
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00D0   (0x0010)  MISSED
};

/// Struct /Script/AnimGraphRuntime.SimSpaceSettings
/// Size: 0x0040 (0x000000 - 0x000040)
struct FSimSpaceSettings
{ 
	float                                              MasterAlpha;                                                // 0x0000   (0x0004)  
	float                                              VelocityScaleZ;                                             // 0x0004   (0x0004)  
	float                                              MaxLinearVelocity;                                          // 0x0008   (0x0004)  
	float                                              MaxAngularVelocity;                                         // 0x000C   (0x0004)  
	float                                              MaxLinearAcceleration;                                      // 0x0010   (0x0004)  
	float                                              MaxAngularAcceleration;                                     // 0x0014   (0x0004)  
	float                                              ExternalLinearDrag;                                         // 0x0018   (0x0004)  
	FVector                                            ExternalLinearDragV;                                        // 0x001C   (0x000C)  
	FVector                                            ExternalLinearVelocity;                                     // 0x0028   (0x000C)  
	FVector                                            ExternalAngularVelocity;                                    // 0x0034   (0x000C)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RigidBody
/// Size: 0x0780 (0x0000D0 - 0x000850)
struct FAnimNode_RigidBody : FAnimNode_SkeletalControlBase
{ 
	class UPhysicsAsset*                               OverridePhysicsAsset;                                       // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData00_5[0xA0];                                      // 0x00D8   (0x00A0)  MISSED
	FVector                                            OverrideWorldGravity;                                       // 0x0178   (0x000C)  
	FVector                                            ExternalForce;                                              // 0x0184   (0x000C)  
	FVector                                            ComponentLinearAccScale;                                    // 0x0190   (0x000C)  
	FVector                                            ComponentLinearVelScale;                                    // 0x019C   (0x000C)  
	FVector                                            ComponentAppliedLinearAccClamp;                             // 0x01A8   (0x000C)  
	FSimSpaceSettings                                  SimSpaceSettings;                                           // 0x01B4   (0x0040)  
	float                                              CachedBoundsScale;                                          // 0x01F4   (0x0004)  
	FBoneReference                                     BaseBoneRef;                                                // 0x01F8   (0x0014)  
	SDK_UNDEFINED(1,3473) /* TEnumAsByte<ECollisionChannel> */ __um(OverlapChannel);                               // 0x020C   (0x0001)  
	ESimulationSpace                                   SimulationSpace;                                            // 0x020D   (0x0001)  
	bool                                               bForceDisableCollisionBetweenConstraintBodies;              // 0x020E   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x020F   (0x0001)  MISSED
	bool                                               bEnableWorldGeometry : 1;                                   // 0x0210:0 (0x0001)  
	bool                                               bOverrideWorldGravity : 1;                                  // 0x0210:1 (0x0001)  
	bool                                               bTransferBoneVelocities : 1;                                // 0x0210:2 (0x0001)  
	bool                                               bFreezeIncomingPoseOnStart : 1;                             // 0x0210:3 (0x0001)  
	bool                                               bClampLinearTranslationLimitToRefPose : 1;                  // 0x0210:4 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0211   (0x0003)  MISSED
	float                                              WorldSpaceMinimumScale;                                     // 0x0214   (0x0004)  
	float                                              EvaluationResetTime;                                        // 0x0218   (0x0004)  
	unsigned char                                      UnknownData03_6[0x634];                                     // 0x021C   (0x0634)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RotateRootBone
/// Size: 0x0090 (0x000010 - 0x0000A0)
struct FAnimNode_RotateRootBone : FAnimNode_Base
{ 
	FPoseLink                                          BasePose;                                                   // 0x0010   (0x0010)  
	float                                              Pitch;                                                      // 0x0020   (0x0004)  
	float                                              Yaw;                                                        // 0x0024   (0x0004)  
	FInputScaleBiasClamp                               PitchScaleBiasClamp;                                        // 0x0028   (0x0030)  
	FInputScaleBiasClamp                               YawScaleBiasClamp;                                          // 0x0058   (0x0030)  
	FRotator                                           MeshToComponent;                                            // 0x0088   (0x000C)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0094   (0x000C)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RotationMultiplier
/// Size: 0x0030 (0x0000D0 - 0x000100)
struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     TargetBone;                                                 // 0x00D0   (0x0014)  
	FBoneReference                                     SourceBone;                                                 // 0x00E4   (0x0014)  
	float                                              Multiplier;                                                 // 0x00F8   (0x0004)  
	SDK_UNDEFINED(1,3474) /* TEnumAsByte<EBoneAxis> */ __um(RotationAxisToRefer);                                  // 0x00FC   (0x0001)  
	bool                                               bIsAdditive;                                                // 0x00FD   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00FE   (0x0002)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
/// Size: 0x00B0 (0x0000E8 - 0x000198)
struct FAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer
{ 
	FPoseLink                                          BasePose;                                                   // 0x00E8   (0x0010)  
	int32_t                                            LODThreshold;                                               // 0x00F8   (0x0004)  
	float                                              alpha;                                                      // 0x00FC   (0x0004)  
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0100   (0x0008)  
	FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0108   (0x0048)  
	FName                                              AlphaCurveName;                                             // 0x0150   (0x000C)  
	FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x015C   (0x0030)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x018C   (0x0004)  MISSED
	EAnimAlphaInputType                                AlphaInputType;                                             // 0x0190   (0x0001)  
	bool                                               bAlphaBoolEnabled;                                          // 0x0191   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0192   (0x0006)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ScaleChainLength
/// Size: 0x0070 (0x000010 - 0x000080)
struct FAnimNode_ScaleChainLength : FAnimNode_Base
{ 
	FPoseLink                                          InputPose;                                                  // 0x0010   (0x0010)  
	float                                              DefaultChainLength;                                         // 0x0020   (0x0004)  
	FBoneReference                                     ChainStartBone;                                             // 0x0024   (0x0014)  
	FBoneReference                                     ChainEndBone;                                               // 0x0038   (0x0014)  
	FVector                                            targetLocation;                                             // 0x004C   (0x000C)  
	float                                              alpha;                                                      // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0060   (0x0008)  
	EScaleChainInitialLength                           ChainInitialLength;                                         // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_6[0x17];                                      // 0x0069   (0x0017)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SequenceEvaluator
/// Size: 0x0018 (0x000038 - 0x000050)
struct FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase
{ 
	class UAnimSequenceBase*                           Sequence;                                                   // 0x0038   (0x0008)  
	float                                              ExplicitTime;                                               // 0x0040   (0x0004)  
	bool                                               bShouldLoop;                                                // 0x0044   (0x0001)  
	bool                                               bTeleportToExplicitTime;                                    // 0x0045   (0x0001)  
	SDK_UNDEFINED(1,3475) /* TEnumAsByte<ESequenceEvalReinit> */ __um(ReinitializationBehavior);                   // 0x0046   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0047   (0x0001)  MISSED
	float                                              StartPosition;                                              // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Slot
/// Size: 0x0040 (0x000010 - 0x000050)
struct FAnimNode_Slot : FAnimNode_Base
{ 
	FPoseLink                                          Source;                                                     // 0x0010   (0x0010)  
	FName                                              SlotName;                                                   // 0x0020   (0x000C)  
	bool                                               bAlwaysUpdateSourcePose;                                    // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x23];                                      // 0x002D   (0x0023)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SplineIK
/// Size: 0x01B0 (0x0000D0 - 0x000280)
struct FAnimNode_SplineIK : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     StartBone;                                                  // 0x00D0   (0x0014)  
	FBoneReference                                     EndBone;                                                    // 0x00E4   (0x0014)  
	ESplineBoneAxis                                    BoneAxis;                                                   // 0x00F8   (0x0001)  
	bool                                               bAutoCalculateSpline;                                       // 0x00F9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00FA   (0x0002)  MISSED
	int32_t                                            PointCount;                                                 // 0x00FC   (0x0004)  
	TArray<FTransform>                                 ControlPoints;                                              // 0x0100   (0x0010)  
	float                                              Roll;                                                       // 0x0110   (0x0004)  
	float                                              TwistStart;                                                 // 0x0114   (0x0004)  
	float                                              TwistEnd;                                                   // 0x0118   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x011C   (0x0004)  MISSED
	FAlphaBlend                                        TwistBlend;                                                 // 0x0120   (0x0030)  
	float                                              Stretch;                                                    // 0x0150   (0x0004)  
	float                                              Offset;                                                     // 0x0154   (0x0004)  
	unsigned char                                      UnknownData02_6[0x128];                                     // 0x0158   (0x0128)  MISSED
};

/// Struct /Script/AnimGraphRuntime.SplineIKCachedBoneData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSplineIKCachedBoneData
{ 
	FBoneReference                                     Bone;                                                       // 0x0000   (0x0014)  
	int32_t                                            RefSkeletonIndex;                                           // 0x0014   (0x0004)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SpringBone
/// Size: 0x0068 (0x0000D0 - 0x000138)
struct FAnimNode_SpringBone : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     SpringBone;                                                 // 0x00D0   (0x0014)  
	float                                              MaxDisplacement;                                            // 0x00E4   (0x0004)  
	float                                              SpringStiffness;                                            // 0x00E8   (0x0004)  
	float                                              SpringDamping;                                              // 0x00EC   (0x0004)  
	float                                              ErrorResetThresh;                                           // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x3C];                                      // 0x00F4   (0x003C)  MISSED
	bool                                               bLimitDisplacement : 1;                                     // 0x0130:0 (0x0001)  
	bool                                               bTranslateX : 1;                                            // 0x0130:1 (0x0001)  
	bool                                               bTranslateY : 1;                                            // 0x0130:2 (0x0001)  
	bool                                               bTranslateZ : 1;                                            // 0x0130:3 (0x0001)  
	bool                                               bRotateX : 1;                                               // 0x0130:4 (0x0001)  
	bool                                               bRotateY : 1;                                               // 0x0130:5 (0x0001)  
	bool                                               bRotateZ : 1;                                               // 0x0130:6 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0131   (0x0007)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_StateResult
/// Size: 0x0000 (0x000038 - 0x000038)
struct FAnimNode_StateResult : FAnimNode_Root
{ 
};

/// Struct /Script/AnimGraphRuntime.RotationLimit
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRotationLimit
{ 
	FVector                                            LimitMin;                                                   // 0x0000   (0x000C)  
	FVector                                            LimitMax;                                                   // 0x000C   (0x000C)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Trail
/// Size: 0x01A0 (0x0000D0 - 0x000270)
struct FAnimNode_Trail : FAnimNode_SkeletalControlBase
{ 
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x00D0   (0x0030)  MISSED
	FBoneReference                                     TrailBone;                                                  // 0x0100   (0x0014)  
	int32_t                                            ChainLength;                                                // 0x0114   (0x0004)  
	SDK_UNDEFINED(1,3476) /* TEnumAsByte<EAxis> */     __um(ChainBoneAxis);                                        // 0x0118   (0x0001)  
	bool                                               bInvertChainBoneAxis : 1;                                   // 0x0119:0 (0x0001)  
	bool                                               bLimitStretch : 1;                                          // 0x0119:1 (0x0001)  
	bool                                               bLimitRotation : 1;                                         // 0x0119:2 (0x0001)  
	bool                                               bUsePlanarLimit : 1;                                        // 0x0119:3 (0x0001)  
	bool                                               bActorSpaceFakeVel : 1;                                     // 0x0119:4 (0x0001)  
	bool                                               bReorientParentToChild : 1;                                 // 0x0119:5 (0x0001)  
	unsigned char                                      UnknownData01_4[0x2];                                       // 0x011A   (0x0002)  MISSED
	float                                              MaxDeltaTime;                                               // 0x011C   (0x0004)  
	float                                              RelaxationSpeedScale;                                       // 0x0120   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0124   (0x0004)  MISSED
	FRuntimeFloatCurve                                 TrailRelaxationSpeed;                                       // 0x0128   (0x0088)  
	FInputScaleBiasClamp                               RelaxationSpeedScaleInputProcessor;                         // 0x01B0   (0x0030)  
	TArray<FRotationLimit>                             RotationLimits;                                             // 0x01E0   (0x0010)  
	TArray<FVector>                                    RotationOffsets;                                            // 0x01F0   (0x0010)  
	TArray<FAnimPhysPlanarLimit>                       PlanarLimits;                                               // 0x0200   (0x0010)  
	float                                              StretchLimit;                                               // 0x0210   (0x0004)  
	FVector                                            FakeVelocity;                                               // 0x0214   (0x000C)  
	FBoneReference                                     BaseJoint;                                                  // 0x0220   (0x0014)  
	float                                              LastBoneRotationAnimAlphaBlend;                             // 0x0234   (0x0004)  
	unsigned char                                      UnknownData03_6[0x38];                                      // 0x0238   (0x0038)  MISSED
};

/// Struct /Script/AnimGraphRuntime.ReferenceBoneFrame
/// Size: 0x0024 (0x000000 - 0x000024)
struct FReferenceBoneFrame
{ 
	FBoneReference                                     Bone;                                                       // 0x0000   (0x0014)  
	FAxis                                              Axis;                                                       // 0x0014   (0x0010)  
};

/// Struct /Script/AnimGraphRuntime.AnimNode_TwistCorrectiveNode
/// Size: 0x0080 (0x0000D0 - 0x000150)
struct FAnimNode_TwistCorrectiveNode : FAnimNode_SkeletalControlBase
{ 
	FReferenceBoneFrame                                BaseFrame;                                                  // 0x00D0   (0x0024)  
	FReferenceBoneFrame                                TwistFrame;                                                 // 0x00F4   (0x0024)  
	FAxis                                              TwistPlaneNormalAxis;                                       // 0x0118   (0x0010)  
	float                                              RangeMax;                                                   // 0x0128   (0x0004)  
	float                                              RemappedMin;                                                // 0x012C   (0x0004)  
	float                                              RemappedMax;                                                // 0x0130   (0x0004)  
	FAnimCurveParam                                    Curve;                                                      // 0x0134   (0x0010)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0144   (0x000C)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_TwoBoneIK
/// Size: 0x0140 (0x0000D0 - 0x000210)
struct FAnimNode_TwoBoneIK : FAnimNode_SkeletalControlBase
{ 
	FBoneReference                                     IKBone;                                                     // 0x00D0   (0x0014)  
	float                                              StartStretchRatio;                                          // 0x00E4   (0x0004)  
	float                                              MaxStretchScale;                                            // 0x00E8   (0x0004)  
	FVector                                            EffectorLocation;                                           // 0x00EC   (0x000C)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x00F8   (0x0008)  MISSED
	FBoneSocketTarget                                  EffectorTarget;                                             // 0x0100   (0x0070)  
	FVector                                            JointTargetLocation;                                        // 0x0170   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x017C   (0x0004)  MISSED
	FBoneSocketTarget                                  JointTarget;                                                // 0x0180   (0x0070)  
	FAxis                                              TwistAxis;                                                  // 0x01F0   (0x0010)  
	SDK_UNDEFINED(1,3477) /* TEnumAsByte<EBoneControlSpace> */ __um(EffectorLocationSpace);                        // 0x0200   (0x0001)  
	SDK_UNDEFINED(1,3478) /* TEnumAsByte<EBoneControlSpace> */ __um(JointTargetLocationSpace);                     // 0x0201   (0x0001)  
	bool                                               bAllowStretching : 1;                                       // 0x0202:0 (0x0001)  
	bool                                               bTakeRotationFromEffectorSpace : 1;                         // 0x0202:1 (0x0001)  
	bool                                               bMaintainEffectorRelRot : 1;                                // 0x0202:2 (0x0001)  
	bool                                               bAllowTwist : 1;                                            // 0x0202:3 (0x0001)  
	unsigned char                                      UnknownData02_6[0xD];                                       // 0x0203   (0x000D)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimNode_TwoWayBlend
/// Size: 0x00B8 (0x000010 - 0x0000C8)
struct FAnimNode_TwoWayBlend : FAnimNode_Base
{ 
	FPoseLink                                          A;                                                          // 0x0010   (0x0010)  
	FPoseLink                                          B;                                                          // 0x0020   (0x0010)  
	EAnimAlphaInputType                                AlphaInputType;                                             // 0x0030   (0x0001)  
	bool                                               bAlphaBoolEnabled : 1;                                      // 0x0031:0 (0x0001)  
	unsigned char                                      UnknownBit00 : 1;                                           // 0x0031:1 (0x0001)  MISSED
	unsigned char                                      UnknownBit01 : 1;                                           // 0x0031:2 (0x0001)  MISSED
	bool                                               bResetChildOnActivation : 1;                                // 0x0031:3 (0x0001)  
	unsigned char                                      UnknownData02_4[0x2];                                       // 0x0032   (0x0002)  MISSED
	float                                              alpha;                                                      // 0x0034   (0x0004)  
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0038   (0x0008)  
	FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0040   (0x0048)  
	FName                                              AlphaCurveName;                                             // 0x0088   (0x000C)  
	FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x0094   (0x0030)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x00C4   (0x0004)  MISSED
};

/// Struct /Script/AnimGraphRuntime.AnimSequencerInstanceProxy
/// Size: 0x02C0 (0x000770 - 0x000A30)
struct FAnimSequencerInstanceProxy : FAnimInstanceProxy
{ 
	unsigned char                                      UnknownData00_1[0x2C0];                                     // 0x0770   (0x02C0)  MISSED
};

/// Struct /Script/AnimGraphRuntime.PositionHistory
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPositionHistory
{ 
	TArray<FVector>                                    Positions;                                                  // 0x0000   (0x0010)  
	float                                              Range;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x1C];                                      // 0x0014   (0x001C)  MISSED
};

/// Struct /Script/AnimGraphRuntime.RBFEntry
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRBFEntry
{ 
	TArray<float>                                      Values;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/AnimGraphRuntime.RBFTarget
/// Size: 0x0090 (0x000010 - 0x0000A0)
struct FRBFTarget : FRBFEntry
{ 
	float                                              ScaleFactor;                                                // 0x0010   (0x0004)  
	bool                                               bApplyCustomCurve;                                          // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	FRichCurve                                         CustomCurve;                                                // 0x0018   (0x0080)  
	ERBFDistanceMethod                                 DistanceMethod;                                             // 0x0098   (0x0001)  
	ERBFFunctionType                                   FunctionType;                                               // 0x0099   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x009A   (0x0006)  MISSED
};

