
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Niagara

/// Struct /Script/GFXUtilities.MaterialMap
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMaterialMap
{ 
	class UMaterialInterface*                          SrcMaterial;                                                // 0x0000   (0x0008)  
	class UMaterialInterface*                          DstMaterial;                                                // 0x0008   (0x0008)  
};

/// Struct /Script/GFXUtilities.MaterialNamedGroup
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMaterialNamedGroup
{ 
	SDK_UNDEFINED(16,1575) /* FString */               __um(GroupName);                                            // 0x0000   (0x0010)  
	TArray<FMaterialMap>                               Maps;                                                       // 0x0010   (0x0010)  
};

/// Struct /Script/GFXUtilities.MaterialHelperOriginalMeshState
/// Size: 0x0048 (0x000000 - 0x000048)
struct FMaterialHelperOriginalMeshState
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	TArray<class UMaterialInterface*>                  _originalMaterials;                                         // 0x0008   (0x0010)  
	TArray<class UMaterialInterface*>                  _originalDynamicMaterials;                                  // 0x0018   (0x0010)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0028   (0x0020)  MISSED
};

/// Class /Script/GFXUtilities.BatchMeshCommands
/// Size: 0x0090 (0x000220 - 0x0002B0)
class UBatchMeshCommands : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x58];                                      // 0x0220   (0x0058)  MISSED
	TArray<FMaterialNamedGroup>                        Groups;                                                     // 0x0278   (0x0010)  
	TArray<FMaterialHelperOriginalMeshState>           TargetMeshes;                                               // 0x0288   (0x0010)  
	SDK_UNDEFINED(16,1576) /* FString */               __um(_materialGroupName);                                   // 0x0298   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x02A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/GFXUtilities.BatchMeshCommands.UpdateMaterials
	// void UpdateMaterials();                                                                                               // [0x85bfe20] Final|Native|Public|BlueprintCallable 
	// Function /Script/GFXUtilities.BatchMeshCommands.SetVectorParameter
	// void SetVectorParameter(FName ParameterName, FVector& NewValue);                                                      // [0x85bfd30] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GFXUtilities.BatchMeshCommands.SetTextureParameter
	// void SetTextureParameter(FName ParameterName, class UTexture* newTexture);                                            // [0x85bfc40] Final|Native|Public|BlueprintCallable 
	// Function /Script/GFXUtilities.BatchMeshCommands.SetStencilIntegerScalarParameter
	// void SetStencilIntegerScalarParameter(FName ParameterName, int32_t& NewValue);                                        // [0x85bfb50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GFXUtilities.BatchMeshCommands.SetScalarParameter
	// void SetScalarParameter(FName ParameterName, float NewValue);                                                         // [0x85bfa60] Final|Native|Public|BlueprintCallable 
	// Function /Script/GFXUtilities.BatchMeshCommands.SetRenderInMainPass
	// void SetRenderInMainPass(bool inRenderInMainPass);                                                                    // [0x85bf9d0] Native|Public|BlueprintCallable 
	// Function /Script/GFXUtilities.BatchMeshCommands.SetRenderInCustomDepth
	// void SetRenderInCustomDepth(bool renderInCustomDepth);                                                                // [0x85bf940] Final|Native|Public|BlueprintCallable 
	// Function /Script/GFXUtilities.BatchMeshCommands.SetRenderInCustomColourNoDepth
	// void SetRenderInCustomColourNoDepth(bool renderInCustomColour);                                                       // [0x85bf8b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GFXUtilities.BatchMeshCommands.SetReceivesDecals
	// void SetReceivesDecals(bool receivesDecals);                                                                          // [0x85bf820] Final|Native|Public|BlueprintCallable 
	// Function /Script/GFXUtilities.BatchMeshCommands.SetMaterial
	// void SetMaterial(FString GroupName);                                                                                  // [0x85bf780] Final|Native|Public|BlueprintCallable 
	// Function /Script/GFXUtilities.BatchMeshCommands.SetLightingChannelForAllMeshes
	// void SetLightingChannelForAllMeshes(FLightingChannels LightingChannels);                                              // [0x85bf700] Final|Native|Public|BlueprintCallable 
	// Function /Script/GFXUtilities.BatchMeshCommands.SetCustomDepthStencilValue
	// void SetCustomDepthStencilValue(int32_t stencilValue);                                                                // [0x85bf670] Final|Native|Public|BlueprintCallable 
	// Function /Script/GFXUtilities.BatchMeshCommands.SetColourParameter
	// void SetColourParameter(FName ParameterName, FLinearColor NewValue);                                                  // [0x85bf580] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GFXUtilities.BatchMeshCommands.SetCastCinematicShadows
	// void SetCastCinematicShadows(bool castCinematicShadows);                                                              // [0x85bf4f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GFXUtilities.BatchMeshCommands.SetAllToSameMaterial
	// void SetAllToSameMaterial(class UMaterialInterface* MaterialInterface);                                               // [0x85bf460] Final|Native|Public|BlueprintCallable 
	// Function /Script/GFXUtilities.BatchMeshCommands.ResetMaterials
	// void ResetMaterials();                                                                                                // [0x85bf440] Final|Native|Public|BlueprintCallable 
	// Function /Script/GFXUtilities.BatchMeshCommands.CopyFirstScalarParameter
	// bool CopyFirstScalarParameter(FName ParameterName, float& OutValue);                                                  // [0x85bf340] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GFXUtilities.BatchMeshCommands.BatchSetVisibility
	// void BatchSetVisibility(bool bNewVisibility, bool bPropagateToChildren);                                              // [0x85bf270] Final|Native|Public|BlueprintCallable 
	// Function /Script/GFXUtilities.BatchMeshCommands.BatchSetSkipComponentAndChildrenTransformUpdate
	// void BatchSetSkipComponentAndChildrenTransformUpdate(bool Skip);                                                      // [0x85bf1e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GFXUtilities.BatchMeshCommands.BatchSetComponentTickEnabled
	// void BatchSetComponentTickEnabled(bool Enabled);                                                                      // [0x85bf150] Final|Native|Public|BlueprintCallable 
	// Function /Script/GFXUtilities.BatchMeshCommands.AddGroup
	// void AddGroup(FMaterialNamedGroup Group);                                                                             // [0x85bf010] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GFXUtilities.AlternatingColor
/// Size: 0x0048 (0x000030 - 0x000078)
class UAlternatingColor : public UObject
{ 
public:
	FLinearColor                                       FirstColor;                                                 // 0x0030   (0x0010)  
	FLinearColor                                       SecondColor;                                                // 0x0040   (0x0010)  
	float                                              ColorChangePeriod;                                          // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x24];                                      // 0x0054   (0x0024)  MISSED
};

/// Class /Script/GFXUtilities.BaseOutlineRenderStrategy
/// Size: 0x0048 (0x000030 - 0x000078)
class UBaseOutlineRenderStrategy : public UObject
{ 
public:
	TArray<class UBatchMeshCommands*>                  _batchCommands;                                             // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0040   (0x0038)  MISSED
};

/// Class /Script/GFXUtilities.ClippableProviderComponent
/// Size: 0x0068 (0x0000B8 - 0x000120)
class UClippableProviderComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	SDK_UNDEFINED(80,1577) /* TSet<UPrimitiveComponent*> */ __um(_ignoredPrimitives);                              // 0x00D0   (0x0050)  


	/// Functions
	// Function /Script/GFXUtilities.ClippableProviderComponent.SetIgnoredPrimitives
	// void SetIgnoredPrimitives(TArray<UPrimitiveComponent*> ignoredPrimitives);                                            // [0x85c0090] Final|Native|Public|BlueprintCallable 
	// Function /Script/GFXUtilities.ClippableProviderComponent.AddIgnoredPrimitives
	// void AddIgnoredPrimitives(TArray<UPrimitiveComponent*>& ignoredPrimitives);                                           // [0x85bffe0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GFXUtilities.ClonedMeshComponent
/// Size: 0x00A0 (0x0002B0 - 0x000350)
class UClonedMeshComponent : public UBatchMeshCommands
{ 
public:
	SDK_UNDEFINED(80,1578) /* TMap<USceneComponent*, UMeshComponent*> */ __um(_originalToClone);                   // 0x02A8   (0x0050)  
	SDK_UNDEFINED(80,1579) /* TMap<UMeshComponent*, USceneComponent*> */ __um(_cloneToOriginal);                   // 0x02F8   (0x0050)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0348   (0x0008)  MISSED
};

/// Class /Script/GFXUtilities.ClonedMeshComponentTranslucentOutline
/// Size: 0x0000 (0x000350 - 0x000350)
class UClonedMeshComponentTranslucentOutline : public UClonedMeshComponent
{ 
public:
};

/// Class /Script/GFXUtilities.ClonedStaticMeshComponent
/// Size: 0x0000 (0x000550 - 0x000550)
class UClonedStaticMeshComponent : public UStaticMeshComponent
{ 
public:
};

/// Class /Script/GFXUtilities.ClonedSplineMeshComponent
/// Size: 0x0000 (0x0005E0 - 0x0005E0)
class UClonedSplineMeshComponent : public USplineMeshComponent
{ 
public:
};

/// Class /Script/GFXUtilities.ClonedSkeletalMeshComponent
/// Size: 0x0000 (0x000FA0 - 0x000FA0)
class UClonedSkeletalMeshComponent : public USkeletalMeshComponent
{ 
public:
};

/// Class /Script/GFXUtilities.CustomDepthOutlineRenderStrategy
/// Size: 0x0018 (0x000078 - 0x000090)
class UCustomDepthOutlineRenderStrategy : public UBaseOutlineRenderStrategy
{ 
public:
	class UMaterialInterface*                          _replacementMaterial;                                       // 0x0078   (0x0008)  
	TArray<class UBatchMeshCommands*>                  _translucentCopies;                                         // 0x0080   (0x0010)  
};

/// Class /Script/GFXUtilities.DBDReflectionCaptureSpawnerComponent
/// Size: 0x0060 (0x000220 - 0x000280)
class UDBDReflectionCaptureSpawnerComponent : public USceneComponent
{ 
public:
	EReflectionSourceType                              ReflectionSourceType;                                       // 0x0218   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0219   (0x0007)  MISSED
	class UTextureCube*                                Cubemap;                                                    // 0x0220   (0x0008)  
	float                                              SourceCubemapAngle;                                         // 0x0228   (0x0004)  
	float                                              Brightness;                                                 // 0x022C   (0x0004)  
	float                                              ContributionFactor;                                         // 0x0230   (0x0004)  
	float                                              IBLMultiplicator;                                           // 0x0234   (0x0004)  
	bool                                               bCanBeTinted;                                               // 0x0238   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0239   (0x0003)  MISSED
	FVector                                            CaptureOffset;                                              // 0x023C   (0x000C)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0248   (0x0008)  MISSED
	TArray<class AReflectionCapture*>                  SpawnedReflectionCaptures;                                  // 0x0250   (0x0010)  
	TArray<class UReflectionCaptureComponent*>         SpawnedReflectionCaptureComponents;                         // 0x0260   (0x0010)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0270   (0x0010)  MISSED


	/// Functions
	// Function /Script/GFXUtilities.DBDReflectionCaptureSpawnerComponent.SetIBLMultiplicator
	// void SetIBLMultiplicator(float IBLMultiplicator);                                                                     // [0x85c1060] Final|Native|Public|BlueprintCallable 
	// Function /Script/GFXUtilities.DBDReflectionCaptureSpawnerComponent.SetContributionFactor
	// void SetContributionFactor(float ContributionFactor);                                                                 // [0x85c0fe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GFXUtilities.DBDReflectionCaptureSpawnerComponent.SetBrightness
	// void SetBrightness(float Brightness);                                                                                 // [0x85c0f60] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GFXUtilities.DBDBoxReflectionCaptureSpawnerComponent
/// Size: 0x0020 (0x000280 - 0x0002A0)
class UDBDBoxReflectionCaptureSpawnerComponent : public UDBDReflectionCaptureSpawnerComponent
{ 
public:
	FVector                                            InfluenceBox;                                               // 0x0278   (0x000C)  
	float                                              BoxTransitionDistance;                                      // 0x0284   (0x0004)  
	class UBoxComponent*                               PreviewInfluenceBox;                                        // 0x0288   (0x0008)  
	class UBoxComponent*                               PreviewCaptureBox;                                          // 0x0290   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0298   (0x0008)  MISSED
};

/// Struct /Script/GFXUtilities.DBDCullDistanceSizePair
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDBDCullDistanceSizePair
{ 
	FPerPlatformFloat                                  Size;                                                       // 0x0000   (0x0004)  
	FPerPlatformFloat                                  CullDistance;                                               // 0x0004   (0x0004)  
};

/// Class /Script/GFXUtilities.DBDCullDistanceVolumeComponent
/// Size: 0x0030 (0x000220 - 0x000250)
class UDBDCullDistanceVolumeComponent : public USceneComponent
{ 
public:
	TArray<FDBDCullDistanceSizePair>                   CullDistances;                                              // 0x0218   (0x0010)  
	FVector                                            InfluenceBox;                                               // 0x0228   (0x000C)  
	bool                                               Enabled;                                                    // 0x0234   (0x0001)  
	bool                                               Unbound;                                                    // 0x0235   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0236   (0x0002)  MISSED
	class UBoxComponent*                               _previewInfluenceBox;                                       // 0x0238   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0240   (0x0010)  MISSED
};

/// Class /Script/GFXUtilities.DBDSphereReflectionCaptureSpawnerComponent
/// Size: 0x0010 (0x000280 - 0x000290)
class UDBDSphereReflectionCaptureSpawnerComponent : public UDBDReflectionCaptureSpawnerComponent
{ 
public:
	float                                              InfluenceRadius;                                            // 0x0278   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x027C   (0x0004)  MISSED
	class UDrawSphereComponent*                        PreviewInfluenceRadius;                                     // 0x0280   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0288   (0x0008)  MISSED
};

/// Class /Script/GFXUtilities.GFXUtilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UGFXUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/GFXUtilities.GFXUtilities.ActivateVFX
	// void ActivateVFX(class USkeletalMeshComponent* SkeletalMeshComponent, bool Active);                                   // [0x85c1360] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GFXUtilities.InFrustumComponent
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UInFrustumComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Struct /Script/GFXUtilities.LightUpdate
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLightUpdate
{ 
	class ULightComponent*                             Light;                                                      // 0x0000   (0x0008)  
	float                                              Multiplier;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/GFXUtilities.LightMaterialUpdate
/// Size: 0x0018 (0x000000 - 0x000018)
struct FLightMaterialUpdate
{ 
	class UMaterialHelper*                             Material;                                                   // 0x0000   (0x0008)  
	FName                                              PropertyName;                                               // 0x0008   (0x000C)  
	float                                              Multiplier;                                                 // 0x0014   (0x0004)  
};

/// Class /Script/GFXUtilities.LightIntensityTimelineComponent
/// Size: 0x0058 (0x0000B8 - 0x000110)
class ULightIntensityTimelineComponent : public UActorComponent
{ 
public:
	TArray<FLightUpdate>                               lights;                                                     // 0x00B8   (0x0010)  
	TArray<FLightMaterialUpdate>                       materialHelpers;                                            // 0x00C8   (0x0010)  
	class UCurveFloat*                                 intensityCurve;                                             // 0x00D8   (0x0008)  
	bool                                               randomizeStart;                                             // 0x00E0   (0x0001)  
	bool                                               randomizeLength;                                            // 0x00E1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00E2   (0x0002)  MISSED
	float                                              minLength;                                                  // 0x00E4   (0x0004)  
	float                                              maxLength;                                                  // 0x00E8   (0x0004)  
	bool                                               normalizeCurve;                                             // 0x00EC   (0x0001)  
	bool                                               startTicking;                                               // 0x00ED   (0x0001)  
	ELightUnits                                        inputLightUnit;                                             // 0x00EE   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x00EF   (0x0001)  MISSED
	SDK_UNDEFINED(16,1580) /* FMulticastInlineDelegate */ __um(OnTimelineFinished);                                // 0x00F0   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0100   (0x0010)  MISSED


	/// Functions
	// Function /Script/GFXUtilities.LightIntensityTimelineComponent.SetRandomizeLength
	// void SetRandomizeLength(bool isRandom);                                                                               // [0x85c2000] Final|Native|Public|BlueprintCallable 
	// Function /Script/GFXUtilities.LightIntensityTimelineComponent.SetMinLength
	// void SetMinLength(float newMinValue);                                                                                 // [0x85c1f80] Final|Native|Public|BlueprintCallable 
	// Function /Script/GFXUtilities.LightIntensityTimelineComponent.SetMaxLength
	// void SetMaxLength(float newMaxValue);                                                                                 // [0x85c1f00] Final|Native|Public|BlueprintCallable 
	// Function /Script/GFXUtilities.LightIntensityTimelineComponent.SetLightToMaxValue
	// void SetLightToMaxValue();                                                                                            // [0x85c1ee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GFXUtilities.LightIntensityTimelineComponent.SetLightCurve
	// void SetLightCurve(class UCurveFloat* lightcurve);                                                                    // [0x85c1e50] Final|Native|Public|BlueprintCallable 
	// Function /Script/GFXUtilities.LightIntensityTimelineComponent.Reset
	// void Reset();                                                                                                         // [0x85c1e30] Final|Native|Public|BlueprintCallable 
	// Function /Script/GFXUtilities.LightIntensityTimelineComponent.RegisterForTick
	// void RegisterForTick();                                                                                               // [0x85c1e10] Final|Native|Public|BlueprintCallable 
	// Function /Script/GFXUtilities.LightIntensityTimelineComponent.DeactivateTick
	// void DeactivateTick();                                                                                                // [0x85c1df0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GFXUtilities.LightIntensityTimelineComponent.AddMaterialHelper
	// void AddMaterialHelper(class UMaterialHelper* matHelper, FName propName, float Multiplier);                           // [0x85c1cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GFXUtilities.LightIntensityTimelineComponent.AddLight
	// void AddLight(class ULightComponent* Light, float Multiplier);                                                        // [0x85c1bf0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GFXUtilities.MaterialExpressionBHVRCustomColorOutput
/// Size: 0x0020 (0x000048 - 0x000068)
class UMaterialExpressionBHVRCustomColorOutput : public UMaterialExpressionCustomOutput
{ 
public:
	FExpressionInput                                   Input;                                                      // 0x0048   (0x001C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Class /Script/GFXUtilities.MaterialExpressionBHVRCustomColorSampler
/// Size: 0x0000 (0x000048 - 0x000048)
class UMaterialExpressionBHVRCustomColorSampler : public UMaterialExpressionCustomOutput
{ 
public:
};

/// Class /Script/GFXUtilities.MaterialHelper
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class UMaterialHelper : public UBatchMeshCommands
{ 
public:


	/// Functions
	// Function /Script/GFXUtilities.MaterialHelper.RefreshMeshes
	// void RefreshMeshes();                                                                                                 // [0x85c2510] Final|Native|Public|BlueprintCallable 
	// Function /Script/GFXUtilities.MaterialHelper.RefreshMesh
	// void RefreshMesh(class UMeshComponent* mc);                                                                           // [0x85c2480] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GFXUtilities.MaterialHelperUnaffectedComponentInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UMaterialHelperUnaffectedComponentInterface : public UInterface
{ 
public:
};

/// Class /Script/GFXUtilities.MaterialHelperUnaffectedStaticMeshComponent
/// Size: 0x0000 (0x000550 - 0x000550)
class UMaterialHelperUnaffectedStaticMeshComponent : public UStaticMeshComponent
{ 
public:
};

/// Class /Script/GFXUtilities.MaterialHelperUnaffectedNiagaraComponent
/// Size: 0x0000 (0x000630 - 0x000630)
class UMaterialHelperUnaffectedNiagaraComponent : public UNiagaraComponent
{ 
public:
};

/// Class /Script/GFXUtilities.MeshCloningFactory
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class UMeshCloningFactory : public UBatchMeshCommands
{ 
public:
};

/// Class /Script/GFXUtilities.OuterlineComponent
/// Size: 0x0030 (0x000220 - 0x000250)
class UOuterlineComponent : public USceneComponent
{ 
public:
	class UMaterialInterface*                          CloneCustomDepthMaterial;                                   // 0x0218   (0x0008)  
	class UMaterialInterface*                          CloneTranslucentMaterial;                                   // 0x0220   (0x0008)  
	class UMaterialInstanceDynamic*                    _cloneCustomDepthMaterialDynamic;                           // 0x0228   (0x0008)  
	class UMaterialInstanceDynamic*                    _cloneTranslucentMaterialDynamic;                           // 0x0230   (0x0008)  
	class USkeletalMeshComponent*                      _customDepthSkeletalMesh;                                   // 0x0238   (0x0008)  
	class USkeletalMeshComponent*                      _overlaySkeletalMesh;                                       // 0x0240   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0248   (0x0008)  MISSED


	/// Functions
	// Function /Script/GFXUtilities.OuterlineComponent.SetIntensity
	// void SetIntensity(float Intensity);                                                                                   // [0x85c2e60] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GFXUtilities.StencilOutlineRenderStrategy
/// Size: 0x0028 (0x000078 - 0x0000A0)
class UStencilOutlineRenderStrategy : public UBaseOutlineRenderStrategy
{ 
public:
	TArray<class UMaterialInterface*>                  _replacementMaterials;                                      // 0x0078   (0x0010)  
	TArray<class UBatchMeshCommands*>                  _translucentCopies;                                         // 0x0088   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0098   (0x0008)  MISSED


	/// Functions
	// Function /Script/GFXUtilities.StencilOutlineRenderStrategy.EnableCopyStencilToCustomStencil
	// void EnableCopyStencilToCustomStencil(bool Enabled);                                                                  // [0x85c3160] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GFXUtilities.TranslucentOutlineRenderStrategy
/// Size: 0x0010 (0x000078 - 0x000088)
class UTranslucentOutlineRenderStrategy : public UBaseOutlineRenderStrategy
{ 
public:
	TArray<class UMaterialInterface*>                  _replacementMaterials;                                      // 0x0078   (0x0010)  
};

