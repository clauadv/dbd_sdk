
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Chaos
/// dependency: CoreUObject
/// dependency: DeveloperSettings

/// Enum /Script/PhysicsCore.EPhysicalSurface
/// Size: 0x65
enum class EPhysicalSurface : uint8_t
{
	SurfaceType_Default                                                              = 0,
	SurfaceType1                                                                     = 1,
	SurfaceType2                                                                     = 2,
	SurfaceType3                                                                     = 3,
	SurfaceType4                                                                     = 4,
	SurfaceType5                                                                     = 5,
	SurfaceType6                                                                     = 6,
	SurfaceType7                                                                     = 7,
	SurfaceType8                                                                     = 8,
	SurfaceType9                                                                     = 9,
	SurfaceType10                                                                    = 10,
	SurfaceType11                                                                    = 11,
	SurfaceType12                                                                    = 12,
	SurfaceType13                                                                    = 13,
	SurfaceType14                                                                    = 14,
	SurfaceType15                                                                    = 15,
	SurfaceType16                                                                    = 16,
	SurfaceType17                                                                    = 17,
	SurfaceType18                                                                    = 18,
	SurfaceType19                                                                    = 19,
	SurfaceType20                                                                    = 20,
	SurfaceType21                                                                    = 21,
	SurfaceType22                                                                    = 22,
	SurfaceType23                                                                    = 23,
	SurfaceType24                                                                    = 24,
	SurfaceType25                                                                    = 25,
	SurfaceType26                                                                    = 26,
	SurfaceType27                                                                    = 27,
	SurfaceType28                                                                    = 28,
	SurfaceType29                                                                    = 29,
	SurfaceType30                                                                    = 30,
	SurfaceType31                                                                    = 31,
	SurfaceType32                                                                    = 32,
	SurfaceType33                                                                    = 33,
	SurfaceType34                                                                    = 34,
	SurfaceType35                                                                    = 35,
	SurfaceType36                                                                    = 36,
	SurfaceType37                                                                    = 37,
	SurfaceType38                                                                    = 38,
	SurfaceType39                                                                    = 39,
	SurfaceType40                                                                    = 40,
	SurfaceType41                                                                    = 41,
	SurfaceType42                                                                    = 42,
	SurfaceType43                                                                    = 43,
	SurfaceType44                                                                    = 44,
	SurfaceType45                                                                    = 45,
	SurfaceType46                                                                    = 46,
	SurfaceType47                                                                    = 47,
	SurfaceType48                                                                    = 48,
	SurfaceType49                                                                    = 49,
	SurfaceType50                                                                    = 50,
	SurfaceType51                                                                    = 51,
	SurfaceType52                                                                    = 52,
	SurfaceType53                                                                    = 53,
	SurfaceType54                                                                    = 54,
	SurfaceType55                                                                    = 55,
	SurfaceType56                                                                    = 56,
	SurfaceType57                                                                    = 57,
	SurfaceType58                                                                    = 58,
	SurfaceType59                                                                    = 59,
	SurfaceType60                                                                    = 60,
	SurfaceType61                                                                    = 61,
	SurfaceType62                                                                    = 62,
	SurfaceType_Max                                                                  = 63,
	EPhysicalSurface_MAX                                                             = 64
};

/// Enum /Script/PhysicsCore.EBodyCollisionResponse
/// Size: 0x03
enum class EBodyCollisionResponse : uint8_t
{
	EBodyCollisionResponse__BodyCollision_Enabled                                    = 0,
	EBodyCollisionResponse__BodyCollision_Disabled                                   = 1,
	EBodyCollisionResponse__BodyCollision_MAX                                        = 2
};

/// Enum /Script/PhysicsCore.EPhysicsType
/// Size: 0x04
enum class EPhysicsType : uint8_t
{
	PhysType_Default                                                                 = 0,
	PhysType_Kinematic                                                               = 1,
	PhysType_Simulated                                                               = 2,
	PhysType_MAX                                                                     = 3
};

/// Enum /Script/PhysicsCore.ECollisionTraceFlag
/// Size: 0x05
enum class ECollisionTraceFlag : uint8_t
{
	CTF_UseDefault                                                                   = 0,
	CTF_UseSimpleAndComplex                                                          = 1,
	CTF_UseSimpleAsComplex                                                           = 2,
	CTF_UseComplexAsSimple                                                           = 3,
	CTF_MAX                                                                          = 4
};

/// Enum /Script/PhysicsCore.ELinearConstraintMotion
/// Size: 0x04
enum class ELinearConstraintMotion : uint8_t
{
	LCM_Free                                                                         = 0,
	LCM_Limited                                                                      = 1,
	LCM_Locked                                                                       = 2,
	LCM_MAX                                                                          = 3
};

/// Enum /Script/PhysicsCore.EConstraintFrame
/// Size: 0x03
enum class EConstraintFrame : uint8_t
{
	EConstraintFrame__Frame1                                                         = 0,
	EConstraintFrame__Frame2                                                         = 1,
	EConstraintFrame__EConstraintFrame_MAX                                           = 2
};

/// Enum /Script/PhysicsCore.EAngularConstraintMotion
/// Size: 0x04
enum class EAngularConstraintMotion : uint8_t
{
	ACM_Free                                                                         = 0,
	ACM_Limited                                                                      = 1,
	ACM_Locked                                                                       = 2,
	ACM_MAX                                                                          = 3
};

/// Enum /Script/PhysicsCore.ESleepFamily
/// Size: 0x04
enum class ESleepFamily : uint8_t
{
	ESleepFamily__Normal                                                             = 0,
	ESleepFamily__Sensitive                                                          = 1,
	ESleepFamily__Custom                                                             = 2,
	ESleepFamily__ESleepFamily_MAX                                                   = 3
};

/// Enum /Script/PhysicsCore.ERadialImpulseFalloff
/// Size: 0x03
enum class ERadialImpulseFalloff : uint8_t
{
	RIF_Constant                                                                     = 0,
	RIF_Linear                                                                       = 1,
	RIF_MAX                                                                          = 2
};

/// Enum /Script/PhysicsCore.EFrictionCombineMode
/// Size: 0x05
enum class EFrictionCombineMode : uint8_t
{
	EFrictionCombineMode__Average                                                    = 0,
	EFrictionCombineMode__Min                                                        = 1,
	EFrictionCombineMode__Multiply                                                   = 2,
	EFrictionCombineMode__Max                                                        = 3,
	EFrictionCombineMode__EFrictionCombineMode_MAX                                   = 4
};

/// Class /Script/PhysicsCore.BodySetupCore
/// Size: 0x0020 (0x000030 - 0x000050)
class UBodySetupCore : public UObject
{ 
public:
	FName                                              BoneName;                                                   // 0x0030   (0x000C)  
	SDK_UNDEFINED(1,25) /* TEnumAsByte<EPhysicsType> */ __um(PhysicsType);                                         // 0x003C   (0x0001)  
	SDK_UNDEFINED(1,26) /* TEnumAsByte<ECollisionTraceFlag> */ __um(CollisionTraceFlag);                           // 0x003D   (0x0001)  
	SDK_UNDEFINED(1,27) /* TEnumAsByte<EBodyCollisionResponse> */ __um(CollisionReponse);                          // 0x003E   (0x0001)  
	unsigned char                                      UnknownData00_6[0x11];                                      // 0x003F   (0x0011)  MISSED
};

/// Class /Script/PhysicsCore.ChaosPhysicalMaterial
/// Size: 0x0020 (0x000030 - 0x000050)
class UChaosPhysicalMaterial : public UObject
{ 
public:
	float                                              Friction;                                                   // 0x0030   (0x0004)  
	float                                              StaticFriction;                                             // 0x0034   (0x0004)  
	float                                              Restitution;                                                // 0x0038   (0x0004)  
	float                                              LinearEtherDrag;                                            // 0x003C   (0x0004)  
	float                                              AngularEtherDrag;                                           // 0x0040   (0x0004)  
	float                                              SleepingLinearVelocityThreshold;                            // 0x0044   (0x0004)  
	float                                              SleepingAngularVelocityThreshold;                           // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/PhysicsCore.PhysicalMaterial
/// Size: 0x0060 (0x000030 - 0x000090)
class UPhysicalMaterial : public UObject
{ 
public:
	float                                              Friction;                                                   // 0x0030   (0x0004)  
	float                                              StaticFriction;                                             // 0x0034   (0x0004)  
	SDK_UNDEFINED(1,28) /* TEnumAsByte<EFrictionCombineMode> */ __um(FrictionCombineMode);                         // 0x0038   (0x0001)  
	bool                                               bOverrideFrictionCombineMode;                               // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x003A   (0x0002)  MISSED
	float                                              Restitution;                                                // 0x003C   (0x0004)  
	SDK_UNDEFINED(1,29) /* TEnumAsByte<EFrictionCombineMode> */ __um(RestitutionCombineMode);                      // 0x0040   (0x0001)  
	bool                                               bOverrideRestitutionCombineMode;                            // 0x0041   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0042   (0x0002)  MISSED
	float                                              Density;                                                    // 0x0044   (0x0004)  
	float                                              SleepLinearVelocityThreshold;                               // 0x0048   (0x0004)  
	float                                              SleepAngularVelocityThreshold;                              // 0x004C   (0x0004)  
	int32_t                                            SleepCounterThreshold;                                      // 0x0050   (0x0004)  
	float                                              RaiseMassToPower;                                           // 0x0054   (0x0004)  
	float                                              DestructibleDamageThresholdScale;                           // 0x0058   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	class UPhysicalMaterialPropertyBase*               PhysicalMaterialProperty;                                   // 0x0060   (0x0008)  
	SDK_UNDEFINED(1,30) /* TEnumAsByte<EPhysicalSurface> */ __um(SurfaceType);                                     // 0x0068   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0069   (0x0003)  MISSED
	float                                              OcclusionAffect;                                            // 0x006C   (0x0004)  
	bool                                               IgnoreComponentOcclussionAffect;                            // 0x0070   (0x0001)  
	unsigned char                                      UnknownData04_6[0x1F];                                      // 0x0071   (0x001F)  MISSED
};

/// Class /Script/PhysicsCore.PhysicalMaterialPropertyBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UPhysicalMaterialPropertyBase : public UObject
{ 
public:
};

/// Class /Script/PhysicsCore.PhysicsSettingsCore
/// Size: 0x00A8 (0x000048 - 0x0000F0)
class UPhysicsSettingsCore : public UDeveloperSettings
{ 
public:
	float                                              DefaultGravityZ;                                            // 0x0048   (0x0004)  
	float                                              DefaultTerminalVelocity;                                    // 0x004C   (0x0004)  
	float                                              DefaultFluidFriction;                                       // 0x0050   (0x0004)  
	int32_t                                            SimulateScratchMemorySize;                                  // 0x0054   (0x0004)  
	int32_t                                            RagdollAggregateThreshold;                                  // 0x0058   (0x0004)  
	float                                              TriangleMeshTriangleMinAreaThreshold;                       // 0x005C   (0x0004)  
	bool                                               bEnableShapeSharing;                                        // 0x0060   (0x0001)  
	bool                                               bEnablePCM;                                                 // 0x0061   (0x0001)  
	bool                                               bEnableStabilization;                                       // 0x0062   (0x0001)  
	bool                                               bWarnMissingLocks;                                          // 0x0063   (0x0001)  
	bool                                               bEnable2DPhysics;                                           // 0x0064   (0x0001)  
	bool                                               bDefaultHasComplexCollision;                                // 0x0065   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0066   (0x0002)  MISSED
	float                                              BounceThresholdVelocity;                                    // 0x0068   (0x0004)  
	SDK_UNDEFINED(1,31) /* TEnumAsByte<EFrictionCombineMode> */ __um(FrictionCombineMode);                         // 0x006C   (0x0001)  
	SDK_UNDEFINED(1,32) /* TEnumAsByte<EFrictionCombineMode> */ __um(RestitutionCombineMode);                      // 0x006D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x006E   (0x0002)  MISSED
	float                                              MaxAngularVelocity;                                         // 0x0070   (0x0004)  
	float                                              MaxDepenetrationVelocity;                                   // 0x0074   (0x0004)  
	float                                              ContactOffsetMultiplier;                                    // 0x0078   (0x0004)  
	float                                              MinContactOffset;                                           // 0x007C   (0x0004)  
	float                                              MaxContactOffset;                                           // 0x0080   (0x0004)  
	bool                                               bSimulateSkeletalMeshOnDedicatedServer;                     // 0x0084   (0x0001)  
	SDK_UNDEFINED(1,33) /* TEnumAsByte<ECollisionTraceFlag> */ __um(DefaultShapeComplexity);                       // 0x0085   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0086   (0x0002)  MISSED
	FChaosSolverConfiguration                          SolverOptions;                                              // 0x0088   (0x0068)  
};

/// Struct /Script/PhysicsCore.BodyInstanceCore
/// Size: 0x0018 (0x000000 - 0x000018)
struct FBodyInstanceCore
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
	bool                                               bSimulatePhysics : 1;                                       // 0x0010:0 (0x0001)  
	bool                                               bOverrideMass : 1;                                          // 0x0010:1 (0x0001)  
	bool                                               bEnableGravity : 1;                                         // 0x0010:2 (0x0001)  
	bool                                               bAutoWeld : 1;                                              // 0x0010:3 (0x0001)  
	bool                                               bStartAwake : 1;                                            // 0x0010:4 (0x0001)  
	bool                                               bGenerateWakeEvents : 1;                                    // 0x0010:5 (0x0001)  
	bool                                               bUpdateMassWhenScaleChanges : 1;                            // 0x0010:6 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

