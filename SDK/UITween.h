
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/UITween.EEasingType
/// Size: 0x29
enum class EEasingType : uint8_t
{
	EEasingType__Linear                                                              = 0,
	EEasingType__SineIn                                                              = 1,
	EEasingType__SineOut                                                             = 2,
	EEasingType__SineInOut                                                           = 3,
	EEasingType__QuadIn                                                              = 4,
	EEasingType__QuadOut                                                             = 5,
	EEasingType__QuadInOut                                                           = 6,
	EEasingType__CubicIn                                                             = 7,
	EEasingType__CubicOut                                                            = 8,
	EEasingType__CubicInOut                                                          = 9,
	EEasingType__QuartIn                                                             = 10,
	EEasingType__QuartOut                                                            = 11,
	EEasingType__QuartInOut                                                          = 12,
	EEasingType__QuintIn                                                             = 13,
	EEasingType__QuintOut                                                            = 14,
	EEasingType__QuintInOut                                                          = 15,
	EEasingType__ExpoIn                                                              = 16,
	EEasingType__ExpoOut                                                             = 17,
	EEasingType__ExpoInOut                                                           = 18,
	EEasingType__CircIn                                                              = 19,
	EEasingType__CircOut                                                             = 20,
	EEasingType__CircInOut                                                           = 21,
	EEasingType__ElasticIn                                                           = 22,
	EEasingType__ElasticOut                                                          = 23,
	EEasingType__ElasticInOut                                                        = 24,
	EEasingType__BackIn                                                              = 25,
	EEasingType__BackOut                                                             = 26,
	EEasingType__BackInOut                                                           = 27,
	EEasingType__EEasingType_MAX                                                     = 28
};

/// Class /Script/UITween.UITween
/// Size: 0x0018 (0x000038 - 0x000050)
class UUITween : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0038   (0x0008)  MISSED
	TArray<class UUITweenInstance*>                    ActiveInstances;                                            // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/UITween.UITween.Create
	// class UUITweenInstance* Create(class UWidget* targetWidget, float Duration, float Delay, EEasingType Easing);         // [0x49cb860] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UITween.UITween.Clear
	// void Clear(class UWidget* targetWidget);                                                                              // [0x49cb7e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UITween.UITweenMaterialScalarProperties
/// Size: 0x0028 (0x000030 - 0x000058)
class UUITweenMaterialScalarProperties : public UObject
{ 
public:
	class UMaterialInstanceDynamic*                    MaterialInstance;                                           // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0038   (0x0020)  MISSED
};

/// Class /Script/UITween.UITweenMaterialVectorProperties
/// Size: 0x0048 (0x000030 - 0x000078)
class UUITweenMaterialVectorProperties : public UObject
{ 
public:
	class UMaterialInstanceDynamic*                    MaterialInstance;                                           // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0038   (0x0040)  MISSED
};

/// Class /Script/UITween.UITweenInstance
/// Size: 0x00E8 (0x000030 - 0x000118)
class UUITweenInstance : public UObject
{ 
public:
	SDK_UNDEFINED(16,3283) /* FMulticastInlineDelegate */ __um(TweenCompletedDelegate);                            // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,3284) /* FMulticastInlineDelegate */ __um(TweenUpdatedDelegate);                              // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_5[0x98];                                      // 0x0050   (0x0098)  MISSED
	TArray<class UUITweenMaterialScalarProperties*>    _materialScalarProperties;                                  // 0x00E8   (0x0010)  
	TArray<class UUITweenMaterialVectorProperties*>    _materialVectorProperties;                                  // 0x00F8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0108   (0x0010)  MISSED


	/// Functions
	// Function /Script/UITween.UITweenInstance.TweenFloatProperty
	// class UUITweenInstance* TweenFloatProperty(float startValue, float targetValue);                                      // [0x49cc5e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UITween.UITweenInstance.ToTranslation
	// class UUITweenInstance* ToTranslation(FVector2D targetValue);                                                         // [0x49cc540] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UITween.UITweenInstance.ToScale
	// class UUITweenInstance* ToScale(FVector2D targetValue);                                                               // [0x49cc4a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UITween.UITweenInstance.ToReset
	// class UUITweenInstance* ToReset();                                                                                    // [0x49cc420] Final|Native|Public|BlueprintCallable 
	// Function /Script/UITween.UITweenInstance.ToOpacity
	// class UUITweenInstance* ToOpacity(float targetValue);                                                                 // [0x49cc380] Final|Native|Public|BlueprintCallable 
	// Function /Script/UITween.UITweenInstance.ToMaterialVectorParameter
	// class UUITweenInstance* ToMaterialVectorParameter(class UMaterialInstanceDynamic* targetMaterialInstance, FName targetParameterName, FLinearColor targetValue); // [0x49cc230] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UITween.UITweenInstance.ToMaterialScalarParameter
	// class UUITweenInstance* ToMaterialScalarParameter(class UMaterialInstanceDynamic* targetMaterialInstance, FName targetParameterName, float targetValue); // [0x49cc0f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UITween.UITweenInstance.ToColor
	// class UUITweenInstance* ToColor(FLinearColor targetValue);                                                            // [0x49cc060] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UITween.UITweenInstance.GetTargetWidget
	// class UWidget* GetTargetWidget();                                                                                     // [0x49cc030] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UITween.UITweenInstance.GetProgress
	// float GetProgress();                                                                                                  // [0x49cc010] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UITween.UITweenInstance.GetFloatValue
	// float GetFloatValue();                                                                                                // [0x49cbfd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UITween.UITweenInstance.GetEasing
	// EEasingType GetEasing();                                                                                              // [0x49cbfb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UITween.UITweenInstance.GetDuration
	// float GetDuration();                                                                                                  // [0x49cbf90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UITween.UITweenInstance.GetDelay
	// float GetDelay();                                                                                                     // [0x49cbf70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UITween.UITweenInstance.FromTranslation
	// class UUITweenInstance* FromTranslation(FVector2D startValue);                                                        // [0x49cbec0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UITween.UITweenInstance.FromScale
	// class UUITweenInstance* FromScale(FVector2D startValue);                                                              // [0x49cbe10] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UITween.UITweenInstance.FromOpacity
	// class UUITweenInstance* FromOpacity(float startValue);                                                                // [0x49cbd70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UITween.UITweenInstance.FromMaterialVectorParameter
	// class UUITweenInstance* FromMaterialVectorParameter(class UMaterialInstanceDynamic* targetMaterialInstance, FName targetParameterName, FLinearColor targetValue); // [0x49cbc20] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UITween.UITweenInstance.FromMaterialScalarParameter
	// class UUITweenInstance* FromMaterialScalarParameter(class UMaterialInstanceDynamic* targetMaterialInstance, FName targetParameterName, float targetValue); // [0x49cbae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UITween.UITweenInstance.FromColor
	// class UUITweenInstance* FromColor(FLinearColor startValue);                                                           // [0x49cba40] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UITween.UITweenInstance.Easing
	// class UUITweenInstance* Easing(EEasingType InType);                                                                   // [0x49cb9b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UITween.UITweenInstance.Begin
	// void Begin();                                                                                                         // [0x49cb7c0] Final|Native|Public|BlueprintCallable 
};

