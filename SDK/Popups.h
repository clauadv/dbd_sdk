
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: Common
/// dependency: CoreUObject
/// dependency: DBDSharedTypes
/// dependency: DBDUIViewsCore
/// dependency: Engine
/// dependency: UMG

/// Class /DBDUICore/Popups/BPFL_PopupHelper.BPFL_PopupHelper_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UBPFL_PopupHelper_C : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /DBDUICore/Popups/BPFL_PopupHelper.BPFL_PopupHelper_C.GetPopupHeader
	// void GetPopupHeader(EPopupPriority Priority, class UObject* __WorldContext, class UMaterialInstance*& MaterialInstance); // [0x61c32d0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /DBDUICore/Popups/WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C
/// Size: 0x0040 (0x0003D0 - 0x000410)
class UWBP_CoreGenericTextInputPopup_C : public UCoreGenericTextInputPopupWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03D0   (0x0008)  
	class UWidgetAnimation*                            Anim_FadeOut;                                               // 0x03D8   (0x0008)  
	class UWidgetAnimation*                            Anim_FadeIn;                                                // 0x03E0   (0x0008)  
	class UDBDImage*                                   BG;                                                         // 0x03E8   (0x0008)  
	class UImage*                                      BG_scratches_L;                                             // 0x03F0   (0x0008)  
	class UImage*                                      BG_scratches_R;                                             // 0x03F8   (0x0008)  
	class URetainerBox*                                Mask;                                                       // 0x0400   (0x0008)  
	class UDBDImage*                                   PriorityHeader;                                             // 0x0408   (0x0008)  


	/// Functions
	// Function /DBDUICore/Popups/WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C.Set Header Color
	// void Set Header Color(class UBasePopupViewData* Data);                                                                // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C.SetHeaderColor
	// void SetHeaderColor(class UBasePopupViewData* Data);                                                                  // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C.Show
	// void Show(class UBasePopupViewData* Data);                                                                            // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C.Hide
	// void Hide();                                                                                                          // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C.HandleAnalogInputEvent
	// void HandleAnalogInputEvent(FAnalogInputEvent& InAnalogInputEvent);                                                   // [0x61c32d0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C.ExecuteUbergraph_WBP_CoreGenericTextInputPopup
	// void ExecuteUbergraph_WBP_CoreGenericTextInputPopup(int32_t EntryPoint);                                              // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Popups/WBP_CoreGenericRefreshingPopupWidget.WBP_CoreGenericRefreshingPopupWidget_C
/// Size: 0x0020 (0x000378 - 0x000398)
class UWBP_CoreGenericRefreshingPopupWidget_C : public UCoreGenericRefreshingPopupWidget
{ 
public:
	class UDBDImage*                                   BG;                                                         // 0x0378   (0x0008)  
	class URetainerBox*                                Mask;                                                       // 0x0380   (0x0008)  
	class UDBDScrollBox*                               MessageScrollBox;                                           // 0x0388   (0x0008)  
	class UDBDImage*                                   PriorityHeader;                                             // 0x0390   (0x0008)  
};

/// Class /DBDUICore/Popups/WBP_CoreGenericPopup.WBP_CoreGenericPopup_C
/// Size: 0x0038 (0x000368 - 0x0003A0)
class UWBP_CoreGenericPopup_C : public UCoreGenericPopupWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0368   (0x0008)  
	class UWidgetAnimation*                            Anim_FadeOut;                                               // 0x0370   (0x0008)  
	class UWidgetAnimation*                            Anim_FadeIn;                                                // 0x0378   (0x0008)  
	class UDBDImage*                                   BG;                                                         // 0x0380   (0x0008)  
	class URetainerBox*                                Mask;                                                       // 0x0388   (0x0008)  
	class UDBDScrollBox*                               MessageScrollBox;                                           // 0x0390   (0x0008)  
	class UDBDImage*                                   PriorityHeader;                                             // 0x0398   (0x0008)  


	/// Functions
	// Function /DBDUICore/Popups/WBP_CoreGenericPopup.WBP_CoreGenericPopup_C.SetHeaderColor
	// void SetHeaderColor(class UBasePopupViewData* Data);                                                                  // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreGenericPopup.WBP_CoreGenericPopup_C.Show
	// void Show(class UBasePopupViewData* Data);                                                                            // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreGenericPopup.WBP_CoreGenericPopup_C.Hide
	// void Hide();                                                                                                          // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreGenericPopup.WBP_CoreGenericPopup_C.HandleAnalogInputEvent
	// void HandleAnalogInputEvent(FAnalogInputEvent& InAnalogInputEvent);                                                   // [0x61c32d0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreGenericPopup.WBP_CoreGenericPopup_C.ExecuteUbergraph_WBP_CoreGenericPopup
	// void ExecuteUbergraph_WBP_CoreGenericPopup(int32_t EntryPoint);                                                       // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Popups/WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C
/// Size: 0x0018 (0x0003D8 - 0x0003F0)
class UWBP_CoreDailyRitualsPopupWidget_C : public UDailyRitualsPopupWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03D8   (0x0008)  
	class UImage*                                      BackgroundDetails;                                          // 0x03E0   (0x0008)  
	class UDBDImage*                                   Smoke;                                                      // 0x03E8   (0x0008)  


	/// Functions
	// Function /DBDUICore/Popups/WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C.SetProgressionButtonAlignmentAndPadding
	// void SetProgressionButtonAlignmentAndPadding(bool isAfterTrial);                                                      // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C.SetDailyRitualDetailAlignment
	// void SetDailyRitualDetailAlignment(bool isAfterTrial);                                                                // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C.SetBackground
	// void SetBackground(bool isAfterTrial);                                                                                // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C.GetAfterTrialProgressionButtonPadding
	// void GetAfterTrialProgressionButtonPadding(float& Padding);                                                           // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C.SetVisuals
	// void SetVisuals(bool isAfterTrial);                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C.ExecuteUbergraph_WBP_CoreDailyRitualsPopupWidget
	// void ExecuteUbergraph_WBP_CoreDailyRitualsPopupWidget(int32_t EntryPoint);                                            // [0x61c32d0] Final                
};

/// Class /DBDUICore/Popups/WBP_ProcessingPopup.WBP_ProcessingPopup_C
/// Size: 0x0018 (0x000330 - 0x000348)
class UWBP_ProcessingPopup_C : public UProcessingPopupWidget
{ 
public:
	class UDBDImage*                                   BG;                                                         // 0x0330   (0x0008)  
	class UDBDImage*                                   TitleBG;                                                    // 0x0338   (0x0008)  
	class UWBP_LoadingSmall_C*                         WBP_LoadingSmall;                                           // 0x0340   (0x0008)  
};

/// Class /DBDUICore/Popups/NewActiveTomePopup/WBP_NewActiveTomePopupWidget.WBP_NewActiveTomePopupWidget_C
/// Size: 0x0061 (0x0003D0 - 0x000431)
class UWBP_NewActiveTomePopupWidget_C : public UNewActiveTomePopupWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03D0   (0x0008)  
	class UWidgetAnimation*                            Fade_in;                                                    // 0x03D8   (0x0008)  
	class UDBDImage*                                   BottomSmokeFX;                                              // 0x03E0   (0x0008)  
	class UDBDImage*                                   DBDImage_LeftSmoke;                                         // 0x03E8   (0x0008)  
	class UDBDImage*                                   DBDImage_SmokeRight;                                        // 0x03F0   (0x0008)  
	class UOverlay*                                    NewRift;                                                    // 0x03F8   (0x0008)  
	class UHorizontalBox*                              RiftContainer;                                              // 0x0400   (0x0008)  
	class UDBDImage*                                   RiftIcon;                                                   // 0x0408   (0x0008)  
	class UDBDTextBlock*                               RiftTimeValue;                                              // 0x0410   (0x0008)  
	class UDBDImage*                                   TomeIcon;                                                   // 0x0418   (0x0008)  
	class UMaterialInstanceDynamic*                    BgContainerDynamicMaterial;                                 // 0x0420   (0x0008)  
	FVector2D                                          Res21;                                                      // 0x0428   (0x0008)  
	bool                                               NewVar;                                                     // 0x0430   (0x0001)  


	/// Functions
	// Function /DBDUICore/Popups/NewActiveTomePopup/WBP_NewActiveTomePopupWidget.WBP_NewActiveTomePopupWidget_C.SetRiftVisibility
	// void SetRiftVisibility(bool IsVisible);                                                                               // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Popups/NewActiveTomePopup/WBP_NewActiveTomePopupWidget.WBP_NewActiveTomePopupWidget_C.SetRiftRemainingTime
	// void SetRiftRemainingTime(FString RemainingTime);                                                                     // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Popups/NewActiveTomePopup/WBP_NewActiveTomePopupWidget.WBP_NewActiveTomePopupWidget_C.SetRemainingTime
	// void SetRemainingTime(FString RemainingTime);                                                                         // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Popups/NewActiveTomePopup/WBP_NewActiveTomePopupWidget.WBP_NewActiveTomePopupWidget_C.SetRiftEnabled
	// void SetRiftEnabled(bool IsEnabled);                                                                                  // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Popups/NewActiveTomePopup/WBP_NewActiveTomePopupWidget.WBP_NewActiveTomePopupWidget_C.OnInitialized
	// void OnInitialized();                                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Popups/NewActiveTomePopup/WBP_NewActiveTomePopupWidget.WBP_NewActiveTomePopupWidget_C.ExecuteUbergraph_WBP_NewActiveTomePopupWidget
	// void ExecuteUbergraph_WBP_NewActiveTomePopupWidget(int32_t EntryPoint);                                               // [0x61c32d0] Final                
};

/// Class /DBDUICore/Popups/WBP_CoreLoadoutMenuPopupWidget.WBP_CoreLoadoutMenuPopupWidget_C
/// Size: 0x0061 (0x000658 - 0x0006B9)
class UWBP_CoreLoadoutMenuPopupWidget_C : public ULoadoutMenuPopupWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0658   (0x0008)  
	class UWidgetAnimation*                            DisplayNewPage;                                             // 0x0660   (0x0008)  
	class UWidgetAnimation*                            GoToPreviousPage;                                           // 0x0668   (0x0008)  
	class UWidgetAnimation*                            GoToNextPage;                                               // 0x0670   (0x0008)  
	class UDBDImage*                                   BG;                                                         // 0x0678   (0x0008)  
	class UDBDImage*                                   BlackOverlay;                                               // 0x0680   (0x0008)  
	class UDBDImage*                                   Divider;                                                    // 0x0688   (0x0008)  
	class UDBDImage*                                   Divider0;                                                   // 0x0690   (0x0008)  
	class UDBDImage*                                   PaginationBg;                                               // 0x0698   (0x0008)  
	class UDBDImage*                                   Separator;                                                  // 0x06A0   (0x0008)  
	SDK_UNDEFINED(16,4942) /* FString */               __um(Item);                                                 // 0x06A8   (0x0010)  
	bool                                               NewVar;                                                     // 0x06B8   (0x0001)  


	/// Functions
	// Function /DBDUICore/Popups/WBP_CoreLoadoutMenuPopupWidget.WBP_CoreLoadoutMenuPopupWidget_C.PlacceHolderGrid
	// void PlacceHolderGrid();                                                                                              // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreLoadoutMenuPopupWidget.WBP_CoreLoadoutMenuPopupWidget_C.On_BotCharacterComboBox_GenerateWidget
	// class UWidget* On_BotCharacterComboBox_GenerateWidget(FString Item);                                                  // [0x61c32d0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreLoadoutMenuPopupWidget.WBP_CoreLoadoutMenuPopupWidget_C.Finished_11A87E5143F7D6F42A08F3B7EB9CFC27
	// void Finished_11A87E5143F7D6F42A08F3B7EB9CFC27();                                                                     // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreLoadoutMenuPopupWidget.WBP_CoreLoadoutMenuPopupWidget_C.BndEvt__WBP_CoreLoadoutMenuPopupWidget_CoreMenuItem_K2Node_ComponentBoundEvent_1_OnUnhoveredDelegate__DelegateSignature
	// void BndEvt__WBP_CoreLoadoutMenuPopupWidget_CoreMenuItem_K2Node_ComponentBoundEvent_1_OnUnhoveredDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Popups/WBP_CoreLoadoutMenuPopupWidget.WBP_CoreLoadoutMenuPopupWidget_C.BndEvt__WBP_CoreLoadoutMenuPopupWidget_CoreMenuPower_K2Node_ComponentBoundEvent_2_OnHoveredDelegate__DelegateSignature
	// void BndEvt__WBP_CoreLoadoutMenuPopupWidget_CoreMenuPower_K2Node_ComponentBoundEvent_2_OnHoveredDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Popups/WBP_CoreLoadoutMenuPopupWidget.WBP_CoreLoadoutMenuPopupWidget_C.BndEvt__WBP_CoreLoadoutMenuPopupWidget_CoreMenuPower_K2Node_ComponentBoundEvent_3_OnUnhoveredDelegate__DelegateSignature
	// void BndEvt__WBP_CoreLoadoutMenuPopupWidget_CoreMenuPower_K2Node_ComponentBoundEvent_3_OnUnhoveredDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Popups/WBP_CoreLoadoutMenuPopupWidget.WBP_CoreLoadoutMenuPopupWidget_C.BndEvt__WBP_CoreLoadoutMenuPopupWidget_CoreAddon_1_K2Node_ComponentBoundEvent_4_OnHoveredDelegate__DelegateSignature
	// void BndEvt__WBP_CoreLoadoutMenuPopupWidget_CoreAddon_1_K2Node_ComponentBoundEvent_4_OnHoveredDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Popups/WBP_CoreLoadoutMenuPopupWidget.WBP_CoreLoadoutMenuPopupWidget_C.BndEvt__WBP_CoreLoadoutMenuPopupWidget_CoreAddon_1_K2Node_ComponentBoundEvent_5_OnUnhoveredDelegate__DelegateSignature
	// void BndEvt__WBP_CoreLoadoutMenuPopupWidget_CoreAddon_1_K2Node_ComponentBoundEvent_5_OnUnhoveredDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Popups/WBP_CoreLoadoutMenuPopupWidget.WBP_CoreLoadoutMenuPopupWidget_C.BndEvt__WBP_CoreLoadoutMenuPopupWidget_CoreAddon_2_K2Node_ComponentBoundEvent_6_OnHoveredDelegate__DelegateSignature
	// void BndEvt__WBP_CoreLoadoutMenuPopupWidget_CoreAddon_2_K2Node_ComponentBoundEvent_6_OnHoveredDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Popups/WBP_CoreLoadoutMenuPopupWidget.WBP_CoreLoadoutMenuPopupWidget_C.BndEvt__WBP_CoreLoadoutMenuPopupWidget_CoreAddon_2_K2Node_ComponentBoundEvent_7_OnUnhoveredDelegate__DelegateSignature
	// void BndEvt__WBP_CoreLoadoutMenuPopupWidget_CoreAddon_2_K2Node_ComponentBoundEvent_7_OnUnhoveredDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Popups/WBP_CoreLoadoutMenuPopupWidget.WBP_CoreLoadoutMenuPopupWidget_C.BndEvt__WBP_CoreLoadoutMenuPopupWidget_CoreOffering_K2Node_ComponentBoundEvent_8_OnHoveredDelegate__DelegateSignature
	// void BndEvt__WBP_CoreLoadoutMenuPopupWidget_CoreOffering_K2Node_ComponentBoundEvent_8_OnHoveredDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Popups/WBP_CoreLoadoutMenuPopupWidget.WBP_CoreLoadoutMenuPopupWidget_C.BndEvt__WBP_CoreLoadoutMenuPopupWidget_CoreOffering_K2Node_ComponentBoundEvent_9_OnUnhoveredDelegate__DelegateSignature
	// void BndEvt__WBP_CoreLoadoutMenuPopupWidget_CoreOffering_K2Node_ComponentBoundEvent_9_OnUnhoveredDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Popups/WBP_CoreLoadoutMenuPopupWidget.WBP_CoreLoadoutMenuPopupWidget_C.BndEvt__WBP_CoreLoadoutMenuPopupWidget_CorePerk_1_K2Node_ComponentBoundEvent_10_OnHoveredDelegate__DelegateSignature
	// void BndEvt__WBP_CoreLoadoutMenuPopupWidget_CorePerk_1_K2Node_ComponentBoundEvent_10_OnHoveredDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Popups/WBP_CoreLoadoutMenuPopupWidget.WBP_CoreLoadoutMenuPopupWidget_C.BndEvt__WBP_CoreLoadoutMenuPopupWidget_CorePerk_1_K2Node_ComponentBoundEvent_11_OnUnhoveredDelegate__DelegateSignature
	// void BndEvt__WBP_CoreLoadoutMenuPopupWidget_CorePerk_1_K2Node_ComponentBoundEvent_11_OnUnhoveredDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Popups/WBP_CoreLoadoutMenuPopupWidget.WBP_CoreLoadoutMenuPopupWidget_C.BndEvt__WBP_CoreLoadoutMenuPopupWidget_CorePerk_2_K2Node_ComponentBoundEvent_12_OnHoveredDelegate__DelegateSignature
	// void BndEvt__WBP_CoreLoadoutMenuPopupWidget_CorePerk_2_K2Node_ComponentBoundEvent_12_OnHoveredDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Popups/WBP_CoreLoadoutMenuPopupWidget.WBP_CoreLoadoutMenuPopupWidget_C.BndEvt__WBP_CoreLoadoutMenuPopupWidget_CorePerk_2_K2Node_ComponentBoundEvent_13_OnUnhoveredDelegate__DelegateSignature
	// void BndEvt__WBP_CoreLoadoutMenuPopupWidget_CorePerk_2_K2Node_ComponentBoundEvent_13_OnUnhoveredDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Popups/WBP_CoreLoadoutMenuPopupWidget.WBP_CoreLoadoutMenuPopupWidget_C.BndEvt__WBP_CoreLoadoutMenuPopupWidget_CorePerk_3_K2Node_ComponentBoundEvent_14_OnHoveredDelegate__DelegateSignature
	// void BndEvt__WBP_CoreLoadoutMenuPopupWidget_CorePerk_3_K2Node_ComponentBoundEvent_14_OnHoveredDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Popups/WBP_CoreLoadoutMenuPopupWidget.WBP_CoreLoadoutMenuPopupWidget_C.BndEvt__WBP_CoreLoadoutMenuPopupWidget_CorePerk_4_K2Node_ComponentBoundEvent_15_OnHoveredDelegate__DelegateSignature
	// void BndEvt__WBP_CoreLoadoutMenuPopupWidget_CorePerk_4_K2Node_ComponentBoundEvent_15_OnHoveredDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Popups/WBP_CoreLoadoutMenuPopupWidget.WBP_CoreLoadoutMenuPopupWidget_C.BndEvt__WBP_CoreLoadoutMenuPopupWidget_CorePerk_3_K2Node_ComponentBoundEvent_16_OnUnhoveredDelegate__DelegateSignature
	// void BndEvt__WBP_CoreLoadoutMenuPopupWidget_CorePerk_3_K2Node_ComponentBoundEvent_16_OnUnhoveredDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Popups/WBP_CoreLoadoutMenuPopupWidget.WBP_CoreLoadoutMenuPopupWidget_C.BndEvt__WBP_CoreLoadoutMenuPopupWidget_CorePerk_4_K2Node_ComponentBoundEvent_17_OnUnhoveredDelegate__DelegateSignature
	// void BndEvt__WBP_CoreLoadoutMenuPopupWidget_CorePerk_4_K2Node_ComponentBoundEvent_17_OnUnhoveredDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Popups/WBP_CoreLoadoutMenuPopupWidget.WBP_CoreLoadoutMenuPopupWidget_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreLoadoutMenuPopupWidget.WBP_CoreLoadoutMenuPopupWidget_C.Destruct
	// void Destruct();                                                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreLoadoutMenuPopupWidget.WBP_CoreLoadoutMenuPopupWidget_C.CancelRegressionActionSelected
	// void CancelRegressionActionSelected();                                                                                // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreLoadoutMenuPopupWidget.WBP_CoreLoadoutMenuPopupWidget_C.SaveProgressionActionSelected
	// void SaveProgressionActionSelected();                                                                                 // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreLoadoutMenuPopupWidget.WBP_CoreLoadoutMenuPopupWidget_C.SetInventoryItemEnabled
	// void SetInventoryItemEnabled(class UCoreMenuLoadoutPartWidget* Widget, EItemAvailability Availability);               // [0x61c32d0] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreLoadoutMenuPopupWidget.WBP_CoreLoadoutMenuPopupWidget_C.BndEvt__WBP_CoreLoadoutMenuPopupWidget_CoreMenuItem_K2Node_ComponentBoundEvent_0_OnHoveredDelegate__DelegateSignature
	// void BndEvt__WBP_CoreLoadoutMenuPopupWidget_CoreMenuItem_K2Node_ComponentBoundEvent_0_OnHoveredDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Popups/WBP_CoreLoadoutMenuPopupWidget.WBP_CoreLoadoutMenuPopupWidget_C.PlayPaginationInAnimation
	// void PlayPaginationInAnimation();                                                                                     // [0x61c32d0] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreLoadoutMenuPopupWidget.WBP_CoreLoadoutMenuPopupWidget_C.PlayPaginationOutAnimation
	// void PlayPaginationOutAnimation(bool isNextPage);                                                                     // [0x61c32d0] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreLoadoutMenuPopupWidget.WBP_CoreLoadoutMenuPopupWidget_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreLoadoutMenuPopupWidget.WBP_CoreLoadoutMenuPopupWidget_C.UpdateScale
	// void UpdateScale(float Scale);                                                                                        // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreLoadoutMenuPopupWidget.WBP_CoreLoadoutMenuPopupWidget_C.ExecuteUbergraph_WBP_CoreLoadoutMenuPopupWidget
	// void ExecuteUbergraph_WBP_CoreLoadoutMenuPopupWidget(int32_t EntryPoint);                                             // [0x61c32d0] Final                
};

/// Class /DBDUICore/Popups/ReportFeedback/WBP_CoreReportFeedbackInfoWidget.WBP_CoreReportFeedbackInfoWidget_C
/// Size: 0x0000 (0x000320 - 0x000320)
class UWBP_CoreReportFeedbackInfoWidget_C : public UReportFeedbackInfoWidget
{ 
public:
};

/// Class /DBDUICore/Popups/WBP_CoreCurrencyConversionPopupWidget.WBP_CoreCurrencyConversionPopupWidget_C
/// Size: 0x0050 (0x000370 - 0x0003C0)
class UWBP_CoreCurrencyConversionPopupWidget_C : public UCurrencyConversionPopupWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0370   (0x0008)  
	class UDBDImage*                                   Arrow;                                                      // 0x0378   (0x0008)  
	class UDBDImage*                                   BG;                                                         // 0x0380   (0x0008)  
	class UDBDImage*                                   Divider;                                                    // 0x0388   (0x0008)  
	class UDBDTextBlock*                               FromCurrencyAmount;                                         // 0x0390   (0x0008)  
	class UDBDImage*                                   FromCurrencyImage;                                          // 0x0398   (0x0008)  
	class UDBDTextBlock*                               ToCurrencyAmount;                                           // 0x03A0   (0x0008)  
	class UDBDImage*                                   ToCurrencyImage;                                            // 0x03A8   (0x0008)  
	ECurrencyType                                      FromCurrencyPreview;                                        // 0x03B0   (0x0001)  
	ECurrencyType                                      ToCurrencyPreview;                                          // 0x03B1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x03B2   (0x0006)  MISSED
	class UDataTable*                                  DB;                                                         // 0x03B8   (0x0008)  


	/// Functions
	// Function /DBDUICore/Popups/WBP_CoreCurrencyConversionPopupWidget.WBP_CoreCurrencyConversionPopupWidget_C.SetData
	// void SetData(class UCurrencyConversionPopupViewData* Data);                                                           // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreCurrencyConversionPopupWidget.WBP_CoreCurrencyConversionPopupWidget_C.ExecuteUbergraph_WBP_CoreCurrencyConversionPopupWidget
	// void ExecuteUbergraph_WBP_CoreCurrencyConversionPopupWidget(int32_t EntryPoint);                                      // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Popups/WBP_CoreArchiveTierPurchasePopup.WBP_CoreArchiveTierPurchasePopup_C
/// Size: 0x0088 (0x000460 - 0x0004E8)
class UWBP_CoreArchiveTierPurchasePopup_C : public UCoreArchiveTierPurchasePopupWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0460   (0x0008)  
	class UImage*                                      ArchivePassPurchaseBG;                                      // 0x0468   (0x0008)  
	class UDBDImage*                                   CurrencyIcon;                                               // 0x0470   (0x0008)  
	class UImage*                                      Image;                                                      // 0x0478   (0x0008)  
	class UDBDImage*                                   PriorityHeader;                                             // 0x0480   (0x0008)  
	SDK_UNDEFINED(48,4943) /* TWeakObjectPtr<UMaterialInstance*> */ __um(Default_Banner);                          // 0x0488   (0x0030)  
	SDK_UNDEFINED(48,4944) /* TWeakObjectPtr<UMaterialInstance*> */ __um(Bonus_Banner);                            // 0x04B8   (0x0030)  


	/// Functions
	// Function /DBDUICore/Popups/WBP_CoreArchiveTierPurchasePopup.WBP_CoreArchiveTierPurchasePopup_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreArchiveTierPurchasePopup.WBP_CoreArchiveTierPurchasePopup_C.SetVisualData
	// void SetVisualData(class UArchiveTierPurchasePopupViewData* ViewData);                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreArchiveTierPurchasePopup.WBP_CoreArchiveTierPurchasePopup_C.SetCurrencyIcon
	// void SetCurrencyIcon(ECurrencyType CurrencyType);                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreArchiveTierPurchasePopup.WBP_CoreArchiveTierPurchasePopup_C.ExecuteUbergraph_WBP_CoreArchiveTierPurchasePopup
	// void ExecuteUbergraph_WBP_CoreArchiveTierPurchasePopup(int32_t EntryPoint);                                           // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Popups/ReportFeedback/WBP_CoreReportFeedbackPopupWidget.WBP_CoreReportFeedbackPopupWidget_C
/// Size: 0x0050 (0x000390 - 0x0003E0)
class UWBP_CoreReportFeedbackPopupWidget_C : public UReportFeedbackPopupWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0390   (0x0008)  
	class UWidgetAnimation*                            Anim_FadeOut;                                               // 0x0398   (0x0008)  
	class UWidgetAnimation*                            Anim_FadeIn;                                                // 0x03A0   (0x0008)  
	class UImage*                                      Background;                                                 // 0x03A8   (0x0008)  
	class UDBDImage*                                   BG;                                                         // 0x03B0   (0x0008)  
	class URetainerBox*                                Mask;                                                       // 0x03B8   (0x0008)  
	class UDBDImage*                                   PriorityHeader;                                             // 0x03C0   (0x0008)  
	class UDBDImage*                                   SeparatorCenter;                                            // 0x03C8   (0x0008)  
	class UDBDImage*                                   SeparatorMiddle;                                            // 0x03D0   (0x0008)  
	class UDBDImage*                                   SeparatorMiddle0;                                           // 0x03D8   (0x0008)  


	/// Functions
	// Function /DBDUICore/Popups/ReportFeedback/WBP_CoreReportFeedbackPopupWidget.WBP_CoreReportFeedbackPopupWidget_C.SetHeaderColor
	// void SetHeaderColor(class UBasePopupViewData* Data);                                                                  // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Popups/ReportFeedback/WBP_CoreReportFeedbackPopupWidget.WBP_CoreReportFeedbackPopupWidget_C.Show
	// void Show(class UBasePopupViewData* Data);                                                                            // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /DBDUICore/Popups/ReportFeedback/WBP_CoreReportFeedbackPopupWidget.WBP_CoreReportFeedbackPopupWidget_C.Hide
	// void Hide();                                                                                                          // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /DBDUICore/Popups/ReportFeedback/WBP_CoreReportFeedbackPopupWidget.WBP_CoreReportFeedbackPopupWidget_C.HandleAnalogInputEvent
	// void HandleAnalogInputEvent(FAnalogInputEvent& InAnalogInputEvent);                                                   // [0x61c32d0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /DBDUICore/Popups/ReportFeedback/WBP_CoreReportFeedbackPopupWidget.WBP_CoreReportFeedbackPopupWidget_C.OnControlModeChangedBP
	// void OnControlModeChangedBP(EControlMode controlMode);                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Popups/ReportFeedback/WBP_CoreReportFeedbackPopupWidget.WBP_CoreReportFeedbackPopupWidget_C.ExecuteUbergraph_WBP_CoreReportFeedbackPopupWidget
	// void ExecuteUbergraph_WBP_CoreReportFeedbackPopupWidget(int32_t EntryPoint);                                          // [0x61c32d0] Final|HasDefaults    
};

