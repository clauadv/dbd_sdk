
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/Foliage.EFoliageScaling
/// Size: 0x06
enum class EFoliageScaling : uint8_t
{
	EFoliageScaling__Uniform                                                         = 0,
	EFoliageScaling__Free                                                            = 1,
	EFoliageScaling__LockXY                                                          = 2,
	EFoliageScaling__LockXZ                                                          = 3,
	EFoliageScaling__LockYZ                                                          = 4,
	EFoliageScaling__EFoliageScaling_MAX                                             = 5
};

/// Enum /Script/Foliage.EVertexColorMaskChannel
/// Size: 0x06
enum class EVertexColorMaskChannel : uint8_t
{
	EVertexColorMaskChannel__Red                                                     = 0,
	EVertexColorMaskChannel__Green                                                   = 1,
	EVertexColorMaskChannel__Blue                                                    = 2,
	EVertexColorMaskChannel__Alpha                                                   = 3,
	EVertexColorMaskChannel__MAX_None                                                = 4,
	EVertexColorMaskChannel__EVertexColorMaskChannel_MAX                             = 5
};

/// Enum /Script/Foliage.FoliageVertexColorMask
/// Size: 0x06
enum class FoliageVertexColorMask : uint8_t
{
	FOLIAGEVERTEXCOLORMASK_Disabled                                                  = 0,
	FOLIAGEVERTEXCOLORMASK_Red                                                       = 1,
	FOLIAGEVERTEXCOLORMASK_Green                                                     = 2,
	FOLIAGEVERTEXCOLORMASK_Blue                                                      = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha                                                     = 4,
	FOLIAGEVERTEXCOLORMASK_MAX                                                       = 5
};

/// Enum /Script/Foliage.ESimulationQuery
/// Size: 0x05
enum class ESimulationQuery : uint8_t
{
	ESimulationQuery__None                                                           = 0,
	ESimulationQuery__CollisionOverlap                                               = 1,
	ESimulationQuery__ShadeOverlap                                                   = 2,
	ESimulationQuery__AnyOverlap                                                     = 3,
	ESimulationQuery__ESimulationQuery_MAX                                           = 4
};

/// Enum /Script/Foliage.ESimulationOverlap
/// Size: 0x04
enum class ESimulationOverlap : uint8_t
{
	ESimulationOverlap__CollisionOverlap                                             = 0,
	ESimulationOverlap__ShadeOverlap                                                 = 1,
	ESimulationOverlap__None                                                         = 2,
	ESimulationOverlap__ESimulationOverlap_MAX                                       = 3
};

/// Class /Script/Foliage.FoliageInstancedStaticMeshComponent
/// Size: 0x0030 (0x0006F0 - 0x000720)
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{ 
public:
	SDK_UNDEFINED(16,1499) /* FMulticastInlineDelegate */ __um(OnInstanceTakePointDamage);                         // 0x06E8   (0x0010)  
	SDK_UNDEFINED(16,1500) /* FMulticastInlineDelegate */ __um(OnInstanceTakeRadialDamage);                        // 0x06F8   (0x0010)  
	FGuid                                              GenerationGuid;                                             // 0x0708   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0718   (0x0008)  MISSED
};

/// Class /Script/Foliage.FoliageStatistics
/// Size: 0x0000 (0x000030 - 0x000030)
class UFoliageStatistics : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Foliage.FoliageStatistics.FoliageOverlappingSphereCount
	// int32_t FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, FVector CenterPosition, float Radius); // [0x70168a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Foliage.FoliageStatistics.FoliageOverlappingBoxCount
	// int32_t FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, FBox Box);       // [0x7016760] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/Foliage.FoliageVertexColorChannelMask
/// Size: 0x000C (0x000000 - 0x00000C)
struct FFoliageVertexColorChannelMask
{ 
	bool                                               UseMask : 1;                                                // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MaskThreshold;                                              // 0x0004   (0x0004)  
	bool                                               InvertMask : 1;                                             // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Class /Script/Foliage.FoliageType
/// Size: 0x0390 (0x000030 - 0x0003C0)
class UFoliageType : public UObject
{ 
public:
	FGuid                                              UpdateGuid;                                                 // 0x0030   (0x0010)  
	float                                              Density;                                                    // 0x0040   (0x0004)  
	float                                              DensityAdjustmentFactor;                                    // 0x0044   (0x0004)  
	float                                              Radius;                                                     // 0x0048   (0x0004)  
	bool                                               bSingleInstanceModeOverrideRadius;                          // 0x004C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	float                                              SingleInstanceModeRadius;                                   // 0x0050   (0x0004)  
	EFoliageScaling                                    Scaling;                                                    // 0x0054   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0055   (0x0003)  MISSED
	FFloatInterval                                     ScaleX;                                                     // 0x0058   (0x0008)  
	FFloatInterval                                     ScaleY;                                                     // 0x0060   (0x0008)  
	FFloatInterval                                     ScaleZ;                                                     // 0x0068   (0x0008)  
	FFoliageVertexColorChannelMask                     VertexColorMaskByChannel;                                   // 0x0070   (0x0030)  
	SDK_UNDEFINED(1,1501) /* TEnumAsByte<FoliageVertexColorMask> */ __um(VertexColorMask);                         // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00A1   (0x0003)  MISSED
	float                                              VertexColorMaskThreshold;                                   // 0x00A4   (0x0004)  
	bool                                               VertexColorMaskInvert : 1;                                  // 0x00A8:0 (0x0001)  
	unsigned char                                      UnknownData03_4[0x3];                                       // 0x00A9   (0x0003)  MISSED
	FFloatInterval                                     ZOffset;                                                    // 0x00AC   (0x0008)  
	bool                                               AlignToNormal : 1;                                          // 0x00B4:0 (0x0001)  
	unsigned char                                      UnknownData04_4[0x3];                                       // 0x00B5   (0x0003)  MISSED
	float                                              AlignMaxAngle;                                              // 0x00B8   (0x0004)  
	bool                                               RandomYaw : 1;                                              // 0x00BC:0 (0x0001)  
	unsigned char                                      UnknownData05_4[0x3];                                       // 0x00BD   (0x0003)  MISSED
	float                                              RandomPitchAngle;                                           // 0x00C0   (0x0004)  
	FFloatInterval                                     GroundSlopeAngle;                                           // 0x00C4   (0x0008)  
	FFloatInterval                                     Height;                                                     // 0x00CC   (0x0008)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x00D4   (0x0004)  MISSED
	TArray<FName>                                      LandscapeLayers;                                            // 0x00D8   (0x0010)  
	float                                              MinimumLayerWeight;                                         // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData07_5[0x4];                                       // 0x00EC   (0x0004)  MISSED
	TArray<FName>                                      ExclusionLandscapeLayers;                                   // 0x00F0   (0x0010)  
	float                                              MinimumExclusionLayerWeight;                                // 0x0100   (0x0004)  
	FName                                              LandscapeLayer;                                             // 0x0104   (0x000C)  
	bool                                               CollisionWithWorld : 1;                                     // 0x0110:0 (0x0001)  
	unsigned char                                      UnknownData08_4[0x3];                                       // 0x0111   (0x0003)  MISSED
	FVector                                            CollisionScale;                                             // 0x0114   (0x000C)  
	FBoxSphereBounds                                   MeshBounds;                                                 // 0x0120   (0x001C)  
	FVector                                            LowBoundOriginRadius;                                       // 0x013C   (0x000C)  
	SDK_UNDEFINED(1,1502) /* TEnumAsByte<EComponentMobility> */ __um(Mobility);                                    // 0x0148   (0x0001)  
	unsigned char                                      UnknownData09_5[0x3];                                       // 0x0149   (0x0003)  MISSED
	FInt32Interval                                     CullDistance;                                               // 0x014C   (0x0008)  
	bool                                               bEnableStaticLighting : 1;                                  // 0x0154:0 (0x0001)  
	bool                                               CastShadow : 1;                                             // 0x0154:1 (0x0001)  
	bool                                               bAffectDynamicIndirectLighting : 1;                         // 0x0154:2 (0x0001)  
	bool                                               bAffectDistanceFieldLighting : 1;                           // 0x0154:3 (0x0001)  
	bool                                               bCastDynamicShadow : 1;                                     // 0x0154:4 (0x0001)  
	bool                                               bCastStaticShadow : 1;                                      // 0x0154:5 (0x0001)  
	bool                                               bCastShadowAsTwoSided : 1;                                  // 0x0154:6 (0x0001)  
	bool                                               bReceivesDecals : 1;                                        // 0x0154:7 (0x0001)  
	bool                                               bOverrideLightMapRes : 1;                                   // 0x0155:0 (0x0001)  
	unsigned char                                      UnknownData10_4[0x2];                                       // 0x0156   (0x0002)  MISSED
	int32_t                                            OverriddenLightMapRes;                                      // 0x0158   (0x0004)  
	ELightmapType                                      LightmapType;                                               // 0x015C   (0x0001)  
	unsigned char                                      UnknownData11_5[0x3];                                       // 0x015D   (0x0003)  MISSED
	bool                                               bUseAsOccluder : 1;                                         // 0x0160:0 (0x0001)  
	unsigned char                                      UnknownData12_3[0x3];                                       // 0x0161   (0x0003)  MISSED
	bool                                               bVisibleInRayTracing : 1;                                   // 0x0164:0 (0x0001)  
	bool                                               bEvaluateWorldPositionOffset : 1;                           // 0x0164:1 (0x0001)  
	unsigned char                                      UnknownData13_4[0x3];                                       // 0x0165   (0x0003)  MISSED
	FBodyInstance                                      BodyInstance;                                               // 0x0168   (0x0160)  
	SDK_UNDEFINED(1,1503) /* TEnumAsByte<EHasCustomNavigableGeometry> */ __um(CustomNavigableGeometry);            // 0x02C8   (0x0001)  
	FLightingChannels                                  LightingChannels;                                           // 0x02C9   (0x0001)  
	unsigned char                                      UnknownData14_5[0x2];                                       // 0x02CA   (0x0002)  MISSED
	bool                                               bRenderCustomDepth : 1;                                     // 0x02CC:0 (0x0001)  
	unsigned char                                      UnknownData15_4[0x3];                                       // 0x02CD   (0x0003)  MISSED
	ERendererStencilMask                               CustomDepthStencilWriteMask;                                // 0x02D0   (0x0001)  
	unsigned char                                      UnknownData16_5[0x3];                                       // 0x02D1   (0x0003)  MISSED
	int32_t                                            CustomDepthStencilValue;                                    // 0x02D4   (0x0004)  
	int32_t                                            TranslucencySortPriority;                                   // 0x02D8   (0x0004)  
	float                                              CollisionRadius;                                            // 0x02DC   (0x0004)  
	float                                              ShadeRadius;                                                // 0x02E0   (0x0004)  
	int32_t                                            NumSteps;                                                   // 0x02E4   (0x0004)  
	float                                              InitialSeedDensity;                                         // 0x02E8   (0x0004)  
	float                                              AverageSpreadDistance;                                      // 0x02EC   (0x0004)  
	float                                              SpreadVariance;                                             // 0x02F0   (0x0004)  
	int32_t                                            SeedsPerStep;                                               // 0x02F4   (0x0004)  
	int32_t                                            DistributionSeed;                                           // 0x02F8   (0x0004)  
	float                                              MaxInitialSeedOffset;                                       // 0x02FC   (0x0004)  
	bool                                               bCanGrowInShade;                                            // 0x0300   (0x0001)  
	bool                                               bSpawnsInShade;                                             // 0x0301   (0x0001)  
	unsigned char                                      UnknownData17_5[0x2];                                       // 0x0302   (0x0002)  MISSED
	float                                              MaxInitialAge;                                              // 0x0304   (0x0004)  
	float                                              MaxAge;                                                     // 0x0308   (0x0004)  
	float                                              OverlapPriority;                                            // 0x030C   (0x0004)  
	FFloatInterval                                     ProceduralScale;                                            // 0x0310   (0x0008)  
	FRuntimeFloatCurve                                 ScaleCurve;                                                 // 0x0318   (0x0088)  
	int32_t                                            ChangeCount;                                                // 0x03A0   (0x0004)  
	bool                                               ReapplyDensity : 1;                                         // 0x03A4:0 (0x0001)  
	bool                                               ReapplyRadius : 1;                                          // 0x03A4:1 (0x0001)  
	bool                                               ReapplyAlignToNormal : 1;                                   // 0x03A4:2 (0x0001)  
	bool                                               ReapplyRandomYaw : 1;                                       // 0x03A4:3 (0x0001)  
	bool                                               ReapplyScaling : 1;                                         // 0x03A4:4 (0x0001)  
	bool                                               ReapplyScaleX : 1;                                          // 0x03A4:5 (0x0001)  
	bool                                               ReapplyScaleY : 1;                                          // 0x03A4:6 (0x0001)  
	bool                                               ReapplyScaleZ : 1;                                          // 0x03A4:7 (0x0001)  
	bool                                               ReapplyRandomPitchAngle : 1;                                // 0x03A5:0 (0x0001)  
	bool                                               ReapplyGroundSlope : 1;                                     // 0x03A5:1 (0x0001)  
	bool                                               ReapplyHeight : 1;                                          // 0x03A5:2 (0x0001)  
	bool                                               ReapplyLandscapeLayers : 1;                                 // 0x03A5:3 (0x0001)  
	bool                                               ReapplyZOffset : 1;                                         // 0x03A5:4 (0x0001)  
	bool                                               ReapplyCollisionWithWorld : 1;                              // 0x03A5:5 (0x0001)  
	bool                                               ReapplyVertexColorMask : 1;                                 // 0x03A5:6 (0x0001)  
	bool                                               bEnableDensityScaling : 1;                                  // 0x03A5:7 (0x0001)  
	bool                                               bEnableDiscardOnLoad : 1;                                   // 0x03A6:0 (0x0001)  
	unsigned char                                      UnknownData18_4[0x1];                                       // 0x03A7   (0x0001)  MISSED
	TArray<class URuntimeVirtualTexture*>              RuntimeVirtualTextures;                                     // 0x03A8   (0x0010)  
	int32_t                                            VirtualTextureCullMips;                                     // 0x03B8   (0x0004)  
	ERuntimeVirtualTextureMainPassType                 VirtualTextureRenderPassType;                               // 0x03BC   (0x0001)  
	unsigned char                                      UnknownData19_6[0x3];                                       // 0x03BD   (0x0003)  MISSED
};

/// Class /Script/Foliage.FoliageType_Actor
/// Size: 0x0010 (0x0003C0 - 0x0003D0)
class UFoliageType_Actor : public UFoliageType
{ 
public:
	class UClass*                                      ActorClass;                                                 // 0x03C0   (0x0008)  
	bool                                               bShouldAttachToBaseComponent;                               // 0x03C8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x03C9   (0x0007)  MISSED
};

/// Class /Script/Foliage.FoliageType_InstancedStaticMesh
/// Size: 0x0020 (0x0003C0 - 0x0003E0)
class UFoliageType_InstancedStaticMesh : public UFoliageType
{ 
public:
	class UStaticMesh*                                 Mesh;                                                       // 0x03C0   (0x0008)  
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                          // 0x03C8   (0x0010)  
	class UClass*                                      ComponentClass;                                             // 0x03D8   (0x0008)  
};

/// Class /Script/Foliage.InstancedFoliageActor
/// Size: 0x0050 (0x000230 - 0x000280)
class AInstancedFoliageActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0230   (0x0050)  MISSED
};

/// Class /Script/Foliage.InteractiveFoliageActor
/// Size: 0x0060 (0x000240 - 0x0002A0)
class AInteractiveFoliageActor : public AStaticMeshActor
{ 
public:
	class UCapsuleComponent*                           CapsuleComponent;                                           // 0x0240   (0x0008)  
	FVector                                            TouchingActorEntryPosition;                                 // 0x0248   (0x000C)  
	FVector                                            FoliageVelocity;                                            // 0x0254   (0x000C)  
	FVector                                            FoliageForce;                                               // 0x0260   (0x000C)  
	FVector                                            FoliagePosition;                                            // 0x026C   (0x000C)  
	float                                              FoliageDamageImpulseScale;                                  // 0x0278   (0x0004)  
	float                                              FoliageTouchImpulseScale;                                   // 0x027C   (0x0004)  
	float                                              FoliageStiffness;                                           // 0x0280   (0x0004)  
	float                                              FoliageStiffnessQuadratic;                                  // 0x0284   (0x0004)  
	float                                              FoliageDamping;                                             // 0x0288   (0x0004)  
	float                                              MaxDamageImpulse;                                           // 0x028C   (0x0004)  
	float                                              MaxTouchImpulse;                                            // 0x0290   (0x0004)  
	float                                              MaxForce;                                                   // 0x0294   (0x0004)  
	float                                              Mass;                                                       // 0x0298   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x029C   (0x0004)  MISSED


	/// Functions
	// Function /Script/Foliage.InteractiveFoliageActor.CapsuleTouched
	// void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& OverlapInfo); // [0x7016540] Final|Native|Protected|HasOutParms 
};

/// Class /Script/Foliage.InteractiveFoliageComponent
/// Size: 0x0000 (0x000550 - 0x000550)
class UInteractiveFoliageComponent : public UStaticMeshComponent
{ 
public:
};

/// Class /Script/Foliage.ProceduralFoliageBlockingVolume
/// Size: 0x0008 (0x000268 - 0x000270)
class AProceduralFoliageBlockingVolume : public AVolume
{ 
public:
	class AProceduralFoliageVolume*                    ProceduralFoliageVolume;                                    // 0x0268   (0x0008)  
};

/// Class /Script/Foliage.ProceduralFoliageComponent
/// Size: 0x0028 (0x0000B8 - 0x0000E0)
class UProceduralFoliageComponent : public UActorComponent
{ 
public:
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                             // 0x00B8   (0x0008)  
	float                                              TileOverlap;                                                // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00C4   (0x0004)  MISSED
	class AVolume*                                     SpawningVolume;                                             // 0x00C8   (0x0008)  
	FGuid                                              ProceduralGuid;                                             // 0x00D0   (0x0010)  
};

/// Struct /Script/Foliage.FoliageTypeObject
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFoliageTypeObject
{ 
	class UObject*                                     FoliageTypeObject;                                          // 0x0000   (0x0008)  
	class UFoliageType*                                TypeInstance;                                               // 0x0008   (0x0008)  
	bool                                               bIsAsset;                                                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	class UClass*                                      Type;                                                       // 0x0018   (0x0008)  
};

/// Class /Script/Foliage.ProceduralFoliageSpawner
/// Size: 0x0040 (0x000030 - 0x000070)
class UProceduralFoliageSpawner : public UObject
{ 
public:
	int32_t                                            RandomSeed;                                                 // 0x0030   (0x0004)  
	float                                              TileSize;                                                   // 0x0034   (0x0004)  
	int32_t                                            NumUniqueTiles;                                             // 0x0038   (0x0004)  
	float                                              MinimumQuadTreeSize;                                        // 0x003C   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0040   (0x0008)  MISSED
	TArray<FFoliageTypeObject>                         FoliageTypes;                                               // 0x0048   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0058   (0x0018)  MISSED


	/// Functions
	// Function /Script/Foliage.ProceduralFoliageSpawner.Simulate
	// void Simulate(int32_t NumSteps);                                                                                      // [0x7016a00] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Foliage.ProceduralFoliageInstance
/// Size: 0x0050 (0x000000 - 0x000050)
struct FProceduralFoliageInstance
{ 
	FQuat                                              Rotation;                                                   // 0x0000   (0x0010)  
	FVector                                            Location;                                                   // 0x0010   (0x000C)  
	float                                              Age;                                                        // 0x001C   (0x0004)  
	FVector                                            Normal;                                                     // 0x0020   (0x000C)  
	float                                              Scale;                                                      // 0x002C   (0x0004)  
	class UFoliageType*                                Type;                                                       // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0038   (0x0018)  MISSED
};

/// Class /Script/Foliage.ProceduralFoliageTile
/// Size: 0x0130 (0x000030 - 0x000160)
class UProceduralFoliageTile : public UObject
{ 
public:
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                             // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_5[0xA0];                                      // 0x0038   (0x00A0)  MISSED
	TArray<FProceduralFoliageInstance>                 InstancesArray;                                             // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x78];                                      // 0x00E8   (0x0078)  MISSED
};

/// Class /Script/Foliage.ProceduralFoliageVolume
/// Size: 0x0008 (0x000268 - 0x000270)
class AProceduralFoliageVolume : public AVolume
{ 
public:
	class UProceduralFoliageComponent*                 ProceduralComponent;                                        // 0x0268   (0x0008)  
};

