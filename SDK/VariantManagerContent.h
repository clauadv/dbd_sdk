
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/VariantManagerContent.EPropertyValueCategory
/// Size: 0x10
enum class EPropertyValueCategory : uint8_t
{
	EPropertyValueCategory__Undefined                                                = 0,
	EPropertyValueCategory__Generic                                                  = 1,
	EPropertyValueCategory__RelativeLocation                                         = 2,
	EPropertyValueCategory__RelativeRotation                                         = 4,
	EPropertyValueCategory__RelativeScale3D                                          = 8,
	EPropertyValueCategory__Visibility                                               = 16,
	EPropertyValueCategory__Material                                                 = 32,
	EPropertyValueCategory__Color                                                    = 64,
	EPropertyValueCategory__Option                                                   = 128,
	EPropertyValueCategory__EPropertyValueCategory_MAX                               = 129
};

/// Class /Script/VariantManagerContent.LevelVariantSets
/// Size: 0x0068 (0x000030 - 0x000098)
class ULevelVariantSets : public UObject
{ 
public:
	class UBlueprintGeneratedClass*                    DirectorClass;                                              // 0x0030   (0x0008)  
	TArray<class UVariantSet*>                         VariantSets;                                                // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0048   (0x0050)  MISSED


	/// Functions
	// Function /Script/VariantManagerContent.LevelVariantSets.GetVariantSetByName
	// class UVariantSet* GetVariantSetByName(FString VariantSetName);                                                       // [0x45c8270] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.LevelVariantSets.GetVariantSet
	// class UVariantSet* GetVariantSet(int32_t VariantSetIndex);                                                            // [0x45c81d0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.LevelVariantSets.GetNumVariantSets
	// int32_t GetNumVariantSets();                                                                                          // [0x45c7dc0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/VariantManagerContent.LevelVariantSetsActor
/// Size: 0x0070 (0x000230 - 0x0002A0)
class ALevelVariantSetsActor : public AActor
{ 
public:
	FSoftObjectPath                                    LevelVariantSets;                                           // 0x0230   (0x0020)  
	SDK_UNDEFINED(80,5602) /* TMap<UBlueprintGeneratedClass*, ULevelVariantSetsFunctionDirector*> */ __um(DirectorInstances); // 0x0250   (0x0050)  


	/// Functions
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
	// bool SwitchOnVariantByName(FString VariantSetName, FString VariantName);                                              // [0x45c8fb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
	// bool SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex);                                           // [0x45c8ee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
	// void SetLevelVariantSets(class ULevelVariantSets* InVariantSets);                                                     // [0x45c8730] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
	// class ULevelVariantSets* GetLevelVariantSets(bool bLoad);                                                             // [0x45c7cc0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/VariantManagerContent.LevelVariantSetsFunctionDirector
/// Size: 0x0018 (0x000030 - 0x000048)
class ULevelVariantSetsFunctionDirector : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0030   (0x0018)  MISSED
};

/// Struct /Script/VariantManagerContent.CapturedPropSegment
/// Size: 0x0028 (0x000000 - 0x000028)
struct FCapturedPropSegment
{ 
	SDK_UNDEFINED(16,5603) /* FString */               __um(PropertyName);                                         // 0x0000   (0x0010)  
	int32_t                                            PropertyIndex;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	SDK_UNDEFINED(16,5604) /* FString */               __um(ComponentName);                                        // 0x0018   (0x0010)  
};

/// Class /Script/VariantManagerContent.PropertyValue
/// Size: 0x01A8 (0x000030 - 0x0001D8)
class UPropertyValue : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x60];                                      // 0x0030   (0x0060)  MISSED
	SDK_UNDEFINED(16,5605) /* TArray<Properties> */    __um(Properties);                                           // 0x0090   (0x0010)  
	TArray<int32_t>                                    PropertyIndices;                                            // 0x00A0   (0x0010)  
	TArray<FCapturedPropSegment>                       CapturedPropSegments;                                       // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,5606) /* FString */               __um(FullDisplayString);                                    // 0x00C0   (0x0010)  
	FName                                              PropertySetterName;                                         // 0x00D0   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00DC   (0x0004)  MISSED
	SDK_UNDEFINED(80,5607) /* TMap<FString, FString> */ __um(PropertySetterParameterDefaults);                     // 0x00E0   (0x0050)  
	bool                                               bHasRecordedData;                                           // 0x0130   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0131   (0x0007)  MISSED
	class UClass*                                      LeafPropertyClass;                                          // 0x0138   (0x0008)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0140   (0x0008)  MISSED
	TArray<char>                                       ValueBytes;                                                 // 0x0148   (0x0010)  
	EPropertyValueCategory                             PropCategory;                                               // 0x0158   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7F];                                      // 0x0159   (0x007F)  MISSED


	/// Functions
	// Function /Script/VariantManagerContent.PropertyValue.HasRecordedData
	// bool HasRecordedData();                                                                                               // [0x45c8370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.PropertyValue.GetPropertyTooltip
	// FText GetPropertyTooltip();                                                                                           // [0x45c7f00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.PropertyValue.GetFullDisplayString
	// FString GetFullDisplayString();                                                                                       // [0x45c7c80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VariantManagerContent.PropertyValueTransform
/// Size: 0x0000 (0x0001D8 - 0x0001D8)
class UPropertyValueTransform : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueVisibility
/// Size: 0x0000 (0x0001D8 - 0x0001D8)
class UPropertyValueVisibility : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueColor
/// Size: 0x0000 (0x0001D8 - 0x0001D8)
class UPropertyValueColor : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueMaterial
/// Size: 0x0000 (0x0001D8 - 0x0001D8)
class UPropertyValueMaterial : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueOption
/// Size: 0x0000 (0x0001D8 - 0x0001D8)
class UPropertyValueOption : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.PropertyValueSoftObject
/// Size: 0x0000 (0x0001D8 - 0x0001D8)
class UPropertyValueSoftObject : public UPropertyValue
{ 
public:
};

/// Class /Script/VariantManagerContent.SwitchActor
/// Size: 0x0028 (0x000230 - 0x000258)
class ASwitchActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0230   (0x0018)  MISSED
	class USceneComponent*                             SceneComponent;                                             // 0x0248   (0x0008)  
	int32_t                                            LastSelectedOption;                                         // 0x0250   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0254   (0x0004)  MISSED


	/// Functions
	// Function /Script/VariantManagerContent.SwitchActor.SelectOption
	// void SelectOption(int32_t OptionIndex);                                                                               // [0x45c83d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.SwitchActor.GetSelectedOption
	// int32_t GetSelectedOption();                                                                                          // [0x45c7fa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.SwitchActor.GetOptions
	// TArray<AActor*> GetOptions();                                                                                         // [0x45c7e20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/VariantManagerContent.VariantDependency
/// Size: 0x0068 (0x000000 - 0x000068)
struct FVariantDependency
{ 
	SDK_UNDEFINED(48,5608) /* TWeakObjectPtr<UVariantSet*> */ __um(VariantSet);                                    // 0x0000   (0x0030)  
	SDK_UNDEFINED(48,5609) /* TWeakObjectPtr<UVariant*> */ __um(Variant);                                          // 0x0030   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/VariantManagerContent.Variant
/// Size: 0x0058 (0x000030 - 0x000088)
class UVariant : public UObject
{ 
public:
	TArray<FVariantDependency>                         Dependencies;                                               // 0x0030   (0x0010)  
	SDK_UNDEFINED(24,5610) /* FText */                 __um(DisplayText);                                          // 0x0040   (0x0018)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0058   (0x0018)  MISSED
	TArray<class UVariantObjectBinding*>               ObjectBindings;                                             // 0x0070   (0x0010)  
	class UTexture2D*                                  Thumbnail;                                                  // 0x0080   (0x0008)  


	/// Functions
	// Function /Script/VariantManagerContent.Variant.SwitchOn
	// void SwitchOn();                                                                                                      // [0x45c8ec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromTexture
	// void SetThumbnailFromTexture(class UTexture2D* NewThumbnail);                                                         // [0x45c8da0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromFile
	// void SetThumbnailFromFile(FString FilePath);                                                                          // [0x45c8bc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromEditorViewport
	// void SetThumbnailFromEditorViewport();                                                                                // [0x4592da0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromCamera
	// void SetThumbnailFromCamera(class UObject* WorldContextObject, FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // [0x45c87c0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetDisplayText
	// void SetDisplayText(FText& NewDisplayText);                                                                           // [0x45c8590] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetDependency
	// void SetDependency(int32_t index, FVariantDependency& Dependency);                                                    // [0x45c8460] Final|Native|Public|HasOutParms 
	// Function /Script/VariantManagerContent.Variant.IsActive
	// bool IsActive();                                                                                                      // [0x45c83a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetThumbnail
	// class UTexture2D* GetThumbnail();                                                                                     // [0x45c7fd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetParent
	// class UVariantSet* GetParent();                                                                                       // [0x45c7ea0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetNumDependencies
	// int32_t GetNumDependencies();                                                                                         // [0x45c7d90] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetNumActors
	// int32_t GetNumActors();                                                                                               // [0x45c7d60] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetDisplayText
	// FText GetDisplayText();                                                                                               // [0x45c7b40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.Variant.GetDependents
	// TArray<UVariant*> GetDependents(class ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies);            // [0x45c7a30] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetDependency
	// FVariantDependency GetDependency(int32_t index);                                                                      // [0x45c7990] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetActor
	// class AActor* GetActor(int32_t ActorIndex);                                                                           // [0x45c78f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.DeleteDependency
	// void DeleteDependency(int32_t index);                                                                                 // [0x45c7860] Final|Native|Public  
	// Function /Script/VariantManagerContent.Variant.AddDependency
	// int32_t AddDependency(FVariantDependency& Dependency);                                                                // [0x45c7760] Final|Native|Public|HasOutParms 
};

/// Struct /Script/VariantManagerContent.FunctionCaller
/// Size: 0x000C (0x000000 - 0x00000C)
struct FFunctionCaller
{ 
	FName                                              FunctionName;                                               // 0x0000   (0x000C)  
};

/// Class /Script/VariantManagerContent.VariantObjectBinding
/// Size: 0x0070 (0x000030 - 0x0000A0)
class UVariantObjectBinding : public UObject
{ 
public:
	SDK_UNDEFINED(16,5611) /* FString */               __um(CachedActorLabel);                                     // 0x0030   (0x0010)  
	FSoftObjectPath                                    ObjectPtr;                                                  // 0x0040   (0x0020)  
	SDK_UNDEFINED(28,5612) /* TLazyObjectPtr<UObject*> */ __um(LazyObjectPtr);                                     // 0x0060   (0x001C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	TArray<class UPropertyValue*>                      CapturedProperties;                                         // 0x0080   (0x0010)  
	TArray<FFunctionCaller>                            FunctionCallers;                                            // 0x0090   (0x0010)  
};

/// Class /Script/VariantManagerContent.VariantSet
/// Size: 0x0050 (0x000030 - 0x000080)
class UVariantSet : public UObject
{ 
public:
	SDK_UNDEFINED(24,5613) /* FText */                 __um(DisplayText);                                          // 0x0030   (0x0018)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0048   (0x0018)  MISSED
	bool                                               bExpanded;                                                  // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0061   (0x0007)  MISSED
	TArray<class UVariant*>                            Variants;                                                   // 0x0068   (0x0010)  
	class UTexture2D*                                  Thumbnail;                                                  // 0x0078   (0x0008)  


	/// Functions
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromTexture
	// void SetThumbnailFromTexture(class UTexture2D* NewThumbnail);                                                         // [0x45c8e30] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromFile
	// void SetThumbnailFromFile(FString FilePath);                                                                          // [0x45c8cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromEditorViewport
	// void SetThumbnailFromEditorViewport();                                                                                // [0x4592da0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromCamera
	// void SetThumbnailFromCamera(class UObject* WorldContextObject, FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // [0x45c89c0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetDisplayText
	// void SetDisplayText(FText& NewDisplayText);                                                                           // [0x45c8660] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.GetVariantByName
	// class UVariant* GetVariantByName(FString VariantName);                                                                // [0x45c80d0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetVariant
	// class UVariant* GetVariant(int32_t VariantIndex);                                                                     // [0x45c8030] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetThumbnail
	// class UTexture2D* GetThumbnail();                                                                                     // [0x45c8000] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.GetParent
	// class ULevelVariantSets* GetParent();                                                                                 // [0x45c7ed0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetNumVariants
	// int32_t GetNumVariants();                                                                                             // [0x45c7df0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.VariantSet.GetDisplayText
	// FText GetDisplayText();                                                                                               // [0x45c7be0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

