
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

/// Class /DBDUICore/ToastNotifications/WBP_ToastNotificationContainerWidget.WBP_ToastNotificationContainerWidget_C
/// Size: 0x0000 (0x0003A8 - 0x0003A8)
class UWBP_ToastNotificationContainerWidget_C : public UCoreToastNotificationContainerWidget
{ 
public:
};

/// Class /DBDUICore/ToastNotifications/WBP_ToastNotificationWidget.WBP_ToastNotificationWidget_C
/// Size: 0x0020 (0x000450 - 0x000470)
class UWBP_ToastNotificationWidget_C : public UCoreToastNotificationWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0450   (0x0008)  
	class UWidgetAnimation*                            TransitionIn;                                               // 0x0458   (0x0008)  
	class UDBDImage*                                   Background;                                                 // 0x0460   (0x0008)  
	int32_t                                            leftButtonId;                                               // 0x0468   (0x0004)  
	int32_t                                            rightButtonId;                                              // 0x046C   (0x0004)  


	/// Functions
	// Function /DBDUICore/ToastNotifications/WBP_ToastNotificationWidget.WBP_ToastNotificationWidget_C.Finished_1FA9E67347CCCF4D931A5F87F0734611
	// void Finished_1FA9E67347CCCF4D931A5F87F0734611();                                                                     // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/ToastNotifications/WBP_ToastNotificationWidget.WBP_ToastNotificationWidget_C.ChangeVisibility
	// void ChangeVisibility(bool IsVisible);                                                                                // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/ToastNotifications/WBP_ToastNotificationWidget.WBP_ToastNotificationWidget_C.SetVisuals
	// void SetVisuals(FToastNotificationViewData& toastData, bool IsInteractable);                                          // [0x61d2f50] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/ToastNotifications/WBP_ToastNotificationWidget.WBP_ToastNotificationWidget_C.OnLeftButtonClicked
	// void OnLeftButtonClicked(class UCoreButtonWidget* Button);                                                            // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/ToastNotifications/WBP_ToastNotificationWidget.WBP_ToastNotificationWidget_C.OnRightButtonClicked
	// void OnRightButtonClicked(class UCoreButtonWidget* Button);                                                           // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/ToastNotifications/WBP_ToastNotificationWidget.WBP_ToastNotificationWidget_C.ExecuteUbergraph_WBP_ToastNotificationWidget
	// void ExecuteUbergraph_WBP_ToastNotificationWidget(int32_t EntryPoint);                                                // [0x61d2f50] Final|HasDefaults    
};

