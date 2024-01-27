
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CinematicCamera
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/DatasmithContent.EDatasmithAreaLightActorType
/// Size: 0x04
enum class EDatasmithAreaLightActorType : uint8_t
{
	EDatasmithAreaLightActorType__Point                                              = 0,
	EDatasmithAreaLightActorType__Spot                                               = 1,
	EDatasmithAreaLightActorType__Rect                                               = 2,
	EDatasmithAreaLightActorType__EDatasmithAreaLightActorType_MAX                   = 3
};

/// Enum /Script/DatasmithContent.EDatasmithAreaLightActorShape
/// Size: 0x06
enum class EDatasmithAreaLightActorShape : uint8_t
{
	EDatasmithAreaLightActorShape__Rectangle                                         = 0,
	EDatasmithAreaLightActorShape__Disc                                              = 1,
	EDatasmithAreaLightActorShape__Sphere                                            = 2,
	EDatasmithAreaLightActorShape__Cylinder                                          = 3,
	EDatasmithAreaLightActorShape__None                                              = 4,
	EDatasmithAreaLightActorShape__EDatasmithAreaLightActorShape_MAX                 = 5
};

/// Enum /Script/DatasmithContent.EDatasmithCADRetessellationRule
/// Size: 0x03
enum class EDatasmithCADRetessellationRule : uint8_t
{
	EDatasmithCADRetessellationRule__All                                             = 0,
	EDatasmithCADRetessellationRule__SkipDeletedSurfaces                             = 1,
	EDatasmithCADRetessellationRule__EDatasmithCADRetessellationRule_MAX             = 2
};

/// Enum /Script/DatasmithContent.EDatasmithCADStitchingTechnique
/// Size: 0x04
enum class EDatasmithCADStitchingTechnique : uint8_t
{
	EDatasmithCADStitchingTechnique__StitchingNone                                   = 0,
	EDatasmithCADStitchingTechnique__StitchingHeal                                   = 1,
	EDatasmithCADStitchingTechnique__StitchingSew                                    = 2,
	EDatasmithCADStitchingTechnique__EDatasmithCADStitchingTechnique_MAX             = 3
};

/// Enum /Script/DatasmithContent.EDatasmithImportScene
/// Size: 0x04
enum class EDatasmithImportScene : uint8_t
{
	EDatasmithImportScene__NewLevel                                                  = 0,
	EDatasmithImportScene__CurrentLevel                                              = 1,
	EDatasmithImportScene__AssetsOnly                                                = 2,
	EDatasmithImportScene__EDatasmithImportScene_MAX                                 = 3
};

/// Enum /Script/DatasmithContent.EDatasmithImportLightmapMax
/// Size: 0x08
enum class EDatasmithImportLightmapMax : uint8_t
{
	EDatasmithImportLightmapMax__LIGHTMAP                                            = 0,
	EDatasmithImportLightmapMax__LIGHTMAP2                                           = 1,
	EDatasmithImportLightmapMax__LIGHTMAP3                                           = 2,
	EDatasmithImportLightmapMax__LIGHTMAP4                                           = 3,
	EDatasmithImportLightmapMax__LIGHTMAP5                                           = 4,
	EDatasmithImportLightmapMax__LIGHTMAP6                                           = 5,
	EDatasmithImportLightmapMax__LIGHTMAP7                                           = 6,
	EDatasmithImportLightmapMax__LIGHTMAP_MAX                                        = 7
};

/// Enum /Script/DatasmithContent.EDatasmithImportLightmapMin
/// Size: 0x07
enum class EDatasmithImportLightmapMin : uint8_t
{
	EDatasmithImportLightmapMin__LIGHTMAP                                            = 0,
	EDatasmithImportLightmapMin__LIGHTMAP2                                           = 1,
	EDatasmithImportLightmapMin__LIGHTMAP3                                           = 2,
	EDatasmithImportLightmapMin__LIGHTMAP4                                           = 3,
	EDatasmithImportLightmapMin__LIGHTMAP5                                           = 4,
	EDatasmithImportLightmapMin__LIGHTMAP6                                           = 5,
	EDatasmithImportLightmapMin__LIGHTMAP_MAX                                        = 6
};

/// Enum /Script/DatasmithContent.EDatasmithImportMaterialQuality
/// Size: 0x04
enum class EDatasmithImportMaterialQuality : uint8_t
{
	EDatasmithImportMaterialQuality__UseNoFresnelCurves                              = 0,
	EDatasmithImportMaterialQuality__UseSimplifierFresnelCurves                      = 1,
	EDatasmithImportMaterialQuality__UseRealFresnelCurves                            = 2,
	EDatasmithImportMaterialQuality__EDatasmithImportMaterialQuality_MAX             = 3
};

/// Enum /Script/DatasmithContent.EDatasmithImportActorPolicy
/// Size: 0x04
enum class EDatasmithImportActorPolicy : uint8_t
{
	EDatasmithImportActorPolicy__Update                                              = 0,
	EDatasmithImportActorPolicy__Full                                                = 1,
	EDatasmithImportActorPolicy__Ignore                                              = 2,
	EDatasmithImportActorPolicy__EDatasmithImportActorPolicy_MAX                     = 3
};

/// Enum /Script/DatasmithContent.EDatasmithImportAssetConflictPolicy
/// Size: 0x05
enum class EDatasmithImportAssetConflictPolicy : uint8_t
{
	EDatasmithImportAssetConflictPolicy__Replace                                     = 0,
	EDatasmithImportAssetConflictPolicy__Update                                      = 1,
	EDatasmithImportAssetConflictPolicy__Use                                         = 2,
	EDatasmithImportAssetConflictPolicy__Ignore                                      = 3,
	EDatasmithImportAssetConflictPolicy__EDatasmithImportAssetConflictPolicy_MAX     = 4
};

/// Enum /Script/DatasmithContent.EDatasmithImportSearchPackagePolicy
/// Size: 0x03
enum class EDatasmithImportSearchPackagePolicy : uint8_t
{
	EDatasmithImportSearchPackagePolicy__Current                                     = 0,
	EDatasmithImportSearchPackagePolicy__All                                         = 1,
	EDatasmithImportSearchPackagePolicy__EDatasmithImportSearchPackagePolicy_MAX     = 2
};

/// Class /Script/DatasmithContent.DatasmithObjectTemplate
/// Size: 0x0008 (0x000030 - 0x000038)
class UDatasmithObjectTemplate : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithActorTemplate
/// Size: 0x00A0 (0x000038 - 0x0000D8)
class UDatasmithActorTemplate : public UDatasmithObjectTemplate
{ 
public:
	SDK_UNDEFINED(80,4518) /* TSet<FName> */           __um(Layers);                                               // 0x0038   (0x0050)  
	SDK_UNDEFINED(80,4519) /* TSet<FName> */           __um(Tags);                                                 // 0x0088   (0x0050)  
};

/// Class /Script/DatasmithContent.DatasmithAdditionalData
/// Size: 0x0000 (0x000030 - 0x000030)
class UDatasmithAdditionalData : public UObject
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithAreaLightActor
/// Size: 0x0058 (0x000230 - 0x000288)
class ADatasmithAreaLightActor : public AActor
{ 
public:
	SDK_UNDEFINED(1,4520) /* TEnumAsByte<EComponentMobility> */ __um(Mobility);                                    // 0x0230   (0x0001)  
	EDatasmithAreaLightActorType                       LightType;                                                  // 0x0231   (0x0001)  
	EDatasmithAreaLightActorShape                      LightShape;                                                 // 0x0232   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0233   (0x0001)  MISSED
	FVector2D                                          Dimensions;                                                 // 0x0234   (0x0008)  
	float                                              Intensity;                                                  // 0x023C   (0x0004)  
	ELightUnits                                        IntensityUnits;                                             // 0x0240   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0241   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0244   (0x0010)  
	float                                              Temperature;                                                // 0x0254   (0x0004)  
	class UTextureLightProfile*                        IESTexture;                                                 // 0x0258   (0x0008)  
	bool                                               bUseIESBrightness;                                          // 0x0260   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0261   (0x0003)  MISSED
	float                                              IESBrightnessScale;                                         // 0x0264   (0x0004)  
	FRotator                                           Rotation;                                                   // 0x0268   (0x000C)  
	float                                              SourceRadius;                                               // 0x0274   (0x0004)  
	float                                              SourceLength;                                               // 0x0278   (0x0004)  
	float                                              AttenuationRadius;                                          // 0x027C   (0x0004)  
	float                                              SpotlightInnerAngle;                                        // 0x0280   (0x0004)  
	float                                              SpotlightOuterAngle;                                        // 0x0284   (0x0004)  
};

/// Class /Script/DatasmithContent.DatasmithAreaLightActorTemplate
/// Size: 0x0078 (0x000038 - 0x0000B0)
class UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate
{ 
public:
	EDatasmithAreaLightActorType                       LightType;                                                  // 0x0038   (0x0001)  
	EDatasmithAreaLightActorShape                      LightShape;                                                 // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x003A   (0x0002)  MISSED
	FVector2D                                          Dimensions;                                                 // 0x003C   (0x0008)  
	FLinearColor                                       Color;                                                      // 0x0044   (0x0010)  
	float                                              Intensity;                                                  // 0x0054   (0x0004)  
	ELightUnits                                        IntensityUnits;                                             // 0x0058   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0059   (0x0003)  MISSED
	float                                              Temperature;                                                // 0x005C   (0x0004)  
	SDK_UNDEFINED(48,4521) /* TWeakObjectPtr<UTextureLightProfile*> */ __um(IESTexture);                           // 0x0060   (0x0030)  
	bool                                               bUseIESBrightness;                                          // 0x0090   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0091   (0x0003)  MISSED
	float                                              IESBrightnessScale;                                         // 0x0094   (0x0004)  
	FRotator                                           Rotation;                                                   // 0x0098   (0x000C)  
	float                                              SourceRadius;                                               // 0x00A4   (0x0004)  
	float                                              SourceLength;                                               // 0x00A8   (0x0004)  
	float                                              AttenuationRadius;                                          // 0x00AC   (0x0004)  
};

/// Class /Script/DatasmithContent.DatasmithAssetImportData
/// Size: 0x0000 (0x000030 - 0x000030)
class UDatasmithAssetImportData : public UAssetImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithStaticMeshImportData
/// Size: 0x0000 (0x000030 - 0x000030)
class UDatasmithStaticMeshImportData : public UDatasmithAssetImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithStaticMeshCADImportData
/// Size: 0x0000 (0x000030 - 0x000030)
class UDatasmithStaticMeshCADImportData : public UDatasmithStaticMeshImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithSceneImportData
/// Size: 0x0000 (0x000030 - 0x000030)
class UDatasmithSceneImportData : public UAssetImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithTranslatedSceneImportData
/// Size: 0x0000 (0x000030 - 0x000030)
class UDatasmithTranslatedSceneImportData : public UDatasmithSceneImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithCADImportSceneData
/// Size: 0x0000 (0x000030 - 0x000030)
class UDatasmithCADImportSceneData : public UDatasmithSceneImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithMDLSceneImportData
/// Size: 0x0000 (0x000030 - 0x000030)
class UDatasmithMDLSceneImportData : public UDatasmithSceneImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithGLTFSceneImportData
/// Size: 0x0048 (0x000030 - 0x000078)
class UDatasmithGLTFSceneImportData : public UDatasmithSceneImportData
{ 
public:
	SDK_UNDEFINED(16,4522) /* FString */               __um(Generator);                                            // 0x0030   (0x0010)  
	float                                              Version;                                                    // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	SDK_UNDEFINED(16,4523) /* FString */               __um(Author);                                               // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,4524) /* FString */               __um(License);                                              // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,4525) /* FString */               __um(Source);                                               // 0x0068   (0x0010)  
};

/// Class /Script/DatasmithContent.DatasmithStaticMeshGLTFImportData
/// Size: 0x0010 (0x000030 - 0x000040)
class UDatasmithStaticMeshGLTFImportData : public UDatasmithStaticMeshImportData
{ 
public:
	SDK_UNDEFINED(16,4526) /* FString */               __um(SourceMeshName);                                       // 0x0030   (0x0010)  
};

/// Class /Script/DatasmithContent.DatasmithFBXSceneImportData
/// Size: 0x0020 (0x000030 - 0x000050)
class UDatasmithFBXSceneImportData : public UDatasmithSceneImportData
{ 
public:
	bool                                               bGenerateLightmapUVs;                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	SDK_UNDEFINED(16,4527) /* FString */               __um(TexturesDir);                                          // 0x0038   (0x0010)  
	char                                               IntermediateSerialization;                                  // 0x0048   (0x0001)  
	bool                                               bColorizeMaterials;                                         // 0x0049   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x004A   (0x0006)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithDeltaGenAssetImportData
/// Size: 0x0000 (0x000030 - 0x000030)
class UDatasmithDeltaGenAssetImportData : public UDatasmithAssetImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithDeltaGenSceneImportData
/// Size: 0x0048 (0x000050 - 0x000098)
class UDatasmithDeltaGenSceneImportData : public UDatasmithFBXSceneImportData
{ 
public:
	bool                                               bMergeNodes;                                                // 0x0050   (0x0001)  
	bool                                               bOptimizeDuplicatedNodes;                                   // 0x0051   (0x0001)  
	bool                                               bRemoveInvisibleNodes;                                      // 0x0052   (0x0001)  
	bool                                               bSimplifyNodeHierarchy;                                     // 0x0053   (0x0001)  
	bool                                               bImportVar;                                                 // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0055   (0x0003)  MISSED
	SDK_UNDEFINED(16,4528) /* FString */               __um(VarPath);                                              // 0x0058   (0x0010)  
	bool                                               bImportPos;                                                 // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0069   (0x0007)  MISSED
	SDK_UNDEFINED(16,4529) /* FString */               __um(PosPath);                                              // 0x0070   (0x0010)  
	bool                                               bImportTml;                                                 // 0x0080   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0081   (0x0007)  MISSED
	SDK_UNDEFINED(16,4530) /* FString */               __um(TmlPath);                                              // 0x0088   (0x0010)  
};

/// Class /Script/DatasmithContent.DatasmithVREDAssetImportData
/// Size: 0x0000 (0x000030 - 0x000030)
class UDatasmithVREDAssetImportData : public UDatasmithAssetImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithVREDSceneImportData
/// Size: 0x0060 (0x000050 - 0x0000B0)
class UDatasmithVREDSceneImportData : public UDatasmithFBXSceneImportData
{ 
public:
	bool                                               bMergeNodes;                                                // 0x0050   (0x0001)  
	bool                                               bOptimizeDuplicatedNodes;                                   // 0x0051   (0x0001)  
	bool                                               bImportMats;                                                // 0x0052   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0053   (0x0005)  MISSED
	SDK_UNDEFINED(16,4531) /* FString */               __um(MatsPath);                                             // 0x0058   (0x0010)  
	bool                                               bImportVar;                                                 // 0x0068   (0x0001)  
	bool                                               bCleanVar;                                                  // 0x0069   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x006A   (0x0006)  MISSED
	SDK_UNDEFINED(16,4532) /* FString */               __um(VarPath);                                              // 0x0070   (0x0010)  
	bool                                               bImportLightInfo;                                           // 0x0080   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0081   (0x0007)  MISSED
	SDK_UNDEFINED(16,4533) /* FString */               __um(LightInfoPath);                                        // 0x0088   (0x0010)  
	bool                                               bImportClipInfo;                                            // 0x0098   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0099   (0x0007)  MISSED
	SDK_UNDEFINED(16,4534) /* FString */               __um(ClipInfoPath);                                         // 0x00A0   (0x0010)  
};

/// Class /Script/DatasmithContent.DatasmithIFCSceneImportData
/// Size: 0x0000 (0x000030 - 0x000030)
class UDatasmithIFCSceneImportData : public UDatasmithSceneImportData
{ 
public:
};

/// Class /Script/DatasmithContent.DatasmithStaticMeshIFCImportData
/// Size: 0x0010 (0x000030 - 0x000040)
class UDatasmithStaticMeshIFCImportData : public UDatasmithStaticMeshImportData
{ 
public:
	SDK_UNDEFINED(16,4535) /* FString */               __um(SourceGlobalId);                                       // 0x0030   (0x0010)  
};

/// Class /Script/DatasmithContent.DatasmithAssetUserData
/// Size: 0x0050 (0x000030 - 0x000080)
class UDatasmithAssetUserData : public UAssetUserData
{ 
public:
	SDK_UNDEFINED(80,4536) /* TMap<FName, FString> */  __um(MetaData);                                             // 0x0030   (0x0050)  
};

/// Struct /Script/DatasmithContent.DatasmithCameraLookatTrackingSettingsTemplate
/// Size: 0x0038 (0x000000 - 0x000038)
struct FDatasmithCameraLookatTrackingSettingsTemplate
{ 
	bool                                               bEnableLookAtTracking : 1;                                  // 0x0000:0 (0x0001)  
	bool                                               bAllowRoll : 1;                                             // 0x0000:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(48,4537) /* TWeakObjectPtr<AActor*> */ __um(ActorToTrack);                                       // 0x0008   (0x0030)  
};

/// Class /Script/DatasmithContent.DatasmithCineCameraActorTemplate
/// Size: 0x0038 (0x000038 - 0x000070)
class UDatasmithCineCameraActorTemplate : public UDatasmithObjectTemplate
{ 
public:
	FDatasmithCameraLookatTrackingSettingsTemplate     LookatTrackingSettings;                                     // 0x0038   (0x0038)  
};

/// Struct /Script/DatasmithContent.DatasmithCameraFilmbackSettingsTemplate
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDatasmithCameraFilmbackSettingsTemplate
{ 
	float                                              SensorWidth;                                                // 0x0000   (0x0004)  
	float                                              SensorHeight;                                               // 0x0004   (0x0004)  
};

/// Struct /Script/DatasmithContent.DatasmithCameraLensSettingsTemplate
/// Size: 0x0004 (0x000000 - 0x000004)
struct FDatasmithCameraLensSettingsTemplate
{ 
	float                                              MaxFStop;                                                   // 0x0000   (0x0004)  
};

/// Struct /Script/DatasmithContent.DatasmithCameraFocusSettingsTemplate
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDatasmithCameraFocusSettingsTemplate
{ 
	ECameraFocusMethod                                 FocusMethod;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              ManualFocusDistance;                                        // 0x0004   (0x0004)  
};

/// Struct /Script/DatasmithContent.DatasmithPostProcessSettingsTemplate
/// Size: 0x0040 (0x000000 - 0x000040)
struct FDatasmithPostProcessSettingsTemplate
{ 
	bool                                               bOverride_WhiteTemp : 1;                                    // 0x0000:0 (0x0001)  
	bool                                               bOverride_ColorSaturation : 1;                              // 0x0000:1 (0x0001)  
	bool                                               bOverride_VignetteIntensity : 1;                            // 0x0000:2 (0x0001)  
	bool                                               bOverride_FilmWhitePoint : 1;                               // 0x0000:3 (0x0001)  
	bool                                               bOverride_AutoExposureMethod : 1;                           // 0x0000:4 (0x0001)  
	bool                                               bOverride_CameraISO : 1;                                    // 0x0000:5 (0x0001)  
	bool                                               bOverride_CameraShutterSpeed : 1;                           // 0x0000:6 (0x0001)  
	unsigned char                                      UnknownData00_3[0x3];                                       // 0x0001   (0x0003)  MISSED
	bool                                               bOverride_DepthOfFieldFstop : 1;                            // 0x0004:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              WhiteTemp;                                                  // 0x0008   (0x0004)  
	float                                              VignetteIntensity;                                          // 0x000C   (0x0004)  
	FLinearColor                                       FilmWhitePoint;                                             // 0x0010   (0x0010)  
	FVector4                                           ColorSaturation;                                            // 0x0020   (0x0010)  
	SDK_UNDEFINED(1,4538) /* TEnumAsByte<EAutoExposureMethod> */ __um(AutoExposureMethod);                         // 0x0030   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              CameraISO;                                                  // 0x0034   (0x0004)  
	float                                              CameraShutterSpeed;                                         // 0x0038   (0x0004)  
	float                                              DepthOfFieldFstop;                                          // 0x003C   (0x0004)  
};

/// Class /Script/DatasmithContent.DatasmithCineCameraComponentTemplate
/// Size: 0x0068 (0x000038 - 0x0000A0)
class UDatasmithCineCameraComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
	FDatasmithCameraFilmbackSettingsTemplate           FilmbackSettings;                                           // 0x0038   (0x0008)  
	FDatasmithCameraLensSettingsTemplate               LensSettings;                                               // 0x0040   (0x0004)  
	FDatasmithCameraFocusSettingsTemplate              FocusSettings;                                              // 0x0044   (0x0008)  
	float                                              CurrentFocalLength;                                         // 0x004C   (0x0004)  
	float                                              CurrentAperture;                                            // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0054   (0x000C)  MISSED
	FDatasmithPostProcessSettingsTemplate              PostProcessSettings;                                        // 0x0060   (0x0040)  
};

/// Class /Script/DatasmithContent.DatasmithContentBlueprintLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UDatasmithContentBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey
	// FString GetDatasmithUserDataValueForKey(class UObject* Object, FName Key);                                            // [0x46231f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue
	// void GetDatasmithUserDataKeysAndValuesForValue(class UObject* Object, FString StringToMatch, TArray<FName>& OutKeys, TArray<FString>& OutValues); // [0x4623030] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData
	// class UDatasmithAssetUserData* GetDatasmithUserData(class UObject* Object);                                           // [0x4622fa0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/DatasmithContent.DatasmithCustomActionBase
/// Size: 0x0008 (0x000030 - 0x000038)
class UDatasmithCustomActionBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithDecalComponentTemplate
/// Size: 0x0018 (0x000038 - 0x000050)
class UDatasmithDecalComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
	int32_t                                            SortOrder;                                                  // 0x0038   (0x0004)  
	FVector                                            DecalSize;                                                  // 0x003C   (0x000C)  
	class UMaterialInterface*                          Material;                                                   // 0x0048   (0x0008)  
};

/// Class /Script/DatasmithContent.DatasmithImportedSequencesActor
/// Size: 0x0010 (0x000230 - 0x000240)
class ADatasmithImportedSequencesActor : public AActor
{ 
public:
	TArray<class ULevelSequence*>                      ImportedSequences;                                          // 0x0230   (0x0010)  


	/// Functions
	// Function /Script/DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence
	// void PlayLevelSequence(class ULevelSequence* SequenceToPlay);                                                         // [0x4623320] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DatasmithContent.DatasmithOptionsBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UDatasmithOptionsBase : public UObject
{ 
public:
};

/// Struct /Script/DatasmithContent.DatasmithTessellationOptions
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDatasmithTessellationOptions
{ 
	float                                              ChordTolerance;                                             // 0x0000   (0x0004)  
	float                                              MaxEdgeLength;                                              // 0x0004   (0x0004)  
	float                                              NormalTolerance;                                            // 0x0008   (0x0004)  
	EDatasmithCADStitchingTechnique                    StitchingTechnique;                                         // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithCommonTessellationOptions
/// Size: 0x0010 (0x000030 - 0x000040)
class UDatasmithCommonTessellationOptions : public UDatasmithOptionsBase
{ 
public:
	FDatasmithTessellationOptions                      Options;                                                    // 0x0030   (0x0010)  
};

/// Struct /Script/DatasmithContent.DatasmithAssetImportOptions
/// Size: 0x000C (0x000000 - 0x00000C)
struct FDatasmithAssetImportOptions
{ 
	FName                                              PackagePath;                                                // 0x0000   (0x000C)  
};

/// Struct /Script/DatasmithContent.DatasmithStaticMeshImportOptions
/// Size: 0x0004 (0x000000 - 0x000004)
struct FDatasmithStaticMeshImportOptions
{ 
	EDatasmithImportLightmapMin                        MinLightmapResolution;                                      // 0x0000   (0x0001)  
	EDatasmithImportLightmapMax                        MaxLightmapResolution;                                      // 0x0001   (0x0001)  
	bool                                               bGenerateLightmapUVs;                                       // 0x0002   (0x0001)  
	bool                                               bRemoveDegenerates;                                         // 0x0003   (0x0001)  
};

/// Struct /Script/DatasmithContent.DatasmithImportBaseOptions
/// Size: 0x0018 (0x000000 - 0x000018)
struct FDatasmithImportBaseOptions
{ 
	EDatasmithImportScene                              SceneHandling;                                              // 0x0000   (0x0001)  
	bool                                               bIncludeGeometry;                                           // 0x0001   (0x0001)  
	bool                                               bIncludeMaterial;                                           // 0x0002   (0x0001)  
	bool                                               bIncludeLight;                                              // 0x0003   (0x0001)  
	bool                                               bIncludeCamera;                                             // 0x0004   (0x0001)  
	bool                                               bIncludeAnimation;                                          // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0006   (0x0002)  MISSED
	FDatasmithAssetImportOptions                       AssetOptions;                                               // 0x0008   (0x000C)  
	FDatasmithStaticMeshImportOptions                  StaticMeshOptions;                                          // 0x0014   (0x0004)  
};

/// Struct /Script/DatasmithContent.DatasmithReimportOptions
/// Size: 0x0002 (0x000000 - 0x000002)
struct FDatasmithReimportOptions
{ 
	bool                                               bUpdateActors;                                              // 0x0000   (0x0001)  
	bool                                               bRespawnDeletedActors;                                      // 0x0001   (0x0001)  
};

/// Class /Script/DatasmithContent.DatasmithImportOptions
/// Size: 0x0050 (0x000030 - 0x000080)
class UDatasmithImportOptions : public UDatasmithOptionsBase
{ 
public:
	EDatasmithImportSearchPackagePolicy                SearchPackagePolicy;                                        // 0x0030   (0x0001)  
	EDatasmithImportAssetConflictPolicy                MaterialConflictPolicy;                                     // 0x0031   (0x0001)  
	EDatasmithImportAssetConflictPolicy                TextureConflictPolicy;                                      // 0x0032   (0x0001)  
	EDatasmithImportActorPolicy                        StaticMeshActorImportPolicy;                                // 0x0033   (0x0001)  
	EDatasmithImportActorPolicy                        LightImportPolicy;                                          // 0x0034   (0x0001)  
	EDatasmithImportActorPolicy                        CameraImportPolicy;                                         // 0x0035   (0x0001)  
	EDatasmithImportActorPolicy                        OtherActorImportPolicy;                                     // 0x0036   (0x0001)  
	EDatasmithImportMaterialQuality                    MaterialQuality;                                            // 0x0037   (0x0001)  
	FDatasmithImportBaseOptions                        BaseOptions;                                                // 0x0038   (0x0018)  
	FDatasmithReimportOptions                          ReimportOptions;                                            // 0x0050   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0052   (0x0006)  MISSED
	SDK_UNDEFINED(16,4539) /* FString */               __um(Filename);                                             // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,4540) /* FString */               __um(FilePath);                                             // 0x0068   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithLandscapeTemplate
/// Size: 0x0010 (0x000038 - 0x000048)
class UDatasmithLandscapeTemplate : public UDatasmithObjectTemplate
{ 
public:
	class UMaterialInterface*                          LandscapeMaterial;                                          // 0x0038   (0x0008)  
	int32_t                                            StaticLightingLOD;                                          // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithLightComponentTemplate
/// Size: 0x0038 (0x000038 - 0x000070)
class UDatasmithLightComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
	bool                                               bVisible : 1;                                               // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_3[0x3];                                       // 0x0039   (0x0003)  MISSED
	bool                                               CastShadows : 1;                                            // 0x003C:0 (0x0001)  
	bool                                               bUseTemperature : 1;                                        // 0x003C:1 (0x0001)  
	bool                                               bUseIESBrightness : 1;                                      // 0x003C:2 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x003D   (0x0003)  MISSED
	float                                              Intensity;                                                  // 0x0040   (0x0004)  
	float                                              Temperature;                                                // 0x0044   (0x0004)  
	float                                              IESBrightnessScale;                                         // 0x0048   (0x0004)  
	FLinearColor                                       LightColor;                                                 // 0x004C   (0x0010)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	class UMaterialInterface*                          LightFunctionMaterial;                                      // 0x0060   (0x0008)  
	class UTextureLightProfile*                        IESTexture;                                                 // 0x0068   (0x0008)  
};

/// Struct /Script/DatasmithContent.DatasmithStaticParameterSetTemplate
/// Size: 0x0050 (0x000000 - 0x000050)
struct FDatasmithStaticParameterSetTemplate
{ 
	SDK_UNDEFINED(80,4541) /* TMap<FName, bool> */     __um(StaticSwitchParameters);                               // 0x0000   (0x0050)  
};

/// Class /Script/DatasmithContent.DatasmithMaterialInstanceTemplate
/// Size: 0x0170 (0x000038 - 0x0001A8)
class UDatasmithMaterialInstanceTemplate : public UDatasmithObjectTemplate
{ 
public:
	SDK_UNDEFINED(48,4542) /* TWeakObjectPtr<UMaterialInterface*> */ __um(ParentMaterial);                         // 0x0038   (0x0030)  
	SDK_UNDEFINED(80,4543) /* TMap<FName, float> */    __um(ScalarParameterValues);                                // 0x0068   (0x0050)  
	SDK_UNDEFINED(80,4544) /* TMap<FName, FLinearColor> */ __um(VectorParameterValues);                            // 0x00B8   (0x0050)  
	SDK_UNDEFINED(80,4545) /* TMap<FName, TWeakObjectPtr<UTexture*>> */ __um(TextureParameterValues);              // 0x0108   (0x0050)  
	FDatasmithStaticParameterSetTemplate               StaticParameters;                                           // 0x0158   (0x0050)  
};

/// Class /Script/DatasmithContent.DatasmithPointLightComponentTemplate
/// Size: 0x0010 (0x000038 - 0x000048)
class UDatasmithPointLightComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
	ELightUnits                                        IntensityUnits;                                             // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              SourceRadius;                                               // 0x003C   (0x0004)  
	float                                              SourceLength;                                               // 0x0040   (0x0004)  
	float                                              AttenuationRadius;                                          // 0x0044   (0x0004)  
};

/// Class /Script/DatasmithContent.DatasmithPostProcessVolumeTemplate
/// Size: 0x0058 (0x000038 - 0x000090)
class UDatasmithPostProcessVolumeTemplate : public UDatasmithObjectTemplate
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0038   (0x0008)  MISSED
	FDatasmithPostProcessSettingsTemplate              Settings;                                                   // 0x0040   (0x0040)  
	bool                                               bEnabled : 1;                                               // 0x0080:0 (0x0001)  
	bool                                               bUnbound : 1;                                               // 0x0080:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0081   (0x000F)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithScene
/// Size: 0x0008 (0x000030 - 0x000038)
class UDatasmithScene : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/DatasmithContent.DatasmithSceneActor
/// Size: 0x0058 (0x000230 - 0x000288)
class ADatasmithSceneActor : public AActor
{ 
public:
	class UDatasmithScene*                             Scene;                                                      // 0x0230   (0x0008)  
	SDK_UNDEFINED(80,4546) /* TMap<FName, TWeakObjectPtr<AActor*>> */ __um(RelatedActors);                         // 0x0238   (0x0050)  
};

/// Class /Script/DatasmithContent.DatasmithSceneComponentTemplate
/// Size: 0x00C8 (0x000038 - 0x000100)
class UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTransform                                         RelativeTransform;                                          // 0x0040   (0x0030)  
	SDK_UNDEFINED(1,4547) /* TEnumAsByte<EComponentMobility> */ __um(Mobility);                                    // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0071   (0x0007)  MISSED
	SDK_UNDEFINED(48,4548) /* TWeakObjectPtr<USceneComponent*> */ __um(AttachParent);                              // 0x0078   (0x0030)  
	bool                                               bVisible;                                                   // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00A9   (0x0007)  MISSED
	SDK_UNDEFINED(80,4549) /* TSet<FName> */           __um(Tags);                                                 // 0x00B0   (0x0050)  
};

/// Class /Script/DatasmithContent.DatasmithSkyLightComponentTemplate
/// Size: 0x0010 (0x000038 - 0x000048)
class UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
	SDK_UNDEFINED(1,4550) /* TEnumAsByte<ESkyLightSourceType> */ __um(SourceType);                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            CubemapResolution;                                          // 0x003C   (0x0004)  
	class UTextureCube*                                Cubemap;                                                    // 0x0040   (0x0008)  
};

/// Class /Script/DatasmithContent.DatasmithSpotLightComponentTemplate
/// Size: 0x0008 (0x000038 - 0x000040)
class UDatasmithSpotLightComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
	float                                              InnerConeAngle;                                             // 0x0038   (0x0004)  
	float                                              OuterConeAngle;                                             // 0x003C   (0x0004)  
};

/// Class /Script/DatasmithContent.DatasmithStaticMeshComponentTemplate
/// Size: 0x0018 (0x000038 - 0x000050)
class UDatasmithStaticMeshComponentTemplate : public UDatasmithObjectTemplate
{ 
public:
	class UStaticMesh*                                 StaticMesh;                                                 // 0x0038   (0x0008)  
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                          // 0x0040   (0x0010)  
};

/// Struct /Script/DatasmithContent.DatasmithMeshSectionInfoMapTemplate
/// Size: 0x0050 (0x000000 - 0x000050)
struct FDatasmithMeshSectionInfoMapTemplate
{ 
	SDK_UNDEFINED(80,4551) /* TMap<uint32_t, FDatasmithMeshSectionInfoTemplate> */ __um(Map);                      // 0x0000   (0x0050)  
};

/// Struct /Script/DatasmithContent.DatasmithMeshBuildSettingsTemplate
/// Size: 0x0010 (0x000000 - 0x000010)
struct FDatasmithMeshBuildSettingsTemplate
{ 
	bool                                               bUseMikkTSpace : 1;                                         // 0x0000:0 (0x0001)  
	bool                                               bRecomputeNormals : 1;                                      // 0x0000:1 (0x0001)  
	bool                                               bRecomputeTangents : 1;                                     // 0x0000:2 (0x0001)  
	bool                                               bRemoveDegenerates : 1;                                     // 0x0000:3 (0x0001)  
	bool                                               bBuildAdjacencyBuffer : 1;                                  // 0x0000:4 (0x0001)  
	bool                                               bUseHighPrecisionTangentBasis : 1;                          // 0x0000:5 (0x0001)  
	bool                                               bUseFullPrecisionUVs : 1;                                   // 0x0000:6 (0x0001)  
	bool                                               bGenerateLightmapUVs : 1;                                   // 0x0000:7 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            MinLightmapResolution;                                      // 0x0004   (0x0004)  
	int32_t                                            SrcLightmapIndex;                                           // 0x0008   (0x0004)  
	int32_t                                            DstLightmapIndex;                                           // 0x000C   (0x0004)  
};

/// Struct /Script/DatasmithContent.DatasmithStaticMaterialTemplate
/// Size: 0x0018 (0x000000 - 0x000018)
struct FDatasmithStaticMaterialTemplate
{ 
	FName                                              MaterialSlotName;                                           // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UMaterialInterface*                          MaterialInterface;                                          // 0x0010   (0x0008)  
};

/// Class /Script/DatasmithContent.DatasmithStaticMeshTemplate
/// Size: 0x0078 (0x000038 - 0x0000B0)
class UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate
{ 
public:
	FDatasmithMeshSectionInfoMapTemplate               SectionInfoMap;                                             // 0x0038   (0x0050)  
	int32_t                                            LightMapCoordinateIndex;                                    // 0x0088   (0x0004)  
	int32_t                                            LightMapResolution;                                         // 0x008C   (0x0004)  
	TArray<FDatasmithMeshBuildSettingsTemplate>        BuildSettings;                                              // 0x0090   (0x0010)  
	TArray<FDatasmithStaticMaterialTemplate>           StaticMaterials;                                            // 0x00A0   (0x0010)  
};

/// Struct /Script/DatasmithContent.DatasmithRetessellationOptions
/// Size: 0x0004 (0x000010 - 0x000014)
struct FDatasmithRetessellationOptions : FDatasmithTessellationOptions
{ 
	EDatasmithCADRetessellationRule                    RetessellationRule;                                         // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/DatasmithContent.DatasmithMeshSectionInfoTemplate
/// Size: 0x0004 (0x000000 - 0x000004)
struct FDatasmithMeshSectionInfoTemplate
{ 
	int32_t                                            MaterialIndex;                                              // 0x0000   (0x0004)  
};

