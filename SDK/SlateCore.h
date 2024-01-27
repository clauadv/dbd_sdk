
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/SlateCore.EUINavigation
/// Size: 0x09
enum class EUINavigation : uint8_t
{
	EUINavigation__Left                                                              = 0,
	EUINavigation__Right                                                             = 1,
	EUINavigation__Up                                                                = 2,
	EUINavigation__Down                                                              = 3,
	EUINavigation__Next                                                              = 4,
	EUINavigation__Previous                                                          = 5,
	EUINavigation__Num                                                               = 6,
	EUINavigation__Invalid                                                           = 7,
	EUINavigation__EUINavigation_MAX                                                 = 8
};

/// Enum /Script/SlateCore.ECheckBoxState
/// Size: 0x04
enum class ECheckBoxState : uint8_t
{
	ECheckBoxState__Unchecked                                                        = 0,
	ECheckBoxState__Checked                                                          = 1,
	ECheckBoxState__Undetermined                                                     = 2,
	ECheckBoxState__ECheckBoxState_MAX                                               = 3
};

/// Enum /Script/SlateCore.EWidgetClipping
/// Size: 0x06
enum class EWidgetClipping : uint8_t
{
	EWidgetClipping__Inherit                                                         = 0,
	EWidgetClipping__ClipToBounds                                                    = 1,
	EWidgetClipping__ClipToBoundsWithoutIntersecting                                 = 2,
	EWidgetClipping__ClipToBoundsAlways                                              = 3,
	EWidgetClipping__OnDemand                                                        = 4,
	EWidgetClipping__EWidgetClipping_MAX                                             = 5
};

/// Enum /Script/SlateCore.EPixelSnappingMethod
/// Size: 0x04
enum class EPixelSnappingMethod : uint8_t
{
	EPixelSnappingMethod__Inherit                                                    = 0,
	EPixelSnappingMethod__Disabled                                                   = 1,
	EPixelSnappingMethod__SnapToPixel                                                = 2,
	EPixelSnappingMethod__EPixelSnappingMethod_MAX                                   = 3
};

/// Enum /Script/SlateCore.ESlateBrushImageType
/// Size: 0x04
enum class ESlateBrushImageType : uint8_t
{
	ESlateBrushImageType__NoImage                                                    = 0,
	ESlateBrushImageType__FullColor                                                  = 1,
	ESlateBrushImageType__Linear                                                     = 2,
	ESlateBrushImageType__ESlateBrushImageType_MAX                                   = 3
};

/// Enum /Script/SlateCore.ESlateBrushMirrorType
/// Size: 0x05
enum class ESlateBrushMirrorType : uint8_t
{
	ESlateBrushMirrorType__NoMirror                                                  = 0,
	ESlateBrushMirrorType__Horizontal                                                = 1,
	ESlateBrushMirrorType__Vertical                                                  = 2,
	ESlateBrushMirrorType__Both                                                      = 3,
	ESlateBrushMirrorType__ESlateBrushMirrorType_MAX                                 = 4
};

/// Enum /Script/SlateCore.ESlateBrushTileType
/// Size: 0x05
enum class ESlateBrushTileType : uint8_t
{
	ESlateBrushTileType__NoTile                                                      = 0,
	ESlateBrushTileType__Horizontal                                                  = 1,
	ESlateBrushTileType__Vertical                                                    = 2,
	ESlateBrushTileType__Both                                                        = 3,
	ESlateBrushTileType__ESlateBrushTileType_MAX                                     = 4
};

/// Enum /Script/SlateCore.ESlateBrushDrawType
/// Size: 0x05
enum class ESlateBrushDrawType : uint8_t
{
	ESlateBrushDrawType__NoDrawType                                                  = 0,
	ESlateBrushDrawType__Box                                                         = 1,
	ESlateBrushDrawType__Border                                                      = 2,
	ESlateBrushDrawType__Image                                                       = 3,
	ESlateBrushDrawType__ESlateBrushDrawType_MAX                                     = 4
};

/// Enum /Script/SlateCore.ESlateColorStylingMode
/// Size: 0x05
enum class ESlateColorStylingMode : uint8_t
{
	ESlateColorStylingMode__UseColor_Specified                                       = 0,
	ESlateColorStylingMode__UseColor_Specified_Link                                  = 1,
	ESlateColorStylingMode__UseColor_Foreground                                      = 2,
	ESlateColorStylingMode__UseColor_Foreground_Subdued                              = 3,
	ESlateColorStylingMode__UseColor_MAX                                             = 4
};

/// Enum /Script/SlateCore.EUINavigationRule
/// Size: 0x08
enum class EUINavigationRule : uint8_t
{
	EUINavigationRule__Escape                                                        = 0,
	EUINavigationRule__Explicit                                                      = 1,
	EUINavigationRule__Wrap                                                          = 2,
	EUINavigationRule__Stop                                                          = 3,
	EUINavigationRule__Custom                                                        = 4,
	EUINavigationRule__CustomBoundary                                                = 5,
	EUINavigationRule__Invalid                                                       = 6,
	EUINavigationRule__EUINavigationRule_MAX                                         = 7
};

/// Enum /Script/SlateCore.EFlowDirectionPreference
/// Size: 0x05
enum class EFlowDirectionPreference : uint8_t
{
	EFlowDirectionPreference__Inherit                                                = 0,
	EFlowDirectionPreference__Culture                                                = 1,
	EFlowDirectionPreference__LeftToRight                                            = 2,
	EFlowDirectionPreference__RightToLeft                                            = 3,
	EFlowDirectionPreference__EFlowDirectionPreference_MAX                           = 4
};

/// Enum /Script/SlateCore.EColorVisionDeficiency
/// Size: 0x05
enum class EColorVisionDeficiency : uint8_t
{
	EColorVisionDeficiency__NormalVision                                             = 0,
	EColorVisionDeficiency__Deuteranope                                              = 1,
	EColorVisionDeficiency__Protanope                                                = 2,
	EColorVisionDeficiency__Tritanope                                                = 3,
	EColorVisionDeficiency__EColorVisionDeficiency_MAX                               = 4
};

/// Enum /Script/SlateCore.ESelectInfo
/// Size: 0x05
enum class ESelectInfo : uint8_t
{
	ESelectInfo__OnKeyPress                                                          = 0,
	ESelectInfo__OnNavigation                                                        = 1,
	ESelectInfo__OnMouseClick                                                        = 2,
	ESelectInfo__Direct                                                              = 3,
	ESelectInfo__ESelectInfo_MAX                                                     = 4
};

/// Enum /Script/SlateCore.ETextCommit
/// Size: 0x05
enum class ETextCommit : uint8_t
{
	ETextCommit__Default                                                             = 0,
	ETextCommit__OnEnter                                                             = 1,
	ETextCommit__OnUserMovedFocus                                                    = 2,
	ETextCommit__OnCleared                                                           = 3,
	ETextCommit__ETextCommit_MAX                                                     = 4
};

/// Enum /Script/SlateCore.ETextShapingMethod
/// Size: 0x04
enum class ETextShapingMethod : uint8_t
{
	ETextShapingMethod__Auto                                                         = 0,
	ETextShapingMethod__KerningOnly                                                  = 1,
	ETextShapingMethod__FullShaping                                                  = 2,
	ETextShapingMethod__ETextShapingMethod_MAX                                       = 3
};

/// Enum /Script/SlateCore.EMenuPlacement
/// Size: 0x14
enum class EMenuPlacement : uint8_t
{
	MenuPlacement_BelowAnchor                                                        = 0,
	MenuPlacement_CenteredBelowAnchor                                                = 1,
	MenuPlacement_BelowRightAnchor                                                   = 2,
	MenuPlacement_ComboBox                                                           = 3,
	MenuPlacement_ComboBoxRight                                                      = 4,
	MenuPlacement_MenuRight                                                          = 5,
	MenuPlacement_AboveAnchor                                                        = 6,
	MenuPlacement_CenteredAboveAnchor                                                = 7,
	MenuPlacement_AboveRightAnchor                                                   = 8,
	MenuPlacement_MenuLeft                                                           = 9,
	MenuPlacement_Center                                                             = 10,
	MenuPlacement_RightLeftCenter                                                    = 11,
	MenuPlacement_MatchBottomLeft                                                    = 12,
	MenuPlacement_MAX                                                                = 13
};

/// Enum /Script/SlateCore.EFontLayoutMethod
/// Size: 0x03
enum class EFontLayoutMethod : uint8_t
{
	EFontLayoutMethod__Metrics                                                       = 0,
	EFontLayoutMethod__BoundingBox                                                   = 1,
	EFontLayoutMethod__EFontLayoutMethod_MAX                                         = 2
};

/// Enum /Script/SlateCore.EFontLoadingPolicy
/// Size: 0x04
enum class EFontLoadingPolicy : uint8_t
{
	EFontLoadingPolicy__LazyLoad                                                     = 0,
	EFontLoadingPolicy__Stream                                                       = 1,
	EFontLoadingPolicy__Inline                                                       = 2,
	EFontLoadingPolicy__EFontLoadingPolicy_MAX                                       = 3
};

/// Enum /Script/SlateCore.EFontHinting
/// Size: 0x06
enum class EFontHinting : uint8_t
{
	EFontHinting__Default                                                            = 0,
	EFontHinting__Auto                                                               = 1,
	EFontHinting__AutoLight                                                          = 2,
	EFontHinting__Monochrome                                                         = 3,
	EFontHinting__None                                                               = 4,
	EFontHinting__EFontHinting_MAX                                                   = 5
};

/// Enum /Script/SlateCore.EFocusCause
/// Size: 0x07
enum class EFocusCause : uint8_t
{
	EFocusCause__Mouse                                                               = 0,
	EFocusCause__Navigation                                                          = 1,
	EFocusCause__SetDirectly                                                         = 2,
	EFocusCause__Cleared                                                             = 3,
	EFocusCause__OtherWidgetLostFocus                                                = 4,
	EFocusCause__WindowActivate                                                      = 5,
	EFocusCause__EFocusCause_MAX                                                     = 6
};

/// Enum /Script/SlateCore.ESlateDebuggingFocusEvent
/// Size: 0x04
enum class ESlateDebuggingFocusEvent : uint8_t
{
	ESlateDebuggingFocusEvent__FocusChanging                                         = 0,
	ESlateDebuggingFocusEvent__FocusLost                                             = 1,
	ESlateDebuggingFocusEvent__FocusReceived                                         = 2,
	ESlateDebuggingFocusEvent__MAX                                                   = 3
};

/// Enum /Script/SlateCore.ESlateDebuggingNavigationMethod
/// Size: 0x07
enum class ESlateDebuggingNavigationMethod : uint8_t
{
	ESlateDebuggingNavigationMethod__Unknown                                         = 0,
	ESlateDebuggingNavigationMethod__Explicit                                        = 1,
	ESlateDebuggingNavigationMethod__CustomDelegateBound                             = 2,
	ESlateDebuggingNavigationMethod__CustomDelegateUnbound                           = 3,
	ESlateDebuggingNavigationMethod__NextOrPrevious                                  = 4,
	ESlateDebuggingNavigationMethod__HitTestGrid                                     = 5,
	ESlateDebuggingNavigationMethod__ESlateDebuggingNavigationMethod_MAX             = 6
};

/// Enum /Script/SlateCore.ESlateDebuggingStateChangeEvent
/// Size: 0x03
enum class ESlateDebuggingStateChangeEvent : uint8_t
{
	ESlateDebuggingStateChangeEvent__MouseCaptureGained                              = 0,
	ESlateDebuggingStateChangeEvent__MouseCaptureLost                                = 1,
	ESlateDebuggingStateChangeEvent__ESlateDebuggingStateChangeEvent_MAX             = 2
};

/// Enum /Script/SlateCore.ESlateDebuggingInputEvent
/// Size: 0x27
enum class ESlateDebuggingInputEvent : uint8_t
{
	ESlateDebuggingInputEvent__MouseMove                                             = 0,
	ESlateDebuggingInputEvent__MouseEnter                                            = 1,
	ESlateDebuggingInputEvent__MouseLeave                                            = 2,
	ESlateDebuggingInputEvent__PreviewMouseButtonDown                                = 3,
	ESlateDebuggingInputEvent__MouseButtonDown                                       = 4,
	ESlateDebuggingInputEvent__MouseButtonUp                                         = 5,
	ESlateDebuggingInputEvent__MouseButtonDoubleClick                                = 6,
	ESlateDebuggingInputEvent__MouseWheel                                            = 7,
	ESlateDebuggingInputEvent__TouchStart                                            = 8,
	ESlateDebuggingInputEvent__TouchEnd                                              = 9,
	ESlateDebuggingInputEvent__TouchForceChanged                                     = 10,
	ESlateDebuggingInputEvent__TouchFirstMove                                        = 11,
	ESlateDebuggingInputEvent__TouchMoved                                            = 12,
	ESlateDebuggingInputEvent__DragDetected                                          = 13,
	ESlateDebuggingInputEvent__DragEnter                                             = 14,
	ESlateDebuggingInputEvent__DragLeave                                             = 15,
	ESlateDebuggingInputEvent__DragOver                                              = 16,
	ESlateDebuggingInputEvent__DragDrop                                              = 17,
	ESlateDebuggingInputEvent__DropMessage                                           = 18,
	ESlateDebuggingInputEvent__PreviewKeyDown                                        = 19,
	ESlateDebuggingInputEvent__KeyDown                                               = 20,
	ESlateDebuggingInputEvent__KeyUp                                                 = 21,
	ESlateDebuggingInputEvent__KeyChar                                               = 22,
	ESlateDebuggingInputEvent__AnalogInput                                           = 23,
	ESlateDebuggingInputEvent__TouchGesture                                          = 24,
	ESlateDebuggingInputEvent__MotionDetected                                        = 25,
	ESlateDebuggingInputEvent__MAX                                                   = 26
};

/// Enum /Script/SlateCore.EScrollDirection
/// Size: 0x03
enum class EScrollDirection : uint8_t
{
	Scroll_Down                                                                      = 0,
	Scroll_Up                                                                        = 1,
	Scroll_MAX                                                                       = 2
};

/// Enum /Script/SlateCore.EOrientation
/// Size: 0x03
enum class EOrientation : uint8_t
{
	Orient_Horizontal                                                                = 0,
	Orient_Vertical                                                                  = 1,
	Orient_MAX                                                                       = 2
};

/// Enum /Script/SlateCore.EVerticalAlignment
/// Size: 0x05
enum class EVerticalAlignment : uint8_t
{
	VAlign_Fill                                                                      = 0,
	VAlign_Top                                                                       = 1,
	VAlign_Center                                                                    = 2,
	VAlign_Bottom                                                                    = 3,
	VAlign_MAX                                                                       = 4
};

/// Enum /Script/SlateCore.EHorizontalAlignment
/// Size: 0x05
enum class EHorizontalAlignment : uint8_t
{
	HAlign_Fill                                                                      = 0,
	HAlign_Left                                                                      = 1,
	HAlign_Center                                                                    = 2,
	HAlign_Right                                                                     = 3,
	HAlign_MAX                                                                       = 4
};

/// Enum /Script/SlateCore.ENavigationGenesis
/// Size: 0x04
enum class ENavigationGenesis : uint8_t
{
	ENavigationGenesis__Keyboard                                                     = 0,
	ENavigationGenesis__Controller                                                   = 1,
	ENavigationGenesis__User                                                         = 2,
	ENavigationGenesis__ENavigationGenesis_MAX                                       = 3
};

/// Enum /Script/SlateCore.ENavigationSource
/// Size: 0x03
enum class ENavigationSource : uint8_t
{
	ENavigationSource__FocusedWidget                                                 = 0,
	ENavigationSource__WidgetUnderCursor                                             = 1,
	ENavigationSource__ENavigationSource_MAX                                         = 2
};

/// Enum /Script/SlateCore.EUINavigationAction
/// Size: 0x05
enum class EUINavigationAction : uint8_t
{
	EUINavigationAction__Accept                                                      = 0,
	EUINavigationAction__Back                                                        = 1,
	EUINavigationAction__Num                                                         = 2,
	EUINavigationAction__Invalid                                                     = 3,
	EUINavigationAction__EUINavigationAction_MAX                                     = 4
};

/// Enum /Script/SlateCore.EButtonPressMethod
/// Size: 0x04
enum class EButtonPressMethod : uint8_t
{
	EButtonPressMethod__DownAndUp                                                    = 0,
	EButtonPressMethod__ButtonPress                                                  = 1,
	EButtonPressMethod__ButtonRelease                                                = 2,
	EButtonPressMethod__EButtonPressMethod_MAX                                       = 3
};

/// Enum /Script/SlateCore.EButtonTouchMethod
/// Size: 0x04
enum class EButtonTouchMethod : uint8_t
{
	EButtonTouchMethod__DownAndUp                                                    = 0,
	EButtonTouchMethod__Down                                                         = 1,
	EButtonTouchMethod__PreciseTap                                                   = 2,
	EButtonTouchMethod__EButtonTouchMethod_MAX                                       = 3
};

/// Enum /Script/SlateCore.EButtonClickMethod
/// Size: 0x05
enum class EButtonClickMethod : uint8_t
{
	EButtonClickMethod__DownAndUp                                                    = 0,
	EButtonClickMethod__MouseDown                                                    = 1,
	EButtonClickMethod__MouseUp                                                      = 2,
	EButtonClickMethod__PreciseClick                                                 = 3,
	EButtonClickMethod__EButtonClickMethod_MAX                                       = 4
};

/// Enum /Script/SlateCore.ESlateCheckBoxType
/// Size: 0x03
enum class ESlateCheckBoxType : uint8_t
{
	ESlateCheckBoxType__CheckBox                                                     = 0,
	ESlateCheckBoxType__ToggleButton                                                 = 1,
	ESlateCheckBoxType__ESlateCheckBoxType_MAX                                       = 2
};

/// Enum /Script/SlateCore.ESlateParentWindowSearchMethod
/// Size: 0x03
enum class ESlateParentWindowSearchMethod : uint8_t
{
	ESlateParentWindowSearchMethod__ActiveWindow                                     = 0,
	ESlateParentWindowSearchMethod__MainWindow                                       = 1,
	ESlateParentWindowSearchMethod__ESlateParentWindowSearchMethod_MAX               = 2
};

/// Enum /Script/SlateCore.EConsumeMouseWheel
/// Size: 0x04
enum class EConsumeMouseWheel : uint8_t
{
	EConsumeMouseWheel__WhenScrollingPossible                                        = 0,
	EConsumeMouseWheel__Always                                                       = 1,
	EConsumeMouseWheel__Never                                                        = 2,
	EConsumeMouseWheel__EConsumeMouseWheel_MAX                                       = 3
};

/// Class /Script/SlateCore.FontBulkData
/// Size: 0x0050 (0x000030 - 0x000080)
class UFontBulkData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0030   (0x0050)  MISSED
};

/// Class /Script/SlateCore.FontFaceInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UFontFaceInterface : public UInterface
{ 
public:
};

/// Class /Script/SlateCore.FontProviderInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UFontProviderInterface : public UInterface
{ 
public:
};

/// Class /Script/SlateCore.SlateTypes
/// Size: 0x0000 (0x000030 - 0x000030)
class USlateTypes : public UObject
{ 
public:
};

/// Class /Script/SlateCore.SlateWidgetStyleAsset
/// Size: 0x0008 (0x000030 - 0x000038)
class USlateWidgetStyleAsset : public UObject
{ 
public:
	class USlateWidgetStyleContainerBase*              CustomStyle;                                                // 0x0030   (0x0008)  
};

/// Class /Script/SlateCore.SlateWidgetStyleContainerBase
/// Size: 0x0008 (0x000030 - 0x000038)
class USlateWidgetStyleContainerBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/SlateCore.SlateWidgetStyleContainerInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class USlateWidgetStyleContainerInterface : public UInterface
{ 
public:
};

/// Struct /Script/SlateCore.Geometry
/// Size: 0x0038 (0x000000 - 0x000038)
struct FGeometry
{ 
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Struct /Script/SlateCore.Margin
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMargin
{ 
	float                                              Left;                                                       // 0x0000   (0x0004)  
	float                                              Top;                                                        // 0x0004   (0x0004)  
	float                                              Right;                                                      // 0x0008   (0x0004)  
	float                                              Bottom;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/SlateCore.SlateColor
/// Size: 0x0028 (0x000000 - 0x000028)
struct FSlateColor
{ 
	FLinearColor                                       SpecifiedColor;                                             // 0x0000   (0x0010)  
	SDK_UNDEFINED(1,34) /* TEnumAsByte<ESlateColorStylingMode> */ __um(ColorUseRule);                              // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x17];                                      // 0x0011   (0x0017)  MISSED
};

/// Struct /Script/SlateCore.SlateBrush
/// Size: 0x0090 (0x000000 - 0x000090)
struct FSlateBrush
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	FVector2D                                          ImageSize;                                                  // 0x0008   (0x0008)  
	FMargin                                            Margin;                                                     // 0x0010   (0x0010)  
	FSlateColor                                        TintColor;                                                  // 0x0020   (0x0028)  
	class UObject*                                     ResourceObject;                                             // 0x0048   (0x0008)  
	FName                                              ResourceName;                                               // 0x0050   (0x000C)  
	FBox2D                                             UVRegion;                                                   // 0x005C   (0x0014)  
	SDK_UNDEFINED(1,35) /* TEnumAsByte<ESlateBrushDrawType> */ __um(DrawAs);                                       // 0x0070   (0x0001)  
	SDK_UNDEFINED(1,36) /* TEnumAsByte<ESlateBrushTileType> */ __um(Tiling);                                       // 0x0071   (0x0001)  
	SDK_UNDEFINED(1,37) /* TEnumAsByte<ESlateBrushMirrorType> */ __um(Mirroring);                                  // 0x0072   (0x0001)  
	SDK_UNDEFINED(1,38) /* TEnumAsByte<ESlateBrushImageType> */ __um(ImageType);                                   // 0x0073   (0x0001)  
	unsigned char                                      UnknownData01_5[0x14];                                      // 0x0074   (0x0014)  MISSED
	bool                                               bIsDynamicallyLoaded : 1;                                   // 0x0088:0 (0x0001)  
	bool                                               bHasUObject : 1;                                            // 0x0088:1 (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0089   (0x0007)  MISSED
};

/// Struct /Script/SlateCore.InputEvent
/// Size: 0x0018 (0x000000 - 0x000018)
struct FInputEvent
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/SlateCore.PointerEvent
/// Size: 0x0060 (0x000018 - 0x000078)
struct FPointerEvent : FInputEvent
{ 
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0018   (0x0060)  MISSED
};

/// Struct /Script/SlateCore.CharacterEvent
/// Size: 0x0008 (0x000018 - 0x000020)
struct FCharacterEvent : FInputEvent
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0018   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.KeyEvent
/// Size: 0x0028 (0x000018 - 0x000040)
struct FKeyEvent : FInputEvent
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0018   (0x0028)  MISSED
};

/// Struct /Script/SlateCore.NavigationEvent
/// Size: 0x0008 (0x000018 - 0x000020)
struct FNavigationEvent : FInputEvent
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0018   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.AnalogInputEvent
/// Size: 0x0008 (0x000040 - 0x000048)
struct FAnalogInputEvent : FKeyEvent
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.FontOutlineSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFontOutlineSettings
{ 
	int32_t                                            OutlineSize;                                                // 0x0000   (0x0004)  
	bool                                               bSeparateFillAlpha;                                         // 0x0004   (0x0001)  
	bool                                               bApplyOutlineToDropShadows;                                 // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0006   (0x0002)  MISSED
	class UObject*                                     OutlineMaterial;                                            // 0x0008   (0x0008)  
	FLinearColor                                       OutlineColor;                                               // 0x0010   (0x0010)  
};

/// Struct /Script/SlateCore.SlateFontInfo
/// Size: 0x0058 (0x000000 - 0x000058)
struct FSlateFontInfo
{ 
	class UObject*                                     FontObject;                                                 // 0x0000   (0x0008)  
	class UObject*                                     FontMaterial;                                               // 0x0008   (0x0008)  
	FFontOutlineSettings                               OutlineSettings;                                            // 0x0010   (0x0020)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0030   (0x0010)  MISSED
	FName                                              TypefaceFontName;                                           // 0x0040   (0x000C)  
	int32_t                                            Size;                                                       // 0x004C   (0x0004)  
	int32_t                                            LetterSpacing;                                              // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/SlateCore.SlateWidgetStyle
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.TableRowStyle
/// Size: 0x0830 (0x000008 - 0x000838)
struct FTableRowStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        SelectorFocusedBrush;                                       // 0x0008   (0x0090)  
	FSlateBrush                                        ActiveHoveredBrush;                                         // 0x0098   (0x0090)  
	FSlateBrush                                        ActiveBrush;                                                // 0x0128   (0x0090)  
	FSlateBrush                                        InactiveHoveredBrush;                                       // 0x01B8   (0x0090)  
	FSlateBrush                                        InactiveBrush;                                              // 0x0248   (0x0090)  
	FSlateBrush                                        EvenRowBackgroundHoveredBrush;                              // 0x02D8   (0x0090)  
	FSlateBrush                                        EvenRowBackgroundBrush;                                     // 0x0368   (0x0090)  
	FSlateBrush                                        OddRowBackgroundHoveredBrush;                               // 0x03F8   (0x0090)  
	FSlateBrush                                        OddRowBackgroundBrush;                                      // 0x0488   (0x0090)  
	FSlateColor                                        TextColor;                                                  // 0x0518   (0x0028)  
	FSlateColor                                        SelectedTextColor;                                          // 0x0540   (0x0028)  
	FSlateBrush                                        DropIndicator_Above;                                        // 0x0568   (0x0090)  
	FSlateBrush                                        DropIndicator_Onto;                                         // 0x05F8   (0x0090)  
	FSlateBrush                                        DropIndicator_Below;                                        // 0x0688   (0x0090)  
	FSlateBrush                                        ActiveHighlightedBrush;                                     // 0x0718   (0x0090)  
	FSlateBrush                                        InactiveHighlightedBrush;                                   // 0x07A8   (0x0090)  
};

/// Struct /Script/SlateCore.SlateSound
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSlateSound
{ 
	class UObject*                                     ResourceObject;                                             // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0008   (0x0018)  MISSED
};

/// Struct /Script/SlateCore.ButtonStyle
/// Size: 0x02A0 (0x000008 - 0x0002A8)
struct FButtonStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        Normal;                                                     // 0x0008   (0x0090)  
	FSlateBrush                                        Hovered;                                                    // 0x0098   (0x0090)  
	FSlateBrush                                        Pressed;                                                    // 0x0128   (0x0090)  
	FSlateBrush                                        Disabled;                                                   // 0x01B8   (0x0090)  
	FMargin                                            NormalPadding;                                              // 0x0248   (0x0010)  
	FMargin                                            PressedPadding;                                             // 0x0258   (0x0010)  
	FSlateSound                                        PressedSlateSound;                                          // 0x0268   (0x0020)  
	FSlateSound                                        HoveredSlateSound;                                          // 0x0288   (0x0020)  
};

/// Struct /Script/SlateCore.ComboButtonStyle
/// Size: 0x03F0 (0x000008 - 0x0003F8)
struct FComboButtonStyle : FSlateWidgetStyle
{ 
	FButtonStyle                                       ButtonStyle;                                                // 0x0008   (0x02A8)  
	FSlateBrush                                        DownArrowImage;                                             // 0x02B0   (0x0090)  
	FVector2D                                          ShadowOffset;                                               // 0x0340   (0x0008)  
	FLinearColor                                       ShadowColorAndOpacity;                                      // 0x0348   (0x0010)  
	FSlateBrush                                        MenuBorderBrush;                                            // 0x0358   (0x0090)  
	FMargin                                            MenuBorderPadding;                                          // 0x03E8   (0x0010)  
};

/// Struct /Script/SlateCore.ComboBoxStyle
/// Size: 0x0438 (0x000008 - 0x000440)
struct FComboBoxStyle : FSlateWidgetStyle
{ 
	FComboButtonStyle                                  ComboButtonStyle;                                           // 0x0008   (0x03F8)  
	FSlateSound                                        PressedSlateSound;                                          // 0x0400   (0x0020)  
	FSlateSound                                        SelectionChangeSlateSound;                                  // 0x0420   (0x0020)  
};

/// Struct /Script/SlateCore.EditableTextStyle
/// Size: 0x0230 (0x000008 - 0x000238)
struct FEditableTextStyle : FSlateWidgetStyle
{ 
	FSlateFontInfo                                     Font;                                                       // 0x0008   (0x0058)  
	FSlateColor                                        ColorAndOpacity;                                            // 0x0060   (0x0028)  
	FSlateBrush                                        BackgroundImageSelected;                                    // 0x0088   (0x0090)  
	FSlateBrush                                        BackgroundImageComposing;                                   // 0x0118   (0x0090)  
	FSlateBrush                                        CaretImage;                                                 // 0x01A8   (0x0090)  
};

/// Struct /Script/SlateCore.ScrollBarStyle
/// Size: 0x0510 (0x000008 - 0x000518)
struct FScrollBarStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        HorizontalBackgroundImage;                                  // 0x0008   (0x0090)  
	FSlateBrush                                        VerticalBackgroundImage;                                    // 0x0098   (0x0090)  
	FSlateBrush                                        VerticalTopSlotImage;                                       // 0x0128   (0x0090)  
	FSlateBrush                                        HorizontalTopSlotImage;                                     // 0x01B8   (0x0090)  
	FSlateBrush                                        VerticalBottomSlotImage;                                    // 0x0248   (0x0090)  
	FSlateBrush                                        HorizontalBottomSlotImage;                                  // 0x02D8   (0x0090)  
	FSlateBrush                                        NormalThumbImage;                                           // 0x0368   (0x0090)  
	FSlateBrush                                        HoveredThumbImage;                                          // 0x03F8   (0x0090)  
	FSlateBrush                                        DraggedThumbImage;                                          // 0x0488   (0x0090)  
};

/// Struct /Script/SlateCore.EditableTextBoxStyle
/// Size: 0x0858 (0x000008 - 0x000860)
struct FEditableTextBoxStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        BackgroundImageNormal;                                      // 0x0008   (0x0090)  
	FSlateBrush                                        BackgroundImageHovered;                                     // 0x0098   (0x0090)  
	FSlateBrush                                        BackgroundImageFocused;                                     // 0x0128   (0x0090)  
	FSlateBrush                                        BackgroundImageReadOnly;                                    // 0x01B8   (0x0090)  
	FMargin                                            Padding;                                                    // 0x0248   (0x0010)  
	FSlateFontInfo                                     Font;                                                       // 0x0258   (0x0058)  
	FSlateColor                                        ForegroundColor;                                            // 0x02B0   (0x0028)  
	FSlateColor                                        BackgroundColor;                                            // 0x02D8   (0x0028)  
	FSlateColor                                        ReadOnlyForegroundColor;                                    // 0x0300   (0x0028)  
	FMargin                                            HScrollBarPadding;                                          // 0x0328   (0x0010)  
	FMargin                                            VScrollBarPadding;                                          // 0x0338   (0x0010)  
	FScrollBarStyle                                    ScrollBarStyle;                                             // 0x0348   (0x0518)  
};

/// Struct /Script/SlateCore.TextBlockStyle
/// Size: 0x0280 (0x000008 - 0x000288)
struct FTextBlockStyle : FSlateWidgetStyle
{ 
	FSlateFontInfo                                     Font;                                                       // 0x0008   (0x0058)  
	FSlateColor                                        ColorAndOpacity;                                            // 0x0060   (0x0028)  
	FVector2D                                          ShadowOffset;                                               // 0x0088   (0x0008)  
	FLinearColor                                       ShadowColorAndOpacity;                                      // 0x0090   (0x0010)  
	FSlateColor                                        SelectedBackgroundColor;                                    // 0x00A0   (0x0028)  
	FLinearColor                                       HighlightColor;                                             // 0x00C8   (0x0010)  
	FSlateBrush                                        HighlightShape;                                             // 0x00D8   (0x0090)  
	FSlateBrush                                        StrikeBrush;                                                // 0x0168   (0x0090)  
	FSlateBrush                                        UnderlineBrush;                                             // 0x01F8   (0x0090)  
};

/// Struct /Script/SlateCore.SpinBoxStyle
/// Size: 0x0308 (0x000008 - 0x000310)
struct FSpinBoxStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        BackgroundBrush;                                            // 0x0008   (0x0090)  
	FSlateBrush                                        HoveredBackgroundBrush;                                     // 0x0098   (0x0090)  
	FSlateBrush                                        ActiveFillBrush;                                            // 0x0128   (0x0090)  
	FSlateBrush                                        InactiveFillBrush;                                          // 0x01B8   (0x0090)  
	FSlateBrush                                        ArrowsImage;                                                // 0x0248   (0x0090)  
	FSlateColor                                        ForegroundColor;                                            // 0x02D8   (0x0028)  
	FMargin                                            TextPadding;                                                // 0x0300   (0x0010)  
};

/// Struct /Script/SlateCore.FocusEvent
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFocusEvent
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.MotionEvent
/// Size: 0x0030 (0x000018 - 0x000048)
struct FMotionEvent : FInputEvent
{ 
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0018   (0x0030)  MISSED
};

/// Struct /Script/SlateCore.FontData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FFontData
{ 
	SDK_UNDEFINED(16,39) /* FString */                 __um(FontFilename);                                         // 0x0000   (0x0010)  
	EFontHinting                                       Hinting;                                                    // 0x0010   (0x0001)  
	EFontLoadingPolicy                                 LoadingPolicy;                                              // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0012   (0x0002)  MISSED
	int32_t                                            SubFaceIndex;                                               // 0x0014   (0x0004)  
	class UObject*                                     FontFaceAsset;                                              // 0x0018   (0x0008)  
};

/// Struct /Script/SlateCore.TypefaceEntry
/// Size: 0x0030 (0x000000 - 0x000030)
struct FTypefaceEntry
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FFontData                                          Font;                                                       // 0x0010   (0x0020)  
};

/// Struct /Script/SlateCore.Typeface
/// Size: 0x0010 (0x000000 - 0x000010)
struct FTypeface
{ 
	TArray<FTypefaceEntry>                             Fonts;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/SlateCore.CompositeFallbackFont
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCompositeFallbackFont
{ 
	FTypeface                                          Typeface;                                                   // 0x0000   (0x0010)  
	float                                              ScalingFactor;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/SlateCore.CompositeSubFont
/// Size: 0x0020 (0x000018 - 0x000038)
struct FCompositeSubFont : FCompositeFallbackFont
{ 
	TArray<FInt32Range>                                CharacterRanges;                                            // 0x0018   (0x0010)  
	SDK_UNDEFINED(16,40) /* FString */                 __um(Cultures);                                             // 0x0028   (0x0010)  
};

/// Struct /Script/SlateCore.CompositeFont
/// Size: 0x0038 (0x000000 - 0x000038)
struct FCompositeFont
{ 
	FTypeface                                          DefaultTypeface;                                            // 0x0000   (0x0010)  
	FCompositeFallbackFont                             FallbackTypeface;                                           // 0x0010   (0x0018)  
	TArray<FCompositeSubFont>                          SubTypefaces;                                               // 0x0028   (0x0010)  
};

/// Struct /Script/SlateCore.CaptureLostEvent
/// Size: 0x0008 (0x000000 - 0x000008)
struct FCaptureLostEvent
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.WindowStyle
/// Size: 0x1168 (0x000008 - 0x001170)
struct FWindowStyle : FSlateWidgetStyle
{ 
	FButtonStyle                                       MinimizeButtonStyle;                                        // 0x0008   (0x02A8)  
	FButtonStyle                                       MaximizeButtonStyle;                                        // 0x02B0   (0x02A8)  
	FButtonStyle                                       RestoreButtonStyle;                                         // 0x0558   (0x02A8)  
	FButtonStyle                                       CloseButtonStyle;                                           // 0x0800   (0x02A8)  
	FTextBlockStyle                                    TitleTextStyle;                                             // 0x0AA8   (0x0288)  
	FSlateBrush                                        ActiveTitleBrush;                                           // 0x0D30   (0x0090)  
	FSlateBrush                                        InactiveTitleBrush;                                         // 0x0DC0   (0x0090)  
	FSlateBrush                                        FlashTitleBrush;                                            // 0x0E50   (0x0090)  
	FSlateColor                                        BackgroundColor;                                            // 0x0EE0   (0x0028)  
	FSlateBrush                                        OutlineBrush;                                               // 0x0F08   (0x0090)  
	FSlateColor                                        OutlineColor;                                               // 0x0F98   (0x0028)  
	FSlateBrush                                        BorderBrush;                                                // 0x0FC0   (0x0090)  
	FSlateBrush                                        BackgroundBrush;                                            // 0x1050   (0x0090)  
	FSlateBrush                                        ChildBackgroundBrush;                                       // 0x10E0   (0x0090)  
};

/// Struct /Script/SlateCore.ScrollBorderStyle
/// Size: 0x0120 (0x000008 - 0x000128)
struct FScrollBorderStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        TopShadowBrush;                                             // 0x0008   (0x0090)  
	FSlateBrush                                        BottomShadowBrush;                                          // 0x0098   (0x0090)  
};

/// Struct /Script/SlateCore.ScrollBoxStyle
/// Size: 0x0240 (0x000008 - 0x000248)
struct FScrollBoxStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        TopShadowBrush;                                             // 0x0008   (0x0090)  
	FSlateBrush                                        BottomShadowBrush;                                          // 0x0098   (0x0090)  
	FSlateBrush                                        LeftShadowBrush;                                            // 0x0128   (0x0090)  
	FSlateBrush                                        RightShadowBrush;                                           // 0x01B8   (0x0090)  
};

/// Struct /Script/SlateCore.DockTabStyle
/// Size: 0x0768 (0x000008 - 0x000770)
struct FDockTabStyle : FSlateWidgetStyle
{ 
	FButtonStyle                                       CloseButtonStyle;                                           // 0x0008   (0x02A8)  
	FSlateBrush                                        NormalBrush;                                                // 0x02B0   (0x0090)  
	FSlateBrush                                        ActiveBrush;                                                // 0x0340   (0x0090)  
	FSlateBrush                                        ColorOverlayTabBrush;                                       // 0x03D0   (0x0090)  
	FSlateBrush                                        ColorOverlayIconBrush;                                      // 0x0460   (0x0090)  
	FSlateBrush                                        ForegroundBrush;                                            // 0x04F0   (0x0090)  
	FSlateBrush                                        HoveredBrush;                                               // 0x0580   (0x0090)  
	FSlateBrush                                        ContentAreaBrush;                                           // 0x0610   (0x0090)  
	FSlateBrush                                        TabWellBrush;                                               // 0x06A0   (0x0090)  
	FMargin                                            TabPadding;                                                 // 0x0730   (0x0010)  
	float                                              OverlapWidth;                                               // 0x0740   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0744   (0x0004)  MISSED
	FSlateColor                                        FlashColor;                                                 // 0x0748   (0x0028)  
};

/// Struct /Script/SlateCore.TableColumnHeaderStyle
/// Size: 0x0510 (0x000008 - 0x000518)
struct FTableColumnHeaderStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        SortPrimaryAscendingImage;                                  // 0x0008   (0x0090)  
	FSlateBrush                                        SortPrimaryDescendingImage;                                 // 0x0098   (0x0090)  
	FSlateBrush                                        SortSecondaryAscendingImage;                                // 0x0128   (0x0090)  
	FSlateBrush                                        SortSecondaryDescendingImage;                               // 0x01B8   (0x0090)  
	FSlateBrush                                        NormalBrush;                                                // 0x0248   (0x0090)  
	FSlateBrush                                        HoveredBrush;                                               // 0x02D8   (0x0090)  
	FSlateBrush                                        MenuDropdownImage;                                          // 0x0368   (0x0090)  
	FSlateBrush                                        MenuDropdownNormalBorderBrush;                              // 0x03F8   (0x0090)  
	FSlateBrush                                        MenuDropdownHoveredBorderBrush;                             // 0x0488   (0x0090)  
};

/// Struct /Script/SlateCore.SplitterStyle
/// Size: 0x0120 (0x000008 - 0x000128)
struct FSplitterStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        HandleNormalBrush;                                          // 0x0008   (0x0090)  
	FSlateBrush                                        HandleHighlightBrush;                                       // 0x0098   (0x0090)  
};

/// Struct /Script/SlateCore.HeaderRowStyle
/// Size: 0x0C10 (0x000008 - 0x000C18)
struct FHeaderRowStyle : FSlateWidgetStyle
{ 
	FTableColumnHeaderStyle                            ColumnStyle;                                                // 0x0008   (0x0518)  
	FTableColumnHeaderStyle                            LastColumnStyle;                                            // 0x0520   (0x0518)  
	FSplitterStyle                                     ColumnSplitterStyle;                                        // 0x0A38   (0x0128)  
	FSlateBrush                                        BackgroundBrush;                                            // 0x0B60   (0x0090)  
	FSlateColor                                        ForegroundColor;                                            // 0x0BF0   (0x0028)  
};

/// Struct /Script/SlateCore.InlineTextImageStyle
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FInlineTextImageStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        Image;                                                      // 0x0008   (0x0090)  
	int16_t                                            Baseline;                                                   // 0x0098   (0x0002)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x009A   (0x0006)  MISSED
};

/// Struct /Script/SlateCore.SliderStyle
/// Size: 0x0368 (0x000008 - 0x000370)
struct FSliderStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        NormalBarImage;                                             // 0x0008   (0x0090)  
	FSlateBrush                                        HoveredBarImage;                                            // 0x0098   (0x0090)  
	FSlateBrush                                        DisabledBarImage;                                           // 0x0128   (0x0090)  
	FSlateBrush                                        NormalThumbImage;                                           // 0x01B8   (0x0090)  
	FSlateBrush                                        HoveredThumbImage;                                          // 0x0248   (0x0090)  
	FSlateBrush                                        DisabledThumbImage;                                         // 0x02D8   (0x0090)  
	float                                              BarThickness;                                               // 0x0368   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x036C   (0x0004)  MISSED
};

/// Struct /Script/SlateCore.VolumeControlStyle
/// Size: 0x0640 (0x000008 - 0x000648)
struct FVolumeControlStyle : FSlateWidgetStyle
{ 
	FSliderStyle                                       SliderStyle;                                                // 0x0008   (0x0370)  
	FSlateBrush                                        HighVolumeImage;                                            // 0x0378   (0x0090)  
	FSlateBrush                                        MidVolumeImage;                                             // 0x0408   (0x0090)  
	FSlateBrush                                        LowVolumeImage;                                             // 0x0498   (0x0090)  
	FSlateBrush                                        NoVolumeImage;                                              // 0x0528   (0x0090)  
	FSlateBrush                                        MutedImage;                                                 // 0x05B8   (0x0090)  
};

/// Struct /Script/SlateCore.SearchBoxStyle
/// Size: 0x0B10 (0x000008 - 0x000B18)
struct FSearchBoxStyle : FSlateWidgetStyle
{ 
	FEditableTextBoxStyle                              TextBoxStyle;                                               // 0x0008   (0x0860)  
	FSlateFontInfo                                     ActiveFontInfo;                                             // 0x0868   (0x0058)  
	FSlateBrush                                        UpArrowImage;                                               // 0x08C0   (0x0090)  
	FSlateBrush                                        DownArrowImage;                                             // 0x0950   (0x0090)  
	FSlateBrush                                        GlassImage;                                                 // 0x09E0   (0x0090)  
	FSlateBrush                                        ClearImage;                                                 // 0x0A70   (0x0090)  
	FMargin                                            ImagePadding;                                               // 0x0B00   (0x0010)  
	bool                                               bLeftAlignButtons;                                          // 0x0B10   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0B11   (0x0007)  MISSED
};

/// Struct /Script/SlateCore.ExpandableAreaStyle
/// Size: 0x0128 (0x000008 - 0x000130)
struct FExpandableAreaStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        CollapsedImage;                                             // 0x0008   (0x0090)  
	FSlateBrush                                        ExpandedImage;                                              // 0x0098   (0x0090)  
	float                                              RolloutAnimationSeconds;                                    // 0x0128   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x012C   (0x0004)  MISSED
};

/// Struct /Script/SlateCore.ProgressBarStyle
/// Size: 0x01B0 (0x000008 - 0x0001B8)
struct FProgressBarStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        BackgroundImage;                                            // 0x0008   (0x0090)  
	FSlateBrush                                        FillImage;                                                  // 0x0098   (0x0090)  
	FSlateBrush                                        MarqueeImage;                                               // 0x0128   (0x0090)  
};

/// Struct /Script/SlateCore.InlineEditableTextBlockStyle
/// Size: 0x0AE8 (0x000008 - 0x000AF0)
struct FInlineEditableTextBlockStyle : FSlateWidgetStyle
{ 
	FEditableTextBoxStyle                              EditableTextBoxStyle;                                       // 0x0008   (0x0860)  
	FTextBlockStyle                                    TextStyle;                                                  // 0x0868   (0x0288)  
};

/// Struct /Script/SlateCore.HyperlinkStyle
/// Size: 0x0540 (0x000008 - 0x000548)
struct FHyperlinkStyle : FSlateWidgetStyle
{ 
	FButtonStyle                                       UnderlineStyle;                                             // 0x0008   (0x02A8)  
	FTextBlockStyle                                    TextStyle;                                                  // 0x02B0   (0x0288)  
	FMargin                                            Padding;                                                    // 0x0538   (0x0010)  
};

/// Struct /Script/SlateCore.CheckBoxStyle
/// Size: 0x05D8 (0x000008 - 0x0005E0)
struct FCheckBoxStyle : FSlateWidgetStyle
{ 
	SDK_UNDEFINED(1,41) /* TEnumAsByte<ESlateCheckBoxType> */ __um(CheckBoxType);                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FSlateBrush                                        UncheckedImage;                                             // 0x0010   (0x0090)  
	FSlateBrush                                        UncheckedHoveredImage;                                      // 0x00A0   (0x0090)  
	FSlateBrush                                        UncheckedPressedImage;                                      // 0x0130   (0x0090)  
	FSlateBrush                                        CheckedImage;                                               // 0x01C0   (0x0090)  
	FSlateBrush                                        CheckedHoveredImage;                                        // 0x0250   (0x0090)  
	FSlateBrush                                        CheckedPressedImage;                                        // 0x02E0   (0x0090)  
	FSlateBrush                                        UndeterminedImage;                                          // 0x0370   (0x0090)  
	FSlateBrush                                        UndeterminedHoveredImage;                                   // 0x0400   (0x0090)  
	FSlateBrush                                        UndeterminedPressedImage;                                   // 0x0490   (0x0090)  
	FMargin                                            Padding;                                                    // 0x0520   (0x0010)  
	FSlateColor                                        ForegroundColor;                                            // 0x0530   (0x0028)  
	FSlateColor                                        BorderBackgroundColor;                                      // 0x0558   (0x0028)  
	FSlateSound                                        CheckedSlateSound;                                          // 0x0580   (0x0020)  
	FSlateSound                                        UncheckedSlateSound;                                        // 0x05A0   (0x0020)  
	FSlateSound                                        HoveredSlateSound;                                          // 0x05C0   (0x0020)  
};

