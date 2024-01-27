
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
	// class UVariantSet* GetVariantSetByName(FString VariantSetName);                                                       // [0x46334f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.LevelVariantSets.GetVariantSet
	// class UVariantSet* GetVariantSet(int32_t VariantSetIndex);                                                            // [0x4633450] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.LevelVariantSets.GetNumVariantSets
	// int32_t GetNumVariantSets();                                                                                          // [0x4633040] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/VariantManagerContent.LevelVariantSetsActor
/// Size: 0x0070 (0x000230 - 0x0002A0)
class ALevelVariantSetsActor : public AActor
{ 
public:
	FSoftObjectPath                                    LevelVariantSets;                                           // 0x0230   (0x0020)  
	SDK_UNDEFINED(80,5212) /* TMap<UBlueprintGeneratedClass*, ULevelVariantSetsFunctionDirector*> */ __um(DirectorInstances); // 0x0250   (0x0050)  


	/// Functions
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
	// bool SwitchOnVariantByName(FString VariantSetName, FString VariantName);                                              // [0x4634230] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
	// bool SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex);                                           // [0x4634160] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
	// void SetLevelVariantSets(class ULevelVariantSets* InVariantSets);                                                     // [0x46339b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
	// class ULevelVariantSets* GetLevelVariantSets(bool bLoad);                                                             // [0x4632f40] Final|Native|Public|BlueprintCallable 
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
	SDK_UNDEFINED(16,5213) /* FString */               __um(PropertyName);                                         // 0x0000   (0x0010)  
	int32_t                                            PropertyIndex;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	SDK_UNDEFINED(16,5214) /* FString */               __um(ComponentName);                                        // 0x0018   (0x0010)  
};

/// Class /Script/VariantManagerContent.PropertyValue
/// Size: 0x01A8 (0x000030 - 0x0001D8)
class UPropertyValue : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x60];                                      // 0x0030   (0x0060)  MISSED
	SDK_UNDEFINED(16,5215) /* TArray<Properties> */    __um(Properties);                                           // 0x0090   (0x0010)  
	TArray<int32_t>                                    PropertyIndices;                                            // 0x00A0   (0x0010)  
	TArray<FCapturedPropSegment>                       CapturedPropSegments;                                       // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,5216) /* FString */               __um(FullDisplayString);                                    // 0x00C0   (0x0010)  
	FName                                              PropertySetterName;                                         // 0x00D0   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00DC   (0x0004)  MISSED
	SDK_UNDEFINED(80,5217) /* TMap<FString, FString> */ __um(PropertySetterParameterDefaults);                     // 0x00E0   (0x0050)  
	bool                                               bHasRecordedData;                                           // 0x0130   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0131   (0x0007)  MISSED
	class UClass*                                      LeafPropertyClass;                                          // 0x0138   (0x0008)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0140   (0x0008)  MISSED
	TArray<char>                                       ValueBytes;                                                 // 0x0148   (0x0010)  
	EPropertyValueCategory                             PropCategory;                                               // 0x0158   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7F];                                      // 0x0159   (0x007F)  MISSED


	/// Functions
	// Function /Script/VariantManagerContent.PropertyValue.HasRecordedData
	// bool HasRecordedData();                                                                                               // [0x46335f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.PropertyValue.GetPropertyTooltip
	// FText GetPropertyTooltip();                                                                                           // [0x4633180] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.PropertyValue.GetFullDisplayString
	// FString GetFullDisplayString();                                                                                       // [0x4632f00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
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
	// void SelectOption(int32_t OptionIndex);                                                                               // [0x4633650] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.SwitchActor.GetSelectedOption
	// int32_t GetSelectedOption();                                                                                          // [0x4633220] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.SwitchActor.GetOptions
	// TArray<AActor*> GetOptions();                                                                                         // [0x46330a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/VariantManagerContent.VariantDependency
/// Size: 0x0068 (0x000000 - 0x000068)
struct FVariantDependency
{ 
	SDK_UNDEFINED(48,5218) /* TWeakObjectPtr<UVariantSet*> */ __um(VariantSet);                                    // 0x0000   (0x0030)  
	SDK_UNDEFINED(48,5219) /* TWeakObjectPtr<UVariant*> */ __um(Variant);                                          // 0x0030   (0x0030)  
	bool                                               bEnabled;                                                   // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/VariantManagerContent.Variant
/// Size: 0x0058 (0x000030 - 0x000088)
class UVariant : public UObject
{ 
public:
	TArray<FVariantDependency>                         Dependencies;                                               // 0x0030   (0x0010)  
	SDK_UNDEFINED(24,5220) /* FText */                 __um(DisplayText);                                          // 0x0040   (0x0018)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0058   (0x0018)  MISSED
	TArray<class UVariantObjectBinding*>               ObjectBindings;                                             // 0x0070   (0x0010)  
	class UTexture2D*                                  Thumbnail;                                                  // 0x0080   (0x0008)  


	/// Functions
	// Function /Script/VariantManagerContent.Variant.SwitchOn
	// void SwitchOn();                                                                                                      // [0x4634140] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromTexture
	// void SetThumbnailFromTexture(class UTexture2D* NewThumbnail);                                                         // [0x4634020] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromFile
	// void SetThumbnailFromFile(FString FilePath);                                                                          // [0x4633e40] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromEditorViewport
	// void SetThumbnailFromEditorViewport();                                                                                // [0x45fe020] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromCamera
	// void SetThumbnailFromCamera(class UObject* WorldContextObject, FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // [0x4633a40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetDisplayText
	// void SetDisplayText(FText& NewDisplayText);                                                                           // [0x4633810] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.SetDependency
	// void SetDependency(int32_t index, FVariantDependency& Dependency);                                                    // [0x46336e0] Final|Native|Public|HasOutParms 
	// Function /Script/VariantManagerContent.Variant.IsActive
	// bool IsActive();                                                                                                      // [0x4633620] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetThumbnail
	// class UTexture2D* GetThumbnail();                                                                                     // [0x4633250] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetParent
	// class UVariantSet* GetParent();                                                                                       // [0x4633120] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetNumDependencies
	// int32_t GetNumDependencies();                                                                                         // [0x4633010] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetNumActors
	// int32_t GetNumActors();                                                                                               // [0x4632fe0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetDisplayText
	// FText GetDisplayText();                                                                                               // [0x4632dc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.Variant.GetDependents
	// TArray<UVariant*> GetDependents(class ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies);            // [0x4632cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.Variant.GetDependency
	// FVariantDependency GetDependency(int32_t index);                                                                      // [0x4632c10] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.GetActor
	// class AActor* GetActor(int32_t ActorIndex);                                                                           // [0x4632b70] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.Variant.DeleteDependency
	// void DeleteDependency(int32_t index);                                                                                 // [0x4632ae0] Final|Native|Public  
	// Function /Script/VariantManagerContent.Variant.AddDependency
	// int32_t AddDependency(FVariantDependency& Dependency);                                                                // [0x46329e0] Final|Native|Public|HasOutParms 
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
	SDK_UNDEFINED(16,5221) /* FString */               __um(CachedActorLabel);                                     // 0x0030   (0x0010)  
	FSoftObjectPath                                    ObjectPtr;                                                  // 0x0040   (0x0020)  
	SDK_UNDEFINED(28,5222) /* TLazyObjectPtr<UObject*> */ __um(LazyObjectPtr);                                     // 0x0060   (0x001C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	TArray<class UPropertyValue*>                      CapturedProperties;                                         // 0x0080   (0x0010)  
	TArray<FFunctionCaller>                            FunctionCallers;                                            // 0x0090   (0x0010)  
};

/// Class /Script/VariantManagerContent.VariantSet
/// Size: 0x0050 (0x000030 - 0x000080)
class UVariantSet : public UObject
{ 
public:
	SDK_UNDEFINED(24,5223) /* FText */                 __um(DisplayText);                                          // 0x0030   (0x0018)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0048   (0x0018)  MISSED
	bool                                               bExpanded;                                                  // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0061   (0x0007)  MISSED
	TArray<class UVariant*>                            Variants;                                                   // 0x0068   (0x0010)  
	class UTexture2D*                                  Thumbnail;                                                  // 0x0078   (0x0008)  


	/// Functions
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromTexture
	// void SetThumbnailFromTexture(class UTexture2D* NewThumbnail);                                                         // [0x46340b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromFile
	// void SetThumbnailFromFile(FString FilePath);                                                                          // [0x4633f30] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromEditorViewport
	// void SetThumbnailFromEditorViewport();                                                                                // [0x45fe020] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromCamera
	// void SetThumbnailFromCamera(class UObject* WorldContextObject, FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // [0x4633c40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.SetDisplayText
	// void SetDisplayText(FText& NewDisplayText);                                                                           // [0x46338e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.GetVariantByName
	// class UVariant* GetVariantByName(FString VariantName);                                                                // [0x4633350] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetVariant
	// class UVariant* GetVariant(int32_t VariantIndex);                                                                     // [0x46332b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetThumbnail
	// class UTexture2D* GetThumbnail();                                                                                     // [0x4633280] Final|Native|Public|BlueprintCallable 
	// Function /Script/VariantManagerContent.VariantSet.GetParent
	// class ULevelVariantSets* GetParent();                                                                                 // [0x4633150] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/VariantManagerContent.VariantSet.GetNumVariants
	// int32_t GetNumVariants();                                                                                             // [0x4633070] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VariantManagerContent.VariantSet.GetDisplayText
	// FText GetDisplayText();                                                                                               // [0x4632e60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

