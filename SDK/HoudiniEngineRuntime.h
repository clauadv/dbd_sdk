
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Foliage
/// dependency: PhysicsCore

/// Enum /Script/HoudiniEngineRuntime.EHoudiniStaticMeshMethod
/// Size: 0x04
enum class EHoudiniStaticMeshMethod : uint8_t
{
	EHoudiniStaticMeshMethod__RawMesh                                                = 0,
	EHoudiniStaticMeshMethod__FMeshDescription                                       = 1,
	EHoudiniStaticMeshMethod__UHoudiniStaticMesh                                     = 2,
	EHoudiniStaticMeshMethod__EHoudiniStaticMeshMethod_MAX                           = 3
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniAssetStateResult
/// Size: 0x07
enum class EHoudiniAssetStateResult : uint8_t
{
	EHoudiniAssetStateResult__None                                                   = 0,
	EHoudiniAssetStateResult__Working                                                = 1,
	EHoudiniAssetStateResult__Success                                                = 2,
	EHoudiniAssetStateResult__FinishedWithError                                      = 3,
	EHoudiniAssetStateResult__FinishedWithFatalError                                 = 4,
	EHoudiniAssetStateResult__Aborted                                                = 5,
	EHoudiniAssetStateResult__EHoudiniAssetStateResult_MAX                           = 6
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniAssetState
/// Size: 0x15
enum class EHoudiniAssetState : uint8_t
{
	EHoudiniAssetState__NeedInstantiation                                            = 0,
	EHoudiniAssetState__NewHDA                                                       = 1,
	EHoudiniAssetState__PreInstantiation                                             = 2,
	EHoudiniAssetState__Instantiating                                                = 3,
	EHoudiniAssetState__PreCook                                                      = 4,
	EHoudiniAssetState__Cooking                                                      = 5,
	EHoudiniAssetState__PostCook                                                     = 6,
	EHoudiniAssetState__PreProcess                                                   = 7,
	EHoudiniAssetState__Processing                                                   = 8,
	EHoudiniAssetState__None                                                         = 9,
	EHoudiniAssetState__NeedRebuild                                                  = 10,
	EHoudiniAssetState__NeedDelete                                                   = 11,
	EHoudiniAssetState__Deleting                                                     = 12,
	EHoudiniAssetState__ProcessTemplate                                              = 13,
	EHoudiniAssetState__EHoudiniAssetState_MAX                                       = 14
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniProxyRefineRequestResult
/// Size: 0x05
enum class EHoudiniProxyRefineRequestResult : uint8_t
{
	EHoudiniProxyRefineRequestResult__Invalid                                        = 0,
	EHoudiniProxyRefineRequestResult__None                                           = 1,
	EHoudiniProxyRefineRequestResult__PendingCooks                                   = 2,
	EHoudiniProxyRefineRequestResult__Refined                                        = 3,
	EHoudiniProxyRefineRequestResult__EHoudiniProxyRefineRequestResult_MAX           = 4
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniProxyRefineResult
/// Size: 0x05
enum class EHoudiniProxyRefineResult : uint8_t
{
	EHoudiniProxyRefineResult__Invalid                                               = 0,
	EHoudiniProxyRefineResult__Failed                                                = 1,
	EHoudiniProxyRefineResult__Success                                               = 2,
	EHoudiniProxyRefineResult__Skipped                                               = 3,
	EHoudiniProxyRefineResult__EHoudiniProxyRefineResult_MAX                         = 4
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniLandscapeExportType
/// Size: 0x04
enum class EHoudiniLandscapeExportType : uint8_t
{
	EHoudiniLandscapeExportType__Heightfield                                         = 0,
	EHoudiniLandscapeExportType__Mesh                                                = 1,
	EHoudiniLandscapeExportType__Points                                              = 2,
	EHoudiniLandscapeExportType__EHoudiniLandscapeExportType_MAX                     = 3
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniCurveBreakpointParameterization
/// Size: 0x05
enum class EHoudiniCurveBreakpointParameterization : uint8_t
{
	EHoudiniCurveBreakpointParameterization__Invalid                                 = -1,
	EHoudiniCurveBreakpointParameterization__Uniform                                 = 0,
	EHoudiniCurveBreakpointParameterization__Chord                                   = 1,
	EHoudiniCurveBreakpointParameterization__Centripetal                             = 2,
	EHoudiniCurveBreakpointParameterization__EHoudiniCurveBreakpointParameterization_MAX = 3
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniCurveMethod
/// Size: 0x05
enum class EHoudiniCurveMethod : uint8_t
{
	EHoudiniCurveMethod__Invalid                                                     = -1,
	EHoudiniCurveMethod__CVs                                                         = 0,
	EHoudiniCurveMethod__Breakpoints                                                 = 1,
	EHoudiniCurveMethod__Freehand                                                    = 2,
	EHoudiniCurveMethod__EHoudiniCurveMethod_MAX                                     = 3
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniCurveType
/// Size: 0x06
enum class EHoudiniCurveType : uint8_t
{
	EHoudiniCurveType__Invalid                                                       = -1,
	EHoudiniCurveType__Polygon                                                       = 0,
	EHoudiniCurveType__Nurbs                                                         = 1,
	EHoudiniCurveType__Bezier                                                        = 2,
	EHoudiniCurveType__Points                                                        = 3,
	EHoudiniCurveType__EHoudiniCurveType_MAX                                         = 4
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniOutputType
/// Size: 0x09
enum class EHoudiniOutputType : uint8_t
{
	EHoudiniOutputType__Invalid                                                      = 0,
	EHoudiniOutputType__Mesh                                                         = 1,
	EHoudiniOutputType__Instancer                                                    = 2,
	EHoudiniOutputType__Landscape                                                    = 3,
	EHoudiniOutputType__Curve                                                        = 4,
	EHoudiniOutputType__Skeletal                                                     = 5,
	EHoudiniOutputType__GeometryCollection                                           = 6,
	EHoudiniOutputType__DataTable                                                    = 7,
	EHoudiniOutputType__EHoudiniOutputType_MAX                                       = 8
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniInputType
/// Size: 0x09
enum class EHoudiniInputType : uint8_t
{
	EHoudiniInputType__Invalid                                                       = 0,
	EHoudiniInputType__Geometry                                                      = 1,
	EHoudiniInputType__Curve                                                         = 2,
	EHoudiniInputType__Asset                                                         = 3,
	EHoudiniInputType__Landscape                                                     = 4,
	EHoudiniInputType__World                                                         = 5,
	EHoudiniInputType__Skeletal                                                      = 6,
	EHoudiniInputType__GeometryCollection                                            = 7,
	EHoudiniInputType__EHoudiniInputType_MAX                                         = 8
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniLandscapeOutputBakeType
/// Size: 0x05
enum class EHoudiniLandscapeOutputBakeType : uint8_t
{
	EHoudiniLandscapeOutputBakeType__Detachment                                      = 0,
	EHoudiniLandscapeOutputBakeType__BakeToImage                                     = 1,
	EHoudiniLandscapeOutputBakeType__BakeToWorld                                     = 2,
	EHoudiniLandscapeOutputBakeType__InValid                                         = 3,
	EHoudiniLandscapeOutputBakeType__EHoudiniLandscapeOutputBakeType_MAX             = 4
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniRampInterpolationType
/// Size: 0x09
enum class EHoudiniRampInterpolationType : uint8_t
{
	EHoudiniRampInterpolationType__InValid                                           = -1,
	EHoudiniRampInterpolationType__CONSTANT                                          = 0,
	EHoudiniRampInterpolationType__LINEAR                                            = 1,
	EHoudiniRampInterpolationType__CATMULL_ROM                                       = 2,
	EHoudiniRampInterpolationType__MONOTONE_CUBIC                                    = 3,
	EHoudiniRampInterpolationType__BEZIER                                            = 4,
	EHoudiniRampInterpolationType__BSPLINE                                           = 5,
	EHoudiniRampInterpolationType__HERMITE                                           = 6,
	EHoudiniRampInterpolationType__EHoudiniRampInterpolationType_MAX                 = 7
};

/// Enum /Script/HoudiniEngineRuntime.EAttribOwner
/// Size: 0x06
enum class EAttribOwner : uint8_t
{
	EAttribOwner__Invalid                                                            = -1,
	EAttribOwner__Vertex                                                             = 0,
	EAttribOwner__Point                                                              = 1,
	EAttribOwner__Prim                                                               = 2,
	EAttribOwner__Detail                                                             = 3,
	EAttribOwner__EAttribOwner_MAX                                                   = 4
};

/// Enum /Script/HoudiniEngineRuntime.EAttribStorageType
/// Size: 0x07
enum class EAttribStorageType : uint8_t
{
	EAttribStorageType__Invalid                                                      = -1,
	EAttribStorageType__INT                                                          = 0,
	EAttribStorageType__INT64                                                        = 1,
	EAttribStorageType__FLOAT                                                        = 2,
	EAttribStorageType__FLOAT64                                                      = 3,
	EAttribStorageType__STRING                                                       = 4,
	EAttribStorageType__EAttribStorageType_MAX                                       = 5
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniInstancerType
/// Size: 0x07
enum class EHoudiniInstancerType : uint8_t
{
	EHoudiniInstancerType__Invalid                                                   = 0,
	EHoudiniInstancerType__ObjectInstancer                                           = 1,
	EHoudiniInstancerType__PackedPrimitive                                           = 2,
	EHoudiniInstancerType__AttributeInstancer                                        = 3,
	EHoudiniInstancerType__OldSchoolAttributeInstancer                               = 4,
	EHoudiniInstancerType__GeometryCollection                                        = 5,
	EHoudiniInstancerType__EHoudiniInstancerType_MAX                                 = 6
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniPartType
/// Size: 0x07
enum class EHoudiniPartType : uint8_t
{
	EHoudiniPartType__Invalid                                                        = 0,
	EHoudiniPartType__Mesh                                                           = 1,
	EHoudiniPartType__Instancer                                                      = 2,
	EHoudiniPartType__Curve                                                          = 3,
	EHoudiniPartType__Volume                                                         = 4,
	EHoudiniPartType__DataTable                                                      = 5,
	EHoudiniPartType__EHoudiniPartType_MAX                                           = 6
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniGeoType
/// Size: 0x06
enum class EHoudiniGeoType : uint8_t
{
	EHoudiniGeoType__Invalid                                                         = 0,
	EHoudiniGeoType__Default                                                         = 1,
	EHoudiniGeoType__Intermediate                                                    = 2,
	EHoudiniGeoType__Input                                                           = 3,
	EHoudiniGeoType__Curve                                                           = 4,
	EHoudiniGeoType__EHoudiniGeoType_MAX                                             = 5
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniHandleType
/// Size: 0x04
enum class EHoudiniHandleType : uint8_t
{
	EHoudiniHandleType__Xform                                                        = 0,
	EHoudiniHandleType__Bounder                                                      = 1,
	EHoudiniHandleType__Unsupported                                                  = 2,
	EHoudiniHandleType__EHoudiniHandleType_MAX                                       = 3
};

/// Enum /Script/HoudiniEngineRuntime.EXformParameter
/// Size: 0x11
enum class EXformParameter : uint8_t
{
	EXformParameter__TX                                                              = 0,
	EXformParameter__TY                                                              = 1,
	EXformParameter__TZ                                                              = 2,
	EXformParameter__RX                                                              = 3,
	EXformParameter__RY                                                              = 4,
	EXformParameter__RZ                                                              = 5,
	EXformParameter__SX                                                              = 6,
	EXformParameter__SY                                                              = 7,
	EXformParameter__SZ                                                              = 8,
	EXformParameter__COUNT                                                           = 9,
	EXformParameter__EXformParameter_MAX                                             = 10
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniInputObjectType
/// Size: 0x23
enum class EHoudiniInputObjectType : uint8_t
{
	EHoudiniInputObjectType__Invalid                                                 = 0,
	EHoudiniInputObjectType__Object                                                  = 1,
	EHoudiniInputObjectType__StaticMesh                                              = 2,
	EHoudiniInputObjectType__SkeletalMesh                                            = 3,
	EHoudiniInputObjectType__SceneComponent                                          = 4,
	EHoudiniInputObjectType__StaticMeshComponent                                     = 5,
	EHoudiniInputObjectType__InstancedStaticMeshComponent                            = 6,
	EHoudiniInputObjectType__SplineComponent                                         = 7,
	EHoudiniInputObjectType__HoudiniSplineComponent                                  = 8,
	EHoudiniInputObjectType__HoudiniAssetComponent                                   = 9,
	EHoudiniInputObjectType__Actor                                                   = 10,
	EHoudiniInputObjectType__Landscape                                               = 11,
	EHoudiniInputObjectType__Brush                                                   = 12,
	EHoudiniInputObjectType__CameraComponent                                         = 13,
	EHoudiniInputObjectType__DataTable                                               = 14,
	EHoudiniInputObjectType__HoudiniAssetActor                                       = 15,
	EHoudiniInputObjectType__FoliageType_InstancedStaticMesh                         = 16,
	EHoudiniInputObjectType__GeometryCollection                                      = 17,
	EHoudiniInputObjectType__GeometryCollectionComponent                             = 18,
	EHoudiniInputObjectType__GeometryCollectionActor_Deprecated                      = 19,
	EHoudiniInputObjectType__SkeletalMeshComponent                                   = 20,
	EHoudiniInputObjectType__Blueprint                                               = 21,
	EHoudiniInputObjectType__EHoudiniInputObjectType_MAX                             = 22
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniXformType
/// Size: 0x04
enum class EHoudiniXformType : uint8_t
{
	EHoudiniXformType__None                                                          = 0,
	EHoudiniXformType__IntoThisObject                                                = 1,
	EHoudiniXformType__Auto                                                          = 2,
	EHoudiniXformType__EHoudiniXformType_MAX                                         = 3
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniCurveOutputType
/// Size: 0x03
enum class EHoudiniCurveOutputType : uint8_t
{
	EHoudiniCurveOutputType__UnrealSpline                                            = 0,
	EHoudiniCurveOutputType__HoudiniSpline                                           = 1,
	EHoudiniCurveOutputType__EHoudiniCurveOutputType_MAX                             = 2
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniParameterType
/// Size: 0x24
enum class EHoudiniParameterType : uint8_t
{
	EHoudiniParameterType__Invalid                                                   = 0,
	EHoudiniParameterType__Button                                                    = 1,
	EHoudiniParameterType__ButtonStrip                                               = 2,
	EHoudiniParameterType__Color                                                     = 3,
	EHoudiniParameterType__ColorRamp                                                 = 4,
	EHoudiniParameterType__File                                                      = 5,
	EHoudiniParameterType__FileDir                                                   = 6,
	EHoudiniParameterType__FileGeo                                                   = 7,
	EHoudiniParameterType__FileImage                                                 = 8,
	EHoudiniParameterType__Float                                                     = 9,
	EHoudiniParameterType__FloatRamp                                                 = 10,
	EHoudiniParameterType__Folder                                                    = 11,
	EHoudiniParameterType__FolderList                                                = 12,
	EHoudiniParameterType__Input                                                     = 13,
	EHoudiniParameterType__Int                                                       = 14,
	EHoudiniParameterType__IntChoice                                                 = 15,
	EHoudiniParameterType__Label                                                     = 16,
	EHoudiniParameterType__MultiParm                                                 = 17,
	EHoudiniParameterType__Separator                                                 = 18,
	EHoudiniParameterType__String                                                    = 19,
	EHoudiniParameterType__StringChoice                                              = 20,
	EHoudiniParameterType__StringAssetRef                                            = 21,
	EHoudiniParameterType__Toggle                                                    = 22,
	EHoudiniParameterType__EHoudiniParameterType_MAX                                 = 23
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniFolderParameterType
/// Size: 0x07
enum class EHoudiniFolderParameterType : uint8_t
{
	EHoudiniFolderParameterType__Invalid                                             = 0,
	EHoudiniFolderParameterType__Collapsible                                         = 1,
	EHoudiniFolderParameterType__Simple                                              = 2,
	EHoudiniFolderParameterType__Tabs                                                = 3,
	EHoudiniFolderParameterType__Radio                                               = 4,
	EHoudiniFolderParameterType__Other                                               = 5,
	EHoudiniFolderParameterType__EHoudiniFolderParameterType_MAX                     = 6
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniMultiParmModificationType
/// Size: 0x05
enum class EHoudiniMultiParmModificationType : uint8_t
{
	EHoudiniMultiParmModificationType__None                                          = 0,
	EHoudiniMultiParmModificationType__Inserted                                      = 1,
	EHoudiniMultiParmModificationType__Removed                                       = 2,
	EHoudiniMultiParmModificationType__Modified                                      = 3,
	EHoudiniMultiParmModificationType__EHoudiniMultiParmModificationType_MAX         = 4
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniRampPointConstructStatus
/// Size: 0x06
enum class EHoudiniRampPointConstructStatus : uint8_t
{
	EHoudiniRampPointConstructStatus__None                                           = 0,
	EHoudiniRampPointConstructStatus__INITIALIZED                                    = 1,
	EHoudiniRampPointConstructStatus__POSITION_INSERTED                              = 2,
	EHoudiniRampPointConstructStatus__VALUE_INSERTED                                 = 3,
	EHoudiniRampPointConstructStatus__INTERPTYPE_INSERTED                            = 4,
	EHoudiniRampPointConstructStatus__EHoudiniRampPointConstructStatus_MAX           = 5
};

/// Enum /Script/HoudiniEngineRuntime.EPDGWorkResultState
/// Size: 0x09
enum class EPDGWorkResultState : uint8_t
{
	EPDGWorkResultState__None                                                        = 0,
	EPDGWorkResultState__ToLoad                                                      = 1,
	EPDGWorkResultState__Loading                                                     = 2,
	EPDGWorkResultState__Loaded                                                      = 3,
	EPDGWorkResultState__ToDelete                                                    = 4,
	EPDGWorkResultState__Deleting                                                    = 5,
	EPDGWorkResultState__Deleted                                                     = 6,
	EPDGWorkResultState__NotLoaded                                                   = 7,
	EPDGWorkResultState__EPDGWorkResultState_MAX                                     = 8
};

/// Enum /Script/HoudiniEngineRuntime.EPDGNodeState
/// Size: 0x07
enum class EPDGNodeState : uint8_t
{
	EPDGNodeState__None                                                              = 0,
	EPDGNodeState__Dirtied                                                           = 1,
	EPDGNodeState__Dirtying                                                          = 2,
	EPDGNodeState__Cooking                                                           = 3,
	EPDGNodeState__Cook_Complete                                                     = 4,
	EPDGNodeState__Cook_Failed                                                       = 5,
	EPDGNodeState__EPDGNodeState_MAX                                                 = 6
};

/// Enum /Script/HoudiniEngineRuntime.EPDGLinkState
/// Size: 0x05
enum class EPDGLinkState : uint8_t
{
	EPDGLinkState__Inactive                                                          = 0,
	EPDGLinkState__Linking                                                           = 1,
	EPDGLinkState__Linked                                                            = 2,
	EPDGLinkState__Error_Not_Linked                                                  = 3,
	EPDGLinkState__EPDGLinkState_MAX                                                 = 4
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniExecutableType
/// Size: 0x05
enum class EHoudiniExecutableType : uint8_t
{
	HRSHE_Houdini                                                                    = 0,
	HRSHE_HoudiniFX                                                                  = 1,
	HRSHE_HoudiniCore                                                                = 2,
	HRSHE_HoudiniIndie                                                               = 3,
	HRSHE_MAX                                                                        = 4
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniRuntimeSettingsRecomputeFlag
/// Size: 0x04
enum class EHoudiniRuntimeSettingsRecomputeFlag : uint8_t
{
	HRSRF_Always                                                                     = 0,
	HRSRF_OnlyIfMissing                                                              = 1,
	HRSRF_Never                                                                      = 2,
	HRSRF_MAX                                                                        = 3
};

/// Enum /Script/HoudiniEngineRuntime.EHoudiniRuntimeSettingsSessionType
/// Size: 0x05
enum class EHoudiniRuntimeSettingsSessionType : uint8_t
{
	HRSST_InProcess                                                                  = 0,
	HRSST_Socket                                                                     = 1,
	HRSST_NamedPipe                                                                  = 2,
	HRSST_None                                                                       = 3,
	HRSST_MAX                                                                        = 4
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAsset
/// Size: 0x0028 (0x000030 - 0x000058)
class UHoudiniAsset : public UObject
{ 
public:
	SDK_UNDEFINED(16,5096) /* FString */               __um(AssetFileName);                                        // 0x0030   (0x0010)  
	TArray<char>                                       AssetBytes;                                                 // 0x0040   (0x0010)  
	uint32_t                                           AssetBytesCount;                                            // 0x0050   (0x0004)  
	bool                                               bAssetLimitedCommercial;                                    // 0x0054   (0x0001)  
	bool                                               bAssetNonCommercial;                                        // 0x0055   (0x0001)  
	bool                                               bAssetExpanded;                                             // 0x0056   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0057   (0x0001)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetActor
/// Size: 0x0008 (0x000230 - 0x000238)
class AHoudiniAssetActor : public AActor
{ 
public:
	class UHoudiniAssetComponent*                      HoudiniAssetComponent;                                      // 0x0230   (0x0008)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniStaticMeshGenerationProperties
/// Size: 0x01B0 (0x000000 - 0x0001B0)
struct FHoudiniStaticMeshGenerationProperties
{ 
	bool                                               bGeneratedDoubleSidedGeometry : 1;                          // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UPhysicalMaterial*                           GeneratedPhysMaterial;                                      // 0x0008   (0x0008)  
	FBodyInstance                                      DefaultBodyInstance;                                        // 0x0010   (0x0160)  
	SDK_UNDEFINED(1,5097) /* TEnumAsByte<ECollisionTraceFlag> */ __um(GeneratedCollisionTraceFlag);                // 0x0170   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0171   (0x0003)  MISSED
	int32_t                                            GeneratedLightMapResolution;                                // 0x0174   (0x0004)  
	FWalkableSlopeOverride                             GeneratedWalkableSlopeOverride;                             // 0x0178   (0x0010)  
	int32_t                                            GeneratedLightMapCoordinateIndex;                           // 0x0188   (0x0004)  
	bool                                               bGeneratedUseMaximumStreamingTexelRatio : 1;                // 0x018C:0 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x018D   (0x0003)  MISSED
	float                                              GeneratedStreamingDistanceMultiplier;                       // 0x0190   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0194   (0x0004)  MISSED
	class UFoliageType_InstancedStaticMesh*            GeneratedFoliageDefaultSettings;                            // 0x0198   (0x0008)  
	TArray<class UAssetUserData*>                      GeneratedAssetUserData;                                     // 0x01A0   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniBakedOutput
/// Size: 0x0050 (0x000000 - 0x000050)
struct FHoudiniBakedOutput
{ 
	SDK_UNDEFINED(80,5098) /* TMap<FHoudiniBakedOutputObjectIdentifier, FHoudiniBakedOutputObject> */ __um(BakedOutputObjects); // 0x0000   (0x0050)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetComponent
/// Size: 0x04E0 (0x000480 - 0x000960)
class UHoudiniAssetComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0480   (0x0008)  MISSED
	class UHoudiniAsset*                               HoudiniAsset;                                               // 0x0488   (0x0008)  
	bool                                               bCookOnParameterChange;                                     // 0x0490   (0x0001)  
	bool                                               bUploadTransformsToHoudiniEngine;                           // 0x0491   (0x0001)  
	bool                                               bCookOnTransformChange;                                     // 0x0492   (0x0001)  
	bool                                               bCookOnAssetInputCook;                                      // 0x0493   (0x0001)  
	bool                                               bOutputless;                                                // 0x0494   (0x0001)  
	bool                                               bOutputTemplateGeos;                                        // 0x0495   (0x0001)  
	bool                                               bUseOutputNodes;                                            // 0x0496   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x0497   (0x0001)  MISSED
	FDirectoryPath                                     TemporaryCookFolder;                                        // 0x0498   (0x0010)  
	FDirectoryPath                                     BakeFolder;                                                 // 0x04A8   (0x0010)  
	EHoudiniStaticMeshMethod                           StaticMeshMethod;                                           // 0x04B8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x04B9   (0x0007)  MISSED
	FHoudiniStaticMeshGenerationProperties             StaticMeshGenerationProperties;                             // 0x04C0   (0x01B0)  
	FMeshBuildSettings                                 StaticMeshBuildSettings;                                    // 0x0670   (0x0030)  
	bool                                               bOverrideGlobalProxyStaticMeshSettings;                     // 0x06A0   (0x0001)  
	bool                                               bEnableProxyStaticMeshOverride;                             // 0x06A1   (0x0001)  
	bool                                               bEnableProxyStaticMeshRefinementByTimerOverride;            // 0x06A2   (0x0001)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x06A3   (0x0001)  MISSED
	float                                              ProxyMeshAutoRefineTimeoutSecondsOverride;                  // 0x06A4   (0x0004)  
	bool                                               bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride;     // 0x06A8   (0x0001)  
	bool                                               bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride;      // 0x06A9   (0x0001)  
	unsigned char                                      UnknownData04_5[0x2];                                       // 0x06AA   (0x0002)  MISSED
	int32_t                                            AssetId;                                                    // 0x06AC   (0x0004)  
	TArray<int32_t>                                    NodeIdsToCook;                                              // 0x06B0   (0x0010)  
	SDK_UNDEFINED(80,5099) /* TMap<int32_t, int32_t> */ __um(OutputNodeCookCounts);                                // 0x06C0   (0x0050)  
	SDK_UNDEFINED(80,5100) /* TSet<UHoudiniAssetComponent*> */ __um(DownstreamHoudiniAssets);                      // 0x0710   (0x0050)  
	FGuid                                              ComponentGUID;                                              // 0x0760   (0x0010)  
	FGuid                                              HapiGUID;                                                   // 0x0770   (0x0010)  
	SDK_UNDEFINED(16,5101) /* FString */               __um(HapiAssetName);                                        // 0x0780   (0x0010)  
	EHoudiniAssetState                                 AssetState;                                                 // 0x0790   (0x0001)  
	EHoudiniAssetState                                 DebugLastAssetState;                                        // 0x0791   (0x0001)  
	EHoudiniAssetStateResult                           AssetStateResult;                                           // 0x0792   (0x0001)  
	unsigned char                                      UnknownData05_5[0xD];                                       // 0x0793   (0x000D)  MISSED
	FTransform                                         LastComponentTransform;                                     // 0x07A0   (0x0030)  
	uint32_t                                           SubAssetIndex;                                              // 0x07D0   (0x0004)  
	int32_t                                            AssetCookCount;                                             // 0x07D4   (0x0004)  
	bool                                               bHasBeenLoaded;                                             // 0x07D8   (0x0001)  
	bool                                               bHasBeenDuplicated;                                         // 0x07D9   (0x0001)  
	bool                                               bPendingDelete;                                             // 0x07DA   (0x0001)  
	bool                                               bRecookRequested;                                           // 0x07DB   (0x0001)  
	bool                                               bRebuildRequested;                                          // 0x07DC   (0x0001)  
	bool                                               bEnableCooking;                                             // 0x07DD   (0x0001)  
	bool                                               bForceNeedUpdate;                                           // 0x07DE   (0x0001)  
	bool                                               bLastCookSuccess;                                           // 0x07DF   (0x0001)  
	bool                                               bParameterDefinitionUpdateNeeded;                           // 0x07E0   (0x0001)  
	bool                                               bBlueprintStructureModified;                                // 0x07E1   (0x0001)  
	bool                                               bBlueprintModified;                                         // 0x07E2   (0x0001)  
	unsigned char                                      UnknownData06_5[0x5];                                       // 0x07E3   (0x0005)  MISSED
	TArray<class UHoudiniParameter*>                   Parameters;                                                 // 0x07E8   (0x0010)  
	TArray<class UHoudiniInput*>                       Inputs;                                                     // 0x07F8   (0x0010)  
	TArray<class UHoudiniOutput*>                      Outputs;                                                    // 0x0808   (0x0010)  
	TArray<FHoudiniBakedOutput>                        BakedOutputs;                                               // 0x0818   (0x0010)  
	SDK_UNDEFINED(16,5102) /* TArray<TWeakObjectPtr<AActor*>> */ __um(UntrackedOutputs);                           // 0x0828   (0x0010)  
	TArray<class UHoudiniHandleComponent*>             HandleComponents;                                           // 0x0838   (0x0010)  
	bool                                               bHasComponentTransformChanged;                              // 0x0848   (0x0001)  
	bool                                               bFullyLoaded;                                               // 0x0849   (0x0001)  
	unsigned char                                      UnknownData07_5[0x6];                                       // 0x084A   (0x0006)  MISSED
	class UHoudiniPDGAssetLink*                        PDGAssetLink;                                               // 0x0850   (0x0008)  
	FTimerHandle                                       RefineMeshesTimer;                                          // 0x0858   (0x0008)  
	unsigned char                                      UnknownData08_5[0x18];                                      // 0x0860   (0x0018)  MISSED
	bool                                               bNoProxyMeshNextCookRequested;                              // 0x0878   (0x0001)  
	unsigned char                                      UnknownData09_5[0x7];                                       // 0x0879   (0x0007)  MISSED
	SDK_UNDEFINED(80,5103) /* TMap<UObject*, int32_t> */ __um(InputPresets);                                       // 0x0880   (0x0050)  
	bool                                               bBakeAfterNextCook;                                         // 0x08D0   (0x0001)  
	unsigned char                                      UnknownData10_5[0x5F];                                      // 0x08D1   (0x005F)  MISSED
	bool                                               bCachedIsPreview;                                           // 0x0930   (0x0001)  
	unsigned char                                      UnknownData11_5[0xF];                                       // 0x0931   (0x000F)  MISSED
	double                                             LastTickTime;                                               // 0x0940   (0x0008)  
	unsigned char                                      UnknownData12_6[0x18];                                      // 0x0948   (0x0018)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetBlueprintComponent
/// Size: 0x0100 (0x000960 - 0x000A60)
class UHoudiniAssetBlueprintComponent : public UHoudiniAssetComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x0960   (0x0048)  MISSED
	bool                                               FauxBPProperty;                                             // 0x09A8   (0x0001)  
	bool                                               bHoudiniAssetChanged;                                       // 0x09A9   (0x0001)  
	bool                                               bUpdatedFromTemplate;                                       // 0x09AA   (0x0001)  
	bool                                               bIsInBlueprintEditor;                                       // 0x09AB   (0x0001)  
	bool                                               bCanDeleteHoudiniNodes;                                     // 0x09AC   (0x0001)  
	bool                                               bHasRegisteredComponentTemplate;                            // 0x09AD   (0x0001)  
	unsigned char                                      UnknownData01_5[0xA];                                       // 0x09AE   (0x000A)  MISSED
	SDK_UNDEFINED(80,5104) /* TMap<FHoudiniOutputObjectIdentifier, FGuid> */ __um(CachedOutputNodes);              // 0x09B8   (0x0050)  
	SDK_UNDEFINED(80,5105) /* TMap<FGuid, FGuid> */    __um(CachedInputNodes);                                     // 0x0A08   (0x0050)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0A58   (0x0008)  MISSED


	/// Functions
	// Function /Script/HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetToggleValueAt
	// void SetToggleValueAt(FString Name, bool value, int32_t index);                                                       // [0x4526e70] Final|Native|Public|BlueprintCallable 
	// Function /Script/HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetFloatParameter
	// void SetFloatParameter(FString Name, float value, int32_t index);                                                     // [0x4526d10] Final|Native|Public|BlueprintCallable 
	// Function /Script/HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.HasParameter
	// bool HasParameter(FString Name);                                                                                      // [0x4526c10] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameter
/// Size: 0x0058 (0x000030 - 0x000088)
class UHoudiniAssetParameter : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0030   (0x0058)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterButton
/// Size: 0x0000 (0x000088 - 0x000088)
class UHoudiniAssetParameterButton : public UHoudiniAssetParameter
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterChoice
/// Size: 0x0038 (0x000088 - 0x0000C0)
class UHoudiniAssetParameterChoice : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0088   (0x0038)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterColor
/// Size: 0x0010 (0x000088 - 0x000098)
class UHoudiniAssetParameterColor : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0088   (0x0010)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterFile
/// Size: 0x0028 (0x000088 - 0x0000B0)
class UHoudiniAssetParameterFile : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0088   (0x0028)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterFloat
/// Size: 0x0038 (0x000088 - 0x0000C0)
class UHoudiniAssetParameterFloat : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0088   (0x0038)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterFolder
/// Size: 0x0000 (0x000088 - 0x000088)
class UHoudiniAssetParameterFolder : public UHoudiniAssetParameter
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterFolderList
/// Size: 0x0000 (0x000088 - 0x000088)
class UHoudiniAssetParameterFolderList : public UHoudiniAssetParameter
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterInt
/// Size: 0x0030 (0x000088 - 0x0000B8)
class UHoudiniAssetParameterInt : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0088   (0x0030)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterLabel
/// Size: 0x0000 (0x000088 - 0x000088)
class UHoudiniAssetParameterLabel : public UHoudiniAssetParameter
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterMultiparm
/// Size: 0x0008 (0x000088 - 0x000090)
class UHoudiniAssetParameterMultiparm : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0088   (0x0008)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterRamp
/// Size: 0x0018 (0x000088 - 0x0000A0)
class UHoudiniAssetParameterRamp : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0088   (0x0018)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterSeparator
/// Size: 0x0000 (0x000088 - 0x000088)
class UHoudiniAssetParameterSeparator : public UHoudiniAssetParameter
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterString
/// Size: 0x0010 (0x000088 - 0x000098)
class UHoudiniAssetParameterString : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0088   (0x0010)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterToggle
/// Size: 0x0010 (0x000088 - 0x000098)
class UHoudiniAssetParameterToggle : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0088   (0x0010)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetComponentMaterials_V1
/// Size: 0x00A0 (0x000030 - 0x0000D0)
class UHoudiniAssetComponentMaterials_V1 : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0030   (0x00A0)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniHandleComponent_V1
/// Size: 0x0090 (0x000220 - 0x0002B0)
class UHoudiniHandleComponent_V1 : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x90];                                      // 0x0220   (0x0090)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniSplineComponent_V1
/// Size: 0x00F0 (0x000220 - 0x000310)
class UHoudiniSplineComponent_V1 : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0xF0];                                      // 0x0220   (0x00F0)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetInput
/// Size: 0x0128 (0x000088 - 0x0001B0)
class UHoudiniAssetInput : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0x128];                                     // 0x0088   (0x0128)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetInstanceInput
/// Size: 0x00E8 (0x000088 - 0x000170)
class UHoudiniAssetInstanceInput : public UHoudiniAssetParameter
{ 
public:
	unsigned char                                      UnknownData00_1[0xE8];                                      // 0x0088   (0x00E8)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetInstanceInputField
/// Size: 0x0160 (0x000030 - 0x000190)
class UHoudiniAssetInstanceInputField : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x160];                                     // 0x0030   (0x0160)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetComponent_V1
/// Size: 0x0520 (0x000480 - 0x0009A0)
class UHoudiniAssetComponent_V1 : public UPrimitiveComponent
{ 
public:
	bool                                               bGeneratedDoubleSidedGeometry : 1;                          // 0x0480:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0481   (0x0007)  MISSED
	class UPhysicalMaterial*                           GeneratedPhysMaterial;                                      // 0x0488   (0x0008)  
	FBodyInstance                                      DefaultBodyInstance;                                        // 0x0490   (0x0160)  
	SDK_UNDEFINED(1,5106) /* TEnumAsByte<ECollisionTraceFlag> */ __um(GeneratedCollisionTraceFlag);                // 0x05F0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x05F1   (0x0003)  MISSED
	int32_t                                            GeneratedLightMapResolution;                                // 0x05F4   (0x0004)  
	float                                              GeneratedDistanceFieldResolutionScale;                      // 0x05F8   (0x0004)  
	FWalkableSlopeOverride                             GeneratedWalkableSlopeOverride;                             // 0x05FC   (0x0010)  
	int32_t                                            GeneratedLightMapCoordinateIndex;                           // 0x060C   (0x0004)  
	bool                                               bGeneratedUseMaximumStreamingTexelRatio : 1;                // 0x0610:0 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0611   (0x0003)  MISSED
	float                                              GeneratedStreamingDistanceMultiplier;                       // 0x0614   (0x0004)  
	class UFoliageType_InstancedStaticMesh*            GeneratedFoliageDefaultSettings;                            // 0x0618   (0x0008)  
	TArray<class UAssetUserData*>                      GeneratedAssetUserData;                                     // 0x0620   (0x0010)  
	SDK_UNDEFINED(24,5107) /* FText */                 __um(BakeFolder);                                           // 0x0630   (0x0018)  
	SDK_UNDEFINED(24,5108) /* FText */                 __um(TempCookFolder);                                       // 0x0648   (0x0018)  
	unsigned char                                      UnknownData03_6[0x340];                                     // 0x0660   (0x0340)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInstancedActorComponent_V1
/// Size: 0x0010 (0x000220 - 0x000230)
class UHoudiniInstancedActorComponent_V1 : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0220   (0x0010)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent_V1
/// Size: 0x0020 (0x000220 - 0x000240)
class UHoudiniMeshSplitInstancerComponent_V1 : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0220   (0x0020)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniEngineCopyPropertiesInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UHoudiniEngineCopyPropertiesInterface : public UInterface
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniHandleParameter
/// Size: 0x0010 (0x000030 - 0x000040)
class UHoudiniHandleParameter : public UObject
{ 
public:
	class UHoudiniParameter*                           AssetParameter;                                             // 0x0030   (0x0008)  
	int32_t                                            TupleIndex;                                                 // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniHandleComponent
/// Size: 0x0030 (0x000220 - 0x000250)
class UHoudiniHandleComponent : public USceneComponent
{ 
public:
	TArray<class UHoudiniHandleParameter*>             XformParms;                                                 // 0x0218   (0x0010)  
	class UHoudiniHandleParameter*                     RSTParm;                                                    // 0x0228   (0x0008)  
	class UHoudiniHandleParameter*                     RotOrderParm;                                               // 0x0230   (0x0008)  
	EHoudiniHandleType                                 HandleType;                                                 // 0x0238   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0239   (0x0007)  MISSED
	SDK_UNDEFINED(16,5109) /* FString */               __um(HandleName);                                           // 0x0240   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInput
/// Size: 0x0200 (0x000030 - 0x000230)
class UHoudiniInput : public UObject
{ 
public:
	SDK_UNDEFINED(16,5110) /* FString */               __um(Name);                                                 // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,5111) /* FString */               __um(label);                                                // 0x0040   (0x0010)  
	EHoudiniInputType                                  Type;                                                       // 0x0050   (0x0001)  
	EHoudiniInputType                                  PreviousType;                                               // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0052   (0x0002)  MISSED
	int32_t                                            AssetNodeId;                                                // 0x0054   (0x0004)  
	int32_t                                            InputNodeId;                                                // 0x0058   (0x0004)  
	int32_t                                            InputIndex;                                                 // 0x005C   (0x0004)  
	int32_t                                            ParmId;                                                     // 0x0060   (0x0004)  
	bool                                               bIsObjectPathParameter;                                     // 0x0064   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0065   (0x0003)  MISSED
	TArray<int32_t>                                    CreatedDataNodeIds;                                         // 0x0068   (0x0010)  
	bool                                               bHasChanged;                                                // 0x0078   (0x0001)  
	bool                                               bNeedsToTriggerUpdate;                                      // 0x0079   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x007A   (0x0002)  MISSED
	FBox                                               CachedBounds;                                               // 0x007C   (0x001C)  
	SDK_UNDEFINED(16,5112) /* FString */               __um(Help);                                                 // 0x0098   (0x0010)  
	EHoudiniXformType                                  KeepWorldTransform;                                         // 0x00A8   (0x0001)  
	bool                                               bPackBeforeMerge;                                           // 0x00A9   (0x0001)  
	bool                                               bImportAsReference;                                         // 0x00AA   (0x0001)  
	bool                                               bImportAsReferenceRotScaleEnabled;                          // 0x00AB   (0x0001)  
	bool                                               bImportAsReferenceBboxEnabled;                              // 0x00AC   (0x0001)  
	bool                                               bImportAsReferenceMaterialEnabled;                          // 0x00AD   (0x0001)  
	bool                                               bExportLODs;                                                // 0x00AE   (0x0001)  
	bool                                               bExportSockets;                                             // 0x00AF   (0x0001)  
	bool                                               bExportColliders;                                           // 0x00B0   (0x0001)  
	bool                                               bExportMaterialParameters;                                  // 0x00B1   (0x0001)  
	bool                                               bCookOnCurveChanged;                                        // 0x00B2   (0x0001)  
	unsigned char                                      UnknownData03_5[0x5];                                       // 0x00B3   (0x0005)  MISSED
	TArray<class UHoudiniInputObject*>                 GeometryInputObjects;                                       // 0x00B8   (0x0010)  
	bool                                               bStaticMeshChanged;                                         // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x00C9   (0x0007)  MISSED
	TArray<class UHoudiniInputObject*>                 AssetInputObjects;                                          // 0x00D0   (0x0010)  
	bool                                               bInputAssetConnectedInHoudini;                              // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x00E1   (0x0007)  MISSED
	TArray<class UHoudiniInputObject*>                 CurveInputObjects;                                          // 0x00E8   (0x0010)  
	float                                              DefaultCurveOffset;                                         // 0x00F8   (0x0004)  
	bool                                               bAddRotAndScaleAttributesOnCurves;                          // 0x00FC   (0x0001)  
	bool                                               bUseLegacyInputCurves;                                      // 0x00FD   (0x0001)  
	unsigned char                                      UnknownData06_5[0x2];                                       // 0x00FE   (0x0002)  MISSED
	TArray<class UHoudiniInputObject*>                 LandscapeInputObjects;                                      // 0x0100   (0x0010)  
	bool                                               bLandscapeHasExportTypeChanged;                             // 0x0110   (0x0001)  
	unsigned char                                      UnknownData07_5[0x7];                                       // 0x0111   (0x0007)  MISSED
	TArray<class UHoudiniInputObject*>                 WorldInputObjects;                                          // 0x0118   (0x0010)  
	TArray<class AActor*>                              WorldInputBoundSelectorObjects;                             // 0x0128   (0x0010)  
	bool                                               bIsWorldInputBoundSelector;                                 // 0x0138   (0x0001)  
	bool                                               bWorldInputBoundSelectorAutoUpdate;                         // 0x0139   (0x0001)  
	unsigned char                                      UnknownData08_5[0x2];                                       // 0x013A   (0x0002)  MISSED
	float                                              UnrealSplineResolution;                                     // 0x013C   (0x0004)  
	TArray<class UHoudiniInputObject*>                 SkeletalInputObjects;                                       // 0x0140   (0x0010)  
	TArray<class UHoudiniInputObject*>                 GeometryCollectionInputObjects;                             // 0x0150   (0x0010)  
	SDK_UNDEFINED(80,5113) /* TSet<ULandscapeComponent*> */ __um(LandscapeSelectedComponents);                     // 0x0160   (0x0050)  
	SDK_UNDEFINED(80,5114) /* TSet<int32_t> */         __um(InputNodesPendingDelete);                              // 0x01B0   (0x0050)  
	TArray<class UHoudiniInputHoudiniSplineComponent*> LastInsertedInputs;                                         // 0x0200   (0x0010)  
	TArray<class UHoudiniInputObject*>                 LastUndoDeletedInputs;                                      // 0x0210   (0x0010)  
	bool                                               bUpdateInputLandscape;                                      // 0x0220   (0x0001)  
	EHoudiniLandscapeExportType                        LandscapeExportType;                                        // 0x0221   (0x0001)  
	bool                                               bLandscapeExportSelectionOnly;                              // 0x0222   (0x0001)  
	bool                                               bLandscapeAutoSelectComponent;                              // 0x0223   (0x0001)  
	bool                                               bLandscapeExportMaterials;                                  // 0x0224   (0x0001)  
	bool                                               bLandscapeExportLighting;                                   // 0x0225   (0x0001)  
	bool                                               bLandscapeExportNormalizedUVs;                              // 0x0226   (0x0001)  
	bool                                               bLandscapeExportTileUVs;                                    // 0x0227   (0x0001)  
	bool                                               bCanDeleteHoudiniNodes;                                     // 0x0228   (0x0001)  
	unsigned char                                      UnknownData09_6[0x7];                                       // 0x0229   (0x0007)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputObject
/// Size: 0x00D0 (0x000030 - 0x000100)
class UHoudiniInputObject : public UObject
{ 
public:
	SDK_UNDEFINED(48,5115) /* TWeakObjectPtr<UObject*> */ __um(InputObject);                                       // 0x0030   (0x0030)  
	FTransform                                         Transform;                                                  // 0x0060   (0x0030)  
	EHoudiniInputObjectType                            Type;                                                       // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0091   (0x0003)  MISSED
	int32_t                                            InputNodeId;                                                // 0x0094   (0x0004)  
	int32_t                                            InputObjectNodeId;                                          // 0x0098   (0x0004)  
	FGuid                                              Guid;                                                       // 0x009C   (0x0010)  
	unsigned char                                      UnknownData01_5[0x2C];                                      // 0x00AC   (0x002C)  MISSED
	bool                                               bHasChanged;                                                // 0x00D8   (0x0001)  
	bool                                               bNeedsToTriggerUpdate;                                      // 0x00D9   (0x0001)  
	bool                                               bTransformChanged;                                          // 0x00DA   (0x0001)  
	bool                                               bImportAsReference;                                         // 0x00DB   (0x0001)  
	bool                                               bImportAsReferenceRotScaleEnabled;                          // 0x00DC   (0x0001)  
	bool                                               bImportAsReferenceBboxEnabled;                              // 0x00DD   (0x0001)  
	bool                                               bImportAsReferenceMaterialEnabled;                          // 0x00DE   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x00DF   (0x0001)  MISSED
	SDK_UNDEFINED(16,5116) /* TArray<FString> */       __um(MaterialReferences);                                   // 0x00E0   (0x0010)  
	bool                                               bCanDeleteHoudiniNodes;                                     // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData03_6[0xF];                                       // 0x00F1   (0x000F)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputStaticMesh
/// Size: 0x0000 (0x000100 - 0x000100)
class UHoudiniInputStaticMesh : public UHoudiniInputObject
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputSkeletalMesh
/// Size: 0x0000 (0x000100 - 0x000100)
class UHoudiniInputSkeletalMesh : public UHoudiniInputObject
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputGeometryCollection
/// Size: 0x0000 (0x000100 - 0x000100)
class UHoudiniInputGeometryCollection : public UHoudiniInputObject
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputSceneComponent
/// Size: 0x0030 (0x000100 - 0x000130)
class UHoudiniInputSceneComponent : public UHoudiniInputObject
{ 
public:
	FTransform                                         ActorTransform;                                             // 0x0100   (0x0030)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputMeshComponent
/// Size: 0x0030 (0x000130 - 0x000160)
class UHoudiniInputMeshComponent : public UHoudiniInputSceneComponent
{ 
public:
	SDK_UNDEFINED(48,5117) /* TWeakObjectPtr<UStaticMesh*> */ __um(StaticMesh);                                    // 0x0130   (0x0030)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputInstancedMeshComponent
/// Size: 0x0010 (0x000160 - 0x000170)
class UHoudiniInputInstancedMeshComponent : public UHoudiniInputMeshComponent
{ 
public:
	TArray<FTransform>                                 InstanceTransforms;                                         // 0x0160   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputSplineComponent
/// Size: 0x0020 (0x000130 - 0x000150)
class UHoudiniInputSplineComponent : public UHoudiniInputSceneComponent
{ 
public:
	int32_t                                            NumberOfSplineControlPoints;                                // 0x0130   (0x0004)  
	float                                              SplineLength;                                               // 0x0134   (0x0004)  
	float                                              SplineResolution;                                           // 0x0138   (0x0004)  
	bool                                               SplineClosed;                                               // 0x013C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x013D   (0x0003)  MISSED
	TArray<FTransform>                                 SplineControlPoints;                                        // 0x0140   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputGeometryCollectionComponent
/// Size: 0x0000 (0x000130 - 0x000130)
class UHoudiniInputGeometryCollectionComponent : public UHoudiniInputSceneComponent
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputSkeletalMeshComponent
/// Size: 0x0000 (0x000130 - 0x000130)
class UHoudiniInputSkeletalMeshComponent : public UHoudiniInputSceneComponent
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputHoudiniSplineComponent
/// Size: 0x0010 (0x000100 - 0x000110)
class UHoudiniInputHoudiniSplineComponent : public UHoudiniInputObject
{ 
public:
	EHoudiniCurveType                                  CurveType;                                                  // 0x00F8   (0x0001)  
	EHoudiniCurveMethod                                CurveMethod;                                                // 0x00F9   (0x0001)  
	bool                                               Reversed;                                                   // 0x00FA   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x00FB   (0x0005)  MISSED
	class UHoudiniSplineComponent*                     CachedComponent;                                            // 0x0100   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0108   (0x0008)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputCameraComponent
/// Size: 0x0020 (0x000130 - 0x000150)
class UHoudiniInputCameraComponent : public UHoudiniInputSceneComponent
{ 
public:
	float                                              FOV;                                                        // 0x0130   (0x0004)  
	float                                              AspectRatio;                                                // 0x0134   (0x0004)  
	bool                                               bIsOrthographic;                                            // 0x0138   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0139   (0x0003)  MISSED
	float                                              OrthoWidth;                                                 // 0x013C   (0x0004)  
	float                                              OrthoNearClipPlane;                                         // 0x0140   (0x0004)  
	float                                              OrthoFarClipPlane;                                          // 0x0144   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0148   (0x0008)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputHoudiniAsset
/// Size: 0x0000 (0x000100 - 0x000100)
class UHoudiniInputHoudiniAsset : public UHoudiniInputObject
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputActor
/// Size: 0x0060 (0x000100 - 0x000160)
class UHoudiniInputActor : public UHoudiniInputObject
{ 
public:
	TArray<class UHoudiniInputSceneComponent*>         ActorComponents;                                            // 0x00F8   (0x0010)  
	SDK_UNDEFINED(80,5118) /* TSet<TWeakObjectPtr<UObject*>> */ __um(ActorSceneComponents);                        // 0x0108   (0x0050)  
	int32_t                                            LastUpdateNumComponentsAdded;                               // 0x0158   (0x0004)  
	int32_t                                            LastUpdateNumComponentsRemoved;                             // 0x015C   (0x0004)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputLandscape
/// Size: 0x0010 (0x000160 - 0x000170)
class UHoudiniInputLandscape : public UHoudiniInputActor
{ 
public:
	int32_t                                            CachedNumLandscapeComponents;                               // 0x0160   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0164   (0x000C)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniBrushInfo
/// Size: 0x0070 (0x000000 - 0x000070)
struct FHoudiniBrushInfo
{ 
	SDK_UNDEFINED(8,5119) /* TWeakObjectPtr<ABrush*> */ __um(BrushActor);                                          // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         CachedTransform;                                            // 0x0010   (0x0030)  
	FVector                                            CachedOrigin;                                               // 0x0040   (0x000C)  
	FVector                                            CachedExtent;                                               // 0x004C   (0x000C)  
	SDK_UNDEFINED(1,5120) /* TEnumAsByte<EBrushType> */ __um(CachedBrushType);                                     // 0x0058   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0059   (0x0007)  MISSED
	uint64_t                                           CachedSurfaceHash;                                          // 0x0060   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0068   (0x0008)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputBrush
/// Size: 0x0020 (0x000160 - 0x000180)
class UHoudiniInputBrush : public UHoudiniInputActor
{ 
public:
	TArray<FHoudiniBrushInfo>                          BrushesInfo;                                                // 0x0160   (0x0010)  
	class UModel*                                      CombinedModel;                                              // 0x0170   (0x0008)  
	bool                                               bIgnoreInputObject;                                         // 0x0178   (0x0001)  
	SDK_UNDEFINED(1,5121) /* TEnumAsByte<EBrushType> */ __um(CachedInputBrushType);                                // 0x0179   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x017A   (0x0006)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputDataTable
/// Size: 0x0000 (0x000100 - 0x000100)
class UHoudiniInputDataTable : public UHoudiniInputObject
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputFoliageType_InstancedStaticMesh
/// Size: 0x0000 (0x000100 - 0x000100)
class UHoudiniInputFoliageType_InstancedStaticMesh : public UHoudiniInputStaticMesh
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInputBlueprint
/// Size: 0x0060 (0x000100 - 0x000160)
class UHoudiniInputBlueprint : public UHoudiniInputObject
{ 
public:
	TArray<class UHoudiniInputSceneComponent*>         BPComponents;                                               // 0x00F8   (0x0010)  
	SDK_UNDEFINED(80,5122) /* TSet<TWeakObjectPtr<UObject*>> */ __um(BPSceneComponents);                           // 0x0108   (0x0050)  
	int32_t                                            LastUpdateNumComponentsAdded;                               // 0x0158   (0x0004)  
	int32_t                                            LastUpdateNumComponentsRemoved;                             // 0x015C   (0x0004)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniInstancedActorComponent
/// Size: 0x0010 (0x000220 - 0x000230)
class UHoudiniInstancedActorComponent : public USceneComponent
{ 
public:
	class UObject*                                     InstancedObject;                                            // 0x0218   (0x0008)  
	TArray<class AActor*>                              InstancedActors;                                            // 0x0220   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent
/// Size: 0x0020 (0x000220 - 0x000240)
class UHoudiniMeshSplitInstancerComponent : public USceneComponent
{ 
public:
	TArray<class UStaticMeshComponent*>                Instances;                                                  // 0x0218   (0x0010)  
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                          // 0x0228   (0x0010)  
	class UStaticMesh*                                 InstancedMesh;                                              // 0x0238   (0x0008)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniLandscapePtr
/// Size: 0x0040 (0x000030 - 0x000070)
class UHoudiniLandscapePtr : public UObject
{ 
public:
	SDK_UNDEFINED(48,5123) /* TWeakObjectPtr<ALandscapeProxy*> */ __um(LandscapeSoftPtr);                          // 0x0030   (0x0030)  
	EHoudiniLandscapeOutputBakeType                    BakeType;                                                   // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	FName                                              EditLayerName;                                              // 0x0064   (0x000C)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniLandscapeEditLayer
/// Size: 0x0040 (0x000030 - 0x000070)
class UHoudiniLandscapeEditLayer : public UObject
{ 
public:
	SDK_UNDEFINED(48,5124) /* TWeakObjectPtr<ALandscapeProxy*> */ __um(LandscapeSoftPtr);                          // 0x0030   (0x0030)  
	SDK_UNDEFINED(16,5125) /* FString */               __um(LayerName);                                            // 0x0060   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniMeshSocket
/// Size: 0x0060 (0x000000 - 0x000060)
struct FHoudiniMeshSocket
{ 
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0000   (0x0060)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniGeoPartObject
/// Size: 0x0230 (0x000000 - 0x000230)
struct FHoudiniGeoPartObject
{ 
	int32_t                                            AssetId;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,5126) /* FString */               __um(AssetName);                                            // 0x0008   (0x0010)  
	int32_t                                            ObjectId;                                                   // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	SDK_UNDEFINED(16,5127) /* FString */               __um(ObjectName);                                           // 0x0020   (0x0010)  
	int32_t                                            GeoId;                                                      // 0x0030   (0x0004)  
	int32_t                                            PartId;                                                     // 0x0034   (0x0004)  
	SDK_UNDEFINED(16,5128) /* FString */               __um(PartName);                                             // 0x0038   (0x0010)  
	bool                                               bHasCustomPartName;                                         // 0x0048   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	SDK_UNDEFINED(16,5129) /* TArray<FString> */       __um(SplitGroups);                                          // 0x0050   (0x0010)  
	FTransform                                         TransformMatrix;                                            // 0x0060   (0x0030)  
	SDK_UNDEFINED(16,5130) /* FString */               __um(NodePath);                                             // 0x0090   (0x0010)  
	EHoudiniPartType                                   Type;                                                       // 0x00A0   (0x0001)  
	EHoudiniInstancerType                              InstancerType;                                              // 0x00A1   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x00A2   (0x0006)  MISSED
	SDK_UNDEFINED(16,5131) /* FString */               __um(VolumeName);                                           // 0x00A8   (0x0010)  
	bool                                               bHasEditLayers;                                             // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x00B9   (0x0007)  MISSED
	SDK_UNDEFINED(16,5132) /* FString */               __um(VolumeLayerName);                                      // 0x00C0   (0x0010)  
	int32_t                                            VolumeTileIndex;                                            // 0x00D0   (0x0004)  
	bool                                               bIsVisible;                                                 // 0x00D4   (0x0001)  
	bool                                               bIsEditable;                                                // 0x00D5   (0x0001)  
	bool                                               bIsTemplated;                                               // 0x00D6   (0x0001)  
	bool                                               bIsInstanced;                                               // 0x00D7   (0x0001)  
	bool                                               bHasGeoChanged;                                             // 0x00D8   (0x0001)  
	bool                                               bHasPartChanged;                                            // 0x00D9   (0x0001)  
	bool                                               bHasTransformChanged;                                       // 0x00DA   (0x0001)  
	bool                                               bHasMaterialsChanged;                                       // 0x00DB   (0x0001)  
	unsigned char                                      UnknownData05_5[0x144];                                     // 0x00DC   (0x0144)  MISSED
	TArray<FHoudiniMeshSocket>                         AllMeshSockets;                                             // 0x0220   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniOutput
/// Size: 0x0188 (0x000030 - 0x0001B8)
class UHoudiniOutput : public UObject
{ 
public:
	EHoudiniOutputType                                 Type;                                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	TArray<FHoudiniGeoPartObject>                      HoudiniGeoPartObjects;                                      // 0x0038   (0x0010)  
	SDK_UNDEFINED(80,5133) /* TMap<FHoudiniOutputObjectIdentifier, FHoudiniOutputObject> */ __um(OutputObjects);   // 0x0048   (0x0050)  
	SDK_UNDEFINED(80,5134) /* TMap<FHoudiniOutputObjectIdentifier, FHoudiniInstancedOutput> */ __um(InstancedOutputs); // 0x0098   (0x0050)  
	SDK_UNDEFINED(80,5135) /* TMap<FString, UMaterialInterface*> */ __um(AssignementMaterials);                    // 0x00E8   (0x0050)  
	SDK_UNDEFINED(80,5136) /* TMap<FString, UMaterialInterface*> */ __um(ReplacementMaterials);                    // 0x0138   (0x0050)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0188   (0x0004)  MISSED
	bool                                               bLandscapeWorldComposition;                                 // 0x018C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x018D   (0x0003)  MISSED
	TArray<class AActor*>                              HoudiniCreatedSocketActors;                                 // 0x0190   (0x0010)  
	TArray<class AActor*>                              HoudiniAttachedSocketActors;                                // 0x01A0   (0x0010)  
	bool                                               bIsEditableNode;                                            // 0x01B0   (0x0001)  
	bool                                               bHasEditableNodeBuilt;                                      // 0x01B1   (0x0001)  
	bool                                               bIsUpdating;                                                // 0x01B2   (0x0001)  
	bool                                               bCanDeleteHoudiniNodes;                                     // 0x01B3   (0x0001)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x01B4   (0x0004)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameter
/// Size: 0x00E0 (0x000030 - 0x000110)
class UHoudiniParameter : public UObject
{ 
public:
	SDK_UNDEFINED(16,5137) /* FString */               __um(Name);                                                 // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,5138) /* FString */               __um(label);                                                // 0x0040   (0x0010)  
	EHoudiniParameterType                              ParmType;                                                   // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0051   (0x0003)  MISSED
	uint32_t                                           TupleSize;                                                  // 0x0054   (0x0004)  
	int32_t                                            NodeId;                                                     // 0x0058   (0x0004)  
	int32_t                                            ParmId;                                                     // 0x005C   (0x0004)  
	int32_t                                            ParentParmId;                                               // 0x0060   (0x0004)  
	int32_t                                            ChildIndex;                                                 // 0x0064   (0x0004)  
	bool                                               bIsVisible;                                                 // 0x0068   (0x0001)  
	bool                                               bIsParentFolderVisible;                                     // 0x0069   (0x0001)  
	bool                                               bIsDisabled;                                                // 0x006A   (0x0001)  
	bool                                               bHasChanged;                                                // 0x006B   (0x0001)  
	bool                                               bNeedsToTriggerUpdate;                                      // 0x006C   (0x0001)  
	bool                                               bIsDefault;                                                 // 0x006D   (0x0001)  
	bool                                               bIsSpare;                                                   // 0x006E   (0x0001)  
	bool                                               bJoinNext;                                                  // 0x006F   (0x0001)  
	bool                                               bIsChildOfMultiParm;                                        // 0x0070   (0x0001)  
	bool                                               bIsDirectChildOfMultiParm;                                  // 0x0071   (0x0001)  
	bool                                               bPendingRevertToDefault;                                    // 0x0072   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x0073   (0x0005)  MISSED
	TArray<int32_t>                                    TuplePendingRevertToDefault;                                // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,5139) /* FString */               __um(Help);                                                 // 0x0088   (0x0010)  
	uint32_t                                           TagCount;                                                   // 0x0098   (0x0004)  
	int32_t                                            ValueIndex;                                                 // 0x009C   (0x0004)  
	bool                                               bHasExpression;                                             // 0x00A0   (0x0001)  
	bool                                               bShowExpression;                                            // 0x00A1   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x00A2   (0x0006)  MISSED
	SDK_UNDEFINED(16,5140) /* FString */               __um(ParamExpression);                                      // 0x00A8   (0x0010)  
	SDK_UNDEFINED(80,5141) /* TMap<FString, FString> */ __um(Tags);                                                // 0x00B8   (0x0050)  
	bool                                               bAutoUpdate;                                                // 0x0108   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0109   (0x0007)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterButton
/// Size: 0x0000 (0x000110 - 0x000110)
class UHoudiniParameterButton : public UHoudiniParameter
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterButtonStrip
/// Size: 0x0028 (0x000110 - 0x000138)
class UHoudiniParameterButtonStrip : public UHoudiniParameter
{ 
public:
	int32_t                                            Count;                                                      // 0x0110   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0114   (0x0004)  MISSED
	SDK_UNDEFINED(16,5142) /* TArray<FString> */       __um(Labels);                                               // 0x0118   (0x0010)  
	TArray<int32_t>                                    Values;                                                     // 0x0128   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterChoice
/// Size: 0x0070 (0x000110 - 0x000180)
class UHoudiniParameterChoice : public UHoudiniParameter
{ 
public:
	int32_t                                            IntValue;                                                   // 0x0110   (0x0004)  
	int32_t                                            DefaultIntValue;                                            // 0x0114   (0x0004)  
	SDK_UNDEFINED(16,5143) /* FString */               __um(StringValue);                                          // 0x0118   (0x0010)  
	SDK_UNDEFINED(16,5144) /* FString */               __um(DefaultStringValue);                                   // 0x0128   (0x0010)  
	SDK_UNDEFINED(16,5145) /* TArray<FString> */       __um(StringChoiceValues);                                   // 0x0138   (0x0010)  
	SDK_UNDEFINED(16,5146) /* TArray<FString> */       __um(StringChoiceLabels);                                   // 0x0148   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0158   (0x0010)  MISSED
	bool                                               bIsChildOfRamp;                                             // 0x0168   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0169   (0x0007)  MISSED
	TArray<int32_t>                                    IntValuesArray;                                             // 0x0170   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterColor
/// Size: 0x0028 (0x000110 - 0x000138)
class UHoudiniParameterColor : public UHoudiniParameter
{ 
public:
	FLinearColor                                       Color;                                                      // 0x0110   (0x0010)  
	FLinearColor                                       DefaultColor;                                               // 0x0120   (0x0010)  
	bool                                               bIsChildOfRamp;                                             // 0x0130   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0131   (0x0007)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterFile
/// Size: 0x0038 (0x000110 - 0x000148)
class UHoudiniParameterFile : public UHoudiniParameter
{ 
public:
	SDK_UNDEFINED(16,5147) /* TArray<FString> */       __um(Values);                                               // 0x0110   (0x0010)  
	SDK_UNDEFINED(16,5148) /* TArray<FString> */       __um(DefaultValues);                                        // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,5149) /* FString */               __um(Filters);                                              // 0x0130   (0x0010)  
	bool                                               bIsReadOnly;                                                // 0x0140   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0141   (0x0007)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterFloat
/// Size: 0x0050 (0x000110 - 0x000160)
class UHoudiniParameterFloat : public UHoudiniParameter
{ 
public:
	TArray<float>                                      Values;                                                     // 0x0110   (0x0010)  
	TArray<float>                                      DefaultValues;                                              // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,5150) /* FString */               __um(Unit);                                                 // 0x0130   (0x0010)  
	bool                                               bNoSwap;                                                    // 0x0140   (0x0001)  
	bool                                               bHasMin;                                                    // 0x0141   (0x0001)  
	bool                                               bHasMax;                                                    // 0x0142   (0x0001)  
	bool                                               bHasUIMin;                                                  // 0x0143   (0x0001)  
	bool                                               bHasUIMax;                                                  // 0x0144   (0x0001)  
	bool                                               bIsLogarithmic;                                             // 0x0145   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0146   (0x0002)  MISSED
	float                                              Min;                                                        // 0x0148   (0x0004)  
	float                                              Max;                                                        // 0x014C   (0x0004)  
	float                                              UIMin;                                                      // 0x0150   (0x0004)  
	float                                              UIMax;                                                      // 0x0154   (0x0004)  
	bool                                               bIsChildOfRamp;                                             // 0x0158   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0159   (0x0007)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterFolder
/// Size: 0x0010 (0x000110 - 0x000120)
class UHoudiniParameterFolder : public UHoudiniParameter
{ 
public:
	EHoudiniFolderParameterType                        FolderType;                                                 // 0x0110   (0x0001)  
	bool                                               bExpanded;                                                  // 0x0111   (0x0001)  
	bool                                               bChosen;                                                    // 0x0112   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0113   (0x0001)  MISSED
	int32_t                                            ChildCounter;                                               // 0x0114   (0x0004)  
	bool                                               bIsContentShown;                                            // 0x0118   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0119   (0x0007)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterFolderList
/// Size: 0x0018 (0x000110 - 0x000128)
class UHoudiniParameterFolderList : public UHoudiniParameter
{ 
public:
	bool                                               bIsTabMenu;                                                 // 0x0110   (0x0001)  
	bool                                               bIsTabsShown;                                               // 0x0111   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0112   (0x0006)  MISSED
	TArray<class UHoudiniParameterFolder*>             TabFolders;                                                 // 0x0118   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterInt
/// Size: 0x0048 (0x000110 - 0x000158)
class UHoudiniParameterInt : public UHoudiniParameter
{ 
public:
	TArray<int32_t>                                    Values;                                                     // 0x0110   (0x0010)  
	TArray<int32_t>                                    DefaultValues;                                              // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,5151) /* FString */               __um(Unit);                                                 // 0x0130   (0x0010)  
	bool                                               bHasMin;                                                    // 0x0140   (0x0001)  
	bool                                               bHasMax;                                                    // 0x0141   (0x0001)  
	bool                                               bHasUIMin;                                                  // 0x0142   (0x0001)  
	bool                                               bHasUIMax;                                                  // 0x0143   (0x0001)  
	bool                                               bIsLogarithmic;                                             // 0x0144   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0145   (0x0003)  MISSED
	int32_t                                            Min;                                                        // 0x0148   (0x0004)  
	int32_t                                            Max;                                                        // 0x014C   (0x0004)  
	int32_t                                            UIMin;                                                      // 0x0150   (0x0004)  
	int32_t                                            UIMax;                                                      // 0x0154   (0x0004)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterLabel
/// Size: 0x0010 (0x000110 - 0x000120)
class UHoudiniParameterLabel : public UHoudiniParameter
{ 
public:
	SDK_UNDEFINED(16,5152) /* TArray<FString> */       __um(LabelStrings);                                         // 0x0110   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterMultiParm
/// Size: 0x0048 (0x000110 - 0x000158)
class UHoudiniParameterMultiParm : public UHoudiniParameter
{ 
public:
	bool                                               bIsShown;                                                   // 0x0110   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0111   (0x0003)  MISSED
	int32_t                                            value;                                                      // 0x0114   (0x0004)  
	SDK_UNDEFINED(16,5153) /* FString */               __um(TemplateName);                                         // 0x0118   (0x0010)  
	int32_t                                            MultiparmValue;                                             // 0x0128   (0x0004)  
	uint32_t                                           MultiParmInstanceNum;                                       // 0x012C   (0x0004)  
	uint32_t                                           MultiParmInstanceLength;                                    // 0x0130   (0x0004)  
	uint32_t                                           MultiParmInstanceCount;                                     // 0x0134   (0x0004)  
	uint32_t                                           InstanceStartOffset;                                        // 0x0138   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x013C   (0x0004)  MISSED
	TArray<EHoudiniMultiParmModificationType>          MultiParmInstanceLastModifyArray;                           // 0x0140   (0x0010)  
	int32_t                                            DefaultInstanceCount;                                       // 0x0150   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0154   (0x0004)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterOperatorPath
/// Size: 0x0008 (0x000110 - 0x000118)
class UHoudiniParameterOperatorPath : public UHoudiniParameter
{ 
public:
	SDK_UNDEFINED(8,5154) /* TWeakObjectPtr<UHoudiniInput*> */ __um(HoudiniInput);                                 // 0x0110   (0x0008)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterRampModificationEvent
/// Size: 0x0028 (0x000030 - 0x000058)
class UHoudiniParameterRampModificationEvent : public UObject
{ 
public:
	bool                                               bIsInsertEvent;                                             // 0x0030   (0x0001)  
	bool                                               bIsFloatRamp;                                               // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0032   (0x0002)  MISSED
	int32_t                                            DeleteInstanceIndex;                                        // 0x0034   (0x0004)  
	float                                              InsertPosition;                                             // 0x0038   (0x0004)  
	float                                              InsertFloat;                                                // 0x003C   (0x0004)  
	FLinearColor                                       InsertColor;                                                // 0x0040   (0x0010)  
	EHoudiniRampInterpolationType                      InsertInterpolation;                                        // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterRampFloatPoint
/// Size: 0x0028 (0x000030 - 0x000058)
class UHoudiniParameterRampFloatPoint : public UObject
{ 
public:
	float                                              position;                                                   // 0x0030   (0x0004)  
	float                                              value;                                                      // 0x0034   (0x0004)  
	EHoudiniRampInterpolationType                      Interpolation;                                              // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            InstanceIndex;                                              // 0x003C   (0x0004)  
	class UHoudiniParameterFloat*                      PositionParentParm;                                         // 0x0040   (0x0008)  
	class UHoudiniParameterFloat*                      ValueParentParm;                                            // 0x0048   (0x0008)  
	class UHoudiniParameterChoice*                     InterpolationParentParm;                                    // 0x0050   (0x0008)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterRampColorPoint
/// Size: 0x0038 (0x000030 - 0x000068)
class UHoudiniParameterRampColorPoint : public UObject
{ 
public:
	float                                              position;                                                   // 0x0030   (0x0004)  
	FLinearColor                                       value;                                                      // 0x0034   (0x0010)  
	EHoudiniRampInterpolationType                      Interpolation;                                              // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0045   (0x0003)  MISSED
	int32_t                                            InstanceIndex;                                              // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	class UHoudiniParameterFloat*                      PositionParentParm;                                         // 0x0050   (0x0008)  
	class UHoudiniParameterColor*                      ValueParentParm;                                            // 0x0058   (0x0008)  
	class UHoudiniParameterChoice*                     InterpolationParentParm;                                    // 0x0060   (0x0008)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterRampFloat
/// Size: 0x0068 (0x000158 - 0x0001C0)
class UHoudiniParameterRampFloat : public UHoudiniParameterMultiParm
{ 
public:
	TArray<class UHoudiniParameterRampFloatPoint*>     Points;                                                     // 0x0158   (0x0010)  
	TArray<class UHoudiniParameterRampFloatPoint*>     CachedPoints;                                               // 0x0168   (0x0010)  
	TArray<float>                                      DefaultPositions;                                           // 0x0178   (0x0010)  
	TArray<float>                                      DefaultValues;                                              // 0x0188   (0x0010)  
	TArray<int32_t>                                    DefaultChoices;                                             // 0x0198   (0x0010)  
	int32_t                                            NumDefaultPoints;                                           // 0x01A8   (0x0004)  
	bool                                               bCaching;                                                   // 0x01AC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01AD   (0x0003)  MISSED
	TArray<class UHoudiniParameterRampModificationEvent*> ModificationEvents;                                      // 0x01B0   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterRampColor
/// Size: 0x0070 (0x000158 - 0x0001C8)
class UHoudiniParameterRampColor : public UHoudiniParameterMultiParm
{ 
public:
	TArray<class UHoudiniParameterRampColorPoint*>     Points;                                                     // 0x0158   (0x0010)  
	bool                                               bCaching;                                                   // 0x0168   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0169   (0x0007)  MISSED
	TArray<class UHoudiniParameterRampColorPoint*>     CachedPoints;                                               // 0x0170   (0x0010)  
	TArray<float>                                      DefaultPositions;                                           // 0x0180   (0x0010)  
	TArray<FLinearColor>                               DefaultValues;                                              // 0x0190   (0x0010)  
	TArray<int32_t>                                    DefaultChoices;                                             // 0x01A0   (0x0010)  
	int32_t                                            NumDefaultPoints;                                           // 0x01B0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x01B4   (0x0004)  MISSED
	TArray<class UHoudiniParameterRampModificationEvent*> ModificationEvents;                                      // 0x01B8   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterSeparator
/// Size: 0x0000 (0x000110 - 0x000110)
class UHoudiniParameterSeparator : public UHoudiniParameter
{ 
public:
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterString
/// Size: 0x0038 (0x000110 - 0x000148)
class UHoudiniParameterString : public UHoudiniParameter
{ 
public:
	SDK_UNDEFINED(16,5155) /* TArray<FString> */       __um(Values);                                               // 0x0110   (0x0010)  
	SDK_UNDEFINED(16,5156) /* TArray<FString> */       __um(DefaultValues);                                        // 0x0120   (0x0010)  
	TArray<class UObject*>                             ChosenAssets;                                               // 0x0130   (0x0010)  
	bool                                               bIsAssetRef;                                                // 0x0140   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0141   (0x0007)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniParameterToggle
/// Size: 0x0020 (0x000110 - 0x000130)
class UHoudiniParameterToggle : public UHoudiniParameter
{ 
public:
	TArray<int32_t>                                    Values;                                                     // 0x0110   (0x0010)  
	TArray<int32_t>                                    DefaultValues;                                              // 0x0120   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.OutputActorOwner
/// Size: 0x0010 (0x000000 - 0x000010)
struct FOutputActorOwner
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	class AActor*                                      OutputActor;                                                // 0x0008   (0x0008)  
};

/// Struct /Script/HoudiniEngineRuntime.TOPWorkResultObject
/// Size: 0x0058 (0x000000 - 0x000058)
struct FTOPWorkResultObject
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	SDK_UNDEFINED(16,5157) /* FString */               __um(Name);                                                 // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,5158) /* FString */               __um(FilePath);                                             // 0x0018   (0x0010)  
	EPDGWorkResultState                                State;                                                      // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            WorkItemResultInfoIndex;                                    // 0x002C   (0x0004)  
	TArray<class UHoudiniOutput*>                      ResultOutputs;                                              // 0x0030   (0x0010)  
	bool                                               bAutoBakedSinceLastLoad;                                    // 0x0040   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	FOutputActorOwner                                  OutputActorOwner;                                           // 0x0048   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.TOPWorkResult
/// Size: 0x0018 (0x000000 - 0x000018)
struct FTOPWorkResult
{ 
	int32_t                                            WorkItemIndex;                                              // 0x0000   (0x0004)  
	int32_t                                            WorkItemID;                                                 // 0x0004   (0x0004)  
	TArray<FTOPWorkResultObject>                       ResultObjects;                                              // 0x0008   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.WorkItemTallyBase
/// Size: 0x0008 (0x000000 - 0x000008)
struct FWorkItemTallyBase
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.WorkItemTally
/// Size: 0x0230 (0x000008 - 0x000238)
struct FWorkItemTally : FWorkItemTallyBase
{ 
	SDK_UNDEFINED(80,5159) /* TSet<int32_t> */         __um(AllWorkItems);                                         // 0x0008   (0x0050)  
	SDK_UNDEFINED(80,5160) /* TSet<int32_t> */         __um(WaitingWorkItems);                                     // 0x0058   (0x0050)  
	SDK_UNDEFINED(80,5161) /* TSet<int32_t> */         __um(ScheduledWorkItems);                                   // 0x00A8   (0x0050)  
	SDK_UNDEFINED(80,5162) /* TSet<int32_t> */         __um(CookingWorkItems);                                     // 0x00F8   (0x0050)  
	SDK_UNDEFINED(80,5163) /* TSet<int32_t> */         __um(CookedWorkItems);                                      // 0x0148   (0x0050)  
	SDK_UNDEFINED(80,5164) /* TSet<int32_t> */         __um(ErroredWorkItems);                                     // 0x0198   (0x0050)  
	SDK_UNDEFINED(80,5165) /* TSet<int32_t> */         __um(CookCancelledWorkItems);                               // 0x01E8   (0x0050)  
};

/// Struct /Script/HoudiniEngineRuntime.AggregatedWorkItemTally
/// Size: 0x0020 (0x000008 - 0x000028)
struct FAggregatedWorkItemTally : FWorkItemTallyBase
{ 
	int32_t                                            TotalWorkItems;                                             // 0x0008   (0x0004)  
	int32_t                                            WaitingWorkItems;                                           // 0x000C   (0x0004)  
	int32_t                                            ScheduledWorkItems;                                         // 0x0010   (0x0004)  
	int32_t                                            CookingWorkItems;                                           // 0x0014   (0x0004)  
	int32_t                                            CookedWorkItems;                                            // 0x0018   (0x0004)  
	int32_t                                            ErroredWorkItems;                                           // 0x001C   (0x0004)  
	int32_t                                            CookCancelledWorkItems;                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.TOPNode
/// Size: 0x0400 (0x000030 - 0x000430)
class UTOPNode : public UObject
{ 
public:
	int32_t                                            NodeId;                                                     // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	SDK_UNDEFINED(16,5166) /* FString */               __um(NodeName);                                             // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,5167) /* FString */               __um(NodePath);                                             // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,5168) /* FString */               __um(ParentName);                                           // 0x0058   (0x0010)  
	class UObject*                                     WorkResultParent;                                           // 0x0068   (0x0008)  
	TArray<FTOPWorkResult>                             WorkResult;                                                 // 0x0070   (0x0010)  
	bool                                               bHidden;                                                    // 0x0080   (0x0001)  
	bool                                               bAutoLoad;                                                  // 0x0081   (0x0001)  
	EPDGNodeState                                      NodeState;                                                  // 0x0082   (0x0001)  
	bool                                               bCachedHaveNotLoadedWorkResults;                            // 0x0083   (0x0001)  
	bool                                               bCachedHaveLoadedWorkResults;                               // 0x0084   (0x0001)  
	bool                                               bHasChildNodes;                                             // 0x0085   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0086   (0x0002)  MISSED
	SDK_UNDEFINED(80,5169) /* TSet<FString> */         __um(ClearedLandscapeLayers);                               // 0x0088   (0x0050)  
	unsigned char                                      UnknownData02_5[0x88];                                      // 0x00D8   (0x0088)  MISSED
	bool                                               bShow;                                                      // 0x0160   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0161   (0x0007)  MISSED
	SDK_UNDEFINED(80,5170) /* TMap<FString, FHoudiniPDGWorkResultObjectBakedOutput> */ __um(BakedWorkResultObjectOutputs); // 0x0168   (0x0050)  
	FWorkItemTally                                     WorkItemTally;                                              // 0x01B8   (0x0238)  
	FAggregatedWorkItemTally                           AggregatedWorkItemTally;                                    // 0x03F0   (0x0028)  
	bool                                               bHasReceivedCookCompleteEvent;                              // 0x0418   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0419   (0x0007)  MISSED
	FOutputActorOwner                                  OutputActorOwner;                                           // 0x0420   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.TOPNetwork
/// Size: 0x0070 (0x000030 - 0x0000A0)
class UTOPNetwork : public UObject
{ 
public:
	int32_t                                            NodeId;                                                     // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	SDK_UNDEFINED(16,5171) /* FString */               __um(NodeName);                                             // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,5172) /* FString */               __um(NodePath);                                             // 0x0048   (0x0010)  
	TArray<class UTOPNode*>                            AllTOPNodes;                                                // 0x0058   (0x0010)  
	int32_t                                            SelectedTOPIndex;                                           // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	SDK_UNDEFINED(16,5173) /* FString */               __um(ParentName);                                           // 0x0070   (0x0010)  
	bool                                               bShowResults;                                               // 0x0080   (0x0001)  
	bool                                               bAutoLoadResults;                                           // 0x0081   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1E];                                      // 0x0082   (0x001E)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniPDGAssetLink
/// Size: 0x0108 (0x000030 - 0x000138)
class UHoudiniPDGAssetLink : public UObject
{ 
public:
	SDK_UNDEFINED(16,5174) /* FString */               __um(AssetName);                                            // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,5175) /* FString */               __um(AssetNodePath);                                        // 0x0040   (0x0010)  
	int32_t                                            AssetId;                                                    // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	TArray<class UTOPNetwork*>                         AllTOPNetworks;                                             // 0x0058   (0x0010)  
	int32_t                                            SelectedTOPNetworkIndex;                                    // 0x0068   (0x0004)  
	EPDGLinkState                                      LinkState;                                                  // 0x006C   (0x0001)  
	bool                                               bAutoCook;                                                  // 0x006D   (0x0001)  
	bool                                               bUseTOPNodeFilter;                                          // 0x006E   (0x0001)  
	bool                                               bUseTOPOutputFilter;                                        // 0x006F   (0x0001)  
	SDK_UNDEFINED(16,5176) /* FString */               __um(TOPNodeFilter);                                        // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,5177) /* FString */               __um(TOPOutputFilter);                                      // 0x0080   (0x0010)  
	int32_t                                            NumWorkItems;                                               // 0x0090   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0094   (0x0004)  MISSED
	FAggregatedWorkItemTally                           WorkItemTally;                                              // 0x0098   (0x0028)  
	SDK_UNDEFINED(16,5178) /* FString */               __um(OutputCachePath);                                      // 0x00C0   (0x0010)  
	bool                                               bNeedsUIRefresh;                                            // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00D1   (0x0007)  MISSED
	class AActor*                                      OutputParentActor;                                          // 0x00D8   (0x0008)  
	FDirectoryPath                                     BakeFolder;                                                 // 0x00E0   (0x0010)  
	unsigned char                                      UnknownData03_6[0x48];                                      // 0x00F0   (0x0048)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniRuntimeSettings
/// Size: 0x02E8 (0x000030 - 0x000318)
class UHoudiniRuntimeSettings : public UObject
{ 
public:
	SDK_UNDEFINED(1,5179) /* TEnumAsByte<EHoudiniRuntimeSettingsSessionType> */ __um(SessionType);                 // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	SDK_UNDEFINED(16,5180) /* FString */               __um(ServerHost);                                           // 0x0038   (0x0010)  
	int32_t                                            ServerPort;                                                 // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	SDK_UNDEFINED(16,5181) /* FString */               __um(ServerPipeName);                                       // 0x0050   (0x0010)  
	bool                                               bStartAutomaticServer;                                      // 0x0060   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	float                                              AutomaticServerTimeout;                                     // 0x0064   (0x0004)  
	bool                                               bSyncWithHoudiniCook;                                       // 0x0068   (0x0001)  
	bool                                               bCookUsingHoudiniTime;                                      // 0x0069   (0x0001)  
	bool                                               bSyncViewport;                                              // 0x006A   (0x0001)  
	bool                                               bSyncHoudiniViewport;                                       // 0x006B   (0x0001)  
	bool                                               bSyncUnrealViewport;                                        // 0x006C   (0x0001)  
	bool                                               bShowMultiAssetDialog;                                      // 0x006D   (0x0001)  
	bool                                               bPreferHdaMemoryCopyOverHdaSourceFile;                      // 0x006E   (0x0001)  
	bool                                               bPauseCookingOnStart;                                       // 0x006F   (0x0001)  
	bool                                               bDisplaySlateCookingNotifications;                          // 0x0070   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0071   (0x0007)  MISSED
	SDK_UNDEFINED(16,5182) /* FString */               __um(DefaultTemporaryCookFolder);                           // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,5183) /* FString */               __um(DefaultBakeFolder);                                    // 0x0088   (0x0010)  
	bool                                               bEnableTheReferenceCountedInputSystem;                      // 0x0098   (0x0001)  
	bool                                               MarshallingLandscapesUseDefaultUnrealScaling;               // 0x0099   (0x0001)  
	bool                                               MarshallingLandscapesUseFullResolution;                     // 0x009A   (0x0001)  
	bool                                               MarshallingLandscapesForceMinMaxValues;                     // 0x009B   (0x0001)  
	float                                              MarshallingLandscapesForcedMinValue;                        // 0x009C   (0x0004)  
	float                                              MarshallingLandscapesForcedMaxValue;                        // 0x00A0   (0x0004)  
	bool                                               bAddRotAndScaleAttributesOnCurves;                          // 0x00A4   (0x0001)  
	bool                                               bUseLegacyInputCurves;                                      // 0x00A5   (0x0001)  
	unsigned char                                      UnknownData04_5[0x2];                                       // 0x00A6   (0x0002)  MISSED
	float                                              MarshallingSplineResolution;                                // 0x00A8   (0x0004)  
	bool                                               bEnableProxyStaticMesh;                                     // 0x00AC   (0x0001)  
	bool                                               bShowDefaultMesh;                                           // 0x00AD   (0x0001)  
	bool                                               bEnableProxyStaticMeshRefinementByTimer;                    // 0x00AE   (0x0001)  
	unsigned char                                      UnknownData05_5[0x1];                                       // 0x00AF   (0x0001)  MISSED
	float                                              ProxyMeshAutoRefineTimeoutSeconds;                          // 0x00B0   (0x0004)  
	bool                                               bEnableProxyStaticMeshRefinementOnPreSaveWorld;             // 0x00B4   (0x0001)  
	bool                                               bEnableProxyStaticMeshRefinementOnPreBeginPIE;              // 0x00B5   (0x0001)  
	unsigned char                                      UnknownData06_5[0x2];                                       // 0x00B6   (0x0002)  MISSED
	bool                                               bDoubleSidedGeometry : 1;                                   // 0x00B8:0 (0x0001)  
	unsigned char                                      UnknownData07_4[0x7];                                       // 0x00B9   (0x0007)  MISSED
	class UPhysicalMaterial*                           PhysMaterial;                                               // 0x00C0   (0x0008)  
	FBodyInstance                                      DefaultBodyInstance;                                        // 0x00C8   (0x0160)  
	SDK_UNDEFINED(1,5184) /* TEnumAsByte<ECollisionTraceFlag> */ __um(CollisionTraceFlag);                         // 0x0228   (0x0001)  
	unsigned char                                      UnknownData08_5[0x3];                                       // 0x0229   (0x0003)  MISSED
	int32_t                                            LightMapResolution;                                         // 0x022C   (0x0004)  
	float                                              LpvBiasMultiplier;                                          // 0x0230   (0x0004)  
	float                                              GeneratedDistanceFieldResolutionScale;                      // 0x0234   (0x0004)  
	FWalkableSlopeOverride                             WalkableSlopeOverride;                                      // 0x0238   (0x0010)  
	int32_t                                            LightMapCoordinateIndex;                                    // 0x0248   (0x0004)  
	bool                                               bUseMaximumStreamingTexelRatio : 1;                         // 0x024C:0 (0x0001)  
	unsigned char                                      UnknownData09_4[0x3];                                       // 0x024D   (0x0003)  MISSED
	float                                              StreamingDistanceMultiplier;                                // 0x0250   (0x0004)  
	unsigned char                                      UnknownData10_5[0x4];                                       // 0x0254   (0x0004)  MISSED
	class UFoliageType_InstancedStaticMesh*            FoliageDefaultSettings;                                     // 0x0258   (0x0008)  
	TArray<class UAssetUserData*>                      AssetUserData;                                              // 0x0260   (0x0010)  
	bool                                               bUseFullPrecisionUVs;                                       // 0x0270   (0x0001)  
	unsigned char                                      UnknownData11_5[0x3];                                       // 0x0271   (0x0003)  MISSED
	int32_t                                            SrcLightmapIndex;                                           // 0x0274   (0x0004)  
	int32_t                                            DstLightmapIndex;                                           // 0x0278   (0x0004)  
	int32_t                                            MinLightmapResolution;                                      // 0x027C   (0x0004)  
	bool                                               bRemoveDegenerates;                                         // 0x0280   (0x0001)  
	SDK_UNDEFINED(1,5185) /* TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag> */ __um(GenerateLightmapUVsFlag);   // 0x0281   (0x0001)  
	SDK_UNDEFINED(1,5186) /* TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag> */ __um(RecomputeNormalsFlag);      // 0x0282   (0x0001)  
	SDK_UNDEFINED(1,5187) /* TEnumAsByte<EHoudiniRuntimeSettingsRecomputeFlag> */ __um(RecomputeTangentsFlag);     // 0x0283   (0x0001)  
	bool                                               bUseMikkTSpace;                                             // 0x0284   (0x0001)  
	bool                                               bBuildAdjacencyBuffer;                                      // 0x0285   (0x0001)  
	bool                                               bComputeWeightedNormals : 1;                                // 0x0286:0 (0x0001)  
	bool                                               bBuildReversedIndexBuffer : 1;                              // 0x0286:1 (0x0001)  
	bool                                               bUseHighPrecisionTangentBasis : 1;                          // 0x0286:2 (0x0001)  
	unsigned char                                      UnknownData12_4[0x1];                                       // 0x0287   (0x0001)  MISSED
	float                                              DistanceFieldResolutionScale;                               // 0x0288   (0x0004)  
	bool                                               bGenerateDistanceFieldAsIfTwoSided : 1;                     // 0x028C:0 (0x0001)  
	bool                                               bSupportFaceRemap : 1;                                      // 0x028C:1 (0x0001)  
	bool                                               bPDGAsyncCommandletImportEnabled;                           // 0x028D   (0x0001)  
	bool                                               bEnableBackwardCompatibility;                               // 0x028E   (0x0001)  
	bool                                               bAutomaticLegacyHDARebuild;                                 // 0x028F   (0x0001)  
	bool                                               bUseCustomHoudiniLocation;                                  // 0x0290   (0x0001)  
	unsigned char                                      UnknownData13_5[0x7];                                       // 0x0291   (0x0007)  MISSED
	FDirectoryPath                                     CustomHoudiniLocation;                                      // 0x0298   (0x0010)  
	SDK_UNDEFINED(1,5188) /* TEnumAsByte<EHoudiniExecutableType> */ __um(HoudiniExecutable);                       // 0x02A8   (0x0001)  
	unsigned char                                      UnknownData14_5[0x7];                                       // 0x02A9   (0x0007)  MISSED
	FDirectoryPath                                     CustomHoudiniHomeLocation;                                  // 0x02B0   (0x0010)  
	int32_t                                            CookingThreadStackSize;                                     // 0x02C0   (0x0004)  
	unsigned char                                      UnknownData15_5[0x4];                                       // 0x02C4   (0x0004)  MISSED
	SDK_UNDEFINED(16,5189) /* FString */               __um(HoudiniEnvironmentFiles);                              // 0x02C8   (0x0010)  
	SDK_UNDEFINED(16,5190) /* FString */               __um(OtlSearchPath);                                        // 0x02D8   (0x0010)  
	SDK_UNDEFINED(16,5191) /* FString */               __um(DsoSearchPath);                                        // 0x02E8   (0x0010)  
	SDK_UNDEFINED(16,5192) /* FString */               __um(ImageDsoSearchPath);                                   // 0x02F8   (0x0010)  
	SDK_UNDEFINED(16,5193) /* FString */               __um(AudioDsoSearchPath);                                   // 0x0308   (0x0010)  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniSplineComponent
/// Size: 0x02A0 (0x000220 - 0x0004C0)
class UHoudiniSplineComponent : public USceneComponent
{ 
public:
	TArray<FTransform>                                 CurvePoints;                                                // 0x0220   (0x0010)  
	TArray<FVector>                                    DisplayPoints;                                              // 0x0230   (0x0010)  
	TArray<int32_t>                                    DisplayPointIndexDivider;                                   // 0x0240   (0x0010)  
	SDK_UNDEFINED(16,5194) /* FString */               __um(HoudiniSplineName);                                    // 0x0250   (0x0010)  
	bool                                               bClosed;                                                    // 0x0260   (0x0001)  
	bool                                               bReversed;                                                  // 0x0261   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0262   (0x0002)  MISSED
	int32_t                                            CurveOrder;                                                 // 0x0264   (0x0004)  
	bool                                               bIsHoudiniSplineVisible;                                    // 0x0268   (0x0001)  
	EHoudiniCurveType                                  CurveType;                                                  // 0x0269   (0x0001)  
	EHoudiniCurveMethod                                CurveMethod;                                                // 0x026A   (0x0001)  
	EHoudiniCurveBreakpointParameterization            CurveBreakpointParameterization;                            // 0x026B   (0x0001)  
	bool                                               bIsOutputCurve;                                             // 0x026C   (0x0001)  
	bool                                               bCookOnCurveChanged;                                        // 0x026D   (0x0001)  
	bool                                               bIsLegacyInputCurve;                                        // 0x026E   (0x0001)  
	unsigned char                                      UnknownData01_5[0x231];                                     // 0x026F   (0x0231)  MISSED
	bool                                               bHasChanged;                                                // 0x04A0   (0x0001)  
	bool                                               bNeedsToTriggerUpdate;                                      // 0x04A1   (0x0001)  
	bool                                               bIsInputCurve;                                              // 0x04A2   (0x0001)  
	bool                                               bIsEditableOutputCurve;                                     // 0x04A3   (0x0001)  
	int32_t                                            NodeId;                                                     // 0x04A4   (0x0004)  
	SDK_UNDEFINED(16,5195) /* FString */               __um(PartName);                                             // 0x04A8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x04B8   (0x0008)  MISSED
};

/// Class /Script/HoudiniEngineRuntime.HoudiniStaticMesh
/// Size: 0x00A0 (0x000030 - 0x0000D0)
class UHoudiniStaticMesh : public UObject
{ 
public:
	bool                                               bHasNormals;                                                // 0x0030   (0x0001)  
	bool                                               bHasTangents;                                               // 0x0031   (0x0001)  
	bool                                               bHasColors;                                                 // 0x0032   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0033   (0x0001)  MISSED
	uint32_t                                           NumUVLayers;                                                // 0x0034   (0x0004)  
	bool                                               bHasPerFaceMaterials;                                       // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<FVector>                                    VertexPositions;                                            // 0x0040   (0x0010)  
	TArray<FIntVector>                                 TriangleIndices;                                            // 0x0050   (0x0010)  
	TArray<FColor>                                     VertexInstanceColors;                                       // 0x0060   (0x0010)  
	TArray<FVector>                                    VertexInstanceNormals;                                      // 0x0070   (0x0010)  
	TArray<FVector>                                    VertexInstanceUTangents;                                    // 0x0080   (0x0010)  
	TArray<FVector>                                    VertexInstanceVTangents;                                    // 0x0090   (0x0010)  
	TArray<FVector2D>                                  VertexInstanceUVs;                                          // 0x00A0   (0x0010)  
	TArray<int32_t>                                    MaterialIDsPerTriangle;                                     // 0x00B0   (0x0010)  
	TArray<FStaticMaterial>                            StaticMaterials;                                            // 0x00C0   (0x0010)  


	/// Functions
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetVertexPosition
	// void SetVertexPosition(uint32_t InVertexIndex, FVector& InPosition);                                                  // [0x4531590] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexVTangent
	// void SetTriangleVertexVTangent(uint32_t InTriangleIndex, char InTriangleVertexIndex, FVector& InVTangent);            // [0x4531470] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUV
	// void SetTriangleVertexUV(uint32_t InTriangleIndex, char InTriangleVertexIndex, char InUVLayer, FVector2D& InUV);      // [0x4531310] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUTangent
	// void SetTriangleVertexUTangent(uint32_t InTriangleIndex, char InTriangleVertexIndex, FVector& InUTangent);            // [0x45311f0] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexNormal
	// void SetTriangleVertexNormal(uint32_t InTriangleIndex, char InTriangleVertexIndex, FVector& InNormal);                // [0x45310d0] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexIndices
	// void SetTriangleVertexIndices(uint32_t InTriangleIndex, FIntVector& InTriangleVertexIndices);                         // [0x4531000] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexColor
	// void SetTriangleVertexColor(uint32_t InTriangleIndex, char InTriangleVertexIndex, FColor& InColor);                   // [0x4530ee0] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleMaterialID
	// void SetTriangleMaterialID(uint32_t InTriangleIndex, int32_t InMaterialID);                                           // [0x4530e10] Final|Native|Public  
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetStaticMaterial
	// void SetStaticMaterial(uint32_t InMaterialIndex, FStaticMaterial& InStaticMaterial);                                  // [0x4530d00] Final|Native|Public|HasOutParms 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetNumUVLayers
	// void SetNumUVLayers(uint32_t InNumUVLayers);                                                                          // [0x4530c70] Final|Native|Public  
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetNumStaticMaterials
	// void SetNumStaticMaterials(uint32_t InNumStaticMaterials);                                                            // [0x4530be0] Final|Native|Public  
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetHasTangents
	// void SetHasTangents(bool bInHasTangents);                                                                             // [0x4530b50] Final|Native|Public  
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetHasPerFaceMaterials
	// void SetHasPerFaceMaterials(bool bInHasPerFaceMaterials);                                                             // [0x4530ac0] Final|Native|Public  
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetHasNormals
	// void SetHasNormals(bool bInHasNormals);                                                                               // [0x4530a30] Final|Native|Public  
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.SetHasColors
	// void SetHasColors(bool bInHasColors);                                                                                 // [0x45309a0] Final|Native|Public  
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.Optimize
	// void Optimize();                                                                                                      // [0x4530980] Final|Native|Public  
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.IsValid
	// bool IsValid(bool bInSkipVertexIndicesCheck);                                                                         // [0x45308e0] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.Initialize
	// void Initialize(uint32_t InNumVertices, uint32_t InNumTriangles, uint32_t InNumUVLayers, uint32_t InInitialNumStaticMaterials, bool bInHasNormals, bool bInHasTangents, bool bInHasColors, bool bInHasPerFaceMaterials); // [0x4530670] Final|Native|Public  
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.HasTangents
	// bool HasTangents();                                                                                                   // [0x4530650] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.HasPerFaceMaterials
	// bool HasPerFaceMaterials();                                                                                           // [0x4530630] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.HasNormals
	// bool HasNormals();                                                                                                    // [0x4530610] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.HasColors
	// bool HasColors();                                                                                                     // [0x45305f0] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexPositions
	// TArray<FVector> GetVertexPositions();                                                                                 // [0x45305c0] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceVTangents
	// TArray<FVector> GetVertexInstanceVTangents();                                                                         // [0x4530590] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUVs
	// TArray<FVector2D> GetVertexInstanceUVs();                                                                             // [0x4530500] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUTangents
	// TArray<FVector> GetVertexInstanceUTangents();                                                                         // [0x45304d0] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceNormals
	// TArray<FVector> GetVertexInstanceNormals();                                                                           // [0x45304a0] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceColors
	// TArray<FColor> GetVertexInstanceColors();                                                                             // [0x4530410] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetTriangleIndices
	// TArray<FIntVector> GetTriangleIndices();                                                                              // [0x4530380] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetStaticMaterials
	// TArray<FStaticMaterial> GetStaticMaterials();                                                                         // [0x45302f0] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertices
	// uint32_t GetNumVertices();                                                                                            // [0x45302d0] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertexInstances
	// uint32_t GetNumVertexInstances();                                                                                     // [0x45302b0] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetNumUVLayers
	// uint32_t GetNumUVLayers();                                                                                            // [0x4530290] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetNumTriangles
	// uint32_t GetNumTriangles();                                                                                           // [0x4530270] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetNumStaticMaterials
	// uint32_t GetNumStaticMaterials();                                                                                     // [0x4530250] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIndex
	// int32_t GetMaterialIndex(FName InMaterialSlotName);                                                                   // [0x45301a0] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIDsPerTriangle
	// TArray<int32_t> GetMaterialIDsPerTriangle();                                                                          // [0x4530170] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterial
	// class UMaterialInterface* GetMaterial(int32_t InMaterialIndex);                                                       // [0x45300d0] Final|Native|Public  
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.CalculateTangents
	// void CalculateTangents(bool bInComputeWeightedNormals);                                                               // [0x4530040] Final|Native|Public  
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.CalculateNormals
	// void CalculateNormals(bool bInComputeWeightedNormals);                                                                // [0x452ffb0] Final|Native|Public  
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.CalcBounds
	// FBox CalcBounds();                                                                                                    // [0x452ff60] Final|Native|Public|HasDefaults|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMesh.AddStaticMaterial
	// uint32_t AddStaticMaterial(FStaticMaterial& InStaticMaterial);                                                        // [0x452fe40] Final|Native|Public|HasOutParms 
};

/// Class /Script/HoudiniEngineRuntime.HoudiniStaticMeshComponent
/// Size: 0x0030 (0x0004D0 - 0x000500)
class UHoudiniStaticMeshComponent : public UMeshComponent
{ 
public:
	class UHoudiniStaticMesh*                          Mesh;                                                       // 0x04D0   (0x0008)  
	FBox                                               LocalBounds;                                                // 0x04D8   (0x001C)  
	bool                                               bHoudiniIconVisible;                                        // 0x04F4   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x04F5   (0x000B)  MISSED


	/// Functions
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetMesh
	// void SetMesh(class UHoudiniStaticMesh* InMesh);                                                                       // [0x4531ab0] Final|Native|Public  
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetHoudiniIconVisible
	// void SetHoudiniIconVisible(bool bInHoudiniIconVisible);                                                               // [0x4531a20] Final|Native|Public  
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMeshComponent.NotifyMeshUpdated
	// void NotifyMeshUpdated();                                                                                             // [0x4531a00] Final|Native|Public  
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMeshComponent.IsHoudiniIconVisible
	// bool IsHoudiniIconVisible();                                                                                          // [0x45319e0] Final|Native|Public|Const 
	// Function /Script/HoudiniEngineRuntime.HoudiniStaticMeshComponent.GetMesh
	// class UHoudiniStaticMesh* GetMesh();                                                                                  // [0x45319c0] Final|Native|Public  
};

/// Class /Script/HoudiniEngineRuntime.HoudiniAssetStateEvents
/// Size: 0x0000 (0x000030 - 0x000030)
class UHoudiniAssetStateEvents : public UInterface
{ 
public:
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniAssetBlueprintInstanceData
/// Size: 0x00B8 (0x000068 - 0x000120)
struct FHoudiniAssetBlueprintInstanceData : FActorComponentInstanceData
{ 
	class UHoudiniAsset*                               HoudiniAsset;                                               // 0x0068   (0x0008)  
	int32_t                                            AssetId;                                                    // 0x0070   (0x0004)  
	EHoudiniAssetState                                 AssetState;                                                 // 0x0074   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0075   (0x0003)  MISSED
	uint32_t                                           SubAssetIndex;                                              // 0x0078   (0x0004)  
	uint32_t                                           AssetCookCount;                                             // 0x007C   (0x0004)  
	bool                                               bHasBeenLoaded;                                             // 0x0080   (0x0001)  
	bool                                               bHasBeenDuplicated;                                         // 0x0081   (0x0001)  
	bool                                               bPendingDelete;                                             // 0x0082   (0x0001)  
	bool                                               bRecookRequested;                                           // 0x0083   (0x0001)  
	bool                                               bRebuildRequested;                                          // 0x0084   (0x0001)  
	bool                                               bEnableCooking;                                             // 0x0085   (0x0001)  
	bool                                               bForceNeedUpdate;                                           // 0x0086   (0x0001)  
	bool                                               bLastCookSuccess;                                           // 0x0087   (0x0001)  
	FGuid                                              ComponentGUID;                                              // 0x0088   (0x0010)  
	FGuid                                              HapiGUID;                                                   // 0x0098   (0x0010)  
	bool                                               bRegisteredComponentTemplate;                               // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00A9   (0x0007)  MISSED
	SDK_UNDEFINED(16,5196) /* FString */               __um(SourceName);                                           // 0x00B0   (0x0010)  
	SDK_UNDEFINED(80,5197) /* TMap<FHoudiniOutputObjectIdentifier, FHoudiniAssetBlueprintOutput> */ __um(Outputs); // 0x00C0   (0x0050)  
	TArray<class UHoudiniInput*>                       Inputs;                                                     // 0x0110   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniOutputObjectIdentifier
/// Size: 0x0040 (0x000000 - 0x000040)
struct FHoudiniOutputObjectIdentifier
{ 
	int32_t                                            ObjectId;                                                   // 0x0000   (0x0004)  
	int32_t                                            GeoId;                                                      // 0x0004   (0x0004)  
	int32_t                                            PartId;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(16,5198) /* FString */               __um(SplitIdentifier);                                      // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,5199) /* FString */               __um(PartName);                                             // 0x0020   (0x0010)  
	int32_t                                            PrimitiveIndex;                                             // 0x0030   (0x0004)  
	int32_t                                            PointIndex;                                                 // 0x0034   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniCurveOutputProperties
/// Size: 0x000C (0x000000 - 0x00000C)
struct FHoudiniCurveOutputProperties
{ 
	EHoudiniCurveOutputType                            CurveOutputType;                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            NumPoints;                                                  // 0x0004   (0x0004)  
	bool                                               bClosed;                                                    // 0x0008   (0x0001)  
	EHoudiniCurveType                                  CurveType;                                                  // 0x0009   (0x0001)  
	EHoudiniCurveMethod                                CurveMethod;                                                // 0x000A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x000B   (0x0001)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniOutputObject
/// Size: 0x00F8 (0x000000 - 0x0000F8)
struct FHoudiniOutputObject
{ 
	class UObject*                                     OutputObject;                                               // 0x0000   (0x0008)  
	class UObject*                                     OutputComponent;                                            // 0x0008   (0x0008)  
	class UObject*                                     ProxyObject;                                                // 0x0010   (0x0008)  
	class UObject*                                     ProxyComponent;                                             // 0x0018   (0x0008)  
	bool                                               bProxyIsCurrent;                                            // 0x0020   (0x0001)  
	bool                                               bIsImplicit;                                                // 0x0021   (0x0001)  
	bool                                               bIsGeometryCollectionPiece;                                 // 0x0022   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0023   (0x0005)  MISSED
	SDK_UNDEFINED(16,5200) /* FString */               __um(GeometryCollectionPieceName);                          // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,5201) /* FString */               __um(BakeName);                                             // 0x0038   (0x0010)  
	FHoudiniCurveOutputProperties                      CurveOutputProperty;                                        // 0x0048   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	SDK_UNDEFINED(80,5202) /* TMap<FString, FString> */ __um(CachedAttributes);                                    // 0x0058   (0x0050)  
	SDK_UNDEFINED(80,5203) /* TMap<FString, FString> */ __um(CachedTokens);                                        // 0x00A8   (0x0050)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniAssetBlueprintOutput
/// Size: 0x0100 (0x000000 - 0x000100)
struct FHoudiniAssetBlueprintOutput
{ 
	int32_t                                            OutputIndex;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FHoudiniOutputObject                               OutputObject;                                               // 0x0008   (0x00F8)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniGenericAttribute
/// Size: 0x0050 (0x000000 - 0x000050)
struct FHoudiniGenericAttribute
{ 
	SDK_UNDEFINED(16,5204) /* FString */               __um(AttributeName);                                        // 0x0000   (0x0010)  
	EAttribStorageType                                 AttributeType;                                              // 0x0010   (0x0001)  
	EAttribOwner                                       AttributeOwner;                                             // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0012   (0x0002)  MISSED
	int32_t                                            AttributeCount;                                             // 0x0014   (0x0004)  
	int32_t                                            AttributeTupleSize;                                         // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<double>                                     DoubleValues;                                               // 0x0020   (0x0010)  
	TArray<int64_t>                                    IntValues;                                                  // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,5205) /* TArray<FString> */       __um(StringValues);                                         // 0x0040   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniGenericAttributeChangedProperty
/// Size: 0x0098 (0x000000 - 0x000098)
struct FHoudiniGenericAttributeChangedProperty
{ 
	class UObject*                                     Object;                                                     // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x90];                                      // 0x0008   (0x0090)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniCurveInfo
/// Size: 0x001C (0x000000 - 0x00001C)
struct FHoudiniCurveInfo
{ 
	unsigned char                                      UnknownData00_1[0x1C];                                      // 0x0000   (0x001C)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniVolumeInfo
/// Size: 0x0080 (0x000000 - 0x000080)
struct FHoudiniVolumeInfo
{ 
	unsigned char                                      UnknownData00_1[0x80];                                      // 0x0000   (0x0080)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniPartInfo
/// Size: 0x0048 (0x000000 - 0x000048)
struct FHoudiniPartInfo
{ 
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0000   (0x0048)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniGeoInfo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FHoudiniGeoInfo
{ 
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniObjectInfo
/// Size: 0x0028 (0x000000 - 0x000028)
struct FHoudiniObjectInfo
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniBakedOutputObjectIdentifier
/// Size: 0x0018 (0x000000 - 0x000018)
struct FHoudiniBakedOutputObjectIdentifier
{ 
	int32_t                                            PartId;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,5206) /* FString */               __um(SplitIdentifier);                                      // 0x0008   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniBakedOutputObject
/// Size: 0x00C0 (0x000000 - 0x0000C0)
struct FHoudiniBakedOutputObject
{ 
	SDK_UNDEFINED(16,5207) /* FString */               __um(Actor);                                                // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,5208) /* FString */               __um(Blueprint);                                            // 0x0010   (0x0010)  
	FName                                              ActorBakeName;                                              // 0x0020   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	SDK_UNDEFINED(16,5209) /* FString */               __um(BakedObject);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,5210) /* FString */               __um(BakedComponent);                                       // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,5211) /* TArray<FString> */       __um(InstancedActors);                                      // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,5212) /* TArray<FString> */       __um(InstancedComponents);                                  // 0x0060   (0x0010)  
	SDK_UNDEFINED(80,5213) /* TMap<FName, FString> */  __um(LandscapeLayers);                                      // 0x0070   (0x0050)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniInstancedOutput
/// Size: 0x0090 (0x000000 - 0x000090)
struct FHoudiniInstancedOutput
{ 
	SDK_UNDEFINED(48,5214) /* TWeakObjectPtr<UObject*> */ __um(OriginalObject);                                    // 0x0000   (0x0030)  
	int32_t                                            OriginalObjectIndex;                                        // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<FTransform>                                 OriginalTransforms;                                         // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,5215) /* TArray<TWeakObjectPtr<UObject*>> */ __um(VariationObjects);                          // 0x0048   (0x0010)  
	TArray<FTransform>                                 VariationTransformOffsets;                                  // 0x0058   (0x0010)  
	TArray<int32_t>                                    TransformVariationIndices;                                  // 0x0068   (0x0010)  
	TArray<int32_t>                                    OriginalInstanceIndices;                                    // 0x0078   (0x0010)  
	bool                                               bChanged;                                                   // 0x0088   (0x0001)  
	bool                                               bStale;                                                     // 0x0089   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x008A   (0x0006)  MISSED
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniPDGWorkResultObjectBakedOutput
/// Size: 0x0010 (0x000000 - 0x000010)
struct FHoudiniPDGWorkResultObjectBakedOutput
{ 
	TArray<FHoudiniBakedOutput>                        BakedOutputs;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/HoudiniEngineRuntime.HoudiniSplineComponentInstanceData
/// Size: 0x0030 (0x000068 - 0x000098)
struct FHoudiniSplineComponentInstanceData : FActorComponentInstanceData
{ 
	TArray<FTransform>                                 CurvePoints;                                                // 0x0068   (0x0010)  
	TArray<FVector>                                    DisplayPoints;                                              // 0x0078   (0x0010)  
	TArray<int32_t>                                    DisplayPointIndexDivider;                                   // 0x0088   (0x0010)  
};

