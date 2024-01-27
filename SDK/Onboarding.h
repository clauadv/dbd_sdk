
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AkAudio
/// dependency: Common
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: DBDSharedTypes
/// dependency: DBDUIViewInterfaces
/// dependency: DBDUIViewsCore
/// dependency: Engine
/// dependency: SlateCore
/// dependency: UMG

/// Enum /Script/Onboarding.EOnboardingModeList
/// Size: 0x04
enum class EOnboardingModeList : uint8_t
{
	EOnboardingModeList__DefaultMode                                                 = 0,
	EOnboardingModeList__MenuForced                                                  = 1,
	EOnboardingModeList__TutorialForced                                              = 2,
	EOnboardingModeList__EOnboardingModeList_MAX                                     = 3
};

/// Class /Script/Onboarding.OnboardingManager
/// Size: 0x0200 (0x000038 - 0x000238)
class UOnboardingManager : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x200];                                     // 0x0038   (0x0200)  MISSED
};

/// Class /DBDUICore/Onboarding/GameManualPanel/GameManualRichImageDecorator.GameManualRichImageDecorator_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UGameManualRichImageDecorator_C : public URichTextBlockImageSharedSizeDecorator
{ 
public:
};

/// Class /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTwoButtonHolderWidget.WBP_CoreOnboardingTwoButtonHolderWidget_C
/// Size: 0x0018 (0x000340 - 0x000358)
class UWBP_CoreOnboardingTwoButtonHolderWidget_C : public UCoreOnboardingButtonHolderWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0340   (0x0008)  
	class UWBP_CoreOnboardingTutorialButtonSmall_C*    TutorialButton1;                                            // 0x0348   (0x0008)  
	class UWBP_CoreOnboardingTutorialButtonSmall_C*    TutorialButton2;                                            // 0x0350   (0x0008)  


	/// Functions
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTwoButtonHolderWidget.WBP_CoreOnboardingTwoButtonHolderWidget_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTwoButtonHolderWidget.WBP_CoreOnboardingTwoButtonHolderWidget_C.ExecuteUbergraph_WBP_CoreOnboardingTwoButtonHolderWidget
	// void ExecuteUbergraph_WBP_CoreOnboardingTwoButtonHolderWidget(int32_t EntryPoint);                                    // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingOneButtonHolderWidget.WBP_CoreOnboardingOneButtonHolderWidget_C
/// Size: 0x0010 (0x000340 - 0x000350)
class UWBP_CoreOnboardingOneButtonHolderWidget_C : public UCoreOnboardingButtonHolderWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0340   (0x0008)  
	class UWBP_CoreOnboardingTutorialButton_C*         TutorialButton;                                             // 0x0348   (0x0008)  


	/// Functions
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingOneButtonHolderWidget.WBP_CoreOnboardingOneButtonHolderWidget_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingOneButtonHolderWidget.WBP_CoreOnboardingOneButtonHolderWidget_C.ExecuteUbergraph_WBP_CoreOnboardingOneButtonHolderWidget
	// void ExecuteUbergraph_WBP_CoreOnboardingOneButtonHolderWidget(int32_t EntryPoint);                                    // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingButtonAnimation.WBP_CoreOnboardingButtonAnimation_C
/// Size: 0x0038 (0x000298 - 0x0002D0)
class UWBP_CoreOnboardingButtonAnimation_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0298   (0x0008)  
	class UWidgetAnimation*                            ChangeState;                                                // 0x02A0   (0x0008)  
	class UDBDImage*                                   Material;                                                   // 0x02A8   (0x0008)  
	SDK_UNDEFINED(16,4892) /* FMulticastInlineDelegate */ __um(OnFadeInComplete);                                  // 0x02B0   (0x0010)  
	SDK_UNDEFINED(16,4893) /* FMulticastInlineDelegate */ __um(OnAnimationComplete);                               // 0x02C0   (0x0010)  


	/// Functions
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingButtonAnimation.WBP_CoreOnboardingButtonAnimation_C.SequenceEvent__ENTRYPOINTWBP_CoreOnboardingButtonAnimation
	// void SequenceEvent__ENTRYPOINTWBP_CoreOnboardingButtonAnimation();                                                    // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingButtonAnimation.WBP_CoreOnboardingButtonAnimation_C.SequenceEvent__ENTRYPOINTWBP_CoreOnboardingButtonAnimation
	// void SequenceEvent__ENTRYPOINTWBP_CoreOnboardingButtonAnimation();                                                    // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingButtonAnimation.WBP_CoreOnboardingButtonAnimation_C.PlayTutorialButtonAnimation
	// void PlayTutorialButtonAnimation(EOnboardingTutorialButtonStyle Style);                                               // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingButtonAnimation.WBP_CoreOnboardingButtonAnimation_C.MostOpaqueAnimationPoint
	// void MostOpaqueAnimationPoint();                                                                                      // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingButtonAnimation.WBP_CoreOnboardingButtonAnimation_C.EndOfAnimation
	// void EndOfAnimation();                                                                                                // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingButtonAnimation.WBP_CoreOnboardingButtonAnimation_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                   // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingButtonAnimation.WBP_CoreOnboardingButtonAnimation_C.ExecuteUbergraph_WBP_CoreOnboardingButtonAnimation
	// void ExecuteUbergraph_WBP_CoreOnboardingButtonAnimation(int32_t EntryPoint);                                          // [0x61c32d0] Final|HasDefaults    
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingButtonAnimation.WBP_CoreOnboardingButtonAnimation_C.OnAnimationComplete__DelegateSignature
	// void OnAnimationComplete__DelegateSignature();                                                                        // [0x61c32d0] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingButtonAnimation.WBP_CoreOnboardingButtonAnimation_C.OnFadeInComplete__DelegateSignature
	// void OnFadeInComplete__DelegateSignature();                                                                           // [0x61c32d0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /DBDUICore/Onboarding/GameManualPanel/WBP_GameManualCategoryButton.WBP_GameManualCategoryButton_C
/// Size: 0x0020 (0x000438 - 0x000458)
class UWBP_GameManualCategoryButton_C : public UCoreGameManualCategoryButton
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0438   (0x0008)  
	class UWidgetAnimation*                            Pressed;                                                    // 0x0440   (0x0008)  
	class UWidgetAnimation*                            Hovered;                                                    // 0x0448   (0x0008)  
	class UDBDImage*                                   Rollover;                                                   // 0x0450   (0x0008)  


	/// Functions
	// Function /DBDUICore/Onboarding/GameManualPanel/WBP_GameManualCategoryButton.WBP_GameManualCategoryButton_C.OnClicked
	// void OnClicked();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Onboarding/GameManualPanel/WBP_GameManualCategoryButton.WBP_GameManualCategoryButton_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Onboarding/GameManualPanel/WBP_GameManualCategoryButton.WBP_GameManualCategoryButton_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Onboarding/GameManualPanel/WBP_GameManualCategoryButton.WBP_GameManualCategoryButton_C.OnPressed
	// void OnPressed();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Onboarding/GameManualPanel/WBP_GameManualCategoryButton.WBP_GameManualCategoryButton_C.OnReleased
	// void OnReleased();                                                                                                    // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Onboarding/GameManualPanel/WBP_GameManualCategoryButton.WBP_GameManualCategoryButton_C.ExecuteUbergraph_WBP_GameManualCategoryButton
	// void ExecuteUbergraph_WBP_GameManualCategoryButton(int32_t EntryPoint);                                               // [0x61c32d0] Final                
};

/// Class /DBDUICore/Onboarding/WBP_CoreOnboardingMenuTitle.WBP_CoreOnboardingMenuTitle_C
/// Size: 0x0030 (0x000310 - 0x000340)
class UWBP_CoreOnboardingMenuTitle_C : public UCoreOnboardingMenuTitleWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0310   (0x0008)  
	class UDBDTextBlock*                               onboardingSubtitle;                                         // 0x0318   (0x0008)  
	class UDBDTextBlock*                               onboardingTitle;                                            // 0x0320   (0x0008)  
	class UDBDImage*                                   titleBG_3Slice;                                             // 0x0328   (0x0008)  
	SDK_UNDEFINED(16,4894) /* FString */               __um(Separator);                                            // 0x0330   (0x0010)  


	/// Functions
	// Function /DBDUICore/Onboarding/WBP_CoreOnboardingMenuTitle.WBP_CoreOnboardingMenuTitle_C.SetOnboardingMenuTitle
	// void SetOnboardingMenuTitle(FText& menuTitle);                                                                        // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/WBP_CoreOnboardingMenuTitle.WBP_CoreOnboardingMenuTitle_C.SetOnboardingMenuDoubleTitle
	// void SetOnboardingMenuDoubleTitle(FText& menuTitle, FText& menuSubTitle);                                             // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/WBP_CoreOnboardingMenuTitle.WBP_CoreOnboardingMenuTitle_C.SetOnboardingMenuSubtitle
	// void SetOnboardingMenuSubtitle(FText& menuTitle);                                                                     // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/WBP_CoreOnboardingMenuTitle.WBP_CoreOnboardingMenuTitle_C.ResetOnboardingMenuSubtitle
	// void ResetOnboardingMenuSubtitle();                                                                                   // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/WBP_CoreOnboardingMenuTitle.WBP_CoreOnboardingMenuTitle_C.ExecuteUbergraph_WBP_CoreOnboardingMenuTitle
	// void ExecuteUbergraph_WBP_CoreOnboardingMenuTitle(int32_t EntryPoint);                                                // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Onboarding/GameManualPanel/WBP_CoreOnboardingGameManualPanel.WBP_CoreOnboardingGameManualPanel_C
/// Size: 0x0021 (0x0003E8 - 0x000409)
class UWBP_CoreOnboardingGameManualPanel_C : public UCoreGameManualPanelWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03E8   (0x0008)  
	class UDBDScrollBox*                               ContentScrollBox;                                           // 0x03F0   (0x0008)  
	class UDBDImage*                                   Line;                                                       // 0x03F8   (0x0008)  
	class UDBDScrollBox*                               TopicsScrollBox;                                            // 0x0400   (0x0008)  
	EGameManualMenuState                               menuState;                                                  // 0x0408   (0x0001)  


	/// Functions
	// Function /DBDUICore/Onboarding/GameManualPanel/WBP_CoreOnboardingGameManualPanel.WBP_CoreOnboardingGameManualPanel_C.SetScrollPrompt
	// void SetScrollPrompt(class UCoreKeyListenerInputPromptWidget* DisplayPrompt);                                         // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/GameManualPanel/WBP_CoreOnboardingGameManualPanel.WBP_CoreOnboardingGameManualPanel_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Onboarding/GameManualPanel/WBP_CoreOnboardingGameManualPanel.WBP_CoreOnboardingGameManualPanel_C.Destruct
	// void Destruct();                                                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Onboarding/GameManualPanel/WBP_CoreOnboardingGameManualPanel.WBP_CoreOnboardingGameManualPanel_C.HandleAnalogInputEvent
	// void HandleAnalogInputEvent(FAnalogInputEvent& InAnalogInputEvent);                                                   // [0x61c32d0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /DBDUICore/Onboarding/GameManualPanel/WBP_CoreOnboardingGameManualPanel.WBP_CoreOnboardingGameManualPanel_C.OnControlModeChangedBP
	// void OnControlModeChangedBP(EControlMode controlMode);                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Onboarding/GameManualPanel/WBP_CoreOnboardingGameManualPanel.WBP_CoreOnboardingGameManualPanel_C.OnSurvivorButtonClicked
	// void OnSurvivorButtonClicked(class UCoreButtonWidget* buttonTarget);                                                  // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/GameManualPanel/WBP_CoreOnboardingGameManualPanel.WBP_CoreOnboardingGameManualPanel_C.OnKillerButtonClicked
	// void OnKillerButtonClicked(class UCoreButtonWidget* buttonTarget);                                                    // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/GameManualPanel/WBP_CoreOnboardingGameManualPanel.WBP_CoreOnboardingGameManualPanel_C.OnGeneralButtonClicked
	// void OnGeneralButtonClicked(class UCoreButtonWidget* buttonTarget);                                                   // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/GameManualPanel/WBP_CoreOnboardingGameManualPanel.WBP_CoreOnboardingGameManualPanel_C.ResetScrolls
	// void ResetScrolls(bool resetTopicsScroll);                                                                            // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /DBDUICore/Onboarding/GameManualPanel/WBP_CoreOnboardingGameManualPanel.WBP_CoreOnboardingGameManualPanel_C.ExecuteUbergraph_WBP_CoreOnboardingGameManualPanel
	// void ExecuteUbergraph_WBP_CoreOnboardingGameManualPanel(int32_t EntryPoint);                                          // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Onboarding/WBP_CoreOnboardingTab.WBP_CoreOnboardingTab_C
/// Size: 0x0018 (0x000478 - 0x000490)
class UWBP_CoreOnboardingTab_C : public UCoreTabWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0478   (0x0008)  
	class UDBDImage*                                   Selected;                                                   // 0x0480   (0x0008)  
	class UAkComponent*                                AudioComponent;                                             // 0x0488   (0x0008)  


	/// Functions
	// Function /DBDUICore/Onboarding/WBP_CoreOnboardingTab.WBP_CoreOnboardingTab_C.SetTextFieldColor
	// void SetTextFieldColor(FLinearColor Color);                                                                           // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/WBP_CoreOnboardingTab.WBP_CoreOnboardingTab_C.OnSelectedChanged
	// void OnSelectedChanged(bool IsSelected);                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Onboarding/WBP_CoreOnboardingTab.WBP_CoreOnboardingTab_C.OnEnabledChanged
	// void OnEnabledChanged(bool IsEnabled);                                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Onboarding/WBP_CoreOnboardingTab.WBP_CoreOnboardingTab_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Onboarding/WBP_CoreOnboardingTab.WBP_CoreOnboardingTab_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Onboarding/WBP_CoreOnboardingTab.WBP_CoreOnboardingTab_C.ExecuteUbergraph_WBP_CoreOnboardingTab
	// void ExecuteUbergraph_WBP_CoreOnboardingTab(int32_t EntryPoint);                                                      // [0x61c32d0] Final                
};

/// Class /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialPanel.WBP_CoreOnboardingTutorialPanel_C
/// Size: 0x00C8 (0x000380 - 0x000448)
class UWBP_CoreOnboardingTutorialPanel_C : public UCoreOnboardingTutorialPanelWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0380   (0x0008)  
	class UDBDImage*                                   Arrow1;                                                     // 0x0388   (0x0008)  
	class UDBDImage*                                   Arrow2;                                                     // 0x0390   (0x0008)  
	class UDBDImage*                                   Arrow3;                                                     // 0x0398   (0x0008)  
	class UDBDTextBlock*                               TutorialDescription;                                        // 0x03A0   (0x0008)  
	class UVerticalBox*                                TutorialPanel;                                              // 0x03A8   (0x0008)  
	class UWBP_CoreOnboardingOneButtonHolderWidget_C*  TutorialStep1ButtonHolder;                                  // 0x03B0   (0x0008)  
	class UOverlay*                                    TutorialStep1Overlay;                                       // 0x03B8   (0x0008)  
	class UWBP_CoreOnboardingOneButtonHolderWidget_C*  TutorialStep2ButtonHolder;                                  // 0x03C0   (0x0008)  
	class UOverlay*                                    TutorialStep2Overlay;                                       // 0x03C8   (0x0008)  
	class UWBP_CoreOnboardingTwoButtonHolderWidget_C*  TutorialStep3ButtonHolder;                                  // 0x03D0   (0x0008)  
	class UOverlay*                                    TutorialStep3Overlay;                                       // 0x03D8   (0x0008)  
	class UWBP_CoreOnboardingOneButtonHolderWidget_C*  TutorialStep4ButtonHolder;                                  // 0x03E0   (0x0008)  
	class UOverlay*                                    TutorialStep4Overlay;                                       // 0x03E8   (0x0008)  
	class UDBDImage*                                   WarningIcon;                                                // 0x03F0   (0x0008)  
	FSlateColor                                        NormalDescrptionColor;                                      // 0x03F8   (0x0028)  
	FSlateColor                                        WarningDescriptionColor;                                    // 0x0420   (0x0028)  


	/// Functions
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialPanel.WBP_CoreOnboardingTutorialPanel_C.SetArrowDimming
	// void SetArrowDimming(FString& TutorialDescriptionStep);                                                               // [0x61c32d0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialPanel.WBP_CoreOnboardingTutorialPanel_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialPanel.WBP_CoreOnboardingTutorialPanel_C.StopLoadingSpinner
	// void StopLoadingSpinner();                                                                                            // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialPanel.WBP_CoreOnboardingTutorialPanel_C.SetTutorialSeparators
	// void SetTutorialSeparators(FString completedStepId);                                                                  // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialPanel.WBP_CoreOnboardingTutorialPanel_C.SetTutorialDescription
	// void SetTutorialDescription(FText& Description, bool isWarning);                                                      // [0x61c32d0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialPanel.WBP_CoreOnboardingTutorialPanel_C.TryBroadcastSelectedTutorial
	// void TryBroadcastSelectedTutorial(class UCoreButtonWidget* buttonTarget);                                             // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialPanel.WBP_CoreOnboardingTutorialPanel_C.ExecuteUbergraph_WBP_CoreOnboardingTutorialPanel
	// void ExecuteUbergraph_WBP_CoreOnboardingTutorialPanel(int32_t EntryPoint);                                            // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Onboarding/GameManualPanel/WBP_CoreOnboardingGameManualTab.WBP_CoreOnboardingGameManualTab_C
/// Size: 0x00A8 (0x000478 - 0x000520)
class UWBP_CoreOnboardingGameManualTab_C : public UCoreTabWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0478   (0x0008)  
	class UWidgetAnimation*                            Clicked;                                                    // 0x0480   (0x0008)  
	class UWidgetAnimation*                            Pressed;                                                    // 0x0488   (0x0008)  
	class UWidgetAnimation*                            Hovered_TabTextfield;                                       // 0x0490   (0x0008)  
	class UWidgetAnimation*                            Hovered_Rollover;                                           // 0x0498   (0x0008)  
	class UDBDImage*                                   ImageBG;                                                    // 0x04A0   (0x0008)  
	class UDBDImage*                                   SelectionHighlight;                                         // 0x04A8   (0x0008)  
	class UDBDImage*                                   SelectionHighlight0;                                        // 0x04B0   (0x0008)  
	class UDBDImage*                                   SelectionHighlight1;                                        // 0x04B8   (0x0008)  
	class UDBDImage*                                   SelectionHighlight2;                                        // 0x04C0   (0x0008)  
	class UWBP_CoreOnHoverBorder_C*                    WBP_CoreOnHoverBorder;                                      // 0x04C8   (0x0008)  
	FSlateColor                                        HoverTextColor;                                             // 0x04D0   (0x0028)  
	FSlateColor                                        UnHoverTextColor;                                           // 0x04F8   (0x0028)  


	/// Functions
	// Function /DBDUICore/Onboarding/GameManualPanel/WBP_CoreOnboardingGameManualTab.WBP_CoreOnboardingGameManualTab_C.SetVisualSelectedState
	// void SetVisualSelectedState(bool IsSelected);                                                                         // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/GameManualPanel/WBP_CoreOnboardingGameManualTab.WBP_CoreOnboardingGameManualTab_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Onboarding/GameManualPanel/WBP_CoreOnboardingGameManualTab.WBP_CoreOnboardingGameManualTab_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Onboarding/GameManualPanel/WBP_CoreOnboardingGameManualTab.WBP_CoreOnboardingGameManualTab_C.OnSelectedChanged
	// void OnSelectedChanged(bool IsSelected);                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Onboarding/GameManualPanel/WBP_CoreOnboardingGameManualTab.WBP_CoreOnboardingGameManualTab_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Onboarding/GameManualPanel/WBP_CoreOnboardingGameManualTab.WBP_CoreOnboardingGameManualTab_C.Destruct
	// void Destruct();                                                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Onboarding/GameManualPanel/WBP_CoreOnboardingGameManualTab.WBP_CoreOnboardingGameManualTab_C.ExecuteUbergraph_WBP_CoreOnboardingGameManualTab
	// void ExecuteUbergraph_WBP_CoreOnboardingGameManualTab(int32_t EntryPoint);                                            // [0x61c32d0] Final                
};

/// Class /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialButton.WBP_CoreOnboardingTutorialButton_C
/// Size: 0x00D0 (0x0004F0 - 0x0005C0)
class UWBP_CoreOnboardingTutorialButton_C : public UCoreOnboardingTutorialButtonWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04F0   (0x0008)  
	class UDBDImage*                                   BG;                                                         // 0x04F8   (0x0008)  
	class UDBDImage*                                   BlackOverlay;                                               // 0x0500   (0x0008)  
	class UVerticalBox*                                BottomButton;                                               // 0x0508   (0x0008)  
	class USpacer*                                     BottomSpacer;                                               // 0x0510   (0x0008)  
	class UHorizontalBox*                              HorizontalRewards;                                          // 0x0518   (0x0008)  
	class UDBDImage*                                   Line;                                                       // 0x0520   (0x0008)  
	class UGridPanel*                                  MainContainer;                                              // 0x0528   (0x0008)  
	class UScaleBox*                                   RewardScale;                                                // 0x0530   (0x0008)  
	class UOverlay*                                    RewardsHeader;                                              // 0x0538   (0x0008)  
	class UDBDImage*                                   RewardTitleBg;                                              // 0x0540   (0x0008)  
	class UWBP_CoreRewardWrapper_C*                    RewardWrapper1;                                             // 0x0548   (0x0008)  
	class UWBP_CoreRewardWrapper_C*                    RewardWrapper2;                                             // 0x0550   (0x0008)  
	class UWBP_CoreRewardWrapper_C*                    RewardWrapper3;                                             // 0x0558   (0x0008)  
	class UDBDImage*                                   SmokeEnabled;                                               // 0x0560   (0x0008)  
	class UWBP_CoreOnboardingButtonAnimation_C*        SubWBP_CoreOnboardingButtonAnimation;                       // 0x0568   (0x0008)  
	class UDBDImage*                                   Tint;                                                       // 0x0570   (0x0008)  
	class UWBP_CoreOnHoverBorder_C*                    WBP_CoreOnHoverBorder;                                      // 0x0578   (0x0008)  
	FLinearColor                                       SurvivorColor;                                              // 0x0580   (0x0010)  
	FLinearColor                                       KillerColor;                                                // 0x0590   (0x0010)  
	FLinearColor                                       SurvivorColorLighter;                                       // 0x05A0   (0x0010)  
	FLinearColor                                       CompleteSmokeColor;                                         // 0x05B0   (0x0010)  


	/// Functions
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialButton.WBP_CoreOnboardingTutorialButton_C.SetKillSwitchVisuals
	// void SetKillSwitchVisuals(bool IsKillSwitch);                                                                         // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialButton.WBP_CoreOnboardingTutorialButton_C.SetEnabledVisuals
	// void SetEnabledVisuals(bool IsEnabled);                                                                               // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialButton.WBP_CoreOnboardingTutorialButton_C.SetBluePrintVisuals
	// void SetBluePrintVisuals();                                                                                           // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialButton.WBP_CoreOnboardingTutorialButton_C.RewardVisuals
	// void RewardVisuals();                                                                                                 // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialButton.WBP_CoreOnboardingTutorialButton_C.KillerVisuals
	// void KillerVisuals();                                                                                                 // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialButton.WBP_CoreOnboardingTutorialButton_C.SurvivorVisuals
	// void SurvivorVisuals();                                                                                               // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialButton.WBP_CoreOnboardingTutorialButton_C.SetData
	// void SetData(FOnboardingTutorialButtonViewData& ViewData, bool isRefreshingWithAnimation);                            // [0x61c32d0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialButton.WBP_CoreOnboardingTutorialButton_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialButton.WBP_CoreOnboardingTutorialButton_C.OnFadeInComplete_Event
	// void OnFadeInComplete_Event();                                                                                        // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialButton.WBP_CoreOnboardingTutorialButton_C.OnAnimationComplete
	// void OnAnimationComplete();                                                                                           // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialButton.WBP_CoreOnboardingTutorialButton_C.SetUIEnabled
	// void SetUIEnabled(bool Enabled);                                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialButton.WBP_CoreOnboardingTutorialButton_C.Destruct
	// void Destruct();                                                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialButton.WBP_CoreOnboardingTutorialButton_C.SetIsKillSwitch
	// void SetIsKillSwitch(bool IsKillSwitch);                                                                              // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialButton.WBP_CoreOnboardingTutorialButton_C.ExecuteUbergraph_WBP_CoreOnboardingTutorialButton
	// void ExecuteUbergraph_WBP_CoreOnboardingTutorialButton(int32_t EntryPoint);                                           // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialButtonSmall.WBP_CoreOnboardingTutorialButtonSmall_C
/// Size: 0x00D0 (0x0004F0 - 0x0005C0)
class UWBP_CoreOnboardingTutorialButtonSmall_C : public UCoreOnboardingTutorialButtonWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04F0   (0x0008)  
	class UDBDImage*                                   BG;                                                         // 0x04F8   (0x0008)  
	class UDBDImage*                                   BlackOverlay;                                               // 0x0500   (0x0008)  
	class UHorizontalBox*                              HeaderHorizontalBox;                                        // 0x0508   (0x0008)  
	class UImage*                                      Line;                                                       // 0x0510   (0x0008)  
	class USizeBox*                                    LoadingContainer;                                           // 0x0518   (0x0008)  
	class UOverlay*                                    RewardOverlay;                                              // 0x0520   (0x0008)  
	class UHorizontalBox*                              RewardsHorizontalBox;                                       // 0x0528   (0x0008)  
	class UScaleBox*                                   RewardsScaleBox;                                            // 0x0530   (0x0008)  
	class UDBDImage*                                   RewardTitleBg;                                              // 0x0538   (0x0008)  
	class UWBP_CoreRewardWrapper_C*                    RewardWrapper1;                                             // 0x0540   (0x0008)  
	class UWBP_CoreRewardWrapper_C*                    RewardWrapper2;                                             // 0x0548   (0x0008)  
	class UWBP_CoreRewardWrapper_C*                    RewardWrapper3;                                             // 0x0550   (0x0008)  
	class UDBDImage*                                   SmokeEnabled;                                               // 0x0558   (0x0008)  
	class UWBP_CoreOnboardingButtonAnimation_C*        SubWBP_CoreOnboardingButtonAnimation;                       // 0x0560   (0x0008)  
	class UDBDImage*                                   Tint;                                                       // 0x0568   (0x0008)  
	class UVerticalBox*                                VerticalBox;                                                // 0x0570   (0x0008)  
	class UWBP_CoreOnHoverBorder_C*                    WBP_CoreOnHoverBorder;                                      // 0x0578   (0x0008)  
	class UWBP_LoadingLarge_C*                         WBP_LoadingLarge;                                           // 0x0580   (0x0008)  
	FLinearColor                                       SurvivorColor;                                              // 0x0588   (0x0010)  
	FLinearColor                                       KillerColor;                                                // 0x0598   (0x0010)  
	class UAudioComponent*                             AudioComponent;                                             // 0x05A8   (0x0008)  
	FLinearColor                                       SurviviorColorLighter;                                      // 0x05B0   (0x0010)  


	/// Functions
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialButtonSmall.WBP_CoreOnboardingTutorialButtonSmall_C.SetGoToMainMenuVisuals
	// void SetGoToMainMenuVisuals();                                                                                        // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialButtonSmall.WBP_CoreOnboardingTutorialButtonSmall_C.SetRewardVisuals
	// void SetRewardVisuals();                                                                                              // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialButtonSmall.WBP_CoreOnboardingTutorialButtonSmall_C.SetKillSwitchVisuals
	// void SetKillSwitchVisuals(bool IsKillSwitch);                                                                         // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialButtonSmall.WBP_CoreOnboardingTutorialButtonSmall_C.SetEnabledVisuals
	// void SetEnabledVisuals(bool IsEnabled);                                                                               // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialButtonSmall.WBP_CoreOnboardingTutorialButtonSmall_C.SetBluePrintVisuals
	// void SetBluePrintVisuals();                                                                                           // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialButtonSmall.WBP_CoreOnboardingTutorialButtonSmall_C.KillerVisuals
	// void KillerVisuals();                                                                                                 // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialButtonSmall.WBP_CoreOnboardingTutorialButtonSmall_C.SurvivorVisuals
	// void SurvivorVisuals();                                                                                               // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialButtonSmall.WBP_CoreOnboardingTutorialButtonSmall_C.SetData
	// void SetData(FOnboardingTutorialButtonViewData& ViewData, bool isRefreshingWithAnimation);                            // [0x61c32d0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialButtonSmall.WBP_CoreOnboardingTutorialButtonSmall_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialButtonSmall.WBP_CoreOnboardingTutorialButtonSmall_C.OnFadeInComplete_Event
	// void OnFadeInComplete_Event();                                                                                        // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialButtonSmall.WBP_CoreOnboardingTutorialButtonSmall_C.OnAnimationComplete
	// void OnAnimationComplete();                                                                                           // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialButtonSmall.WBP_CoreOnboardingTutorialButtonSmall_C.Destruct
	// void Destruct();                                                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialButtonSmall.WBP_CoreOnboardingTutorialButtonSmall_C.SetUIEnabled
	// void SetUIEnabled(bool Enabled);                                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialButtonSmall.WBP_CoreOnboardingTutorialButtonSmall_C.SetIsKillSwitch
	// void SetIsKillSwitch(bool IsKillSwitch);                                                                              // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /DBDUICore/Onboarding/TutorialPanel/WBP_CoreOnboardingTutorialButtonSmall.WBP_CoreOnboardingTutorialButtonSmall_C.ExecuteUbergraph_WBP_CoreOnboardingTutorialButtonSmall
	// void ExecuteUbergraph_WBP_CoreOnboardingTutorialButtonSmall(int32_t EntryPoint);                                      // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Onboarding/WBP_CoreOnboardingMenu.WBP_CoreOnboardingMenu_C
/// Size: 0x0071 (0x0003B0 - 0x000421)
class UWBP_CoreOnboardingMenu_C : public UCoreOnboardingMenuWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03B0   (0x0008)  
	class UScaleBox*                                   _4_3_ScaleContainer;                                        // 0x03B8   (0x0008)  
	class UDBDImage*                                   BG;                                                         // 0x03C0   (0x0008)  
	class UImage*                                      BlueSmoke;                                                  // 0x03C8   (0x0008)  
	class UImage*                                      Characters;                                                 // 0x03D0   (0x0008)  
	class UWBP_CoreOnboardingGameManualPanel_C*        GameManualPanel;                                            // 0x03D8   (0x0008)  
	class UWidgetSwitcher*                             PanelSwitcher;                                              // 0x03E0   (0x0008)  
	class UImage*                                      RedSmoke;                                                   // 0x03E8   (0x0008)  
	class UWBP_CoreKeyListenerInputPrompt_C*           ScrollPrompt;                                               // 0x03F0   (0x0008)  
	class UDBDImage*                                   TabGradientBG;                                              // 0x03F8   (0x0008)  
	class UWBP_CoreOnboardingTutorialPanel_C*          TutorialPanel;                                              // 0x0400   (0x0008)  
	bool                                               isFTUE;                                                     // 0x0408   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0409   (0x0007)  MISSED
	class UObject*                                     Input_Prompt_Text;                                          // 0x0410   (0x0008)  
	class UAudioComponent*                             AudioComponent;                                             // 0x0418   (0x0008)  
	bool                                               BackActionEnable;                                           // 0x0420   (0x0001)  


	/// Functions
	// Function /DBDUICore/Onboarding/WBP_CoreOnboardingMenu.WBP_CoreOnboardingMenu_C.setCharacterVisibility
	// void setCharacterVisibility(bool& TutorialPanel);                                                                     // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/WBP_CoreOnboardingMenu.WBP_CoreOnboardingMenu_C.Get_Title_Text
	// FText Get_Title_Text();                                                                                               // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /DBDUICore/Onboarding/WBP_CoreOnboardingMenu.WBP_CoreOnboardingMenu_C.GetGameManualInterface
	// TScriptInterface<Class> GetGameManualInterface();                                                                     // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /DBDUICore/Onboarding/WBP_CoreOnboardingMenu.WBP_CoreOnboardingMenu_C.GetOnboardingTutorialInterface
	// TScriptInterface<Class> GetOnboardingTutorialInterface();                                                             // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /DBDUICore/Onboarding/WBP_CoreOnboardingMenu.WBP_CoreOnboardingMenu_C.SetOnboardingMenuState
	// void SetOnboardingMenuState(EOnboardingMenuState menuState);                                                          // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/WBP_CoreOnboardingMenu.WBP_CoreOnboardingMenu_C.SetFirstTimeUserExperience
	// void SetFirstTimeUserExperience(bool ftue);                                                                           // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/WBP_CoreOnboardingMenu.WBP_CoreOnboardingMenu_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Onboarding/WBP_CoreOnboardingMenu.WBP_CoreOnboardingMenu_C.OnSetOnboardingMenuSubtitle
	// void OnSetOnboardingMenuSubtitle(FText Subtitle);                                                                     // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/WBP_CoreOnboardingMenu.WBP_CoreOnboardingMenu_C.OnResetOnboardingMenuSubtitle
	// void OnResetOnboardingMenuSubtitle();                                                                                 // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/WBP_CoreOnboardingMenu.WBP_CoreOnboardingMenu_C.SetUIEnabled
	// void SetUIEnabled(bool Enabled);                                                                                      // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/WBP_CoreOnboardingMenu.WBP_CoreOnboardingMenu_C.BackInputSwitcherEvent
	// void BackInputSwitcherEvent();                                                                                        // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/WBP_CoreOnboardingMenu.WBP_CoreOnboardingMenu_C.SetBackButtonVisible
	// void SetBackButtonVisible(bool visible);                                                                              // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/WBP_CoreOnboardingMenu.WBP_CoreOnboardingMenu_C.SettingsInputSwitcherEvent
	// void SettingsInputSwitcherEvent();                                                                                    // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/WBP_CoreOnboardingMenu.WBP_CoreOnboardingMenu_C.SetQuitGameButtonVisible
	// void SetQuitGameButtonVisible(bool visible);                                                                          // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/WBP_CoreOnboardingMenu.WBP_CoreOnboardingMenu_C.ChangeAccountInputSwitcherEvent
	// void ChangeAccountInputSwitcherEvent();                                                                               // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/WBP_CoreOnboardingMenu.WBP_CoreOnboardingMenu_C.SetChangeAccountInputSwitcherVisible
	// void SetChangeAccountInputSwitcherVisible(bool visible);                                                              // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/WBP_CoreOnboardingMenu.WBP_CoreOnboardingMenu_C.QuitGameInputSwitcherEvent
	// void QuitGameInputSwitcherEvent();                                                                                    // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Onboarding/WBP_CoreOnboardingMenu.WBP_CoreOnboardingMenu_C.ExecuteUbergraph_WBP_CoreOnboardingMenu
	// void ExecuteUbergraph_WBP_CoreOnboardingMenu(int32_t EntryPoint);                                                     // [0x61c32d0] Final|HasDefaults    
};

/// Struct /Script/Onboarding.OnboardingBotMatchDefinition
/// Size: 0x0058 (0x000018 - 0x000070)
struct FOnboardingBotMatchDefinition : FDBDTableRowBaseWithId
{ 
	SDK_UNDEFINED(24,4895) /* FText */                 __um(DisplayName);                                          // 0x0018   (0x0018)  
	SDK_UNDEFINED(24,4896) /* FText */                 __um(Description);                                          // 0x0030   (0x0018)  
	FName                                              DefaultMapId;                                               // 0x0048   (0x000C)  
	int32_t                                            DefaultSurvivorId;                                          // 0x0054   (0x0004)  
	int32_t                                            DefaultKillerId;                                            // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	TArray<int32_t>                                    DefaultBotsId;                                              // 0x0060   (0x0010)  
};

/// Struct /Script/Onboarding.OnboardingTutorialDefinition
/// Size: 0x00B0 (0x000018 - 0x0000C8)
struct FOnboardingTutorialDefinition : FDBDTableRowBaseWithId
{ 
	SDK_UNDEFINED(24,4897) /* FText */                 __um(DisplayName);                                          // 0x0018   (0x0018)  
	SDK_UNDEFINED(24,4898) /* FText */                 __um(CompletedDisplayName);                                 // 0x0030   (0x0018)  
	SDK_UNDEFINED(24,4899) /* FText */                 __um(Description);                                          // 0x0048   (0x0018)  
	SDK_UNDEFINED(24,4900) /* FText */                 __um(CompletedDescription);                                 // 0x0060   (0x0018)  
	EOnboardingTutorialType                            TutorialType;                                               // 0x0078   (0x0001)  
	EOnboardingTutorialButtonStyle                     ButtonStyle;                                                // 0x0079   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x007A   (0x0006)  MISSED
	SDK_UNDEFINED(16,4901) /* FString */               __um(LevelId);                                              // 0x0080   (0x0010)  
	SDK_UNDEFINED(48,4902) /* TWeakObjectPtr<UTexture2D*> */ __um(Icon);                                           // 0x0090   (0x0030)  
	int32_t                                            DefaultCharacterId;                                         // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00C4   (0x0004)  MISSED
};

/// Struct /Script/Onboarding.SecretBotMatchLoadoutDefinition
/// Size: 0x0028 (0x000008 - 0x000030)
struct FSecretBotMatchLoadoutDefinition : FDBDTableRowBase
{ 
	char                                               BotRank;                                                    // 0x0008   (0x0001)  
	ELoadoutItemType                                   ItemEquipped;                                               // 0x0009   (0x0001)  
	EItemRarity                                        ItemRarity;                                                 // 0x000A   (0x0001)  
	char                                               NbAddons;                                                   // 0x000B   (0x0001)  
	EItemRarity                                        AddonsRarity;                                               // 0x000C   (0x0001)  
	EItemRarity                                        OfferingRarity;                                             // 0x000D   (0x0001)  
	char                                               NbGenericPerks;                                             // 0x000E   (0x0001)  
	char                                               NbCharacterSpecificPerks;                                   // 0x000F   (0x0001)  
	TArray<int32_t>                                    PerkTiersList;                                              // 0x0010   (0x0010)  
	TArray<int32_t>                                    CharactersIndexList;                                        // 0x0020   (0x0010)  
};

/// Struct /Script/Onboarding.SecretBotMatchNamesDefinition
/// Size: 0x0018 (0x000008 - 0x000020)
struct FSecretBotMatchNamesDefinition : FDBDTableRowBase
{ 
	char                                               ID;                                                         // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	SDK_UNDEFINED(16,4903) /* FString */               __um(Name);                                                 // 0x0010   (0x0010)  
};

