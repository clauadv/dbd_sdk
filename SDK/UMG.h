
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: InputCore
/// dependency: MovieScene
/// dependency: MovieSceneTracks
/// dependency: PropertyPath
/// dependency: Slate
/// dependency: SlateCore

/// Enum /Script/UMG.ESlateAccessibleBehavior
/// Size: 0x06
enum class ESlateAccessibleBehavior : uint8_t
{
	ESlateAccessibleBehavior__NotAccessible                                          = 0,
	ESlateAccessibleBehavior__Auto                                                   = 1,
	ESlateAccessibleBehavior__Summary                                                = 2,
	ESlateAccessibleBehavior__Custom                                                 = 3,
	ESlateAccessibleBehavior__ToolTip                                                = 4,
	ESlateAccessibleBehavior__ESlateAccessibleBehavior_MAX                           = 5
};

/// Enum /Script/UMG.ESlateVisibility
/// Size: 0x06
enum class ESlateVisibility : uint8_t
{
	ESlateVisibility__Visible                                                        = 0,
	ESlateVisibility__Collapsed                                                      = 1,
	ESlateVisibility__Hidden                                                         = 2,
	ESlateVisibility__HitTestInvisible                                               = 3,
	ESlateVisibility__SelfHitTestInvisible                                           = 4,
	ESlateVisibility__ESlateVisibility_MAX                                           = 5
};

/// Enum /Script/UMG.EVirtualKeyboardType
/// Size: 0x07
enum class EVirtualKeyboardType : uint8_t
{
	EVirtualKeyboardType__Default                                                    = 0,
	EVirtualKeyboardType__Number                                                     = 1,
	EVirtualKeyboardType__Web                                                        = 2,
	EVirtualKeyboardType__Email                                                      = 3,
	EVirtualKeyboardType__Password                                                   = 4,
	EVirtualKeyboardType__AlphaNumeric                                               = 5,
	EVirtualKeyboardType__EVirtualKeyboardType_MAX                                   = 6
};

/// Enum /Script/UMG.EWidgetAnimationEvent
/// Size: 0x03
enum class EWidgetAnimationEvent : uint8_t
{
	EWidgetAnimationEvent__Started                                                   = 0,
	EWidgetAnimationEvent__Finished                                                  = 1,
	EWidgetAnimationEvent__EWidgetAnimationEvent_MAX                                 = 2
};

/// Enum /Script/UMG.EUMGSequencePlayMode
/// Size: 0x04
enum class EUMGSequencePlayMode : uint8_t
{
	EUMGSequencePlayMode__Forward                                                    = 0,
	EUMGSequencePlayMode__Reverse                                                    = 1,
	EUMGSequencePlayMode__PingPong                                                   = 2,
	EUMGSequencePlayMode__EUMGSequencePlayMode_MAX                                   = 3
};

/// Enum /Script/UMG.EWidgetTickFrequency
/// Size: 0x03
enum class EWidgetTickFrequency : uint8_t
{
	EWidgetTickFrequency__Never                                                      = 0,
	EWidgetTickFrequency__Auto                                                       = 1,
	EWidgetTickFrequency__EWidgetTickFrequency_MAX                                   = 2
};

/// Enum /Script/UMG.EDragPivot
/// Size: 0x11
enum class EDragPivot : uint8_t
{
	EDragPivot__MouseDown                                                            = 0,
	EDragPivot__TopLeft                                                              = 1,
	EDragPivot__TopCenter                                                            = 2,
	EDragPivot__TopRight                                                             = 3,
	EDragPivot__CenterLeft                                                           = 4,
	EDragPivot__CenterCenter                                                         = 5,
	EDragPivot__CenterRight                                                          = 6,
	EDragPivot__BottomLeft                                                           = 7,
	EDragPivot__BottomCenter                                                         = 8,
	EDragPivot__BottomRight                                                          = 9,
	EDragPivot__EDragPivot_MAX                                                       = 10
};

/// Enum /Script/UMG.EDynamicBoxType
/// Size: 0x07
enum class EDynamicBoxType : uint8_t
{
	EDynamicBoxType__Horizontal                                                      = 0,
	EDynamicBoxType__Vertical                                                        = 1,
	EDynamicBoxType__Wrap                                                            = 2,
	EDynamicBoxType__VerticalWrap                                                    = 3,
	EDynamicBoxType__Radial                                                          = 4,
	EDynamicBoxType__Overlay                                                         = 5,
	EDynamicBoxType__EDynamicBoxType_MAX                                             = 6
};

/// Enum /Script/UMG.ESlateSizeRule
/// Size: 0x03
enum class ESlateSizeRule : uint8_t
{
	ESlateSizeRule__Automatic                                                        = 0,
	ESlateSizeRule__Fill                                                             = 1,
	ESlateSizeRule__ESlateSizeRule_MAX                                               = 2
};

/// Enum /Script/UMG.EWidgetDesignFlags
/// Size: 0x05
enum class EWidgetDesignFlags : uint8_t
{
	EWidgetDesignFlags__None                                                         = 0,
	EWidgetDesignFlags__Designing                                                    = 1,
	EWidgetDesignFlags__ShowOutline                                                  = 2,
	EWidgetDesignFlags__ExecutePreConstruct                                          = 4,
	EWidgetDesignFlags__EWidgetDesignFlags_MAX                                       = 5
};

/// Enum /Script/UMG.EBindingKind
/// Size: 0x03
enum class EBindingKind : uint8_t
{
	EBindingKind__Function                                                           = 0,
	EBindingKind__Property                                                           = 1,
	EBindingKind__EBindingKind_MAX                                                   = 2
};

/// Enum /Script/UMG.ETickMode
/// Size: 0x04
enum class ETickMode : uint8_t
{
	ETickMode__Disabled                                                              = 0,
	ETickMode__Enabled                                                               = 1,
	ETickMode__Automatic                                                             = 2,
	ETickMode__ETickMode_MAX                                                         = 3
};

/// Enum /Script/UMG.EWindowVisibility
/// Size: 0x03
enum class EWindowVisibility : uint8_t
{
	EWindowVisibility__Visible                                                       = 0,
	EWindowVisibility__SelfHitTestInvisible                                          = 1,
	EWindowVisibility__EWindowVisibility_MAX                                         = 2
};

/// Enum /Script/UMG.EWidgetGeometryMode
/// Size: 0x03
enum class EWidgetGeometryMode : uint8_t
{
	EWidgetGeometryMode__Plane                                                       = 0,
	EWidgetGeometryMode__Cylinder                                                    = 1,
	EWidgetGeometryMode__EWidgetGeometryMode_MAX                                     = 2
};

/// Enum /Script/UMG.EWidgetBlendMode
/// Size: 0x04
enum class EWidgetBlendMode : uint8_t
{
	EWidgetBlendMode__Opaque                                                         = 0,
	EWidgetBlendMode__Masked                                                         = 1,
	EWidgetBlendMode__Transparent                                                    = 2,
	EWidgetBlendMode__EWidgetBlendMode_MAX                                           = 3
};

/// Enum /Script/UMG.EWidgetTimingPolicy
/// Size: 0x03
enum class EWidgetTimingPolicy : uint8_t
{
	EWidgetTimingPolicy__RealTime                                                    = 0,
	EWidgetTimingPolicy__GameTime                                                    = 1,
	EWidgetTimingPolicy__EWidgetTimingPolicy_MAX                                     = 2
};

/// Enum /Script/UMG.EWidgetSpace
/// Size: 0x03
enum class EWidgetSpace : uint8_t
{
	EWidgetSpace__World                                                              = 0,
	EWidgetSpace__Screen                                                             = 1,
	EWidgetSpace__EWidgetSpace_MAX                                                   = 2
};

/// Enum /Script/UMG.EWidgetInteractionSource
/// Size: 0x05
enum class EWidgetInteractionSource : uint8_t
{
	EWidgetInteractionSource__World                                                  = 0,
	EWidgetInteractionSource__Mouse                                                  = 1,
	EWidgetInteractionSource__CenterScreen                                           = 2,
	EWidgetInteractionSource__Custom                                                 = 3,
	EWidgetInteractionSource__EWidgetInteractionSource_MAX                           = 4
};

/// Class /Script/UMG.Visual
/// Size: 0x0000 (0x000030 - 0x000030)
class UVisual : public UObject
{ 
public:
};

/// Struct /Script/UMG.WidgetTransform
/// Size: 0x001C (0x000000 - 0x00001C)
struct FWidgetTransform
{ 
	FVector2D                                          Translation;                                                // 0x0000   (0x0008)  
	FVector2D                                          Scale;                                                      // 0x0008   (0x0008)  
	FVector2D                                          Shear;                                                      // 0x0010   (0x0008)  
	float                                              Angle;                                                      // 0x0018   (0x0004)  
};

/// Class /Script/UMG.Widget
/// Size: 0x0100 (0x000030 - 0x000130)
class UWidget : public UVisual
{ 
public:
	class UPanelSlot*                                  Slot;                                                       // 0x0030   (0x0008)  
	SDK_UNDEFINED(20,983) /* FDelegateProperty */      __um(bIsEnabledDelegate);                                   // 0x0038   (0x0014)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	SDK_UNDEFINED(24,984) /* FText */                  __um(ToolTipText);                                          // 0x0050   (0x0018)  
	SDK_UNDEFINED(20,985) /* FDelegateProperty */      __um(ToolTipTextDelegate);                                  // 0x0068   (0x0014)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	class UWidget*                                     TooltipWidget;                                              // 0x0080   (0x0008)  
	SDK_UNDEFINED(20,986) /* FDelegateProperty */      __um(ToolTipWidgetDelegate);                                // 0x0088   (0x0014)  
	SDK_UNDEFINED(20,987) /* FDelegateProperty */      __um(VisibilityDelegate);                                   // 0x009C   (0x0014)  
	FWidgetTransform                                   RenderTransform;                                            // 0x00B0   (0x001C)  
	FVector2D                                          RenderTransformPivot;                                       // 0x00CC   (0x0008)  
	bool                                               bIsVariable : 1;                                            // 0x00D4:0 (0x0001)  
	bool                                               bCreatedByConstructionScript : 1;                           // 0x00D4:1 (0x0001)  
	bool                                               bIsEnabled : 1;                                             // 0x00D4:2 (0x0001)  
	bool                                               bOverride_Cursor : 1;                                       // 0x00D4:3 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x00D5   (0x0003)  MISSED
	class USlateAccessibleWidgetData*                  AccessibleWidgetData;                                       // 0x00D8   (0x0008)  
	bool                                               bIsVolatile : 1;                                            // 0x00E0:0 (0x0001)  
	SDK_UNDEFINED(1,988) /* TEnumAsByte<EMouseCursor> */ __um(Cursor);                                             // 0x00E1   (0x0001)  
	EWidgetClipping                                    Clipping;                                                   // 0x00E2   (0x0001)  
	ESlateVisibility                                   Visibility;                                                 // 0x00E3   (0x0001)  
	float                                              RenderOpacity;                                              // 0x00E4   (0x0004)  
	EPixelSnappingMethod                               PixelSnappingMethod;                                        // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x00E9   (0x0007)  MISSED
	class UWidgetNavigation*                           Navigation;                                                 // 0x00F0   (0x0008)  
	EFlowDirectionPreference                           FlowDirectionPreference;                                    // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData04_5[0x27];                                      // 0x00F9   (0x0027)  MISSED
	TArray<class UPropertyBinding*>                    NativeBindings;                                             // 0x0120   (0x0010)  


	/// Functions
	// Function /Script/UMG.Widget.SetVisibility
	// void SetVisibility(ESlateVisibility InVisibility);                                                                    // [0x76ae930] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetUserFocus
	// void SetUserFocus(class APlayerController* PlayerController);                                                         // [0x76ae700] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetToolTipText
	// void SetToolTipText(FText& InToolTipText);                                                                            // [0x76ae630] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.Widget.SetToolTip
	// void SetToolTip(class UWidget* Widget);                                                                               // [0x76ae5a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderTranslation
	// void SetRenderTranslation(FVector2D Translation);                                                                     // [0x76ae490] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderTransformPivot
	// void SetRenderTransformPivot(FVector2D Pivot);                                                                        // [0x76ae410] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderTransformAngle
	// void SetRenderTransformAngle(float Angle);                                                                            // [0x76ae390] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderTransform
	// void SetRenderTransform(FWidgetTransform InTransform);                                                                // [0x76ae2b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderShear
	// void SetRenderShear(FVector2D Shear);                                                                                 // [0x76ae230] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderScale
	// void SetRenderScale(FVector2D Scale);                                                                                 // [0x76ae1b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderOpacity
	// void SetRenderOpacity(float InOpacity);                                                                               // [0x76ae130] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetPixelSnappingMethod
	// void SetPixelSnappingMethod(EPixelSnappingMethod InPixelSnappingMethod);                                              // [0x76ae0b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRuleExplicit
	// void SetNavigationRuleExplicit(EUINavigation Direction, class UWidget* InWidget);                                     // [0x76adf50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRuleCustomBoundary
	// void SetNavigationRuleCustomBoundary(EUINavigation Direction, FDelegateProperty InCustomDelegate);                    // [0x76ade60] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRuleCustom
	// void SetNavigationRuleCustom(EUINavigation Direction, FDelegateProperty InCustomDelegate);                            // [0x76add70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRuleBase
	// void SetNavigationRuleBase(EUINavigation Direction, EUINavigationRule Rule);                                          // [0x76adca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRule
	// void SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, FName WidgetToFocus);                         // [0x76adb70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetKeyboardFocus
	// void SetKeyboardFocus();                                                                                              // [0x76adb50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetIsEnabled
	// void SetIsEnabled(bool bInIsEnabled);                                                                                 // [0x76adac0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetFocus
	// void SetFocus();                                                                                                      // [0x76ada20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetCursor
	// void SetCursor(TEnumAsByte<EMouseCursor> InCursor);                                                                   // [0x76ad9a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetClipping
	// void SetClipping(EWidgetClipping InClipping);                                                                         // [0x76ad920] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetAllNavigationRules
	// void SetAllNavigationRules(EUINavigationRule Rule, FName WidgetToFocus);                                              // [0x76ad830] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.ResetCursor
	// void ResetCursor();                                                                                                   // [0x76ad810] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.RemoveFromParent
	// void RemoveFromParent();                                                                                              // [0x57b5f90] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.OnReply__DelegateSignature
	// FEventReply OnReply__DelegateSignature();                                                                             // [0x61d2f50] Public|Delegate      
	// Function /Script/UMG.Widget.OnPointerEvent__DelegateSignature
	// FEventReply OnPointerEvent__DelegateSignature(FGeometry MyGeometry, FPointerEvent& MouseEvent);                       // [0x61d2f50] Public|Delegate|HasOutParms 
	// Function /Script/UMG.Widget.IsVisible
	// bool IsVisible();                                                                                                     // [0x76ad7e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.IsHovered
	// bool IsHovered();                                                                                                     // [0x49c63d0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.InvalidateLayoutAndVolatility
	// void InvalidateLayoutAndVolatility();                                                                                 // [0x76ad7c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.HasUserFocusedDescendants
	// bool HasUserFocusedDescendants(class APlayerController* PlayerController);                                            // [0x76ad720] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasUserFocus
	// bool HasUserFocus(class APlayerController* PlayerController);                                                         // [0x76ad680] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasMouseCaptureByUser
	// bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex);                                                  // [0x76ad5b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasMouseCapture
	// bool HasMouseCapture();                                                                                               // [0x76ad580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasKeyboardFocus
	// bool HasKeyboardFocus();                                                                                              // [0x76ad550] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasFocusedDescendants
	// bool HasFocusedDescendants();                                                                                         // [0x76ad520] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasAnyUserFocus
	// bool HasAnyUserFocus();                                                                                               // [0x76ad4f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetWidget__DelegateSignature
	// class UWidget* GetWidget__DelegateSignature();                                                                        // [0x61d2f50] Public|Delegate      
	// Function /Script/UMG.Widget.GetVisibility
	// ESlateVisibility GetVisibility();                                                                                     // [0x76ad4c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetTickSpaceGeometry
	// FGeometry GetTickSpaceGeometry();                                                                                     // [0x76ad3a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetText__DelegateSignature
	// FText GetText__DelegateSignature();                                                                                   // [0x61d2f50] Public|Delegate      
	// Function /Script/UMG.Widget.GetSlateVisibility__DelegateSignature
	// ESlateVisibility GetSlateVisibility__DelegateSignature();                                                             // [0x61d2f50] Public|Delegate      
	// Function /Script/UMG.Widget.GetSlateColor__DelegateSignature
	// FSlateColor GetSlateColor__DelegateSignature();                                                                       // [0x61d2f50] Public|Delegate      
	// Function /Script/UMG.Widget.GetSlateBrush__DelegateSignature
	// FSlateBrush GetSlateBrush__DelegateSignature();                                                                       // [0x61d2f50] Public|Delegate      
	// Function /Script/UMG.Widget.GetRenderTransformAngle
	// float GetRenderTransformAngle();                                                                                      // [0x76ad340] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetRenderOpacity
	// float GetRenderOpacity();                                                                                             // [0x76ad310] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetPixelSnappingMethod
	// EPixelSnappingMethod GetPixelSnappingMethod();                                                                        // [0x76ad2e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetParent
	// class UPanelWidget* GetParent();                                                                                      // [0x76ad2b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetPaintSpaceGeometry
	// FGeometry GetPaintSpaceGeometry();                                                                                    // [0x76ad270] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetOwningPlayer
	// class APlayerController* GetOwningPlayer();                                                                           // [0x76ad240] BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetOwningLocalPlayer
	// class ULocalPlayer* GetOwningLocalPlayer();                                                                           // [0x76ad210] BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetMouseCursor__DelegateSignature
	// TEnumAsByte<EMouseCursor> GetMouseCursor__DelegateSignature();                                                        // [0x61d2f50] Public|Delegate      
	// Function /Script/UMG.Widget.GetLinearColor__DelegateSignature
	// FLinearColor GetLinearColor__DelegateSignature();                                                                     // [0x61d2f50] Public|Delegate|HasDefaults 
	// Function /Script/UMG.Widget.GetIsEnabled
	// bool GetIsEnabled();                                                                                                  // [0x76ad1e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetInt32__DelegateSignature
	// int32_t GetInt32__DelegateSignature();                                                                                // [0x61d2f50] Public|Delegate      
	// Function /Script/UMG.Widget.GetGameInstance
	// class UGameInstance* GetGameInstance();                                                                               // [0x76ad1b0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetFloat__DelegateSignature
	// float GetFloat__DelegateSignature();                                                                                  // [0x61d2f50] Public|Delegate      
	// Function /Script/UMG.Widget.GetDesiredSize
	// FVector2D GetDesiredSize();                                                                                           // [0x76ad140] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetClipping
	// EWidgetClipping GetClipping();                                                                                        // [0x76ad110] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetCheckBoxState__DelegateSignature
	// ECheckBoxState GetCheckBoxState__DelegateSignature();                                                                 // [0x61d2f50] Public|Delegate      
	// Function /Script/UMG.Widget.GetCachedGeometry
	// FGeometry GetCachedGeometry();                                                                                        // [0x76ad0d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetBool__DelegateSignature
	// bool GetBool__DelegateSignature();                                                                                    // [0x61d2f50] Public|Delegate      
	// Function /Script/UMG.Widget.GetAccessibleText
	// FText GetAccessibleText();                                                                                            // [0x76ad030] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetAccessibleSummaryText
	// FText GetAccessibleSummaryText();                                                                                     // [0x76acf90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GenerateWidgetForString__DelegateSignature
	// class UWidget* GenerateWidgetForString__DelegateSignature(FString Item);                                              // [0x61d2f50] Public|Delegate      
	// Function /Script/UMG.Widget.GenerateWidgetForObject__DelegateSignature
	// class UWidget* GenerateWidgetForObject__DelegateSignature(class UObject* Item);                                       // [0x61d2f50] Public|Delegate      
	// Function /Script/UMG.Widget.ForceVolatile
	// void ForceVolatile(bool bForce);                                                                                      // [0x76acf00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.ForceLayoutPrepass
	// void ForceLayoutPrepass();                                                                                            // [0x76acee0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/UMG.NamedSlotBinding
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNamedSlotBinding
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UWidget*                                     Content;                                                    // 0x0010   (0x0008)  
};

/// Struct /Script/UMG.AnimationEventBinding
/// Size: 0x0030 (0x000000 - 0x000030)
struct FAnimationEventBinding
{ 
	class UWidgetAnimation*                            Animation;                                                  // 0x0000   (0x0008)  
	SDK_UNDEFINED(20,989) /* FDelegateProperty */      __um(Delegate);                                             // 0x0008   (0x0014)  
	EWidgetAnimationEvent                              AnimationEvent;                                             // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	FName                                              UserTag;                                                    // 0x0020   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/UMG.UserWidget
/// Size: 0x0168 (0x000130 - 0x000298)
class UUserWidget : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0130   (0x0008)  MISSED
	FLinearColor                                       ColorAndOpacity;                                            // 0x0138   (0x0010)  
	SDK_UNDEFINED(20,990) /* FDelegateProperty */      __um(ColorAndOpacityDelegate);                              // 0x0148   (0x0014)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x015C   (0x0004)  MISSED
	FSlateColor                                        ForegroundColor;                                            // 0x0160   (0x0028)  
	SDK_UNDEFINED(20,991) /* FDelegateProperty */      __um(ForegroundColorDelegate);                              // 0x0188   (0x0014)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x019C   (0x0004)  MISSED
	SDK_UNDEFINED(16,992) /* FMulticastInlineDelegate */ __um(OnVisibilityChanged);                                // 0x01A0   (0x0010)  
	unsigned char                                      UnknownData03_5[0x18];                                      // 0x01B0   (0x0018)  MISSED
	FMargin                                            Padding;                                                    // 0x01C8   (0x0010)  
	TArray<class UUMGSequencePlayer*>                  ActiveSequencePlayers;                                      // 0x01D8   (0x0010)  
	class UUMGSequenceTickManager*                     AnimationTickManager;                                       // 0x01E8   (0x0008)  
	TArray<class UUMGSequencePlayer*>                  StoppedSequencePlayers;                                     // 0x01F0   (0x0010)  
	TArray<FNamedSlotBinding>                          NamedSlotBindings;                                          // 0x0200   (0x0010)  
	class UWidgetTree*                                 WidgetTree;                                                 // 0x0210   (0x0008)  
	int32_t                                            Priority;                                                   // 0x0218   (0x0004)  
	bool                                               bSupportsKeyboardFocus : 1;                                 // 0x021C:0 (0x0001)  
	bool                                               bIsFocusable : 1;                                           // 0x021C:1 (0x0001)  
	bool                                               bStopAction : 1;                                            // 0x021C:2 (0x0001)  
	bool                                               bHasScriptImplementedTick : 1;                              // 0x021C:3 (0x0001)  
	bool                                               bHasScriptImplementedPaint : 1;                             // 0x021C:4 (0x0001)  
	unsigned char                                      UnknownData04_4[0xB];                                       // 0x021D   (0x000B)  MISSED
	EWidgetTickFrequency                               TickFrequency;                                              // 0x0228   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x0229   (0x0007)  MISSED
	class UInputComponent*                             InputComponent;                                             // 0x0230   (0x0008)  
	TArray<FAnimationEventBinding>                     AnimationCallbacks;                                         // 0x0238   (0x0010)  
	unsigned char                                      UnknownData06_6[0x50];                                      // 0x0248   (0x0050)  MISSED


	/// Functions
	// Function /Script/UMG.UserWidget.UnregisterInputComponent
	// void UnregisterInputComponent();                                                                                      // [0x76aaf60] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.UnbindFromAnimationStarted
	// void UnbindFromAnimationStarted(class UWidgetAnimation* Animation, FDelegateProperty Delegate);                       // [0x76aae70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.UnbindFromAnimationFinished
	// void UnbindFromAnimationFinished(class UWidgetAnimation* Animation, FDelegateProperty Delegate);                      // [0x76aad80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.UnbindAllFromAnimationStarted
	// void UnbindAllFromAnimationStarted(class UWidgetAnimation* Animation);                                                // [0x76aacf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.UnbindAllFromAnimationFinished
	// void UnbindAllFromAnimationFinished(class UWidgetAnimation* Animation);                                               // [0x76aac60] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                   // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.StopListeningForInputAction
	// void StopListeningForInputAction(FName ActionName, TEnumAsByte<EInputEvent> EventType);                               // [0x76aab70] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.StopListeningForAllInputActions
	// void StopListeningForAllInputActions();                                                                               // [0x76aab50] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.StopAnimationsAndLatentActions
	// void StopAnimationsAndLatentActions();                                                                                // [0x76aab30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.StopAnimation
	// void StopAnimation(class UWidgetAnimation* InAnimation);                                                              // [0x76aaaa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.StopAllAnimations
	// void StopAllAnimations();                                                                                             // [0x76aaa80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetPositionInViewport
	// void SetPositionInViewport(FVector2D position, bool bRemoveDPIScale);                                                 // [0x76aa770] Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetPlaybackSpeed
	// void SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed);                                      // [0x76aa6a0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x76aa610] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetOwningPlayer
	// void SetOwningPlayer(class APlayerController* LocalPlayerController);                                                 // [0x76aa580] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetNumLoopsToPlay
	// void SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay);                                  // [0x76aa4b0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetInputActionPriority
	// void SetInputActionPriority(int32_t NewPriority);                                                                     // [0x76aa250] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetInputActionBlocking
	// void SetInputActionBlocking(bool bShouldBlock);                                                                       // [0x76aa1c0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetForegroundColor
	// void SetForegroundColor(FSlateColor InForegroundColor);                                                               // [0x76aa050] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetDesiredSizeInViewport
	// void SetDesiredSizeInViewport(FVector2D Size);                                                                        // [0x76a9fd0] Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetColorAndOpacity
	// void SetColorAndOpacity(FLinearColor InColorAndOpacity);                                                              // [0x76a9eb0] Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetAnimationCurrentTime
	// void SetAnimationCurrentTime(class UWidgetAnimation* InAnimation, float InTime);                                      // [0x76a9de0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetAnchorsInViewport
	// void SetAnchorsInViewport(FAnchors Anchors);                                                                          // [0x76a9d50] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetAlignmentInViewport
	// void SetAlignmentInViewport(FVector2D Alignment);                                                                     // [0x76a9cd0] Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.UserWidget.ReverseAnimation
	// void ReverseAnimation(class UWidgetAnimation* InAnimation);                                                           // [0x76a9c40] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.RemoveFromViewport
	// void RemoveFromViewport();                                                                                            // [0x76a9c20] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.RegisterInputComponent
	// void RegisterInputComponent();                                                                                        // [0x76a9c00] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.PlaySound
	// void PlaySound(class USoundBase* SoundToPlay);                                                                        // [0x76a9b70] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PlayAnimationTimeRange
	// class UUMGSequencePlayer* PlayAnimationTimeRange(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState); // [0x76a9950] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PlayAnimationReverse
	// class UUMGSequencePlayer* PlayAnimationReverse(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // [0x76a9830] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PlayAnimationForward
	// class UUMGSequencePlayer* PlayAnimationForward(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // [0x76a9710] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PlayAnimation
	// class UUMGSequencePlayer* PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed, bool bRestoreState); // [0x76a9540] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PauseAnimation
	// float PauseAnimation(class UWidgetAnimation* InAnimation);                                                            // [0x76a94a0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.OnTouchStarted
	// FEventReply OnTouchStarted(FGeometry MyGeometry, FPointerEvent& InTouchEvent);                                        // [0x61d2f50] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnTouchMoved
	// FEventReply OnTouchMoved(FGeometry MyGeometry, FPointerEvent& InTouchEvent);                                          // [0x61d2f50] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnTouchGesture
	// FEventReply OnTouchGesture(FGeometry MyGeometry, FPointerEvent& GestureEvent);                                        // [0x61d2f50] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnTouchForceChanged
	// FEventReply OnTouchForceChanged(FGeometry MyGeometry, FPointerEvent& InTouchEvent);                                   // [0x61d2f50] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnTouchEnded
	// FEventReply OnTouchEnded(FGeometry MyGeometry, FPointerEvent& InTouchEvent);                                          // [0x61d2f50] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnRemovedFromFocusPath
	// void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);                                                                // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnPreviewMouseButtonDown
	// FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                // [0x61d2f50] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnPreviewKeyDown
	// FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);                                             // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnPaint
	// void OnPaint(FPaintContext& Context);                                                                                 // [0x61d2f50] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/UMG.UserWidget.OnMouseWheel
	// FEventReply OnMouseWheel(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                            // [0x61d2f50] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseMove
	// FEventReply OnMouseMove(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                             // [0x61d2f50] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseLeave
	// void OnMouseLeave(FPointerEvent& MouseEvent);                                                                         // [0x61d2f50] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseEnter
	// void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                                   // [0x61d2f50] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseCaptureLost
	// void OnMouseCaptureLost();                                                                                            // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseButtonUp
	// FEventReply OnMouseButtonUp(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                         // [0x61d2f50] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseButtonDown
	// FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                       // [0x61d2f50] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseButtonDoubleClick
	// FEventReply OnMouseButtonDoubleClick(FGeometry InMyGeometry, FPointerEvent& InMouseEvent);                            // [0x61d2f50] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMotionDetected
	// FEventReply OnMotionDetected(FGeometry MyGeometry, FMotionEvent InMotionEvent);                                       // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnKeyUp
	// FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);                                                      // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnKeyDown
	// FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);                                                    // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnKeyChar
	// FEventReply OnKeyChar(FGeometry MyGeometry, FCharacterEvent InCharacterEvent);                                        // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnInitialized
	// void OnInitialized();                                                                                                 // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnFocusReceived
	// FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);                                          // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnFocusLost
	// void OnFocusLost(FFocusEvent InFocusEvent);                                                                           // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDrop
	// bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);                   // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragOver
	// bool OnDragOver(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);               // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragLeave
	// void OnDragLeave(FPointerEvent PointerEvent, class UDragDropOperation* Operation);                                    // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragEnter
	// void OnDragEnter(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);              // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragDetected
	// void OnDragDetected(FGeometry MyGeometry, FPointerEvent& PointerEvent, class UDragDropOperation*& Operation);         // [0x61d2f50] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragCancelled
	// void OnDragCancelled(FPointerEvent& PointerEvent, class UDragDropOperation* Operation);                               // [0x61d2f50] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnAnimationStarted
	// void OnAnimationStarted(class UWidgetAnimation* Animation);                                                           // [0x76a9410] BlueprintCosmetic|Native|Event|Protected|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnAnimationFinished
	// void OnAnimationFinished(class UWidgetAnimation* Animation);                                                          // [0x76a9380] BlueprintCosmetic|Native|Event|Protected|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnAnalogValueChanged
	// FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);                         // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnAddedToFocusPath
	// void OnAddedToFocusPath(FFocusEvent InFocusEvent);                                                                    // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.ListenForInputAction
	// void ListenForInputAction(FName ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, FDelegateProperty Callback); // [0x76a91f0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.IsPlayingAnimation
	// bool IsPlayingAnimation();                                                                                            // [0x76a91c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.IsListeningForInputAction
	// bool IsListeningForInputAction(FName ActionName);                                                                     // [0x76a9110] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.IsInViewport
	// bool IsInViewport();                                                                                                  // [0x76a8ee0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.IsInteractable
	// bool IsInteractable();                                                                                                // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent|Const 
	// Function /Script/UMG.UserWidget.IsAnyAnimationPlaying
	// bool IsAnyAnimationPlaying();                                                                                         // [0x76a90e0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.IsAnimationPlayingForward
	// bool IsAnimationPlayingForward(class UWidgetAnimation* InAnimation);                                                  // [0x76a9040] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.IsAnimationPlaying
	// bool IsAnimationPlaying(class UWidgetAnimation* InAnimation);                                                         // [0x76a8fa0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetOwningPlayerPawn
	// class APawn* GetOwningPlayerPawn();                                                                                   // [0x76a8f40] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetOwningPlayerCameraManager
	// class APlayerCameraManager* GetOwningPlayerCameraManager();                                                           // [0x76a8f10] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetIsVisible
	// bool GetIsVisible();                                                                                                  // [0x76a8ee0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetAnimationCurrentTime
	// float GetAnimationCurrentTime(class UWidgetAnimation* InAnimation);                                                   // [0x76a8e40] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetAnchorsInViewport
	// FAnchors GetAnchorsInViewport();                                                                                      // [0x76a8e00] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetAlignmentInViewport
	// FVector2D GetAlignmentInViewport();                                                                                   // [0x76a8dc0] Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.FlushAnimations
	// void FlushAnimations();                                                                                               // [0x76a8da0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.Destruct
	// void Destruct();                                                                                                      // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.Construct
	// void Construct();                                                                                                     // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.CancelLatentActions
	// void CancelLatentActions();                                                                                           // [0x76a8d40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.BindToAnimationStarted
	// void BindToAnimationStarted(class UWidgetAnimation* Animation, FDelegateProperty Delegate);                           // [0x76a8c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.BindToAnimationFinished
	// void BindToAnimationFinished(class UWidgetAnimation* Animation, FDelegateProperty Delegate);                          // [0x76a8b60] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.BindToAnimationEvent
	// void BindToAnimationEvent(class UWidgetAnimation* Animation, FDelegateProperty Delegate, EWidgetAnimationEvent AnimationEvent, FName UserTag); // [0x76a89e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.AddToViewport
	// void AddToViewport(int32_t ZOrder);                                                                                   // [0x76a8950] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.AddToPlayerScreen
	// bool AddToPlayerScreen(int32_t ZOrder);                                                                               // [0x76a88b0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.PanelWidget
/// Size: 0x0018 (0x000130 - 0x000148)
class UPanelWidget : public UWidget
{ 
public:
	TArray<class UPanelSlot*>                          Slots;                                                      // 0x0130   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0140   (0x0008)  MISSED


	/// Functions
	// Function /Script/UMG.PanelWidget.RemoveChildAt
	// bool RemoveChildAt(int32_t index);                                                                                    // [0x7699d30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.PanelWidget.RemoveChild
	// bool RemoveChild(class UWidget* Content);                                                                             // [0x7699c90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.PanelWidget.HasChild
	// bool HasChild(class UWidget* Content);                                                                                // [0x7699b00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.HasAnyChildren
	// bool HasAnyChildren();                                                                                                // [0x7699ad0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.GetChildrenCount
	// int32_t GetChildrenCount();                                                                                           // [0x5890f70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.GetChildIndex
	// int32_t GetChildIndex(class UWidget* Content);                                                                        // [0x7699710] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.GetChildAt
	// class UWidget* GetChildAt(int32_t index);                                                                             // [0x7699670] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.GetAllChildren
	// TArray<UWidget*> GetAllChildren();                                                                                    // [0x76995f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.ClearChildren
	// void ClearChildren();                                                                                                 // [0x7699520] Native|Public|BlueprintCallable 
	// Function /Script/UMG.PanelWidget.AddChild
	// class UPanelSlot* AddChild(class UWidget* Content);                                                                   // [0x76993e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ContentWidget
/// Size: 0x0000 (0x000148 - 0x000148)
class UContentWidget : public UPanelWidget
{ 
public:


	/// Functions
	// Function /Script/UMG.ContentWidget.SetContent
	// class UPanelSlot* SetContent(class UWidget* Content);                                                                 // [0x7691530] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ContentWidget.GetContentSlot
	// class UPanelSlot* GetContentSlot();                                                                                   // [0x7690da0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ContentWidget.GetContent
	// class UWidget* GetContent();                                                                                          // [0x7690d70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.PanelSlot
/// Size: 0x0010 (0x000030 - 0x000040)
class UPanelSlot : public UVisual
{ 
public:
	class UPanelWidget*                                Parent;                                                     // 0x0030   (0x0008)  
	class UWidget*                                     Content;                                                    // 0x0038   (0x0008)  
};

/// Class /Script/UMG.Button
/// Size: 0x0358 (0x000148 - 0x0004A0)
class UButton : public UContentWidget
{ 
public:
	class USlateWidgetStyleAsset*                      Style;                                                      // 0x0148   (0x0008)  
	FButtonStyle                                       WidgetStyle;                                                // 0x0150   (0x02A8)  
	FLinearColor                                       ColorAndOpacity;                                            // 0x03F8   (0x0010)  
	FLinearColor                                       BackgroundColor;                                            // 0x0408   (0x0010)  
	SDK_UNDEFINED(1,993) /* TEnumAsByte<EButtonClickMethod> */ __um(ClickMethod);                                  // 0x0418   (0x0001)  
	SDK_UNDEFINED(1,994) /* TEnumAsByte<EButtonTouchMethod> */ __um(TouchMethod);                                  // 0x0419   (0x0001)  
	SDK_UNDEFINED(1,995) /* TEnumAsByte<EButtonPressMethod> */ __um(PressMethod);                                  // 0x041A   (0x0001)  
	bool                                               IsFocusable;                                                // 0x041B   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x041C   (0x0004)  MISSED
	SDK_UNDEFINED(16,996) /* FMulticastInlineDelegate */ __um(OnClicked);                                          // 0x0420   (0x0010)  
	SDK_UNDEFINED(16,997) /* FMulticastInlineDelegate */ __um(OnPressed);                                          // 0x0430   (0x0010)  
	SDK_UNDEFINED(16,998) /* FMulticastInlineDelegate */ __um(OnReleased);                                         // 0x0440   (0x0010)  
	SDK_UNDEFINED(16,999) /* FMulticastInlineDelegate */ __um(OnHovered);                                          // 0x0450   (0x0010)  
	SDK_UNDEFINED(16,1000) /* FMulticastInlineDelegate */ __um(OnUnhovered);                                       // 0x0460   (0x0010)  
	SDK_UNDEFINED(16,1001) /* FMulticastInlineDelegate */ __um(OnLongPress);                                       // 0x0470   (0x0010)  
	FTimerHandle                                       LongPressTimerHandle;                                       // 0x0480   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0488   (0x0018)  MISSED


	/// Functions
	// Function /Script/UMG.Button.SetTouchMethod
	// void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);                                                   // [0x768df90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Button.SetStyle
	// void SetStyle(FButtonStyle& InStyle);                                                                                 // [0x768deb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.Button.SetPressMethod
	// void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);                                                   // [0x768dcb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Button.SetColorAndOpacity
	// void SetColorAndOpacity(FLinearColor InColorAndOpacity);                                                              // [0x768d040] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Button.SetClickMethod
	// void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);                                                   // [0x768cf40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Button.SetBackgroundColor
	// void SetBackgroundColor(FLinearColor InBackgroundColor);                                                              // [0x768c9c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Button.OnLongPressTimerFinished
	// void OnLongPressTimerFinished();                                                                                      // [0x768c770] Final|Native|Private 
	// Function /Script/UMG.Button.IsPressed
	// bool IsPressed();                                                                                                     // [0x768c710] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.ComboBoxString
/// Size: 0x0DB8 (0x000130 - 0x000EE8)
class UComboBoxString : public UWidget
{ 
public:
	SDK_UNDEFINED(16,1002) /* TArray<FString> */       __um(DefaultOptions);                                       // 0x0130   (0x0010)  
	SDK_UNDEFINED(16,1003) /* FString */               __um(SelectedOption);                                       // 0x0140   (0x0010)  
	FComboBoxStyle                                     WidgetStyle;                                                // 0x0150   (0x0440)  
	FTableRowStyle                                     ItemStyle;                                                  // 0x0590   (0x0838)  
	FMargin                                            ContentPadding;                                             // 0x0DC8   (0x0010)  
	float                                              MaxListHeight;                                              // 0x0DD8   (0x0004)  
	bool                                               HasDownArrow;                                               // 0x0DDC   (0x0001)  
	bool                                               EnableGamepadNavigationMode;                                // 0x0DDD   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0DDE   (0x0002)  MISSED
	FSlateFontInfo                                     Font;                                                       // 0x0DE0   (0x0058)  
	FSlateColor                                        ForegroundColor;                                            // 0x0E38   (0x0028)  
	bool                                               bIsFocusable;                                               // 0x0E60   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0E61   (0x0003)  MISSED
	SDK_UNDEFINED(20,1004) /* FDelegateProperty */     __um(OnGenerateWidgetEvent);                                // 0x0E64   (0x0014)  
	SDK_UNDEFINED(16,1005) /* FMulticastInlineDelegate */ __um(OnSelectionChanged);                                // 0x0E78   (0x0010)  
	SDK_UNDEFINED(16,1006) /* FMulticastInlineDelegate */ __um(OnOpening);                                         // 0x0E88   (0x0010)  
	unsigned char                                      UnknownData02_6[0x50];                                      // 0x0E98   (0x0050)  MISSED


	/// Functions
	// Function /Script/UMG.ComboBoxString.SetSelectedOption
	// void SetSelectedOption(FString Option);                                                                               // [0x7691f70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.SetSelectedIndex
	// void SetSelectedIndex(int32_t index);                                                                                 // [0x7691ee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.RemoveOption
	// bool RemoveOption(FString Option);                                                                                    // [0x7691320] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.RefreshOptions
	// void RefreshOptions();                                                                                                // [0x7691270] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
	// void OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);        // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
	// void OnOpeningEvent__DelegateSignature();                                                                             // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.ComboBoxString.IsOpen
	// bool IsOpen();                                                                                                        // [0x7691240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.GetSelectedOption
	// FString GetSelectedOption();                                                                                          // [0x7690fb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.GetSelectedIndex
	// int32_t GetSelectedIndex();                                                                                           // [0x7690f80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.GetOptionCount
	// int32_t GetOptionCount();                                                                                             // [0x7690f50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.GetOptionAtIndex
	// FString GetOptionAtIndex(int32_t index);                                                                              // [0x7690e70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.FindOptionIndex
	// int32_t FindOptionIndex(FString Option);                                                                              // [0x7690c30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.ClearSelection
	// void ClearSelection();                                                                                                // [0x76907a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.ClearOptions
	// void ClearOptions();                                                                                                  // [0x7690780] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.AddOption
	// void AddOption(FString Option);                                                                                       // [0x76905f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.Image
/// Size: 0x0120 (0x000130 - 0x000250)
class UImage : public UWidget
{ 
public:
	FSlateBrush                                        Brush;                                                      // 0x0130   (0x0090)  
	SDK_UNDEFINED(20,1007) /* FDelegateProperty */     __um(BrushDelegate);                                        // 0x01C0   (0x0014)  
	FLinearColor                                       ColorAndOpacity;                                            // 0x01D4   (0x0010)  
	SDK_UNDEFINED(20,1008) /* FDelegateProperty */     __um(ColorAndOpacityDelegate);                              // 0x01E4   (0x0014)  
	bool                                               bFlipForRightToLeftFlowDirection;                           // 0x01F8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01F9   (0x0003)  MISSED
	SDK_UNDEFINED(20,1009) /* FDelegateProperty */     __um(OnMouseButtonDownEvent);                               // 0x01FC   (0x0014)  
	unsigned char                                      UnknownData01_6[0x40];                                      // 0x0210   (0x0040)  MISSED


	/// Functions
	// Function /Script/UMG.Image.SetOpacity
	// void SetOpacity(float InOpacity);                                                                                     // [0x7696420] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetColorAndOpacity
	// void SetColorAndOpacity(FLinearColor InColorAndOpacity);                                                              // [0x7695db0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushTintColor
	// void SetBrushTintColor(FSlateColor TintColor);                                                                        // [0x7695c30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushSize
	// void SetBrushSize(FVector2D DesiredSize);                                                                             // [0x7695bb0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushResourceObject
	// void SetBrushResourceObject(class UObject* ResourceObject);                                                           // [0x7695b20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromTextureDynamic
	// void SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize);                                   // [0x7695a50] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromTexture
	// void SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);                                                 // [0x7695980] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromSoftTexture
	// void SetBrushFromSoftTexture(TWeakObjectPtr<UTexture2D*> SoftTexture, bool bMatchSize);                               // [0x7695820] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromSoftMaterial
	// void SetBrushFromSoftMaterial(TWeakObjectPtr<UMaterialInterface*> SoftMaterial);                                      // [0x7695700] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromMaterial
	// void SetBrushFromMaterial(class UMaterialInterface* Material);                                                        // [0x7695670] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromAtlasInterface
	// void SetBrushFromAtlasInterface(TScriptInterface<Class> AtlasRegion, bool bMatchSize);                                // [0x7695580] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromAsset
	// void SetBrushFromAsset(class USlateBrushAsset* Asset);                                                                // [0x76954f0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrush
	// void SetBrush(FSlateBrush& InBrush);                                                                                  // [0x76953e0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.Image.GetDynamicMaterial
	// class UMaterialInstanceDynamic* GetDynamicMaterial();                                                                 // [0x7694bb0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/UMG.ShapedTextOptions
/// Size: 0x0003 (0x000000 - 0x000003)
struct FShapedTextOptions
{ 
	bool                                               bOverride_TextShapingMethod : 1;                            // 0x0000:0 (0x0001)  
	bool                                               bOverride_TextFlowDirection : 1;                            // 0x0000:1 (0x0001)  
	ETextShapingMethod                                 TextShapingMethod;                                          // 0x0001   (0x0001)  
	ETextFlowDirection                                 TextFlowDirection;                                          // 0x0002   (0x0001)  
};

/// Class /Script/UMG.TextLayoutWidget
/// Size: 0x0020 (0x000130 - 0x000150)
class UTextLayoutWidget : public UWidget
{ 
public:
	FShapedTextOptions                                 ShapedTextOptions;                                          // 0x0130   (0x0003)  
	SDK_UNDEFINED(1,1010) /* TEnumAsByte<ETextJustify> */ __um(Justification);                                     // 0x0133   (0x0001)  
	ETextWrappingPolicy                                WrappingPolicy;                                             // 0x0134   (0x0001)  
	bool                                               AutoWrapText : 1;                                           // 0x0135:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x2];                                       // 0x0136   (0x0002)  MISSED
	float                                              WrapTextAt;                                                 // 0x0138   (0x0004)  
	FMargin                                            Margin;                                                     // 0x013C   (0x0010)  
	float                                              LineHeightPercentage;                                       // 0x014C   (0x0004)  


	/// Functions
	// Function /Script/UMG.TextLayoutWidget.SetJustification
	// void SetJustification(TEnumAsByte<ETextJustify> InJustification);                                                     // [0x76a2f50] Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.RichTextBlock
/// Size: 0x0580 (0x000150 - 0x0006D0)
class URichTextBlock : public UTextLayoutWidget
{ 
public:
	SDK_UNDEFINED(24,1011) /* FText */                 __um(Text);                                                 // 0x0150   (0x0018)  
	class UDataTable*                                  TextStyleSet;                                               // 0x0168   (0x0008)  
	TArray<class UClass*>                              DecoratorClasses;                                           // 0x0170   (0x0010)  
	bool                                               bOverrideDefaultStyle;                                      // 0x0180   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0181   (0x0007)  MISSED
	FTextBlockStyle                                    DefaultTextStyleOverride;                                   // 0x0188   (0x0288)  
	float                                              MinDesiredWidth;                                            // 0x0410   (0x0004)  
	ETextTransformPolicy                               TextTransformPolicy;                                        // 0x0414   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0415   (0x0003)  MISSED
	FTextBlockStyle                                    DefaultTextStyle;                                           // 0x0418   (0x0288)  
	TArray<class URichTextBlockDecorator*>             InstanceDecorators;                                         // 0x06A0   (0x0010)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x06B0   (0x0020)  MISSED


	/// Functions
	// Function /Script/UMG.RichTextBlock.SetTextTransformPolicy
	// void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy);                                                  // [0x769fa20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetTextStyleSet
	// void SetTextStyleSet(class UDataTable* NewTextStyleSet);                                                              // [0x769f990] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetText
	// void SetText(FText& InText);                                                                                          // [0x769f8c0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetMinDesiredWidth
	// void SetMinDesiredWidth(float InMinDesiredWidth);                                                                     // [0x769ef90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultTextStyle
	// void SetDefaultTextStyle(FTextBlockStyle& InDefaultTextStyle);                                                        // [0x769ea50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultStrikeBrush
	// void SetDefaultStrikeBrush(FSlateBrush& InStrikeBrush);                                                               // [0x769e940] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultShadowOffset
	// void SetDefaultShadowOffset(FVector2D InShadowOffset);                                                                // [0x769e8c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultShadowColorAndOpacity
	// void SetDefaultShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);                                           // [0x769e830] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultFont
	// void SetDefaultFont(FSlateFontInfo InFontInfo);                                                                       // [0x769e710] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetDefaultColorAndOpacity
	// void SetDefaultColorAndOpacity(FSlateColor InColorAndOpacity);                                                        // [0x769e620] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.SetAutoWrapText
	// void SetAutoWrapText(bool InAutoTextWrap);                                                                            // [0x769e510] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.GetText
	// FText GetText();                                                                                                      // [0x769d8c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.RichTextBlock.GetDecoratorByClass
	// class URichTextBlockDecorator* GetDecoratorByClass(class UClass* DecoratorClass);                                     // [0x769d640] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RichTextBlock.ClearAllDefaultStyleOverrides
	// void ClearAllDefaultStyleOverrides();                                                                                 // [0x769d260] Final|Native|Public  
};

/// Class /Script/UMG.ScrollBox
/// Size: 0x07C8 (0x000148 - 0x000910)
class UScrollBox : public UPanelWidget
{ 
public:
	FScrollBoxStyle                                    WidgetStyle;                                                // 0x0148   (0x0248)  
	FScrollBarStyle                                    WidgetBarStyle;                                             // 0x0390   (0x0518)  
	class USlateWidgetStyleAsset*                      Style;                                                      // 0x08A8   (0x0008)  
	class USlateWidgetStyleAsset*                      BarStyle;                                                   // 0x08B0   (0x0008)  
	SDK_UNDEFINED(1,1012) /* TEnumAsByte<EOrientation> */ __um(Orientation);                                       // 0x08B8   (0x0001)  
	ESlateVisibility                                   ScrollBarVisibility;                                        // 0x08B9   (0x0001)  
	EConsumeMouseWheel                                 ConsumeMouseWheel;                                          // 0x08BA   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x08BB   (0x0001)  MISSED
	FVector2D                                          ScrollbarThickness;                                         // 0x08BC   (0x0008)  
	FMargin                                            ScrollbarPadding;                                           // 0x08C4   (0x0010)  
	bool                                               AlwaysShowScrollbar;                                        // 0x08D4   (0x0001)  
	bool                                               AlwaysShowScrollbarTrack;                                   // 0x08D5   (0x0001)  
	bool                                               AllowOverscroll;                                            // 0x08D6   (0x0001)  
	bool                                               bAnimateWheelScrolling;                                     // 0x08D7   (0x0001)  
	EDescendantScrollDestination                       NavigationDestination;                                      // 0x08D8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x08D9   (0x0003)  MISSED
	float                                              NavigationScrollPadding;                                    // 0x08DC   (0x0004)  
	EScrollWhenFocusChanges                            ScrollWhenFocusChanges;                                     // 0x08E0   (0x0001)  
	bool                                               bAllowRightClickDragScrolling;                              // 0x08E1   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x08E2   (0x0002)  MISSED
	float                                              WheelScrollMultiplier;                                      // 0x08E4   (0x0004)  
	SDK_UNDEFINED(16,1013) /* FMulticastInlineDelegate */ __um(OnUserScrolled);                                    // 0x08E8   (0x0010)  
	unsigned char                                      UnknownData03_6[0x18];                                      // 0x08F8   (0x0018)  MISSED


	/// Functions
	// Function /Script/UMG.ScrollBox.SetWheelScrollMultiplier
	// void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);                                                        // [0x769fc20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetScrollWhenFocusChanges
	// void SetScrollWhenFocusChanges(EScrollWhenFocusChanges NewScrollWhenFocusChanges);                                    // [0x769f3c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetScrollOffset
	// void SetScrollOffset(float NewScrollOffset);                                                                          // [0x769f340] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetScrollBarVisibility
	// void SetScrollBarVisibility(ESlateVisibility NewScrollBarVisibility);                                                 // [0x769f2c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetScrollbarThickness
	// void SetScrollbarThickness(FVector2D& NewScrollbarThickness);                                                         // [0x769f4e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetScrollbarPadding
	// void SetScrollbarPadding(FMargin& NewScrollbarPadding);                                                               // [0x769f440] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetOrientation
	// void SetOrientation(TEnumAsByte<EOrientation> NewOrientation);                                                        // [0x769f090] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetConsumeMouseWheel
	// void SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel);                                                   // [0x769e5a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetAnimateWheelScrolling
	// void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling);                                                     // [0x769e480] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetAlwaysShowScrollbar
	// void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);                                                             // [0x769e3f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetAllowOverscroll
	// void SetAllowOverscroll(bool NewAllowOverscroll);                                                                     // [0x769e360] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.ScrollWidgetIntoView
	// void ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination, float Padding); // [0x769e200] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.ScrollToStart
	// void ScrollToStart();                                                                                                 // [0x769e1e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.ScrollToEnd
	// void ScrollToEnd();                                                                                                   // [0x769e1c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.GetViewOffsetFraction
	// float GetViewOffsetFraction();                                                                                        // [0x769d960] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ScrollBox.GetScrollOffsetOfEnd
	// float GetScrollOffsetOfEnd();                                                                                         // [0x769d890] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ScrollBox.GetScrollOffset
	// float GetScrollOffset();                                                                                              // [0x769d860] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ScrollBox.EndInertialScrolling
	// void EndInertialScrolling();                                                                                          // [0x769d380] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.TextBlock
/// Size: 0x01A0 (0x000150 - 0x0002F0)
class UTextBlock : public UTextLayoutWidget
{ 
public:
	SDK_UNDEFINED(24,1014) /* FText */                 __um(Text);                                                 // 0x0150   (0x0018)  
	SDK_UNDEFINED(20,1015) /* FDelegateProperty */     __um(TextDelegate);                                         // 0x0168   (0x0014)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x017C   (0x0004)  MISSED
	FSlateColor                                        ColorAndOpacity;                                            // 0x0180   (0x0028)  
	SDK_UNDEFINED(20,1016) /* FDelegateProperty */     __um(ColorAndOpacityDelegate);                              // 0x01A8   (0x0014)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x01BC   (0x0004)  MISSED
	FSlateFontInfo                                     Font;                                                       // 0x01C0   (0x0058)  
	FSlateBrush                                        StrikeBrush;                                                // 0x0218   (0x0090)  
	FVector2D                                          ShadowOffset;                                               // 0x02A8   (0x0008)  
	FLinearColor                                       ShadowColorAndOpacity;                                      // 0x02B0   (0x0010)  
	SDK_UNDEFINED(20,1017) /* FDelegateProperty */     __um(ShadowColorAndOpacityDelegate);                        // 0x02C0   (0x0014)  
	float                                              MinDesiredWidth;                                            // 0x02D4   (0x0004)  
	bool                                               bWrapWithInvalidationPanel;                                 // 0x02D8   (0x0001)  
	bool                                               bAutoWrapText;                                              // 0x02D9   (0x0001)  
	ETextTransformPolicy                               TextTransformPolicy;                                        // 0x02DA   (0x0001)  
	bool                                               bSimpleTextMode;                                            // 0x02DB   (0x0001)  
	unsigned char                                      UnknownData02_6[0x14];                                      // 0x02DC   (0x0014)  MISSED


	/// Functions
	// Function /Script/UMG.TextBlock.SetTextTransformPolicy
	// void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy);                                                  // [0x76a3b30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetText
	// void SetText(FText InText);                                                                                           // [0x76a3a40] Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetStrikeBrush
	// void SetStrikeBrush(FSlateBrush InStrikeBrush);                                                                       // [0x76a3940] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetShadowOffset
	// void SetShadowOffset(FVector2D InShadowOffset);                                                                       // [0x76a36a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetShadowColorAndOpacity
	// void SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);                                                  // [0x76a3610] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetOpacity
	// void SetOpacity(float InOpacity);                                                                                     // [0x76a3590] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetMinDesiredWidth
	// void SetMinDesiredWidth(float InMinDesiredWidth);                                                                     // [0x76a3270] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetFont
	// void SetFont(FSlateFontInfo InFontInfo);                                                                              // [0x76a2cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetColorAndOpacity
	// void SetColorAndOpacity(FSlateColor InColorAndOpacity);                                                               // [0x76a2a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetAutoWrapText
	// void SetAutoWrapText(bool InAutoTextWrap);                                                                            // [0x76a29b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.GetText
	// FText GetText();                                                                                                      // [0x76a25d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.TextBlock.GetDynamicOutlineMaterial
	// class UMaterialInstanceDynamic* GetDynamicOutlineMaterial();                                                          // [0x76a23b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.GetDynamicFontMaterial
	// class UMaterialInstanceDynamic* GetDynamicFontMaterial();                                                             // [0x76a2380] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.RichTextBlockDecorator
/// Size: 0x0000 (0x000030 - 0x000030)
class URichTextBlockDecorator : public UObject
{ 
public:
};

/// Class /Script/UMG.RichTextBlockImageDecorator
/// Size: 0x0008 (0x000030 - 0x000038)
class URichTextBlockImageDecorator : public URichTextBlockDecorator
{ 
public:
	class UDataTable*                                  ImageSet;                                                   // 0x0030   (0x0008)  
};

/// Class /Script/UMG.CanvasPanel
/// Size: 0x0010 (0x000148 - 0x000158)
class UCanvasPanel : public UPanelWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0148   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.CanvasPanel.AddChildToCanvas
	// class UCanvasPanelSlot* AddChildToCanvas(class UWidget* Content);                                                     // [0x768c1f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.DragDropOperation
/// Size: 0x0060 (0x000030 - 0x000090)
class UDragDropOperation : public UObject
{ 
public:
	SDK_UNDEFINED(16,1018) /* FString */               __um(Tag);                                                  // 0x0030   (0x0010)  
	class UObject*                                     Payload;                                                    // 0x0040   (0x0008)  
	class UWidget*                                     DefaultDragVisual;                                          // 0x0048   (0x0008)  
	EDragPivot                                         Pivot;                                                      // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0051   (0x0003)  MISSED
	FVector2D                                          Offset;                                                     // 0x0054   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	SDK_UNDEFINED(16,1019) /* FMulticastInlineDelegate */ __um(OnDrop);                                            // 0x0060   (0x0010)  
	SDK_UNDEFINED(16,1020) /* FMulticastInlineDelegate */ __um(OnDragCancelled);                                   // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,1021) /* FMulticastInlineDelegate */ __um(OnDragged);                                         // 0x0080   (0x0010)  


	/// Functions
	// Function /Script/UMG.DragDropOperation.Drop
	// void Drop(FPointerEvent& PointerEvent);                                                                               // [0x7690b00] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.DragDropOperation.DraggedVisual
	// void DraggedVisual(FVector2D& DesiredPosition, FVector2D& DesiredSize);                                               // [0x7690a20] Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/UMG.DragDropOperation.Dragged
	// void Dragged(FPointerEvent& PointerEvent);                                                                            // [0x76908f0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.DragDropOperation.DragCancelled
	// void DragCancelled(FPointerEvent& PointerEvent);                                                                      // [0x76907c0] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/UMG.AsyncTaskDownloadImage
/// Size: 0x0020 (0x000038 - 0x000058)
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1022) /* FMulticastInlineDelegate */ __um(OnSuccess);                                         // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,1023) /* FMulticastInlineDelegate */ __um(OnFail);                                            // 0x0048   (0x0010)  


	/// Functions
	// Function /Script/UMG.AsyncTaskDownloadImage.DownloadImage
	// class UAsyncTaskDownloadImage* DownloadImage(FString URL);                                                            // [0x768c290] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UMG.BackgroundBlur
/// Size: 0x00C0 (0x000148 - 0x000208)
class UBackgroundBlur : public UContentWidget
{ 
public:
	FMargin                                            Padding;                                                    // 0x0148   (0x0010)  
	SDK_UNDEFINED(1,1024) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0158   (0x0001)  
	SDK_UNDEFINED(1,1025) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0159   (0x0001)  
	bool                                               bApplyAlphaToBlur;                                          // 0x015A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x015B   (0x0001)  MISSED
	float                                              BlurStrength;                                               // 0x015C   (0x0004)  
	bool                                               bOverrideAutoRadiusCalculation;                             // 0x0160   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0161   (0x0003)  MISSED
	int32_t                                            BlurRadius;                                                 // 0x0164   (0x0004)  
	FSlateBrush                                        LowQualityFallbackBrush;                                    // 0x0168   (0x0090)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x01F8   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.BackgroundBlur.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> inVerticalAlignment);                                       // [0x768e090] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x768d8e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetLowQualityFallbackBrush
	// void SetLowQualityFallbackBrush(FSlateBrush& InBrush);                                                                // [0x768d5b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> inHorizontalAlignment);                                 // [0x768d1e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetBlurStrength
	// void SetBlurStrength(float InStrength);                                                                               // [0x768cae0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetBlurRadius
	// void SetBlurRadius(int32_t InBlurRadius);                                                                             // [0x768ca50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetApplyAlphaToBlur
	// void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);                                                                   // [0x768c8a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.BackgroundBlurSlot
/// Size: 0x0028 (0x000040 - 0x000068)
class UBackgroundBlurSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0040   (0x0010)  
	SDK_UNDEFINED(1,1026) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0050   (0x0001)  
	SDK_UNDEFINED(1,1027) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x0052   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.BackgroundBlurSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> inVerticalAlignment);                                       // [0x768e110] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlurSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x768d970] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlurSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> inHorizontalAlignment);                                 // [0x768d260] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/UMG.DynamicPropertyPath
/// Size: 0x0000 (0x000028 - 0x000028)
struct FDynamicPropertyPath : FCachedPropertyPath
{ 
};

/// Class /Script/UMG.PropertyBinding
/// Size: 0x0040 (0x000030 - 0x000070)
class UPropertyBinding : public UObject
{ 
public:
	SDK_UNDEFINED(8,1028) /* TWeakObjectPtr<UObject*> */ __um(SourceObject);                                       // 0x0030   (0x0008)  
	FDynamicPropertyPath                               SourcePath;                                                 // 0x0038   (0x0028)  
	FName                                              DestinationProperty;                                        // 0x0060   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Class /Script/UMG.BoolBinding
/// Size: 0x0000 (0x000070 - 0x000070)
class UBoolBinding : public UPropertyBinding
{ 
public:


	/// Functions
	// Function /Script/UMG.BoolBinding.GetValue
	// bool GetValue();                                                                                                      // [0x768c5a0] Final|Native|Public|Const 
};

/// Class /Script/UMG.Border
/// Size: 0x0170 (0x000148 - 0x0002B8)
class UBorder : public UContentWidget
{ 
public:
	SDK_UNDEFINED(1,1029) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0148   (0x0001)  
	SDK_UNDEFINED(1,1030) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0149   (0x0001)  
	bool                                               bShowEffectWhenDisabled : 1;                                // 0x014A:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x1];                                       // 0x014B   (0x0001)  MISSED
	FLinearColor                                       ContentColorAndOpacity;                                     // 0x014C   (0x0010)  
	SDK_UNDEFINED(20,1031) /* FDelegateProperty */     __um(ContentColorAndOpacityDelegate);                       // 0x015C   (0x0014)  
	FMargin                                            Padding;                                                    // 0x0170   (0x0010)  
	FSlateBrush                                        Background;                                                 // 0x0180   (0x0090)  
	SDK_UNDEFINED(20,1032) /* FDelegateProperty */     __um(BackgroundDelegate);                                   // 0x0210   (0x0014)  
	FLinearColor                                       BrushColor;                                                 // 0x0224   (0x0010)  
	SDK_UNDEFINED(20,1033) /* FDelegateProperty */     __um(BrushColorDelegate);                                   // 0x0234   (0x0014)  
	FVector2D                                          DesiredSizeScale;                                           // 0x0248   (0x0008)  
	bool                                               bFlipForRightToLeftFlowDirection;                           // 0x0250   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0251   (0x0003)  MISSED
	SDK_UNDEFINED(20,1034) /* FDelegateProperty */     __um(OnMouseButtonDownEvent);                               // 0x0254   (0x0014)  
	SDK_UNDEFINED(20,1035) /* FDelegateProperty */     __um(OnMouseButtonUpEvent);                                 // 0x0268   (0x0014)  
	SDK_UNDEFINED(20,1036) /* FDelegateProperty */     __um(OnMouseMoveEvent);                                     // 0x027C   (0x0014)  
	SDK_UNDEFINED(20,1037) /* FDelegateProperty */     __um(OnMouseDoubleClickEvent);                              // 0x0290   (0x0014)  
	unsigned char                                      UnknownData02_6[0x14];                                      // 0x02A4   (0x0014)  MISSED


	/// Functions
	// Function /Script/UMG.Border.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> inVerticalAlignment);                                       // [0x768e190] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x768da00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> inHorizontalAlignment);                                 // [0x768d2e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetDesiredSizeScale
	// void SetDesiredSizeScale(FVector2D InScale);                                                                          // [0x768d160] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Border.SetContentColorAndOpacity
	// void SetContentColorAndOpacity(FLinearColor InContentColorAndOpacity);                                                // [0x768d0d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrushFromTexture
	// void SetBrushFromTexture(class UTexture2D* Texture);                                                                  // [0x768ce30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrushFromMaterial
	// void SetBrushFromMaterial(class UMaterialInterface* Material);                                                        // [0x768cda0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrushFromAsset
	// void SetBrushFromAsset(class USlateBrushAsset* Asset);                                                                // [0x768cd10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrushColor
	// void SetBrushColor(FLinearColor InBrushColor);                                                                        // [0x768cc80] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrush
	// void SetBrush(FSlateBrush& InBrush);                                                                                  // [0x768cb70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.Border.GetDynamicMaterial
	// class UMaterialInstanceDynamic* GetDynamicMaterial();                                                                 // [0x768c460] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.BorderSlot
/// Size: 0x0028 (0x000040 - 0x000068)
class UBorderSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0040   (0x0010)  
	SDK_UNDEFINED(1,1038) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0050   (0x0001)  
	SDK_UNDEFINED(1,1039) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x0052   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.BorderSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> inVerticalAlignment);                                       // [0x768e210] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BorderSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x768da90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BorderSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> inHorizontalAlignment);                                 // [0x768d360] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.BrushBinding
/// Size: 0x0008 (0x000070 - 0x000078)
class UBrushBinding : public UPropertyBinding
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED


	/// Functions
	// Function /Script/UMG.BrushBinding.GetValue
	// FSlateBrush GetValue();                                                                                               // [0x768c5d0] Final|Native|Public|Const 
};

/// Class /Script/UMG.ButtonSlot
/// Size: 0x0028 (0x000040 - 0x000068)
class UButtonSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0040   (0x0010)  
	SDK_UNDEFINED(1,1040) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0050   (0x0001)  
	SDK_UNDEFINED(1,1041) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x0052   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.ButtonSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> inVerticalAlignment);                                       // [0x768e290] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ButtonSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x768db20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ButtonSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> inHorizontalAlignment);                                 // [0x768d3e0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/UMG.AnchorData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FAnchorData
{ 
	FMargin                                            Offsets;                                                    // 0x0000   (0x0010)  
	FAnchors                                           Anchors;                                                    // 0x0010   (0x0010)  
	FVector2D                                          Alignment;                                                  // 0x0020   (0x0008)  
};

/// Class /Script/UMG.CanvasPanelSlot
/// Size: 0x0038 (0x000040 - 0x000078)
class UCanvasPanelSlot : public UPanelSlot
{ 
public:
	FAnchorData                                        layoutData;                                                 // 0x0040   (0x0028)  
	bool                                               bAutoSize;                                                  // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0069   (0x0003)  MISSED
	int32_t                                            ZOrder;                                                     // 0x006C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0070   (0x0008)  MISSED


	/// Functions
	// Function /Script/UMG.CanvasPanelSlot.SetZOrder
	// void SetZOrder(int32_t InZOrder);                                                                                     // [0x768e310] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetSize
	// void SetSize(FVector2D InSize);                                                                                       // [0x768de30] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetPosition
	// void SetPosition(FVector2D InPosition);                                                                               // [0x768dc30] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetOffsets
	// void SetOffsets(FMargin InOffset);                                                                                    // [0x768d850] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetMinimum
	// void SetMinimum(FVector2D InMinimumAnchors);                                                                          // [0x768d740] Final|Native|Public|HasDefaults 
	// Function /Script/UMG.CanvasPanelSlot.SetMaximum
	// void SetMaximum(FVector2D InMaximumAnchors);                                                                          // [0x768d6c0] Final|Native|Public|HasDefaults 
	// Function /Script/UMG.CanvasPanelSlot.SetLayout
	// void SetLayout(FAnchorData& InLayoutData);                                                                            // [0x768d4f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetAutoSize
	// void SetAutoSize(bool InbAutoSize);                                                                                   // [0x768c930] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetAnchors
	// void SetAnchors(FAnchors InAnchors);                                                                                  // [0x768c810] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetAlignment
	// void SetAlignment(FVector2D InAlignment);                                                                             // [0x768c790] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.GetZOrder
	// int32_t GetZOrder();                                                                                                  // [0x768c6b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetSize
	// FVector2D GetSize();                                                                                                  // [0x768c560] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetPosition
	// FVector2D GetPosition();                                                                                              // [0x768c520] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetOffsets
	// FMargin GetOffsets();                                                                                                 // [0x768c4e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetLayout
	// FAnchorData GetLayout();                                                                                              // [0x768c490] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetAutoSize
	// bool GetAutoSize();                                                                                                   // [0x768c400] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetAnchors
	// FAnchors GetAnchors();                                                                                                // [0x768c3c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetAlignment
	// FVector2D GetAlignment();                                                                                             // [0x768c380] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.CheckBox
/// Size: 0x06B0 (0x000148 - 0x0007F8)
class UCheckBox : public UContentWidget
{ 
public:
	ECheckBoxState                                     CheckedState;                                               // 0x0148   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0149   (0x0003)  MISSED
	SDK_UNDEFINED(20,1042) /* FDelegateProperty */     __um(CheckedStateDelegate);                                 // 0x014C   (0x0014)  
	FCheckBoxStyle                                     WidgetStyle;                                                // 0x0160   (0x05E0)  
	class USlateWidgetStyleAsset*                      Style;                                                      // 0x0740   (0x0008)  
	class USlateBrushAsset*                            UncheckedImage;                                             // 0x0748   (0x0008)  
	class USlateBrushAsset*                            UncheckedHoveredImage;                                      // 0x0750   (0x0008)  
	class USlateBrushAsset*                            UncheckedPressedImage;                                      // 0x0758   (0x0008)  
	class USlateBrushAsset*                            CheckedImage;                                               // 0x0760   (0x0008)  
	class USlateBrushAsset*                            CheckedHoveredImage;                                        // 0x0768   (0x0008)  
	class USlateBrushAsset*                            CheckedPressedImage;                                        // 0x0770   (0x0008)  
	class USlateBrushAsset*                            UndeterminedImage;                                          // 0x0778   (0x0008)  
	class USlateBrushAsset*                            UndeterminedHoveredImage;                                   // 0x0780   (0x0008)  
	class USlateBrushAsset*                            UndeterminedPressedImage;                                   // 0x0788   (0x0008)  
	SDK_UNDEFINED(1,1043) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0790   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0791   (0x0003)  MISSED
	FMargin                                            Padding;                                                    // 0x0794   (0x0010)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x07A4   (0x0004)  MISSED
	FSlateColor                                        BorderBackgroundColor;                                      // 0x07A8   (0x0028)  
	SDK_UNDEFINED(1,1044) /* TEnumAsByte<EButtonClickMethod> */ __um(ClickMethod);                                 // 0x07D0   (0x0001)  
	SDK_UNDEFINED(1,1045) /* TEnumAsByte<EButtonTouchMethod> */ __um(TouchMethod);                                 // 0x07D1   (0x0001)  
	SDK_UNDEFINED(1,1046) /* TEnumAsByte<EButtonPressMethod> */ __um(PressMethod);                                 // 0x07D2   (0x0001)  
	bool                                               IsFocusable;                                                // 0x07D3   (0x0001)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x07D4   (0x0004)  MISSED
	SDK_UNDEFINED(16,1047) /* FMulticastInlineDelegate */ __um(OnCheckStateChanged);                               // 0x07D8   (0x0010)  
	unsigned char                                      UnknownData04_6[0x10];                                      // 0x07E8   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.CheckBox.SetTouchMethod
	// void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);                                                   // [0x768e010] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CheckBox.SetPressMethod
	// void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);                                                   // [0x768dd30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CheckBox.SetIsChecked
	// void SetIsChecked(bool InIsChecked);                                                                                  // [0x768d460] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CheckBox.SetClickMethod
	// void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);                                                   // [0x768cfc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CheckBox.SetCheckedState
	// void SetCheckedState(ECheckBoxState InCheckedState);                                                                  // [0x768cec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CheckBox.IsPressed
	// bool IsPressed();                                                                                                     // [0x768c740] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CheckBox.IsChecked
	// bool IsChecked();                                                                                                     // [0x768c6e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CheckBox.GetCheckedState
	// ECheckBoxState GetCheckedState();                                                                                     // [0x768c430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.CheckedStateBinding
/// Size: 0x0008 (0x000070 - 0x000078)
class UCheckedStateBinding : public UPropertyBinding
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED


	/// Functions
	// Function /Script/UMG.CheckedStateBinding.GetValue
	// ECheckBoxState GetValue();                                                                                            // [0x768c680] Final|Native|Public|Const 
};

/// Class /Script/UMG.CircularThrobber
/// Size: 0x00C0 (0x000130 - 0x0001F0)
class UCircularThrobber : public UWidget
{ 
public:
	int32_t                                            NumberOfPieces;                                             // 0x0130   (0x0004)  
	float                                              Period;                                                     // 0x0134   (0x0004)  
	float                                              Radius;                                                     // 0x0138   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x013C   (0x0004)  MISSED
	class USlateBrushAsset*                            PieceImage;                                                 // 0x0140   (0x0008)  
	FSlateBrush                                        Image;                                                      // 0x0148   (0x0090)  
	bool                                               bEnableRadius;                                              // 0x01D8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x17];                                      // 0x01D9   (0x0017)  MISSED


	/// Functions
	// Function /Script/UMG.CircularThrobber.SetRadius
	// void SetRadius(float InRadius);                                                                                       // [0x768ddb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CircularThrobber.SetPeriod
	// void SetPeriod(float InPeriod);                                                                                       // [0x768dbb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CircularThrobber.SetNumberOfPieces
	// void SetNumberOfPieces(int32_t InNumberOfPieces);                                                                     // [0x768d7c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ColorBinding
/// Size: 0x0008 (0x000070 - 0x000078)
class UColorBinding : public UPropertyBinding
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED


	/// Functions
	// Function /Script/UMG.ColorBinding.GetSlateValue
	// FSlateColor GetSlateValue();                                                                                          // [0x7691030] Final|Native|Public|Const 
	// Function /Script/UMG.ColorBinding.GetLinearValue
	// FLinearColor GetLinearValue();                                                                                        // [0x7690e00] Final|Native|Public|HasDefaults|Const 
};

/// Class /Script/UMG.ComboBox
/// Size: 0x0038 (0x000130 - 0x000168)
class UComboBox : public UWidget
{ 
public:
	TArray<class UObject*>                             Items;                                                      // 0x0130   (0x0010)  
	SDK_UNDEFINED(20,1048) /* FDelegateProperty */     __um(OnGenerateWidgetEvent);                                // 0x0140   (0x0014)  
	bool                                               bIsFocusable;                                               // 0x0154   (0x0001)  
	unsigned char                                      UnknownData00_6[0x13];                                      // 0x0155   (0x0013)  MISSED
};

/// Struct /Script/UMG.SlateChildSize
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSlateChildSize
{ 
	float                                              value;                                                      // 0x0000   (0x0004)  
	SDK_UNDEFINED(1,1049) /* TEnumAsByte<ESlateSizeRule> */ __um(SizeRule);                                        // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/UMG.RadialBoxSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRadialBoxSettings
{ 
	float                                              StartingAngle;                                              // 0x0000   (0x0004)  
	bool                                               bDistributeItemsEvenly;                                     // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              AngleBetweenItems;                                          // 0x0008   (0x0004)  
	float                                              SectorCentralAngle;                                         // 0x000C   (0x0004)  
};

/// Struct /Script/UMG.UserWidgetPool
/// Size: 0x0080 (0x000000 - 0x000080)
struct FUserWidgetPool
{ 
	TArray<class UUserWidget*>                         ActiveWidgets;                                              // 0x0000   (0x0010)  
	TArray<class UUserWidget*>                         InactiveWidgets;                                            // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0020   (0x0060)  MISSED
};

/// Class /Script/UMG.DynamicEntryBoxBase
/// Size: 0x00D0 (0x000130 - 0x000200)
class UDynamicEntryBoxBase : public UWidget
{ 
public:
	EDynamicBoxType                                    EntryBoxType;                                               // 0x0130   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0131   (0x0003)  MISSED
	FVector2D                                          EntrySpacing;                                               // 0x0134   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x013C   (0x0004)  MISSED
	TArray<FVector2D>                                  SpacingPattern;                                             // 0x0140   (0x0010)  
	FSlateChildSize                                    EntrySizeRule;                                              // 0x0150   (0x0008)  
	SDK_UNDEFINED(1,1050) /* TEnumAsByte<EHorizontalAlignment> */ __um(EntryHorizontalAlignment);                  // 0x0158   (0x0001)  
	SDK_UNDEFINED(1,1051) /* TEnumAsByte<EVerticalAlignment> */ __um(EntryVerticalAlignment);                      // 0x0159   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x015A   (0x0002)  MISSED
	int32_t                                            MaxElementSize;                                             // 0x015C   (0x0004)  
	FRadialBoxSettings                                 RadialBoxSettings;                                          // 0x0160   (0x0010)  
	unsigned char                                      UnknownData03_5[0x10];                                      // 0x0170   (0x0010)  MISSED
	FUserWidgetPool                                    EntryWidgetPool;                                            // 0x0180   (0x0080)  


	/// Functions
	// Function /Script/UMG.DynamicEntryBoxBase.SetRadialSettings
	// void SetRadialSettings(FRadialBoxSettings& InSettings);                                                               // [0x7691d60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.DynamicEntryBoxBase.SetEntrySpacing
	// void SetEntrySpacing(FVector2D& InEntrySpacing);                                                                      // [0x76915d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.DynamicEntryBoxBase.GetNumEntries
	// int32_t GetNumEntries();                                                                                              // [0x7690e40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.DynamicEntryBoxBase.GetAllEntries
	// TArray<UUserWidget*> GetAllEntries();                                                                                 // [0x7690ce0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.DynamicEntryBox
/// Size: 0x0008 (0x000200 - 0x000208)
class UDynamicEntryBox : public UDynamicEntryBoxBase
{ 
public:
	class UClass*                                      EntryWidgetClass;                                           // 0x0200   (0x0008)  


	/// Functions
	// Function /Script/UMG.DynamicEntryBox.Reset
	// void Reset(bool bDeleteWidgets);                                                                                      // [0x76913d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.DynamicEntryBox.RemoveEntry
	// void RemoveEntry(class UUserWidget* EntryWidget);                                                                     // [0x7691290] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.DynamicEntryBox.BP_CreateEntryOfClass
	// class UUserWidget* BP_CreateEntryOfClass(class UClass* EntryClass);                                                   // [0x76906c0] Final|Native|Private|BlueprintCallable 
	// Function /Script/UMG.DynamicEntryBox.BP_CreateEntry
	// class UUserWidget* BP_CreateEntry();                                                                                  // [0x7690690] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/UMG.EditableText
/// Size: 0x0380 (0x000130 - 0x0004B0)
class UEditableText : public UWidget
{ 
public:
	SDK_UNDEFINED(24,1052) /* FText */                 __um(Text);                                                 // 0x0130   (0x0018)  
	SDK_UNDEFINED(20,1053) /* FDelegateProperty */     __um(TextDelegate);                                         // 0x0148   (0x0014)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x015C   (0x0004)  MISSED
	SDK_UNDEFINED(24,1054) /* FText */                 __um(HintText);                                             // 0x0160   (0x0018)  
	SDK_UNDEFINED(20,1055) /* FDelegateProperty */     __um(HintTextDelegate);                                     // 0x0178   (0x0014)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x018C   (0x0004)  MISSED
	FEditableTextStyle                                 WidgetStyle;                                                // 0x0190   (0x0238)  
	class USlateWidgetStyleAsset*                      Style;                                                      // 0x03C8   (0x0008)  
	class USlateBrushAsset*                            BackgroundImageSelected;                                    // 0x03D0   (0x0008)  
	class USlateBrushAsset*                            BackgroundImageComposing;                                   // 0x03D8   (0x0008)  
	class USlateBrushAsset*                            CaretImage;                                                 // 0x03E0   (0x0008)  
	FSlateFontInfo                                     Font;                                                       // 0x03E8   (0x0058)  
	FSlateColor                                        ColorAndOpacity;                                            // 0x0440   (0x0028)  
	bool                                               IsReadOnly;                                                 // 0x0468   (0x0001)  
	bool                                               IsPassword;                                                 // 0x0469   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x046A   (0x0002)  MISSED
	float                                              MinimumDesiredWidth;                                        // 0x046C   (0x0004)  
	bool                                               IsCaretMovedWhenGainFocus;                                  // 0x0470   (0x0001)  
	bool                                               SelectAllTextWhenFocused;                                   // 0x0471   (0x0001)  
	bool                                               RevertTextOnEscape;                                         // 0x0472   (0x0001)  
	bool                                               ClearKeyboardFocusOnCommit;                                 // 0x0473   (0x0001)  
	bool                                               SelectAllTextOnCommit;                                      // 0x0474   (0x0001)  
	bool                                               AllowContextMenu;                                           // 0x0475   (0x0001)  
	SDK_UNDEFINED(1,1056) /* TEnumAsByte<EVirtualKeyboardType> */ __um(KeyboardType);                              // 0x0476   (0x0001)  
	FVirtualKeyboardOptions                            VirtualKeyboardOptions;                                     // 0x0477   (0x0001)  
	EVirtualKeyboardTrigger                            VirtualKeyboardTrigger;                                     // 0x0478   (0x0001)  
	EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction;                               // 0x0479   (0x0001)  
	SDK_UNDEFINED(1,1057) /* TEnumAsByte<ETextJustify> */ __um(Justification);                                     // 0x047A   (0x0001)  
	FShapedTextOptions                                 ShapedTextOptions;                                          // 0x047B   (0x0003)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x047E   (0x0002)  MISSED
	SDK_UNDEFINED(16,1058) /* FMulticastInlineDelegate */ __um(OnTextChanged);                                     // 0x0480   (0x0010)  
	SDK_UNDEFINED(16,1059) /* FMulticastInlineDelegate */ __um(OnTextCommitted);                                   // 0x0490   (0x0010)  
	unsigned char                                      UnknownData04_6[0x10];                                      // 0x04A0   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.EditableText.SetText
	// void SetText(FText InText);                                                                                           // [0x7692060] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetJustification
	// void SetJustification(TEnumAsByte<ETextJustify> InJustification);                                                     // [0x7691c60] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetIsReadOnly
	// void SetIsReadOnly(bool InbIsReadyOnly);                                                                              // [0x7691b40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetIsPassword
	// void SetIsPassword(bool InbIsPassword);                                                                               // [0x7691a20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetHintText
	// void SetHintText(FText InHintText);                                                                                   // [0x7691740] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
	// void OnEditableTextCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod);             // [0x61d2f50] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
	// void OnEditableTextChangedEvent__DelegateSignature(FText& Text);                                                      // [0x61d2f50] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.EditableText.GetText
	// FText GetText();                                                                                                      // [0x76910a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.EditableTextBox
/// Size: 0x09A8 (0x000130 - 0x000AD8)
class UEditableTextBox : public UWidget
{ 
public:
	SDK_UNDEFINED(24,1060) /* FText */                 __um(Text);                                                 // 0x0130   (0x0018)  
	SDK_UNDEFINED(20,1061) /* FDelegateProperty */     __um(TextDelegate);                                         // 0x0148   (0x0014)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x015C   (0x0004)  MISSED
	FEditableTextBoxStyle                              WidgetStyle;                                                // 0x0160   (0x0860)  
	class USlateWidgetStyleAsset*                      Style;                                                      // 0x09C0   (0x0008)  
	SDK_UNDEFINED(24,1062) /* FText */                 __um(HintText);                                             // 0x09C8   (0x0018)  
	SDK_UNDEFINED(20,1063) /* FDelegateProperty */     __um(HintTextDelegate);                                     // 0x09E0   (0x0014)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x09F4   (0x0004)  MISSED
	FSlateFontInfo                                     Font;                                                       // 0x09F8   (0x0058)  
	FLinearColor                                       ForegroundColor;                                            // 0x0A50   (0x0010)  
	FLinearColor                                       BackgroundColor;                                            // 0x0A60   (0x0010)  
	FLinearColor                                       ReadOnlyForegroundColor;                                    // 0x0A70   (0x0010)  
	bool                                               IsReadOnly;                                                 // 0x0A80   (0x0001)  
	bool                                               IsPassword;                                                 // 0x0A81   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0A82   (0x0002)  MISSED
	float                                              MinimumDesiredWidth;                                        // 0x0A84   (0x0004)  
	FMargin                                            Padding;                                                    // 0x0A88   (0x0010)  
	bool                                               IsCaretMovedWhenGainFocus;                                  // 0x0A98   (0x0001)  
	bool                                               SelectAllTextWhenFocused;                                   // 0x0A99   (0x0001)  
	bool                                               RevertTextOnEscape;                                         // 0x0A9A   (0x0001)  
	bool                                               ClearKeyboardFocusOnCommit;                                 // 0x0A9B   (0x0001)  
	bool                                               SelectAllTextOnCommit;                                      // 0x0A9C   (0x0001)  
	bool                                               AllowContextMenu;                                           // 0x0A9D   (0x0001)  
	SDK_UNDEFINED(1,1064) /* TEnumAsByte<EVirtualKeyboardType> */ __um(KeyboardType);                              // 0x0A9E   (0x0001)  
	FVirtualKeyboardOptions                            VirtualKeyboardOptions;                                     // 0x0A9F   (0x0001)  
	EVirtualKeyboardTrigger                            VirtualKeyboardTrigger;                                     // 0x0AA0   (0x0001)  
	EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction;                               // 0x0AA1   (0x0001)  
	SDK_UNDEFINED(1,1065) /* TEnumAsByte<ETextJustify> */ __um(Justification);                                     // 0x0AA2   (0x0001)  
	FShapedTextOptions                                 ShapedTextOptions;                                          // 0x0AA3   (0x0003)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x0AA6   (0x0002)  MISSED
	SDK_UNDEFINED(16,1066) /* FMulticastInlineDelegate */ __um(OnTextChanged);                                     // 0x0AA8   (0x0010)  
	SDK_UNDEFINED(16,1067) /* FMulticastInlineDelegate */ __um(OnTextCommitted);                                   // 0x0AB8   (0x0010)  
	unsigned char                                      UnknownData04_6[0x10];                                      // 0x0AC8   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.EditableTextBox.SetText
	// void SetText(FText InText);                                                                                           // [0x7692140] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetJustification
	// void SetJustification(TEnumAsByte<ETextJustify> InJustification);                                                     // [0x7691ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetIsReadOnly
	// void SetIsReadOnly(bool bReadOnly);                                                                                   // [0x7691bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetIsPassword
	// void SetIsPassword(bool bIsPassword);                                                                                 // [0x7691ab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetHintText
	// void SetHintText(FText InText);                                                                                       // [0x7691820] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetError
	// void SetError(FText InError);                                                                                         // [0x7691660] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
	// void OnEditableTextBoxCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod);          // [0x61d2f50] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
	// void OnEditableTextBoxChangedEvent__DelegateSignature(FText& Text);                                                   // [0x61d2f50] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.EditableTextBox.HasError
	// bool HasError();                                                                                                      // [0x7691210] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.EditableTextBox.GetText
	// FText GetText();                                                                                                      // [0x7691140] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.EditableTextBox.ClearError
	// void ClearError();                                                                                                    // [0x7690760] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ExpandableArea
/// Size: 0x0248 (0x000130 - 0x000378)
class UExpandableArea : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0130   (0x0008)  MISSED
	FExpandableAreaStyle                               Style;                                                      // 0x0138   (0x0130)  
	FSlateBrush                                        BorderBrush;                                                // 0x0268   (0x0090)  
	FSlateColor                                        BorderColor;                                                // 0x02F8   (0x0028)  
	bool                                               bIsExpanded;                                                // 0x0320   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0321   (0x0003)  MISSED
	float                                              MaxHeight;                                                  // 0x0324   (0x0004)  
	FMargin                                            HeaderPadding;                                              // 0x0328   (0x0010)  
	FMargin                                            AreaPadding;                                                // 0x0338   (0x0010)  
	SDK_UNDEFINED(16,1068) /* FMulticastInlineDelegate */ __um(OnExpansionChanged);                                // 0x0348   (0x0010)  
	class UWidget*                                     HeaderContent;                                              // 0x0358   (0x0008)  
	class UWidget*                                     BodyContent;                                                // 0x0360   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0368   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.ExpandableArea.SetIsExpanded_Animated
	// void SetIsExpanded_Animated(bool IsExpanded);                                                                         // [0x7691990] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ExpandableArea.SetIsExpanded
	// void SetIsExpanded(bool IsExpanded);                                                                                  // [0x7691900] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ExpandableArea.GetIsExpanded
	// bool GetIsExpanded();                                                                                                 // [0x7690dd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.FloatBinding
/// Size: 0x0000 (0x000070 - 0x000070)
class UFloatBinding : public UPropertyBinding
{ 
public:


	/// Functions
	// Function /Script/UMG.FloatBinding.GetValue
	// float GetValue();                                                                                                     // [0x76911e0] Final|Native|Public|Const 
};

/// Class /Script/UMG.GridPanel
/// Size: 0x0030 (0x000148 - 0x000178)
class UGridPanel : public UPanelWidget
{ 
public:
	TArray<float>                                      ColumnFill;                                                 // 0x0148   (0x0010)  
	TArray<float>                                      RowFill;                                                    // 0x0158   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0168   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.GridPanel.SetRowFill
	// void SetRowFill(int32_t ColumnIndex, float Coefficient);                                                              // [0x7691e10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridPanel.SetColumnFill
	// void SetColumnFill(int32_t ColumnIndex, float Coefficient);                                                           // [0x7691460] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridPanel.AddChildToGrid
	// class UGridSlot* AddChildToGrid(class UWidget* Content, int32_t InRow, int32_t InColumn);                             // [0x76904e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.GridSlot
/// Size: 0x0038 (0x000040 - 0x000078)
class UGridSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0040   (0x0010)  
	SDK_UNDEFINED(1,1069) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0050   (0x0001)  
	SDK_UNDEFINED(1,1070) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0052   (0x0002)  MISSED
	int32_t                                            row;                                                        // 0x0054   (0x0004)  
	int32_t                                            RowSpan;                                                    // 0x0058   (0x0004)  
	int32_t                                            Column;                                                     // 0x005C   (0x0004)  
	int32_t                                            ColumnSpan;                                                 // 0x0060   (0x0004)  
	int32_t                                            Layer;                                                      // 0x0064   (0x0004)  
	FVector2D                                          Nudge;                                                      // 0x0068   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0070   (0x0008)  MISSED


	/// Functions
	// Function /Script/UMG.GridSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> inVerticalAlignment);                                       // [0x7696b00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetRowSpan
	// void SetRowSpan(int32_t InRowSpan);                                                                                   // [0x7696650] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetRow
	// void SetRow(int32_t InRow);                                                                                           // [0x76965c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x76964a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetNudge
	// void SetNudge(FVector2D InNudge);                                                                                     // [0x76963a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetLayer
	// void SetLayer(int32_t InLayer);                                                                                       // [0x7696230] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> inHorizontalAlignment);                                 // [0x7696050] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetColumnSpan
	// void SetColumnSpan(int32_t InColumnSpan);                                                                             // [0x7695ed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetColumn
	// void SetColumn(int32_t InColumn);                                                                                     // [0x7695e40] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.HorizontalBox
/// Size: 0x0010 (0x000148 - 0x000158)
class UHorizontalBox : public UPanelWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0148   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.HorizontalBox.AddChildToHorizontalBox
	// class UHorizontalBoxSlot* AddChildToHorizontalBox(class UWidget* Content);                                            // [0x7694470] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.HorizontalBoxSlot
/// Size: 0x0028 (0x000040 - 0x000068)
class UHorizontalBoxSlot : public UPanelSlot
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0040   (0x0008)  MISSED
	FMargin                                            Padding;                                                    // 0x0048   (0x0010)  
	FSlateChildSize                                    Size;                                                       // 0x0058   (0x0008)  
	SDK_UNDEFINED(1,1071) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0060   (0x0001)  
	SDK_UNDEFINED(1,1072) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0061   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0062   (0x0006)  MISSED


	/// Functions
	// Function /Script/UMG.HorizontalBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> inVerticalAlignment);                                       // [0x7696b80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.HorizontalBoxSlot.SetSize
	// void SetSize(FSlateChildSize InSize);                                                                                 // [0x76969f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.HorizontalBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x7696530] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.HorizontalBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> inHorizontalAlignment);                                 // [0x76960d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.InputKeySelector
/// Size: 0x0648 (0x000130 - 0x000778)
class UInputKeySelector : public UWidget
{ 
public:
	FButtonStyle                                       WidgetStyle;                                                // 0x0130   (0x02A8)  
	FTextBlockStyle                                    TextStyle;                                                  // 0x03D8   (0x0288)  
	FInputChord                                        SelectedKey;                                                // 0x0660   (0x0028)  
	FSlateFontInfo                                     Font;                                                       // 0x0688   (0x0058)  
	FMargin                                            Margin;                                                     // 0x06E0   (0x0010)  
	FLinearColor                                       ColorAndOpacity;                                            // 0x06F0   (0x0010)  
	SDK_UNDEFINED(24,1073) /* FText */                 __um(KeySelectionText);                                     // 0x0700   (0x0018)  
	SDK_UNDEFINED(24,1074) /* FText */                 __um(NoKeySpecifiedText);                                   // 0x0718   (0x0018)  
	bool                                               bAllowModifierKeys;                                         // 0x0730   (0x0001)  
	bool                                               bAllowGamepadKeys;                                          // 0x0731   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0732   (0x0006)  MISSED
	TArray<FKey>                                       EscapeKeys;                                                 // 0x0738   (0x0010)  
	SDK_UNDEFINED(16,1075) /* FMulticastInlineDelegate */ __um(OnKeySelected);                                     // 0x0748   (0x0010)  
	SDK_UNDEFINED(16,1076) /* FMulticastInlineDelegate */ __um(OnIsSelectingKeyChanged);                           // 0x0758   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0768   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.InputKeySelector.SetTextBlockVisibility
	// void SetTextBlockVisibility(ESlateVisibility InVisibility);                                                           // [0x7696a80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetSelectedKey
	// void SetSelectedKey(FInputChord& InSelectedKey);                                                                      // [0x7696870] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetNoKeySpecifiedText
	// void SetNoKeySpecifiedText(FText InNoKeySpecifiedText);                                                               // [0x76962c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetKeySelectionText
	// void SetKeySelectionText(FText InKeySelectionText);                                                                   // [0x7696150] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetEscapeKeys
	// void SetEscapeKeys(TArray<FKey>& InKeys);                                                                             // [0x7695f60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetAllowModifierKeys
	// void SetAllowModifierKeys(bool bInAllowModifierKeys);                                                                 // [0x7695350] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetAllowGamepadKeys
	// void SetAllowGamepadKeys(bool bInAllowGamepadKeys);                                                                   // [0x76952c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.OnKeySelected__DelegateSignature
	// void OnKeySelected__DelegateSignature(FInputChord SelectedKey);                                                       // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
	// void OnIsSelectingKeyChanged__DelegateSignature();                                                                    // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.InputKeySelector.GetIsSelectingKey
	// bool GetIsSelectingKey();                                                                                             // [0x7694c80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.Int32Binding
/// Size: 0x0000 (0x000070 - 0x000070)
class UInt32Binding : public UPropertyBinding
{ 
public:


	/// Functions
	// Function /Script/UMG.Int32Binding.GetValue
	// int32_t GetValue();                                                                                                   // [0x7694ef0] Final|Native|Public|Const 
};

/// Class /Script/UMG.InvalidationBox
/// Size: 0x0018 (0x000148 - 0x000160)
class UInvalidationBox : public UContentWidget
{ 
public:
	bool                                               bCanCache;                                                  // 0x0148   (0x0001)  
	bool                                               CacheRelativeTransforms;                                    // 0x0149   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x014A   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.InvalidationBox.SetCanCache
	// void SetCanCache(bool CanCache);                                                                                      // [0x7695d20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InvalidationBox.InvalidateCache
	// void InvalidateCache();                                                                                               // [0x4592da0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InvalidationBox.GetCanCache
	// bool GetCanCache();                                                                                                   // [0x7694af0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.UserListEntry
/// Size: 0x0000 (0x000030 - 0x000030)
class UUserListEntry : public UInterface
{ 
public:


	/// Functions
	// Function /Script/UMG.UserListEntry.BP_OnItemSelectionChanged
	// void BP_OnItemSelectionChanged(bool bIsSelected);                                                                     // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/UMG.UserListEntry.BP_OnItemExpansionChanged
	// void BP_OnItemExpansionChanged(bool bIsExpanded);                                                                     // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/UMG.UserListEntry.BP_OnEntryReleased
	// void BP_OnEntryReleased();                                                                                            // [0x61d2f50] Event|Protected|BlueprintEvent 
};

/// Class /Script/UMG.UserListEntryLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UUserListEntryLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/UMG.UserListEntryLibrary.IsListItemSelected
	// bool IsListItemSelected(TScriptInterface<Class> UserListEntry);                                                       // [0x7694fc0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.UserListEntryLibrary.IsListItemExpanded
	// bool IsListItemExpanded(TScriptInterface<Class> UserListEntry);                                                       // [0x7694f20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.UserListEntryLibrary.GetOwningListView
	// class UListViewBase* GetOwningListView(TScriptInterface<Class> UserListEntry);                                        // [0x7694e50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/UMG.UserObjectListEntry
/// Size: 0x0000 (0x000030 - 0x000030)
class UUserObjectListEntry : public UUserListEntry
{ 
public:


	/// Functions
	// Function /Script/UMG.UserObjectListEntry.OnListItemObjectSet
	// void OnListItemObjectSet(class UObject* ListItemObject);                                                              // [0x61d2f50] Event|Protected|BlueprintEvent 
};

/// Class /Script/UMG.UserObjectListEntryLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UUserObjectListEntryLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/UMG.UserObjectListEntryLibrary.GetListItemObject
	// class UObject* GetListItemObject(TScriptInterface<Class> UserObjectListEntry);                                        // [0x7694d50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/UMG.ListViewBase
/// Size: 0x0110 (0x000130 - 0x000240)
class UListViewBase : public UWidget
{ 
public:
	class UClass*                                      EntryWidgetClass;                                           // 0x0130   (0x0008)  
	float                                              WheelScrollMultiplier;                                      // 0x0138   (0x0004)  
	bool                                               bEnableScrollAnimation;                                     // 0x013C   (0x0001)  
	bool                                               bEnableFixedLineOffset;                                     // 0x013D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x013E   (0x0002)  MISSED
	float                                              FixedLineScrollOffset;                                      // 0x0140   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0144   (0x0004)  MISSED
	SDK_UNDEFINED(16,1077) /* FMulticastInlineDelegate */ __um(BP_OnEntryGenerated);                               // 0x0148   (0x0010)  
	SDK_UNDEFINED(16,1078) /* FMulticastInlineDelegate */ __um(BP_OnEntryReleased);                                // 0x0158   (0x0010)  
	FUserWidgetPool                                    EntryWidgetPool;                                            // 0x0168   (0x0080)  
	unsigned char                                      UnknownData02_6[0x58];                                      // 0x01E8   (0x0058)  MISSED


	/// Functions
	// Function /Script/UMG.ListViewBase.SetWheelScrollMultiplier
	// void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);                                                        // [0x7696c00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.SetScrollOffset
	// void SetScrollOffset(float InScrollOffset);                                                                           // [0x76966e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.SetScrollBarVisibility
	// void SetScrollBarVisibility(ESlateVisibility InVisibility);                                                           // [0x7696760] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.ScrollToTop
	// void ScrollToTop();                                                                                                   // [0x76952a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.ScrollToBottom
	// void ScrollToBottom();                                                                                                // [0x7695280] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.RequestRefresh
	// void RequestRefresh();                                                                                                // [0x76951d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.RegenerateAllEntries
	// void RegenerateAllEntries();                                                                                          // [0x7695120] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListViewBase.GetDisplayedEntryWidgets
	// TArray<UUserWidget*> GetDisplayedEntryWidgets();                                                                      // [0x7694b20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.ListView
/// Size: 0x0150 (0x000240 - 0x000390)
class UListView : public UListViewBase
{ 
public:
	unsigned char                                      UnknownData00_2[0xC0];                                      // 0x0240   (0x00C0)  MISSED
	SDK_UNDEFINED(1,1079) /* TEnumAsByte<EOrientation> */ __um(Orientation);                                       // 0x0300   (0x0001)  
	SDK_UNDEFINED(1,1080) /* TEnumAsByte<ESelectionMode> */ __um(SelectionMode);                                   // 0x0301   (0x0001)  
	EConsumeMouseWheel                                 ConsumeMouseWheel;                                          // 0x0302   (0x0001)  
	bool                                               bClearSelectionOnClick;                                     // 0x0303   (0x0001)  
	bool                                               bIsFocusable;                                               // 0x0304   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0305   (0x0003)  MISSED
	float                                              EntrySpacing;                                               // 0x0308   (0x0004)  
	bool                                               bReturnFocusToSelection;                                    // 0x030C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x030D   (0x0003)  MISSED
	TArray<class UObject*>                             ListItems;                                                  // 0x0310   (0x0010)  
	unsigned char                                      UnknownData03_5[0x10];                                      // 0x0320   (0x0010)  MISSED
	SDK_UNDEFINED(16,1081) /* FMulticastInlineDelegate */ __um(BP_OnEntryInitialized);                             // 0x0330   (0x0010)  
	SDK_UNDEFINED(16,1082) /* FMulticastInlineDelegate */ __um(BP_OnItemClicked);                                  // 0x0340   (0x0010)  
	SDK_UNDEFINED(16,1083) /* FMulticastInlineDelegate */ __um(BP_OnItemDoubleClicked);                            // 0x0350   (0x0010)  
	SDK_UNDEFINED(16,1084) /* FMulticastInlineDelegate */ __um(BP_OnItemIsHoveredChanged);                         // 0x0360   (0x0010)  
	SDK_UNDEFINED(16,1085) /* FMulticastInlineDelegate */ __um(BP_OnItemSelectionChanged);                         // 0x0370   (0x0010)  
	SDK_UNDEFINED(16,1086) /* FMulticastInlineDelegate */ __um(BP_OnItemScrolledIntoView);                         // 0x0380   (0x0010)  


	/// Functions
	// Function /Script/UMG.ListView.SetSelectionMode
	// void SetSelectionMode(TEnumAsByte<ESelectionMode> SelectionMode);                                                     // [0x7696970] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.SetSelectedIndex
	// void SetSelectedIndex(int32_t index);                                                                                 // [0x76967e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.ScrollIndexIntoView
	// void ScrollIndexIntoView(int32_t index);                                                                              // [0x76951f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.RemoveItem
	// void RemoveItem(class UObject* Item);                                                                                 // [0x7695140] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.NavigateToIndex
	// void NavigateToIndex(int32_t index);                                                                                  // [0x7695090] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.IsRefreshPending
	// bool IsRefreshPending();                                                                                              // [0x7695060] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.GetNumItems
	// int32_t GetNumItems();                                                                                                // [0x7694e20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.GetListItems
	// TArray<UObject*> GetListItems();                                                                                      // [0x7694df0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.GetItemAt
	// class UObject* GetItemAt(int32_t index);                                                                              // [0x7694cb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.GetIndexForItem
	// int32_t GetIndexForItem(class UObject* Item);                                                                         // [0x7694be0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.ClearListItems
	// void ClearListItems();                                                                                                // [0x7694ad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_SetSelectedItem
	// void BP_SetSelectedItem(class UObject* Item);                                                                         // [0x7694a40] Final|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_SetListItems
	// void BP_SetListItems(TArray<UObject*>& InListItems);                                                                  // [0x7694990] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_SetItemSelection
	// void BP_SetItemSelection(class UObject* Item, bool bSelected);                                                        // [0x76948c0] Final|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_ScrollItemIntoView
	// void BP_ScrollItemIntoView(class UObject* Item);                                                                      // [0x7694830] Final|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_NavigateToItem
	// void BP_NavigateToItem(class UObject* Item);                                                                          // [0x76947a0] Final|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_IsItemVisible
	// bool BP_IsItemVisible(class UObject* Item);                                                                           // [0x7694700] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.BP_GetSelectedItems
	// bool BP_GetSelectedItems(TArray<UObject*>& Items);                                                                    // [0x7694640] Final|Native|Private|HasOutParms|BlueprintCallable|Const 
	// Function /Script/UMG.ListView.BP_GetSelectedItem
	// class UObject* BP_GetSelectedItem();                                                                                  // [0x7694610] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.BP_GetNumItemsSelected
	// int32_t BP_GetNumItemsSelected();                                                                                     // [0x76945e0] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ListView.BP_ClearSelection
	// void BP_ClearSelection();                                                                                             // [0x76945c0] Final|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.BP_CancelScrollIntoView
	// void BP_CancelScrollIntoView();                                                                                       // [0x76945a0] Final|Native|Private|BlueprintCallable 
	// Function /Script/UMG.ListView.AddItem
	// void AddItem(class UObject* Item);                                                                                    // [0x7694510] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ListViewDesignerPreviewItem
/// Size: 0x0000 (0x000030 - 0x000030)
class UListViewDesignerPreviewItem : public UObject
{ 
public:
};

/// Class /Script/UMG.MenuAnchor
/// Size: 0x0058 (0x000148 - 0x0001A0)
class UMenuAnchor : public UContentWidget
{ 
public:
	class UClass*                                      MenuClass;                                                  // 0x0148   (0x0008)  
	SDK_UNDEFINED(20,1087) /* FDelegateProperty */     __um(OnGetMenuContentEvent);                                // 0x0150   (0x0014)  
	SDK_UNDEFINED(20,1088) /* FDelegateProperty */     __um(OnGetUserMenuContentEvent);                            // 0x0164   (0x0014)  
	SDK_UNDEFINED(1,1089) /* TEnumAsByte<EMenuPlacement> */ __um(Placement);                                       // 0x0178   (0x0001)  
	bool                                               bFitInWindow;                                               // 0x0179   (0x0001)  
	bool                                               ShouldDeferPaintingAfterWindowContent;                      // 0x017A   (0x0001)  
	bool                                               UseApplicationMenuStack;                                    // 0x017B   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x017C   (0x0004)  MISSED
	SDK_UNDEFINED(16,1090) /* FMulticastInlineDelegate */ __um(OnMenuOpenChanged);                                 // 0x0180   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0190   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.MenuAnchor.ToggleOpen
	// void ToggleOpen(bool bFocusOnOpen);                                                                                   // [0x769ab40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MenuAnchor.ShouldOpenDueToClick
	// bool ShouldOpenDueToClick();                                                                                          // [0x769ab10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MenuAnchor.SetPlacement
	// void SetPlacement(TEnumAsByte<EMenuPlacement> InPlacement);                                                           // [0x769a4f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MenuAnchor.Open
	// void Open(bool bFocusMenu);                                                                                           // [0x7699c00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MenuAnchor.IsOpen
	// bool IsOpen();                                                                                                        // [0x7699bd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MenuAnchor.HasOpenSubMenus
	// bool HasOpenSubMenus();                                                                                               // [0x7699ba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MenuAnchor.GetUserWidget__DelegateSignature
	// class UUserWidget* GetUserWidget__DelegateSignature();                                                                // [0x61d2f50] Public|Delegate      
	// Function /Script/UMG.MenuAnchor.GetMenuPosition
	// FVector2D GetMenuPosition();                                                                                          // [0x7699920] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MenuAnchor.FitInWindow
	// void FitInWindow(bool bFit);                                                                                          // [0x7699560] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MenuAnchor.Close
	// void Close();                                                                                                         // [0x7699540] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.MouseCursorBinding
/// Size: 0x0000 (0x000070 - 0x000070)
class UMouseCursorBinding : public UPropertyBinding
{ 
public:


	/// Functions
	// Function /Script/UMG.MouseCursorBinding.GetValue
	// TEnumAsByte<EMouseCursor> GetValue();                                                                                 // [0x7699aa0] Final|Native|Public|Const 
};

/// Class /Script/UMG.MovieScene2DTransformPropertySystem
/// Size: 0x0000 (0x000060 - 0x000060)
class UMovieScene2DTransformPropertySystem : public UMovieScenePropertySystem
{ 
public:
};

/// Struct /Script/UMG.MovieScene2DTransformMask
/// Size: 0x0004 (0x000000 - 0x000004)
struct FMovieScene2DTransformMask
{ 
	uint32_t                                           Mask;                                                       // 0x0000   (0x0004)  
};

/// Class /Script/UMG.MovieScene2DTransformSection
/// Size: 0x0470 (0x0000F0 - 0x000560)
class UMovieScene2DTransformSection : public UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	FMovieScene2DTransformMask                         TransformMask;                                              // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00FC   (0x0004)  MISSED
	FMovieSceneFloatChannel                            Translation;                                                // 0x0100   (0x0140)  
	FMovieSceneFloatChannel                            Rotation;                                                   // 0x0240   (0x00A0)  
	FMovieSceneFloatChannel                            Scale;                                                      // 0x02E0   (0x0140)  
	FMovieSceneFloatChannel                            Shear;                                                      // 0x0420   (0x0140)  
};

/// Class /Script/UMG.MovieScene2DTransformTrack
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{ 
public:
};

/// Class /Script/UMG.MovieSceneMarginPropertySystem
/// Size: 0x0000 (0x000060 - 0x000060)
class UMovieSceneMarginPropertySystem : public UMovieScenePropertySystem
{ 
public:
};

/// Class /Script/UMG.MovieSceneMarginSection
/// Size: 0x0288 (0x0000F0 - 0x000378)
class UMovieSceneMarginSection : public UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	FMovieSceneFloatChannel                            TopCurve;                                                   // 0x00F8   (0x00A0)  
	FMovieSceneFloatChannel                            LeftCurve;                                                  // 0x0198   (0x00A0)  
	FMovieSceneFloatChannel                            RightCurve;                                                 // 0x0238   (0x00A0)  
	FMovieSceneFloatChannel                            BottomCurve;                                                // 0x02D8   (0x00A0)  
};

/// Class /Script/UMG.MovieSceneMarginTrack
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{ 
public:
};

/// Class /Script/UMG.MovieSceneWidgetMaterialTrack
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00A8   (0x0008)  MISSED
	TArray<FName>                                      BrushPropertyNamePath;                                      // 0x00B0   (0x0010)  
	FName                                              TrackName;                                                  // 0x00C0   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Class /Script/UMG.MultiLineEditableText
/// Size: 0x0368 (0x000150 - 0x0004B8)
class UMultiLineEditableText : public UTextLayoutWidget
{ 
public:
	SDK_UNDEFINED(24,1091) /* FText */                 __um(Text);                                                 // 0x0150   (0x0018)  
	SDK_UNDEFINED(24,1092) /* FText */                 __um(HintText);                                             // 0x0168   (0x0018)  
	SDK_UNDEFINED(20,1093) /* FDelegateProperty */     __um(HintTextDelegate);                                     // 0x0180   (0x0014)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0194   (0x0004)  MISSED
	FTextBlockStyle                                    WidgetStyle;                                                // 0x0198   (0x0288)  
	bool                                               bIsReadOnly;                                                // 0x0420   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0421   (0x0007)  MISSED
	FSlateFontInfo                                     Font;                                                       // 0x0428   (0x0058)  
	bool                                               SelectAllTextWhenFocused;                                   // 0x0480   (0x0001)  
	bool                                               ClearTextSelectionOnFocusLoss;                              // 0x0481   (0x0001)  
	bool                                               RevertTextOnEscape;                                         // 0x0482   (0x0001)  
	bool                                               ClearKeyboardFocusOnCommit;                                 // 0x0483   (0x0001)  
	bool                                               AllowContextMenu;                                           // 0x0484   (0x0001)  
	FVirtualKeyboardOptions                            VirtualKeyboardOptions;                                     // 0x0485   (0x0001)  
	EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction;                               // 0x0486   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x0487   (0x0001)  MISSED
	SDK_UNDEFINED(16,1094) /* FMulticastInlineDelegate */ __um(OnTextChanged);                                     // 0x0488   (0x0010)  
	SDK_UNDEFINED(16,1095) /* FMulticastInlineDelegate */ __um(OnTextCommitted);                                   // 0x0498   (0x0010)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x04A8   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.MultiLineEditableText.SetWidgetStyle
	// void SetWidgetStyle(FTextBlockStyle& InWidgetStyle);                                                                  // [0x769aa60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.SetText
	// void SetText(FText InText);                                                                                           // [0x769a6d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.SetIsReadOnly
	// void SetIsReadOnly(bool bReadOnly);                                                                                   // [0x769a2c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.SetHintText
	// void SetHintText(FText InHintText);                                                                                   // [0x7699ff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
	// void OnMultiLineEditableTextCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod);    // [0x61d2f50] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
	// void OnMultiLineEditableTextChangedEvent__DelegateSignature(FText& Text);                                             // [0x61d2f50] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.MultiLineEditableText.GetText
	// FText GetText();                                                                                                      // [0x7699960] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MultiLineEditableText.GetHintText
	// FText GetHintText();                                                                                                  // [0x76997e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.MultiLineEditableTextBox
/// Size: 0x0BF8 (0x000150 - 0x000D48)
class UMultiLineEditableTextBox : public UTextLayoutWidget
{ 
public:
	SDK_UNDEFINED(24,1096) /* FText */                 __um(Text);                                                 // 0x0150   (0x0018)  
	SDK_UNDEFINED(24,1097) /* FText */                 __um(HintText);                                             // 0x0168   (0x0018)  
	SDK_UNDEFINED(20,1098) /* FDelegateProperty */     __um(HintTextDelegate);                                     // 0x0180   (0x0014)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0194   (0x0004)  MISSED
	FEditableTextBoxStyle                              WidgetStyle;                                                // 0x0198   (0x0860)  
	FTextBlockStyle                                    TextStyle;                                                  // 0x09F8   (0x0288)  
	bool                                               bIsReadOnly;                                                // 0x0C80   (0x0001)  
	bool                                               AllowContextMenu;                                           // 0x0C81   (0x0001)  
	FVirtualKeyboardOptions                            VirtualKeyboardOptions;                                     // 0x0C82   (0x0001)  
	EVirtualKeyboardDismissAction                      VirtualKeyboardDismissAction;                               // 0x0C83   (0x0001)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0C84   (0x0004)  MISSED
	class USlateWidgetStyleAsset*                      Style;                                                      // 0x0C88   (0x0008)  
	FSlateFontInfo                                     Font;                                                       // 0x0C90   (0x0058)  
	FLinearColor                                       ForegroundColor;                                            // 0x0CE8   (0x0010)  
	FLinearColor                                       BackgroundColor;                                            // 0x0CF8   (0x0010)  
	FLinearColor                                       ReadOnlyForegroundColor;                                    // 0x0D08   (0x0010)  
	SDK_UNDEFINED(16,1099) /* FMulticastInlineDelegate */ __um(OnTextChanged);                                     // 0x0D18   (0x0010)  
	SDK_UNDEFINED(16,1100) /* FMulticastInlineDelegate */ __um(OnTextCommitted);                                   // 0x0D28   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0D38   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.MultiLineEditableTextBox.SetTextStyle
	// void SetTextStyle(FTextBlockStyle& InTextStyle);                                                                      // [0x769a890] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.SetText
	// void SetText(FText InText);                                                                                           // [0x769a7b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.SetIsReadOnly
	// void SetIsReadOnly(bool bReadOnly);                                                                                   // [0x769a350] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.SetHintText
	// void SetHintText(FText InHintText);                                                                                   // [0x769a0d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.SetError
	// void SetError(FText InError);                                                                                         // [0x7699e80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
	// void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod); // [0x61d2f50] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
	// void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(FText& Text);                                          // [0x61d2f50] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.MultiLineEditableTextBox.GetText
	// FText GetText();                                                                                                      // [0x7699a00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MultiLineEditableTextBox.GetHintText
	// FText GetHintText();                                                                                                  // [0x7699880] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.NamedSlot
/// Size: 0x0010 (0x000148 - 0x000158)
class UNamedSlot : public UContentWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0148   (0x0010)  MISSED
};

/// Class /Script/UMG.NamedSlotInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UNamedSlotInterface : public UInterface
{ 
public:
};

/// Class /Script/UMG.NativeWidgetHost
/// Size: 0x0010 (0x000130 - 0x000140)
class UNativeWidgetHost : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0130   (0x0010)  MISSED
};

/// Class /Script/UMG.Overlay
/// Size: 0x0010 (0x000148 - 0x000158)
class UOverlay : public UPanelWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0148   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.Overlay.AddChildToOverlay
	// class UOverlaySlot* AddChildToOverlay(class UWidget* Content);                                                        // [0x7699480] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.OverlaySlot
/// Size: 0x0020 (0x000040 - 0x000060)
class UOverlaySlot : public UPanelSlot
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0040   (0x0008)  MISSED
	FMargin                                            Padding;                                                    // 0x0048   (0x0010)  
	SDK_UNDEFINED(1,1101) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0058   (0x0001)  
	SDK_UNDEFINED(1,1102) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0059   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x005A   (0x0006)  MISSED


	/// Functions
	// Function /Script/UMG.OverlaySlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> inVerticalAlignment);                                       // [0x769a9e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.OverlaySlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x769a3e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.OverlaySlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> inHorizontalAlignment);                                 // [0x769a1b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ProgressBar
/// Size: 0x0230 (0x000130 - 0x000360)
class UProgressBar : public UWidget
{ 
public:
	FProgressBarStyle                                  WidgetStyle;                                                // 0x0130   (0x01B8)  
	class USlateWidgetStyleAsset*                      Style;                                                      // 0x02E8   (0x0008)  
	class USlateBrushAsset*                            BackgroundImage;                                            // 0x02F0   (0x0008)  
	class USlateBrushAsset*                            FillImage;                                                  // 0x02F8   (0x0008)  
	class USlateBrushAsset*                            MarqueeImage;                                               // 0x0300   (0x0008)  
	float                                              percent;                                                    // 0x0308   (0x0004)  
	SDK_UNDEFINED(1,1103) /* TEnumAsByte<EProgressBarFillType> */ __um(BarFillType);                               // 0x030C   (0x0001)  
	bool                                               bIsMarquee;                                                 // 0x030D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x030E   (0x0002)  MISSED
	FVector2D                                          BorderPadding;                                              // 0x0310   (0x0008)  
	SDK_UNDEFINED(20,1104) /* FDelegateProperty */     __um(PercentDelegate);                                      // 0x0318   (0x0014)  
	FLinearColor                                       FillColorAndOpacity;                                        // 0x032C   (0x0010)  
	SDK_UNDEFINED(20,1105) /* FDelegateProperty */     __um(FillColorAndOpacityDelegate);                          // 0x033C   (0x0014)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0350   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.ProgressBar.SetPercent
	// void SetPercent(float InPercent);                                                                                     // [0x769a470] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ProgressBar.SetIsMarquee
	// void SetIsMarquee(bool InbIsMarquee);                                                                                 // [0x769a230] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ProgressBar.SetFillColorAndOpacity
	// void SetFillColorAndOpacity(FLinearColor InColor);                                                                    // [0x7699f60] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/UMG.RetainerBox
/// Size: 0x0038 (0x000148 - 0x000180)
class URetainerBox : public UContentWidget
{ 
public:
	bool                                               bRetainRender;                                              // 0x0148   (0x0001)  
	bool                                               RenderOnInvalidation;                                       // 0x0149   (0x0001)  
	bool                                               RenderOnPhase;                                              // 0x014A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x014B   (0x0001)  MISSED
	int32_t                                            Phase;                                                      // 0x014C   (0x0004)  
	int32_t                                            PhaseCount;                                                 // 0x0150   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0154   (0x0004)  MISSED
	class UMaterialInterface*                          EffectMaterial;                                             // 0x0158   (0x0008)  
	FName                                              TextureParameter;                                           // 0x0160   (0x000C)  
	unsigned char                                      UnknownData02_6[0x14];                                      // 0x016C   (0x0014)  MISSED


	/// Functions
	// Function /Script/UMG.RetainerBox.SetTextureParameter
	// void SetTextureParameter(FName TextureParameter);                                                                     // [0x769a940] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.SetRetainRendering
	// void SetRetainRendering(bool bInRetainRendering);                                                                     // [0x769a640] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.SetRenderingPhase
	// void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases);                                                     // [0x769a570] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.SetEffectMaterial
	// void SetEffectMaterial(class UMaterialInterface* EffectMaterial);                                                     // [0x7699df0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.RequestRender
	// void RequestRender();                                                                                                 // [0x7699dd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.GetEffectMaterial
	// class UMaterialInstanceDynamic* GetEffectMaterial();                                                                  // [0x76997b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.SafeZone
/// Size: 0x0018 (0x000148 - 0x000160)
class USafeZone : public UContentWidget
{ 
public:
	bool                                               PadLeft;                                                    // 0x0148   (0x0001)  
	bool                                               PadRight;                                                   // 0x0149   (0x0001)  
	bool                                               PadTop;                                                     // 0x014A   (0x0001)  
	bool                                               PadBottom;                                                  // 0x014B   (0x0001)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x014C   (0x0014)  MISSED


	/// Functions
	// Function /Script/UMG.SafeZone.SetSidesToPad
	// void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);                                 // [0x769f570] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.SafeZoneSlot
/// Size: 0x0028 (0x000040 - 0x000068)
class USafeZoneSlot : public UPanelSlot
{ 
public:
	bool                                               bIsTitleSafe;                                               // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	FMargin                                            SafeAreaScale;                                              // 0x0044   (0x0010)  
	SDK_UNDEFINED(1,1106) /* TEnumAsByte<EHorizontalAlignment> */ __um(HAlign);                                    // 0x0054   (0x0001)  
	SDK_UNDEFINED(1,1107) /* TEnumAsByte<EVerticalAlignment> */ __um(VAlign);                                      // 0x0055   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0056   (0x0002)  MISSED
	FMargin                                            Padding;                                                    // 0x0058   (0x0010)  
};

/// Class /Script/UMG.ScaleBox
/// Size: 0x0020 (0x000148 - 0x000168)
class UScaleBox : public UContentWidget
{ 
public:
	SDK_UNDEFINED(1,1108) /* TEnumAsByte<EStretch> */  __um(Stretch);                                              // 0x0148   (0x0001)  
	SDK_UNDEFINED(1,1109) /* TEnumAsByte<EStretchDirection> */ __um(StretchDirection);                             // 0x0149   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x014A   (0x0002)  MISSED
	float                                              UserSpecifiedScale;                                         // 0x014C   (0x0004)  
	bool                                               IgnoreInheritedScale;                                       // 0x0150   (0x0001)  
	unsigned char                                      UnknownData01_6[0x17];                                      // 0x0151   (0x0017)  MISSED


	/// Functions
	// Function /Script/UMG.ScaleBox.SetUserSpecifiedScale
	// void SetUserSpecifiedScale(float InUserSpecifiedScale);                                                               // [0x769faa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBox.SetStretchDirection
	// void SetStretchDirection(TEnumAsByte<EStretchDirection> InStretchDirection);                                          // [0x769f840] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBox.SetStretch
	// void SetStretch(TEnumAsByte<EStretch> InStretch);                                                                     // [0x769f7c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBox.SetIgnoreInheritedScale
	// void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);                                                           // [0x769ec80] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ScaleBoxSlot
/// Size: 0x0028 (0x000040 - 0x000068)
class UScaleBoxSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0040   (0x0010)  
	SDK_UNDEFINED(1,1110) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0050   (0x0001)  
	SDK_UNDEFINED(1,1111) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x0052   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.ScaleBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> inVerticalAlignment);                                       // [0x768e290] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x769f110] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> inHorizontalAlignment);                                 // [0x768d3e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ScrollBar
/// Size: 0x0550 (0x000130 - 0x000680)
class UScrollBar : public UWidget
{ 
public:
	FScrollBarStyle                                    WidgetStyle;                                                // 0x0130   (0x0518)  
	class USlateWidgetStyleAsset*                      Style;                                                      // 0x0648   (0x0008)  
	bool                                               bAlwaysShowScrollbar;                                       // 0x0650   (0x0001)  
	bool                                               bAlwaysShowScrollbarTrack;                                  // 0x0651   (0x0001)  
	SDK_UNDEFINED(1,1112) /* TEnumAsByte<EOrientation> */ __um(Orientation);                                       // 0x0652   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0653   (0x0001)  MISSED
	FVector2D                                          Thickness;                                                  // 0x0654   (0x0008)  
	FMargin                                            Padding;                                                    // 0x065C   (0x0010)  
	unsigned char                                      UnknownData01_6[0x14];                                      // 0x066C   (0x0014)  MISSED


	/// Functions
	// Function /Script/UMG.ScrollBar.SetState
	// void SetState(float InOffsetFraction, float InThumbSizeFraction);                                                     // [0x769f6f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ScrollBoxSlot
/// Size: 0x0020 (0x000040 - 0x000060)
class UScrollBoxSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0040   (0x0010)  
	SDK_UNDEFINED(1,1113) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0050   (0x0001)  
	SDK_UNDEFINED(1,1114) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_6[0xE];                                       // 0x0052   (0x000E)  MISSED


	/// Functions
	// Function /Script/UMG.ScrollBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> inVerticalAlignment);                                       // [0x769fb20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x769f1a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> inHorizontalAlignment);                                 // [0x769eb80] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.SizeBox
/// Size: 0x0038 (0x000148 - 0x000180)
class USizeBox : public UContentWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0148   (0x0010)  MISSED
	float                                              WidthOverride;                                              // 0x0158   (0x0004)  
	float                                              HeightOverride;                                             // 0x015C   (0x0004)  
	float                                              MinDesiredWidth;                                            // 0x0160   (0x0004)  
	float                                              MinDesiredHeight;                                           // 0x0164   (0x0004)  
	float                                              MaxDesiredWidth;                                            // 0x0168   (0x0004)  
	float                                              MaxDesiredHeight;                                           // 0x016C   (0x0004)  
	float                                              MinAspectRatio;                                             // 0x0170   (0x0004)  
	float                                              MaxAspectRatio;                                             // 0x0174   (0x0004)  
	bool                                               bOverride_WidthOverride : 1;                                // 0x0178:0 (0x0001)  
	bool                                               bOverride_HeightOverride : 1;                               // 0x0178:1 (0x0001)  
	bool                                               bOverride_MinDesiredWidth : 1;                              // 0x0178:2 (0x0001)  
	bool                                               bOverride_MinDesiredHeight : 1;                             // 0x0178:3 (0x0001)  
	bool                                               bOverride_MaxDesiredWidth : 1;                              // 0x0178:4 (0x0001)  
	bool                                               bOverride_MaxDesiredHeight : 1;                             // 0x0178:5 (0x0001)  
	bool                                               bOverride_MinAspectRatio : 1;                               // 0x0178:6 (0x0001)  
	bool                                               bOverride_MaxAspectRatio : 1;                               // 0x0178:7 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0179   (0x0007)  MISSED


	/// Functions
	// Function /Script/UMG.SizeBox.SetWidthOverride
	// void SetWidthOverride(float InWidthOverride);                                                                         // [0x769fca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMinDesiredWidth
	// void SetMinDesiredWidth(float InMinDesiredWidth);                                                                     // [0x769f010] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMinDesiredHeight
	// void SetMinDesiredHeight(float InMinDesiredHeight);                                                                   // [0x769ef10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMinAspectRatio
	// void SetMinAspectRatio(float InMinAspectRatio);                                                                       // [0x769ee90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMaxDesiredWidth
	// void SetMaxDesiredWidth(float InMaxDesiredWidth);                                                                     // [0x769ee10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMaxDesiredHeight
	// void SetMaxDesiredHeight(float InMaxDesiredHeight);                                                                   // [0x769ed90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMaxAspectRatio
	// void SetMaxAspectRatio(float InMaxAspectRatio);                                                                       // [0x769ed10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetHeightOverride
	// void SetHeightOverride(float InHeightOverride);                                                                       // [0x769eb00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearWidthOverride
	// void ClearWidthOverride();                                                                                            // [0x769d360] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMinDesiredWidth
	// void ClearMinDesiredWidth();                                                                                          // [0x769d340] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMinDesiredHeight
	// void ClearMinDesiredHeight();                                                                                         // [0x769d320] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMinAspectRatio
	// void ClearMinAspectRatio();                                                                                           // [0x769d300] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMaxDesiredWidth
	// void ClearMaxDesiredWidth();                                                                                          // [0x769d2e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMaxDesiredHeight
	// void ClearMaxDesiredHeight();                                                                                         // [0x769d2c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMaxAspectRatio
	// void ClearMaxAspectRatio();                                                                                           // [0x769d2a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearHeightOverride
	// void ClearHeightOverride();                                                                                           // [0x769d280] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.SizeBoxSlot
/// Size: 0x0028 (0x000040 - 0x000068)
class USizeBoxSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0050   (0x0010)  MISSED
	SDK_UNDEFINED(1,1115) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0060   (0x0001)  
	SDK_UNDEFINED(1,1116) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0061   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0062   (0x0006)  MISSED


	/// Functions
	// Function /Script/UMG.SizeBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> inVerticalAlignment);                                       // [0x769fba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x769f230] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> inHorizontalAlignment);                                 // [0x769ec00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.SlateBlueprintLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute
	// FVector2D TransformVectorLocalToAbsolute(FGeometry& Geometry, FVector2D LocalVector);                                 // [0x76a0020] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal
	// FVector2D TransformVectorAbsoluteToLocal(FGeometry& Geometry, FVector2D AbsoluteVector);                              // [0x769ff20] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute
	// float TransformScalarLocalToAbsolute(FGeometry& Geometry, float LocalScalar);                                         // [0x769fe20] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal
	// float TransformScalarAbsoluteToLocal(FGeometry& Geometry, float AbsoluteScalar);                                      // [0x769fd20] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
	// void ScreenToWidgetLocal(class UObject* WorldContextObject, FGeometry& Geometry, FVector2D ScreenPosition, FVector2D& LocalCoordinate, bool bIncludeWindowPosition); // [0x769dfe0] Final|Native|Static|Public|HasOutParms|HasDefaults 
	// Function /Script/UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
	// void ScreenToWidgetAbsolute(class UObject* WorldContextObject, FVector2D ScreenPosition, FVector2D& AbsoluteCoordinate, bool bIncludeWindowPosition); // [0x769de80] Final|Native|Static|Public|HasOutParms|HasDefaults 
	// Function /Script/UMG.SlateBlueprintLibrary.ScreenToViewport
	// void ScreenToViewport(class UObject* WorldContextObject, FVector2D ScreenPosition, FVector2D& ViewportPosition);      // [0x769dd80] Final|Native|Static|Public|HasOutParms|HasDefaults 
	// Function /Script/UMG.SlateBlueprintLibrary.LocalToViewport
	// void LocalToViewport(class UObject* WorldContextObject, FGeometry& Geometry, FVector2D LocalCoordinate, FVector2D& PixelPosition, FVector2D& ViewportPosition); // [0x769db90] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.LocalToAbsolute
	// FVector2D LocalToAbsolute(FGeometry& Geometry, FVector2D LocalCoordinate);                                            // [0x769da90] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.IsUnderLocation
	// bool IsUnderLocation(FGeometry& Geometry, FVector2D& AbsoluteCoordinate);                                             // [0x769d990] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.GetLocalTopLeft
	// FVector2D GetLocalTopLeft(FGeometry& Geometry);                                                                       // [0x769d7a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.GetLocalSize
	// FVector2D GetLocalSize(FGeometry& Geometry);                                                                          // [0x769d6e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.GetAbsoluteSize
	// FVector2D GetAbsoluteSize(FGeometry& Geometry);                                                                       // [0x769d580] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
	// bool EqualEqual_SlateBrush(FSlateBrush& A, FSlateBrush& B);                                                           // [0x769d3a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.AbsoluteToViewport
	// void AbsoluteToViewport(class UObject* WorldContextObject, FVector2D AbsoluteDesktopCoordinate, FVector2D& PixelPosition, FVector2D& ViewportPosition); // [0x769d100] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.AbsoluteToLocal
	// FVector2D AbsoluteToLocal(FGeometry& Geometry, FVector2D AbsoluteCoordinate);                                         // [0x769d000] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/UMG.SlateMeshVertex
/// Size: 0x003C (0x000000 - 0x00003C)
struct FSlateMeshVertex
{ 
	FVector2D                                          position;                                                   // 0x0000   (0x0008)  
	FColor                                             Color;                                                      // 0x0008   (0x0004)  
	FVector2D                                          UV0;                                                        // 0x000C   (0x0008)  
	FVector2D                                          UV1;                                                        // 0x0014   (0x0008)  
	FVector2D                                          UV2;                                                        // 0x001C   (0x0008)  
	FVector2D                                          UV3;                                                        // 0x0024   (0x0008)  
	FVector2D                                          UV4;                                                        // 0x002C   (0x0008)  
	FVector2D                                          UV5;                                                        // 0x0034   (0x0008)  
};

/// Class /Script/UMG.SlateVectorArtData
/// Size: 0x0038 (0x000030 - 0x000068)
class USlateVectorArtData : public UObject
{ 
public:
	TArray<FSlateMeshVertex>                           VertexData;                                                 // 0x0030   (0x0010)  
	TArray<uint32_t>                                   IndexData;                                                  // 0x0040   (0x0010)  
	class UMaterialInterface*                          Material;                                                   // 0x0050   (0x0008)  
	FVector2D                                          ExtentMin;                                                  // 0x0058   (0x0008)  
	FVector2D                                          ExtentMax;                                                  // 0x0060   (0x0008)  
};

/// Class /Script/UMG.SlateAccessibleWidgetData
/// Size: 0x0068 (0x000030 - 0x000098)
class USlateAccessibleWidgetData : public UObject
{ 
public:
	bool                                               bCanChildrenBeAccessible;                                   // 0x0030   (0x0001)  
	ESlateAccessibleBehavior                           AccessibleBehavior;                                         // 0x0031   (0x0001)  
	ESlateAccessibleBehavior                           AccessibleSummaryBehavior;                                  // 0x0032   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0033   (0x0005)  MISSED
	SDK_UNDEFINED(24,1117) /* FText */                 __um(AccessibleText);                                       // 0x0038   (0x0018)  
	SDK_UNDEFINED(20,1118) /* FDelegateProperty */     __um(AccessibleTextDelegate);                               // 0x0050   (0x0014)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0064   (0x0004)  MISSED
	SDK_UNDEFINED(24,1119) /* FText */                 __um(AccessibleSummaryText);                                // 0x0068   (0x0018)  
	SDK_UNDEFINED(20,1120) /* FDelegateProperty */     __um(AccessibleSummaryTextDelegate);                        // 0x0080   (0x0014)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0094   (0x0004)  MISSED
};

/// Class /Script/UMG.Slider
/// Size: 0x0420 (0x000130 - 0x000550)
class USlider : public UWidget
{ 
public:
	float                                              value;                                                      // 0x0130   (0x0004)  
	SDK_UNDEFINED(20,1121) /* FDelegateProperty */     __um(ValueDelegate);                                        // 0x0134   (0x0014)  
	float                                              MinValue;                                                   // 0x0148   (0x0004)  
	float                                              MaxValue;                                                   // 0x014C   (0x0004)  
	FSliderStyle                                       WidgetStyle;                                                // 0x0150   (0x0370)  
	SDK_UNDEFINED(1,1122) /* TEnumAsByte<EOrientation> */ __um(Orientation);                                       // 0x04C0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x04C1   (0x0003)  MISSED
	FLinearColor                                       SliderBarColor;                                             // 0x04C4   (0x0010)  
	FLinearColor                                       SliderHandleColor;                                          // 0x04D4   (0x0010)  
	bool                                               IndentHandle;                                               // 0x04E4   (0x0001)  
	bool                                               locked;                                                     // 0x04E5   (0x0001)  
	bool                                               MouseUsesStep;                                              // 0x04E6   (0x0001)  
	bool                                               RequiresControllerLock;                                     // 0x04E7   (0x0001)  
	float                                              StepSize;                                                   // 0x04E8   (0x0004)  
	bool                                               IsFocusable;                                                // 0x04EC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x04ED   (0x0003)  MISSED
	SDK_UNDEFINED(16,1123) /* FMulticastInlineDelegate */ __um(OnMouseCaptureBegin);                               // 0x04F0   (0x0010)  
	SDK_UNDEFINED(16,1124) /* FMulticastInlineDelegate */ __um(OnMouseCaptureEnd);                                 // 0x0500   (0x0010)  
	SDK_UNDEFINED(16,1125) /* FMulticastInlineDelegate */ __um(OnControllerCaptureBegin);                          // 0x0510   (0x0010)  
	SDK_UNDEFINED(16,1126) /* FMulticastInlineDelegate */ __um(OnControllerCaptureEnd);                            // 0x0520   (0x0010)  
	SDK_UNDEFINED(16,1127) /* FMulticastInlineDelegate */ __um(OnValueChanged);                                    // 0x0530   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0540   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.Slider.SetValue
	// void SetValue(float InValue);                                                                                         // [0x76a3bb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetStepSize
	// void SetStepSize(float InValue);                                                                                      // [0x76a38c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetSliderHandleColor
	// void SetSliderHandleColor(FLinearColor InValue);                                                                      // [0x76a3830] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Slider.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                         // [0x76a37a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Slider.SetMinValue
	// void SetMinValue(float InValue);                                                                                      // [0x76a3400] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetMaxValue
	// void SetMaxValue(float InValue);                                                                                      // [0x76a3170] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetLocked
	// void SetLocked(bool InValue);                                                                                         // [0x76a2fd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetIndentHandle
	// void SetIndentHandle(bool InValue);                                                                                   // [0x76a2ec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.GetValue
	// float GetValue();                                                                                                     // [0x76a2710] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Slider.GetNormalizedValue
	// float GetNormalizedValue();                                                                                           // [0x76a2520] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.Spacer
/// Size: 0x0018 (0x000130 - 0x000148)
class USpacer : public UWidget
{ 
public:
	FVector2D                                          Size;                                                       // 0x0130   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0138   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.Spacer.SetSize
	// void SetSize(FVector2D InSize);                                                                                       // [0x76a3720] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/UMG.SpinBox
/// Size: 0x0440 (0x000130 - 0x000570)
class USpinBox : public UWidget
{ 
public:
	float                                              value;                                                      // 0x0130   (0x0004)  
	SDK_UNDEFINED(20,1128) /* FDelegateProperty */     __um(ValueDelegate);                                        // 0x0134   (0x0014)  
	FSpinBoxStyle                                      WidgetStyle;                                                // 0x0148   (0x0310)  
	class USlateWidgetStyleAsset*                      Style;                                                      // 0x0458   (0x0008)  
	int32_t                                            MinFractionalDigits;                                        // 0x0460   (0x0004)  
	int32_t                                            MaxFractionalDigits;                                        // 0x0464   (0x0004)  
	bool                                               bAlwaysUsesDeltaSnap;                                       // 0x0468   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0469   (0x0003)  MISSED
	float                                              Delta;                                                      // 0x046C   (0x0004)  
	float                                              SliderExponent;                                             // 0x0470   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0474   (0x0004)  MISSED
	FSlateFontInfo                                     Font;                                                       // 0x0478   (0x0058)  
	SDK_UNDEFINED(1,1129) /* TEnumAsByte<ETextJustify> */ __um(Justification);                                     // 0x04D0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x04D1   (0x0003)  MISSED
	float                                              MinDesiredWidth;                                            // 0x04D4   (0x0004)  
	bool                                               ClearKeyboardFocusOnCommit;                                 // 0x04D8   (0x0001)  
	bool                                               SelectAllTextOnCommit;                                      // 0x04D9   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x04DA   (0x0006)  MISSED
	FSlateColor                                        ForegroundColor;                                            // 0x04E0   (0x0028)  
	SDK_UNDEFINED(16,1130) /* FMulticastInlineDelegate */ __um(OnValueChanged);                                    // 0x0508   (0x0010)  
	SDK_UNDEFINED(16,1131) /* FMulticastInlineDelegate */ __um(OnValueCommitted);                                  // 0x0518   (0x0010)  
	SDK_UNDEFINED(16,1132) /* FMulticastInlineDelegate */ __um(OnBeginSliderMovement);                             // 0x0528   (0x0010)  
	SDK_UNDEFINED(16,1133) /* FMulticastInlineDelegate */ __um(OnEndSliderMovement);                               // 0x0538   (0x0010)  
	bool                                               bOverride_MinValue : 1;                                     // 0x0548:0 (0x0001)  
	bool                                               bOverride_MaxValue : 1;                                     // 0x0548:1 (0x0001)  
	bool                                               bOverride_MinSliderValue : 1;                               // 0x0548:2 (0x0001)  
	bool                                               bOverride_MaxSliderValue : 1;                               // 0x0548:3 (0x0001)  
	unsigned char                                      UnknownData04_4[0x3];                                       // 0x0549   (0x0003)  MISSED
	float                                              MinValue;                                                   // 0x054C   (0x0004)  
	float                                              MaxValue;                                                   // 0x0550   (0x0004)  
	float                                              MinSliderValue;                                             // 0x0554   (0x0004)  
	float                                              MaxSliderValue;                                             // 0x0558   (0x0004)  
	unsigned char                                      UnknownData05_6[0x14];                                      // 0x055C   (0x0014)  MISSED


	/// Functions
	// Function /Script/UMG.SpinBox.SetValue
	// void SetValue(float NewValue);                                                                                        // [0x76a3c30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMinValue
	// void SetMinValue(float NewValue);                                                                                     // [0x76a3480] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMinSliderValue
	// void SetMinSliderValue(float NewValue);                                                                               // [0x76a3380] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMinFractionalDigits
	// void SetMinFractionalDigits(int32_t NewValue);                                                                        // [0x76a32f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMaxValue
	// void SetMaxValue(float NewValue);                                                                                     // [0x76a31f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMaxSliderValue
	// void SetMaxSliderValue(float NewValue);                                                                               // [0x76a30f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMaxFractionalDigits
	// void SetMaxFractionalDigits(int32_t NewValue);                                                                        // [0x76a3060] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetForegroundColor
	// void SetForegroundColor(FSlateColor InForegroundColor);                                                               // [0x76a2dd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetDelta
	// void SetDelta(float NewValue);                                                                                        // [0x76a2b30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetAlwaysUsesDeltaSnap
	// void SetAlwaysUsesDeltaSnap(bool bNewValue);                                                                          // [0x76a2770] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
	// void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod);           // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
	// void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);                                                    // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
	// void OnSpinBoxBeginSliderMovement__DelegateSignature();                                                               // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.SpinBox.GetValue
	// float GetValue();                                                                                                     // [0x76a2740] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMinValue
	// float GetMinValue();                                                                                                  // [0x76a24f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMinSliderValue
	// float GetMinSliderValue();                                                                                            // [0x76a24c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMinFractionalDigits
	// int32_t GetMinFractionalDigits();                                                                                     // [0x76a2490] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMaxValue
	// float GetMaxValue();                                                                                                  // [0x76a2460] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMaxSliderValue
	// float GetMaxSliderValue();                                                                                            // [0x76a2430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMaxFractionalDigits
	// int32_t GetMaxFractionalDigits();                                                                                     // [0x76a2400] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetDelta
	// float GetDelta();                                                                                                     // [0x76a2350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetAlwaysUsesDeltaSnap
	// bool GetAlwaysUsesDeltaSnap();                                                                                        // [0x76a2320] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.ClearMinValue
	// void ClearMinValue();                                                                                                 // [0x76a2300] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.ClearMinSliderValue
	// void ClearMinSliderValue();                                                                                           // [0x76a22e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.ClearMaxValue
	// void ClearMaxValue();                                                                                                 // [0x76a22c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.ClearMaxSliderValue
	// void ClearMaxSliderValue();                                                                                           // [0x76a22a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.TextBinding
/// Size: 0x0008 (0x000070 - 0x000078)
class UTextBinding : public UPropertyBinding
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED


	/// Functions
	// Function /Script/UMG.TextBinding.GetTextValue
	// FText GetTextValue();                                                                                                 // [0x76a2670] Final|Native|Public|Const 
	// Function /Script/UMG.TextBinding.GetStringValue
	// FString GetStringValue();                                                                                             // [0x76a2550] Final|Native|Public|Const 
};

/// Class /Script/UMG.Throbber
/// Size: 0x00B0 (0x000130 - 0x0001E0)
class UThrobber : public UWidget
{ 
public:
	int32_t                                            NumberOfPieces;                                             // 0x0130   (0x0004)  
	bool                                               bAnimateHorizontally;                                       // 0x0134   (0x0001)  
	bool                                               bAnimateVertically;                                         // 0x0135   (0x0001)  
	bool                                               bAnimateOpacity;                                            // 0x0136   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0137   (0x0001)  MISSED
	class USlateBrushAsset*                            PieceImage;                                                 // 0x0138   (0x0008)  
	FSlateBrush                                        Image;                                                      // 0x0140   (0x0090)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x01D0   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.Throbber.SetNumberOfPieces
	// void SetNumberOfPieces(int32_t InNumberOfPieces);                                                                     // [0x76a3500] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Throbber.SetAnimateVertically
	// void SetAnimateVertically(bool bInAnimateVertically);                                                                 // [0x76a2920] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Throbber.SetAnimateOpacity
	// void SetAnimateOpacity(bool bInAnimateOpacity);                                                                       // [0x76a2890] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Throbber.SetAnimateHorizontally
	// void SetAnimateHorizontally(bool bInAnimateHorizontally);                                                             // [0x76a2800] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.TileView
/// Size: 0x0020 (0x000390 - 0x0003B0)
class UTileView : public UListView
{ 
public:
	float                                              EntryHeight;                                                // 0x0390   (0x0004)  
	float                                              EntryWidth;                                                 // 0x0394   (0x0004)  
	EListItemAlignment                                 TileAlignment;                                              // 0x0398   (0x0001)  
	bool                                               bWrapHorizontalNavigation;                                  // 0x0399   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x039A   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.TileView.SetEntryWidth
	// void SetEntryWidth(float NewWidth);                                                                                   // [0x76a2c30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TileView.SetEntryHeight
	// void SetEntryHeight(float NewHeight);                                                                                 // [0x76a2bb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TileView.GetEntryWidth
	// float GetEntryWidth();                                                                                                // [0x76a23e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.TileView.GetEntryHeight
	// float GetEntryHeight();                                                                                               // [0x58cbc20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.TreeView
/// Size: 0x0060 (0x000390 - 0x0003F0)
class UTreeView : public UListView
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0390   (0x0010)  MISSED
	SDK_UNDEFINED(20,1134) /* FDelegateProperty */     __um(BP_OnGetItemChildren);                                 // 0x03A0   (0x0014)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x03B4   (0x0004)  MISSED
	SDK_UNDEFINED(16,1135) /* FMulticastInlineDelegate */ __um(BP_OnItemExpansionChanged);                         // 0x03B8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x28];                                      // 0x03C8   (0x0028)  MISSED


	/// Functions
	// Function /Script/UMG.TreeView.SetItemExpansion
	// void SetItemExpansion(class UObject* Item, bool bExpandItem);                                                         // [0x76aa2e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TreeView.ExpandAll
	// void ExpandAll();                                                                                                     // [0x76a8d80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TreeView.CollapseAll
	// void CollapseAll();                                                                                                   // [0x76a8d60] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.UMGSequencePlayer
/// Size: 0x03A8 (0x000030 - 0x0003D8)
class UUMGSequencePlayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x238];                                     // 0x0030   (0x0238)  MISSED
	class UWidgetAnimation*                            Animation;                                                  // 0x0268   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0270   (0x0008)  MISSED
	FMovieSceneRootEvaluationTemplateInstance          RootTemplateInstance;                                       // 0x0278   (0x00E8)  
	unsigned char                                      UnknownData02_6[0x78];                                      // 0x0360   (0x0078)  MISSED


	/// Functions
	// Function /Script/UMG.UMGSequencePlayer.SetUserTag
	// void SetUserTag(FName InUserTag);                                                                                     // [0x76aa960] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UMGSequencePlayer.GetUserTag
	// FName GetUserTag();                                                                                                   // [0x76a8f70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.UMGSequenceTickManager
/// Size: 0x00F8 (0x000030 - 0x000128)
class UUMGSequenceTickManager : public UObject
{ 
public:
	SDK_UNDEFINED(80,1136) /* TSet<TWeakObjectPtr<UUserWidget*>> */ __um(WeakUserWidgets);                         // 0x0030   (0x0050)  
	class UMovieSceneEntitySystemLinker*               Linker;                                                     // 0x0080   (0x0008)  
	unsigned char                                      UnknownData00_6[0xA0];                                      // 0x0088   (0x00A0)  MISSED
};

/// Class /Script/UMG.UniformGridPanel
/// Size: 0x0028 (0x000148 - 0x000170)
class UUniformGridPanel : public UPanelWidget
{ 
public:
	FMargin                                            SlotPadding;                                                // 0x0148   (0x0010)  
	float                                              MinDesiredSlotWidth;                                        // 0x0158   (0x0004)  
	float                                              MinDesiredSlotHeight;                                       // 0x015C   (0x0004)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0160   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.UniformGridPanel.SetSlotPadding
	// void SetSlotPadding(FMargin InSlotPadding);                                                                           // [0x76aa8d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridPanel.SetMinDesiredSlotWidth
	// void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);                                                             // [0x76aa430] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridPanel.SetMinDesiredSlotHeight
	// void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);                                                           // [0x76aa3b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridPanel.AddChildToUniformGrid
	// class UUniformGridSlot* AddChildToUniformGrid(class UWidget* Content, int32_t InRow, int32_t InColumn);               // [0x76a87a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.UniformGridSlot
/// Size: 0x0018 (0x000040 - 0x000058)
class UUniformGridSlot : public UPanelSlot
{ 
public:
	SDK_UNDEFINED(1,1137) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0040   (0x0001)  
	SDK_UNDEFINED(1,1138) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0041   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0042   (0x0002)  MISSED
	int32_t                                            row;                                                        // 0x0044   (0x0004)  
	int32_t                                            Column;                                                     // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x004C   (0x000C)  MISSED


	/// Functions
	// Function /Script/UMG.UniformGridSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> inVerticalAlignment);                                       // [0x76aaa00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridSlot.SetRow
	// void SetRow(int32_t InRow);                                                                                           // [0x76aa840] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> inHorizontalAlignment);                                 // [0x76aa140] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridSlot.SetColumn
	// void SetColumn(int32_t InColumn);                                                                                     // [0x76a9f40] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.VerticalBox
/// Size: 0x0010 (0x000148 - 0x000158)
class UVerticalBox : public UPanelWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0148   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.VerticalBox.AddChildToVerticalBox
	// class UVerticalBoxSlot* AddChildToVerticalBox(class UWidget* Content);                                                // [0x76acc60] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.VerticalBoxSlot
/// Size: 0x0028 (0x000040 - 0x000068)
class UVerticalBoxSlot : public UPanelSlot
{ 
public:
	FSlateChildSize                                    Size;                                                       // 0x0040   (0x0008)  
	FMargin                                            Padding;                                                    // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0058   (0x0008)  MISSED
	SDK_UNDEFINED(1,1139) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0060   (0x0001)  
	SDK_UNDEFINED(1,1140) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0061   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0062   (0x0006)  MISSED


	/// Functions
	// Function /Script/UMG.VerticalBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> inVerticalAlignment);                                       // [0x76ae790] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.VerticalBoxSlot.SetSize
	// void SetSize(FSlateChildSize InSize);                                                                                 // [0x76ae510] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.VerticalBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x76ae020] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.VerticalBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> inHorizontalAlignment);                                 // [0x76ada40] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.Viewport
/// Size: 0x0048 (0x000148 - 0x000190)
class UViewport : public UContentWidget
{ 
public:
	FLinearColor                                       BackgroundColor;                                            // 0x0148   (0x0010)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0158   (0x0038)  MISSED


	/// Functions
	// Function /Script/UMG.Viewport.Spawn
	// class AActor* Spawn(class UClass* ActorClass);                                                                        // [0x76ae9b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Viewport.SetViewRotation
	// void SetViewRotation(FRotator Rotation);                                                                              // [0x76ae8a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Viewport.SetViewLocation
	// void SetViewLocation(FVector Location);                                                                               // [0x76ae810] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Viewport.GetViewRotation
	// FRotator GetViewRotation();                                                                                           // [0x76ad450] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Viewport.GetViewportWorld
	// class UWorld* GetViewportWorld();                                                                                     // [0x76ad490] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Viewport.GetViewLocation
	// FVector GetViewLocation();                                                                                            // [0x76ad410] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.VisibilityBinding
/// Size: 0x0000 (0x000070 - 0x000070)
class UVisibilityBinding : public UPropertyBinding
{ 
public:


	/// Functions
	// Function /Script/UMG.VisibilityBinding.GetValue
	// ESlateVisibility GetValue();                                                                                          // [0x76ad3e0] Final|Native|Public|Const 
};

/// Struct /Script/UMG.WidgetAnimationBinding
/// Size: 0x002C (0x000000 - 0x00002C)
struct FWidgetAnimationBinding
{ 
	FName                                              WidgetName;                                                 // 0x0000   (0x000C)  
	FName                                              SlotWidgetName;                                             // 0x000C   (0x000C)  
	FGuid                                              AnimationGuid;                                              // 0x0018   (0x0010)  
	bool                                               bIsRootWidget;                                              // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
};

/// Class /Script/UMG.WidgetAnimation
/// Size: 0x0030 (0x000068 - 0x000098)
class UWidgetAnimation : public UMovieSceneSequence
{ 
public:
	class UMovieScene*                                 MovieScene;                                                 // 0x0068   (0x0008)  
	TArray<FWidgetAnimationBinding>                    AnimationBindings;                                          // 0x0070   (0x0010)  
	bool                                               bLegacyFinishOnStop;                                        // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0081   (0x0007)  MISSED
	SDK_UNDEFINED(16,1141) /* FString */               __um(DisplayLabel);                                         // 0x0088   (0x0010)  


	/// Functions
	// Function /Script/UMG.WidgetAnimation.UnbindFromAnimationStarted
	// void UnbindFromAnimationStarted(class UUserWidget* Widget, FDelegateProperty Delegate);                               // [0x76aec60] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimation.UnbindFromAnimationFinished
	// void UnbindFromAnimationFinished(class UUserWidget* Widget, FDelegateProperty Delegate);                              // [0x76aeb70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimation.UnbindAllFromAnimationStarted
	// void UnbindAllFromAnimationStarted(class UUserWidget* Widget);                                                        // [0x76aeae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimation.UnbindAllFromAnimationFinished
	// void UnbindAllFromAnimationFinished(class UUserWidget* Widget);                                                       // [0x76aea50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimation.GetStartTime
	// float GetStartTime();                                                                                                 // [0x76ad370] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetAnimation.GetEndTime
	// float GetEndTime();                                                                                                   // [0x76ad180] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetAnimation.BindToAnimationStarted
	// void BindToAnimationStarted(class UUserWidget* Widget, FDelegateProperty Delegate);                                   // [0x76acdf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimation.BindToAnimationFinished
	// void BindToAnimationFinished(class UUserWidget* Widget, FDelegateProperty Delegate);                                  // [0x76acd00] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/UMG.BlueprintWidgetAnimationDelegateBinding
/// Size: 0x0028 (0x000000 - 0x000028)
struct FBlueprintWidgetAnimationDelegateBinding
{ 
	EWidgetAnimationEvent                              Action;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              AnimationToBind;                                            // 0x0004   (0x000C)  
	FName                                              FunctionNameToBind;                                         // 0x0010   (0x000C)  
	FName                                              UserTag;                                                    // 0x001C   (0x000C)  
};

/// Class /Script/UMG.WidgetAnimationDelegateBinding
/// Size: 0x0010 (0x000030 - 0x000040)
class UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding
{ 
public:
	TArray<FBlueprintWidgetAnimationDelegateBinding>   WidgetAnimationDelegateBindings;                            // 0x0030   (0x0010)  
};

/// Class /Script/UMG.WidgetAnimationPlayCallbackProxy
/// Size: 0x0020 (0x000030 - 0x000050)
class UWidgetAnimationPlayCallbackProxy : public UObject
{ 
public:
	SDK_UNDEFINED(16,1142) /* FMulticastInlineDelegate */ __um(Finished);                                          // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0040   (0x0010)  MISSED


	/// Functions
	// Function /Script/UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject
	// class UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(class UUMGSequencePlayer*& Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed); // [0x76b1b60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject
	// class UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(class UUMGSequencePlayer*& Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed); // [0x76b1940] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UMG.WidgetBinding
/// Size: 0x0000 (0x000070 - 0x000070)
class UWidgetBinding : public UPropertyBinding
{ 
public:


	/// Functions
	// Function /Script/UMG.WidgetBinding.GetValue
	// class UWidget* GetValue();                                                                                            // [0x76b3dc0] Final|Native|Public|Const 
};

/// Struct /Script/UMG.DelegateRuntimeBinding
/// Size: 0x0058 (0x000000 - 0x000058)
struct FDelegateRuntimeBinding
{ 
	SDK_UNDEFINED(16,1143) /* FString */               __um(ObjectName);                                           // 0x0000   (0x0010)  
	FName                                              PropertyName;                                               // 0x0010   (0x000C)  
	FName                                              FunctionName;                                               // 0x001C   (0x000C)  
	FDynamicPropertyPath                               SourcePath;                                                 // 0x0028   (0x0028)  
	EBindingKind                                       Kind;                                                       // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Class /Script/UMG.WidgetBlueprintGeneratedClass
/// Size: 0x0040 (0x000338 - 0x000378)
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{ 
public:
	class UWidgetTree*                                 WidgetTree;                                                 // 0x0338   (0x0008)  
	bool                                               bClassRequiresNativeTick : 1;                               // 0x0340:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0341   (0x0007)  MISSED
	TArray<FDelegateRuntimeBinding>                    Bindings;                                                   // 0x0348   (0x0010)  
	TArray<class UWidgetAnimation*>                    Animations;                                                 // 0x0358   (0x0010)  
	TArray<FName>                                      NamedSlots;                                                 // 0x0368   (0x0010)  
};

/// Class /Script/UMG.WidgetBlueprintLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/UMG.WidgetBlueprintLibrary.UnlockMouse
	// FEventReply UnlockMouse(FEventReply& Reply);                                                                          // [0x76b5db0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.Unhandled
	// FEventReply Unhandled();                                                                                              // [0x76b5d40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetWindowTitleBarState
	// void SetWindowTitleBarState(class UWidget* TitleBarContent, EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible); // [0x76b5b20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate
	// void SetWindowTitleBarOnCloseClickedDelegate(FDelegateProperty Delegate);                                             // [0x76b5a80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive
	// void SetWindowTitleBarCloseButtonActive(bool bActive);                                                                // [0x76b5a00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetUserFocus
	// FEventReply SetUserFocus(FEventReply& Reply, class UWidget* FocusWidget, bool bInAllUsers);                           // [0x76b13e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetMousePosition
	// FEventReply SetMousePosition(FEventReply& Reply, FVector2D NewMousePosition);                                         // [0x76b5360] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
	// void SetInputMode_UIOnlyEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode); // [0x76b51d0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly
	// void SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport); // [0x76b50d0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
	// void SetInputMode_GameOnly(class APlayerController* PlayerController);                                                // [0x76b5050] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
	// void SetInputMode_GameAndUIEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture); // [0x76b4f00] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI
	// void SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture); // [0x76b4da0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetHardwareCursor
	// bool SetHardwareCursor(class UObject* WorldContextObject, TEnumAsByte<EMouseCursor> CursorShape, FName CursorName, FVector2D HotSpot); // [0x76b4c40] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
	// void SetFocusToGameViewport();                                                                                        // [0x76b4ba0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType
	// void SetColorVisionDeficiencyType(EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency); // [0x76b48b0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
	// void SetBrushResourceToTexture(FSlateBrush& Brush, class UTexture2D* Texture);                                        // [0x76b4760] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
	// void SetBrushResourceToMaterial(FSlateBrush& Brush, class UMaterialInterface* Material);                              // [0x76b4760] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState
	// void RestorePreviousWindowTitleBarState();                                                                            // [0x76b46b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
	// FEventReply ReleaseMouseCapture(FEventReply& Reply);                                                                  // [0x76b4580] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
	// FEventReply ReleaseJoystickCapture(FEventReply& Reply, bool bInAllJoysticks);                                         // [0x76b1680] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature
	// void OnGameWindowCloseButtonClickedDelegate__DelegateSignature();                                                     // [0x61d2f50] Public|Delegate      
	// Function /Script/UMG.WidgetBlueprintLibrary.NoResourceBrush
	// FSlateBrush NoResourceBrush();                                                                                        // [0x76b44d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
	// FSlateBrush MakeBrushFromTexture(class UTexture2D* Texture, int32_t Width, int32_t Height);                           // [0x76b4330] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
	// FSlateBrush MakeBrushFromMaterial(class UMaterialInterface* Material, int32_t Width, int32_t Height);                 // [0x76b4190] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
	// FSlateBrush MakeBrushFromAsset(class USlateBrushAsset* BrushAsset);                                                   // [0x76b4080] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.LockMouse
	// FEventReply LockMouse(FEventReply& Reply, class UWidget* CapturingWidget);                                            // [0x76b3f50] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.IsDragDropping
	// bool IsDragDropping();                                                                                                // [0x76b3ef0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.Handled
	// FEventReply Handled();                                                                                                // [0x76b3e80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetSafeZonePadding
	// void GetSafeZonePadding(class UObject* WorldContextObject, FVector4& SafePadding, FVector2D& SafePaddingScale, FVector4& SpillOverPadding); // [0x76b3bd0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
	// FKeyEvent GetKeyEventFromAnalogInputEvent(FAnalogInputEvent& Event);                                                  // [0x76b3940] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
	// FInputEvent GetInputEventFromPointerEvent(FPointerEvent& Event);                                                      // [0x76b37f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
	// FInputEvent GetInputEventFromNavigationEvent(FNavigationEvent& Event);                                                // [0x76b3710] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
	// FInputEvent GetInputEventFromKeyEvent(FKeyEvent& Event);                                                              // [0x76b35f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
	// FInputEvent GetInputEventFromCharacterEvent(FCharacterEvent& Event);                                                  // [0x76b3510] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetDynamicMaterial
	// class UMaterialInstanceDynamic* GetDynamicMaterial(FSlateBrush& Brush);                                               // [0x76b33e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetDragDroppingContent
	// class UDragDropOperation* GetDragDroppingContent();                                                                   // [0x76b3350] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
	// class UTexture2D* GetBrushResourceAsTexture2D(FSlateBrush& Brush);                                                    // [0x76b31e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
	// class UMaterialInterface* GetBrushResourceAsMaterial(FSlateBrush& Brush);                                             // [0x76b30d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetBrushResource
	// class UObject* GetBrushResource(FSlateBrush& Brush);                                                                  // [0x76b2fc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
	// void GetAllWidgetsWithInterface(class UObject* WorldContextObject, TArray<UUserWidget*>& FoundWidgets, class UClass* Interface, bool TopLevelOnly); // [0x76b2e50] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
	// void GetAllWidgetsOfClass(class UObject* WorldContextObject, TArray<UUserWidget*>& FoundWidgets, class UClass* WidgetClass, bool TopLevelOnly); // [0x76b2ce0] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.EndDragDrop
	// FEventReply EndDragDrop(FEventReply& Reply);                                                                          // [0x76b2bf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.DrawTextFormatted
	// void DrawTextFormatted(FPaintContext& Context, FText& Text, FVector2D position, class UFont* Font, int32_t FontSize, FName FontTypeFace, FLinearColor Tint); // [0x76b2960] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DrawText
	// void DrawText(FPaintContext& Context, FString inString, FVector2D position, FLinearColor Tint);                       // [0x76b27d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DrawLines
	// void DrawLines(FPaintContext& Context, TArray<FVector2D>& Points, FLinearColor Tint, bool bAntiAlias, float Thickness); // [0x76b25f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DrawLine
	// void DrawLine(FPaintContext& Context, FVector2D PositionA, FVector2D PositionB, FLinearColor Tint, bool bAntiAlias, float Thickness); // [0x76b23e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DrawBox
	// void DrawBox(FPaintContext& Context, FVector2D position, FVector2D Size, class USlateBrushAsset* Brush, FLinearColor Tint); // [0x76b2220] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DismissAllMenus
	// void DismissAllMenus();                                                                                               // [0x76b2200] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DetectDragIfPressed
	// FEventReply DetectDragIfPressed(FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, FKey DragKey);       // [0x76b1fa0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DetectDrag
	// FEventReply DetectDrag(FEventReply& Reply, class UWidget* WidgetDetectingDrag, FKey DragKey);                         // [0x76b1dc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.CreateDragDropOperation
	// class UDragDropOperation* CreateDragDropOperation(class UClass* OperationClass);                                      // [0x76b18b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.Create
	// class UUserWidget* Create(class UObject* WorldContextObject, class UClass* WidgetType, class APlayerController* OwningPlayer); // [0x76b17b0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.ClearUserFocus
	// FEventReply ClearUserFocus(FEventReply& Reply, bool bInAllUsers);                                                     // [0x76b1680] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.CaptureMouse
	// FEventReply CaptureMouse(FEventReply& Reply, class UWidget* CapturingWidget);                                         // [0x76b1550] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.CaptureJoystick
	// FEventReply CaptureJoystick(FEventReply& Reply, class UWidget* CapturingWidget, bool bInAllJoysticks);                // [0x76b13e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.CancelDragDrop
	// void CancelDragDrop();                                                                                                // [0x76b13c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UMG.WidgetComponent
/// Size: 0x0130 (0x0004D0 - 0x000600)
class UWidgetComponent : public UMeshComponent
{ 
public:
	EWidgetSpace                                       space;                                                      // 0x04D0   (0x0001)  
	EWidgetTimingPolicy                                TimingPolicy;                                               // 0x04D1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x04D2   (0x0006)  MISSED
	class UClass*                                      WidgetClass;                                                // 0x04D8   (0x0008)  
	FIntPoint                                          DrawSize;                                                   // 0x04E0   (0x0008)  
	bool                                               bManuallyRedraw;                                            // 0x04E8   (0x0001)  
	bool                                               bRedrawRequested;                                           // 0x04E9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x04EA   (0x0002)  MISSED
	float                                              RedrawTime;                                                 // 0x04EC   (0x0004)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x04F0   (0x0008)  MISSED
	FIntPoint                                          CurrentDrawSize;                                            // 0x04F8   (0x0008)  
	bool                                               bDrawAtDesiredSize;                                         // 0x0500   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0501   (0x0003)  MISSED
	FVector2D                                          Pivot;                                                      // 0x0504   (0x0008)  
	bool                                               bReceiveHardwareInput;                                      // 0x050C   (0x0001)  
	bool                                               bWindowFocusable;                                           // 0x050D   (0x0001)  
	EWindowVisibility                                  WindowVisibility;                                           // 0x050E   (0x0001)  
	bool                                               bApplyGammaCorrection;                                      // 0x050F   (0x0001)  
	class ULocalPlayer*                                OwnerPlayer;                                                // 0x0510   (0x0008)  
	FLinearColor                                       BackgroundColor;                                            // 0x0518   (0x0010)  
	FLinearColor                                       TintColorAndOpacity;                                        // 0x0528   (0x0010)  
	float                                              OpacityFromTexture;                                         // 0x0538   (0x0004)  
	EWidgetBlendMode                                   BlendMode;                                                  // 0x053C   (0x0001)  
	bool                                               bIsTwoSided;                                                // 0x053D   (0x0001)  
	bool                                               TickWhenOffscreen;                                          // 0x053E   (0x0001)  
	unsigned char                                      UnknownData04_5[0x1];                                       // 0x053F   (0x0001)  MISSED
	class UBodySetup*                                  BodySetup;                                                  // 0x0540   (0x0008)  
	class UMaterialInterface*                          TranslucentMaterial;                                        // 0x0548   (0x0008)  
	class UMaterialInterface*                          TranslucentMaterial_OneSided;                               // 0x0550   (0x0008)  
	class UMaterialInterface*                          OpaqueMaterial;                                             // 0x0558   (0x0008)  
	class UMaterialInterface*                          OpaqueMaterial_OneSided;                                    // 0x0560   (0x0008)  
	class UMaterialInterface*                          MaskedMaterial;                                             // 0x0568   (0x0008)  
	class UMaterialInterface*                          MaskedMaterial_OneSided;                                    // 0x0570   (0x0008)  
	class UTextureRenderTarget2D*                      RenderTarget;                                               // 0x0578   (0x0008)  
	class UMaterialInstanceDynamic*                    MaterialInstance;                                           // 0x0580   (0x0008)  
	bool                                               bAddedToScreen;                                             // 0x0588   (0x0001)  
	bool                                               bEditTimeUsable;                                            // 0x0589   (0x0001)  
	unsigned char                                      UnknownData05_5[0x2];                                       // 0x058A   (0x0002)  MISSED
	FName                                              SharedLayerName;                                            // 0x058C   (0x000C)  
	int32_t                                            LayerZOrder;                                                // 0x0598   (0x0004)  
	EWidgetGeometryMode                                GeometryMode;                                               // 0x059C   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x059D   (0x0003)  MISSED
	float                                              CylinderArcAngle;                                           // 0x05A0   (0x0004)  
	ETickMode                                          TickMode;                                                   // 0x05A4   (0x0001)  
	unsigned char                                      UnknownData07_5[0x23];                                      // 0x05A5   (0x0023)  MISSED
	class UUserWidget*                                 Widget;                                                     // 0x05C8   (0x0008)  
	unsigned char                                      UnknownData08_6[0x30];                                      // 0x05D0   (0x0030)  MISSED


	/// Functions
	// Function /Script/UMG.WidgetComponent.SetWindowVisibility
	// void SetWindowVisibility(EWindowVisibility InVisibility);                                                             // [0x76b5cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetWindowFocusable
	// void SetWindowFocusable(bool bInWindowFocusable);                                                                     // [0x76b5970] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetWidgetSpace
	// void SetWidgetSpace(EWidgetSpace NewSpace);                                                                           // [0x76b58f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetWidget
	// void SetWidget(class UUserWidget* Widget);                                                                            // [0x76b5860] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetTwoSided
	// void SetTwoSided(bool bWantTwoSided);                                                                                 // [0x76b57d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetTintColorAndOpacity
	// void SetTintColorAndOpacity(FLinearColor NewTintColorAndOpacity);                                                     // [0x76b5740] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetTickWhenOffscreen
	// void SetTickWhenOffscreen(bool bWantTickWhenOffscreen);                                                               // [0x76b56b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetTickMode
	// void SetTickMode(ETickMode InTickMode);                                                                               // [0x76b5630] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetRedrawTime
	// void SetRedrawTime(float InRedrawTime);                                                                               // [0x76b55b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetPivot
	// void SetPivot(FVector2D& InPivot);                                                                                    // [0x76b5520] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetOwnerPlayer
	// void SetOwnerPlayer(class ULocalPlayer* LocalPlayer);                                                                 // [0x76b5490] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetManuallyRedraw
	// void SetManuallyRedraw(bool bUseManualRedraw);                                                                        // [0x76b52d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetGeometryMode
	// void SetGeometryMode(EWidgetGeometryMode InGeometryMode);                                                             // [0x76b4bc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetDrawSize
	// void SetDrawSize(FVector2D Size);                                                                                     // [0x76b4b20] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetDrawAtDesiredSize
	// void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize);                                                                 // [0x76b4a90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetCylinderArcAngle
	// void SetCylinderArcAngle(float InCylinderArcAngle);                                                                   // [0x76b4a10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetBackgroundColor
	// void SetBackgroundColor(FLinearColor NewBackgroundColor);                                                             // [0x76b46d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.RequestRenderUpdate
	// void RequestRenderUpdate();                                                                                           // [0x76b4690] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.RequestRedraw
	// void RequestRedraw();                                                                                                 // [0x76b4670] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.IsWidgetVisible
	// bool IsWidgetVisible();                                                                                               // [0x76b3f20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetWindowVisiblility
	// EWindowVisibility GetWindowVisiblility();                                                                             // [0x76b3e60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetWindowFocusable
	// bool GetWindowFocusable();                                                                                            // [0x76b3e40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetWidgetSpace
	// EWidgetSpace GetWidgetSpace();                                                                                        // [0x76b3e20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetWidget
	// class UUserWidget* GetWidget();                                                                                       // [0x76b3df0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetUserWidgetObject
	// class UUserWidget* GetUserWidgetObject();                                                                             // [0x76b3d90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetTwoSided
	// bool GetTwoSided();                                                                                                   // [0x76b3d70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetTickWhenOffscreen
	// bool GetTickWhenOffscreen();                                                                                          // [0x76b3d50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetRenderTarget
	// class UTextureRenderTarget2D* GetRenderTarget();                                                                      // [0x76b3ba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetRedrawTime
	// float GetRedrawTime();                                                                                                // [0x76b3b80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetPivot
	// FVector2D GetPivot();                                                                                                 // [0x76b3b50] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetOwnerPlayer
	// class ULocalPlayer* GetOwnerPlayer();                                                                                 // [0x76b3b20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetMaterialInstance
	// class UMaterialInstanceDynamic* GetMaterialInstance();                                                                // [0x76b3af0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetManuallyRedraw
	// bool GetManuallyRedraw();                                                                                             // [0x76b3ad0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetGeometryMode
	// EWidgetGeometryMode GetGeometryMode();                                                                                // [0x76b34f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetDrawSize
	// FVector2D GetDrawSize();                                                                                              // [0x76b33a0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetDrawAtDesiredSize
	// bool GetDrawAtDesiredSize();                                                                                          // [0x76b3380] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetCylinderArcAngle
	// float GetCylinderArcAngle();                                                                                          // [0x76b3330] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetCurrentDrawSize
	// FVector2D GetCurrentDrawSize();                                                                                       // [0x76b32f0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.WidgetInteractionComponent
/// Size: 0x0200 (0x000220 - 0x000420)
class UWidgetInteractionComponent : public USceneComponent
{ 
public:
	SDK_UNDEFINED(16,1144) /* FMulticastInlineDelegate */ __um(OnHoveredWidgetChanged);                            // 0x0218   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0228   (0x0010)  MISSED
	int32_t                                            VirtualUserIndex;                                           // 0x0238   (0x0004)  
	int32_t                                            PointerIndex;                                               // 0x023C   (0x0004)  
	SDK_UNDEFINED(1,1145) /* TEnumAsByte<ECollisionChannel> */ __um(TraceChannel);                                 // 0x0240   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0241   (0x0003)  MISSED
	float                                              InteractionDistance;                                        // 0x0244   (0x0004)  
	EWidgetInteractionSource                           InteractionSource;                                          // 0x0248   (0x0001)  
	bool                                               bEnableHitTesting;                                          // 0x0249   (0x0001)  
	bool                                               bShowDebug;                                                 // 0x024A   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x024B   (0x0001)  MISSED
	float                                              DebugSphereLineThickness;                                   // 0x024C   (0x0004)  
	float                                              DebugLineThickness;                                         // 0x0250   (0x0004)  
	FLinearColor                                       DebugColor;                                                 // 0x0254   (0x0010)  
	unsigned char                                      UnknownData03_5[0x7C];                                      // 0x0264   (0x007C)  MISSED
	FHitResult                                         CustomHitResult;                                            // 0x02E0   (0x0090)  
	FVector2D                                          LocalHitLocation;                                           // 0x0370   (0x0008)  
	FVector2D                                          LastLocalHitLocation;                                       // 0x0378   (0x0008)  
	class UWidgetComponent*                            HoveredWidgetComponent;                                     // 0x0380   (0x0008)  
	FHitResult                                         LastHitResult;                                              // 0x0388   (0x0090)  
	bool                                               bIsHoveredWidgetInteractable;                               // 0x0418   (0x0001)  
	bool                                               bIsHoveredWidgetFocusable;                                  // 0x0419   (0x0001)  
	bool                                               bIsHoveredWidgetHitTestVisible;                             // 0x041A   (0x0001)  
	unsigned char                                      UnknownData04_6[0x5];                                       // 0x041B   (0x0005)  MISSED


	/// Functions
	// Function /Script/UMG.WidgetInteractionComponent.SetFocus
	// void SetFocus(class UWidget* FocusWidget);                                                                            // [0x76b8d30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.SetCustomHitResult
	// void SetCustomHitResult(FHitResult& HitResult);                                                                       // [0x76b8b50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.SendKeyChar
	// bool SendKeyChar(FString Characters, bool bRepeat);                                                                   // [0x76b8970] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.ScrollWheel
	// void ScrollWheel(float ScrollDelta);                                                                                  // [0x76b88e0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.ReleasePointerKey
	// void ReleasePointerKey(FKey Key);                                                                                     // [0x76b8760] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.ReleaseKey
	// bool ReleaseKey(FKey Key);                                                                                            // [0x76b8650] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.PressPointerKey
	// void PressPointerKey(FKey Key);                                                                                       // [0x76b83e0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.PressKey
	// bool PressKey(FKey Key, bool bRepeat);                                                                                // [0x76b8290] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.PressAndReleaseKey
	// bool PressAndReleaseKey(FKey Key);                                                                                    // [0x76b8180] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.IsOverInteractableWidget
	// bool IsOverInteractableWidget();                                                                                      // [0x76b8150] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
	// bool IsOverHitTestVisibleWidget();                                                                                    // [0x76b8120] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.IsOverFocusableWidget
	// bool IsOverFocusableWidget();                                                                                         // [0x76b80f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.GetLastHitResult
	// FHitResult GetLastHitResult();                                                                                        // [0x76b7b30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
	// class UWidgetComponent* GetHoveredWidgetComponent();                                                                  // [0x58ad370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.Get2DHitLocation
	// FVector2D Get2DHitLocation();                                                                                         // [0x76b7a90] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.WidgetLayoutLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot
	// class UWrapBoxSlot* SlotAsWrapBoxSlot(class UWidget* Widget);                                                         // [0x76b99b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot
	// class UWidgetSwitcherSlot* SlotAsWidgetSwitcherSlot(class UWidget* Widget);                                           // [0x76b9920] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
	// class UVerticalBoxSlot* SlotAsVerticalBoxSlot(class UWidget* Widget);                                                 // [0x76b9890] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
	// class UUniformGridSlot* SlotAsUniformGridSlot(class UWidget* Widget);                                                 // [0x76b9800] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot
	// class USizeBoxSlot* SlotAsSizeBoxSlot(class UWidget* Widget);                                                         // [0x76b9770] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot
	// class UScrollBoxSlot* SlotAsScrollBoxSlot(class UWidget* Widget);                                                     // [0x76b96e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot
	// class UScaleBoxSlot* SlotAsScaleBoxSlot(class UWidget* Widget);                                                       // [0x76b9650] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot
	// class USafeZoneSlot* SlotAsSafeBoxSlot(class UWidget* Widget);                                                        // [0x76b95c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
	// class UOverlaySlot* SlotAsOverlaySlot(class UWidget* Widget);                                                         // [0x76b9530] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
	// class UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(class UWidget* Widget);                                             // [0x76b94a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsGridSlot
	// class UGridSlot* SlotAsGridSlot(class UWidget* Widget);                                                               // [0x76b9410] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
	// class UCanvasPanelSlot* SlotAsCanvasSlot(class UWidget* Widget);                                                      // [0x76b9380] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsBorderSlot
	// class UBorderSlot* SlotAsBorderSlot(class UWidget* Widget);                                                           // [0x76b92f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.RemoveAllWidgets
	// void RemoveAllWidgets(class UObject* WorldContextObject);                                                             // [0x76b8860] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
	// bool ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, FVector WorldLocation, FVector2D& ScreenPosition, bool bPlayerViewportRelative); // [0x76b84e0] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry
	// FGeometry GetViewportWidgetGeometry(class UObject* WorldContextObject);                                               // [0x76b7fa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetLayoutLibrary.GetViewportSize
	// FVector2D GetViewportSize(class UObject* WorldContextObject);                                                         // [0x76b7f10] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.GetViewportScale
	// float GetViewportScale(class UObject* WorldContextObject);                                                            // [0x76b7e80] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry
	// FGeometry GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController);                                   // [0x76b7dd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
	// bool GetMousePositionScaledByDPI(class APlayerController* Player, float& LocationX, float& LocationY);                // [0x76b7c80] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.GetMousePositionOnViewport
	// FVector2D GetMousePositionOnViewport(class UObject* WorldContextObject);                                              // [0x76b7bf0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform
	// FVector2D GetMousePositionOnPlatform();                                                                               // [0x76b7bb0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/UMG.WidgetNavigationData
/// Size: 0x002C (0x000000 - 0x00002C)
struct FWidgetNavigationData
{ 
	EUINavigationRule                                  Rule;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              WidgetToFocus;                                              // 0x0004   (0x000C)  
	SDK_UNDEFINED(8,1146) /* TWeakObjectPtr<UWidget*> */ __um(Widget);                                             // 0x0010   (0x0008)  
	SDK_UNDEFINED(20,1147) /* FDelegateProperty */     __um(CustomDelegate);                                       // 0x0018   (0x0014)  
};

/// Class /Script/UMG.WidgetNavigation
/// Size: 0x0108 (0x000030 - 0x000138)
class UWidgetNavigation : public UObject
{ 
public:
	FWidgetNavigationData                              Up;                                                         // 0x0030   (0x002C)  
	FWidgetNavigationData                              Down;                                                       // 0x005C   (0x002C)  
	FWidgetNavigationData                              Left;                                                       // 0x0088   (0x002C)  
	FWidgetNavigationData                              Right;                                                      // 0x00B4   (0x002C)  
	FWidgetNavigationData                              Next;                                                       // 0x00E0   (0x002C)  
	FWidgetNavigationData                              Previous;                                                   // 0x010C   (0x002C)  
};

/// Class /Script/UMG.WidgetSwitcher
/// Size: 0x0018 (0x000148 - 0x000160)
class UWidgetSwitcher : public UPanelWidget
{ 
public:
	int32_t                                            ActiveWidgetIndex;                                          // 0x0148   (0x0004)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x014C   (0x0014)  MISSED


	/// Functions
	// Function /Script/UMG.WidgetSwitcher.SetActiveWidgetIndex
	// void SetActiveWidgetIndex(int32_t index);                                                                             // [0x76b8ac0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetSwitcher.SetActiveWidget
	// void SetActiveWidget(class UWidget* Widget);                                                                          // [0x7695670] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetSwitcher.GetWidgetAtIndex
	// class UWidget* GetWidgetAtIndex(int32_t index);                                                                       // [0x76b8050] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetSwitcher.GetNumWidgets
	// int32_t GetNumWidgets();                                                                                              // [0x76b7da0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetSwitcher.GetActiveWidgetIndex
	// int32_t GetActiveWidgetIndex();                                                                                       // [0x76b7b00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetSwitcher.GetActiveWidget
	// class UWidget* GetActiveWidget();                                                                                     // [0x76b7ad0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.WidgetSwitcherSlot
/// Size: 0x0020 (0x000040 - 0x000060)
class UWidgetSwitcherSlot : public UPanelSlot
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0040   (0x0008)  MISSED
	FMargin                                            Padding;                                                    // 0x0048   (0x0010)  
	SDK_UNDEFINED(1,1148) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0058   (0x0001)  
	SDK_UNDEFINED(1,1149) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0059   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x005A   (0x0006)  MISSED


	/// Functions
	// Function /Script/UMG.WidgetSwitcherSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> inVerticalAlignment);                                       // [0x76b9170] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetSwitcherSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x76b8fc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetSwitcherSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> inHorizontalAlignment);                                 // [0x76b8dc0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WidgetTree
/// Size: 0x0008 (0x000030 - 0x000038)
class UWidgetTree : public UObject
{ 
public:
	class UWidget*                                     RootWidget;                                                 // 0x0030   (0x0008)  
};

/// Class /Script/UMG.WindowTitleBarArea
/// Size: 0x0020 (0x000148 - 0x000168)
class UWindowTitleBarArea : public UContentWidget
{ 
public:
	bool                                               bWindowButtonsEnabled;                                      // 0x0148   (0x0001)  
	bool                                               bDoubleClickTogglesFullscreen;                              // 0x0149   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1E];                                      // 0x014A   (0x001E)  MISSED


	/// Functions
	// Function /Script/UMG.WindowTitleBarArea.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> inVerticalAlignment);                                       // [0x76b91f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WindowTitleBarArea.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x76b9050] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WindowTitleBarArea.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> inHorizontalAlignment);                                 // [0x76b8e40] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WindowTitleBarAreaSlot
/// Size: 0x0028 (0x000040 - 0x000068)
class UWindowTitleBarAreaSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0040   (0x0010)  
	SDK_UNDEFINED(1,1150) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0050   (0x0001)  
	SDK_UNDEFINED(1,1151) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x0052   (0x0016)  MISSED


	/// Functions
	// Function /Script/UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> inVerticalAlignment);                                       // [0x76b9270] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WindowTitleBarAreaSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x76b90e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> inHorizontalAlignment);                                 // [0x76b8ec0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WrapBox
/// Size: 0x0028 (0x000148 - 0x000170)
class UWrapBox : public UPanelWidget
{ 
public:
	FVector2D                                          InnerSlotPadding;                                           // 0x0148   (0x0008)  
	float                                              WrapWidth;                                                  // 0x0150   (0x0004)  
	float                                              WrapSize;                                                   // 0x0154   (0x0004)  
	bool                                               bExplicitWrapWidth;                                         // 0x0158   (0x0001)  
	bool                                               bExplicitWrapSize;                                          // 0x0159   (0x0001)  
	SDK_UNDEFINED(1,1152) /* TEnumAsByte<EOrientation> */ __um(Orientation);                                       // 0x015A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x15];                                      // 0x015B   (0x0015)  MISSED


	/// Functions
	// Function /Script/UMG.WrapBox.SetInnerSlotPadding
	// void SetInnerSlotPadding(FVector2D InPadding);                                                                        // [0x76b8f40] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WrapBox.AddChildToWrapBox
	// class UWrapBoxSlot* AddChildToWrapBox(class UWidget* Content);                                                        // [0x76b79f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WrapBoxSlot
/// Size: 0x0028 (0x000040 - 0x000068)
class UWrapBoxSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0040   (0x0010)  
	bool                                               bFillEmptySpace;                                            // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0051   (0x0003)  MISSED
	float                                              FillSpanWhenLessThan;                                       // 0x0054   (0x0004)  
	SDK_UNDEFINED(1,1153) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0058   (0x0001)  
	SDK_UNDEFINED(1,1154) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0059   (0x0001)  
	unsigned char                                      UnknownData01_6[0xE];                                       // 0x005A   (0x000E)  MISSED


	/// Functions
	// Function /Script/UMG.WrapBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> inVerticalAlignment);                                       // [0x4b9ac60] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x4b9a8a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> inHorizontalAlignment);                                 // [0x4b9a550] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetFillSpanWhenLessThan
	// void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);                                                           // [0x76b8cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetFillEmptySpace
	// void SetFillEmptySpace(bool InbFillEmptySpace);                                                                       // [0x76b8c20] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/UMG.EventReply
/// Size: 0x00C0 (0x000000 - 0x0000C0)
struct FEventReply
{ 
	unsigned char                                      UnknownData00_1[0xC0];                                      // 0x0000   (0x00C0)  MISSED
};

/// Struct /Script/UMG.PaintContext
/// Size: 0x0030 (0x000000 - 0x000030)
struct FPaintContext
{ 
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Struct /Script/UMG.MovieSceneWidgetMaterialSectionTemplate
/// Size: 0x0010 (0x000080 - 0x000090)
struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate
{ 
	TArray<FName>                                      BrushPropertyNamePath;                                      // 0x0080   (0x0010)  
};

/// Struct /Script/UMG.RichTextStyleRow
/// Size: 0x0288 (0x000008 - 0x000290)
struct FRichTextStyleRow : FTableRowBase
{ 
	FTextBlockStyle                                    TextStyle;                                                  // 0x0008   (0x0288)  
};

/// Struct /Script/UMG.RichImageRow
/// Size: 0x0090 (0x000008 - 0x000098)
struct FRichImageRow : FTableRowBase
{ 
	FSlateBrush                                        Brush;                                                      // 0x0008   (0x0090)  
};

/// Struct /Script/UMG.WidgetComponentInstanceData
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
struct FWidgetComponentInstanceData : FSceneComponentInstanceData
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00B8   (0x0010)  MISSED
};

