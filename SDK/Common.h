
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AkAudio
/// dependency: CoreUObject
/// dependency: DBDSharedTypes
/// dependency: DBDUIViewsCore
/// dependency: Engine
/// dependency: InputCore
/// dependency: SlateCore
/// dependency: UMG

/// Class /DBDUICore/Common/WBP_CoreSubtitles.WBP_CoreSubtitles_C
/// Size: 0x0020 (0x000320 - 0x000340)
class UWBP_CoreSubtitles_C : public UCoreSubtitlesWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0320   (0x0008)  
	class UAspectRatioBox*                             AspectRatio;                                                // 0x0328   (0x0008)  
	class UDBDImage*                                   SubtitlesBG;                                                // 0x0330   (0x0008)  
	class UOverlay*                                    SubtitlesContainer;                                         // 0x0338   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/WBP_CoreSubtitles.WBP_CoreSubtitles_C.SetFontSize
	// void SetFontSize(int32_t Size);                                                                                       // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/WBP_CoreSubtitles.WBP_CoreSubtitles_C.SetBackgroundOpacity
	// void SetBackgroundOpacity(ESubtitlesBackgroundOpacity backgroundOpacity);                                             // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/WBP_CoreSubtitles.WBP_CoreSubtitles_C.SetPositionByAnchor
	// void SetPositionByAnchor(FVector2D position);                                                                         // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/WBP_CoreSubtitles.WBP_CoreSubtitles_C.SetSubtitlesPosition
	// void SetSubtitlesPosition(ESubtitlesPosition position);                                                               // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/WBP_CoreSubtitles.WBP_CoreSubtitles_C.SetConstrainAspectRatioChanged
	// void SetConstrainAspectRatioChanged(bool isConstrained, float AspectRatio);                                           // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/WBP_CoreSubtitles.WBP_CoreSubtitles_C.SetSubtitlesSize
	// void SetSubtitlesSize(ESubtitlesSize Size);                                                                           // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/WBP_CoreSubtitles.WBP_CoreSubtitles_C.SetSubtitlesBackgroundOpacity
	// void SetSubtitlesBackgroundOpacity(ESubtitlesBackgroundOpacity Opacity);                                              // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/WBP_CoreSubtitles.WBP_CoreSubtitles_C.ExecuteUbergraph_WBP_CoreSubtitles
	// void ExecuteUbergraph_WBP_CoreSubtitles(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /DBDUICore/Common/WBP_LoadingSmall.WBP_LoadingSmall_C
/// Size: 0x0018 (0x000298 - 0x0002B0)
class UWBP_LoadingSmall_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0298   (0x0008)  
	class UWidgetAnimation*                            Spin;                                                       // 0x02A0   (0x0008)  
	class UDBDImage*                                   Loading;                                                    // 0x02A8   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/WBP_LoadingSmall.WBP_LoadingSmall_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/WBP_LoadingSmall.WBP_LoadingSmall_C.ExecuteUbergraph_WBP_LoadingSmall
	// void ExecuteUbergraph_WBP_LoadingSmall(int32_t EntryPoint);                                                           // [0x61c32d0] Final                
};

/// Class /DBDUICore/Common/Inputs/InputPrompts/WBP_CoreKeyListenerInputPrompt.WBP_CoreKeyListenerInputPrompt_C
/// Size: 0x0008 (0x000368 - 0x000370)
class UWBP_CoreKeyListenerInputPrompt_C : public UCoreKeyListenerInputPromptWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0368   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/Inputs/InputPrompts/WBP_CoreKeyListenerInputPrompt.WBP_CoreKeyListenerInputPrompt_C.OnEnabledChanged
	// void OnEnabledChanged(bool IsEnabled);                                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/InputPrompts/WBP_CoreKeyListenerInputPrompt.WBP_CoreKeyListenerInputPrompt_C.ExecuteUbergraph_WBP_CoreKeyListenerInputPrompt
	// void ExecuteUbergraph_WBP_CoreKeyListenerInputPrompt(int32_t EntryPoint);                                             // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Common/Inputs/InputPrompts/WBP_CoreInputPrompt.WBP_CoreInputPrompt_C
/// Size: 0x0090 (0x000350 - 0x0003E0)
class UWBP_CoreInputPrompt_C : public UCoreInputPromptWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0350   (0x0008)  
	class USpacer*                                     LeftSpacerForRect;                                          // 0x0358   (0x0008)  
	class UDBDImage*                                   PromptIcon;                                                 // 0x0360   (0x0008)  
	class USpacer*                                     RightSpacerForRect;                                         // 0x0368   (0x0008)  
	class UTextBlock*                                  TextLabel;                                                  // 0x0370   (0x0008)  
	SDK_UNDEFINED(80,3481) /* TMap<EControlMode, UDataTable*> */ __um(ControlModeDataMap);                         // 0x0378   (0x0050)  
	bool                                               IsPromptFound;                                              // 0x03C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x03C9   (0x0007)  MISSED
	class UTexture2D*                                  DefaultMouseKBIcon;                                         // 0x03D0   (0x0008)  
	SDK_UNDEFINED(1,3482) /* TEnumAsByte<EHorizontalAlignment> */ __um(PaddingAlignment);                          // 0x03D8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x03D9   (0x0003)  MISSED
	float                                              PaddingValue;                                               // 0x03DC   (0x0004)  


	/// Functions
	// Function /DBDUICore/Common/Inputs/InputPrompts/WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.HandlePromptDataRow
	// void HandlePromptDataRow(FInputPromptDataRow& PromptDataRow);                                                         // [0x61c32d0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/InputPrompts/WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.HandleUnfoundPrompt
	// void HandleUnfoundPrompt();                                                                                           // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/InputPrompts/WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.GetDataTable
	// void GetDataTable(class UDataTable*& DataTable, bool& IsFound);                                                       // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/InputPrompts/WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.SetIconTexture
	// void SetIconTexture(class UTexture2D*& iconTexture);                                                                  // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/InputPrompts/WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/InputPrompts/WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.DisplayPrompt
	// void DisplayPrompt();                                                                                                 // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/InputPrompts/WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.OnEnabledChanged
	// void OnEnabledChanged(bool IsEnabled);                                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/InputPrompts/WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.ExecuteUbergraph_WBP_CoreInputPrompt
	// void ExecuteUbergraph_WBP_CoreInputPrompt(int32_t EntryPoint);                                                        // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C
/// Size: 0x007C (0x000310 - 0x00038C)
class UWBP_CoreOnHoverBorder_C : public UCoreOnHoverBorderWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0310   (0x0008)  
	class UDBDImage*                                   Border;                                                     // 0x0318   (0x0008)  
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                            // 0x0320   (0x0008)  
	float                                              HoverDuration;                                              // 0x0328   (0x0004)  
	float                                              PressedDuration;                                            // 0x032C   (0x0004)  
	class UCoreButtonWidget*                           Button;                                                     // 0x0330   (0x0008)  
	class UMaterialInstance*                           MaterialInstance;                                           // 0x0338   (0x0008)  
	float                                              PreviewProgress;                                            // 0x0340   (0x0004)  
	int32_t                                            PreviewThickness;                                           // 0x0344   (0x0004)  
	SDK_UNDEFINED(16,3483) /* FString */               __um(PreviewWidth);                                         // 0x0348   (0x0010)  
	SDK_UNDEFINED(16,3484) /* FString */               __um(PreviewHeight);                                        // 0x0358   (0x0010)  
	float                                              WidthRatio;                                                 // 0x0368   (0x0004)  
	float                                              HeightRatio;                                                // 0x036C   (0x0004)  
	float                                              WidthRatio2;                                                // 0x0370   (0x0004)  
	float                                              HeightRatio2;                                               // 0x0374   (0x0004)  
	bool                                               AutoUnhoverCollapse;                                        // 0x0378   (0x0001)  
	bool                                               UseTiling;                                                  // 0x0379   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x037A   (0x0002)  MISSED
	FVector2D                                          ImageSize;                                                  // 0x037C   (0x0008)  
	float                                              EffectOffsetX;                                              // 0x0384   (0x0004)  
	float                                              EffectOffsetY;                                              // 0x0388   (0x0004)  


	/// Functions
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.AnimationCompleted
	// void AnimationCompleted();                                                                                            // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.PrintPreviewRatios
	// void PrintPreviewRatios();                                                                                            // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.OnPaint
	// void OnPaint(FPaintContext& Context);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.UpdateMaterialColors
	// void UpdateMaterialColors(FLinearColor progressBarColor, FLinearColor BackgroundColor);                               // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.PlayPressAnimation
	// void PlayPressAnimation(bool Forward);                                                                                // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.BindToButton
	// void BindToButton(class UCoreButtonWidget* buttonToBindOn);                                                           // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.OnHovered
	// void OnHovered(class UCoreButtonWidget* buttonTarget);                                                                // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.OnUnhovered
	// void OnUnhovered(class UCoreButtonWidget* buttonTarget);                                                              // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.OnPressed
	// void OnPressed(class UCoreButtonWidget* buttonTarget);                                                                // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.OnClicked
	// void OnClicked(class UCoreButtonWidget* buttonTarget);                                                                // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.PlayHoveredAnimation
	// void PlayHoveredAnimation(bool playForward);                                                                          // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.PlayPressedAnimation
	// void PlayPressedAnimation(bool playForward);                                                                          // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.OnReleased
	// void OnReleased(class UCoreButtonWidget* buttonTarget);                                                               // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.Destruct
	// void Destruct();                                                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.UpdateColors
	// void UpdateColors(FLinearColor& progressBarColor, FLinearColor& BackgroundColor);                                     // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.UnbindFromButton
	// void UnbindFromButton();                                                                                              // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.EndOfAnimationEvent
	// void EndOfAnimationEvent(class UUITweenInstance* tween);                                                              // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.ExecuteUbergraph_WBP_CoreOnHoverBorder
	// void ExecuteUbergraph_WBP_CoreOnHoverBorder(int32_t EntryPoint);                                                      // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Common/Sort/WBP_CoreSortButtonWidget.WBP_CoreSortButtonWidget_C
/// Size: 0x0010 (0x000428 - 0x000438)
class UWBP_CoreSortButtonWidget_C : public UCoreSortButtonWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0428   (0x0008)  
	class UWBP_CoreOnHoverBorder_C*                    OnHoverBorder;                                              // 0x0430   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/Sort/WBP_CoreSortButtonWidget.WBP_CoreSortButtonWidget_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Sort/WBP_CoreSortButtonWidget.WBP_CoreSortButtonWidget_C.ExecuteUbergraph_WBP_CoreSortButtonWidget
	// void ExecuteUbergraph_WBP_CoreSortButtonWidget(int32_t EntryPoint);                                                   // [0x61c32d0] Final                
};

/// Class /DBDUICore/Common/Rewards/WBP_CoreCustomizationRewardEmptySlot.WBP_CoreCustomizationRewardEmptySlot_C
/// Size: 0x0010 (0x000298 - 0x0002A8)
class UWBP_CoreCustomizationRewardEmptySlot_C : public UUserWidget
{ 
public:
	class UDBDImage*                                   BackgroundImage;                                            // 0x0298   (0x0008)  
	class UDBDImage*                                   Shadow;                                                     // 0x02A0   (0x0008)  
};

/// Class /DBDUICore/Common/ItemsDisplay/WBP_CustomizationItemGridContainer.WBP_CustomizationItemGridContainer_C
/// Size: 0x0039 (0x000380 - 0x0003B9)
class UWBP_CustomizationItemGridContainer_C : public UCustomizationItemGridContainer
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0380   (0x0008)  
	SDK_UNDEFINED(1,3485) /* TEnumAsByte<EHorizontalAlignment> */ __um(GridItemAlignment);                         // 0x0388   (0x0001)  
	bool                                               bShowScrollBarForDebug;                                     // 0x0389   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x038A   (0x0006)  MISSED
	FSlateColor                                        ScrollBarColor;                                             // 0x0390   (0x0028)  
	SDK_UNDEFINED(1,3486) /* TEnumAsByte<EHorizontalAlignment> */ __um(ScrollbarAlignment);                        // 0x03B8   (0x0001)  


	/// Functions
	// Function /DBDUICore/Common/ItemsDisplay/WBP_CustomizationItemGridContainer.WBP_CustomizationItemGridContainer_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/ItemsDisplay/WBP_CustomizationItemGridContainer.WBP_CustomizationItemGridContainer_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/ItemsDisplay/WBP_CustomizationItemGridContainer.WBP_CustomizationItemGridContainer_C.HandleAnalogInputEvent
	// void HandleAnalogInputEvent(FAnalogInputEvent& InAnalogInputEvent);                                                   // [0x61c32d0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /DBDUICore/Common/ItemsDisplay/WBP_CustomizationItemGridContainer.WBP_CustomizationItemGridContainer_C.OnControlModeChangedBP
	// void OnControlModeChangedBP(EControlMode controlMode);                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/ItemsDisplay/WBP_CustomizationItemGridContainer.WBP_CustomizationItemGridContainer_C.Destruct
	// void Destruct();                                                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/ItemsDisplay/WBP_CustomizationItemGridContainer.WBP_CustomizationItemGridContainer_C.ExecuteUbergraph_WBP_CustomizationItemGridContainer
	// void ExecuteUbergraph_WBP_CustomizationItemGridContainer(int32_t EntryPoint);                                         // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Common/Currency/WBP_CorePriceTag.WBP_CorePriceTag_C
/// Size: 0x003A (0x000320 - 0x00035A)
class UWBP_CorePriceTag_C : public UCorePriceTagWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0320   (0x0008)  
	class UDBDImage*                                   Background;                                                 // 0x0328   (0x0008)  
	class UDBDImage*                                   DiscountBackground;                                         // 0x0330   (0x0008)  
	class UOverlay*                                    DiscountLabel;                                              // 0x0338   (0x0008)  
	class UDBDImage*                                   DiscountStrike;                                             // 0x0340   (0x0008)  
	class UDBDTextBlock*                               DiscountText;                                               // 0x0348   (0x0008)  
	class UDBDTextBlock*                               PriceTB;                                                    // 0x0350   (0x0008)  
	bool                                               IsAffordable;                                               // 0x0358   (0x0001)  
	ECurrencyType                                      CurrencyType;                                               // 0x0359   (0x0001)  


	/// Functions
	// Function /DBDUICore/Common/Currency/WBP_CorePriceTag.WBP_CorePriceTag_C.SetPriceTagVisual
	// void SetPriceTagVisual();                                                                                             // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Currency/WBP_CorePriceTag.WBP_CorePriceTag_C.SetEnabled
	// void SetEnabled(bool Enabled);                                                                                        // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Currency/WBP_CorePriceTag.WBP_CorePriceTag_C.SetData
	// void SetData(FPriceTagViewData& ViewData);                                                                            // [0x61c32d0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /DBDUICore/Common/Currency/WBP_CorePriceTag.WBP_CorePriceTag_C.SetCurrencyIcon
	// void SetCurrencyIcon(ECurrencyType CurrencyType);                                                                     // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Currency/WBP_CorePriceTag.WBP_CorePriceTag_C.SetBackgroundVisible
	// void SetBackgroundVisible(bool showBackground);                                                                       // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Currency/WBP_CorePriceTag.WBP_CorePriceTag_C.ExecuteUbergraph_WBP_CorePriceTag
	// void ExecuteUbergraph_WBP_CorePriceTag(int32_t EntryPoint);                                                           // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Common/ItemsDisplay/WBP_ImagePreviewArea.WBP_ImagePreviewArea_C
/// Size: 0x0054 (0x000330 - 0x000384)
class UWBP_ImagePreviewArea_C : public UCoreImagePreviewAreaWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0330   (0x0008)  
	class UOverlay*                                    BottomItemsContainer;                                       // 0x0338   (0x0008)  
	class UScaleBox*                                   PreviewContainer;                                           // 0x0340   (0x0008)  
	class URetainerBox*                                PreviewRetainerBox;                                         // 0x0348   (0x0008)  
	float                                              ItemPreviewContainerPositionX;                              // 0x0350   (0x0004)  
	float                                              ItemPreviewContainerPositionY;                              // 0x0354   (0x0004)  
	float                                              ItemPreviewContainerScale;                                  // 0x0358   (0x0004)  
	float                                              BannerPreviewContainerPositionX;                            // 0x035C   (0x0004)  
	float                                              BannerPreviewContainerPositionY;                            // 0x0360   (0x0004)  
	float                                              BannerBgPositionX;                                          // 0x0364   (0x0004)  
	float                                              BannerBgPositionY;                                          // 0x0368   (0x0004)  
	float                                              BannerPreviewContainerScale;                                // 0x036C   (0x0004)  
	float                                              BottomItemsPositionY;                                       // 0x0370   (0x0004)  
	float                                              BannerAspectRatio;                                          // 0x0374   (0x0004)  
	FVector2D                                          ContainerSize;                                              // 0x0378   (0x0008)  
	float                                              BottomItemsPositionX;                                       // 0x0380   (0x0004)  


	/// Functions
	// Function /DBDUICore/Common/ItemsDisplay/WBP_ImagePreviewArea.WBP_ImagePreviewArea_C.SetItemPreviewContainer
	// void SetItemPreviewContainer();                                                                                       // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/ItemsDisplay/WBP_ImagePreviewArea.WBP_ImagePreviewArea_C.SetBannerPreviewContainer
	// void SetBannerPreviewContainer();                                                                                     // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/ItemsDisplay/WBP_ImagePreviewArea.WBP_ImagePreviewArea_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/ItemsDisplay/WBP_ImagePreviewArea.WBP_ImagePreviewArea_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/ItemsDisplay/WBP_ImagePreviewArea.WBP_ImagePreviewArea_C.ShowBGImage
	// void ShowBGImage();                                                                                                   // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/ItemsDisplay/WBP_ImagePreviewArea.WBP_ImagePreviewArea_C.SetPreviewContainerVisual
	// void SetPreviewContainerVisual(ECustomizationCategory CustomizationCategory);                                         // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/ItemsDisplay/WBP_ImagePreviewArea.WBP_ImagePreviewArea_C.ExecuteUbergraph_WBP_ImagePreviewArea
	// void ExecuteUbergraph_WBP_ImagePreviewArea(int32_t EntryPoint);                                                       // [0x61c32d0] Final                
};

/// Class /DBDUICore/Common/PlayerProfile/WBP_CoreRankPipsContainer.WBP_CoreRankPipsContainer_C
/// Size: 0x0028 (0x000298 - 0x0002C0)
class UWBP_CoreRankPipsContainer_C : public UUserWidget
{ 
public:
	class UWBP_CoreRankPip_C*                          WBP_CoreRankPip;                                            // 0x0298   (0x0008)  
	class UWBP_CoreRankPip_C*                          WBP_CoreRankPip0;                                           // 0x02A0   (0x0008)  
	class UWBP_CoreRankPip_C*                          WBP_CoreRankPip1;                                           // 0x02A8   (0x0008)  
	class UWBP_CoreRankPip_C*                          WBP_CoreRankPip2;                                           // 0x02B0   (0x0008)  
	class UWBP_CoreRankPip_C*                          WBP_CoreRankPip3;                                           // 0x02B8   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/PlayerProfile/WBP_CoreRankPipsContainer.WBP_CoreRankPipsContainer_C.SetPipsState
	// void SetPipsState(int32_t RankPipsCount, int32_t ActivePipsCount);                                                    // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /DBDUICore/Common/Notifications/WBP_CoreNotifications.WBP_CoreNotifications_C
/// Size: 0x0018 (0x000298 - 0x0002B0)
class UWBP_CoreNotifications_C : public UUserWidget
{ 
public:
	class UDBDImage*                                   circle;                                                     // 0x0298   (0x0008)  
	class UDBDImage*                                   Exclamation;                                                // 0x02A0   (0x0008)  
	class UDBDImage*                                   paintBG;                                                    // 0x02A8   (0x0008)  
};

/// Class /DBDUICore/Common/PlayerProfile/WBP_CorePlayerRankWrapper.WBP_CorePlayerRankWrapper_C
/// Size: 0x0030 (0x000358 - 0x000388)
class UWBP_CorePlayerRankWrapper_C : public UProfileMenuPlayerRankWrapper
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0358   (0x0008)  
	class UDBDImage*                                   BackgroundImage;                                            // 0x0360   (0x0008)  
	class UDBDTextBlock*                               PlayerRoleTB;                                               // 0x0368   (0x0008)  
	class UDBDTextBlock*                               ProgressTB;                                                 // 0x0370   (0x0008)  
	class UWBP_CorePlayerRank_C*                       WBP_CorePlayerRank;                                         // 0x0378   (0x0008)  
	class UWBP_CoreRankPipsContainer_C*                WBP_CoreRankPipsContainer;                                  // 0x0380   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerRankWrapper.WBP_CorePlayerRankWrapper_C.Set Background Image
	// void Set Background Image(TWeakObjectPtr<UTexture2D*> Texture);                                                       // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerRankWrapper.WBP_CorePlayerRankWrapper_C.SetData
	// void SetData(FRankViewData& Data);                                                                                    // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerRankWrapper.WBP_CorePlayerRankWrapper_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerRankWrapper.WBP_CorePlayerRankWrapper_C.ExecuteUbergraph_WBP_CorePlayerRankWrapper
	// void ExecuteUbergraph_WBP_CorePlayerRankWrapper(int32_t EntryPoint);                                                  // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Common/Rewards/WBP_CoreRewardWrapper.WBP_CoreRewardWrapper_C
/// Size: 0x0008 (0x0002D0 - 0x0002D8)
class UWBP_CoreRewardWrapper_C : public UCoreRewardWrapperWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02D0   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/Rewards/WBP_CoreRewardWrapper.WBP_CoreRewardWrapper_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreRewardWrapper.WBP_CoreRewardWrapper_C.ExecuteUbergraph_WBP_CoreRewardWrapper
	// void ExecuteUbergraph_WBP_CoreRewardWrapper(int32_t EntryPoint);                                                      // [0x61c32d0] Final                
};

/// Class /DBDUICore/Common/Inputs/InputSwitchers/WBP_CoreStandardInputSwitcher.WBP_CoreStandardInputSwitcher_C
/// Size: 0x0000 (0x0003A0 - 0x0003A0)
class UWBP_CoreStandardInputSwitcher_C : public UCoreInputSwitcherWidget
{ 
public:
};

/// Class /DBDUICore/Common/Inputs/InputSwitchers/WBP_CoreFooterInputSwitcher.WBP_CoreFooterInputSwitcher_C
/// Size: 0x0000 (0x0003A8 - 0x0003A8)
class UWBP_CoreFooterInputSwitcher_C : public UCoreFooterInputSwitcherWidget
{ 
public:
};

/// Class /DBDUICore/Common/Inputs/InputSwitchers/WBP_CoreBackInputSwitcher.WBP_CoreBackInputSwitcher_C
/// Size: 0x0000 (0x0003A0 - 0x0003A0)
class UWBP_CoreBackInputSwitcher_C : public UCoreInputSwitcherWidget
{ 
public:
};

/// Class /DBDUICore/Common/Rewards/WBP_CoreCurrencyProgressionReward.WBP_CoreCurrencyProgressionReward_C
/// Size: 0x0068 (0x000460 - 0x0004C8)
class UWBP_CoreCurrencyProgressionReward_C : public UCoreCurrencyProgressionRewardWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0460   (0x0008)  
	class UDBDTextBlock*                               AmountText;                                                 // 0x0468   (0x0008)  
	class UDBDImage*                                   BackgroundImage;                                            // 0x0470   (0x0008)  
	class UOverlay*                                    SelectedContainer;                                          // 0x0478   (0x0008)  
	class UDBDImage*                                   StreamingIcon;                                              // 0x0480   (0x0008)  
	class UDBDImage*                                   Tint;                                                       // 0x0488   (0x0008)  
	FGeometry                                          NewVar;                                                     // 0x0490   (0x0038)  


	/// Functions
	// Function /DBDUICore/Common/Rewards/WBP_CoreCurrencyProgressionReward.WBP_CoreCurrencyProgressionReward_C.Destruct
	// void Destruct();                                                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCurrencyProgressionReward.WBP_CoreCurrencyProgressionReward_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCurrencyProgressionReward.WBP_CoreCurrencyProgressionReward_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCurrencyProgressionReward.WBP_CoreCurrencyProgressionReward_C.OnSelectedChanged
	// void OnSelectedChanged(bool IsSelected);                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCurrencyProgressionReward.WBP_CoreCurrencyProgressionReward_C.SetCurrencyProgressionRewardData
	// void SetCurrencyProgressionRewardData(FCurrencyProgressionRewardViewData& CurrencyProgressionRewardViewData);         // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCurrencyProgressionReward.WBP_CoreCurrencyProgressionReward_C.ExecuteUbergraph_WBP_CoreCurrencyProgressionReward
	// void ExecuteUbergraph_WBP_CoreCurrencyProgressionReward(int32_t EntryPoint);                                          // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Common/Rewards/WBP_CoreCharacterReward.WBP_CoreCharacterReward_C
/// Size: 0x0040 (0x000460 - 0x0004A0)
class UWBP_CoreCharacterReward_C : public UCoreCharacterRewardWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0460   (0x0008)  
	class UDBDImage*                                   BackgroundImage;                                            // 0x0468   (0x0008)  
	class UDBDImage*                                   KillSwitchOverlay;                                          // 0x0470   (0x0008)  
	class UDBDImage*                                   PrestigeBG;                                                 // 0x0478   (0x0008)  
	class UDBDImage*                                   prestigeIcon;                                               // 0x0480   (0x0008)  
	class UDBDImage*                                   Shadow;                                                     // 0x0488   (0x0008)  
	class UDBDImage*                                   StreamingIcon;                                              // 0x0490   (0x0008)  
	class UDBDImage*                                   Tint;                                                       // 0x0498   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/Rewards/WBP_CoreCharacterReward.WBP_CoreCharacterReward_C.Destruct
	// void Destruct();                                                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCharacterReward.WBP_CoreCharacterReward_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCharacterReward.WBP_CoreCharacterReward_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCharacterReward.WBP_CoreCharacterReward_C.SetCharacterRewardData
	// void SetCharacterRewardData(FCharacterRewardViewData& CharacterRewardViewData);                                       // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCharacterReward.WBP_CoreCharacterReward_C.ExecuteUbergraph_WBP_CoreCharacterReward
	// void ExecuteUbergraph_WBP_CoreCharacterReward(int32_t EntryPoint);                                                    // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Common/Inputs/Buttons/WBP_CoreBackButton.WBP_CoreBackButton_C
/// Size: 0x006C (0x000440 - 0x0004AC)
class UWBP_CoreBackButton_C : public UCoreKeyListenerButtonWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0440   (0x0008)  
	class UWidgetAnimation*                            Disable;                                                    // 0x0448   (0x0008)  
	class UWidgetAnimation*                            Pressed;                                                    // 0x0450   (0x0008)  
	class UWidgetAnimation*                            Hover;                                                      // 0x0458   (0x0008)  
	class UWidgetAnimation*                            Default;                                                    // 0x0460   (0x0008)  
	class UDBDImage*                                   Arrow;                                                      // 0x0468   (0x0008)  
	class USizeBox*                                    BackgroundContainer;                                        // 0x0470   (0x0008)  
	class UDBDImage*                                   BG;                                                         // 0x0478   (0x0008)  
	class UOverlay*                                    Overlay;                                                    // 0x0480   (0x0008)  
	class UDBDImage*                                   SmokeBG;                                                    // 0x0488   (0x0008)  
	class UGridPanel*                                  TextContainer;                                              // 0x0490   (0x0008)  
	SDK_UNDEFINED(16,3487) /* FString */               __um(ActionMapping);                                        // 0x0498   (0x0010)  
	float                                              PaddingText;                                                // 0x04A8   (0x0004)  


	/// Functions
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreBackButton.WBP_CoreBackButton_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreBackButton.WBP_CoreBackButton_C.OnAlignmentChanged
	// void OnAlignmentChanged(TEnumAsByte<ETextJustify> newAlignment);                                                      // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreBackButton.WBP_CoreBackButton_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreBackButton.WBP_CoreBackButton_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreBackButton.WBP_CoreBackButton_C.OnPressed
	// void OnPressed();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreBackButton.WBP_CoreBackButton_C.ExecuteUbergraph_WBP_CoreBackButton
	// void ExecuteUbergraph_WBP_CoreBackButton(int32_t EntryPoint);                                                         // [0x61c32d0] Final                
};

/// Class /DBDUICore/Common/Inputs/Buttons/WBP_CoreFooterButton.WBP_CoreFooterButton_C
/// Size: 0x0038 (0x000448 - 0x000480)
class UWBP_CoreFooterButton_C : public UCoreFooterButtonWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0448   (0x0008)  
	SDK_UNDEFINED(48,3488) /* TWeakObjectPtr<UTexture2D*> */ __um(iconTexture);                                    // 0x0450   (0x0030)  


	/// Functions
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreFooterButton.WBP_CoreFooterButton_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreFooterButton.WBP_CoreFooterButton_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreFooterButton.WBP_CoreFooterButton_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreFooterButton.WBP_CoreFooterButton_C.SetHoveredColor
	// void SetHoveredColor();                                                                                               // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreFooterButton.WBP_CoreFooterButton_C.SetUnhoveredColor
	// void SetUnhoveredColor();                                                                                             // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreFooterButton.WBP_CoreFooterButton_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreFooterButton.WBP_CoreFooterButton_C.ExecuteUbergraph_WBP_CoreFooterButton
	// void ExecuteUbergraph_WBP_CoreFooterButton(int32_t EntryPoint);                                                       // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Common/Inputs/Buttons/WBP_CoreStandardButton.WBP_CoreStandardButton_C
/// Size: 0x0068 (0x000440 - 0x0004A8)
class UWBP_CoreStandardButton_C : public UCoreKeyListenerButtonWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0440   (0x0008)  
	class UWidgetAnimation*                            Disable;                                                    // 0x0448   (0x0008)  
	class UWidgetAnimation*                            Pressed;                                                    // 0x0450   (0x0008)  
	class UWidgetAnimation*                            Hover;                                                      // 0x0458   (0x0008)  
	class UWidgetAnimation*                            Default;                                                    // 0x0460   (0x0008)  
	class USizeBox*                                    BackgroundContainer;                                        // 0x0468   (0x0008)  
	class UDBDImage*                                   BG;                                                         // 0x0470   (0x0008)  
	class UOverlay*                                    Overlay;                                                    // 0x0478   (0x0008)  
	class UDBDImage*                                   RedTraitIMG;                                                // 0x0480   (0x0008)  
	class UDBDImage*                                   SmokeBG;                                                    // 0x0488   (0x0008)  
	float                                              PaddingText;                                                // 0x0490   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0494   (0x0004)  MISSED
	SDK_UNDEFINED(16,3489) /* FString */               __um(ActionMapping);                                        // 0x0498   (0x0010)  


	/// Functions
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnAlignmentChanged
	// void OnAlignmentChanged(TEnumAsByte<ETextJustify> newAlignment);                                                      // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnPressed
	// void OnPressed();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnEnabledChanged
	// void OnEnabledChanged(bool IsEnabled);                                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreStandardButton.WBP_CoreStandardButton_C.ExecuteUbergraph_WBP_CoreStandardButton
	// void ExecuteUbergraph_WBP_CoreStandardButton(int32_t EntryPoint);                                                     // [0x61c32d0] Final                
};

/// Class /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevelExpGauge.WBP_CorePlayerLevelExpGauge_C
/// Size: 0x0040 (0x000358 - 0x000398)
class UWBP_CorePlayerLevelExpGauge_C : public UCorePlayerExpGaugeWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0358   (0x0008)  
	class UDBDImage*                                   Background;                                                 // 0x0360   (0x0008)  
	class UDBDImage*                                   Gauge;                                                      // 0x0368   (0x0008)  
	class UDBDTextBlock*                               Progress;                                                   // 0x0370   (0x0008)  
	class UDBDTextBlock*                               xpTotalTB;                                                  // 0x0378   (0x0008)  
	class UDBDTextBlock*                               xpValueTB;                                                  // 0x0380   (0x0008)  
	class UMaterialInstanceDynamic*                    GaugeMaterial;                                              // 0x0388   (0x0008)  
	int32_t                                            CurrentXP;                                                  // 0x0390   (0x0004)  
	int32_t                                            MaxXp;                                                      // 0x0394   (0x0004)  


	/// Functions
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevelExpGauge.WBP_CorePlayerLevelExpGauge_C.UpdateGauge
	// void UpdateGauge(float PlayerExp, float NextLevelExp);                                                                // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevelExpGauge.WBP_CorePlayerLevelExpGauge_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevelExpGauge.WBP_CorePlayerLevelExpGauge_C.OnPlayMaxValueAnimation
	// void OnPlayMaxValueAnimation();                                                                                       // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevelExpGauge.WBP_CorePlayerLevelExpGauge_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevelExpGauge.WBP_CorePlayerLevelExpGauge_C.SetViewData
	// void SetViewData(FPlayerLevelViewData& playerViewData);                                                               // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevelExpGauge.WBP_CorePlayerLevelExpGauge_C.OnUpdateProgress
	// void OnUpdateProgress(class UUITweenInstance* tween);                                                                 // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevelExpGauge.WBP_CorePlayerLevelExpGauge_C.Add
	// void Add(int32_t bonusXp);                                                                                            // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevelExpGauge.WBP_CorePlayerLevelExpGauge_C.OnUpdateComplete
	// void OnUpdateComplete(class UUITweenInstance* tween);                                                                 // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevelExpGauge.WBP_CorePlayerLevelExpGauge_C.ExecuteUbergraph_WBP_CorePlayerLevelExpGauge
	// void ExecuteUbergraph_WBP_CorePlayerLevelExpGauge(int32_t EntryPoint);                                                // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Common/Overlays/WBP_LockedOverlay.WBP_LockedOverlay_C
/// Size: 0x0038 (0x000310 - 0x000348)
class UWBP_LockedOverlay_C : public UCoreLockedOverlayWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0310   (0x0008)  
	class UWidgetAnimation*                            UnlockAnim;                                                 // 0x0318   (0x0008)  
	class UDBDImage*                                   LockedMaterial;                                             // 0x0320   (0x0008)  
	class UTexture2D*                                  BackgroundTexture;                                          // 0x0328   (0x0008)  
	float                                              IconScaleX;                                                 // 0x0330   (0x0004)  
	float                                              IconScaleY;                                                 // 0x0334   (0x0004)  
	float                                              IconOffsetX;                                                // 0x0338   (0x0004)  
	float                                              IconOffsetY;                                                // 0x033C   (0x0004)  
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                            // 0x0340   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/Overlays/WBP_LockedOverlay.WBP_LockedOverlay_C.SetMaterial
	// void SetMaterial(bool useAnimation);                                                                                  // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Overlays/WBP_LockedOverlay.WBP_LockedOverlay_C.Finished_CAC253D64C47EC4CC34AE7898425099E
	// void Finished_CAC253D64C47EC4CC34AE7898425099E();                                                                     // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Overlays/WBP_LockedOverlay.WBP_LockedOverlay_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Overlays/WBP_LockedOverlay.WBP_LockedOverlay_C.SetIsLocked
	// void SetIsLocked(bool IsLocked, bool useAnimation);                                                                   // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Overlays/WBP_LockedOverlay.WBP_LockedOverlay_C.ExecuteUbergraph_WBP_LockedOverlay
	// void ExecuteUbergraph_WBP_LockedOverlay(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /DBDUICore/Common/PlayerProfile/WBP_CoreRankPip.WBP_CoreRankPip_C
/// Size: 0x002D (0x000298 - 0x0002C5)
class UWBP_CoreRankPip_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0298   (0x0008)  
	class UDBDImage*                                   Background;                                                 // 0x02A0   (0x0008)  
	class UDBDImage*                                   Foreground;                                                 // 0x02A8   (0x0008)  
	class UMaterialInstanceDynamic*                    backgroundMaterial;                                         // 0x02B0   (0x0008)  
	class UMaterialInstanceDynamic*                    ForegroundMaterial;                                         // 0x02B8   (0x0008)  
	int32_t                                            PipSeed;                                                    // 0x02C0   (0x0004)  
	bool                                               PipActivated;                                               // 0x02C4   (0x0001)  


	/// Functions
	// Function /DBDUICore/Common/PlayerProfile/WBP_CoreRankPip.WBP_CoreRankPip_C.UpdatePipVisual
	// void UpdatePipVisual(int32_t PipSeed);                                                                                // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CoreRankPip.WBP_CoreRankPip_C.SetState
	// void SetState(bool IsVisible, bool IsActivePip);                                                                      // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CoreRankPip.WBP_CoreRankPip_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CoreRankPip.WBP_CoreRankPip_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CoreRankPip.WBP_CoreRankPip_C.ExecuteUbergraph_WBP_CoreRankPip
	// void ExecuteUbergraph_WBP_CoreRankPip(int32_t EntryPoint);                                                            // [0x61c32d0] Final                
};

/// Class /DBDUICore/Common/PlayerProfile/WBP_CorePlayerRank.WBP_CorePlayerRank_C
/// Size: 0x0010 (0x000510 - 0x000520)
class UWBP_CorePlayerRank_C : public UCorePlayerRankWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0510   (0x0008)  
	bool                                               TestIsKiller;                                               // 0x0518   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0519   (0x0003)  MISSED
	int32_t                                            TestRankIndex;                                              // 0x051C   (0x0004)  


	/// Functions
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerRank.WBP_CorePlayerRank_C.SetData
	// void SetData(FRankViewData& Data);                                                                                    // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerRank.WBP_CorePlayerRank_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerRank.WBP_CorePlayerRank_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerRank.WBP_CorePlayerRank_C.Destruct
	// void Destruct();                                                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerRank.WBP_CorePlayerRank_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerRank.WBP_CorePlayerRank_C.AnimateRankUp
	// void AnimateRankUp();                                                                                                 // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerRank.WBP_CorePlayerRank_C.ExecuteUbergraph_WBP_CorePlayerRank
	// void ExecuteUbergraph_WBP_CorePlayerRank(int32_t EntryPoint);                                                         // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Common/Rewards/WBP_CoreCustomizationReward.WBP_CoreCustomizationReward_C
/// Size: 0x0090 (0x000648 - 0x0006D8)
class UWBP_CoreCustomizationReward_C : public UCoreCustomizationRewardWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0648   (0x0008)  
	class UDBDImage*                                   BackgroundImage;                                            // 0x0650   (0x0008)  
	class UOverlay*                                    CheckmarkOverlay;                                           // 0x0658   (0x0008)  
	class UTextBlock*                                  DiscountIndicatorTB;                                        // 0x0660   (0x0008)  
	class UOverlay*                                    DiscountTimeFlag;                                           // 0x0668   (0x0008)  
	class UOverlay*                                    EventPointsOverlay;                                         // 0x0670   (0x0008)  
	class UOverlay*                                    KillSwitch;                                                 // 0x0678   (0x0008)  
	class UDBDImage*                                   KillSwitchIcon;                                             // 0x0680   (0x0008)  
	class UTextBlock*                                  LimitedIndicatorTB;                                         // 0x0688   (0x0008)  
	class UOverlay*                                    LimitedTimeFlag;                                            // 0x0690   (0x0008)  
	class UTextBlock*                                  OwnderIndicatorTB;                                          // 0x0698   (0x0008)  
	class UOverlay*                                    OwnedIndicator;                                             // 0x06A0   (0x0008)  
	class UOverlay*                                    SelectedContainer;                                          // 0x06A8   (0x0008)  
	class UDBDImage*                                   Shadow;                                                     // 0x06B0   (0x0008)  
	class UDBDImage*                                   StreamingIcon;                                              // 0x06B8   (0x0008)  
	class UOverlay*                                    UnbreakableSetIcon;                                         // 0x06C0   (0x0008)  
	class UDBDImage*                                   UnbreakableSetIconImage;                                    // 0x06C8   (0x0008)  
	class UOverlay*                                    VisceralOverlay;                                            // 0x06D0   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/Rewards/WBP_CoreCustomizationReward.WBP_CoreCustomizationReward_C.Destruct
	// void Destruct();                                                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCustomizationReward.WBP_CoreCustomizationReward_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCustomizationReward.WBP_CoreCustomizationReward_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCustomizationReward.WBP_CoreCustomizationReward_C.OnSelectedChanged
	// void OnSelectedChanged(bool IsSelected);                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCustomizationReward.WBP_CoreCustomizationReward_C.SetCustomizationRewardData
	// void SetCustomizationRewardData(FCustomizationRewardViewData& CustomizationRewardViewData);                           // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCustomizationReward.WBP_CoreCustomizationReward_C.SetMilestoneTrackerOwnedVisuals
	// void SetMilestoneTrackerOwnedVisuals(bool IsOwned, bool useAnimation);                                                // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCustomizationReward.WBP_CoreCustomizationReward_C.SetOwnedText
	// void SetOwnedText(FText& ownedText);                                                                                  // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCustomizationReward.WBP_CoreCustomizationReward_C.SetSmallTemplate
	// void SetSmallTemplate(bool useSmallTemplate);                                                                         // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCustomizationReward.WBP_CoreCustomizationReward_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCustomizationReward.WBP_CoreCustomizationReward_C.SetDiscountTimeText
	// void SetDiscountTimeText(FString DiscountTimeText);                                                                   // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCustomizationReward.WBP_CoreCustomizationReward_C.SetLimitedTimeText
	// void SetLimitedTimeText(FString LimitedTimeText);                                                                     // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCustomizationReward.WBP_CoreCustomizationReward_C.HideTimeTexts
	// void HideTimeTexts();                                                                                                 // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCustomizationReward.WBP_CoreCustomizationReward_C.ExecuteUbergraph_WBP_CoreCustomizationReward
	// void ExecuteUbergraph_WBP_CoreCustomizationReward(int32_t EntryPoint);                                                // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Common/ScalableIconsDecorator.ScalableIconsDecorator_C
/// Size: 0x0000 (0x000068 - 0x000068)
class UScalableIconsDecorator_C : public URichTextBlockScalableImageDecorator
{ 
public:
};

/// Class /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevel.WBP_CorePlayerLevel_C
/// Size: 0x0020 (0x000408 - 0x000428)
class UWBP_CorePlayerLevel_C : public UCorePlayerLevelWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0408   (0x0008)  
	class UDBDImage*                                   LevelBG;                                                    // 0x0410   (0x0008)  
	class UDBDTextBlock*                               LevelTB;                                                    // 0x0418   (0x0008)  
	class UDBDTextBlock*                               PrestigeTB;                                                 // 0x0420   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevel.WBP_CorePlayerLevel_C.SetViewData
	// void SetViewData(FPlayerLevelViewData& PlayerLevelViewData);                                                          // [0x61c32d0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevel.WBP_CorePlayerLevel_C.SetDataFromViewData
	// void SetDataFromViewData(int32_t value, int32_t Value2);                                                              // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevel.WBP_CorePlayerLevel_C.SetData
	// void SetData(FPlayerLevelViewData& ViewData);                                                                         // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevel.WBP_CorePlayerLevel_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevel.WBP_CorePlayerLevel_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevel.WBP_CorePlayerLevel_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevel.WBP_CorePlayerLevel_C.Destruct
	// void Destruct();                                                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevel.WBP_CorePlayerLevel_C.AnimateLevelUp
	// void AnimateLevelUp();                                                                                                // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevel.WBP_CorePlayerLevel_C.ExecuteUbergraph_WBP_CorePlayerLevel
	// void ExecuteUbergraph_WBP_CorePlayerLevel(int32_t EntryPoint);                                                        // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Common/Inputs/InputSwitchers/WBP_CoreArchiveInputSwitcher.WBP_CoreArchiveInputSwitcher_C
/// Size: 0x0008 (0x0003A0 - 0x0003A8)
class UWBP_CoreArchiveInputSwitcher_C : public UCoreInputSwitcherWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03A0   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/Inputs/InputSwitchers/WBP_CoreArchiveInputSwitcher.WBP_CoreArchiveInputSwitcher_C.OnAlignmentChanged
	// void OnAlignmentChanged(TEnumAsByte<ETextJustify> newAlignment);                                                      // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/InputSwitchers/WBP_CoreArchiveInputSwitcher.WBP_CoreArchiveInputSwitcher_C.ExecuteUbergraph_WBP_CoreArchiveInputSwitcher
	// void ExecuteUbergraph_WBP_CoreArchiveInputSwitcher(int32_t EntryPoint);                                               // [0x61c32d0] Final                
};

/// Class /DBDUICore/Common/Inputs/DragZone.DragZone_C
/// Size: 0x0008 (0x0002F0 - 0x0002F8)
class UDragZone_C : public UDragZone
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02F0   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/Inputs/DragZone.DragZone_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/DragZone.DragZone_C.ExecuteUbergraph_DragZone
	// void ExecuteUbergraph_DragZone(int32_t EntryPoint);                                                                   // [0x61c32d0] Final                
};

/// Class /DBDUICore/Common/Inputs/InputPrompts/WBP_CoreCurrencyInputPrompt.WBP_CoreCurrencyInputPrompt_C
/// Size: 0x0008 (0x000370 - 0x000378)
class UWBP_CoreCurrencyInputPrompt_C : public UCoreCurrencyPromptWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0370   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/Inputs/InputPrompts/WBP_CoreCurrencyInputPrompt.WBP_CoreCurrencyInputPrompt_C.OnEnabledChanged
	// void OnEnabledChanged(bool IsEnabled);                                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/InputPrompts/WBP_CoreCurrencyInputPrompt.WBP_CoreCurrencyInputPrompt_C.ExecuteUbergraph_WBP_CoreCurrencyInputPrompt
	// void ExecuteUbergraph_WBP_CoreCurrencyInputPrompt(int32_t EntryPoint);                                                // [0x61c32d0] Final                
};

/// Class /DBDUICore/Common/PlayerProfile/WBP_CoreWallet.WBP_CoreWallet_C
/// Size: 0x0008 (0x000380 - 0x000388)
class UWBP_CoreWallet_C : public UCoreWalletWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0380   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/PlayerProfile/WBP_CoreWallet.WBP_CoreWallet_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CoreWallet.WBP_CoreWallet_C.ExecuteUbergraph_WBP_CoreWallet
	// void ExecuteUbergraph_WBP_CoreWallet(int32_t EntryPoint);                                                             // [0x61c32d0] Final                
};

/// Class /DBDUICore/Common/PlayerProfile/WBP_CorePlayerName.WBP_CorePlayerName_C
/// Size: 0x0000 (0x000318 - 0x000318)
class UWBP_CorePlayerName_C : public UCorePlayerNameWidget
{ 
public:
};

/// Class /DBDUICore/Common/Tabs/WBP_CoreTab.WBP_CoreTab_C
/// Size: 0x0008 (0x000478 - 0x000480)
class UWBP_CoreTab_C : public UCoreTabWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0478   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/Tabs/WBP_CoreTab.WBP_CoreTab_C.SetTextFieldColor
	// void SetTextFieldColor(FLinearColor Color);                                                                           // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Tabs/WBP_CoreTab.WBP_CoreTab_C.OnSelectedChanged
	// void OnSelectedChanged(bool IsSelected);                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Tabs/WBP_CoreTab.WBP_CoreTab_C.OnEnabledChanged
	// void OnEnabledChanged(bool IsEnabled);                                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Tabs/WBP_CoreTab.WBP_CoreTab_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Tabs/WBP_CoreTab.WBP_CoreTab_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Tabs/WBP_CoreTab.WBP_CoreTab_C.ExecuteUbergraph_WBP_CoreTab
	// void ExecuteUbergraph_WBP_CoreTab(int32_t EntryPoint);                                                                // [0x61c32d0] Final                
};

/// Class /DBDUICore/Common/DisplayStand/WBP_CoreDisplayStandWidget.WBP_CoreDisplayStandWidget_C
/// Size: 0x0000 (0x000330 - 0x000330)
class UWBP_CoreDisplayStandWidget_C : public UCoreDisplayStandWidget
{ 
public:
};

/// Class /DBDUICore/Common/Inputs/InputPrompts/WBP_CoreIconInputPrompt.WBP_CoreIconInputPrompt_C
/// Size: 0x0008 (0x000368 - 0x000370)
class UWBP_CoreIconInputPrompt_C : public UCoreKeyListenerInputPromptWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0368   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/Inputs/InputPrompts/WBP_CoreIconInputPrompt.WBP_CoreIconInputPrompt_C.OnEnabledChanged
	// void OnEnabledChanged(bool IsEnabled);                                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/InputPrompts/WBP_CoreIconInputPrompt.WBP_CoreIconInputPrompt_C.ExecuteUbergraph_WBP_CoreIconInputPrompt
	// void ExecuteUbergraph_WBP_CoreIconInputPrompt(int32_t EntryPoint);                                                    // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Common/Inputs/Buttons/WBP_CoreArchiveButton.WBP_CoreArchiveButton_C
/// Size: 0x0068 (0x000440 - 0x0004A8)
class UWBP_CoreArchiveButton_C : public UCoreKeyListenerButtonWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0440   (0x0008)  
	class UWidgetAnimation*                            Disable;                                                    // 0x0448   (0x0008)  
	class UWidgetAnimation*                            Pressed;                                                    // 0x0450   (0x0008)  
	class UWidgetAnimation*                            Hover;                                                      // 0x0458   (0x0008)  
	class UWidgetAnimation*                            Default;                                                    // 0x0460   (0x0008)  
	class USizeBox*                                    BackgroundContainer;                                        // 0x0468   (0x0008)  
	class UDBDImage*                                   EventIcon;                                                  // 0x0470   (0x0008)  
	class UOverlay*                                    OverlayBG;                                                  // 0x0478   (0x0008)  
	class UDBDImage*                                   SmokeBG;                                                    // 0x0480   (0x0008)  
	class UGridPanel*                                  TextContainer;                                              // 0x0488   (0x0008)  
	float                                              PaddingText;                                                // 0x0490   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0494   (0x0004)  MISSED
	SDK_UNDEFINED(16,3490) /* FString */               __um(ActionMapping);                                        // 0x0498   (0x0010)  


	/// Functions
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreArchiveButton.WBP_CoreArchiveButton_C.OnAlignmentChanged
	// void OnAlignmentChanged(TEnumAsByte<ETextJustify> newAlignment);                                                      // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreArchiveButton.WBP_CoreArchiveButton_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreArchiveButton.WBP_CoreArchiveButton_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreArchiveButton.WBP_CoreArchiveButton_C.OnEnabledChanged
	// void OnEnabledChanged(bool IsEnabled);                                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreArchiveButton.WBP_CoreArchiveButton_C.OnPressed
	// void OnPressed();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreArchiveButton.WBP_CoreArchiveButton_C.ExecuteUbergraph_WBP_CoreArchiveButton
	// void ExecuteUbergraph_WBP_CoreArchiveButton(int32_t EntryPoint);                                                      // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Common/PlayerProfile/WBP_CoreCurrencyLabel.WBP_CoreCurrencyLabel_C
/// Size: 0x0044 (0x000408 - 0x00044C)
class UWBP_CoreCurrencyLabel_C : public UCoreCurrencyLabelWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0408   (0x0008)  
	class UWidgetAnimation*                            UpdateCurrencyAnimation;                                    // 0x0410   (0x0008)  
	class UWidgetAnimation*                            Hover;                                                      // 0x0418   (0x0008)  
	class UWidgetAnimation*                            BonusAnimation;                                             // 0x0420   (0x0008)  
	class UOverlay*                                    BonusAnimationContainer;                                    // 0x0428   (0x0008)  
	class UDBDImage*                                   BuyShortcutIMG;                                             // 0x0430   (0x0008)  
	class UDBDImage*                                   CurrencyIMG;                                                // 0x0438   (0x0008)  
	class UDBDTextBlock*                               RemovedLabelTB;                                             // 0x0440   (0x0008)  
	int32_t                                            TestInt;                                                    // 0x0448   (0x0004)  


	/// Functions
	// Function /DBDUICore/Common/PlayerProfile/WBP_CoreCurrencyLabel.WBP_CoreCurrencyLabel_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CoreCurrencyLabel.WBP_CoreCurrencyLabel_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CoreCurrencyLabel.WBP_CoreCurrencyLabel_C.Destruct
	// void Destruct();                                                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CoreCurrencyLabel.WBP_CoreCurrencyLabel_C.SetData
	// void SetData(FCurrencyLabelViewData& ViewData);                                                                       // [0x61c32d0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CoreCurrencyLabel.WBP_CoreCurrencyLabel_C.UpdateCurrency
	// void UpdateCurrency(int32_t newBalance, int32_t previousBalance);                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CoreCurrencyLabel.WBP_CoreCurrencyLabel_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CoreCurrencyLabel.WBP_CoreCurrencyLabel_C.ExecuteUbergraph_WBP_CoreCurrencyLabel
	// void ExecuteUbergraph_WBP_CoreCurrencyLabel(int32_t EntryPoint);                                                      // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Common/Inputs/InputSwitchers/WBP_CoreChangeAccountInputSwitcher.WBP_CoreChangeAccountInputSwitcher_C
/// Size: 0x0008 (0x0003A0 - 0x0003A8)
class UWBP_CoreChangeAccountInputSwitcher_C : public UCoreInputSwitcherWidget
{ 
public:
	class UDBDImage*                                   Background;                                                 // 0x03A0   (0x0008)  
};

/// Class /DBDUICore/Common/Tabs/WBP_CoreShadowTab.WBP_CoreShadowTab_C
/// Size: 0x00D0 (0x000478 - 0x000548)
class UWBP_CoreShadowTab_C : public UCoreTabWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0478   (0x0008)  
	class UDBDImage*                                   DBDImage;                                                   // 0x0480   (0x0008)  
	class UDBDImage*                                   Selected;                                                   // 0x0488   (0x0008)  
	class UAkComponent*                                AudioComponent;                                             // 0x0490   (0x0008)  
	FSlateFontInfo                                     SelectedFont;                                               // 0x0498   (0x0058)  
	FSlateFontInfo                                     DefaultFont;                                                // 0x04F0   (0x0058)  


	/// Functions
	// Function /DBDUICore/Common/Tabs/WBP_CoreShadowTab.WBP_CoreShadowTab_C.SetTextFieldFont
	// void SetTextFieldFont(FSlateFontInfo Font);                                                                           // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Tabs/WBP_CoreShadowTab.WBP_CoreShadowTab_C.SetTextFieldColor
	// void SetTextFieldColor(FLinearColor Color);                                                                           // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Tabs/WBP_CoreShadowTab.WBP_CoreShadowTab_C.OnSelectedChanged
	// void OnSelectedChanged(bool IsSelected);                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Tabs/WBP_CoreShadowTab.WBP_CoreShadowTab_C.OnEnabledChanged
	// void OnEnabledChanged(bool IsEnabled);                                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Tabs/WBP_CoreShadowTab.WBP_CoreShadowTab_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Tabs/WBP_CoreShadowTab.WBP_CoreShadowTab_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Tabs/WBP_CoreShadowTab.WBP_CoreShadowTab_C.UpdateBackgroundSkin
	// void UpdateBackgroundSkin(class UMaterialInterface* skinMaterial);                                                    // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Tabs/WBP_CoreShadowTab.WBP_CoreShadowTab_C.ExecuteUbergraph_WBP_CoreShadowTab
	// void ExecuteUbergraph_WBP_CoreShadowTab(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /DBDUICore/Common/PlayerCard/WBP_CorePlayerCardContainer.WBP_CorePlayerCardContainer_C
/// Size: 0x0088 (0x000328 - 0x0003B0)
class UWBP_CorePlayerCardContainer_C : public UCorePlayerCardWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0328   (0x0008)  
	class UDBDButton*                                  OnHoverZone;                                                // 0x0330   (0x0008)  
	class UObject*                                     WBPAnimation;                                               // 0x0338   (0x0008)  
	class UObject*                                     iconTexture;                                                // 0x0340   (0x0008)  
	SDK_UNDEFINED(48,3491) /* TWeakObjectPtr<UTexture2D*> */ __um(BadgeTexture);                                   // 0x0348   (0x0030)  
	ECustomizationCategory                             category;                                                   // 0x0378   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0379   (0x0007)  MISSED
	SDK_UNDEFINED(48,3492) /* TWeakObjectPtr<UTexture2D*> */ __um(BannerTexture);                                  // 0x0380   (0x0030)  


	/// Functions
	// Function /DBDUICore/Common/PlayerCard/WBP_CorePlayerCardContainer.WBP_CorePlayerCardContainer_C.SetAnimation
	// void SetAnimation(class UClass* WidgetAnimation, class UUserWidget*& WidgetObj);                                      // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerCard/WBP_CorePlayerCardContainer.WBP_CorePlayerCardContainer_C.SetIcon
	// void SetIcon(TWeakObjectPtr<UTexture2D*> Texture2D);                                                                  // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerCard/WBP_CorePlayerCardContainer.WBP_CorePlayerCardContainer_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerCard/WBP_CorePlayerCardContainer.WBP_CorePlayerCardContainer_C.BndEvt__WBP_CorePlayerCardContainer_HitzoneButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	// void BndEvt__WBP_CorePlayerCardContainer_HitzoneButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Common/PlayerCard/WBP_CorePlayerCardContainer.WBP_CorePlayerCardContainer_C.InitIcon
	// void InitIcon(TWeakObjectPtr<UTexture2D*> Icon);                                                                      // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerCard/WBP_CorePlayerCardContainer.WBP_CorePlayerCardContainer_C.InitAnimation
	// void InitAnimation(class UClass* WidgetAnimation);                                                                    // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerCard/WBP_CorePlayerCardContainer.WBP_CorePlayerCardContainer_C.ExecuteUbergraph_WBP_CorePlayerCardContainer
	// void ExecuteUbergraph_WBP_CorePlayerCardContainer(int32_t EntryPoint);                                                // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Common/WBP_LoadingLarge.WBP_LoadingLarge_C
/// Size: 0x0018 (0x000298 - 0x0002B0)
class UWBP_LoadingLarge_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0298   (0x0008)  
	class UWidgetAnimation*                            Spin;                                                       // 0x02A0   (0x0008)  
	class UDBDImage*                                   LoadingLarge;                                               // 0x02A8   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/WBP_LoadingLarge.WBP_LoadingLarge_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/WBP_LoadingLarge.WBP_LoadingLarge_C.ExecuteUbergraph_WBP_LoadingLarge
	// void ExecuteUbergraph_WBP_LoadingLarge(int32_t EntryPoint);                                                           // [0x61c32d0] Final                
};

/// Class /DBDUICore/Common/Currency/WBP_CoreCurrencyForTooltips.WBP_CoreCurrencyForTooltips_C
/// Size: 0x0018 (0x000310 - 0x000328)
class UWBP_CoreCurrencyForTooltips_C : public UCoreCurrencyForTooltipsWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0310   (0x0008)  
	class UDBDImage*                                   Icon;                                                       // 0x0318   (0x0008)  
	class UDBDTextBlock*                               Number;                                                     // 0x0320   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/Currency/WBP_CoreCurrencyForTooltips.WBP_CoreCurrencyForTooltips_C.SetData
	// void SetData(FCurrencyProgressionRewardViewData& currencyRewardViewData);                                             // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Currency/WBP_CoreCurrencyForTooltips.WBP_CoreCurrencyForTooltips_C.ExecuteUbergraph_WBP_CoreCurrencyForTooltips
	// void ExecuteUbergraph_WBP_CoreCurrencyForTooltips(int32_t EntryPoint);                                                // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Common/Inputs/InputSwitchers/WBP_CoreSelectionArrowInputSwitcher.WBP_CoreSelectionArrowInputSwitcher_C
/// Size: 0x000C (0x0003A0 - 0x0003AC)
class UWBP_CoreSelectionArrowInputSwitcher_C : public UCoreInputSwitcherWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03A0   (0x0008)  
	float                                              Nudge;                                                      // 0x03A8   (0x0004)  


	/// Functions
	// Function /DBDUICore/Common/Inputs/InputSwitchers/WBP_CoreSelectionArrowInputSwitcher.WBP_CoreSelectionArrowInputSwitcher_C.OnAlignmentChanged
	// void OnAlignmentChanged(TEnumAsByte<ETextJustify> newAlignment);                                                      // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/InputSwitchers/WBP_CoreSelectionArrowInputSwitcher.WBP_CoreSelectionArrowInputSwitcher_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/InputSwitchers/WBP_CoreSelectionArrowInputSwitcher.WBP_CoreSelectionArrowInputSwitcher_C.ExecuteUbergraph_WBP_CoreSelectionArrowInputSwitcher
	// void ExecuteUbergraph_WBP_CoreSelectionArrowInputSwitcher(int32_t EntryPoint);                                        // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Common/Inputs/InputSwitchers/WBP_CoreCurrencyInputSwitcher.WBP_CoreCurrencyInputSwitcher_C
/// Size: 0x0000 (0x0003A0 - 0x0003A0)
class UWBP_CoreCurrencyInputSwitcher_C : public UCoreCurrencySwitcherWidget
{ 
public:
};

/// Class /DBDUICore/Common/Inputs/Buttons/WBP_CorePremiumCurrencyButton.WBP_CorePremiumCurrencyButton_C
/// Size: 0x0050 (0x000410 - 0x000460)
class UWBP_CorePremiumCurrencyButton_C : public UCorePremiumCurrencyButtonWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0410   (0x0008)  
	class UWidgetAnimation*                            Disabled;                                                   // 0x0418   (0x0008)  
	class UWidgetAnimation*                            Pressed;                                                    // 0x0420   (0x0008)  
	class UWidgetAnimation*                            Hover;                                                      // 0x0428   (0x0008)  
	class UWidgetAnimation*                            Default;                                                    // 0x0430   (0x0008)  
	class USizeBox*                                    BackgroundContainer;                                        // 0x0438   (0x0008)  
	class UDBDImage*                                   BG;                                                         // 0x0440   (0x0008)  
	class UOverlay*                                    Overlay;                                                    // 0x0448   (0x0008)  
	class UDBDImage*                                   RedTraitIMG;                                                // 0x0450   (0x0008)  
	class UDBDImage*                                   SmokeBG;                                                    // 0x0458   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CorePremiumCurrencyButton.WBP_CorePremiumCurrencyButton_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CorePremiumCurrencyButton.WBP_CorePremiumCurrencyButton_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CorePremiumCurrencyButton.WBP_CorePremiumCurrencyButton_C.OnPressed
	// void OnPressed();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CorePremiumCurrencyButton.WBP_CorePremiumCurrencyButton_C.OnEnabledChanged
	// void OnEnabledChanged(bool IsEnabled);                                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CorePremiumCurrencyButton.WBP_CorePremiumCurrencyButton_C.ExecuteUbergraph_WBP_CorePremiumCurrencyButton
	// void ExecuteUbergraph_WBP_CorePremiumCurrencyButton(int32_t EntryPoint);                                              // [0x61c32d0] Final                
};

/// Class /DBDUICore/Common/PlayerProfile/WBP_CorePlayerProfile.WBP_CorePlayerProfile_C
/// Size: 0x0038 (0x000358 - 0x000390)
class UWBP_CorePlayerProfile_C : public UCorePlayerProfileWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0358   (0x0008)  
	class UWidgetAnimation*                            Disable;                                                    // 0x0360   (0x0008)  
	class USizeBox*                                    BadgeSizeBox;                                               // 0x0368   (0x0008)  
	class UWBP_CorePlayerCardContainer_C*              PlayerCardBanner;                                           // 0x0370   (0x0008)  
	class UGridPanel*                                  PlayerProfileGrid;                                          // 0x0378   (0x0008)  
	class UDBDImage*                                   WalletDarkBacker;                                           // 0x0380   (0x0008)  
	class UWBP_CorePlayerCardButton_C*                 WBP_PlayerCardButton;                                       // 0x0388   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerProfile.WBP_CorePlayerProfile_C.SetProfileVisibility
	// void SetProfileVisibility(bool IsVisible);                                                                            // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerProfile.WBP_CorePlayerProfile_C.HideUI
	// void HideUI();                                                                                                        // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerProfile.WBP_CorePlayerProfile_C.ShowUI
	// void ShowUI();                                                                                                        // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerProfile.WBP_CorePlayerProfile_C.SetBadgeBannerData
	// void SetBadgeBannerData(TWeakObjectPtr<UTexture2D*>& Badge, FPlayerCardViewData& Banner, bool showBanner);            // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerProfile.WBP_CorePlayerProfile_C.HidePlayerCard
	// void HidePlayerCard();                                                                                                // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerProfile.WBP_CorePlayerProfile_C.SetPlayerCardBannerOpacity
	// void SetPlayerCardBannerOpacity(float Opacity);                                                                       // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerProfile.WBP_CorePlayerProfile_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerProfile.WBP_CorePlayerProfile_C.ExecuteUbergraph_WBP_CorePlayerProfile
	// void ExecuteUbergraph_WBP_CorePlayerProfile(int32_t EntryPoint);                                                      // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Common/Inputs/Buttons/WBP_CoreCustomIconButton.WBP_CoreCustomIconButton_C
/// Size: 0x0068 (0x000410 - 0x000478)
class UWBP_CoreCustomIconButton_C : public UCoreToggleButtonWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0410   (0x0008)  
	class UDBDImage*                                   IconIMG;                                                    // 0x0418   (0x0008)  
	FLinearColor                                       ActiveBackgroundColor;                                      // 0x0420   (0x0010)  
	FLinearColor                                       InactiveBackgroundColor;                                    // 0x0430   (0x0010)  
	FName                                              ParameterValue;                                             // 0x0440   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x044C   (0x0004)  MISSED
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                            // 0x0450   (0x0008)  
	class UTexture2D*                                  iconTexture;                                                // 0x0458   (0x0008)  
	class UTexture2D*                                  BackgroundTexture;                                          // 0x0460   (0x0008)  
	FVector2D                                          IconScale;                                                  // 0x0468   (0x0008)  
	FVector2D                                          IconOffset;                                                 // 0x0470   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreCustomIconButton.WBP_CoreCustomIconButton_C.HoverVisuals
	// void HoverVisuals(bool IsHovered);                                                                                    // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreCustomIconButton.WBP_CoreCustomIconButton_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreCustomIconButton.WBP_CoreCustomIconButton_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreCustomIconButton.WBP_CoreCustomIconButton_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreCustomIconButton.WBP_CoreCustomIconButton_C.ExecuteUbergraph_WBP_CoreCustomIconButton
	// void ExecuteUbergraph_WBP_CoreCustomIconButton(int32_t EntryPoint);                                                   // [0x61c32d0] Final                
};

/// Class /DBDUICore/Common/Tooltips/WBP_CoreArchiveNodeTooltip.WBP_CoreArchiveNodeTooltip_C
/// Size: 0x0080 (0x000370 - 0x0003F0)
class UWBP_CoreArchiveNodeTooltip_C : public UArchiveNodeTooltipWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0370   (0x0008)  
	FSlateColor                                        LockedColor;                                                // 0x0378   (0x0028)  
	FSlateColor                                        OwnedColor;                                                 // 0x03A0   (0x0028)  
	FSlateColor                                        EquippedColor;                                              // 0x03C8   (0x0028)  


	/// Functions
	// Function /DBDUICore/Common/Tooltips/WBP_CoreArchiveNodeTooltip.WBP_CoreArchiveNodeTooltip_C.SetColor
	// void SetColor(char Type);                                                                                             // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Tooltips/WBP_CoreArchiveNodeTooltip.WBP_CoreArchiveNodeTooltip_C.SetNodeType
	// void SetNodeType(EArchiveNodeType Type);                                                                              // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Tooltips/WBP_CoreArchiveNodeTooltip.WBP_CoreArchiveNodeTooltip_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Tooltips/WBP_CoreArchiveNodeTooltip.WBP_CoreArchiveNodeTooltip_C.ExecuteUbergraph_WBP_CoreArchiveNodeTooltip
	// void ExecuteUbergraph_WBP_CoreArchiveNodeTooltip(int32_t EntryPoint);                                                 // [0x61c32d0] Final                
};

/// Class /DBDUICore/Common/Inputs/Buttons/Toggle/WBP_CorePlayStopButton.WBP_CorePlayStopButton_C
/// Size: 0x0048 (0x000410 - 0x000458)
class UWBP_CorePlayStopButton_C : public UCoreToggleButtonWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0410   (0x0008)  
	class UDBDImage*                                   IconIMG;                                                    // 0x0418   (0x0008)  
	FLinearColor                                       ActiveBackgroundColor;                                      // 0x0420   (0x0010)  
	FLinearColor                                       InactiveBackgroundColor;                                    // 0x0430   (0x0010)  
	FName                                              ParameterValue;                                             // 0x0440   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x044C   (0x0004)  MISSED
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                            // 0x0450   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/Inputs/Buttons/Toggle/WBP_CorePlayStopButton.WBP_CorePlayStopButton_C.HoverVisuals
	// void HoverVisuals(bool IsHovered);                                                                                    // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/Toggle/WBP_CorePlayStopButton.WBP_CorePlayStopButton_C.SetActiveVisualState
	// void SetActiveVisualState(bool IsActive);                                                                             // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/Toggle/WBP_CorePlayStopButton.WBP_CorePlayStopButton_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/Toggle/WBP_CorePlayStopButton.WBP_CorePlayStopButton_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/Toggle/WBP_CorePlayStopButton.WBP_CorePlayStopButton_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/Toggle/WBP_CorePlayStopButton.WBP_CorePlayStopButton_C.ExecuteUbergraph_WBP_CorePlayStopButton
	// void ExecuteUbergraph_WBP_CorePlayStopButton(int32_t EntryPoint);                                                     // [0x61c32d0] Final                
};

/// Class /DBDUICore/Common/Inputs/Buttons/Toggle/WBP_CoreAutoPlayButton.WBP_CoreAutoPlayButton_C
/// Size: 0x0048 (0x000410 - 0x000458)
class UWBP_CoreAutoPlayButton_C : public UCoreToggleButtonWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0410   (0x0008)  
	class UDBDImage*                                   IconIMG;                                                    // 0x0418   (0x0008)  
	FLinearColor                                       ActiveBackgroundColor;                                      // 0x0420   (0x0010)  
	FLinearColor                                       InactiveBackgroundColor;                                    // 0x0430   (0x0010)  
	FName                                              ParameterValue;                                             // 0x0440   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x044C   (0x0004)  MISSED
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                            // 0x0450   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/Inputs/Buttons/Toggle/WBP_CoreAutoPlayButton.WBP_CoreAutoPlayButton_C.HoverVisuals
	// void HoverVisuals(bool IsHovered);                                                                                    // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/Toggle/WBP_CoreAutoPlayButton.WBP_CoreAutoPlayButton_C.SetActiveVisualState
	// void SetActiveVisualState(bool IsActive);                                                                             // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/Toggle/WBP_CoreAutoPlayButton.WBP_CoreAutoPlayButton_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/Toggle/WBP_CoreAutoPlayButton.WBP_CoreAutoPlayButton_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/Toggle/WBP_CoreAutoPlayButton.WBP_CoreAutoPlayButton_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/Toggle/WBP_CoreAutoPlayButton.WBP_CoreAutoPlayButton_C.ExecuteUbergraph_WBP_CoreAutoPlayButton
	// void ExecuteUbergraph_WBP_CoreAutoPlayButton(int32_t EntryPoint);                                                     // [0x61c32d0] Final                
};

/// Class /DBDUICore/Common/Inputs/Buttons/WBP_CoreCurrencyButton.WBP_CoreCurrencyButton_C
/// Size: 0x006D (0x000448 - 0x0004B5)
class UWBP_CoreCurrencyButton_C : public UCoreCurrencyButtonWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0448   (0x0008)  
	class UWidgetAnimation*                            Default_notAffordable;                                      // 0x0450   (0x0008)  
	class UWidgetAnimation*                            Pressed_notAffordable;                                      // 0x0458   (0x0008)  
	class UWidgetAnimation*                            Hover_notAffordable;                                        // 0x0460   (0x0008)  
	class UWidgetAnimation*                            Disable;                                                    // 0x0468   (0x0008)  
	class UWidgetAnimation*                            Pressed;                                                    // 0x0470   (0x0008)  
	class UWidgetAnimation*                            Hover;                                                      // 0x0478   (0x0008)  
	class UWidgetAnimation*                            Default;                                                    // 0x0480   (0x0008)  
	class UDBDImage*                                   BG;                                                         // 0x0488   (0x0008)  
	class UDBDImage*                                   Bg_notAffordable;                                           // 0x0490   (0x0008)  
	class UOverlay*                                    MouseButtonContainer;                                       // 0x0498   (0x0008)  
	class UDBDImage*                                   RedTraitIMG;                                                // 0x04A0   (0x0008)  
	class UDBDImage*                                   SmokeBG;                                                    // 0x04A8   (0x0008)  
	float                                              PaddingText;                                                // 0x04B0   (0x0004)  
	bool                                               IsAffordable;                                               // 0x04B4   (0x0001)  


	/// Functions
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreCurrencyButton.WBP_CoreCurrencyButton_C.OnAlignmentChanged
	// void OnAlignmentChanged(TEnumAsByte<ETextJustify> newAlignment);                                                      // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreCurrencyButton.WBP_CoreCurrencyButton_C.OnEnabledChanged
	// void OnEnabledChanged(bool IsEnabled);                                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreCurrencyButton.WBP_CoreCurrencyButton_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreCurrencyButton.WBP_CoreCurrencyButton_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreCurrencyButton.WBP_CoreCurrencyButton_C.OnPressed
	// void OnPressed();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreCurrencyButton.WBP_CoreCurrencyButton_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreCurrencyButton.WBP_CoreCurrencyButton_C.SetCurrencyData
	// void SetCurrencyData(FPriceTagViewData& CurrencyData);                                                                // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreCurrencyButton.WBP_CoreCurrencyButton_C.ExecuteUbergraph_WBP_CoreCurrencyButton
	// void ExecuteUbergraph_WBP_CoreCurrencyButton(int32_t EntryPoint);                                                     // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Common/Inputs/Buttons/WBP_CoreArrowButton.WBP_CoreArrowButton_C
/// Size: 0x0068 (0x000408 - 0x000470)
class UWBP_CoreArrowButton_C : public UCoreButtonWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0408   (0x0008)  
	class UWidgetAnimation*                            Default;                                                    // 0x0410   (0x0008)  
	class UWidgetAnimation*                            Hover;                                                      // 0x0418   (0x0008)  
	class UImage*                                      ArrowIMG;                                                   // 0x0420   (0x0008)  
	class UOverlay*                                    Container;                                                  // 0x0428   (0x0008)  
	FLinearColor                                       DefaultColor;                                               // 0x0430   (0x0010)  
	FLinearColor                                       PressedColor;                                               // 0x0440   (0x0010)  
	FLinearColor                                       HoveredColor;                                               // 0x0450   (0x0010)  
	FLinearColor                                       DisabledColor;                                              // 0x0460   (0x0010)  


	/// Functions
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreArrowButton.WBP_CoreArrowButton_C.OnClicked
	// void OnClicked();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreArrowButton.WBP_CoreArrowButton_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreArrowButton.WBP_CoreArrowButton_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreArrowButton.WBP_CoreArrowButton_C.OnPressed
	// void OnPressed();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreArrowButton.WBP_CoreArrowButton_C.OnReleased
	// void OnReleased();                                                                                                    // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreArrowButton.WBP_CoreArrowButton_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreArrowButton.WBP_CoreArrowButton_C.OnAlignmentChanged
	// void OnAlignmentChanged(TEnumAsByte<ETextJustify> newAlignment);                                                      // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreArrowButton.WBP_CoreArrowButton_C.OnEnabledChanged
	// void OnEnabledChanged(bool IsEnabled);                                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreArrowButton.WBP_CoreArrowButton_C.ExecuteUbergraph_WBP_CoreArrowButton
	// void ExecuteUbergraph_WBP_CoreArrowButton(int32_t EntryPoint);                                                        // [0x61c32d0] Final                
};

/// Class /DBDUICore/Common/PlayerCard/WBP_CorePlayerCardButton.WBP_CorePlayerCardButton_C
/// Size: 0x0030 (0x000408 - 0x000438)
class UWBP_CorePlayerCardButton_C : public UCoreButtonWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0408   (0x0008)  
	class UDBDImage*                                   BadgeShadow;                                                // 0x0410   (0x0008)  
	class USizeBox*                                    Container;                                                  // 0x0418   (0x0008)  
	class UWBP_CoreOnHoverBorder_C*                    OnHoverBorder;                                              // 0x0420   (0x0008)  
	class UWBP_CorePlayerCardContainer_C*              WBP_CorePlayerCardContainer;                                // 0x0428   (0x0008)  
	class UCorePlayerProfileWidget*                    PlayerProfile;                                              // 0x0430   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/PlayerCard/WBP_CorePlayerCardButton.WBP_CorePlayerCardButton_C.SetIcon
	// void SetIcon(TWeakObjectPtr<UTexture2D*> Icon);                                                                       // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerCard/WBP_CorePlayerCardButton.WBP_CorePlayerCardButton_C.OnClicked
	// void OnClicked();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerCard/WBP_CorePlayerCardButton.WBP_CorePlayerCardButton_C.OnEnabledChanged
	// void OnEnabledChanged(bool IsEnabled);                                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerCard/WBP_CorePlayerCardButton.WBP_CorePlayerCardButton_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerCard/WBP_CorePlayerCardButton.WBP_CorePlayerCardButton_C.ExecuteUbergraph_WBP_CorePlayerCardButton
	// void ExecuteUbergraph_WBP_CorePlayerCardButton(int32_t EntryPoint);                                                   // [0x61c32d0] Final                
};

/// Class /DBDUICore/Common/NonScalableTooltipsIconsDecorator.NonScalableTooltipsIconsDecorator_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UNonScalableTooltipsIconsDecorator_C : public URichTextBlockImageSharedSizeDecorator
{ 
public:
};

/// Class /DBDUICore/Common/Inputs/Buttons/Toggle/WBP_CoreFilterButton.WBP_CoreFilterButton_C
/// Size: 0x0044 (0x000440 - 0x000484)
class UWBP_CoreFilterButton_C : public UCoreFilterButtonWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0440   (0x0008)  
	class UDBDImage*                                   IconIMG;                                                    // 0x0448   (0x0008)  
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                            // 0x0450   (0x0008)  
	FLinearColor                                       ActiveBackgroundColor;                                      // 0x0458   (0x0010)  
	FLinearColor                                       InactiveBackgroundColor;                                    // 0x0468   (0x0010)  
	FName                                              ParameterValue;                                             // 0x0478   (0x000C)  


	/// Functions
	// Function /DBDUICore/Common/Inputs/Buttons/Toggle/WBP_CoreFilterButton.WBP_CoreFilterButton_C.HoverVisuals
	// void HoverVisuals(bool IsHovered);                                                                                    // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/Toggle/WBP_CoreFilterButton.WBP_CoreFilterButton_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/Toggle/WBP_CoreFilterButton.WBP_CoreFilterButton_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/Toggle/WBP_CoreFilterButton.WBP_CoreFilterButton_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/Toggle/WBP_CoreFilterButton.WBP_CoreFilterButton_C.SetupImageAndText
	// void SetupImageAndText(class UTexture2D* Texture, FText& label);                                                      // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/Toggle/WBP_CoreFilterButton.WBP_CoreFilterButton_C.SetupImageOnly
	// void SetupImageOnly(class UTexture2D* Texture);                                                                       // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/Toggle/WBP_CoreFilterButton.WBP_CoreFilterButton_C.SetupTextOnly
	// void SetupTextOnly(FText& label);                                                                                     // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/Toggle/WBP_CoreFilterButton.WBP_CoreFilterButton_C.UpdateVisualState
	// void UpdateVisualState();                                                                                             // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/Toggle/WBP_CoreFilterButton.WBP_CoreFilterButton_C.ExecuteUbergraph_WBP_CoreFilterButton
	// void ExecuteUbergraph_WBP_CoreFilterButton(int32_t EntryPoint);                                                       // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Common/Inputs/Buttons/WBP_CoreIconButton.WBP_CoreIconButton_C
/// Size: 0x0088 (0x000408 - 0x000490)
class UWBP_CoreIconButton_C : public UCoreButtonWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0408   (0x0008)  
	class UWidgetAnimation*                            Hover;                                                      // 0x0410   (0x0008)  
	class UImage*                                      IconIMG;                                                    // 0x0418   (0x0008)  
	FLinearColor                                       DefaultColor;                                               // 0x0420   (0x0010)  
	FLinearColor                                       PressedColor;                                               // 0x0430   (0x0010)  
	FLinearColor                                       HoveredColor;                                               // 0x0440   (0x0010)  
	FLinearColor                                       DisabledColor;                                              // 0x0450   (0x0010)  
	SDK_UNDEFINED(48,3493) /* TWeakObjectPtr<UTexture2D*> */ __um(iconTexture);                                    // 0x0460   (0x0030)  


	/// Functions
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreIconButton.WBP_CoreIconButton_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreIconButton.WBP_CoreIconButton_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreIconButton.WBP_CoreIconButton_C.OnPressed
	// void OnPressed();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreIconButton.WBP_CoreIconButton_C.OnReleased
	// void OnReleased();                                                                                                    // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreIconButton.WBP_CoreIconButton_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreIconButton.WBP_CoreIconButton_C.OnEnabledChanged
	// void OnEnabledChanged(bool IsEnabled);                                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreIconButton.WBP_CoreIconButton_C.OnClicked
	// void OnClicked();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreIconButton.WBP_CoreIconButton_C.Event Update Icon Texture
	// void Event Update Icon Texture(TWeakObjectPtr<UTexture2D*> New Texture);                                              // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreIconButton.WBP_CoreIconButton_C.ExecuteUbergraph_WBP_CoreIconButton
	// void ExecuteUbergraph_WBP_CoreIconButton(int32_t EntryPoint);                                                         // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Common/Pagination/WBP_CorePaginationWidget.WBP_CorePaginationWidget_C
/// Size: 0x0010 (0x000440 - 0x000450)
class UWBP_CorePaginationWidget_C : public UCoreSelectableButtonWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0440   (0x0008)  
	class UDBDImage*                                   Background;                                                 // 0x0448   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/Pagination/WBP_CorePaginationWidget.WBP_CorePaginationWidget_C.OnSelectedChanged
	// void OnSelectedChanged(bool IsSelected);                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Pagination/WBP_CorePaginationWidget.WBP_CorePaginationWidget_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Pagination/WBP_CorePaginationWidget.WBP_CorePaginationWidget_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Pagination/WBP_CorePaginationWidget.WBP_CorePaginationWidget_C.ExecuteUbergraph_WBP_CorePaginationWidget
	// void ExecuteUbergraph_WBP_CorePaginationWidget(int32_t EntryPoint);                                                   // [0x61c32d0] Final                
};

/// Class /DBDUICore/Common/Pagination/WBP_CorePaginationContainer.WBP_CorePaginationContainer_C
/// Size: 0x0000 (0x000438 - 0x000438)
class UWBP_CorePaginationContainer_C : public UCorePaginationContainerWidget
{ 
public:
};

/// Class /DBDUICore/Common/LoadoutParts/WBP_CoreMenuPower.WBP_CoreMenuPower_C
/// Size: 0x0028 (0x000548 - 0x000570)
class UWBP_CoreMenuPower_C : public UCoreMenuPowerWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0548   (0x0008)  
	class UDBDImage*                                   SelectedBottomRight;                                        // 0x0550   (0x0008)  
	class UDBDImage*                                   SelectedBottomRight0;                                       // 0x0558   (0x0008)  
	class UDBDImage*                                   SelectedLeft;                                               // 0x0560   (0x0008)  
	class UDBDImage*                                   SelectedRight;                                              // 0x0568   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/LoadoutParts/WBP_CoreMenuPower.WBP_CoreMenuPower_C.SetDisabledWidget
	// void SetDisabledWidget();                                                                                             // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/LoadoutParts/WBP_CoreMenuPower.WBP_CoreMenuPower_C.SetBackgroundShadowLayers
	// void SetBackgroundShadowLayers();                                                                                     // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/LoadoutParts/WBP_CoreMenuPower.WBP_CoreMenuPower_C.ExecuteUbergraph_WBP_CoreMenuPower
	// void ExecuteUbergraph_WBP_CoreMenuPower(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /DBDUICore/Common/LoadoutParts/Preset/WBP_CoreLoadoutPresetContainerWidget.WBP_CoreLoadoutPresetContainerWidget_C
/// Size: 0x0000 (0x0003A0 - 0x0003A0)
class UWBP_CoreLoadoutPresetContainerWidget_C : public UCorePresetWidgetContainer
{ 
public:
};

/// Class /DBDUICore/Common/DropDownList/WBP_DropDownListWidget.WBP_DropDownListWidget_C
/// Size: 0x0010 (0x0003C0 - 0x0003D0)
class UWBP_DropDownListWidget_C : public UDBDDropDownListWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03C0   (0x0008)  
	class UDBDScrollBox*                               DropdownScroll;                                             // 0x03C8   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/DropDownList/WBP_DropDownListWidget.WBP_DropDownListWidget_C.HandleAnalogInputEvent
	// void HandleAnalogInputEvent(FAnalogInputEvent& InAnalogInputEvent);                                                   // [0x61c32d0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /DBDUICore/Common/DropDownList/WBP_DropDownListWidget.WBP_DropDownListWidget_C.OnControlModeChangedBP
	// void OnControlModeChangedBP(EControlMode controlMode);                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/DropDownList/WBP_DropDownListWidget.WBP_DropDownListWidget_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/DropDownList/WBP_DropDownListWidget.WBP_DropDownListWidget_C.Destruct
	// void Destruct();                                                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/DropDownList/WBP_DropDownListWidget.WBP_DropDownListWidget_C.ExecuteUbergraph_WBP_DropDownListWidget
	// void ExecuteUbergraph_WBP_DropDownListWidget(int32_t EntryPoint);                                                     // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Common/DropDownList/WBP_DropDownListButton.WBP_DropDownListButton_C
/// Size: 0x0028 (0x000478 - 0x0004A0)
class UWBP_DropDownListButton_C : public UDBDDropDownListButton
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0478   (0x0008)  
	class UDBDImage*                                   Arrow;                                                      // 0x0480   (0x0008)  
	class UDBDImage*                                   Default;                                                    // 0x0488   (0x0008)  
	class UDBDImage*                                   Hover;                                                      // 0x0490   (0x0008)  
	class UWBP_CoreOnHoverBorder_C*                    WBP_CoreOnHoverBorder;                                      // 0x0498   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/DropDownList/WBP_DropDownListButton.WBP_DropDownListButton_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/DropDownList/WBP_DropDownListButton.WBP_DropDownListButton_C.Destruct
	// void Destruct();                                                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/DropDownList/WBP_DropDownListButton.WBP_DropDownListButton_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/DropDownList/WBP_DropDownListButton.WBP_DropDownListButton_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/DropDownList/WBP_DropDownListButton.WBP_DropDownListButton_C.ToggleDropDownArrow
	// void ToggleDropDownArrow(bool showArrow);                                                                             // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/DropDownList/WBP_DropDownListButton.WBP_DropDownListButton_C.ExecuteUbergraph_WBP_DropDownListButton
	// void ExecuteUbergraph_WBP_DropDownListButton(int32_t EntryPoint);                                                     // [0x61c32d0] Final                
};

/// Class /DBDUICore/Common/Tabs/WBP_CoreTabContainer.WBP_CoreTabContainer_C
/// Size: 0x00A8 (0x000398 - 0x000440)
class UWBP_CoreTabContainer_C : public UCoreTabContainerWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0398   (0x0008)  
	class UWBP_CoreInputPrompt_C*                      ControllerNextPrompt;                                       // 0x03A0   (0x0008)  
	class UWBP_CoreInputPrompt_C*                      ControllerPreviousPrompt;                                   // 0x03A8   (0x0008)  
	FKey                                               PreviousTabControllerKey;                                   // 0x03B0   (0x0020)  
	FKey                                               NextTabControllerKey;                                       // 0x03D0   (0x0020)  
	SDK_UNDEFINED(80,3494) /* TMap<EControlMode, UDataTable*> */ __um(ControlModeDataMap);                         // 0x03F0   (0x0050)  


	/// Functions
	// Function /DBDUICore/Common/Tabs/WBP_CoreTabContainer.WBP_CoreTabContainer_C.InitIndicators
	// void InitIndicators();                                                                                                // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Tabs/WBP_CoreTabContainer.WBP_CoreTabContainer_C.UpdateIndicators
	// void UpdateIndicators();                                                                                              // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Tabs/WBP_CoreTabContainer.WBP_CoreTabContainer_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Tabs/WBP_CoreTabContainer.WBP_CoreTabContainer_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Tabs/WBP_CoreTabContainer.WBP_CoreTabContainer_C.OnControlModeChangedBP
	// void OnControlModeChangedBP(EControlMode controlMode);                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Tabs/WBP_CoreTabContainer.WBP_CoreTabContainer_C.HandleKeyDownEvent
	// void HandleKeyDownEvent(FKeyEvent& InKeyEvent);                                                                       // [0x61c32d0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /DBDUICore/Common/Tabs/WBP_CoreTabContainer.WBP_CoreTabContainer_C.ExecuteUbergraph_WBP_CoreTabContainer
	// void ExecuteUbergraph_WBP_CoreTabContainer(int32_t EntryPoint);                                                       // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Common/LoadoutParts/Preset/WBP_CoreLoadoutPresetWidget.WBP_CoreLoadoutPresetWidget_C
/// Size: 0x004C (0x000440 - 0x00048C)
class UWBP_CoreLoadoutPresetWidget_C : public UCoreSelectableButtonWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0440   (0x0008)  
	class UDBDImage*                                   Background;                                                 // 0x0448   (0x0008)  
	class UDBDImage*                                   SelecterOverlay;                                            // 0x0450   (0x0008)  
	class UMaterialInstanceDynamic*                    DynamicMaterial;                                            // 0x0458   (0x0008)  
	FLinearColor                                       ActiveBackgroundColor;                                      // 0x0460   (0x0010)  
	FLinearColor                                       InactiveBackgroundColor;                                    // 0x0470   (0x0010)  
	FName                                              ParameterValue;                                             // 0x0480   (0x000C)  


	/// Functions
	// Function /DBDUICore/Common/LoadoutParts/Preset/WBP_CoreLoadoutPresetWidget.WBP_CoreLoadoutPresetWidget_C.HoverVisuals
	// void HoverVisuals(bool IsHovered);                                                                                    // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/LoadoutParts/Preset/WBP_CoreLoadoutPresetWidget.WBP_CoreLoadoutPresetWidget_C.OnSelectedChanged
	// void OnSelectedChanged(bool IsSelected);                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/LoadoutParts/Preset/WBP_CoreLoadoutPresetWidget.WBP_CoreLoadoutPresetWidget_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/LoadoutParts/Preset/WBP_CoreLoadoutPresetWidget.WBP_CoreLoadoutPresetWidget_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/LoadoutParts/Preset/WBP_CoreLoadoutPresetWidget.WBP_CoreLoadoutPresetWidget_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/LoadoutParts/Preset/WBP_CoreLoadoutPresetWidget.WBP_CoreLoadoutPresetWidget_C.ExecuteUbergraph_WBP_CoreLoadoutPresetWidget
	// void ExecuteUbergraph_WBP_CoreLoadoutPresetWidget(int32_t EntryPoint);                                                // [0x61c32d0] Final                
};

/// Class /DBDUICore/Common/LoadoutParts/WBP_CoreMenuPerk.WBP_CoreMenuPerk_C
/// Size: 0x0038 (0x000548 - 0x000580)
class UWBP_CoreMenuPerk_C : public UCoreMenuPerkWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0548   (0x0008)  
	class UDBDImage*                                   BackgroundEmpty;                                            // 0x0550   (0x0008)  
	class UDBDImage*                                   LevelIMG;                                                   // 0x0558   (0x0008)  
	class UDBDImage*                                   SelectedBottom;                                             // 0x0560   (0x0008)  
	class UDBDImage*                                   SelectedLeft;                                               // 0x0568   (0x0008)  
	class UDBDImage*                                   SelectedRight;                                              // 0x0570   (0x0008)  
	class UDBDImage*                                   SelectedTop;                                                // 0x0578   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/LoadoutParts/WBP_CoreMenuPerk.WBP_CoreMenuPerk_C.SetMenuPerkLevel
	// void SetMenuPerkLevel(int32_t Level);                                                                                 // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/LoadoutParts/WBP_CoreMenuPerk.WBP_CoreMenuPerk_C.SetBackgroundLayers
	// void SetBackgroundLayers();                                                                                           // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/LoadoutParts/WBP_CoreMenuPerk.WBP_CoreMenuPerk_C.SetBackgroundShadowLayers
	// void SetBackgroundShadowLayers();                                                                                     // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/LoadoutParts/WBP_CoreMenuPerk.WBP_CoreMenuPerk_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/LoadoutParts/WBP_CoreMenuPerk.WBP_CoreMenuPerk_C.SetEmptyPerk
	// void SetEmptyPerk();                                                                                                  // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/LoadoutParts/WBP_CoreMenuPerk.WBP_CoreMenuPerk_C.SetDisabledWidget
	// void SetDisabledWidget();                                                                                             // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/LoadoutParts/WBP_CoreMenuPerk.WBP_CoreMenuPerk_C.ExecuteUbergraph_WBP_CoreMenuPerk
	// void ExecuteUbergraph_WBP_CoreMenuPerk(int32_t EntryPoint);                                                           // [0x61c32d0] Final                
};

/// Class /DBDUICore/Common/LoadoutParts/WBP_CoreMenuOffering.WBP_CoreMenuOffering_C
/// Size: 0x0028 (0x000548 - 0x000570)
class UWBP_CoreMenuOffering_C : public UCoreMenuOfferingWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0548   (0x0008)  
	class UDBDImage*                                   BackgroundEmpty;                                            // 0x0550   (0x0008)  
	class UDBDImage*                                   SelectedBottomLeft;                                         // 0x0558   (0x0008)  
	class UDBDImage*                                   SelectedBottomRight;                                        // 0x0560   (0x0008)  
	class UDBDImage*                                   SelectedTop;                                                // 0x0568   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/LoadoutParts/WBP_CoreMenuOffering.WBP_CoreMenuOffering_C.SetBackgroundLayers
	// void SetBackgroundLayers();                                                                                           // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/LoadoutParts/WBP_CoreMenuOffering.WBP_CoreMenuOffering_C.SetBackgroundShadowLayers
	// void SetBackgroundShadowLayers();                                                                                     // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/LoadoutParts/WBP_CoreMenuOffering.WBP_CoreMenuOffering_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/LoadoutParts/WBP_CoreMenuOffering.WBP_CoreMenuOffering_C.SetDisabledWidget
	// void SetDisabledWidget();                                                                                             // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/LoadoutParts/WBP_CoreMenuOffering.WBP_CoreMenuOffering_C.ExecuteUbergraph_WBP_CoreMenuOffering
	// void ExecuteUbergraph_WBP_CoreMenuOffering(int32_t EntryPoint);                                                       // [0x61c32d0] Final                
};

/// Class /DBDUICore/Common/LoadoutParts/WBP_CoreMenuItem.WBP_CoreMenuItem_C
/// Size: 0x0030 (0x000548 - 0x000578)
class UWBP_CoreMenuItem_C : public UCoreMenuItemWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0548   (0x0008)  
	class UDBDImage*                                   BackgroundEmpty;                                            // 0x0550   (0x0008)  
	class UDBDImage*                                   SelectedBottomLeft;                                         // 0x0558   (0x0008)  
	class UDBDImage*                                   SelectedBottomRight;                                        // 0x0560   (0x0008)  
	class UDBDImage*                                   SelectedLeft;                                               // 0x0568   (0x0008)  
	class UDBDImage*                                   SelectedRight;                                              // 0x0570   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/LoadoutParts/WBP_CoreMenuItem.WBP_CoreMenuItem_C.SetBackgroundLayers
	// void SetBackgroundLayers();                                                                                           // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/LoadoutParts/WBP_CoreMenuItem.WBP_CoreMenuItem_C.SetBackgroundShadowLayers
	// void SetBackgroundShadowLayers();                                                                                     // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/LoadoutParts/WBP_CoreMenuItem.WBP_CoreMenuItem_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/LoadoutParts/WBP_CoreMenuItem.WBP_CoreMenuItem_C.SetDisabledWidget
	// void SetDisabledWidget();                                                                                             // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/LoadoutParts/WBP_CoreMenuItem.WBP_CoreMenuItem_C.ExecuteUbergraph_WBP_CoreMenuItem
	// void ExecuteUbergraph_WBP_CoreMenuItem(int32_t EntryPoint);                                                           // [0x61c32d0] Final                
};

/// Class /DBDUICore/Common/LoadoutParts/WBP_CoreMenuAddon.WBP_CoreMenuAddon_C
/// Size: 0x0038 (0x000570 - 0x0005A8)
class UWBP_CoreMenuAddon_C : public UCoreMenuAddonWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0570   (0x0008)  
	class UDBDImage*                                   BackgroundEmpty;                                            // 0x0578   (0x0008)  
	class UDBDImage*                                   imagePlusIcon;                                              // 0x0580   (0x0008)  
	class UDBDImage*                                   SelectedBottomLeft;                                         // 0x0588   (0x0008)  
	class UDBDImage*                                   SelectedBottomRight;                                        // 0x0590   (0x0008)  
	class UDBDImage*                                   SelectedLeft;                                               // 0x0598   (0x0008)  
	class UDBDImage*                                   SelectedRight;                                              // 0x05A0   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/LoadoutParts/WBP_CoreMenuAddon.WBP_CoreMenuAddon_C.UpdateWidgetScale
	// void UpdateWidgetScale();                                                                                             // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/LoadoutParts/WBP_CoreMenuAddon.WBP_CoreMenuAddon_C.SetBackgroundLayers
	// void SetBackgroundLayers();                                                                                           // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/LoadoutParts/WBP_CoreMenuAddon.WBP_CoreMenuAddon_C.SetBackgroundShadowLayers
	// void SetBackgroundShadowLayers();                                                                                     // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/LoadoutParts/WBP_CoreMenuAddon.WBP_CoreMenuAddon_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/LoadoutParts/WBP_CoreMenuAddon.WBP_CoreMenuAddon_C.SetDisabledWidget
	// void SetDisabledWidget();                                                                                             // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/LoadoutParts/WBP_CoreMenuAddon.WBP_CoreMenuAddon_C.SetWhitePlusIconVisibility
	// void SetWhitePlusIconVisibility(bool IsVisible);                                                                      // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/LoadoutParts/WBP_CoreMenuAddon.WBP_CoreMenuAddon_C.ExecuteUbergraph_WBP_CoreMenuAddon
	// void ExecuteUbergraph_WBP_CoreMenuAddon(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /DBDUICore/Common/Inputs/InputSwitchers/WBP_CoreQuantityInputSwitcher.WBP_CoreQuantityInputSwitcher_C
/// Size: 0x0040 (0x0003A0 - 0x0003E0)
class UWBP_CoreQuantityInputSwitcher_C : public UCoreInputSwitcherWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03A0   (0x0008)  
	float                                              NudgeX;                                                     // 0x03A8   (0x0004)  
	float                                              NudgeY;                                                     // 0x03AC   (0x0004)  
	SDK_UNDEFINED(48,3495) /* TWeakObjectPtr<UTexture2D*> */ __um(ButtonIconTexture);                              // 0x03B0   (0x0030)  


	/// Functions
	// Function /DBDUICore/Common/Inputs/InputSwitchers/WBP_CoreQuantityInputSwitcher.WBP_CoreQuantityInputSwitcher_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/InputSwitchers/WBP_CoreQuantityInputSwitcher.WBP_CoreQuantityInputSwitcher_C.OnAlignmentChanged
	// void OnAlignmentChanged(TEnumAsByte<ETextJustify> newAlignment);                                                      // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/InputSwitchers/WBP_CoreQuantityInputSwitcher.WBP_CoreQuantityInputSwitcher_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/InputSwitchers/WBP_CoreQuantityInputSwitcher.WBP_CoreQuantityInputSwitcher_C.ExecuteUbergraph_WBP_CoreQuantityInputSwitcher
	// void ExecuteUbergraph_WBP_CoreQuantityInputSwitcher(int32_t EntryPoint);                                              // [0x61c32d0] Final|HasDefaults    
};

