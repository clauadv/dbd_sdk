
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: DBDUIViewsCore
/// dependency: Engine
/// dependency: UMG

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
	// void SetProgressionButtonAlignmentAndPadding(bool isAfterTrial);                                                      // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C.SetDailyRitualDetailAlignment
	// void SetDailyRitualDetailAlignment(bool isAfterTrial);                                                                // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C.SetBackground
	// void SetBackground(bool isAfterTrial);                                                                                // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C.GetAfterTrialProgressionButtonPadding
	// void GetAfterTrialProgressionButtonPadding(float& Padding);                                                           // [0x61d2f50] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C.SetVisuals
	// void SetVisuals(bool isAfterTrial);                                                                                   // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C.ExecuteUbergraph_WBP_CoreDailyRitualsPopupWidget
	// void ExecuteUbergraph_WBP_CoreDailyRitualsPopupWidget(int32_t EntryPoint);                                            // [0x61d2f50] Final                
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
	// void Set Header Color(class UBasePopupViewData* Data);                                                                // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C.SetHeaderColor
	// void SetHeaderColor(class UBasePopupViewData* Data);                                                                  // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C.Show
	// void Show(class UBasePopupViewData* Data);                                                                            // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C.Hide
	// void Hide();                                                                                                          // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C.HandleAnalogInputEvent
	// void HandleAnalogInputEvent(FAnalogInputEvent& InAnalogInputEvent);                                                   // [0x61d2f50] Event|Public|HasOutParms|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C.ExecuteUbergraph_WBP_CoreGenericTextInputPopup
	// void ExecuteUbergraph_WBP_CoreGenericTextInputPopup(int32_t EntryPoint);                                              // [0x61d2f50] Final|HasDefaults    
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
	// void SetHeaderColor(class UBasePopupViewData* Data);                                                                  // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreGenericPopup.WBP_CoreGenericPopup_C.Show
	// void Show(class UBasePopupViewData* Data);                                                                            // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreGenericPopup.WBP_CoreGenericPopup_C.Hide
	// void Hide();                                                                                                          // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreGenericPopup.WBP_CoreGenericPopup_C.HandleAnalogInputEvent
	// void HandleAnalogInputEvent(FAnalogInputEvent& InAnalogInputEvent);                                                   // [0x61d2f50] Event|Public|HasOutParms|BlueprintEvent 
	// Function /DBDUICore/Popups/WBP_CoreGenericPopup.WBP_CoreGenericPopup_C.ExecuteUbergraph_WBP_CoreGenericPopup
	// void ExecuteUbergraph_WBP_CoreGenericPopup(int32_t EntryPoint);                                                       // [0x61d2f50] Final|HasDefaults    
};

/// Class /DBDUICore/Popups/BPFL_PopupHelper.BPFL_PopupHelper_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UBPFL_PopupHelper_C : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /DBDUICore/Popups/BPFL_PopupHelper.BPFL_PopupHelper_C.GetPopupHeader
	// void GetPopupHeader(EPopupPriority Priority, class UObject* __WorldContext, class UMaterialInstance*& MaterialInstance); // [0x61d2f50] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

