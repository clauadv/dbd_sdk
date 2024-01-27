
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/GraphicsExtensions.EShadowDepthLODSelection
/// Size: 0x06
enum class EShadowDepthLODSelection : uint8_t
{
	EShadowDepthLODSelection__ViewDependent                                          = 0,
	EShadowDepthLODSelection__HighestLOD                                             = 1,
	EShadowDepthLODSelection__LowestLOD                                              = 2,
	EShadowDepthLODSelection__ShadowView                                             = 3,
	EShadowDepthLODSelection__Max                                                    = 4,
	EShadowDepthLODSelection__EShadowDepthLODSelection_MAX                           = 5
};

/// Class /Script/GraphicsExtensions.GMAdaptiveShadowMapAtlas
/// Size: 0x00B8 (0x000030 - 0x0000E8)
class UGMAdaptiveShadowMapAtlas : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xB8];                                      // 0x0030   (0x00B8)  MISSED
};

/// Class /Script/GraphicsExtensions.GMAdaptiveShadowMapController
/// Size: 0x0098 (0x000030 - 0x0000C8)
class UGMAdaptiveShadowMapController : public UObject
{ 
public:
	class UGMAdaptiveShadowMapAtlas*                   _atlas;                                                     // 0x0030   (0x0008)  
	class UMaterialInterface*                          _lightFunctionMaterial;                                     // 0x0038   (0x0008)  
	TArray<class UGMAdaptiveShadowMapSource*>          _shadowMapSourceList;                                       // 0x0040   (0x0010)  
	TArray<class UGMAdaptiveShadowMapSource*>          _shadowMapSourceActivatedList;                              // 0x0050   (0x0010)  
	unsigned char                                      UnknownData00_6[0x68];                                      // 0x0060   (0x0068)  MISSED
};

/// Class /Script/GraphicsExtensions.GMAdaptiveShadowMapControllerComponent
/// Size: 0x01E0 (0x000220 - 0x000400)
class UGMAdaptiveShadowMapControllerComponent : public USceneComponent
{ 
public:
	FBHVRPerDetailModeInt                              TileSize;                                                   // 0x0218   (0x00A0)  
	int32_t                                            TileCountX;                                                 // 0x02B8   (0x0004)  
	int32_t                                            TileCountY;                                                 // 0x02BC   (0x0004)  
	FIntPoint                                          GridSize;                                                   // 0x02C0   (0x0008)  
	int32_t                                            GeneratedTilesPerFrame;                                     // 0x02C8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02CC   (0x0004)  MISSED
	FBHVRPerDetailModeInt                              MaxPreallocatedTilesPerFrame;                               // 0x02D0   (0x00A0)  
	bool                                               bSupportsDirectionalLights;                                 // 0x0370   (0x0001)  
	bool                                               bSupportsSpotLights;                                        // 0x0371   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0372   (0x0006)  MISSED
	class UMaterialInterface*                          LightFunctionMaterial;                                      // 0x0378   (0x0008)  
	float                                              CullShadowIfPixelSizeLessThan;                              // 0x0380   (0x0004)  
	bool                                               bPreviewOnly;                                               // 0x0384   (0x0001)  
	unsigned char                                      UnknownData02_5[0x13];                                      // 0x0385   (0x0013)  MISSED
	class UGMAdaptiveShadowMapAtlas*                   _atlas;                                                     // 0x0398   (0x0008)  
	class UGMAdaptiveShadowMapController*              _controller;                                                // 0x03A0   (0x0008)  
	SDK_UNDEFINED(80,3594) /* TMap<UGMAdaptiveShadowMapSourceComponent*, UGMAdaptiveShadowMapSource*> */ __um(_shadowMapSources); // 0x03A8   (0x0050)  
	class UMaterialInstanceDynamic*                    _lightFunctionMaterialInstance;                             // 0x03F8   (0x0008)  


	/// Functions
	// Function /Script/GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.RebuildAtlas
	// void RebuildAtlas();                                                                                                  // [0x598a4e0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.RebuildAllAtlases
	// void RebuildAllAtlases();                                                                                             // [0x598a4c0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.IsControllerDonePreallocatingTiles
	// bool IsControllerDonePreallocatingTiles();                                                                            // [0x598a490] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.GetTileSize
	// int32_t GetTileSize();                                                                                                // [0x598a460] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.GetTileCountY
	// int32_t GetTileCountY();                                                                                              // [0x598a430] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.GetTileCountX
	// int32_t GetTileCountX();                                                                                              // [0x598a400] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/GraphicsExtensions.GMAdaptiveShadowMapControllerComponent.DumpDebugInfo
	// void DumpDebugInfo();                                                                                                 // [0x598a3e0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/GraphicsExtensions.GMAdaptiveShadowMapSource
/// Size: 0x02D0 (0x000030 - 0x000300)
class UGMAdaptiveShadowMapSource : public UObject
{ 
public:
	class UGMAdaptiveShadowMapAtlas*                   _atlas;                                                     // 0x0030   (0x0008)  
	class ULightComponent*                             _lightComponent;                                            // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_6[0x2C0];                                     // 0x0040   (0x02C0)  MISSED
};

/// Class /Script/GraphicsExtensions.GMAdaptiveShadowMapSourceComponent
/// Size: 0x0020 (0x000220 - 0x000240)
class UGMAdaptiveShadowMapSourceComponent : public USceneComponent
{ 
public:
	bool                                               bUseAutoRadius;                                             // 0x0218   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0219   (0x0003)  MISSED
	float                                              Radius;                                                     // 0x021C   (0x0004)  
	float                                              DepthMin;                                                   // 0x0220   (0x0004)  
	float                                              DepthMax;                                                   // 0x0224   (0x0004)  
	int32_t                                            Levels;                                                     // 0x0228   (0x0004)  
	int32_t                                            PreGeneratedLevels;                                         // 0x022C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0230   (0x0010)  MISSED


	/// Functions
	// Function /Script/GraphicsExtensions.GMAdaptiveShadowMapSourceComponent.SetLightRadiusWithBounds
	// void SetLightRadiusWithBounds(FVector BoundingSphereCenter, float BoundingSphereRadius);                              // [0x598a900] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GraphicsExtensions.GMAdaptiveShadowMapSourceComponentSpawner
/// Size: 0x0010 (0x000230 - 0x000240)
class AGMAdaptiveShadowMapSourceComponentSpawner : public AActor
{ 
public:
	bool                                               bCreateASMSourceComponentOnBeginPlay;                       // 0x0230   (0x0001)  
	bool                                               bRemoveCastForCinematicOnlyFlagOnLights;                    // 0x0231   (0x0001)  
	bool                                               bRemoveLightFunctionMaterialOnLights;                       // 0x0232   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0233   (0x0001)  MISSED
	int32_t                                            NumLevelPerSource;                                          // 0x0234   (0x0004)  
	int32_t                                            NumPreGeneratedLevelPerSource;                              // 0x0238   (0x0004)  
	bool                                               bPreviewOnly;                                               // 0x023C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x023D   (0x0003)  MISSED
};

/// Class /Script/GraphicsExtensions.GMAdaptiveShadowMapSourceDirectional
/// Size: 0x0050 (0x000300 - 0x000350)
class UGMAdaptiveShadowMapSourceDirectional : public UGMAdaptiveShadowMapSource
{ 
public:
	class UDirectionalLightComponent*                  _directionalLightComponent;                                 // 0x02F8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0300   (0x0050)  MISSED
};

/// Class /Script/GraphicsExtensions.GMAdaptiveShadowMapSourceSpot
/// Size: 0x0060 (0x000300 - 0x000360)
class UGMAdaptiveShadowMapSourceSpot : public UGMAdaptiveShadowMapSource
{ 
public:
	class USpotLightComponent*                         _spotLightComponent;                                        // 0x02F8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0300   (0x0060)  MISSED
};

/// Class /Script/GraphicsExtensions.GMShadowDepthCapture
/// Size: 0x0160 (0x000030 - 0x000190)
class UGMShadowDepthCapture : public UObject
{ 
public:
	class ULightComponent*                             _lightComponent;                                            // 0x0030   (0x0008)  
	class UTextureRenderTarget2D*                      _depthTarget;                                               // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_6[0x150];                                     // 0x0040   (0x0150)  MISSED
};

/// Class /Script/GraphicsExtensions.GMShadowDepthCaptureComponent
/// Size: 0x0060 (0x000220 - 0x000280)
class UGMShadowDepthCaptureComponent : public USceneComponent
{ 
public:
	int32_t                                            DepthTargetWidth;                                           // 0x0218   (0x0004)  
	int32_t                                            DepthTargetHeight;                                          // 0x021C   (0x0004)  
	class UTextureRenderTarget2D*                      DepthTarget;                                                // 0x0220   (0x0008)  
	bool                                               bCaptureDynamicPrimitives;                                  // 0x0228   (0x0001)  
	bool                                               bCaptureStaticPrimitives;                                   // 0x0229   (0x0001)  
	bool                                               bCaptureEveryFrame;                                         // 0x022A   (0x0001)  
	bool                                               bCaptureOnlyIfVisibleFromCamera;                            // 0x022B   (0x0001)  
	bool                                               bCaptureObjectsWithBlockingCollisionVisibility;             // 0x022C   (0x0001)  
	EShadowDepthLODSelection                           LODSelection;                                               // 0x022D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x022E   (0x0002)  MISSED
	float                                              MinPrimitivePixelDiameterBeforeCulling;                     // 0x0230   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0234   (0x000C)  MISSED
	FVector4                                           ShadowClipRegion;                                           // 0x0240   (0x0010)  
	float                                              OuterConeAngle;                                             // 0x0250   (0x0004)  
	float                                              ShadowNearPlaneOffset;                                      // 0x0254   (0x0004)  
	float                                              AttenuationRadius;                                          // 0x0258   (0x0004)  
	bool                                               bCastTranslucentShadowsAsOpaque;                            // 0x025C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x025D   (0x0003)  MISSED
	float                                              MaxDrawDistance;                                            // 0x0260   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0264   (0x0004)  MISSED
	class UGMShadowDepthCapture*                       _shadowDepthCapture;                                        // 0x0268   (0x0008)  
	class USpotLightComponent*                         _spotLightComponent;                                        // 0x0270   (0x0008)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x0278   (0x0008)  MISSED


	/// Functions
	// Function /Script/GraphicsExtensions.GMShadowDepthCaptureComponent.RequestCaptureUpdate
	// void RequestCaptureUpdate();                                                                                          // [0x598b4b0] Final|Native|Public|BlueprintCallable 
};

