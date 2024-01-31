
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/SimplygonUObjects.EOutputColorSpace
/// Size: 0x04
enum class EOutputColorSpace : uint8_t
{
	EOutputColorSpace__Undefined                                                     = 0,
	EOutputColorSpace__Linear                                                        = 1,
	EOutputColorSpace__sRGB                                                          = 2,
	EOutputColorSpace__EOutputColorSpace_MAX                                         = 3
};

/// Enum /Script/SimplygonUObjects.EGeometryDataFieldType
/// Size: 0x14
enum class EGeometryDataFieldType : uint8_t
{
	EGeometryDataFieldType__Coords                                                   = 0,
	EGeometryDataFieldType__TexCoords                                                = 1,
	EGeometryDataFieldType__Normals                                                  = 2,
	EGeometryDataFieldType__Tangents                                                 = 3,
	EGeometryDataFieldType__Bitangents                                               = 4,
	EGeometryDataFieldType__Colors                                                   = 5,
	EGeometryDataFieldType__TriangleIds                                              = 6,
	EGeometryDataFieldType__MaterialIds                                              = 7,
	EGeometryDataFieldType__VertexIds                                                = 8,
	EGeometryDataFieldType__UserVertexField                                          = 9,
	EGeometryDataFieldType__UserCornerField                                          = 10,
	EGeometryDataFieldType__UserTriangleField                                        = 11,
	EGeometryDataFieldType__CustomField                                              = 12,
	EGeometryDataFieldType__EGeometryDataFieldType_MAX                               = 13
};

/// Enum /Script/SimplygonUObjects.EFlipBackfacingMode
/// Size: 0x03
enum class EFlipBackfacingMode : uint8_t
{
	EFlipBackfacingMode__PixelNormal                                                 = 0,
	EFlipBackfacingMode__FaceNormal                                                  = 1,
	EFlipBackfacingMode__EFlipBackfacingMode_MAX                                     = 2
};

/// Enum /Script/SimplygonUObjects.EOutputOpacityType
/// Size: 0x03
enum class EOutputOpacityType : uint8_t
{
	EOutputOpacityType__Opacity                                                      = 0,
	EOutputOpacityType__Transparency                                                 = 1,
	EOutputOpacityType__EOutputOpacityType_MAX                                       = 2
};

/// Enum /Script/SimplygonUObjects.EOutputDDSCompressionType
/// Size: 0x07
enum class EOutputDDSCompressionType : uint8_t
{
	EOutputDDSCompressionType__NoCompression                                         = 255,
	EOutputDDSCompressionType__BC1                                                   = 0,
	EOutputDDSCompressionType__BC2                                                   = 1,
	EOutputDDSCompressionType__BC3                                                   = 2,
	EOutputDDSCompressionType__BC4                                                   = 3,
	EOutputDDSCompressionType__BC5                                                   = 4,
	EOutputDDSCompressionType__EOutputDDSCompressionType_MAX                         = 256
};

/// Enum /Script/SimplygonUObjects.EOutputImageFileFormat
/// Size: 0x08
enum class EOutputImageFileFormat : uint8_t
{
	EOutputImageFileFormat__BMP                                                      = 0,
	EOutputImageFileFormat__DDS                                                      = 1,
	EOutputImageFileFormat__JPEG                                                     = 2,
	EOutputImageFileFormat__PNG                                                      = 3,
	EOutputImageFileFormat__TGA                                                      = 4,
	EOutputImageFileFormat__TIFF                                                     = 5,
	EOutputImageFileFormat__EXR                                                      = 8,
	EOutputImageFileFormat__EOutputImageFileFormat_MAX                               = 9
};

/// Enum /Script/SimplygonUObjects.EOutputPixelFormat
/// Size: 0x08
enum class EOutputPixelFormat : uint8_t
{
	EOutputPixelFormat__R8G8B8A8                                                     = 0,
	EOutputPixelFormat__R8G8B8                                                       = 1,
	EOutputPixelFormat__R8                                                           = 2,
	EOutputPixelFormat__R16G16B16A16                                                 = 3,
	EOutputPixelFormat__R16G16B16                                                    = 4,
	EOutputPixelFormat__R16                                                          = 5,
	EOutputPixelFormat__R32G32B32A32F                                                = 6,
	EOutputPixelFormat__EOutputPixelFormat_MAX                                       = 7
};

/// Enum /Script/SimplygonUObjects.EFillMode
/// Size: 0x04
enum class EFillMode : uint8_t
{
	EFillMode__Interpolate                                                           = 0,
	EFillMode__NearestNeighbor                                                       = 1,
	EFillMode__NoFill                                                                = 2,
	EFillMode__EFillMode_MAX                                                         = 3
};

/// Enum /Script/SimplygonUObjects.EDitherType
/// Size: 0x05
enum class EDitherType : uint8_t
{
	EDitherType__NoDither                                                            = 0,
	EDitherType__FloydSteinberg                                                      = 1,
	EDitherType__JarvisJudiceNinke                                                   = 2,
	EDitherType__Sierra                                                              = 3,
	EDitherType__EDitherType_MAX                                                     = 4
};

/// Enum /Script/SimplygonUObjects.EOpacityChannelComponent
/// Size: 0x05
enum class EOpacityChannelComponent : uint8_t
{
	EOpacityChannelComponent__Red                                                    = 0,
	EOpacityChannelComponent__Green                                                  = 1,
	EOpacityChannelComponent__Blue                                                   = 2,
	EOpacityChannelComponent__Alpha                                                  = 3,
	EOpacityChannelComponent__EOpacityChannelComponent_MAX                           = 4
};

/// Enum /Script/SimplygonUObjects.EStopCondition
/// Size: 0x03
enum class EStopCondition : uint8_t
{
	EStopCondition__Any                                                              = 0,
	EStopCondition__All                                                              = 1,
	EStopCondition__EStopCondition_MAX                                               = 2
};

/// Enum /Script/SimplygonUObjects.EBillboardMode
/// Size: 0x03
enum class EBillboardMode : uint8_t
{
	EBillboardMode__OuterShell                                                       = 0,
	EBillboardMode__Foliage                                                          = 1,
	EBillboardMode__EBillboardMode_MAX                                               = 2
};

/// Enum /Script/SimplygonUObjects.ESurfaceTransferMode
/// Size: 0x03
enum class ESurfaceTransferMode : uint8_t
{
	ESurfaceTransferMode__Fast                                                       = 0,
	ESurfaceTransferMode__Accurate                                                   = 1,
	ESurfaceTransferMode__ESurfaceTransferMode_MAX                                   = 2
};

/// Enum /Script/SimplygonUObjects.ERemeshingMode
/// Size: 0x04
enum class ERemeshingMode : uint8_t
{
	ERemeshingMode__Outside                                                          = 0,
	ERemeshingMode__Inside                                                           = 1,
	ERemeshingMode__Manual                                                           = 2,
	ERemeshingMode__ERemeshingMode_MAX                                               = 3
};

/// Enum /Script/SimplygonUObjects.EHoleFilling
/// Size: 0x05
enum class EHoleFilling : uint8_t
{
	EHoleFilling__Disabled                                                           = 0,
	EHoleFilling__Low                                                                = 1,
	EHoleFilling__Medium                                                             = 2,
	EHoleFilling__High                                                               = 3,
	EHoleFilling__EHoleFilling_MAX                                                   = 4
};

/// Enum /Script/SimplygonUObjects.ESurfaceAreaScale
/// Size: 0x04
enum class ESurfaceAreaScale : uint8_t
{
	ESurfaceAreaScale__LargestInstance                                               = 0,
	ESurfaceAreaScale__SmallestInstance                                              = 1,
	ESurfaceAreaScale__Average                                                       = 2,
	ESurfaceAreaScale__ESurfaceAreaScale_MAX                                         = 3
};

/// Enum /Script/SimplygonUObjects.EChartAggregatorMode
/// Size: 0x05
enum class EChartAggregatorMode : uint8_t
{
	EChartAggregatorMode__TextureSizeProportions                                     = 0,
	EChartAggregatorMode__SurfaceArea                                                = 1,
	EChartAggregatorMode__OriginalPixelDensity                                       = 2,
	EChartAggregatorMode__UVSizeProportions                                          = 3,
	EChartAggregatorMode__EChartAggregatorMode_MAX                                   = 4
};

/// Enum /Script/SimplygonUObjects.ETexCoordGeneratorType
/// Size: 0x03
enum class ETexCoordGeneratorType : uint8_t
{
	ETexCoordGeneratorType__Parameterizer                                            = 0,
	ETexCoordGeneratorType__ChartAggregator                                          = 1,
	ETexCoordGeneratorType__ETexCoordGeneratorType_MAX                               = 2
};

/// Enum /Script/SimplygonUObjects.ETransformationSpace
/// Size: 0x05
enum class ETransformationSpace : uint8_t
{
	ETransformationSpace__Global                                                     = 0,
	ETransformationSpace__Local                                                      = 1,
	ETransformationSpace__Tangent                                                    = 2,
	ETransformationSpace__View                                                       = 3,
	ETransformationSpace__ETransformationSpace_MAX                                   = 4
};

/// Enum /Script/SimplygonUObjects.EAttributeTessellationDensityMode
/// Size: 0x07
enum class EAttributeTessellationDensityMode : uint8_t
{
	EAttributeTessellationDensityMode__RelativeArea                                  = 0,
	EAttributeTessellationDensityMode__AbsoluteArea                                  = 1,
	EAttributeTessellationDensityMode__RelativeLength                                = 2,
	EAttributeTessellationDensityMode__AbsoluteLength                                = 3,
	EAttributeTessellationDensityMode__UserDefined                                   = 4,
	EAttributeTessellationDensityMode__OnScreenSize                                  = 5,
	EAttributeTessellationDensityMode__EAttributeTessellationDensityMode_MAX         = 6
};

/// Enum /Script/SimplygonUObjects.EWeightsFromColorMode
/// Size: 0x04
enum class EWeightsFromColorMode : uint8_t
{
	EWeightsFromColorMode__Standard                                                  = 0,
	EWeightsFromColorMode__High                                                      = 1,
	EWeightsFromColorMode__Low                                                       = 2,
	EWeightsFromColorMode__EWeightsFromColorMode_MAX                                 = 3
};

/// Enum /Script/SimplygonUObjects.EWeightsFromColorComponent
/// Size: 0x05
enum class EWeightsFromColorComponent : uint8_t
{
	EWeightsFromColorComponent__Red                                                  = 0,
	EWeightsFromColorComponent__Green                                                = 1,
	EWeightsFromColorComponent__Blue                                                 = 2,
	EWeightsFromColorComponent__Alpha                                                = 3,
	EWeightsFromColorComponent__EWeightsFromColorComponent_MAX                       = 4
};

/// Enum /Script/SimplygonUObjects.EBoneReductionTargetStopCondition
/// Size: 0x03
enum class EBoneReductionTargetStopCondition : uint8_t
{
	EBoneReductionTargetStopCondition__Any                                           = 0,
	EBoneReductionTargetStopCondition__All                                           = 1,
	EBoneReductionTargetStopCondition__EBoneReductionTargetStopCondition_MAX         = 2
};

/// Enum /Script/SimplygonUObjects.EComputeVisibilityMode
/// Size: 0x03
enum class EComputeVisibilityMode : uint8_t
{
	EComputeVisibilityMode__DirectX                                                  = 0,
	EComputeVisibilityMode__Software                                                 = 1,
	EComputeVisibilityMode__EComputeVisibilityMode_MAX                               = 2
};

/// Enum /Script/SimplygonUObjects.EDataCreationPreferences
/// Size: 0x04
enum class EDataCreationPreferences : uint8_t
{
	EDataCreationPreferences__OnlyUseOriginalData                                    = 0,
	EDataCreationPreferences__PreferOriginalData                                     = 1,
	EDataCreationPreferences__PreferOptimizedResult                                  = 2,
	EDataCreationPreferences__EDataCreationPreferences_MAX                           = 3
};

/// Enum /Script/SimplygonUObjects.ESymmetryAxis
/// Size: 0x04
enum class ESymmetryAxis : uint8_t
{
	ESymmetryAxis__X                                                                 = 0,
	ESymmetryAxis__Y                                                                 = 1,
	ESymmetryAxis__Z                                                                 = 2,
	ESymmetryAxis__ESymmetryAxis_MAX                                                 = 3
};

/// Enum /Script/SimplygonUObjects.EReductionHeuristics
/// Size: 0x03
enum class EReductionHeuristics : uint8_t
{
	EReductionHeuristics__Fast                                                       = 0,
	EReductionHeuristics__Consistent                                                 = 1,
	EReductionHeuristics__EReductionHeuristics_MAX                                   = 2
};

/// Enum /Script/SimplygonUObjects.EReductionTargetStopCondition
/// Size: 0x03
enum class EReductionTargetStopCondition : uint8_t
{
	EReductionTargetStopCondition__Any                                               = 0,
	EReductionTargetStopCondition__All                                               = 1,
	EReductionTargetStopCondition__EReductionTargetStopCondition_MAX                 = 2
};

/// Enum /Script/SimplygonUObjects.EReductionPerformanceMode
/// Size: 0x03
enum class EReductionPerformanceMode : uint8_t
{
	EReductionPerformanceMode__AllFeatures                                           = 0,
	EReductionPerformanceMode__HighPerformance                                       = 1,
	EReductionPerformanceMode__EReductionPerformanceMode_MAX                         = 2
};

/// Struct /Script/SimplygonUObjects.ChartAggregatorSettings
/// Size: 0x0038 (0x000000 - 0x000038)
struct FChartAggregatorSettings
{ 
	EChartAggregatorMode                               ChartAggregatorMode;                                        // 0x0000   (0x0001)  
	ESurfaceAreaScale                                  SurfaceAreaScale;                                           // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	int32_t                                            OriginalTexCoordLevel;                                      // 0x0004   (0x0004)  
	SDK_UNDEFINED(16,5384) /* FString */               __um(OriginalTexCoordName);                                 // 0x0008   (0x0010)  
	bool                                               SeparateOverlappingCharts : 1;                              // 0x0018:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x7];                                       // 0x0019   (0x0007)  MISSED
	SDK_UNDEFINED(16,5385) /* FString */               __um(OriginalChartProportionsChannel);                      // 0x0020   (0x0010)  
	bool                                               LockUVRotation : 1;                                         // 0x0030:0 (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/SimplygonUObjects.SimplygonStandinPipeline
/// Size: 0x0038 (0x000030 - 0x000068)
class USimplygonStandinPipeline : public UObject
{ 
public:
	FChartAggregatorSettings                           ChartAggregatorSettings;                                    // 0x0030   (0x0038)  
};

/// Struct /Script/SimplygonUObjects.SimplygonPipelineSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSimplygonPipelineSettings
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SimplygonUObjects.AggregationSettings
/// Size: 0x0030 (0x000000 - 0x000030)
struct FAggregationSettings
{ 
	bool                                               MergeGeometries : 1;                                        // 0x0000:0 (0x0001)  
	bool                                               EnableGeometryCulling : 1;                                  // 0x0000:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              GeometryCullingPrecision;                                   // 0x0004   (0x0004)  
	bool                                               SubdivideGeometryBasedOnUVTiles : 1;                        // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            SubdivisionTileSize;                                        // 0x000C   (0x0004)  
	int32_t                                            ProcessSelectionSetID;                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	SDK_UNDEFINED(16,5386) /* FString */               __um(ProcessSelectionSetName);                              // 0x0018   (0x0010)  
	bool                                               KeepUnprocessedSceneMeshes : 1;                             // 0x0028:0 (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/SimplygonUObjects.VisibilitySettings
/// Size: 0x0040 (0x000000 - 0x000040)
struct FVisibilitySettings
{ 
	bool                                               UseVisibilityWeightsInReducer : 1;                          // 0x0000:0 (0x0001)  
	bool                                               UseVisibilityWeightsInTexcoordGenerator : 1;                // 0x0000:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              VisibilityWeightsPower;                                     // 0x0004   (0x0004)  
	bool                                               CullOccludedGeometry : 1;                                   // 0x0008:0 (0x0001)  
	bool                                               ForceVisibilityCalculation : 1;                             // 0x0008:1 (0x0001)  
	bool                                               UseBackfaceCulling : 1;                                     // 0x0008:2 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            CameraSelectionSetID;                                       // 0x000C   (0x0004)  
	SDK_UNDEFINED(16,5387) /* FString */               __um(CameraSelectionSetName);                               // 0x0010   (0x0010)  
	int32_t                                            OccluderSelectionSetID;                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	SDK_UNDEFINED(16,5388) /* FString */               __um(OccluderSelectionSetName);                             // 0x0028   (0x0010)  
	float                                              FillNonVisibleAreaThreshold;                                // 0x0038   (0x0004)  
	bool                                               RemoveTrianglesNotOccludingOtherTriangles : 1;              // 0x003C:0 (0x0001)  
	bool                                               ConservativeMode : 1;                                       // 0x003C:1 (0x0001)  
	EComputeVisibilityMode                             ComputeVisibilityMode;                                      // 0x003D   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x003E   (0x0002)  MISSED
};

/// Struct /Script/SimplygonUObjects.GeometryCullingSettings
/// Size: 0x0030 (0x000000 - 0x000030)
struct FGeometryCullingSettings
{ 
	bool                                               UseClippingPlanes : 1;                                      // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            ClippingPlaneSelectionSetID;                                // 0x0004   (0x0004)  
	SDK_UNDEFINED(16,5389) /* FString */               __um(ClippingPlaneSelectionSetName);                        // 0x0008   (0x0010)  
	bool                                               UseClippingGeometry : 1;                                    // 0x0018:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0019   (0x0003)  MISSED
	int32_t                                            ClippingGeometrySelectionSetID;                             // 0x001C   (0x0004)  
	SDK_UNDEFINED(16,5390) /* FString */               __um(ClippingGeometrySelectionSetName);                     // 0x0020   (0x0010)  
};

/// Struct /Script/SimplygonUObjects.VertexWeightSettings
/// Size: 0x0028 (0x000000 - 0x000028)
struct FVertexWeightSettings
{ 
	bool                                               UseVertexWeightsInReducer : 1;                              // 0x0000:0 (0x0001)  
	bool                                               UseVertexWeightsInTexcoordGenerator : 1;                    // 0x0000:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            WeightsFromColorLevel;                                      // 0x0004   (0x0004)  
	SDK_UNDEFINED(16,5391) /* FString */               __um(WeightsFromColorName);                                 // 0x0008   (0x0010)  
	EWeightsFromColorComponent                         WeightsFromColorComponent;                                  // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	float                                              WeightsFromColorMultiplier;                                 // 0x001C   (0x0004)  
	EWeightsFromColorMode                              WeightsFromColorMode;                                       // 0x0020   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/SimplygonUObjects.AttributeTessellationSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FAttributeTessellationSettings
{ 
	bool                                               EnableAttributeTessellation : 1;                            // 0x0000:0 (0x0001)  
	EAttributeTessellationDensityMode                  AttributeTessellationDensityMode;                           // 0x0001   (0x0001)  
	ETransformationSpace                               TransformationSpace;                                        // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0003   (0x0001)  MISSED
	float                                              MaxAreaOfTessellatedValue;                                  // 0x0004   (0x0004)  
	float                                              MaxLengthOfTessellatedValue;                                // 0x0008   (0x0004)  
	int32_t                                            OnScreenSize;                                               // 0x000C   (0x0004)  
	bool                                               OnlyAllowOneLevelOfDifference : 1;                          // 0x0010:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0011   (0x0003)  MISSED
	int32_t                                            MinTessellationLevel;                                       // 0x0014   (0x0004)  
	int32_t                                            MaxTessellationLevel;                                       // 0x0018   (0x0004)  
	int32_t                                            MaxTotalValuesCount;                                        // 0x001C   (0x0004)  
};

/// Struct /Script/SimplygonUObjects.ParameterizerSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FParameterizerSettings
{ 
	float                                              MaxStretch;                                                 // 0x0000   (0x0004)  
	float                                              LargeChartsImportance;                                      // 0x0004   (0x0004)  
};

/// Struct /Script/SimplygonUObjects.InputMaterialSettings
/// Size: 0x0004 (0x000000 - 0x000004)
struct FInputMaterialSettings
{ 
	int32_t                                            MaterialMapping;                                            // 0x0000   (0x0004)  
};

/// Struct /Script/SimplygonUObjects.OutputMaterialSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FOutputMaterialSettings
{ 
	int32_t                                            TextureWidth;                                               // 0x0000   (0x0004)  
	int32_t                                            TextureHeight;                                              // 0x0004   (0x0004)  
	int32_t                                            MultisamplingLevel;                                         // 0x0008   (0x0004)  
	int32_t                                            GutterSpace;                                                // 0x000C   (0x0004)  
};

/// Struct /Script/SimplygonUObjects.MappingImageSettings
/// Size: 0x0098 (0x000000 - 0x000098)
struct FMappingImageSettings
{ 
	bool                                               GenerateMappingImage : 1;                                   // 0x0000:0 (0x0001)  
	bool                                               GenerateTexCoords : 1;                                      // 0x0000:1 (0x0001)  
	bool                                               GenerateTangents : 1;                                       // 0x0000:2 (0x0001)  
	bool                                               ReplaceMappingImages : 1;                                   // 0x0000:3 (0x0001)  
	bool                                               UseFullRetexturing : 1;                                     // 0x0000:4 (0x0001)  
	bool                                               ApplyNewMaterialIds : 1;                                    // 0x0000:5 (0x0001)  
	bool                                               UseAutomaticTextureSize : 1;                                // 0x0000:6 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              AutomaticTextureSizeMultiplier;                             // 0x0004   (0x0004)  
	bool                                               ForcePower2Texture : 1;                                     // 0x0008:0 (0x0001)  
	bool                                               OnlyParameterizeInvalidUVs : 1;                             // 0x0008:1 (0x0001)  
	bool                                               AllowTransparencyMapping : 1;                               // 0x0008:2 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            MaximumLayers;                                              // 0x000C   (0x0004)  
	int32_t                                            TexCoordLevel;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	SDK_UNDEFINED(16,5392) /* FString */               __um(TexCoordName);                                         // 0x0018   (0x0010)  
	ETexCoordGeneratorType                             TexCoordGeneratorType;                                      // 0x0028   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            OutputMaterialCount;                                        // 0x002C   (0x0004)  
	int32_t                                            InputMaterialCount;                                         // 0x0030   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	FChartAggregatorSettings                           ChartAggregatorSettings;                                    // 0x0038   (0x0038)  
	FParameterizerSettings                             ParameterizerSettings;                                      // 0x0070   (0x0008)  
	TArray<FInputMaterialSettings>                     InputMaterialSettings;                                      // 0x0078   (0x0010)  
	TArray<FOutputMaterialSettings>                    OutputMaterialSettings;                                     // 0x0088   (0x0010)  
};

/// Struct /Script/SimplygonUObjects.GenerateLightmapTexCoordSettings
/// Size: 0x0028 (0x000000 - 0x000028)
struct FGenerateLightmapTexCoordSettings
{ 
	bool                                               GenerateLightmapTexCoord : 1;                               // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            LightmapTexCoordLevel;                                      // 0x0004   (0x0004)  
	SDK_UNDEFINED(16,5393) /* FString */               __um(LightmapTexCoordName);                                 // 0x0008   (0x0010)  
	EChartAggregatorMode                               ChartAggregatorMode;                                        // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	int32_t                                            TextureWidth;                                               // 0x001C   (0x0004)  
	int32_t                                            TextureHeight;                                              // 0x0020   (0x0004)  
	int32_t                                            GutterSpace;                                                // 0x0024   (0x0004)  
};

/// Struct /Script/SimplygonUObjects.AggregationPipelineSettings
/// Size: 0x01B8 (0x000008 - 0x0001C0)
struct FAggregationPipelineSettings : FSimplygonPipelineSettings
{ 
	FAggregationSettings                               AggregationSettings;                                        // 0x0008   (0x0030)  
	FVisibilitySettings                                VisibilitySettings;                                         // 0x0038   (0x0040)  
	FGeometryCullingSettings                           GeometryCullingSettings;                                    // 0x0078   (0x0030)  
	FVertexWeightSettings                              VertexWeightSettings;                                       // 0x00A8   (0x0028)  
	FAttributeTessellationSettings                     AttributeTessellationSettings;                              // 0x00D0   (0x0020)  
	FMappingImageSettings                              MappingImageSettings;                                       // 0x00F0   (0x0098)  
	FGenerateLightmapTexCoordSettings                  GenerateLightmapTexCoordSettings;                           // 0x0188   (0x0028)  
	TArray<class USimplygonMaterialCaster*>            MaterialPropertyCasters;                                    // 0x01B0   (0x0010)  
};

/// Class /Script/SimplygonUObjects.StandinNearPipeline
/// Size: 0x01C0 (0x000068 - 0x000228)
class UStandinNearPipeline : public USimplygonStandinPipeline
{ 
public:
	FAggregationPipelineSettings                       Settings;                                                   // 0x0068   (0x01C0)  
};

/// Struct /Script/SimplygonUObjects.RemeshingSettings
/// Size: 0x0040 (0x000000 - 0x000040)
struct FRemeshingSettings
{ 
	int32_t                                            OnScreenSize;                                               // 0x0000   (0x0004)  
	EHoleFilling                                       HoleFilling;                                                // 0x0004   (0x0001)  
	ERemeshingMode                                     RemeshingMode;                                              // 0x0005   (0x0001)  
	ESurfaceTransferMode                               SurfaceTransferMode;                                        // 0x0006   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0007   (0x0001)  MISSED
	float                                              HardEdgeAngle;                                              // 0x0008   (0x0004)  
	bool                                               TransferNormals : 1;                                        // 0x000C:0 (0x0001)  
	bool                                               TransferColors : 1;                                         // 0x000C:1 (0x0001)  
	bool                                               PopulateAttributeTessellationDisplacement : 1;              // 0x000C:2 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              GeometricalAccuracy;                                        // 0x0010   (0x0004)  
	float                                              TopologicalAccuracy;                                        // 0x0014   (0x0004)  
	float                                              RemeshingModeManualPositionX;                               // 0x0018   (0x0004)  
	float                                              RemeshingModeManualPositionY;                               // 0x001C   (0x0004)  
	float                                              RemeshingModeManualPositionZ;                               // 0x0020   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	SDK_UNDEFINED(16,5394) /* FString */               __um(ProcessSelectionSetName);                              // 0x0028   (0x0010)  
	int32_t                                            ProcessSelectionSetID;                                      // 0x0038   (0x0004)  
	bool                                               KeepUnprocessedSceneMeshes : 1;                             // 0x003C:0 (0x0001)  
	bool                                               ForceSoftEdgesWithinTextureCharts : 1;                      // 0x003C:1 (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Struct /Script/SimplygonUObjects.BoneSettings
/// Size: 0x0058 (0x000000 - 0x000058)
struct FBoneSettings
{ 
	bool                                               UseBoneReducer : 1;                                         // 0x0000:0 (0x0001)  
	bool                                               RemoveUnusedBones : 1;                                      // 0x0000:1 (0x0001)  
	bool                                               LimitBonesPerVertex : 1;                                    // 0x0000:2 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            MaxBonePerVertex;                                           // 0x0004   (0x0004)  
	bool                                               BoneReductionTargetBoneRatioEnabled : 1;                    // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              BoneReductionTargetBoneRatio;                               // 0x000C   (0x0004)  
	bool                                               BoneReductionTargetBoneCountEnabled : 1;                    // 0x0010:0 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0011   (0x0003)  MISSED
	int32_t                                            BoneReductionTargetBoneCount;                               // 0x0014   (0x0004)  
	bool                                               BoneReductionTargetMaxDeviationEnabled : 1;                 // 0x0018:0 (0x0001)  
	unsigned char                                      UnknownData03_4[0x3];                                       // 0x0019   (0x0003)  MISSED
	float                                              BoneReductionTargetMaxDeviation;                            // 0x001C   (0x0004)  
	bool                                               BoneReductionTargetOnScreenSizeEnabled : 1;                 // 0x0020:0 (0x0001)  
	unsigned char                                      UnknownData04_4[0x3];                                       // 0x0021   (0x0003)  MISSED
	int32_t                                            BoneReductionTargetOnScreenSize;                            // 0x0024   (0x0004)  
	EBoneReductionTargetStopCondition                  BoneReductionTargetStopCondition;                           // 0x0028   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            LockBoneSelectionSetID;                                     // 0x002C   (0x0004)  
	SDK_UNDEFINED(16,5395) /* FString */               __um(LockBoneSelectionSetName);                             // 0x0030   (0x0010)  
	int32_t                                            RemoveBoneSelectionSetID;                                   // 0x0040   (0x0004)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	SDK_UNDEFINED(16,5396) /* FString */               __um(RemoveBoneSelectionSetName);                           // 0x0048   (0x0010)  
};

/// Struct /Script/SimplygonUObjects.RemeshingPipelineSettings
/// Size: 0x01D0 (0x000008 - 0x0001D8)
struct FRemeshingPipelineSettings : FSimplygonPipelineSettings
{ 
	FRemeshingSettings                                 RemeshingSettings;                                          // 0x0008   (0x0040)  
	FBoneSettings                                      BoneSettings;                                               // 0x0048   (0x0058)  
	FGeometryCullingSettings                           GeometryCullingSettings;                                    // 0x00A0   (0x0030)  
	FVisibilitySettings                                VisibilitySettings;                                         // 0x00D0   (0x0040)  
	FAttributeTessellationSettings                     AttributeTessellationSettings;                              // 0x0110   (0x0020)  
	FMappingImageSettings                              MappingImageSettings;                                       // 0x0130   (0x0098)  
	TArray<class USimplygonMaterialCaster*>            MaterialPropertyCasters;                                    // 0x01C8   (0x0010)  
};

/// Class /Script/SimplygonUObjects.StandinFarPipeline
/// Size: 0x01D8 (0x000068 - 0x000240)
class UStandinFarPipeline : public USimplygonStandinPipeline
{ 
public:
	FRemeshingPipelineSettings                         Settings;                                                   // 0x0068   (0x01D8)  
};

/// Struct /Script/SimplygonUObjects.FoliageSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FFoliageSettings
{ 
	bool                                               SeparateTrunkAndFoliage : 1;                                // 0x0000:0 (0x0001)  
	bool                                               MaintainLeafConnections : 1;                                // 0x0000:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              SeparateFoliageTriangleRatio;                               // 0x0004   (0x0004)  
	int32_t                                            SeparateFoliageTriangleThreshold;                           // 0x0008   (0x0004)  
	float                                              SeparateFoliageAreaThreshold;                               // 0x000C   (0x0004)  
	float                                              SeparateFoliageSizeThreshold;                               // 0x0010   (0x0004)  
	float                                              TrunkReductionRatio;                                        // 0x0014   (0x0004)  
};

/// Struct /Script/SimplygonUObjects.BillboardCloudSettings
/// Size: 0x0034 (0x000000 - 0x000034)
struct FBillboardCloudSettings
{ 
	EBillboardMode                                     BillboardMode;                                              // 0x0000   (0x0001)  
	bool                                               FavorVerticalPlanes : 1;                                    // 0x0001:0 (0x0001)  
	bool                                               TwoSided : 1;                                               // 0x0001:1 (0x0001)  
	bool                                               UseVisibilityWeights : 1;                                   // 0x0001:2 (0x0001)  
	unsigned char                                      UnknownData00_4[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              BillboardDensity;                                           // 0x0004   (0x0004)  
	int32_t                                            MaxPlaneCount;                                              // 0x0008   (0x0004)  
	float                                              GeometricComplexity;                                        // 0x000C   (0x0004)  
	FVector                                            UpVector;                                                   // 0x0010   (0x000C)  
	FFoliageSettings                                   FoliageSettings;                                            // 0x001C   (0x0018)  
};

/// Struct /Script/SimplygonUObjects.BillboardCloudPipelineSettings
/// Size: 0x0100 (0x000008 - 0x000108)
struct FBillboardCloudPipelineSettings : FSimplygonPipelineSettings
{ 
	FBillboardCloudSettings                            BillboardCloudSettings;                                     // 0x0008   (0x0034)  
	FAttributeTessellationSettings                     AttributeTessellationSettings;                              // 0x003C   (0x0020)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	FMappingImageSettings                              MappingImageSettings;                                       // 0x0060   (0x0098)  
	TArray<class USimplygonMaterialCaster*>            MaterialPropertyCasters;                                    // 0x00F8   (0x0010)  
};

/// Class /Script/SimplygonUObjects.BillboardCloudPipeline
/// Size: 0x0108 (0x000068 - 0x000170)
class UBillboardCloudPipeline : public USimplygonStandinPipeline
{ 
public:
	FBillboardCloudPipelineSettings                    Settings;                                                   // 0x0068   (0x0108)  
};

/// Class /Script/SimplygonUObjects.SimplygonPipeline
/// Size: 0x0000 (0x000030 - 0x000030)
class USimplygonPipeline : public UObject
{ 
public:
};

/// Struct /Script/SimplygonUObjects.FlipbookSettings
/// Size: 0x0030 (0x000000 - 0x000030)
struct FFlipbookSettings
{ 
	int32_t                                            NumberOfViews;                                              // 0x0000   (0x0004)  
	FVector                                            ViewDirection;                                              // 0x0004   (0x000C)  
	FVector                                            UpVector;                                                   // 0x0010   (0x000C)  
	int32_t                                            NumberOfColumns;                                            // 0x001C   (0x0004)  
	int32_t                                            NumberOfRows;                                               // 0x0020   (0x0004)  
	bool                                               FlipRowColumnOrder : 1;                                     // 0x0024:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0025   (0x0003)  MISSED
	int32_t                                            OverrideFlipbookTextureWidth;                               // 0x0028   (0x0004)  
	bool                                               PivotAroundOrigin : 1;                                      // 0x002C:0 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Struct /Script/SimplygonUObjects.FlipbookPipelineSettings
/// Size: 0x00F8 (0x000008 - 0x000100)
struct FFlipbookPipelineSettings : FSimplygonPipelineSettings
{ 
	FFlipbookSettings                                  FlipbookSettings;                                           // 0x0008   (0x0030)  
	FAttributeTessellationSettings                     AttributeTessellationSettings;                              // 0x0038   (0x0020)  
	FMappingImageSettings                              MappingImageSettings;                                       // 0x0058   (0x0098)  
	TArray<class USimplygonMaterialCaster*>            MaterialPropertyCasters;                                    // 0x00F0   (0x0010)  
};

/// Class /Script/SimplygonUObjects.FlipbookPipeline
/// Size: 0x0100 (0x000030 - 0x000130)
class UFlipbookPipeline : public USimplygonPipeline
{ 
public:
	FFlipbookPipelineSettings                          Settings;                                                   // 0x0030   (0x0100)  
};

/// Struct /Script/SimplygonUObjects.BillboardCloudVegetationPipelineSettings
/// Size: 0x0100 (0x000008 - 0x000108)
struct FBillboardCloudVegetationPipelineSettings : FSimplygonPipelineSettings
{ 
	FBillboardCloudSettings                            BillboardCloudSettings;                                     // 0x0008   (0x0034)  
	FAttributeTessellationSettings                     AttributeTessellationSettings;                              // 0x003C   (0x0020)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	FMappingImageSettings                              MappingImageSettings;                                       // 0x0060   (0x0098)  
	TArray<class USimplygonMaterialCaster*>            MaterialPropertyCasters;                                    // 0x00F8   (0x0010)  
};

/// Class /Script/SimplygonUObjects.BillboardCloudVegetationPipeline
/// Size: 0x0108 (0x000030 - 0x000138)
class UBillboardCloudVegetationPipeline : public USimplygonPipeline
{ 
public:
	FBillboardCloudVegetationPipelineSettings          Settings;                                                   // 0x0030   (0x0108)  
};

/// Class /Script/SimplygonUObjects.RemeshingPipeline
/// Size: 0x01D8 (0x000030 - 0x000208)
class URemeshingPipeline : public USimplygonPipeline
{ 
public:
	FRemeshingPipelineSettings                         Settings;                                                   // 0x0030   (0x01D8)  
};

/// Struct /Script/SimplygonUObjects.HighDensityMeshReductionSettings
/// Size: 0x0028 (0x000000 - 0x000028)
struct FHighDensityMeshReductionSettings
{ 
	bool                                               OnScreenSizeEnabled : 1;                                    // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            OnScreenSize;                                               // 0x0004   (0x0004)  
	bool                                               MaxDeviationEnabled : 1;                                    // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              MaxDeviation;                                               // 0x000C   (0x0004)  
	EStopCondition                                     StopCondition;                                              // 0x0010   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	SDK_UNDEFINED(16,5397) /* FString */               __um(ProcessSelectionSetName);                              // 0x0018   (0x0010)  
};

/// Struct /Script/SimplygonUObjects.HighDensityMeshReductionPipelineSettings
/// Size: 0x0028 (0x000008 - 0x000030)
struct FHighDensityMeshReductionPipelineSettings : FSimplygonPipelineSettings
{ 
	FHighDensityMeshReductionSettings                  HighDensityMeshReductionSettings;                           // 0x0008   (0x0028)  
};

/// Class /Script/SimplygonUObjects.HighDensityMeshReductionPipeline
/// Size: 0x0030 (0x000030 - 0x000060)
class UHighDensityMeshReductionPipeline : public USimplygonPipeline
{ 
public:
	FHighDensityMeshReductionPipelineSettings          Settings;                                                   // 0x0030   (0x0030)  
};

/// Class /Script/SimplygonUObjects.SimplygonMaterialCaster
/// Size: 0x0000 (0x000030 - 0x000030)
class USimplygonMaterialCaster : public UObject
{ 
public:
};

/// Struct /Script/SimplygonUObjects.ColorCasterSettings
/// Size: 0x0030 (0x000000 - 0x000030)
struct FColorCasterSettings
{ 
	SDK_UNDEFINED(16,5398) /* FString */               __um(MaterialChannel);                                      // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,5399) /* FString */               __um(OpacityChannel);                                       // 0x0010   (0x0010)  
	EOpacityChannelComponent                           OpacityChannelComponent;                                    // 0x0020   (0x0001)  
	EDitherType                                        DitherType;                                                 // 0x0021   (0x0001)  
	EFillMode                                          FillMode;                                                   // 0x0022   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0023   (0x0001)  MISSED
	int32_t                                            Dilation;                                                   // 0x0024   (0x0004)  
	bool                                               UseMultisampling : 1;                                       // 0x0028:0 (0x0001)  
	EOutputPixelFormat                                 OutputPixelFormat;                                          // 0x0029   (0x0001)  
	EOutputImageFileFormat                             OutputImageFileFormat;                                      // 0x002A   (0x0001)  
	EOutputDDSCompressionType                          OutputDDSCompressionType;                                   // 0x002B   (0x0001)  
	bool                                               OutputSRGB : 1;                                             // 0x002C:0 (0x0001)  
	bool                                               BakeOpacityInAlpha : 1;                                     // 0x002C:1 (0x0001)  
	bool                                               SkipCastingIfNoInputChannel : 1;                            // 0x002C:2 (0x0001)  
	EOutputOpacityType                                 OutputOpacityType;                                          // 0x002D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x002E   (0x0002)  MISSED
};

/// Class /Script/SimplygonUObjects.SimplygonColorCaster
/// Size: 0x0030 (0x000030 - 0x000060)
class USimplygonColorCaster : public USimplygonMaterialCaster
{ 
public:
	FColorCasterSettings                               ColorCasterSettings;                                        // 0x0030   (0x0030)  
};

/// Class /Script/SimplygonUObjects.BaseColorCaster
/// Size: 0x0000 (0x000060 - 0x000060)
class UBaseColorCaster : public USimplygonColorCaster
{ 
public:
};

/// Class /Script/SimplygonUObjects.MetallicCaster
/// Size: 0x0000 (0x000060 - 0x000060)
class UMetallicCaster : public UBaseColorCaster
{ 
public:
};

/// Class /Script/SimplygonUObjects.SpecualarCaster
/// Size: 0x0000 (0x000060 - 0x000060)
class USpecualarCaster : public UBaseColorCaster
{ 
public:
};

/// Class /Script/SimplygonUObjects.RoughnessCaster
/// Size: 0x0000 (0x000060 - 0x000060)
class URoughnessCaster : public UBaseColorCaster
{ 
public:
};

/// Struct /Script/SimplygonUObjects.NormalCasterSettings
/// Size: 0x0030 (0x000000 - 0x000030)
struct FNormalCasterSettings
{ 
	SDK_UNDEFINED(16,5400) /* FString */               __um(MaterialChannel);                                      // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,5401) /* FString */               __um(OpacityChannel);                                       // 0x0010   (0x0010)  
	EOpacityChannelComponent                           OpacityChannelComponent;                                    // 0x0020   (0x0001)  
	EDitherType                                        DitherType;                                                 // 0x0021   (0x0001)  
	EFillMode                                          FillMode;                                                   // 0x0022   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0023   (0x0001)  MISSED
	int32_t                                            Dilation;                                                   // 0x0024   (0x0004)  
	bool                                               UseMultisampling : 1;                                       // 0x0028:0 (0x0001)  
	EOutputPixelFormat                                 OutputPixelFormat;                                          // 0x0029   (0x0001)  
	EOutputImageFileFormat                             OutputImageFileFormat;                                      // 0x002A   (0x0001)  
	EOutputDDSCompressionType                          OutputDDSCompressionType;                                   // 0x002B   (0x0001)  
	bool                                               FlipBackfacingNormals : 1;                                  // 0x002C:0 (0x0001)  
	EFlipBackfacingMode                                FlipBackfacingMode;                                         // 0x002D   (0x0001)  
	bool                                               GenerateTangentSpaceNormals : 1;                            // 0x002E:0 (0x0001)  
	bool                                               FlipGreen : 1;                                              // 0x002E:1 (0x0001)  
	bool                                               CalculateBitangentPerFragment : 1;                          // 0x002E:2 (0x0001)  
	bool                                               NormalizeInterpolatedTangentSpace : 1;                      // 0x002E:3 (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x002F   (0x0001)  MISSED
};

/// Class /Script/SimplygonUObjects.SimplygonNormalCaster
/// Size: 0x0030 (0x000030 - 0x000060)
class USimplygonNormalCaster : public USimplygonMaterialCaster
{ 
public:
	FNormalCasterSettings                              NormalCasterSettings;                                       // 0x0030   (0x0030)  
};

/// Class /Script/SimplygonUObjects.NormalCaster
/// Size: 0x0000 (0x000060 - 0x000060)
class UNormalCaster : public USimplygonNormalCaster
{ 
public:
};

/// Struct /Script/SimplygonUObjects.OpacityCasterSettings
/// Size: 0x0030 (0x000000 - 0x000030)
struct FOpacityCasterSettings
{ 
	SDK_UNDEFINED(16,5402) /* FString */               __um(MaterialChannel);                                      // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,5403) /* FString */               __um(OpacityChannel);                                       // 0x0010   (0x0010)  
	EOpacityChannelComponent                           OpacityChannelComponent;                                    // 0x0020   (0x0001)  
	EDitherType                                        DitherType;                                                 // 0x0021   (0x0001)  
	EFillMode                                          FillMode;                                                   // 0x0022   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0023   (0x0001)  MISSED
	int32_t                                            Dilation;                                                   // 0x0024   (0x0004)  
	bool                                               UseMultisampling : 1;                                       // 0x0028:0 (0x0001)  
	EOutputPixelFormat                                 OutputPixelFormat;                                          // 0x0029   (0x0001)  
	EOutputImageFileFormat                             OutputImageFileFormat;                                      // 0x002A   (0x0001)  
	EOutputDDSCompressionType                          OutputDDSCompressionType;                                   // 0x002B   (0x0001)  
	bool                                               OutputSRGB : 1;                                             // 0x002C:0 (0x0001)  
	bool                                               OutputToTessellatedAttributes : 1;                          // 0x002C:1 (0x0001)  
	EOutputOpacityType                                 OutputOpacityType;                                          // 0x002D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x002E   (0x0002)  MISSED
};

/// Class /Script/SimplygonUObjects.SimplygonOpacityCaster
/// Size: 0x0030 (0x000030 - 0x000060)
class USimplygonOpacityCaster : public USimplygonMaterialCaster
{ 
public:
	FOpacityCasterSettings                             OpacityCasterSettings;                                      // 0x0030   (0x0030)  
};

/// Class /Script/SimplygonUObjects.OpacityCaster
/// Size: 0x0000 (0x000060 - 0x000060)
class UOpacityCaster : public USimplygonOpacityCaster
{ 
public:
};

/// Class /Script/SimplygonUObjects.EmissiveCaster
/// Size: 0x0000 (0x000060 - 0x000060)
class UEmissiveCaster : public UBaseColorCaster
{ 
public:
};

/// Class /Script/SimplygonUObjects.OpacityMaskCaster
/// Size: 0x0000 (0x000060 - 0x000060)
class UOpacityMaskCaster : public USimplygonOpacityCaster
{ 
public:
};

/// Class /Script/SimplygonUObjects.AmbientOcclusionMaskCaster
/// Size: 0x0000 (0x000060 - 0x000060)
class UAmbientOcclusionMaskCaster : public UBaseColorCaster
{ 
public:
};

/// Struct /Script/SimplygonUObjects.ReductionSettings
/// Size: 0x0080 (0x000000 - 0x000080)
struct FReductionSettings
{ 
	bool                                               ReductionTargetTriangleRatioEnabled : 1;                    // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              ReductionTargetTriangleRatio;                               // 0x0004   (0x0004)  
	bool                                               ReductionTargetTriangleCountEnabled : 1;                    // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            ReductionTargetTriangleCount;                               // 0x000C   (0x0004)  
	bool                                               ReductionTargetMaxDeviationEnabled : 1;                     // 0x0010:0 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              ReductionTargetMaxDeviation;                                // 0x0014   (0x0004)  
	bool                                               ReductionTargetOnScreenSizeEnabled : 1;                     // 0x0018:0 (0x0001)  
	unsigned char                                      UnknownData03_4[0x3];                                       // 0x0019   (0x0003)  MISSED
	int32_t                                            ReductionTargetOnScreenSize;                                // 0x001C   (0x0004)  
	EReductionPerformanceMode                          ReductionPerformanceMode;                                   // 0x0020   (0x0001)  
	EReductionTargetStopCondition                      ReductionTargetStopCondition;                               // 0x0021   (0x0001)  
	EReductionHeuristics                               ReductionHeuristics;                                        // 0x0022   (0x0001)  
	unsigned char                                      UnknownData04_5[0x1];                                       // 0x0023   (0x0001)  MISSED
	float                                              GeometryImportance;                                         // 0x0024   (0x0004)  
	float                                              MaterialImportance;                                         // 0x0028   (0x0004)  
	float                                              TextureImportance;                                          // 0x002C   (0x0004)  
	float                                              ShadingImportance;                                          // 0x0030   (0x0004)  
	float                                              GroupImportance;                                            // 0x0034   (0x0004)  
	float                                              VertexColorImportance;                                      // 0x0038   (0x0004)  
	float                                              EdgeSetImportance;                                          // 0x003C   (0x0004)  
	float                                              SkinningImportance;                                         // 0x0040   (0x0004)  
	float                                              OutwardMoveMultiplier;                                      // 0x0044   (0x0004)  
	float                                              InwardMoveMultiplier;                                       // 0x0048   (0x0004)  
	float                                              MaxEdgeLength;                                              // 0x004C   (0x0004)  
	bool                                               KeepSymmetry : 1;                                           // 0x0050:0 (0x0001)  
	bool                                               UseSymmetryQuadRetriangulator : 1;                          // 0x0050:1 (0x0001)  
	bool                                               UseAutomaticSymmetryDetection : 1;                          // 0x0050:2 (0x0001)  
	unsigned char                                      UnknownData05_4[0x3];                                       // 0x0051   (0x0003)  MISSED
	float                                              SymmetryDetectionTolerance;                                 // 0x0054   (0x0004)  
	ESymmetryAxis                                      SymmetryAxis;                                               // 0x0058   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x0059   (0x0003)  MISSED
	float                                              SymmetryOffset;                                             // 0x005C   (0x0004)  
	bool                                               CreateGeomorphGeometry : 1;                                 // 0x0060:0 (0x0001)  
	bool                                               GenerateGeomorphData : 1;                                   // 0x0060:1 (0x0001)  
	EDataCreationPreferences                           DataCreationPreferences;                                    // 0x0061   (0x0001)  
	bool                                               UseHighQualityNormalCalculation : 1;                        // 0x0062:0 (0x0001)  
	bool                                               LockGeometricBorder : 1;                                    // 0x0062:1 (0x0001)  
	bool                                               MergeGeometries : 1;                                        // 0x0062:2 (0x0001)  
	bool                                               AllowDegenerateTexCoords : 1;                               // 0x0062:3 (0x0001)  
	unsigned char                                      UnknownData07_4[0x1];                                       // 0x0063   (0x0001)  MISSED
	int32_t                                            ProcessSelectionSetID;                                      // 0x0064   (0x0004)  
	SDK_UNDEFINED(16,5404) /* FString */               __um(ProcessSelectionSetName);                              // 0x0068   (0x0010)  
	bool                                               KeepUnprocessedSceneMeshes : 1;                             // 0x0078:0 (0x0001)  
	bool                                               PreserveQuadFlags : 1;                                      // 0x0078:1 (0x0001)  
	unsigned char                                      UnknownData08_6[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Struct /Script/SimplygonUObjects.RepairSettings
/// Size: 0x0014 (0x000000 - 0x000014)
struct FRepairSettings
{ 
	bool                                               UseTJunctionRemover : 1;                                    // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              TJuncDist;                                                  // 0x0004   (0x0004)  
	bool                                               UseWelding : 1;                                             // 0x0008:0 (0x0001)  
	bool                                               WeldOnlyBorderVertices : 1;                                 // 0x0008:1 (0x0001)  
	bool                                               WeldOnlyWithinMaterial : 1;                                 // 0x0008:2 (0x0001)  
	bool                                               WeldOnlyWithinSceneNode : 1;                                // 0x0008:3 (0x0001)  
	bool                                               WeldOnlyBetweenSceneNodes : 1;                              // 0x0008:4 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              WeldDist;                                                   // 0x000C   (0x0004)  
	int32_t                                            ProgressivePasses;                                          // 0x0010   (0x0004)  
};

/// Struct /Script/SimplygonUObjects.NormalCalculationSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FNormalCalculationSettings
{ 
	bool                                               ReplaceNormals : 1;                                         // 0x0000:0 (0x0001)  
	bool                                               RepairInvalidNormals : 1;                                   // 0x0000:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              HardEdgeAngle;                                              // 0x0004   (0x0004)  
	bool                                               ReplaceTangents : 1;                                        // 0x0008:0 (0x0001)  
	bool                                               ReorthogonalizeTangentSpace : 1;                            // 0x0008:1 (0x0001)  
	bool                                               ScaleByArea : 1;                                            // 0x0008:2 (0x0001)  
	bool                                               ScaleByAngle : 1;                                           // 0x0008:3 (0x0001)  
	bool                                               SnapNormalsToFlatSurfaces : 1;                              // 0x0008:4 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/SimplygonUObjects.ReductionPipelineSettings
/// Size: 0x0228 (0x000008 - 0x000230)
struct FReductionPipelineSettings : FSimplygonPipelineSettings
{ 
	FReductionSettings                                 ReductionSettings;                                          // 0x0008   (0x0080)  
	FRepairSettings                                    RepairSettings;                                             // 0x0088   (0x0014)  
	FNormalCalculationSettings                         NormalCalculationSettings;                                  // 0x009C   (0x000C)  
	FVisibilitySettings                                VisibilitySettings;                                         // 0x00A8   (0x0040)  
	FBoneSettings                                      BoneSettings;                                               // 0x00E8   (0x0058)  
	FVertexWeightSettings                              VertexWeightSettings;                                       // 0x0140   (0x0028)  
	FAttributeTessellationSettings                     AttributeTessellationSettings;                              // 0x0168   (0x0020)  
	FMappingImageSettings                              MappingImageSettings;                                       // 0x0188   (0x0098)  
	TArray<class USimplygonMaterialCaster*>            MaterialPropertyCasters;                                    // 0x0220   (0x0010)  
};

/// Class /Script/SimplygonUObjects.ReductionPipeline
/// Size: 0x0230 (0x000030 - 0x000260)
class UReductionPipeline : public USimplygonPipeline
{ 
public:
	FReductionPipelineSettings                         Settings;                                                   // 0x0030   (0x0230)  
};

/// Class /Script/SimplygonUObjects.AggregationPipeline
/// Size: 0x01C0 (0x000030 - 0x0001F0)
class UAggregationPipeline : public USimplygonPipeline
{ 
public:
	FAggregationPipelineSettings                       Settings;                                                   // 0x0030   (0x01C0)  
};

/// Struct /Script/SimplygonUObjects.DisplacementCasterSettings
/// Size: 0x0038 (0x000000 - 0x000038)
struct FDisplacementCasterSettings
{ 
	SDK_UNDEFINED(16,5405) /* FString */               __um(MaterialChannel);                                      // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,5406) /* FString */               __um(OpacityChannel);                                       // 0x0010   (0x0010)  
	EOpacityChannelComponent                           OpacityChannelComponent;                                    // 0x0020   (0x0001)  
	EDitherType                                        DitherType;                                                 // 0x0021   (0x0001)  
	EFillMode                                          FillMode;                                                   // 0x0022   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0023   (0x0001)  MISSED
	int32_t                                            Dilation;                                                   // 0x0024   (0x0004)  
	bool                                               UseMultisampling : 1;                                       // 0x0028:0 (0x0001)  
	EOutputPixelFormat                                 OutputPixelFormat;                                          // 0x0029   (0x0001)  
	EOutputImageFileFormat                             OutputImageFileFormat;                                      // 0x002A   (0x0001)  
	EOutputDDSCompressionType                          OutputDDSCompressionType;                                   // 0x002B   (0x0001)  
	float                                              DistanceScaling;                                            // 0x002C   (0x0004)  
	bool                                               GenerateScalarDisplacement : 1;                             // 0x0030:0 (0x0001)  
	bool                                               OutputToTessellatedAttributes : 1;                          // 0x0030:1 (0x0001)  
	bool                                               GenerateTangentSpaceDisplacement : 1;                       // 0x0030:2 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            NormalMapTexCoordLevel;                                     // 0x0034   (0x0004)  
};

/// Class /Script/SimplygonUObjects.SimplygonDisplacementCaster
/// Size: 0x0038 (0x000030 - 0x000068)
class USimplygonDisplacementCaster : public USimplygonMaterialCaster
{ 
public:
	FDisplacementCasterSettings                        DisplacementCasterSettings;                                 // 0x0030   (0x0038)  
};

/// Struct /Script/SimplygonUObjects.AmbientOcclusionCasterSettings
/// Size: 0x0040 (0x000000 - 0x000040)
struct FAmbientOcclusionCasterSettings
{ 
	SDK_UNDEFINED(16,5407) /* FString */               __um(MaterialChannel);                                      // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,5408) /* FString */               __um(OpacityChannel);                                       // 0x0010   (0x0010)  
	EOpacityChannelComponent                           OpacityChannelComponent;                                    // 0x0020   (0x0001)  
	EDitherType                                        DitherType;                                                 // 0x0021   (0x0001)  
	EFillMode                                          FillMode;                                                   // 0x0022   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0023   (0x0001)  MISSED
	int32_t                                            Dilation;                                                   // 0x0024   (0x0004)  
	bool                                               UseMultisampling : 1;                                       // 0x0028:0 (0x0001)  
	EOutputPixelFormat                                 OutputPixelFormat;                                          // 0x0029   (0x0001)  
	EOutputImageFileFormat                             OutputImageFileFormat;                                      // 0x002A   (0x0001)  
	EOutputDDSCompressionType                          OutputDDSCompressionType;                                   // 0x002B   (0x0001)  
	int32_t                                            RaysPerPixel;                                               // 0x002C   (0x0004)  
	float                                              OcclusionFalloff;                                           // 0x0030   (0x0004)  
	float                                              OcclusionMultiplier;                                        // 0x0034   (0x0004)  
	bool                                               UseSimpleOcclusionMode : 1;                                 // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Class /Script/SimplygonUObjects.SimplygonAmbientOcclusionCaster
/// Size: 0x0040 (0x000030 - 0x000070)
class USimplygonAmbientOcclusionCaster : public USimplygonMaterialCaster
{ 
public:
	FAmbientOcclusionCasterSettings                    AmbientOcclusionCasterSettings;                             // 0x0030   (0x0040)  
};

/// Struct /Script/SimplygonUObjects.GeometryDataCasterSettings
/// Size: 0x0060 (0x000000 - 0x000060)
struct FGeometryDataCasterSettings
{ 
	SDK_UNDEFINED(16,5409) /* FString */               __um(MaterialChannel);                                      // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,5410) /* FString */               __um(OpacityChannel);                                       // 0x0010   (0x0010)  
	EOpacityChannelComponent                           OpacityChannelComponent;                                    // 0x0020   (0x0001)  
	EDitherType                                        DitherType;                                                 // 0x0021   (0x0001)  
	EFillMode                                          FillMode;                                                   // 0x0022   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0023   (0x0001)  MISSED
	int32_t                                            Dilation;                                                   // 0x0024   (0x0004)  
	bool                                               UseMultisampling : 1;                                       // 0x0028:0 (0x0001)  
	EOutputPixelFormat                                 OutputPixelFormat;                                          // 0x0029   (0x0001)  
	EOutputImageFileFormat                             OutputImageFileFormat;                                      // 0x002A   (0x0001)  
	EOutputDDSCompressionType                          OutputDDSCompressionType;                                   // 0x002B   (0x0001)  
	EGeometryDataFieldType                             GeometryDataFieldType;                                      // 0x002C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x002D   (0x0003)  MISSED
	int32_t                                            GeometryDataFieldIndex;                                     // 0x0030   (0x0004)  
	int32_t                                            MappingLayerIndex;                                          // 0x0034   (0x0004)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FVector4                                           MappingInf;                                                 // 0x0040   (0x0010)  
	FVector4                                           MappingSup;                                                 // 0x0050   (0x0010)  
};

/// Class /Script/SimplygonUObjects.SimplygonGeometryDataCaster
/// Size: 0x0060 (0x000030 - 0x000090)
class USimplygonGeometryDataCaster : public USimplygonMaterialCaster
{ 
public:
	FGeometryDataCasterSettings                        GeometryDataCasterSettings;                                 // 0x0030   (0x0060)  
};

/// Struct /Script/SimplygonUObjects.VertexColorCasterSettings
/// Size: 0x0048 (0x000000 - 0x000048)
struct FVertexColorCasterSettings
{ 
	SDK_UNDEFINED(16,5411) /* FString */               __um(MaterialChannel);                                      // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,5412) /* FString */               __um(OpacityChannel);                                       // 0x0010   (0x0010)  
	EOpacityChannelComponent                           OpacityChannelComponent;                                    // 0x0020   (0x0001)  
	EDitherType                                        DitherType;                                                 // 0x0021   (0x0001)  
	EFillMode                                          FillMode;                                                   // 0x0022   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0023   (0x0001)  MISSED
	int32_t                                            Dilation;                                                   // 0x0024   (0x0004)  
	bool                                               UseMultisampling : 1;                                       // 0x0028:0 (0x0001)  
	EOutputPixelFormat                                 OutputPixelFormat;                                          // 0x0029   (0x0001)  
	EOutputImageFileFormat                             OutputImageFileFormat;                                      // 0x002A   (0x0001)  
	EOutputDDSCompressionType                          OutputDDSCompressionType;                                   // 0x002B   (0x0001)  
	int32_t                                            OutputColorLevel;                                           // 0x002C   (0x0004)  
	SDK_UNDEFINED(16,5413) /* FString */               __um(OutputColorName);                                      // 0x0030   (0x0010)  
	float                                              ColorSpaceEdgeThreshold;                                    // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/SimplygonUObjects.SimplygonVertexColorCaster
/// Size: 0x0048 (0x000030 - 0x000078)
class USimplygonVertexColorCaster : public USimplygonMaterialCaster
{ 
public:
	FVertexColorCasterSettings                         VertexColorCasterSettings;                                  // 0x0030   (0x0048)  
};

/// Struct /Script/SimplygonUObjects.ComputeCasterSettings
/// Size: 0x0038 (0x000000 - 0x000038)
struct FComputeCasterSettings
{ 
	SDK_UNDEFINED(16,5414) /* FString */               __um(MaterialChannel);                                      // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,5415) /* FString */               __um(OpacityChannel);                                       // 0x0010   (0x0010)  
	EOpacityChannelComponent                           OpacityChannelComponent;                                    // 0x0020   (0x0001)  
	EDitherType                                        DitherType;                                                 // 0x0021   (0x0001)  
	EFillMode                                          FillMode;                                                   // 0x0022   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0023   (0x0001)  MISSED
	int32_t                                            Dilation;                                                   // 0x0024   (0x0004)  
	bool                                               UseMultisampling : 1;                                       // 0x0028:0 (0x0001)  
	EOutputPixelFormat                                 OutputPixelFormat;                                          // 0x0029   (0x0001)  
	EOutputImageFileFormat                             OutputImageFileFormat;                                      // 0x002A   (0x0001)  
	EOutputDDSCompressionType                          OutputDDSCompressionType;                                   // 0x002B   (0x0001)  
	EOutputColorSpace                                  OutputColorSpace;                                           // 0x002C   (0x0001)  
	bool                                               CastLayersFrontToBack : 1;                                  // 0x002D:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x2];                                       // 0x002E   (0x0002)  MISSED
	int32_t                                            MaxCastLayers;                                              // 0x0030   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/SimplygonUObjects.SimplygonComputeCaster
/// Size: 0x0038 (0x000030 - 0x000068)
class USimplygonComputeCaster : public USimplygonMaterialCaster
{ 
public:
	FComputeCasterSettings                             ComputeCasterSettings;                                      // 0x0030   (0x0038)  
};

/// Struct /Script/SimplygonUObjects.ImpostorFromSingleViewSettings
/// Size: 0x001C (0x000000 - 0x00001C)
struct FImpostorFromSingleViewSettings
{ 
	bool                                               UseTightFitting : 1;                                        // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              TightFittingDepthOffset;                                    // 0x0004   (0x0004)  
	bool                                               TwoSided : 1;                                               // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0009   (0x0003)  MISSED
	FVector                                            ViewDirection;                                              // 0x000C   (0x000C)  
	float                                              TexCoordPadding;                                            // 0x0018   (0x0004)  
};

/// Struct /Script/SimplygonUObjects.ImpostorFromSingleViewPipelineSettings
/// Size: 0x00E8 (0x000008 - 0x0000F0)
struct FImpostorFromSingleViewPipelineSettings : FSimplygonPipelineSettings
{ 
	FImpostorFromSingleViewSettings                    ImpostorFromSingleViewSettings;                             // 0x0008   (0x001C)  
	FAttributeTessellationSettings                     AttributeTessellationSettings;                              // 0x0024   (0x0020)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	FMappingImageSettings                              MappingImageSettings;                                       // 0x0048   (0x0098)  
	TArray<class USimplygonMaterialCaster*>            MaterialPropertyCasters;                                    // 0x00E0   (0x0010)  
};

