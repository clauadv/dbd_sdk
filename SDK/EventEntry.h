
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DBDSharedTypes
/// dependency: DBDUIViewInterfaces
/// dependency: DBDUIViewsCore
/// dependency: Engine
/// dependency: SlateCore
/// dependency: UMG

/// Class /DBDUICore/EventEntry/WBP_EventEntryStoreTabWidget.WBP_EventEntryStoreTabWidget_C
/// Size: 0x0228 (0x000580 - 0x0007A8)
class UWBP_EventEntryStoreTabWidget_C : public UEventEntryStoreTabWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0580   (0x0008)  
	FEventEntryPopupSkinUIData                         RowSkinData;                                                // 0x0588   (0x0220)  


	/// Functions
	// Function /DBDUICore/EventEntry/WBP_EventEntryStoreTabWidget.WBP_EventEntryStoreTabWidget_C.DisableInputs
	// void DisableInputs();                                                                                                 // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_EventEntryStoreTabWidget.WBP_EventEntryStoreTabWidget_C.SetTabVisuals
	// void SetTabVisuals(FEventEntryPopupSkinUIData& skinData);                                                             // [0x61c32d0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_EventEntryStoreTabWidget.WBP_EventEntryStoreTabWidget_C.Init
	// void Init(FEventEntryPopupSkinUIData& skinData);                                                                      // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_EventEntryStoreTabWidget.WBP_EventEntryStoreTabWidget_C.ExecuteUbergraph_WBP_EventEntryStoreTabWidget
	// void ExecuteUbergraph_WBP_EventEntryStoreTabWidget(int32_t EntryPoint);                                               // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/EventEntry/DetailsTab/WBP_DetailsTabSingleColumnLayout.WBP_DetailsTabSingleColumnLayout_C
/// Size: 0x0018 (0x000310 - 0x000328)
class UWBP_DetailsTabSingleColumnLayout_C : public UEventEntryDetailsTabLayoutWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0310   (0x0008)  
	class UWBP_EventEntryDetailsTabContent_C*          ContentWidget;                                              // 0x0318   (0x0008)  
	class UDBDImage*                                   SingleColumnImage;                                          // 0x0320   (0x0008)  


	/// Functions
	// Function /DBDUICore/EventEntry/DetailsTab/WBP_DetailsTabSingleColumnLayout.WBP_DetailsTabSingleColumnLayout_C.Set Scroll Prompt
	// void Set Scroll Prompt(class UCoreKeyListenerInputPromptWidget* Display Prompt);                                      // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/DetailsTab/WBP_DetailsTabSingleColumnLayout.WBP_DetailsTabSingleColumnLayout_C.SetData
	// void SetData(FEventEntryPopupSkinUIData& skinData, TArray<FSpecialEventDetailsTabContentData>& ContentData, TWeakObjectPtr<UTexture2D*>& ImageTexture); // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/DetailsTab/WBP_DetailsTabSingleColumnLayout.WBP_DetailsTabSingleColumnLayout_C.ExecuteUbergraph_WBP_DetailsTabSingleColumnLayout
	// void ExecuteUbergraph_WBP_DetailsTabSingleColumnLayout(int32_t EntryPoint);                                           // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/EventEntry/EventEntryScalableImageDecorator.EventEntryScalableImageDecorator_C
/// Size: 0x0000 (0x000068 - 0x000068)
class UEventEntryScalableImageDecorator_C : public URichTextBlockScalableImageDecorator
{ 
public:
};

/// Class /DBDUICore/EventEntry/WBP_EventEntryRewardsDisplayWidget.WBP_EventEntryRewardsDisplayWidget_C
/// Size: 0x0038 (0x000330 - 0x000368)
class UWBP_EventEntryRewardsDisplayWidget_C : public UEventEntryRewardsDisplayWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0330   (0x0008)  
	class UDBDImage*                                   SmokyPreviewBackground;                                     // 0x0338   (0x0008)  
	FSlateColor                                        TintColor;                                                  // 0x0340   (0x0028)  


	/// Functions
	// Function /DBDUICore/EventEntry/WBP_EventEntryRewardsDisplayWidget.WBP_EventEntryRewardsDisplayWidget_C.SetVisuals
	// void SetVisuals(FEventEntryPopupSkinUIData skinUIData);                                                               // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_EventEntryRewardsDisplayWidget.WBP_EventEntryRewardsDisplayWidget_C.ExecuteUbergraph_WBP_EventEntryRewardsDisplayWidget
	// void ExecuteUbergraph_WBP_EventEntryRewardsDisplayWidget(int32_t EntryPoint);                                         // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/EventEntry/WBP_MilestoneTrackerTierItem.WBP_MilestoneTrackerTierItem_C
/// Size: 0x0021 (0x000330 - 0x000351)
class UWBP_MilestoneTrackerTierItem_C : public UMilestoneTrackerTierItem
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0330   (0x0008)  
	class UWidgetAnimation*                            UnlockAnim;                                                 // 0x0338   (0x0008)  
	class UDBDImage*                                   CustomizationAnimationBackground;                           // 0x0340   (0x0008)  
	class UMaterialInstanceDynamic*                    backgroundMaterial;                                         // 0x0348   (0x0008)  
	bool                                               wasInProgress;                                              // 0x0350   (0x0001)  


	/// Functions
	// Function /DBDUICore/EventEntry/WBP_MilestoneTrackerTierItem.WBP_MilestoneTrackerTierItem_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_MilestoneTrackerTierItem.WBP_MilestoneTrackerTierItem_C.SetVisualState
	// void SetVisualState(EMilestoneTrackerItemState State);                                                                // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_MilestoneTrackerTierItem.WBP_MilestoneTrackerTierItem_C.ExecuteUbergraph_WBP_MilestoneTrackerTierItem
	// void ExecuteUbergraph_WBP_MilestoneTrackerTierItem(int32_t EntryPoint);                                               // [0x61c32d0] Final                
};

/// Class /DBDUICore/EventEntry/WBP_MilestoneTrackerWidget.WBP_MilestoneTrackerWidget_C
/// Size: 0x0008 (0x000368 - 0x000370)
class UWBP_MilestoneTrackerWidget_C : public UMilestoneTrackerWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0368   (0x0008)  


	/// Functions
	// Function /DBDUICore/EventEntry/WBP_MilestoneTrackerWidget.WBP_MilestoneTrackerWidget_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_MilestoneTrackerWidget.WBP_MilestoneTrackerWidget_C.ExecuteUbergraph_WBP_MilestoneTrackerWidget
	// void ExecuteUbergraph_WBP_MilestoneTrackerWidget(int32_t EntryPoint);                                                 // [0x61c32d0] Final                
};

/// Class /DBDUICore/EventEntry/WBP_EventEntryEventTabWidget.WBP_EventEntryEventTabWidget_C
/// Size: 0x023C (0x0005B8 - 0x0007F4)
class UWBP_EventEntryEventTabWidget_C : public UEventEntryEventTabWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x05B8   (0x0008)  
	class UWidgetAnimation*                            AnimationTest;                                              // 0x05C0   (0x0008)  
	FEventEntryPopupSkinUIData                         RowSkinData;                                                // 0x05C8   (0x0220)  
	FName                                              RowName;                                                    // 0x07E8   (0x000C)  


	/// Functions
	// Function /DBDUICore/EventEntry/WBP_EventEntryEventTabWidget.WBP_EventEntryEventTabWidget_C.SetScrollPrompt
	// void SetScrollPrompt(class UCoreKeyListenerInputPromptWidget* DisplayPrompt);                                         // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_EventEntryEventTabWidget.WBP_EventEntryEventTabWidget_C.SetAlternativeButtonVisual
	// void SetAlternativeButtonVisual();                                                                                    // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_EventEntryEventTabWidget.WBP_EventEntryEventTabWidget_C.StopAlternativeButtonAnimation
	// void StopAlternativeButtonAnimation();                                                                                // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_EventEntryEventTabWidget.WBP_EventEntryEventTabWidget_C.PlayAlternativeButtonAnimation
	// void PlayAlternativeButtonAnimation();                                                                                // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_EventEntryEventTabWidget.WBP_EventEntryEventTabWidget_C.GetAnimationFromEventName
	// void GetAnimationFromEventName(FName EventName, class UWidgetAnimation*& Animation);                                  // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_EventEntryEventTabWidget.WBP_EventEntryEventTabWidget_C.SetTabVisuals
	// void SetTabVisuals();                                                                                                 // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_EventEntryEventTabWidget.WBP_EventEntryEventTabWidget_C.HandleAnalogInputEvent
	// void HandleAnalogInputEvent(FAnalogInputEvent& InAnalogInputEvent);                                                   // [0x61c32d0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_EventEntryEventTabWidget.WBP_EventEntryEventTabWidget_C.OnControlModeChangedBP
	// void OnControlModeChangedBP(EControlMode controlMode);                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_EventEntryEventTabWidget.WBP_EventEntryEventTabWidget_C.Destruct
	// void Destruct();                                                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_EventEntryEventTabWidget.WBP_EventEntryEventTabWidget_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_EventEntryEventTabWidget.WBP_EventEntryEventTabWidget_C.DisableInputs
	// void DisableInputs();                                                                                                 // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_EventEntryEventTabWidget.WBP_EventEntryEventTabWidget_C.EnableInputs
	// void EnableInputs();                                                                                                  // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_EventEntryEventTabWidget.WBP_EventEntryEventTabWidget_C.Init
	// void Init(class UEventTabViewData* ViewData, FEventEntryPopupSkinUIData& skinData);                                   // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_EventEntryEventTabWidget.WBP_EventEntryEventTabWidget_C.ExecuteUbergraph_WBP_EventEntryEventTabWidget
	// void ExecuteUbergraph_WBP_EventEntryEventTabWidget(int32_t EntryPoint);                                               // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/EventEntry/WBP_EventEntryCollectionTabWidget.WBP_EventEntryCollectionTabWidget_C
/// Size: 0x0228 (0x000580 - 0x0007A8)
class UWBP_EventEntryCollectionTabWidget_C : public UEventEntryCollectionTabWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0580   (0x0008)  
	FEventEntryPopupSkinUIData                         RowSkinData;                                                // 0x0588   (0x0220)  


	/// Functions
	// Function /DBDUICore/EventEntry/WBP_EventEntryCollectionTabWidget.WBP_EventEntryCollectionTabWidget_C.DisableInputs
	// void DisableInputs();                                                                                                 // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_EventEntryCollectionTabWidget.WBP_EventEntryCollectionTabWidget_C.SetTabVisuals
	// void SetTabVisuals(FEventEntryPopupSkinUIData& skinData);                                                             // [0x61c32d0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_EventEntryCollectionTabWidget.WBP_EventEntryCollectionTabWidget_C.Init
	// void Init(FEventEntryPopupSkinUIData& skinData);                                                                      // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_EventEntryCollectionTabWidget.WBP_EventEntryCollectionTabWidget_C.ExecuteUbergraph_WBP_EventEntryCollectionTabWidget
	// void ExecuteUbergraph_WBP_EventEntryCollectionTabWidget(int32_t EntryPoint);                                          // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/EventEntry/DetailsTab/WBP_EventEntryDetailsTabWidget.WBP_EventEntryDetailsTabWidget_C
/// Size: 0x0258 (0x0005A8 - 0x000800)
class UWBP_EventEntryDetailsTabWidget_C : public UEventEntryDetailsTabWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x05A8   (0x0008)  
	class UWBP_DetailsTabDoubleColumnLayout_C*         DoubleColumnWidget;                                         // 0x05B0   (0x0008)  
	class UWidgetSwitcher*                             LayoutSwitcher;                                             // 0x05B8   (0x0008)  
	class UWBP_DetailsTabSingleColumnLayout_C*         SingleColumnWidget;                                         // 0x05C0   (0x0008)  
	FEventEntryPopupSkinUIData                         Row_Skin_Data;                                              // 0x05C8   (0x0220)  
	FName                                              Row_Name;                                                   // 0x07E8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x07F4   (0x0004)  MISSED
	class UEventEntryDetailsTabLayoutWidget*           LayoutWidget;                                               // 0x07F8   (0x0008)  


	/// Functions
	// Function /DBDUICore/EventEntry/DetailsTab/WBP_EventEntryDetailsTabWidget.WBP_EventEntryDetailsTabWidget_C.Set Scroll Prompt
	// void Set Scroll Prompt(class UCoreKeyListenerInputPromptWidget* Display Prompt);                                      // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/DetailsTab/WBP_EventEntryDetailsTabWidget.WBP_EventEntryDetailsTabWidget_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/EventEntry/DetailsTab/WBP_EventEntryDetailsTabWidget.WBP_EventEntryDetailsTabWidget_C.Init
	// void Init(FDetailsTabViewData& ViewData, FEventEntryPopupSkinUIData& skinData);                                       // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/DetailsTab/WBP_EventEntryDetailsTabWidget.WBP_EventEntryDetailsTabWidget_C.ExecuteUbergraph_WBP_EventEntryDetailsTabWidget
	// void ExecuteUbergraph_WBP_EventEntryDetailsTabWidget(int32_t EntryPoint);                                             // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/EventEntry/DetailsTab/WBP_DetailsTabDoubleColumnLayout.WBP_DetailsTabDoubleColumnLayout_C
/// Size: 0x0020 (0x000310 - 0x000330)
class UWBP_DetailsTabDoubleColumnLayout_C : public UEventEntryDetailsTabLayoutWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0310   (0x0008)  
	class UWBP_EventEntryDetailsTabContent_C*          ContentWidget1;                                             // 0x0318   (0x0008)  
	class UWBP_EventEntryDetailsTabContent_C*          ContentWidget2;                                             // 0x0320   (0x0008)  
	class UDBDImage*                                   DoubleColumnImage;                                          // 0x0328   (0x0008)  


	/// Functions
	// Function /DBDUICore/EventEntry/DetailsTab/WBP_DetailsTabDoubleColumnLayout.WBP_DetailsTabDoubleColumnLayout_C.Set Scroll Prompt
	// void Set Scroll Prompt(class UCoreKeyListenerInputPromptWidget* Display Prompt);                                      // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/DetailsTab/WBP_DetailsTabDoubleColumnLayout.WBP_DetailsTabDoubleColumnLayout_C.SetData
	// void SetData(FEventEntryPopupSkinUIData& skinData, TArray<FSpecialEventDetailsTabContentData>& ContentData, TWeakObjectPtr<UTexture2D*>& ImageTexture); // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/DetailsTab/WBP_DetailsTabDoubleColumnLayout.WBP_DetailsTabDoubleColumnLayout_C.ExecuteUbergraph_WBP_DetailsTabDoubleColumnLayout
	// void ExecuteUbergraph_WBP_DetailsTabDoubleColumnLayout(int32_t EntryPoint);                                           // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/EventEntry/WBP_CoreEventPointsWidget.WBP_CoreEventPointsWidget_C
/// Size: 0x0018 (0x000298 - 0x0002B0)
class UWBP_CoreEventPointsWidget_C : public UEventPointsWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0298   (0x0008)  
	class UDBDImage*                                   AdditionalIconIMG;                                          // 0x02A0   (0x0008)  
	class UDBDRichTextBlock*                           EventPointsValue;                                           // 0x02A8   (0x0008)  


	/// Functions
	// Function /DBDUICore/EventEntry/WBP_CoreEventPointsWidget.WBP_CoreEventPointsWidget_C.Highlight
	// void Highlight(bool isHighlighted);                                                                                   // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_CoreEventPointsWidget.WBP_CoreEventPointsWidget_C.SetValue
	// void SetValue(int32_t NewValue);                                                                                      // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_CoreEventPointsWidget.WBP_CoreEventPointsWidget_C.ExecuteUbergraph_WBP_CoreEventPointsWidget
	// void ExecuteUbergraph_WBP_CoreEventPointsWidget(int32_t EntryPoint);                                                  // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/EventEntry/DetailsTab/WBP_EventEntryDetailsTabContent.WBP_EventEntryDetailsTabContent_C
/// Size: 0x04C1 (0x000338 - 0x0007F9)
class UWBP_EventEntryDetailsTabContent_C : public UEventEntryDetailsTabContentWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0338   (0x0008)  
	class UDBDImage*                                   Banner;                                                     // 0x0340   (0x0008)  
	class UGridPanel*                                  Header;                                                     // 0x0348   (0x0008)  
	class UDBDImage*                                   PrimaryIcon;                                                // 0x0350   (0x0008)  
	class UDBDScrollBox*                               ScrollBox;                                                  // 0x0358   (0x0008)  
	class UDBDImage*                                   SecondaryIcon;                                              // 0x0360   (0x0008)  
	int32_t                                            PatternIndex;                                               // 0x0368   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x036C   (0x0004)  MISSED
	FEventEntryPopupSkinUIData                         RowSkinData;                                                // 0x0370   (0x0220)  
	FName                                              RowName;                                                    // 0x0590   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x059C   (0x0004)  MISSED
	FSpecialEventDetailsTabContentData                 Content_Data;                                               // 0x05A0   (0x0038)  
	FEventEntryPopupSkinUIData                         skinData;                                                   // 0x05D8   (0x0220)  
	EPlayerTeam                                        DebugType;                                                  // 0x07F8   (0x0001)  


	/// Functions
	// Function /DBDUICore/EventEntry/DetailsTab/WBP_EventEntryDetailsTabContent.WBP_EventEntryDetailsTabContent_C.SetScrollPrompt
	// void SetScrollPrompt(class UCoreKeyListenerInputPromptWidget* DisplayPrompt);                                         // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/DetailsTab/WBP_EventEntryDetailsTabContent.WBP_EventEntryDetailsTabContent_C.Set Tab Visuals
	// void Set Tab Visuals(FEventEntryPopupSkinUIData& skinData);                                                           // [0x61c32d0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/DetailsTab/WBP_EventEntryDetailsTabContent.WBP_EventEntryDetailsTabContent_C.HandleAnalogInputEvent
	// void HandleAnalogInputEvent(FAnalogInputEvent& InAnalogInputEvent);                                                   // [0x61c32d0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /DBDUICore/EventEntry/DetailsTab/WBP_EventEntryDetailsTabContent.WBP_EventEntryDetailsTabContent_C.OnControlModeChangedBP
	// void OnControlModeChangedBP(EControlMode controlMode);                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/EventEntry/DetailsTab/WBP_EventEntryDetailsTabContent.WBP_EventEntryDetailsTabContent_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/EventEntry/DetailsTab/WBP_EventEntryDetailsTabContent.WBP_EventEntryDetailsTabContent_C.Destruct
	// void Destruct();                                                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/EventEntry/DetailsTab/WBP_EventEntryDetailsTabContent.WBP_EventEntryDetailsTabContent_C.SetData
	// void SetData(FSpecialEventDetailsTabContentData& ContentData, FEventEntryPopupSkinUIData& skinData);                  // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/DetailsTab/WBP_EventEntryDetailsTabContent.WBP_EventEntryDetailsTabContent_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/EventEntry/DetailsTab/WBP_EventEntryDetailsTabContent.WBP_EventEntryDetailsTabContent_C.ExecuteUbergraph_WBP_EventEntryDetailsTabContent
	// void ExecuteUbergraph_WBP_EventEntryDetailsTabContent(int32_t EntryPoint);                                            // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/EventEntry/WBP_CustomizationItemOriginWidget.WBP_CustomizationItemOriginWidget_C
/// Size: 0x0010 (0x000360 - 0x000370)
class UWBP_CustomizationItemOriginWidget_C : public UCustomizationItemOriginWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0360   (0x0008)  
	class UDBDImage*                                   Background;                                                 // 0x0368   (0x0008)  


	/// Functions
	// Function /DBDUICore/EventEntry/WBP_CustomizationItemOriginWidget.WBP_CustomizationItemOriginWidget_C.Set Default StateVisibilities
	// void Set Default StateVisibilities();                                                                                 // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_CustomizationItemOriginWidget.WBP_CustomizationItemOriginWidget_C.Set Milestone Points StateVisibilities
	// void Set Milestone Points StateVisibilities();                                                                        // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_CustomizationItemOriginWidget.WBP_CustomizationItemOriginWidget_C.Set Gameplay StateVisibilities
	// void Set Gameplay StateVisibilities();                                                                                // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_CustomizationItemOriginWidget.WBP_CustomizationItemOriginWidget_C.Set Archives StateVisibilities
	// void Set Archives StateVisibilities();                                                                                // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_CustomizationItemOriginWidget.WBP_CustomizationItemOriginWidget_C.Set Store StateVisibilities
	// void Set Store StateVisibilities();                                                                                   // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_CustomizationItemOriginWidget.WBP_CustomizationItemOriginWidget_C.Set Currency Purchase StateVisibilities
	// void Set Currency Purchase StateVisibilities();                                                                       // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_CustomizationItemOriginWidget.WBP_CustomizationItemOriginWidget_C.SetCurrencyPurchaseState
	// void SetCurrencyPurchaseState(FPriceTagViewData& CurrencyData);                                                       // [0x61c32d0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_CustomizationItemOriginWidget.WBP_CustomizationItemOriginWidget_C.SetStoreState
	// void SetStoreState();                                                                                                 // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_CustomizationItemOriginWidget.WBP_CustomizationItemOriginWidget_C.SetArchivesState
	// void SetArchivesState(TArray<FText>& Args);                                                                           // [0x61c32d0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_CustomizationItemOriginWidget.WBP_CustomizationItemOriginWidget_C.SetGameplayState
	// void SetGameplayState(TArray<FText>& Args);                                                                           // [0x61c32d0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_CustomizationItemOriginWidget.WBP_CustomizationItemOriginWidget_C.SetMilestonePointsState
	// void SetMilestonePointsState(TArray<FText>& Args);                                                                    // [0x61c32d0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_CustomizationItemOriginWidget.WBP_CustomizationItemOriginWidget_C.SetDefaultState
	// void SetDefaultState();                                                                                               // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_CustomizationItemOriginWidget.WBP_CustomizationItemOriginWidget_C.ExecuteUbergraph_WBP_CustomizationItemOriginWidget
	// void ExecuteUbergraph_WBP_CustomizationItemOriginWidget(int32_t EntryPoint);                                          // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/EventEntry/WBP_EventEntryOverlayWidget.WBP_EventEntryOverlayWidget_C
/// Size: 0x0320 (0x0005A8 - 0x0008C8)
class UWBP_EventEntryOverlayWidget_C : public UCoreEventEntryWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x05A8   (0x0008)  
	class UWidgetAnimation*                            ZzyltryzCollageAnim;                                        // 0x05B0   (0x0008)  
	class UWidgetAnimation*                            Anim_FadeIn;                                                // 0x05B8   (0x0008)  
	class UDBDImage*                                   BackgroundImage;                                            // 0x05C0   (0x0008)  
	class UDBDImage*                                   BaseBG;                                                     // 0x05C8   (0x0008)  
	class UDBDImage*                                   BlackBgEventDate;                                           // 0x05D0   (0x0008)  
	class UDBDImage*                                   BlackBgTitle;                                               // 0x05D8   (0x0008)  
	class UImage*                                      BlackOverlay;                                               // 0x05E0   (0x0008)  
	class UDBDImage*                                   CenterBackground;                                           // 0x05E8   (0x0008)  
	class UImage*                                      CollageBg;                                                  // 0x05F0   (0x0008)  
	class UImage*                                      CollageCage;                                                // 0x05F8   (0x0008)  
	class UImage*                                      CollageCageHandle;                                          // 0x0600   (0x0008)  
	class UImage*                                      CollageClaw;                                                // 0x0608   (0x0008)  
	class UImage*                                      CollageFish;                                                // 0x0610   (0x0008)  
	class UImage*                                      CollageMouth01;                                             // 0x0618   (0x0008)  
	class UImage*                                      CollageMouth02;                                             // 0x0620   (0x0008)  
	class UImage*                                      CollagePaper01;                                             // 0x0628   (0x0008)  
	class UImage*                                      CollagePaper02;                                             // 0x0630   (0x0008)  
	class UImage*                                      CollageScribble01;                                          // 0x0638   (0x0008)  
	class UImage*                                      CollageScribble010;                                         // 0x0640   (0x0008)  
	class UImage*                                      CollageScribble011;                                         // 0x0648   (0x0008)  
	class UImage*                                      CollageScribble03;                                          // 0x0650   (0x0008)  
	class UImage*                                      CollageScribble032;                                         // 0x0658   (0x0008)  
	class UImage*                                      CollageScribble033;                                         // 0x0660   (0x0008)  
	class UImage*                                      HeaderBG;                                                   // 0x0668   (0x0008)  
	class UWidgetSwitcher*                             TabContentSwitcher;                                         // 0x0670   (0x0008)  
	class UWBP_EventEntryCollectionTabWidget_C*        WBP_EventEntryCollectionTabWidget;                          // 0x0678   (0x0008)  
	class UWBP_EventEntryDetailsTabWidget_C*           WBP_EventEntryDetailsTabWidget;                             // 0x0680   (0x0008)  
	class UWBP_EventEntryEventTabWidget_C*             WBP_EventEntryEventTabWidget;                               // 0x0688   (0x0008)  
	class UWBP_EventEntryStoreTabWidget_C*             WBP_EventEntryStoreTabWidget;                               // 0x0690   (0x0008)  
	class UCanvasPanel*                                ZzyltryzCollage;                                            // 0x0698   (0x0008)  
	FEventEntryPopupSkinUIData                         RowSkinData;                                                // 0x06A0   (0x0220)  
	class UMaterialInstanceDynamic*                    HeaderBackgroundMaterial;                                   // 0x08C0   (0x0008)  


	/// Functions
	// Function /DBDUICore/EventEntry/WBP_EventEntryOverlayWidget.WBP_EventEntryOverlayWidget_C.GetDetailsSubPresenterInterface
	// TScriptInterface<Class> GetDetailsSubPresenterInterface();                                                            // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /DBDUICore/EventEntry/WBP_EventEntryOverlayWidget.WBP_EventEntryOverlayWidget_C.GetStoreSubPresenterInterface
	// TScriptInterface<Class> GetStoreSubPresenterInterface();                                                              // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /DBDUICore/EventEntry/WBP_EventEntryOverlayWidget.WBP_EventEntryOverlayWidget_C.GetEventSubPresenterInterface
	// TScriptInterface<Class> GetEventSubPresenterInterface();                                                              // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /DBDUICore/EventEntry/WBP_EventEntryOverlayWidget.WBP_EventEntryOverlayWidget_C.GetEventSkinDataTable
	// class UDataTable* GetEventSkinDataTable();                                                                            // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /DBDUICore/EventEntry/WBP_EventEntryOverlayWidget.WBP_EventEntryOverlayWidget_C.GetCollectionSubPresenterInterface
	// TScriptInterface<Class> GetCollectionSubPresenterInterface();                                                         // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /DBDUICore/EventEntry/WBP_EventEntryOverlayWidget.WBP_EventEntryOverlayWidget_C.SetScrollPrompts
	// void SetScrollPrompts();                                                                                              // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_EventEntryOverlayWidget.WBP_EventEntryOverlayWidget_C.UpdateTabsBackground
	// void UpdateTabsBackground(TWeakObjectPtr<UMaterialInterface*> SoftMaterial);                                          // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_EventEntryOverlayWidget.WBP_EventEntryOverlayWidget_C.SetPopupVisuals
	// void SetPopupVisuals();                                                                                               // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_EventEntryOverlayWidget.WBP_EventEntryOverlayWidget_C.SetUiTakeoverActive
	// void SetUiTakeoverActive(bool IsActive);                                                                              // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_EventEntryOverlayWidget.WBP_EventEntryOverlayWidget_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_EventEntryOverlayWidget.WBP_EventEntryOverlayWidget_C.OnEnter
	// void OnEnter();                                                                                                       // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_EventEntryOverlayWidget.WBP_EventEntryOverlayWidget_C.OnLeave
	// void OnLeave();                                                                                                       // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_EventEntryOverlayWidget.WBP_EventEntryOverlayWidget_C.OnShow
	// void OnShow();                                                                                                        // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_EventEntryOverlayWidget.WBP_EventEntryOverlayWidget_C.SetOverlayState
	// void SetOverlayState(EEventEntryTabState& tabState);                                                                  // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/EventEntry/WBP_EventEntryOverlayWidget.WBP_EventEntryOverlayWidget_C.ExecuteUbergraph_WBP_EventEntryOverlayWidget
	// void ExecuteUbergraph_WBP_EventEntryOverlayWidget(int32_t EntryPoint);                                                // [0x61c32d0] Final                
};

