
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/ClothingSystemRuntimeInterface.ClothConfigBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UClothConfigBase : public UObject
{ 
public:
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothingSimulationFactory
/// Size: 0x0000 (0x000030 - 0x000030)
class UClothingSimulationFactory : public UObject
{ 
public:
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothingInteractor
/// Size: 0x0008 (0x000030 - 0x000038)
class UClothingInteractor : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor
/// Size: 0x0068 (0x000030 - 0x000098)
class UClothingSimulationInteractor : public UObject
{ 
public:
	SDK_UNDEFINED(80,22) /* TMap<FName, UClothingInteractor*> */ __um(ClothingInteractors);                        // 0x0030   (0x0050)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0080   (0x0018)  MISSED


	/// Functions
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumSubsteps
	// void SetNumSubsteps(int32_t NumSubsteps);                                                                             // [0x77fefa0] Native|Public|BlueprintCallable 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumIterations
	// void SetNumIterations(int32_t NumIterations);                                                                         // [0x77fef10] Native|Public|BlueprintCallable 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness
	// void SetAnimDriveSpringStiffness(float InStiffness);                                                                  // [0x77fee80] Native|Public|BlueprintCallable 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated
	// void PhysicsAssetUpdated();                                                                                           // [0x57b62e0] Native|Public|BlueprintCallable 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime
	// float GetSimulationTime();                                                                                            // [0x77fee60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps
	// int32_t GetNumSubsteps();                                                                                             // [0x77fee40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles
	// int32_t GetNumKinematicParticles();                                                                                   // [0x77fee20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations
	// int32_t GetNumIterations();                                                                                           // [0x77fee00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles
	// int32_t GetNumDynamicParticles();                                                                                     // [0x77fede0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths
	// int32_t GetNumCloths();                                                                                               // [0x77fedc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetClothingInteractor
	// class UClothingInteractor* GetClothingInteractor(FString ClothingAssetName);                                          // [0x77fed10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride
	// void EnableGravityOverride(FVector& InVector);                                                                        // [0x77fec80] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride
	// void DisableGravityOverride();                                                                                        // [0x6ae20f0] Native|Public|BlueprintCallable 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated
	// void ClothConfigUpdated();                                                                                            // [0x488ef80] Native|Public|BlueprintCallable 
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UClothSharedSimConfigBase : public UObject
{ 
public:
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothingAssetBase
/// Size: 0x0020 (0x000030 - 0x000050)
class UClothingAssetBase : public UObject
{ 
public:
	SDK_UNDEFINED(16,23) /* FString */                 __um(ImportedFilePath);                                     // 0x0030   (0x0010)  
	FGuid                                              AssetGuid;                                                  // 0x0040   (0x0010)  
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothVertBoneData
/// Size: 0x004C (0x000000 - 0x00004C)
struct FClothVertBoneData
{ 
	int32_t                                            NumInfluences;                                              // 0x0000   (0x0004)  
	uint16_t                                           BoneIndices;                                                // 0x0004   (0x0018)  
	float                                              BoneWeights;                                                // 0x001C   (0x0030)  
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
/// Size: 0x00B8 (0x000030 - 0x0000E8)
class UClothPhysicalMeshDataBase_Legacy : public UObject
{ 
public:
	TArray<FVector>                                    Vertices;                                                   // 0x0030   (0x0010)  
	TArray<FVector>                                    Normals;                                                    // 0x0040   (0x0010)  
	TArray<uint32_t>                                   Indices;                                                    // 0x0050   (0x0010)  
	TArray<float>                                      InverseMasses;                                              // 0x0060   (0x0010)  
	TArray<FClothVertBoneData>                         BoneData;                                                   // 0x0070   (0x0010)  
	int32_t                                            NumFixedVerts;                                              // 0x0080   (0x0004)  
	int32_t                                            MaxBoneWeights;                                             // 0x0084   (0x0004)  
	TArray<uint32_t>                                   SelfCollisionIndices;                                       // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0098   (0x0050)  MISSED
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
/// Size: 0x0014 (0x000000 - 0x000014)
struct FClothCollisionPrim_Sphere
{ 
	int32_t                                            BoneIndex;                                                  // 0x0000   (0x0004)  
	float                                              Radius;                                                     // 0x0004   (0x0004)  
	FVector                                            LocalPosition;                                              // 0x0008   (0x000C)  
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
/// Size: 0x0008 (0x000000 - 0x000008)
struct FClothCollisionPrim_SphereConnection
{ 
	int32_t                                            SphereIndices;                                              // 0x0000   (0x0008)  
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_ConvexFace
/// Size: 0x0020 (0x000000 - 0x000020)
struct FClothCollisionPrim_ConvexFace
{ 
	FPlane                                             Plane;                                                      // 0x0000   (0x0010)  
	TArray<int32_t>                                    Indices;                                                    // 0x0010   (0x0010)  
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
/// Size: 0x0028 (0x000000 - 0x000028)
struct FClothCollisionPrim_Convex
{ 
	TArray<FClothCollisionPrim_ConvexFace>             Faces;                                                      // 0x0000   (0x0010)  
	TArray<FVector>                                    SurfacePoints;                                              // 0x0010   (0x0010)  
	int32_t                                            BoneIndex;                                                  // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Box
/// Size: 0x0030 (0x000000 - 0x000030)
struct FClothCollisionPrim_Box
{ 
	FVector                                            LocalPosition;                                              // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FQuat                                              LocalRotation;                                              // 0x0010   (0x0010)  
	FVector                                            HalfExtents;                                                // 0x0020   (0x000C)  
	int32_t                                            BoneIndex;                                                  // 0x002C   (0x0004)  
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FClothCollisionData
{ 
	TArray<FClothCollisionPrim_Sphere>                 Spheres;                                                    // 0x0000   (0x0010)  
	TArray<FClothCollisionPrim_SphereConnection>       SphereConnections;                                          // 0x0010   (0x0010)  
	TArray<FClothCollisionPrim_Convex>                 Convexes;                                                   // 0x0020   (0x0010)  
	TArray<FClothCollisionPrim_Box>                    Boxes;                                                      // 0x0030   (0x0010)  
};

