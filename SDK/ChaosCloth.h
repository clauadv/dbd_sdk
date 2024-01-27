
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: ClothingSystemRuntimeCommon
/// dependency: ClothingSystemRuntimeInterface
/// dependency: CoreUObject

/// Enum /Script/ChaosCloth.EChaosClothTetherMode
/// Size: 0x05
enum class EChaosClothTetherMode : uint8_t
{
	EChaosClothTetherMode__FastTetherFastLength                                      = 0,
	EChaosClothTetherMode__AccurateTetherFastLength                                  = 1,
	EChaosClothTetherMode__AccurateTetherAccurateLength                              = 2,
	EChaosClothTetherMode__MaxChaosClothTetherMode                                   = 3,
	EChaosClothTetherMode__EChaosClothTetherMode_MAX                                 = 4
};

/// Enum /Script/ChaosCloth.EChaosWeightMapTarget
/// Size: 0x08
enum class EChaosWeightMapTarget : uint8_t
{
	EChaosWeightMapTarget__None                                                      = 0,
	EChaosWeightMapTarget__MaxDistance                                               = 1,
	EChaosWeightMapTarget__BackstopDistance                                          = 2,
	EChaosWeightMapTarget__BackstopRadius                                            = 3,
	EChaosWeightMapTarget__AnimDriveStiffness                                        = 4,
	EChaosWeightMapTarget__AnimDriveDamping                                          = 5,
	EChaosWeightMapTarget__TetherStiffness                                           = 6,
	EChaosWeightMapTarget__EChaosWeightMapTarget_MAX                                 = 7
};

/// Struct /Script/ChaosCloth.ChaosClothWeightedValue
/// Size: 0x0008 (0x000000 - 0x000008)
struct FChaosClothWeightedValue
{ 
	float                                              Low;                                                        // 0x0000   (0x0004)  
	float                                              High;                                                       // 0x0004   (0x0004)  
};

/// Class /Script/ChaosCloth.ChaosClothConfig
/// Size: 0x00A0 (0x000030 - 0x0000D0)
class UChaosClothConfig : public UClothConfigCommon
{ 
public:
	EClothMassMode                                     MassMode;                                                   // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              UniformMass;                                                // 0x0034   (0x0004)  
	float                                              TotalMass;                                                  // 0x0038   (0x0004)  
	float                                              Density;                                                    // 0x003C   (0x0004)  
	float                                              MinPerParticleMass;                                         // 0x0040   (0x0004)  
	float                                              EdgeStiffness;                                              // 0x0044   (0x0004)  
	float                                              BendingStiffness;                                           // 0x0048   (0x0004)  
	bool                                               bUseBendingElements;                                        // 0x004C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	float                                              AreaStiffness;                                              // 0x0050   (0x0004)  
	float                                              VolumeStiffness;                                            // 0x0054   (0x0004)  
	FChaosClothWeightedValue                           TetherStiffness;                                            // 0x0058   (0x0008)  
	float                                              LimitScale;                                                 // 0x0060   (0x0004)  
	bool                                               bUseGeodesicDistance;                                       // 0x0064   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0065   (0x0003)  MISSED
	float                                              ShapeTargetStiffness;                                       // 0x0068   (0x0004)  
	float                                              CollisionThickness;                                         // 0x006C   (0x0004)  
	float                                              FrictionCoefficient;                                        // 0x0070   (0x0004)  
	bool                                               bUseCCD;                                                    // 0x0074   (0x0001)  
	bool                                               bUseSelfCollisions;                                         // 0x0075   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x0076   (0x0002)  MISSED
	float                                              SelfCollisionThickness;                                     // 0x0078   (0x0004)  
	bool                                               bUseLegacyBackstop;                                         // 0x007C   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x007D   (0x0003)  MISSED
	float                                              DampingCoefficient;                                         // 0x0080   (0x0004)  
	bool                                               bUsePointBasedWindModel;                                    // 0x0084   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x0085   (0x0003)  MISSED
	float                                              DragCoefficient;                                            // 0x0088   (0x0004)  
	float                                              LiftCoefficient;                                            // 0x008C   (0x0004)  
	bool                                               bUseGravityOverride;                                        // 0x0090   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x0091   (0x0003)  MISSED
	float                                              GravityScale;                                               // 0x0094   (0x0004)  
	FVector                                            Gravity;                                                    // 0x0098   (0x000C)  
	FChaosClothWeightedValue                           AnimDriveStiffness;                                         // 0x00A4   (0x0008)  
	FChaosClothWeightedValue                           AnimDriveDamping;                                           // 0x00AC   (0x0008)  
	FVector                                            LinearVelocityScale;                                        // 0x00B4   (0x000C)  
	float                                              AngularVelocityScale;                                       // 0x00C0   (0x0004)  
	float                                              FictitiousAngularScale;                                     // 0x00C4   (0x0004)  
	bool                                               bUseTetrahedralConstraints;                                 // 0x00C8   (0x0001)  
	bool                                               bUseThinShellVolumeConstraints;                             // 0x00C9   (0x0001)  
	bool                                               bUseContinuousCollisionDetection;                           // 0x00CA   (0x0001)  
	unsigned char                                      UnknownData07_6[0x5];                                       // 0x00CB   (0x0005)  MISSED
};

/// Class /Script/ChaosCloth.ChaosClothSharedSimConfig
/// Size: 0x0010 (0x000030 - 0x000040)
class UChaosClothSharedSimConfig : public UClothSharedConfigCommon
{ 
public:
	int32_t                                            IterationCount;                                             // 0x0030   (0x0004)  
	int32_t                                            SubdivisionCount;                                           // 0x0034   (0x0004)  
	bool                                               bUseLocalSpaceSimulation;                                   // 0x0038   (0x0001)  
	bool                                               bUseXPBDConstraints;                                        // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x003A   (0x0006)  MISSED
};

/// Class /Script/ChaosCloth.ChaosClothingSimulationFactory
/// Size: 0x0000 (0x000030 - 0x000030)
class UChaosClothingSimulationFactory : public UClothingSimulationFactory
{ 
public:
};

/// Class /Script/ChaosCloth.ChaosClothingInteractor
/// Size: 0x0010 (0x000038 - 0x000048)
class UChaosClothingInteractor : public UClothingInteractor
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0038   (0x0010)  MISSED


	/// Functions
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetVelocityScale
	// void SetVelocityScale(FVector LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale);         // [0x4cb4f50] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetMaterialLinear
	// void SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness);                             // [0x4cb4e30] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachmentLinear
	// void SetLongRangeAttachmentLinear(float TetherStiffness);                                                             // [0x4cb4db0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachment
	// void SetLongRangeAttachment(FVector2D TetherStiffness);                                                               // [0x4cb4d30] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetGravity
	// void SetGravity(float GravityScale, bool bIsGravityOverridden, FVector GravityOverride);                              // [0x4cb4c00] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetDamping
	// void SetDamping(float DampingCoefficient);                                                                            // [0x4cb4b80] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetCollision
	// void SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness);   // [0x4cb4a10] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetAnimDriveLinear
	// void SetAnimDriveLinear(float AnimDriveStiffness);                                                                    // [0x4cb4990] Final|Native|Public|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetAnimDrive
	// void SetAnimDrive(FVector2D AnimDriveStiffness, FVector2D AnimDriveDamping);                                          // [0x4cb48d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.SetAerodynamics
	// void SetAerodynamics(float DragCoefficient, float LiftCoefficient, FVector WindVelocity);                             // [0x4cb47b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ChaosCloth.ChaosClothingInteractor.ResetAndTeleport
	// void ResetAndTeleport(bool bReset, bool bTeleport);                                                                   // [0x4cb46e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ChaosCloth.ChaosClothingSimulationInteractor
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UChaosClothingSimulationInteractor : public UClothingSimulationInteractor
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0098   (0x0010)  MISSED
};

