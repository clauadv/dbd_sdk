
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DBDSharedTypes
/// dependency: DBDUIViewsCore
/// dependency: Engine
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
	// void SetFontSize(int32_t Size);                                                                                       // [0x61d2f50] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/WBP_CoreSubtitles.WBP_CoreSubtitles_C.SetBackgroundOpacity
	// void SetBackgroundOpacity(ESubtitlesBackgroundOpacity backgroundOpacity);                                             // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/WBP_CoreSubtitles.WBP_CoreSubtitles_C.SetPositionByAnchor
	// void SetPositionByAnchor(FVector2D position);                                                                         // [0x61d2f50] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/WBP_CoreSubtitles.WBP_CoreSubtitles_C.SetSubtitlesPosition
	// void SetSubtitlesPosition(ESubtitlesPosition position);                                                               // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/WBP_CoreSubtitles.WBP_CoreSubtitles_C.SetConstrainAspectRatioChanged
	// void SetConstrainAspectRatioChanged(bool isConstrained, float AspectRatio);                                           // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/WBP_CoreSubtitles.WBP_CoreSubtitles_C.SetSubtitlesSize
	// void SetSubtitlesSize(ESubtitlesSize Size);                                                                           // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/WBP_CoreSubtitles.WBP_CoreSubtitles_C.SetSubtitlesBackgroundOpacity
	// void SetSubtitlesBackgroundOpacity(ESubtitlesBackgroundOpacity Opacity);                                              // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/WBP_CoreSubtitles.WBP_CoreSubtitles_C.ExecuteUbergraph_WBP_CoreSubtitles
	// void ExecuteUbergraph_WBP_CoreSubtitles(int32_t EntryPoint);                                                          // [0x61d2f50] Final                
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
	// void SetPipsState(int32_t RankPipsCount, int32_t ActivePipsCount);                                                    // [0x61d2f50] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /DBDUICore/Common/Rewards/WBP_CoreRewardWrapper.WBP_CoreRewardWrapper_C
/// Size: 0x0009 (0x0002D0 - 0x0002D9)
class UWBP_CoreRewardWrapper_C : public UCoreRewardWrapperWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02D0   (0x0008)  
	ERewardType                                        ItemType;                                                   // 0x02D8   (0x0001)  


	/// Functions
	// Function /DBDUICore/Common/Rewards/WBP_CoreRewardWrapper.WBP_CoreRewardWrapper_C.SetWidgetSize
	// void SetWidgetSize(ERewardType ItemType);                                                                             // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreRewardWrapper.WBP_CoreRewardWrapper_C.SetPreviewWidget
	// void SetPreviewWidget(ERewardType RewardType);                                                                        // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreRewardWrapper.WBP_CoreRewardWrapper_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreRewardWrapper.WBP_CoreRewardWrapper_C.ExecuteUbergraph_WBP_CoreRewardWrapper
	// void ExecuteUbergraph_WBP_CoreRewardWrapper(int32_t EntryPoint);                                                      // [0x61d2f50] Final                
};

/// Class /DBDUICore/Common/Inputs/InputSwitchers/WBP_CoreStandardInputSwitcher.WBP_CoreStandardInputSwitcher_C
/// Size: 0x0000 (0x0003A0 - 0x0003A0)
class UWBP_CoreStandardInputSwitcher_C : public UCoreInputSwitcherWidget
{ 
public:
};

/// Class /DBDUICore/Common/Inputs/InputPrompts/WBP_CoreKeyListenerInputPrompt.WBP_CoreKeyListenerInputPrompt_C
/// Size: 0x0008 (0x000368 - 0x000370)
class UWBP_CoreKeyListenerInputPrompt_C : public UCoreKeyListenerInputPromptWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0368   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/Inputs/InputPrompts/WBP_CoreKeyListenerInputPrompt.WBP_CoreKeyListenerInputPrompt_C.OnEnabledChanged
	// void OnEnabledChanged(bool IsEnabled);                                                                                // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/InputPrompts/WBP_CoreKeyListenerInputPrompt.WBP_CoreKeyListenerInputPrompt_C.ExecuteUbergraph_WBP_CoreKeyListenerInputPrompt
	// void ExecuteUbergraph_WBP_CoreKeyListenerInputPrompt(int32_t EntryPoint);                                             // [0x61d2f50] Final|HasDefaults    
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
	SDK_UNDEFINED(48,3541) /* TWeakObjectPtr<UTexture2D*> */ __um(BadgeTexture);                                   // 0x0348   (0x0030)  
	ECustomizationCategory                             category;                                                   // 0x0378   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0379   (0x0007)  MISSED
	SDK_UNDEFINED(48,3542) /* TWeakObjectPtr<UTexture2D*> */ __um(bannerTexture);                                  // 0x0380   (0x0030)  


	/// Functions
	// Function /DBDUICore/Common/PlayerCard/WBP_CorePlayerCardContainer.WBP_CorePlayerCardContainer_C.SetAnimation
	// void SetAnimation(class UClass* WidgetAnimation, class UUserWidget*& WidgetObj);                                      // [0x61d2f50] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerCard/WBP_CorePlayerCardContainer.WBP_CorePlayerCardContainer_C.SetIcon
	// void SetIcon(TWeakObjectPtr<UTexture2D*> Texture2D);                                                                  // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerCard/WBP_CorePlayerCardContainer.WBP_CorePlayerCardContainer_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerCard/WBP_CorePlayerCardContainer.WBP_CorePlayerCardContainer_C.BndEvt__WBP_CorePlayerCardContainer_HitzoneButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	// void BndEvt__WBP_CorePlayerCardContainer_HitzoneButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // [0x61d2f50] BlueprintEvent       
	// Function /DBDUICore/Common/PlayerCard/WBP_CorePlayerCardContainer.WBP_CorePlayerCardContainer_C.InitIcon
	// void InitIcon(TWeakObjectPtr<UTexture2D*> Icon);                                                                      // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerCard/WBP_CorePlayerCardContainer.WBP_CorePlayerCardContainer_C.InitAnimation
	// void InitAnimation(class UClass* WidgetAnimation);                                                                    // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerCard/WBP_CorePlayerCardContainer.WBP_CorePlayerCardContainer_C.SetOpacity
	// void SetOpacity(float Opacity);                                                                                       // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerCard/WBP_CorePlayerCardContainer.WBP_CorePlayerCardContainer_C.SetAnimationPlay
	// void SetAnimationPlay(bool IsPlaying);                                                                                // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerCard/WBP_CorePlayerCardContainer.WBP_CorePlayerCardContainer_C.ExecuteUbergraph_WBP_CorePlayerCardContainer
	// void ExecuteUbergraph_WBP_CorePlayerCardContainer(int32_t EntryPoint);                                                // [0x61d2f50] Final|HasDefaults    
};

/// Class /DBDUICore/Common/Rewards/WBP_CoreRewardWrapperAnimation.WBP_CoreRewardWrapperAnimation_C
/// Size: 0x0051 (0x000298 - 0x0002E9)
class UWBP_CoreRewardWrapperAnimation_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0298   (0x0008)  
	class UWidgetAnimation*                            RewardAnimTextFadeOut;                                      // 0x02A0   (0x0008)  
	class UWidgetAnimation*                            RewardAnimClaimed;                                          // 0x02A8   (0x0008)  
	class UImage*                                      BgSmoke;                                                    // 0x02B0   (0x0008)  
	class UWBP_CoreRewardWrapper_C*                    CustomizationRewardWrapper;                                 // 0x02B8   (0x0008)  
	class UDBDTextBlock*                               rewardName;                                                 // 0x02C0   (0x0008)  
	TArray<class UObject*>                             CachedRewardWidgets;                                        // 0x02C8   (0x0010)  
	SDK_UNDEFINED(16,3543) /* FMulticastInlineDelegate */ __um(RewardAnimtionDone);                                // 0x02D8   (0x0010)  
	ERewardType                                        RewardType;                                                 // 0x02E8   (0x0001)  


	/// Functions
	// Function /DBDUICore/Common/Rewards/WBP_CoreRewardWrapperAnimation.WBP_CoreRewardWrapperAnimation_C.Finished_705593924B773F37BEBD89BEA8077861
	// void Finished_705593924B773F37BEBD89BEA8077861();                                                                     // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreRewardWrapperAnimation.WBP_CoreRewardWrapperAnimation_C.Finished_B8DBF1554B4482E8F46849B162C58243
	// void Finished_B8DBF1554B4482E8F46849B162C58243();                                                                     // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreRewardWrapperAnimation.WBP_CoreRewardWrapperAnimation_C.PlayTextFadeOutAnim
	// void PlayTextFadeOutAnim(float Delay);                                                                                // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreRewardWrapperAnimation.WBP_CoreRewardWrapperAnimation_C.OnSetSmallTemplate
	// void OnSetSmallTemplate(bool bIsSmall);                                                                               // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreRewardWrapperAnimation.WBP_CoreRewardWrapperAnimation_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreRewardWrapperAnimation.WBP_CoreRewardWrapperAnimation_C.PlayClaimedAnim
	// void PlayClaimedAnim(float TimeOnTextFadeOut);                                                                        // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreRewardWrapperAnimation.WBP_CoreRewardWrapperAnimation_C.ExecuteUbergraph_WBP_CoreRewardWrapperAnimation
	// void ExecuteUbergraph_WBP_CoreRewardWrapperAnimation(int32_t EntryPoint);                                             // [0x61d2f50] Final                
	// Function /DBDUICore/Common/Rewards/WBP_CoreRewardWrapperAnimation.WBP_CoreRewardWrapperAnimation_C.RewardAnimtionDone__DelegateSignature
	// void RewardAnimtionDone__DelegateSignature();                                                                         // [0x61d2f50] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /DBDUICore/Common/Inputs/InputPrompts/WBP_CoreInputPrompt.WBP_CoreInputPrompt_C
/// Size: 0x00B8 (0x000368 - 0x000420)
class UWBP_CoreInputPrompt_C : public UCoreInputPromptWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0368   (0x0008)  
	class UOverlay*                                    BetaFeatureOverlay;                                         // 0x0370   (0x0008)  
	class UDBDTextBlock*                               BetaFeatureTB;                                              // 0x0378   (0x0008)  
	class UDBDImage*                                   HighlightIMG;                                               // 0x0380   (0x0008)  
	class USpacer*                                     LeftSpacerForRect;                                          // 0x0388   (0x0008)  
	class UDBDImage*                                   PromptIcon;                                                 // 0x0390   (0x0008)  
	class USpacer*                                     RightSpacerForRect;                                         // 0x0398   (0x0008)  
	class UTextBlock*                                  TextLabel;                                                  // 0x03A0   (0x0008)  
	SDK_UNDEFINED(80,3544) /* TMap<EControlMode, UDataTable*> */ __um(ControlModeDataMap);                         // 0x03A8   (0x0050)  
	bool                                               IsPromptFound;                                              // 0x03F8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x03F9   (0x0007)  MISSED
	class UTexture2D*                                  DefaultMouseKBIcon;                                         // 0x0400   (0x0008)  
	SDK_UNDEFINED(1,3545) /* TEnumAsByte<EHorizontalAlignment> */ __um(PaddingAlignment);                          // 0x0408   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0409   (0x0003)  MISSED
	float                                              PaddingValue;                                               // 0x040C   (0x0004)  
	SDK_UNDEFINED(16,3546) /* TArray<TWeakObjectPtr<UTexture2D*>> */ __um(WideIcons);                              // 0x0410   (0x0010)  


	/// Functions
	// Function /DBDUICore/Common/Inputs/InputPrompts/WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.HandlePromptDataRow
	// void HandlePromptDataRow(FInputPromptDataRow& PromptDataRow);                                                         // [0x61d2f50] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/InputPrompts/WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.HandleUnfoundPrompt
	// void HandleUnfoundPrompt();                                                                                           // [0x61d2f50] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/InputPrompts/WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.GetDataTable
	// void GetDataTable(class UDataTable*& DataTable, bool& IsFound);                                                       // [0x61d2f50] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/InputPrompts/WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.SetIconTexture
	// void SetIconTexture(TWeakObjectPtr<UTexture2D*>& iconTexture);                                                        // [0x61d2f50] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/InputPrompts/WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/InputPrompts/WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.DisplayPrompt
	// void DisplayPrompt();                                                                                                 // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/InputPrompts/WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.OnEnabledChanged
	// void OnEnabledChanged(bool IsEnabled);                                                                                // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/InputPrompts/WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.Construct
	// void Construct();                                                                                                     // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/InputPrompts/WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.SetBetaFeatureOverlayVisible
	// void SetBetaFeatureOverlayVisible(bool IsVisible);                                                                    // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/InputPrompts/WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.ExecuteUbergraph_WBP_CoreInputPrompt
	// void ExecuteUbergraph_WBP_CoreInputPrompt(int32_t EntryPoint);                                                        // [0x61d2f50] Final|HasDefaults    
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
	SDK_UNDEFINED(16,3547) /* FString */               __um(PreviewWidth);                                         // 0x0348   (0x0010)  
	SDK_UNDEFINED(16,3548) /* FString */               __um(PreviewHeight);                                        // 0x0358   (0x0010)  
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
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.ForceBorderSize
	// void ForceBorderSize(int32_t Thickness, FVector2D DesiredSize);                                                       // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.AnimationCompleted
	// void AnimationCompleted();                                                                                            // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.PrintPreviewRatios
	// void PrintPreviewRatios();                                                                                            // [0x61d2f50] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.UpdateMaterialColors
	// void UpdateMaterialColors(FLinearColor progressBarColor, FLinearColor BackgroundColor);                               // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.BindToButton
	// void BindToButton(class UCoreButtonWidget* buttonToBindOn);                                                           // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.OnHovered
	// void OnHovered(class UCoreButtonWidget* buttonTarget);                                                                // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.OnUnhovered
	// void OnUnhovered(class UCoreButtonWidget* buttonTarget);                                                              // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.OnPressed
	// void OnPressed(class UCoreButtonWidget* buttonTarget);                                                                // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.OnClicked
	// void OnClicked(class UCoreButtonWidget* buttonTarget);                                                                // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.PlayHoveredAnimation
	// void PlayHoveredAnimation(bool playForward);                                                                          // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.PlayPressedAnimation
	// void PlayPressedAnimation(bool playForward);                                                                          // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.OnReleased
	// void OnReleased(class UCoreButtonWidget* buttonTarget);                                                               // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.Destruct
	// void Destruct();                                                                                                      // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.UpdateColors
	// void UpdateColors(FLinearColor& progressBarColor, FLinearColor& BackgroundColor);                                     // [0x61d2f50] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.Construct
	// void Construct();                                                                                                     // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.UnbindFromButton
	// void UnbindFromButton();                                                                                              // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.EndOfAnimationEvent
	// void EndOfAnimationEvent(class UUITweenInstance* tween);                                                              // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Borders/WBP_CoreOnHoverBorder.WBP_CoreOnHoverBorder_C.ExecuteUbergraph_WBP_CoreOnHoverBorder
	// void ExecuteUbergraph_WBP_CoreOnHoverBorder(int32_t EntryPoint);                                                      // [0x61d2f50] Final|HasDefaults    
};

/// Class /DBDUICore/Common/Inputs/Buttons/WBP_CoreStandardButton.WBP_CoreStandardButton_C
/// Size: 0x0068 (0x000458 - 0x0004C0)
class UWBP_CoreStandardButton_C : public UCoreKeyListenerButtonWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0458   (0x0008)  
	class UWidgetAnimation*                            Disable;                                                    // 0x0460   (0x0008)  
	class UWidgetAnimation*                            Pressed;                                                    // 0x0468   (0x0008)  
	class UWidgetAnimation*                            Hover;                                                      // 0x0470   (0x0008)  
	class UWidgetAnimation*                            Default;                                                    // 0x0478   (0x0008)  
	class USizeBox*                                    BackgroundContainer;                                        // 0x0480   (0x0008)  
	class UDBDImage*                                   BG;                                                         // 0x0488   (0x0008)  
	class UOverlay*                                    Overlay;                                                    // 0x0490   (0x0008)  
	class UDBDImage*                                   RedTraitIMG;                                                // 0x0498   (0x0008)  
	class UDBDImage*                                   SmokeBG;                                                    // 0x04A0   (0x0008)  
	float                                              PaddingText;                                                // 0x04A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x04AC   (0x0004)  MISSED
	SDK_UNDEFINED(16,3549) /* FString */               __um(ActionMapping);                                        // 0x04B0   (0x0010)  


	/// Functions
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnAlignmentChanged
	// void OnAlignmentChanged(TEnumAsByte<ETextJustify> newAlignment);                                                      // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnPressed
	// void OnPressed();                                                                                                     // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnEnabledChanged
	// void OnEnabledChanged(bool IsEnabled);                                                                                // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreStandardButton.WBP_CoreStandardButton_C.ExecuteUbergraph_WBP_CoreStandardButton
	// void ExecuteUbergraph_WBP_CoreStandardButton(int32_t EntryPoint);                                                     // [0x61d2f50] Final                
};

/// Class /DBDUICore/Common/Rewards/WBP_CoreCurrencyProgressionReward.WBP_CoreCurrencyProgressionReward_C
/// Size: 0x0068 (0x000478 - 0x0004E0)
class UWBP_CoreCurrencyProgressionReward_C : public UCoreCurrencyProgressionRewardWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0478   (0x0008)  
	class UDBDTextBlock*                               AmountText;                                                 // 0x0480   (0x0008)  
	class UDBDImage*                                   BackgroundImage;                                            // 0x0488   (0x0008)  
	class UOverlay*                                    SelectedContainer;                                          // 0x0490   (0x0008)  
	class UDBDImage*                                   StreamingIcon;                                              // 0x0498   (0x0008)  
	class UDBDImage*                                   Tint;                                                       // 0x04A0   (0x0008)  
	FGeometry                                          NewVar;                                                     // 0x04A8   (0x0038)  


	/// Functions
	// Function /DBDUICore/Common/Rewards/WBP_CoreCurrencyProgressionReward.WBP_CoreCurrencyProgressionReward_C.Destruct
	// void Destruct();                                                                                                      // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCurrencyProgressionReward.WBP_CoreCurrencyProgressionReward_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCurrencyProgressionReward.WBP_CoreCurrencyProgressionReward_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCurrencyProgressionReward.WBP_CoreCurrencyProgressionReward_C.OnSelectedChanged
	// void OnSelectedChanged(bool IsSelected, bool withAnimation);                                                          // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCurrencyProgressionReward.WBP_CoreCurrencyProgressionReward_C.SetCurrencyProgressionRewardData
	// void SetCurrencyProgressionRewardData(FCurrencyProgressionRewardViewData& CurrencyProgressionRewardViewData);         // [0x61d2f50] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCurrencyProgressionReward.WBP_CoreCurrencyProgressionReward_C.ExecuteUbergraph_WBP_CoreCurrencyProgressionReward
	// void ExecuteUbergraph_WBP_CoreCurrencyProgressionReward(int32_t EntryPoint);                                          // [0x61d2f50] Final|HasDefaults    
};

/// Class /DBDUICore/Common/Rewards/WBP_CoreCharacterReward.WBP_CoreCharacterReward_C
/// Size: 0x0040 (0x000478 - 0x0004B8)
class UWBP_CoreCharacterReward_C : public UCoreCharacterRewardWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0478   (0x0008)  
	class UDBDImage*                                   BackgroundImage;                                            // 0x0480   (0x0008)  
	class UDBDImage*                                   KillswitchOverlay;                                          // 0x0488   (0x0008)  
	class UDBDImage*                                   PrestigeBG;                                                 // 0x0490   (0x0008)  
	class UDBDImage*                                   prestigeIcon;                                               // 0x0498   (0x0008)  
	class UDBDImage*                                   Shadow;                                                     // 0x04A0   (0x0008)  
	class UDBDImage*                                   StreamingIcon;                                              // 0x04A8   (0x0008)  
	class UDBDImage*                                   Tint;                                                       // 0x04B0   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/Rewards/WBP_CoreCharacterReward.WBP_CoreCharacterReward_C.Destruct
	// void Destruct();                                                                                                      // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCharacterReward.WBP_CoreCharacterReward_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCharacterReward.WBP_CoreCharacterReward_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCharacterReward.WBP_CoreCharacterReward_C.SetCharacterRewardData
	// void SetCharacterRewardData(FCharacterRewardViewData& CharacterRewardViewData);                                       // [0x61d2f50] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCharacterReward.WBP_CoreCharacterReward_C.ExecuteUbergraph_WBP_CoreCharacterReward
	// void ExecuteUbergraph_WBP_CoreCharacterReward(int32_t EntryPoint);                                                    // [0x61d2f50] Final|HasDefaults    
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
	// void SetMaterial(bool useAnimation);                                                                                  // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Overlays/WBP_LockedOverlay.WBP_LockedOverlay_C.Finished_CAC253D64C47EC4CC34AE7898425099E
	// void Finished_CAC253D64C47EC4CC34AE7898425099E();                                                                     // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Overlays/WBP_LockedOverlay.WBP_LockedOverlay_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Overlays/WBP_LockedOverlay.WBP_LockedOverlay_C.SetIsLocked
	// void SetIsLocked(bool IsLocked, bool useAnimation);                                                                   // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Overlays/WBP_LockedOverlay.WBP_LockedOverlay_C.ExecuteUbergraph_WBP_LockedOverlay
	// void ExecuteUbergraph_WBP_LockedOverlay(int32_t EntryPoint);                                                          // [0x61d2f50] Final                
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
	// void UpdatePipVisual(int32_t PipSeed);                                                                                // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CoreRankPip.WBP_CoreRankPip_C.SetState
	// void SetState(bool IsVisible, bool IsActivePip);                                                                      // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CoreRankPip.WBP_CoreRankPip_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CoreRankPip.WBP_CoreRankPip_C.Construct
	// void Construct();                                                                                                     // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CoreRankPip.WBP_CoreRankPip_C.ExecuteUbergraph_WBP_CoreRankPip
	// void ExecuteUbergraph_WBP_CoreRankPip(int32_t EntryPoint);                                                            // [0x61d2f50] Final                
};

/// Class /DBDUICore/Common/PlayerProfile/WBP_CorePlayerRank.WBP_CorePlayerRank_C
/// Size: 0x0010 (0x000528 - 0x000538)
class UWBP_CorePlayerRank_C : public UCorePlayerRankWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0528   (0x0008)  
	bool                                               TestIsKiller;                                               // 0x0530   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0531   (0x0003)  MISSED
	int32_t                                            TestRankIndex;                                              // 0x0534   (0x0004)  


	/// Functions
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerRank.WBP_CorePlayerRank_C.SetData
	// void SetData(FRankViewData& Data);                                                                                    // [0x61d2f50] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerRank.WBP_CorePlayerRank_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerRank.WBP_CorePlayerRank_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerRank.WBP_CorePlayerRank_C.Destruct
	// void Destruct();                                                                                                      // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerRank.WBP_CorePlayerRank_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerRank.WBP_CorePlayerRank_C.AnimateRankUp
	// void AnimateRankUp();                                                                                                 // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerRank.WBP_CorePlayerRank_C.ExecuteUbergraph_WBP_CorePlayerRank
	// void ExecuteUbergraph_WBP_CorePlayerRank(int32_t EntryPoint);                                                         // [0x61d2f50] Final|HasDefaults    
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
	// void SetPriceTagVisual();                                                                                             // [0x61d2f50] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Currency/WBP_CorePriceTag.WBP_CorePriceTag_C.SetEnabled
	// void SetEnabled(bool Enabled);                                                                                        // [0x61d2f50] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Currency/WBP_CorePriceTag.WBP_CorePriceTag_C.SetData
	// void SetData(FPriceTagViewData& ViewData);                                                                            // [0x61d2f50] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Currency/WBP_CorePriceTag.WBP_CorePriceTag_C.SetCurrencyIcon
	// void SetCurrencyIcon(ECurrencyType CurrencyType);                                                                     // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Currency/WBP_CorePriceTag.WBP_CorePriceTag_C.SetBackgroundVisible
	// void SetBackgroundVisible(bool showBackground);                                                                       // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Currency/WBP_CorePriceTag.WBP_CorePriceTag_C.ExecuteUbergraph_WBP_CorePriceTag
	// void ExecuteUbergraph_WBP_CorePriceTag(int32_t EntryPoint);                                                           // [0x61d2f50] Final|HasDefaults    
};

/// Class /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevelExpGauge.WBP_CorePlayerLevelExpGauge_C
/// Size: 0x0040 (0x000358 - 0x000398)
class UWBP_CorePlayerLevelExpGauge_C : public UCorePlayerExpGaugeWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0358   (0x0008)  
	class UDBDImage*                                   Background;                                                 // 0x0360   (0x0008)  
	class UDBDImage*                                   Gauge;                                                      // 0x0368   (0x0008)  
	class UDBDTextBlock*                               progress;                                                   // 0x0370   (0x0008)  
	class UDBDTextBlock*                               xpTotalTB;                                                  // 0x0378   (0x0008)  
	class UDBDTextBlock*                               xpValueTB;                                                  // 0x0380   (0x0008)  
	class UMaterialInstanceDynamic*                    GaugeMaterial;                                              // 0x0388   (0x0008)  
	int32_t                                            CurrentXP;                                                  // 0x0390   (0x0004)  
	int32_t                                            MaxXp;                                                      // 0x0394   (0x0004)  


	/// Functions
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevelExpGauge.WBP_CorePlayerLevelExpGauge_C.UpdateGauge
	// void UpdateGauge(float PlayerExp, float NextLevelExp);                                                                // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevelExpGauge.WBP_CorePlayerLevelExpGauge_C.Construct
	// void Construct();                                                                                                     // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevelExpGauge.WBP_CorePlayerLevelExpGauge_C.OnPlayMaxValueAnimation
	// void OnPlayMaxValueAnimation();                                                                                       // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevelExpGauge.WBP_CorePlayerLevelExpGauge_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevelExpGauge.WBP_CorePlayerLevelExpGauge_C.SetViewData
	// void SetViewData(FPlayerLevelViewData& playerViewData);                                                               // [0x61d2f50] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevelExpGauge.WBP_CorePlayerLevelExpGauge_C.OnUpdateProgress
	// void OnUpdateProgress(class UUITweenInstance* tween);                                                                 // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevelExpGauge.WBP_CorePlayerLevelExpGauge_C.Add
	// void Add(int32_t bonusXp);                                                                                            // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevelExpGauge.WBP_CorePlayerLevelExpGauge_C.OnUpdateComplete
	// void OnUpdateComplete(class UUITweenInstance* tween);                                                                 // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevelExpGauge.WBP_CorePlayerLevelExpGauge_C.ExecuteUbergraph_WBP_CorePlayerLevelExpGauge
	// void ExecuteUbergraph_WBP_CorePlayerLevelExpGauge(int32_t EntryPoint);                                                // [0x61d2f50] Final|HasDefaults    
};

/// Class /DBDUICore/Common/Rewards/WBP_CoreCustomizationReward.WBP_CoreCustomizationReward_C
/// Size: 0x0070 (0x000680 - 0x0006F0)
class UWBP_CoreCustomizationReward_C : public UCoreCustomizationRewardWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0680   (0x0008)  
	class UDBDImage*                                   BackgroundImage;                                            // 0x0688   (0x0008)  
	class UOverlay*                                    CheckmarkOverlay;                                           // 0x0690   (0x0008)  
	class UOverlay*                                    EventPointsOverlay;                                         // 0x0698   (0x0008)  
	class UOverlay*                                    KillSwitch;                                                 // 0x06A0   (0x0008)  
	class UDBDImage*                                   KillSwitchIcon;                                             // 0x06A8   (0x0008)  
	class UOverlay*                                    OwnedIndicator;                                             // 0x06B0   (0x0008)  
	class UTextBlock*                                  OwnerIndicatorTB;                                           // 0x06B8   (0x0008)  
	class UOverlay*                                    SelectedContainer;                                          // 0x06C0   (0x0008)  
	class UDBDImage*                                   Shadow;                                                     // 0x06C8   (0x0008)  
	class UDBDImage*                                   StreamingIcon;                                              // 0x06D0   (0x0008)  
	class UOverlay*                                    UnbreakableSetIcon;                                         // 0x06D8   (0x0008)  
	class UDBDImage*                                   UnbreakableSetIconImage;                                    // 0x06E0   (0x0008)  
	class UOverlay*                                    VisceralOverlay;                                            // 0x06E8   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/Rewards/WBP_CoreCustomizationReward.WBP_CoreCustomizationReward_C.Destruct
	// void Destruct();                                                                                                      // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCustomizationReward.WBP_CoreCustomizationReward_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCustomizationReward.WBP_CoreCustomizationReward_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCustomizationReward.WBP_CoreCustomizationReward_C.OnSelectedChanged
	// void OnSelectedChanged(bool IsSelected, bool withAnimation);                                                          // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCustomizationReward.WBP_CoreCustomizationReward_C.SetCustomizationRewardData
	// void SetCustomizationRewardData(FCustomizationRewardViewData& CustomizationRewardViewData);                           // [0x61d2f50] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCustomizationReward.WBP_CoreCustomizationReward_C.SetMilestoneTrackerOwnedVisuals
	// void SetMilestoneTrackerOwnedVisuals(bool IsOwned, bool useAnimation);                                                // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCustomizationReward.WBP_CoreCustomizationReward_C.SetOwnedText
	// void SetOwnedText(FText& ownedText);                                                                                  // [0x61d2f50] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCustomizationReward.WBP_CoreCustomizationReward_C.SetSmallTemplate
	// void SetSmallTemplate(bool useSmallTemplate);                                                                         // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCustomizationReward.WBP_CoreCustomizationReward_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Rewards/WBP_CoreCustomizationReward.WBP_CoreCustomizationReward_C.ExecuteUbergraph_WBP_CoreCustomizationReward
	// void ExecuteUbergraph_WBP_CoreCustomizationReward(int32_t EntryPoint);                                                // [0x61d2f50] Final|HasDefaults    
};

/// Class /DBDUICore/Common/SearchBar/WBP_CoreSearchBarButton.WBP_CoreSearchBarButton_C
/// Size: 0x0020 (0x000388 - 0x0003A8)
class UWBP_CoreSearchBarButton_C : public UCoreSearchBarWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0388   (0x0008)  
	class UDBDImage*                                   ClearIcon;                                                  // 0x0390   (0x0008)  
	class USizeBox*                                    SizeBox;                                                    // 0x0398   (0x0008)  
	float                                              In_Max_Desired_Width;                                       // 0x03A0   (0x0004)  
	float                                              In_Min_Desired_Width;                                       // 0x03A4   (0x0004)  


	/// Functions
	// Function /DBDUICore/Common/SearchBar/WBP_CoreSearchBarButton.WBP_CoreSearchBarButton_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/SearchBar/WBP_CoreSearchBarButton.WBP_CoreSearchBarButton_C.ExecuteUbergraph_WBP_CoreSearchBarButton
	// void ExecuteUbergraph_WBP_CoreSearchBarButton(int32_t EntryPoint);                                                    // [0x61d2f50] Final                
};

/// Class /DBDUICore/Common/Rewards/WBP_CoreCustomizationRewardEmptySlot.WBP_CoreCustomizationRewardEmptySlot_C
/// Size: 0x0010 (0x000298 - 0x0002A8)
class UWBP_CoreCustomizationRewardEmptySlot_C : public UUserWidget
{ 
public:
	class UDBDImage*                                   BackgroundImage;                                            // 0x0298   (0x0008)  
	class UDBDImage*                                   Shadow;                                                     // 0x02A0   (0x0008)  
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
	// void Set Background Image(TWeakObjectPtr<UTexture2D*> Texture);                                                       // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerRankWrapper.WBP_CorePlayerRankWrapper_C.SetData
	// void SetData(FRankViewData& Data);                                                                                    // [0x61d2f50] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerRankWrapper.WBP_CorePlayerRankWrapper_C.Construct
	// void Construct();                                                                                                     // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerRankWrapper.WBP_CorePlayerRankWrapper_C.ExecuteUbergraph_WBP_CorePlayerRankWrapper
	// void ExecuteUbergraph_WBP_CorePlayerRankWrapper(int32_t EntryPoint);                                                  // [0x61d2f50] Final|HasDefaults    
};

/// Class /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevel.WBP_CorePlayerLevel_C
/// Size: 0x0020 (0x000420 - 0x000440)
class UWBP_CorePlayerLevel_C : public UCorePlayerLevelWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0420   (0x0008)  
	class UDBDImage*                                   LevelBG;                                                    // 0x0428   (0x0008)  
	class UDBDTextBlock*                               LevelTB;                                                    // 0x0430   (0x0008)  
	class UDBDTextBlock*                               PrestigeTB;                                                 // 0x0438   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevel.WBP_CorePlayerLevel_C.SetViewData
	// void SetViewData(FPlayerLevelViewData& PlayerLevelViewData);                                                          // [0x61d2f50] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevel.WBP_CorePlayerLevel_C.SetDataFromViewData
	// void SetDataFromViewData(int32_t value, int32_t Value2);                                                              // [0x61d2f50] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevel.WBP_CorePlayerLevel_C.SetData
	// void SetData(FPlayerLevelViewData& ViewData);                                                                         // [0x61d2f50] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevel.WBP_CorePlayerLevel_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevel.WBP_CorePlayerLevel_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevel.WBP_CorePlayerLevel_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevel.WBP_CorePlayerLevel_C.Destruct
	// void Destruct();                                                                                                      // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevel.WBP_CorePlayerLevel_C.AnimateLevelUp
	// void AnimateLevelUp();                                                                                                // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/PlayerProfile/WBP_CorePlayerLevel.WBP_CorePlayerLevel_C.ExecuteUbergraph_WBP_CorePlayerLevel
	// void ExecuteUbergraph_WBP_CorePlayerLevel(int32_t EntryPoint);                                                        // [0x61d2f50] Final|HasDefaults    
};

/// Class /DBDUICore/Common/Inputs/Buttons/WBP_CoreIconButton.WBP_CoreIconButton_C
/// Size: 0x0090 (0x000420 - 0x0004B0)
class UWBP_CoreIconButton_C : public UCoreButtonWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0420   (0x0008)  
	class UDBDImage*                                   ButtonBG;                                                   // 0x0428   (0x0008)  
	class UImage*                                      IconIMG;                                                    // 0x0430   (0x0008)  
	FLinearColor                                       DefaultColor;                                               // 0x0438   (0x0010)  
	FLinearColor                                       PressedColor;                                               // 0x0448   (0x0010)  
	FLinearColor                                       HoveredColor;                                               // 0x0458   (0x0010)  
	FLinearColor                                       DisabledColor;                                              // 0x0468   (0x0010)  
	SDK_UNDEFINED(48,3550) /* TWeakObjectPtr<UTexture2D*> */ __um(iconTexture);                                    // 0x0478   (0x0030)  
	class UMaterialInstanceDynamic*                    BackgroundIMGDynamicMaterial;                               // 0x04A8   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreIconButton.WBP_CoreIconButton_C.HoverVisuals
	// void HoverVisuals(bool IsHovered);                                                                                    // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreIconButton.WBP_CoreIconButton_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreIconButton.WBP_CoreIconButton_C.OnPressed
	// void OnPressed();                                                                                                     // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreIconButton.WBP_CoreIconButton_C.OnReleased
	// void OnReleased();                                                                                                    // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreIconButton.WBP_CoreIconButton_C.Construct
	// void Construct();                                                                                                     // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreIconButton.WBP_CoreIconButton_C.OnEnabledChanged
	// void OnEnabledChanged(bool IsEnabled);                                                                                // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreIconButton.WBP_CoreIconButton_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreIconButton.WBP_CoreIconButton_C.OnClicked
	// void OnClicked();                                                                                                     // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreIconButton.WBP_CoreIconButton_C.Event Update Icon Texture
	// void Event Update Icon Texture(TWeakObjectPtr<UTexture2D*> New Texture);                                              // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreIconButton.WBP_CoreIconButton_C.ExecuteUbergraph_WBP_CoreIconButton
	// void ExecuteUbergraph_WBP_CoreIconButton(int32_t EntryPoint);                                                         // [0x61d2f50] Final|HasDefaults    
};

/// Class /DBDUICore/Common/ScalableIconsDecorator.ScalableIconsDecorator_C
/// Size: 0x0000 (0x000068 - 0x000068)
class UScalableIconsDecorator_C : public URichTextBlockScalableImageDecorator
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

/// Class /DBDUICore/Common/Inputs/Buttons/WBP_CoreBackButton.WBP_CoreBackButton_C
/// Size: 0x006C (0x000458 - 0x0004C4)
class UWBP_CoreBackButton_C : public UCoreKeyListenerButtonWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0458   (0x0008)  
	class UWidgetAnimation*                            Disable;                                                    // 0x0460   (0x0008)  
	class UWidgetAnimation*                            Pressed;                                                    // 0x0468   (0x0008)  
	class UWidgetAnimation*                            Hover;                                                      // 0x0470   (0x0008)  
	class UWidgetAnimation*                            Default;                                                    // 0x0478   (0x0008)  
	class UDBDImage*                                   Arrow;                                                      // 0x0480   (0x0008)  
	class USizeBox*                                    BackgroundContainer;                                        // 0x0488   (0x0008)  
	class UDBDImage*                                   BG;                                                         // 0x0490   (0x0008)  
	class UOverlay*                                    Overlay;                                                    // 0x0498   (0x0008)  
	class UDBDImage*                                   SmokeBG;                                                    // 0x04A0   (0x0008)  
	class UGridPanel*                                  TextContainer;                                              // 0x04A8   (0x0008)  
	SDK_UNDEFINED(16,3551) /* FString */               __um(ActionMapping);                                        // 0x04B0   (0x0010)  
	float                                              PaddingText;                                                // 0x04C0   (0x0004)  


	/// Functions
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreBackButton.WBP_CoreBackButton_C.Construct
	// void Construct();                                                                                                     // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreBackButton.WBP_CoreBackButton_C.OnAlignmentChanged
	// void OnAlignmentChanged(TEnumAsByte<ETextJustify> newAlignment);                                                      // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreBackButton.WBP_CoreBackButton_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreBackButton.WBP_CoreBackButton_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreBackButton.WBP_CoreBackButton_C.OnPressed
	// void OnPressed();                                                                                                     // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreBackButton.WBP_CoreBackButton_C.ExecuteUbergraph_WBP_CoreBackButton
	// void ExecuteUbergraph_WBP_CoreBackButton(int32_t EntryPoint);                                                         // [0x61d2f50] Final                
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
	// void Construct();                                                                                                     // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/WBP_LoadingSmall.WBP_LoadingSmall_C.ExecuteUbergraph_WBP_LoadingSmall
	// void ExecuteUbergraph_WBP_LoadingSmall(int32_t EntryPoint);                                                           // [0x61d2f50] Final                
};

/// Class /DBDUICore/Common/ItemsDisplay/WBP_ImagePreviewArea.WBP_ImagePreviewArea_C
/// Size: 0x0054 (0x000338 - 0x00038C)
class UWBP_ImagePreviewArea_C : public UCoreImagePreviewAreaWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0338   (0x0008)  
	class UOverlay*                                    BottomItemsContainer;                                       // 0x0340   (0x0008)  
	class UScaleBox*                                   PreviewContainer;                                           // 0x0348   (0x0008)  
	class URetainerBox*                                PreviewRetainerBox;                                         // 0x0350   (0x0008)  
	float                                              ItemPreviewContainerPositionX;                              // 0x0358   (0x0004)  
	float                                              ItemPreviewContainerPositionY;                              // 0x035C   (0x0004)  
	float                                              ItemPreviewContainerScale;                                  // 0x0360   (0x0004)  
	float                                              BannerPreviewContainerPositionX;                            // 0x0364   (0x0004)  
	float                                              BannerPreviewContainerPositionY;                            // 0x0368   (0x0004)  
	float                                              BannerBgPositionX;                                          // 0x036C   (0x0004)  
	float                                              BannerBgPositionY;                                          // 0x0370   (0x0004)  
	float                                              BannerPreviewContainerScale;                                // 0x0374   (0x0004)  
	float                                              BottomItemsPositionY;                                       // 0x0378   (0x0004)  
	float                                              BannerAspectRatio;                                          // 0x037C   (0x0004)  
	FVector2D                                          ContainerSize;                                              // 0x0380   (0x0008)  
	float                                              BottomItemsPositionX;                                       // 0x0388   (0x0004)  


	/// Functions
	// Function /DBDUICore/Common/ItemsDisplay/WBP_ImagePreviewArea.WBP_ImagePreviewArea_C.SetItemPreviewContainer
	// void SetItemPreviewContainer();                                                                                       // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/ItemsDisplay/WBP_ImagePreviewArea.WBP_ImagePreviewArea_C.SetBannerPreviewContainer
	// void SetBannerPreviewContainer();                                                                                     // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/ItemsDisplay/WBP_ImagePreviewArea.WBP_ImagePreviewArea_C.Construct
	// void Construct();                                                                                                     // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/ItemsDisplay/WBP_ImagePreviewArea.WBP_ImagePreviewArea_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/ItemsDisplay/WBP_ImagePreviewArea.WBP_ImagePreviewArea_C.ShowBGImage
	// void ShowBGImage();                                                                                                   // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/ItemsDisplay/WBP_ImagePreviewArea.WBP_ImagePreviewArea_C.SetPreviewContainerVisual
	// void SetPreviewContainerVisual(ECustomizationCategory CustomizationCategory);                                         // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/ItemsDisplay/WBP_ImagePreviewArea.WBP_ImagePreviewArea_C.SetAnimatedPreviewData
	// void SetAnimatedPreviewData(class UStoreCustomizationItemViewData* previewItemData);                                  // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/ItemsDisplay/WBP_ImagePreviewArea.WBP_ImagePreviewArea_C.ExecuteUbergraph_WBP_ImagePreviewArea
	// void ExecuteUbergraph_WBP_ImagePreviewArea(int32_t EntryPoint);                                                       // [0x61d2f50] Final                
};

/// Class /DBDUICore/Common/ItemsDisplay/WBP_CustomizationItemGridContainer.WBP_CustomizationItemGridContainer_C
/// Size: 0x005C (0x000388 - 0x0003E4)
class UWBP_CustomizationItemGridContainer_C : public UCustomizationItemGridContainer
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0388   (0x0008)  
	SDK_UNDEFINED(1,3552) /* TEnumAsByte<EHorizontalAlignment> */ __um(GridItemAlignment);                         // 0x0390   (0x0001)  
	bool                                               bShowScrollBarForDebug;                                     // 0x0391   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0392   (0x0006)  MISSED
	FSlateColor                                        ScrollBarColor;                                             // 0x0398   (0x0028)  
	SDK_UNDEFINED(1,3553) /* TEnumAsByte<EHorizontalAlignment> */ __um(ScrollbarAlignment);                        // 0x03C0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x03C1   (0x0003)  MISSED
	int32_t                                            NumberTile;                                                 // 0x03C4   (0x0004)  
	int32_t                                            NumberColumn;                                               // 0x03C8   (0x0004)  
	ERewardType                                        RewardType;                                                 // 0x03CC   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x03CD   (0x0003)  MISSED
	int32_t                                            NumberEmptyTiles;                                           // 0x03D0   (0x0004)  
	FMargin                                            SlotPading;                                                 // 0x03D4   (0x0010)  


	/// Functions
	// Function /DBDUICore/Common/ItemsDisplay/WBP_CustomizationItemGridContainer.WBP_CustomizationItemGridContainer_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/ItemsDisplay/WBP_CustomizationItemGridContainer.WBP_CustomizationItemGridContainer_C.Construct
	// void Construct();                                                                                                     // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/ItemsDisplay/WBP_CustomizationItemGridContainer.WBP_CustomizationItemGridContainer_C.HandleAnalogInputEvent
	// void HandleAnalogInputEvent(FAnalogInputEvent& InAnalogInputEvent);                                                   // [0x61d2f50] Event|Public|HasOutParms|BlueprintEvent 
	// Function /DBDUICore/Common/ItemsDisplay/WBP_CustomizationItemGridContainer.WBP_CustomizationItemGridContainer_C.OnControlModeChangedBP
	// void OnControlModeChangedBP(EControlMode controlMode);                                                                // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/ItemsDisplay/WBP_CustomizationItemGridContainer.WBP_CustomizationItemGridContainer_C.Destruct
	// void Destruct();                                                                                                      // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/ItemsDisplay/WBP_CustomizationItemGridContainer.WBP_CustomizationItemGridContainer_C.ExecuteUbergraph_WBP_CustomizationItemGridContainer
	// void ExecuteUbergraph_WBP_CustomizationItemGridContainer(int32_t EntryPoint);                                         // [0x61d2f50] Final|HasDefaults    
};

/// Class /DBDUICore/Common/Inputs/Buttons/WBP_CoreFooterButton.WBP_CoreFooterButton_C
/// Size: 0x00F8 (0x0004C8 - 0x0005C0)
class UWBP_CoreFooterButton_C : public UCoreFooterButtonWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04C8   (0x0008)  
	class UOverlay*                                    BetaFeatureOverlay;                                         // 0x04D0   (0x0008)  
	class UDBDTextBlock*                               BetaFeatureTB;                                              // 0x04D8   (0x0008)  
	class UDBDImage*                                   HighlightIMG;                                               // 0x04E0   (0x0008)  
	class UWBP_LoadingSmall_C*                         LoadingWheel;                                               // 0x04E8   (0x0008)  
	class USizeBox*                                    LoadingWheelSizeBox;                                        // 0x04F0   (0x0008)  
	class UDBDImage*                                   lockedIcon;                                                 // 0x04F8   (0x0008)  
	class UOverlay*                                    SubPanel;                                                   // 0x0500   (0x0008)  
	class UDBDImage*                                   SubPanelBG;                                                 // 0x0508   (0x0008)  
	class UDBDTextBlock*                               SubPanelDescriptionTB;                                      // 0x0510   (0x0008)  
	class UDBDTextBlock*                               SubPanelTitleTB;                                            // 0x0518   (0x0008)  
	SDK_UNDEFINED(48,3554) /* TWeakObjectPtr<UTexture2D*> */ __um(iconTexture);                                    // 0x0520   (0x0030)  
	FLinearColor                                       IconHoverColor;                                             // 0x0550   (0x0010)  
	FLinearColor                                       IconUnhoverColor;                                           // 0x0560   (0x0010)  
	FLinearColor                                       BackgroundHoverColor;                                       // 0x0570   (0x0010)  
	FLinearColor                                       BackgroundUnhoverColor;                                     // 0x0580   (0x0010)  
	FLinearColor                                       IconLoadingOrLockedColor;                                   // 0x0590   (0x0010)  
	FLinearColor                                       BackgroundLoadingOrLockedUnhoverColor;                      // 0x05A0   (0x0010)  
	FLinearColor                                       IconPressedColor;                                           // 0x05B0   (0x0010)  


	/// Functions
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreFooterButton.WBP_CoreFooterButton_C.ShowSubPanel
	// void ShowSubPanel(bool IsHovered);                                                                                    // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreFooterButton.WBP_CoreFooterButton_C.UpdateInteractability
	// void UpdateInteractability();                                                                                         // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreFooterButton.WBP_CoreFooterButton_C.UpdateDisableVisuals
	// void UpdateDisableVisuals();                                                                                          // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreFooterButton.WBP_CoreFooterButton_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreFooterButton.WBP_CoreFooterButton_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreFooterButton.WBP_CoreFooterButton_C.Construct
	// void Construct();                                                                                                     // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreFooterButton.WBP_CoreFooterButton_C.SetHoveredColor
	// void SetHoveredColor();                                                                                               // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreFooterButton.WBP_CoreFooterButton_C.SetUnhoveredColor
	// void SetUnhoveredColor();                                                                                             // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreFooterButton.WBP_CoreFooterButton_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreFooterButton.WBP_CoreFooterButton_C.SetBetaFeatureOverlayVisible
	// void SetBetaFeatureOverlayVisible(bool IsVisible);                                                                    // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreFooterButton.WBP_CoreFooterButton_C.SetButtonDisableState
	// void SetButtonDisableState(EButtonDisableState buttonDisableState);                                                   // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreFooterButton.WBP_CoreFooterButton_C.OnPressed
	// void OnPressed();                                                                                                     // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreFooterButton.WBP_CoreFooterButton_C.OnReleased
	// void OnReleased();                                                                                                    // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreFooterButton.WBP_CoreFooterButton_C.SetSubPanelText
	// void SetSubPanelText(FText& Title, FText& Description);                                                               // [0x61d2f50] Event|Public|HasOutParms|BlueprintEvent 
	// Function /DBDUICore/Common/Inputs/Buttons/WBP_CoreFooterButton.WBP_CoreFooterButton_C.ExecuteUbergraph_WBP_CoreFooterButton
	// void ExecuteUbergraph_WBP_CoreFooterButton(int32_t EntryPoint);                                                       // [0x61d2f50] Final|HasDefaults    
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

/// Class /DBDUICore/Common/WBP_CoreTimerFlag.WBP_CoreTimerFlag_C
/// Size: 0x0108 (0x000330 - 0x000438)
class UWBP_CoreTimerFlag_C : public UCoreTimerFlagWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0330   (0x0008)  
	class UDBDImage*                                   FlagBG;                                                     // 0x0338   (0x0008)  
	class UDBDImage*                                   TimerIMG;                                                   // 0x0340   (0x0008)  
	FSlateColor                                        LimitedTextColor;                                           // 0x0348   (0x0028)  
	FSlateColor                                        LimitedColor;                                               // 0x0370   (0x0028)  
	FSlateColor                                        SaleColor;                                                  // 0x0398   (0x0028)  
	FSlateColor                                        SaleTextColor;                                              // 0x03C0   (0x0028)  
	FSlateColor                                        RiftColor;                                                  // 0x03E8   (0x0028)  
	FSlateColor                                        RiftTextColor;                                              // 0x0410   (0x0028)  


	/// Functions
	// Function /DBDUICore/Common/WBP_CoreTimerFlag.WBP_CoreTimerFlag_C.SetData
	// void SetData(FTimerFlagViewData& Data);                                                                               // [0x61d2f50] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/WBP_CoreTimerFlag.WBP_CoreTimerFlag_C.ExecuteUbergraph_WBP_CoreTimerFlag
	// void ExecuteUbergraph_WBP_CoreTimerFlag(int32_t EntryPoint);                                                          // [0x61d2f50] Final|HasDefaults    
};

/// Class /DBDUICore/Common/Sort/WBP_CoreSortButtonWidget.WBP_CoreSortButtonWidget_C
/// Size: 0x0010 (0x000340 - 0x000350)
class UWBP_CoreSortButtonWidget_C : public UCoreSortButtonWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0340   (0x0008)  
	class USpacer*                                     Spacer_between_buttons;                                     // 0x0348   (0x0008)  


	/// Functions
	// Function /DBDUICore/Common/Sort/WBP_CoreSortButtonWidget.WBP_CoreSortButtonWidget_C.SetSortingOrderButtonVisibility
	// void SetSortingOrderButtonVisibility(bool showSortingOrderButton);                                                    // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Common/Sort/WBP_CoreSortButtonWidget.WBP_CoreSortButtonWidget_C.OnSortingOrderClick
	// void OnSortingOrderClick(class UCoreButtonWidget* buttonTarget);                                                      // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Common/Sort/WBP_CoreSortButtonWidget.WBP_CoreSortButtonWidget_C.ExecuteUbergraph_WBP_CoreSortButtonWidget
	// void ExecuteUbergraph_WBP_CoreSortButtonWidget(int32_t EntryPoint);                                                   // [0x61d2f50] Final|HasDefaults    
};

