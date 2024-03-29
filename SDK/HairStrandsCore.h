
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GeometryCache
/// dependency: MovieScene
/// dependency: Niagara
/// dependency: NiagaraCore

/// Enum /Script/HairStrandsCore.EHairCardsSourceType
/// Size: 0x03
enum class EHairCardsSourceType : uint8_t
{
	EHairCardsSourceType__Procedural                                                 = 0,
	EHairCardsSourceType__Imported                                                   = 1,
	EHairCardsSourceType__EHairCardsSourceType_MAX                                   = 2
};

/// Enum /Script/HairStrandsCore.EHairCardsGenerationType
/// Size: 0x03
enum class EHairCardsGenerationType : uint8_t
{
	EHairCardsGenerationType__CardsCount                                             = 0,
	EHairCardsGenerationType__UseGuides                                              = 1,
	EHairCardsGenerationType__EHairCardsGenerationType_MAX                           = 2
};

/// Enum /Script/HairStrandsCore.EHairCardsClusterType
/// Size: 0x03
enum class EHairCardsClusterType : uint8_t
{
	EHairCardsClusterType__Low                                                       = 0,
	EHairCardsClusterType__High                                                      = 1,
	EHairCardsClusterType__EHairCardsClusterType_MAX                                 = 2
};

/// Enum /Script/HairStrandsCore.EGroomGeometryType
/// Size: 0x04
enum class EGroomGeometryType : uint8_t
{
	EGroomGeometryType__Strands                                                      = 0,
	EGroomGeometryType__Cards                                                        = 1,
	EGroomGeometryType__Meshes                                                       = 2,
	EGroomGeometryType__EGroomGeometryType_MAX                                       = 3
};

/// Enum /Script/HairStrandsCore.EHairLODSelectionType
/// Size: 0x03
enum class EHairLODSelectionType : uint8_t
{
	EHairLODSelectionType__Cpu                                                       = 0,
	EHairLODSelectionType__Gpu                                                       = 1,
	EHairLODSelectionType__EHairLODSelectionType_MAX                                 = 2
};

/// Enum /Script/HairStrandsCore.EHairInterpolationWeight
/// Size: 0x05
enum class EHairInterpolationWeight : uint8_t
{
	EHairInterpolationWeight__Parametric                                             = 0,
	EHairInterpolationWeight__Root                                                   = 1,
	EHairInterpolationWeight__Index                                                  = 2,
	EHairInterpolationWeight__Unknown                                                = 3,
	EHairInterpolationWeight__EHairInterpolationWeight_MAX                           = 4
};

/// Enum /Script/HairStrandsCore.EHairInterpolationQuality
/// Size: 0x05
enum class EHairInterpolationQuality : uint8_t
{
	EHairInterpolationQuality__Low                                                   = 0,
	EHairInterpolationQuality__Medium                                                = 1,
	EHairInterpolationQuality__High                                                  = 2,
	EHairInterpolationQuality__Unknown                                               = 3,
	EHairInterpolationQuality__EHairInterpolationQuality_MAX                         = 4
};

/// Enum /Script/HairStrandsCore.EGroomInterpolationType
/// Size: 0x05
enum class EGroomInterpolationType : uint8_t
{
	EGroomInterpolationType__None                                                    = 0,
	EGroomInterpolationType__RigidTransform                                          = 2,
	EGroomInterpolationType__OffsetTransform                                         = 4,
	EGroomInterpolationType__SmoothTransform                                         = 8,
	EGroomInterpolationType__EGroomInterpolationType_MAX                             = 9
};

/// Enum /Script/HairStrandsCore.EGroomStrandsSize
/// Size: 0x07
enum class EGroomStrandsSize : uint8_t
{
	EGroomStrandsSize__None                                                          = 0,
	EGroomStrandsSize__Size2                                                         = 2,
	EGroomStrandsSize__Size4                                                         = 4,
	EGroomStrandsSize__Size8                                                         = 8,
	EGroomStrandsSize__Size16                                                        = 16,
	EGroomStrandsSize__Size32                                                        = 32,
	EGroomStrandsSize__EGroomStrandsSize_MAX                                         = 33
};

/// Enum /Script/HairStrandsCore.EGroomNiagaraSolvers
/// Size: 0x05
enum class EGroomNiagaraSolvers : uint8_t
{
	EGroomNiagaraSolvers__None                                                       = 0,
	EGroomNiagaraSolvers__CosseratRods                                               = 2,
	EGroomNiagaraSolvers__AngularSprings                                             = 4,
	EGroomNiagaraSolvers__CustomSolver                                               = 8,
	EGroomNiagaraSolvers__EGroomNiagaraSolvers_MAX                                   = 9
};

/// Enum /Script/HairStrandsCore.EGroomBindingMeshType
/// Size: 0x03
enum class EGroomBindingMeshType : uint8_t
{
	EGroomBindingMeshType__SkeletalMesh                                              = 0,
	EGroomBindingMeshType__GeometryCache                                             = 1,
	EGroomBindingMeshType__EGroomBindingMeshType_MAX                                 = 2
};

/// Enum /Script/HairStrandsCore.EGroomCacheType
/// Size: 0x04
enum class EGroomCacheType : uint8_t
{
	EGroomCacheType__None                                                            = 0,
	EGroomCacheType__Strands                                                         = 1,
	EGroomCacheType__Guides                                                          = 2,
	EGroomCacheType__EGroomCacheType_MAX                                             = 3
};

/// Enum /Script/HairStrandsCore.EGroomCacheAttributes
/// Size: 0x05
enum class EGroomCacheAttributes : uint8_t
{
	EGroomCacheAttributes__None                                                      = 0,
	EGroomCacheAttributes__Position                                                  = 1,
	EGroomCacheAttributes__Width                                                     = 2,
	EGroomCacheAttributes__Color                                                     = 4,
	EGroomCacheAttributes__EGroomCacheAttributes_MAX                                 = 5
};

/// Enum /Script/HairStrandsCore.EFollicleMaskChannel
/// Size: 0x05
enum class EFollicleMaskChannel : uint8_t
{
	EFollicleMaskChannel__R                                                          = 0,
	EFollicleMaskChannel__G                                                          = 1,
	EFollicleMaskChannel__B                                                          = 2,
	EFollicleMaskChannel__A                                                          = 3,
	EFollicleMaskChannel__EFollicleMaskChannel_MAX                                   = 4
};

/// Enum /Script/HairStrandsCore.EStrandsTexturesMeshType
/// Size: 0x03
enum class EStrandsTexturesMeshType : uint8_t
{
	EStrandsTexturesMeshType__Static                                                 = 0,
	EStrandsTexturesMeshType__Skeletal                                               = 1,
	EStrandsTexturesMeshType__EStrandsTexturesMeshType_MAX                           = 2
};

/// Enum /Script/HairStrandsCore.EStrandsTexturesTraceType
/// Size: 0x04
enum class EStrandsTexturesTraceType : uint8_t
{
	EStrandsTexturesTraceType__TraceInside                                           = 0,
	EStrandsTexturesTraceType__TraceOuside                                           = 1,
	EStrandsTexturesTraceType__TraceBidirectional                                    = 2,
	EStrandsTexturesTraceType__EStrandsTexturesTraceType_MAX                         = 3
};

/// Enum /Script/HairStrandsCore.EGroomInterpolationWeight
/// Size: 0x05
enum class EGroomInterpolationWeight : uint8_t
{
	EGroomInterpolationWeight__Parametric                                            = 0,
	EGroomInterpolationWeight__Root                                                  = 1,
	EGroomInterpolationWeight__Index                                                 = 2,
	EGroomInterpolationWeight__Unknown                                               = 3,
	EGroomInterpolationWeight__EGroomInterpolationWeight_MAX                         = 4
};

/// Enum /Script/HairStrandsCore.EGroomInterpolationQuality
/// Size: 0x05
enum class EGroomInterpolationQuality : uint8_t
{
	EGroomInterpolationQuality__Low                                                  = 0,
	EGroomInterpolationQuality__Medium                                               = 1,
	EGroomInterpolationQuality__High                                                 = 2,
	EGroomInterpolationQuality__Unknown                                              = 3,
	EGroomInterpolationQuality__EGroomInterpolationQuality_MAX                       = 4
};

/// Class /Script/HairStrandsCore.GroomActor
/// Size: 0x0008 (0x000230 - 0x000238)
class AGroomActor : public AActor
{ 
public:
	class UGroomComponent*                             GroomComponent;                                             // 0x0230   (0x0008)  
};

/// Struct /Script/HairStrandsCore.HairGroupInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FHairGroupInfo
{ 
	int32_t                                            GroupID;                                                    // 0x0000   (0x0004)  
	int32_t                                            NumCurves;                                                  // 0x0004   (0x0004)  
	int32_t                                            NumGuides;                                                  // 0x0008   (0x0004)  
	int32_t                                            NumCurveVertices;                                           // 0x000C   (0x0004)  
	int32_t                                            NumGuideVertices;                                           // 0x0010   (0x0004)  
	float                                              MaxCurveLength;                                             // 0x0014   (0x0004)  
};

/// Struct /Script/HairStrandsCore.HairGroupInfoWithVisibility
/// Size: 0x0004 (0x000018 - 0x00001C)
struct FHairGroupInfoWithVisibility : FHairGroupInfo
{ 
	bool                                               bIsVisible;                                                 // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
};

/// Struct /Script/HairStrandsCore.HairGeometrySettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FHairGeometrySettings
{ 
	float                                              HairWidth;                                                  // 0x0000   (0x0004)  
	float                                              HairRootScale;                                              // 0x0004   (0x0004)  
	float                                              HairTipScale;                                               // 0x0008   (0x0004)  
	float                                              HairClipScale;                                              // 0x000C   (0x0004)  
};

/// Struct /Script/HairStrandsCore.HairShadowSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FHairShadowSettings
{ 
	float                                              HairShadowDensity;                                          // 0x0000   (0x0004)  
	float                                              HairRaytracingRadiusScale;                                  // 0x0004   (0x0004)  
	bool                                               bUseHairRaytracingGeometry;                                 // 0x0008   (0x0001)  
	bool                                               bVoxelize;                                                  // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000A   (0x0002)  MISSED
};

/// Struct /Script/HairStrandsCore.HairAdvancedRenderingSettings
/// Size: 0x0002 (0x000000 - 0x000002)
struct FHairAdvancedRenderingSettings
{ 
	bool                                               bUseStableRasterization;                                    // 0x0000   (0x0001)  
	bool                                               bScatterSceneLighting;                                      // 0x0001   (0x0001)  
};

/// Struct /Script/HairStrandsCore.HairGroupsRendering
/// Size: 0x0038 (0x000000 - 0x000038)
struct FHairGroupsRendering
{ 
	FName                                              MaterialSlotName;                                           // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UMaterialInterface*                          Material;                                                   // 0x0010   (0x0008)  
	FHairGeometrySettings                              GeometrySettings;                                           // 0x0018   (0x0010)  
	FHairShadowSettings                                ShadowSettings;                                             // 0x0028   (0x000C)  
	FHairAdvancedRenderingSettings                     AdvancedSettings;                                           // 0x0034   (0x0002)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0036   (0x0002)  MISSED
};

/// Struct /Script/HairStrandsCore.HairSolverSettings
/// Size: 0x0040 (0x000000 - 0x000040)
struct FHairSolverSettings
{ 
	bool                                               EnableSimulation;                                           // 0x0000   (0x0001)  
	EGroomNiagaraSolvers                               NiagaraSolver;                                              // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	SDK_UNDEFINED(48,5054) /* TWeakObjectPtr<UNiagaraSystem*> */ __um(CustomSystem);                               // 0x0008   (0x0030)  
	int32_t                                            SubSteps;                                                   // 0x0038   (0x0004)  
	int32_t                                            IterationCount;                                             // 0x003C   (0x0004)  
};

/// Struct /Script/HairStrandsCore.HairExternalForces
/// Size: 0x001C (0x000000 - 0x00001C)
struct FHairExternalForces
{ 
	FVector                                            GravityVector;                                              // 0x0000   (0x000C)  
	float                                              AirDrag;                                                    // 0x000C   (0x0004)  
	FVector                                            AirVelocity;                                                // 0x0010   (0x000C)  
};

/// Struct /Script/HairStrandsCore.HairBendConstraint
/// Size: 0x0098 (0x000000 - 0x000098)
struct FHairBendConstraint
{ 
	bool                                               SolveBend;                                                  // 0x0000   (0x0001)  
	bool                                               ProjectBend;                                                // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              BendDamping;                                                // 0x0004   (0x0004)  
	float                                              BendStiffness;                                              // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FRuntimeFloatCurve                                 BendScale;                                                  // 0x0010   (0x0088)  
};

/// Struct /Script/HairStrandsCore.HairStretchConstraint
/// Size: 0x0098 (0x000000 - 0x000098)
struct FHairStretchConstraint
{ 
	bool                                               SolveStretch;                                               // 0x0000   (0x0001)  
	bool                                               ProjectStretch;                                             // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              StretchDamping;                                             // 0x0004   (0x0004)  
	float                                              StretchStiffness;                                           // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FRuntimeFloatCurve                                 StretchScale;                                               // 0x0010   (0x0088)  
};

/// Struct /Script/HairStrandsCore.HairCollisionConstraint
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FHairCollisionConstraint
{ 
	bool                                               SolveCollision;                                             // 0x0000   (0x0001)  
	bool                                               ProjectCollision;                                           // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              StaticFriction;                                             // 0x0004   (0x0004)  
	float                                              KineticFriction;                                            // 0x0008   (0x0004)  
	float                                              StrandsViscosity;                                           // 0x000C   (0x0004)  
	FIntVector                                         GridDimension;                                              // 0x0010   (0x000C)  
	float                                              CollisionRadius;                                            // 0x001C   (0x0004)  
	FRuntimeFloatCurve                                 RadiusScale;                                                // 0x0020   (0x0088)  
};

/// Struct /Script/HairStrandsCore.HairMaterialConstraints
/// Size: 0x01D8 (0x000000 - 0x0001D8)
struct FHairMaterialConstraints
{ 
	FHairBendConstraint                                BendConstraint;                                             // 0x0000   (0x0098)  
	FHairStretchConstraint                             StretchConstraint;                                          // 0x0098   (0x0098)  
	FHairCollisionConstraint                           CollisionConstraint;                                        // 0x0130   (0x00A8)  
};

/// Struct /Script/HairStrandsCore.HairStrandsParameters
/// Size: 0x0098 (0x000000 - 0x000098)
struct FHairStrandsParameters
{ 
	EGroomStrandsSize                                  StrandsSize;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              StrandsDensity;                                             // 0x0004   (0x0004)  
	float                                              StrandsSmoothing;                                           // 0x0008   (0x0004)  
	float                                              StrandsThickness;                                           // 0x000C   (0x0004)  
	FRuntimeFloatCurve                                 ThicknessScale;                                             // 0x0010   (0x0088)  
};

/// Struct /Script/HairStrandsCore.HairGroupsPhysics
/// Size: 0x02D0 (0x000000 - 0x0002D0)
struct FHairGroupsPhysics
{ 
	FHairSolverSettings                                SolverSettings;                                             // 0x0000   (0x0040)  
	FHairExternalForces                                ExternalForces;                                             // 0x0040   (0x001C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	FHairMaterialConstraints                           MaterialConstraints;                                        // 0x0060   (0x01D8)  
	FHairStrandsParameters                             StrandsParameters;                                          // 0x0238   (0x0098)  
};

/// Struct /Script/HairStrandsCore.HairDecimationSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FHairDecimationSettings
{ 
	float                                              CurveDecimation;                                            // 0x0000   (0x0004)  
	float                                              VertexDecimation;                                           // 0x0004   (0x0004)  
};

/// Struct /Script/HairStrandsCore.HairInterpolationSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FHairInterpolationSettings
{ 
	bool                                               bOverrideGuides;                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              HairToGuideDensity;                                         // 0x0004   (0x0004)  
	EHairInterpolationQuality                          InterpolationQuality;                                       // 0x0008   (0x0001)  
	EHairInterpolationWeight                           InterpolationDistance;                                      // 0x0009   (0x0001)  
	bool                                               bRandomizeGuide;                                            // 0x000A   (0x0001)  
	bool                                               bUseUniqueGuide;                                            // 0x000B   (0x0001)  
};

/// Struct /Script/HairStrandsCore.HairGroupsInterpolation
/// Size: 0x0014 (0x000000 - 0x000014)
struct FHairGroupsInterpolation
{ 
	FHairDecimationSettings                            DecimationSettings;                                         // 0x0000   (0x0008)  
	FHairInterpolationSettings                         InterpolationSettings;                                      // 0x0008   (0x000C)  
};

/// Struct /Script/HairStrandsCore.HairLODSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FHairLODSettings
{ 
	float                                              CurveDecimation;                                            // 0x0000   (0x0004)  
	float                                              VertexDecimation;                                           // 0x0004   (0x0004)  
	float                                              AngularThreshold;                                           // 0x0008   (0x0004)  
	float                                              ScreenSize;                                                 // 0x000C   (0x0004)  
	float                                              ThicknessScale;                                             // 0x0010   (0x0004)  
	bool                                               bVisible;                                                   // 0x0014   (0x0001)  
	EGroomGeometryType                                 GeometryType;                                               // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0016   (0x0002)  MISSED
};

/// Struct /Script/HairStrandsCore.HairGroupsLOD
/// Size: 0x0018 (0x000000 - 0x000018)
struct FHairGroupsLOD
{ 
	TArray<FHairLODSettings>                           LODs;                                                       // 0x0000   (0x0010)  
	float                                              ClusterWorldSize;                                           // 0x0010   (0x0004)  
	float                                              ClusterScreenSizeScale;                                     // 0x0014   (0x0004)  
};

/// Struct /Script/HairStrandsCore.HairCardsClusterSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FHairCardsClusterSettings
{ 
	float                                              ClusterDecimation;                                          // 0x0000   (0x0004)  
	EHairCardsClusterType                              Type;                                                       // 0x0004   (0x0001)  
	bool                                               bUseGuide;                                                  // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0006   (0x0002)  MISSED
};

/// Struct /Script/HairStrandsCore.HairCardsGeometrySettings
/// Size: 0x001C (0x000000 - 0x00001C)
struct FHairCardsGeometrySettings
{ 
	EHairCardsGenerationType                           GenerationType;                                             // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            CardsCount;                                                 // 0x0004   (0x0004)  
	EHairCardsClusterType                              ClusterType;                                                // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              MinSegmentLength;                                           // 0x000C   (0x0004)  
	float                                              AngularThreshold;                                           // 0x0010   (0x0004)  
	float                                              MinCardsLength;                                             // 0x0014   (0x0004)  
	float                                              MaxCardsLength;                                             // 0x0018   (0x0004)  
};

/// Struct /Script/HairStrandsCore.HairCardsTextureSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FHairCardsTextureSettings
{ 
	int32_t                                            AtlasMaxResolution;                                         // 0x0000   (0x0004)  
	int32_t                                            PixelPerCentimeters;                                        // 0x0004   (0x0004)  
	int32_t                                            LengthTextureCount;                                         // 0x0008   (0x0004)  
	int32_t                                            DensityTextureCount;                                        // 0x000C   (0x0004)  
};

/// Struct /Script/HairStrandsCore.HairGroupsProceduralCards
/// Size: 0x0038 (0x000000 - 0x000038)
struct FHairGroupsProceduralCards
{ 
	FHairCardsClusterSettings                          ClusterSettings;                                            // 0x0000   (0x0008)  
	FHairCardsGeometrySettings                         GeometrySettings;                                           // 0x0008   (0x001C)  
	FHairCardsTextureSettings                          TextureSettings;                                            // 0x0024   (0x0010)  
	int32_t                                            Version;                                                    // 0x0034   (0x0004)  
};

/// Struct /Script/HairStrandsCore.HairGroupCardsTextures
/// Size: 0x0030 (0x000000 - 0x000030)
struct FHairGroupCardsTextures
{ 
	class UTexture2D*                                  DepthTexture;                                               // 0x0000   (0x0008)  
	class UTexture2D*                                  CoverageTexture;                                            // 0x0008   (0x0008)  
	class UTexture2D*                                  TangentTexture;                                             // 0x0010   (0x0008)  
	class UTexture2D*                                  AttributeTexture;                                           // 0x0018   (0x0008)  
	class UTexture2D*                                  AuxilaryDataTexture;                                        // 0x0020   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Struct /Script/HairStrandsCore.HairGroupCardsInfo
/// Size: 0x0008 (0x000000 - 0x000008)
struct FHairGroupCardsInfo
{ 
	int32_t                                            NumCards;                                                   // 0x0000   (0x0004)  
	int32_t                                            NumCardVertices;                                            // 0x0004   (0x0004)  
};

/// Struct /Script/HairStrandsCore.HairGroupsCardsSourceDescription
/// Size: 0x00C0 (0x000000 - 0x0000C0)
struct FHairGroupsCardsSourceDescription
{ 
	class UMaterialInterface*                          Material;                                                   // 0x0000   (0x0008)  
	FName                                              MaterialSlotName;                                           // 0x0008   (0x000C)  
	EHairCardsSourceType                               SourceType;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	class UStaticMesh*                                 ProceduralMesh;                                             // 0x0018   (0x0008)  
	SDK_UNDEFINED(16,5055) /* FString */               __um(ProceduralMeshKey);                                    // 0x0020   (0x0010)  
	class UStaticMesh*                                 ImportedMesh;                                               // 0x0030   (0x0008)  
	FHairGroupsProceduralCards                         ProceduralSettings;                                         // 0x0038   (0x0038)  
	FHairGroupCardsTextures                            Textures;                                                   // 0x0070   (0x0030)  
	int32_t                                            GroupIndex;                                                 // 0x00A0   (0x0004)  
	int32_t                                            LODIndex;                                                   // 0x00A4   (0x0004)  
	FHairGroupCardsInfo                                CardsInfo;                                                  // 0x00A8   (0x0008)  
	SDK_UNDEFINED(16,5056) /* FString */               __um(ImportedMeshKey);                                      // 0x00B0   (0x0010)  
};

/// Struct /Script/HairStrandsCore.HairGroupsMeshesSourceDescription
/// Size: 0x0068 (0x000000 - 0x000068)
struct FHairGroupsMeshesSourceDescription
{ 
	class UMaterialInterface*                          Material;                                                   // 0x0000   (0x0008)  
	FName                                              MaterialSlotName;                                           // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	class UStaticMesh*                                 ImportedMesh;                                               // 0x0018   (0x0008)  
	FHairGroupCardsTextures                            Textures;                                                   // 0x0020   (0x0030)  
	int32_t                                            GroupIndex;                                                 // 0x0050   (0x0004)  
	int32_t                                            LODIndex;                                                   // 0x0054   (0x0004)  
	SDK_UNDEFINED(16,5057) /* FString */               __um(ImportedMeshKey);                                      // 0x0058   (0x0010)  
};

/// Struct /Script/HairStrandsCore.HairGroupsMaterial
/// Size: 0x0018 (0x000000 - 0x000018)
struct FHairGroupsMaterial
{ 
	class UMaterialInterface*                          Material;                                                   // 0x0000   (0x0008)  
	FName                                              SlotName;                                                   // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/HairStrandsCore.GroomAsset
/// Size: 0x00D0 (0x000030 - 0x000100)
class UGroomAsset : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	TArray<FHairGroupInfoWithVisibility>               HairGroupsInfo;                                             // 0x0038   (0x0010)  
	TArray<FHairGroupsRendering>                       HairGroupsRendering;                                        // 0x0048   (0x0010)  
	TArray<FHairGroupsPhysics>                         HairGroupsPhysics;                                          // 0x0058   (0x0010)  
	TArray<FHairGroupsInterpolation>                   HairGroupsInterpolation;                                    // 0x0068   (0x0010)  
	TArray<FHairGroupsLOD>                             HairGroupsLOD;                                              // 0x0078   (0x0010)  
	TArray<FHairGroupsCardsSourceDescription>          HairGroupsCards;                                            // 0x0088   (0x0010)  
	TArray<FHairGroupsMeshesSourceDescription>         HairGroupsMeshes;                                           // 0x0098   (0x0010)  
	TArray<FHairGroupsMaterial>                        HairGroupsMaterials;                                        // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x00B8   (0x0010)  MISSED
	bool                                               EnableGlobalInterpolation;                                  // 0x00C8   (0x0001)  
	EGroomInterpolationType                            HairInterpolationType;                                      // 0x00C9   (0x0001)  
	EHairLODSelectionType                              LODSelectionType;                                           // 0x00CA   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x00CB   (0x0001)  MISSED
	FPerPlatformInt                                    MinLOD;                                                     // 0x00CC   (0x0004)  
	FPerPlatformBool                                   DisableBelowMinLodStripping;                                // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x00D1   (0x0007)  MISSED
	TArray<float>                                      EffectiveLODBias;                                           // 0x00D8   (0x0010)  
	TArray<class UAssetUserData*>                      AssetUserData;                                              // 0x00E8   (0x0010)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x00F8   (0x0008)  MISSED
};

/// Class /Script/HairStrandsCore.GroomAssetImportData
/// Size: 0x0008 (0x000030 - 0x000038)
class UGroomAssetImportData : public UAssetImportData
{ 
public:
	class UGroomImportOptions*                         ImportOptions;                                              // 0x0030   (0x0008)  
};

/// Struct /Script/HairStrandsCore.GoomBindingGroupInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGoomBindingGroupInfo
{ 
	int32_t                                            RenRootCount;                                               // 0x0000   (0x0004)  
	int32_t                                            RenLODCount;                                                // 0x0004   (0x0004)  
	int32_t                                            SimRootCount;                                               // 0x0008   (0x0004)  
	int32_t                                            SimLODCount;                                                // 0x000C   (0x0004)  
};

/// Class /Script/HairStrandsCore.GroomBindingAsset
/// Size: 0x0090 (0x000030 - 0x0000C0)
class UGroomBindingAsset : public UObject
{ 
public:
	EGroomBindingMeshType                              GroomBindingType;                                           // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	class UGroomAsset*                                 Groom;                                                      // 0x0038   (0x0008)  
	class USkeletalMesh*                               SourceSkeletalMesh;                                         // 0x0040   (0x0008)  
	class USkeletalMesh*                               TargetSkeletalMesh;                                         // 0x0048   (0x0008)  
	class UGeometryCache*                              SourceGeometryCache;                                        // 0x0050   (0x0008)  
	class UGeometryCache*                              TargetGeometryCache;                                        // 0x0058   (0x0008)  
	int32_t                                            NumInterpolationPoints;                                     // 0x0060   (0x0004)  
	int32_t                                            MatchingSection;                                            // 0x0064   (0x0004)  
	TArray<FGoomBindingGroupInfo>                      GroupInfos;                                                 // 0x0068   (0x0010)  
	unsigned char                                      UnknownData01_6[0x48];                                      // 0x0078   (0x0048)  MISSED
};

/// Class /Script/HairStrandsCore.GroomBlueprintLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UGroomBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAssetWithPath
	// class UGroomBindingAsset* CreateNewGroomBindingAssetWithPath(FString InDesiredPackagePath, class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection); // [0x46735b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAsset
	// class UGroomBindingAsset* CreateNewGroomBindingAsset(class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection); // [0x4673420] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAssetWithPath
	// class UGroomBindingAsset* CreateNewGeometryCacheGroomBindingAssetWithPath(FString DesiredPackagePath, class UGroomAsset* GroomAsset, class UGeometryCache* GeometryCache, int32_t NumInterpolationPoints, class UGeometryCache* SourceGeometryCacheForTransfer, int32_t MatchingSection); // [0x46735b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAsset
	// class UGroomBindingAsset* CreateNewGeometryCacheGroomBindingAsset(class UGroomAsset* GroomAsset, class UGeometryCache* GeometryCache, int32_t NumInterpolationPoints, class UGeometryCache* SourceGeometryCacheForTransfer, int32_t MatchingSection); // [0x4673420] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/HairStrandsCore.GroomAnimationInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FGroomAnimationInfo
{ 
	uint32_t                                           NumFrames;                                                  // 0x0000   (0x0004)  
	float                                              SecondsPerFrame;                                            // 0x0004   (0x0004)  
	float                                              Duration;                                                   // 0x0008   (0x0004)  
	float                                              starttime;                                                  // 0x000C   (0x0004)  
	float                                              EndTime;                                                    // 0x0010   (0x0004)  
	int32_t                                            StartFrame;                                                 // 0x0014   (0x0004)  
	int32_t                                            EndFrame;                                                   // 0x0018   (0x0004)  
	EGroomCacheAttributes                              Attributes;                                                 // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Struct /Script/HairStrandsCore.GroomCacheInfo
/// Size: 0x0028 (0x000000 - 0x000028)
struct FGroomCacheInfo
{ 
	int32_t                                            Version;                                                    // 0x0000   (0x0004)  
	EGroomCacheType                                    Type;                                                       // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	FGroomAnimationInfo                                AnimationInfo;                                              // 0x0008   (0x0020)  
};

/// Class /Script/HairStrandsCore.GroomCache
/// Size: 0x0040 (0x000030 - 0x000070)
class UGroomCache : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	FGroomCacheInfo                                    GroomCacheInfo;                                             // 0x0038   (0x0028)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0060   (0x0010)  MISSED
};

/// Struct /Script/HairStrandsCore.GroomCacheImportSettings
/// Size: 0x0028 (0x000000 - 0x000028)
struct FGroomCacheImportSettings
{ 
	bool                                               bImportGroomCache;                                          // 0x0000   (0x0001)  
	bool                                               bImportGroomAsset;                                          // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	FSoftObjectPath                                    GroomAsset;                                                 // 0x0008   (0x0020)  
};

/// Class /Script/HairStrandsCore.GroomCacheImportOptions
/// Size: 0x0028 (0x000030 - 0x000058)
class UGroomCacheImportOptions : public UObject
{ 
public:
	FGroomCacheImportSettings                          ImportSettings;                                             // 0x0030   (0x0028)  
};

/// Class /Script/HairStrandsCore.GroomCacheImportData
/// Size: 0x0028 (0x000030 - 0x000058)
class UGroomCacheImportData : public UAssetImportData
{ 
public:
	FGroomCacheImportSettings                          Settings;                                                   // 0x0030   (0x0028)  
};

/// Struct /Script/HairStrandsCore.HairGroupDesc
/// Size: 0x0044 (0x000000 - 0x000044)
struct FHairGroupDesc
{ 
	float                                              HairLength;                                                 // 0x0000   (0x0004)  
	float                                              HairWidth;                                                  // 0x0004   (0x0004)  
	bool                                               HairWidth_Override;                                         // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              HairRootScale;                                              // 0x000C   (0x0004)  
	bool                                               HairRootScale_Override;                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              HairTipScale;                                               // 0x0014   (0x0004)  
	bool                                               HairTipScale_Override;                                      // 0x0018   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	float                                              HairClipScale;                                              // 0x001C   (0x0004)  
	bool                                               HairClipScale_Override;                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	float                                              HairShadowDensity;                                          // 0x0024   (0x0004)  
	bool                                               HairShadowDensity_Override;                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              HairRaytracingRadiusScale;                                  // 0x002C   (0x0004)  
	bool                                               HairRaytracingRadiusScale_Override;                         // 0x0030   (0x0001)  
	bool                                               bUseHairRaytracingGeometry;                                 // 0x0031   (0x0001)  
	bool                                               bUseHairRaytracingGeometry_Override;                        // 0x0032   (0x0001)  
	unsigned char                                      UnknownData05_5[0x1];                                       // 0x0033   (0x0001)  MISSED
	float                                              LODBias;                                                    // 0x0034   (0x0004)  
	bool                                               bUseStableRasterization;                                    // 0x0038   (0x0001)  
	bool                                               bUseStableRasterization_Override;                           // 0x0039   (0x0001)  
	bool                                               bScatterSceneLighting;                                      // 0x003A   (0x0001)  
	bool                                               bScatterSceneLighting_Override;                             // 0x003B   (0x0001)  
	bool                                               bSupportVoxelization;                                       // 0x003C   (0x0001)  
	bool                                               bSupportVoxelization_Override;                              // 0x003D   (0x0001)  
	unsigned char                                      UnknownData06_5[0x2];                                       // 0x003E   (0x0002)  MISSED
	int32_t                                            LODForcedIndex;                                             // 0x0040   (0x0004)  
};

/// Class /Script/HairStrandsCore.GroomComponent
/// Size: 0x0130 (0x0004D0 - 0x000600)
class UGroomComponent : public UMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x04D0   (0x0008)  MISSED
	class UGroomAsset*                                 GroomAsset;                                                 // 0x04D8   (0x0008)  
	class UGroomCache*                                 GroomCache;                                                 // 0x04E0   (0x0008)  
	TArray<class UNiagaraComponent*>                   NiagaraComponents;                                          // 0x04E8   (0x0010)  
	class USkeletalMesh*                               SourceSkeletalMesh;                                         // 0x04F8   (0x0008)  
	class UGroomBindingAsset*                          BindingAsset;                                               // 0x0500   (0x0008)  
	class UPhysicsAsset*                               PhysicsAsset;                                               // 0x0508   (0x0008)  
	class UMaterialInterface*                          Strands_DebugMaterial;                                      // 0x0510   (0x0008)  
	class UMaterialInterface*                          Strands_DefaultMaterial;                                    // 0x0518   (0x0008)  
	class UMaterialInterface*                          Cards_DefaultMaterial;                                      // 0x0520   (0x0008)  
	class UMaterialInterface*                          Meshes_DefaultMaterial;                                     // 0x0528   (0x0008)  
	class UNiagaraSystem*                              AngularSpringsSystem;                                       // 0x0530   (0x0008)  
	class UNiagaraSystem*                              CosseratRodsSystem;                                         // 0x0538   (0x0008)  
	SDK_UNDEFINED(16,5058) /* FString */               __um(AttachmentName);                                       // 0x0540   (0x0010)  
	unsigned char                                      UnknownData01_5[0x50];                                      // 0x0550   (0x0050)  MISSED
	TArray<FHairGroupDesc>                             GroomGroupsDesc;                                            // 0x05A0   (0x0010)  
	bool                                               bRunning;                                                   // 0x05B0   (0x0001)  
	bool                                               bLooping;                                                   // 0x05B1   (0x0001)  
	bool                                               bManualTick;                                                // 0x05B2   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x05B3   (0x0001)  MISSED
	float                                              ElapsedTime;                                                // 0x05B4   (0x0004)  
	unsigned char                                      UnknownData03_6[0x48];                                      // 0x05B8   (0x0048)  MISSED


	/// Functions
	// Function /Script/HairStrandsCore.GroomComponent.SetGroomAsset
	// void SetGroomAsset(class UGroomAsset* Asset);                                                                         // [0x4673820] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.SetBindingAsset
	// void SetBindingAsset(class UGroomBindingAsset* InBinding);                                                            // [0x4673790] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/HairStrandsCore.GroomCreateBindingOptions
/// Size: 0x0030 (0x000030 - 0x000060)
class UGroomCreateBindingOptions : public UObject
{ 
public:
	EGroomBindingMeshType                              GroomBindingType;                                           // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	class USkeletalMesh*                               SourceSkeletalMesh;                                         // 0x0038   (0x0008)  
	class USkeletalMesh*                               TargetSkeletalMesh;                                         // 0x0040   (0x0008)  
	class UGeometryCache*                              SourceGeometryCache;                                        // 0x0048   (0x0008)  
	class UGeometryCache*                              TargetGeometryCache;                                        // 0x0050   (0x0008)  
	int32_t                                            NumInterpolationPoints;                                     // 0x0058   (0x0004)  
	int32_t                                            MatchingSection;                                            // 0x005C   (0x0004)  
};

/// Struct /Script/HairStrandsCore.FollicleMaskOptions
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFollicleMaskOptions
{ 
	class UGroomAsset*                                 Groom;                                                      // 0x0000   (0x0008)  
	EFollicleMaskChannel                               Channel;                                                    // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Class /Script/HairStrandsCore.GroomCreateFollicleMaskOptions
/// Size: 0x0018 (0x000030 - 0x000048)
class UGroomCreateFollicleMaskOptions : public UObject
{ 
public:
	int32_t                                            Resolution;                                                 // 0x0030   (0x0004)  
	int32_t                                            RootRadius;                                                 // 0x0034   (0x0004)  
	TArray<FFollicleMaskOptions>                       Grooms;                                                     // 0x0038   (0x0010)  
};

/// Class /Script/HairStrandsCore.GroomCreateStrandsTexturesOptions
/// Size: 0x0040 (0x000030 - 0x000070)
class UGroomCreateStrandsTexturesOptions : public UObject
{ 
public:
	int32_t                                            Resolution;                                                 // 0x0030   (0x0004)  
	EStrandsTexturesTraceType                          TraceType;                                                  // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	float                                              TraceDistance;                                              // 0x0038   (0x0004)  
	EStrandsTexturesMeshType                           MeshType;                                                   // 0x003C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x003D   (0x0003)  MISSED
	class UStaticMesh*                                 StaticMesh;                                                 // 0x0040   (0x0008)  
	class USkeletalMesh*                               SkeletalMesh;                                               // 0x0048   (0x0008)  
	int32_t                                            LODIndex;                                                   // 0x0050   (0x0004)  
	int32_t                                            SectionIndex;                                               // 0x0054   (0x0004)  
	int32_t                                            UVChannelIndex;                                             // 0x0058   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	TArray<int32_t>                                    GroupIndex;                                                 // 0x0060   (0x0010)  
};

/// Struct /Script/HairStrandsCore.GroomConversionSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FGroomConversionSettings
{ 
	FVector                                            Rotation;                                                   // 0x0000   (0x000C)  
	FVector                                            Scale;                                                      // 0x000C   (0x000C)  
};

/// Class /Script/HairStrandsCore.GroomImportOptions
/// Size: 0x0028 (0x000030 - 0x000058)
class UGroomImportOptions : public UObject
{ 
public:
	FGroomConversionSettings                           ConversionSettings;                                         // 0x0030   (0x0018)  
	TArray<FHairGroupsInterpolation>                   InterpolationSettings;                                      // 0x0048   (0x0010)  
};

/// Struct /Script/HairStrandsCore.GroomHairGroupPreview
/// Size: 0x0020 (0x000000 - 0x000020)
struct FGroomHairGroupPreview
{ 
	int32_t                                            GroupID;                                                    // 0x0000   (0x0004)  
	int32_t                                            CurveCount;                                                 // 0x0004   (0x0004)  
	int32_t                                            GuideCount;                                                 // 0x0008   (0x0004)  
	FHairGroupsInterpolation                           InterpolationSettings;                                      // 0x000C   (0x0014)  
};

/// Class /Script/HairStrandsCore.GroomHairGroupsPreview
/// Size: 0x0010 (0x000030 - 0x000040)
class UGroomHairGroupsPreview : public UObject
{ 
public:
	TArray<FGroomHairGroupPreview>                     Groups;                                                     // 0x0030   (0x0010)  
};

/// Class /Script/HairStrandsCore.GroomPluginSettings
/// Size: 0x0008 (0x000030 - 0x000038)
class UGroomPluginSettings : public UObject
{ 
public:
	float                                              GroomCacheLookAheadBuffer;                                  // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/HairStrandsCore.MovieSceneGroomCacheParams
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMovieSceneGroomCacheParams
{ 
	class UGroomCache*                                 GroomCache;                                                 // 0x0000   (0x0008)  
	FFrameNumber                                       FirstLoopStartFrameOffset;                                  // 0x0008   (0x0004)  
	FFrameNumber                                       StartFrameOffset;                                           // 0x000C   (0x0004)  
	FFrameNumber                                       EndFrameOffset;                                             // 0x0010   (0x0004)  
	float                                              PlayRate;                                                   // 0x0014   (0x0004)  
	bool                                               bReverse : 1;                                               // 0x0018:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Class /Script/HairStrandsCore.MovieSceneGroomCacheSection
/// Size: 0x0020 (0x0000F0 - 0x000110)
class UMovieSceneGroomCacheSection : public UMovieSceneSection
{ 
public:
	FMovieSceneGroomCacheParams                        Params;                                                     // 0x00F0   (0x0020)  
};

/// Class /Script/HairStrandsCore.MovieSceneGroomCacheTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneGroomCacheTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0098   (0x0008)  MISSED
	TArray<class UMovieSceneSection*>                  AnimationSections;                                          // 0x00A0   (0x0010)  
};

/// Class /Script/HairStrandsCore.NiagaraDataInterfaceHairStrands
/// Size: 0x0018 (0x000040 - 0x000058)
class UNiagaraDataInterfaceHairStrands : public UNiagaraDataInterface
{ 
public:
	class UGroomAsset*                                 DefaultSource;                                              // 0x0040   (0x0008)  
	class AActor*                                      SourceActor;                                                // 0x0048   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0050   (0x0008)  MISSED
};

/// Class /Script/HairStrandsCore.NiagaraDataInterfacePhysicsAsset
/// Size: 0x0030 (0x000040 - 0x000070)
class UNiagaraDataInterfacePhysicsAsset : public UNiagaraDataInterface
{ 
public:
	class UPhysicsAsset*                               DefaultSource;                                              // 0x0040   (0x0008)  
	class AActor*                                      SourceActor;                                                // 0x0048   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0050   (0x0020)  MISSED
};

/// Class /Script/HairStrandsCore.NiagaraDataInterfaceVelocityGrid
/// Size: 0x0010 (0x0000E0 - 0x0000F0)
class UNiagaraDataInterfaceVelocityGrid : public UNiagaraDataInterfaceRWBase
{ 
public:
	FIntVector                                         GridSize;                                                   // 0x00E0   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00EC   (0x0004)  MISSED
};

/// Class /Script/HairStrandsCore.NiagaraDataInterfacePressureGrid
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UNiagaraDataInterfacePressureGrid : public UNiagaraDataInterfaceVelocityGrid
{ 
public:
};

/// Struct /Script/HairStrandsCore.GroomBuildSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FGroomBuildSettings
{ 
	bool                                               bOverrideGuides;                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              HairToGuideDensity;                                         // 0x0004   (0x0004)  
	EGroomInterpolationQuality                         InterpolationQuality;                                       // 0x0008   (0x0001)  
	EGroomInterpolationWeight                          InterpolationDistance;                                      // 0x0009   (0x0001)  
	bool                                               bRandomizeGuide;                                            // 0x000A   (0x0001)  
	bool                                               bUseUniqueGuide;                                            // 0x000B   (0x0001)  
};

/// Struct /Script/HairStrandsCore.MovieSceneGroomCacheSectionTemplateParameters
/// Size: 0x0008 (0x000020 - 0x000028)
struct FMovieSceneGroomCacheSectionTemplateParameters : FMovieSceneGroomCacheParams
{ 
	FFrameNumber                                       SectionStartTime;                                           // 0x0020   (0x0004)  
	FFrameNumber                                       SectionEndTime;                                             // 0x0024   (0x0004)  
};

/// Struct /Script/HairStrandsCore.MovieSceneGroomCacheSectionTemplate
/// Size: 0x0028 (0x000020 - 0x000048)
struct FMovieSceneGroomCacheSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneGroomCacheSectionTemplateParameters     Params;                                                     // 0x0020   (0x0028)  
};

