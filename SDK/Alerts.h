
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Common
/// dependency: CoreUObject
/// dependency: DBDUIViewInterfaces
/// dependency: DBDUIViewsCore
/// dependency: Engine
/// dependency: SlateCore
/// dependency: UMG

/// Class /DBDUICore/Alerts/WBP_CoreAlerts.WBP_CoreAlerts_C
/// Size: 0x0510 (0x0003E0 - 0x0008F0)
class UWBP_CoreAlerts_C : public UCoreAlertsWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03E0   (0x0008)  
	class UWidgetAnimation*                            AllFadeOutAnim;                                             // 0x03E8   (0x0008)  
	class UWidgetAnimation*                            RewardFadeOutAnim;                                          // 0x03F0   (0x0008)  
	class UVerticalBox*                                BannerGroupTextPanel;                                       // 0x03F8   (0x0008)  
	class UOverlay*                                    MainOverlay;                                                // 0x0400   (0x0008)  
	class UWBP_CoreRewardWrapperAnimation_C*           WBP_CoreRewardWrapperAnimation;                             // 0x0408   (0x0008)  
	class UWBP_CoreRewardWrapperAnimation_C*           WBP_CoreRewardWrapperAnimation0;                            // 0x0410   (0x0008)  
	TArray<class UUserWidget*>                         UserWidgetArray;                                            // 0x0418   (0x0010)  
	float                                              DelayBetweenShowItem;                                       // 0x0428   (0x0004)  
	float                                              Time_on_Text_Fade_Out;                                      // 0x042C   (0x0004)  
	TArray<class UAkAudioEvent*>                       LevelSelectSoundEffect;                                     // 0x0430   (0x0010)  
	FRewardWrapperViewData                             Reward;                                                     // 0x0440   (0x0498)  
	class UMaterialInstanceDynamic*                    BackgroundImageDynamicMaterial;                             // 0x08D8   (0x0008)  
	FMargin                                            RewardPadding;                                              // 0x08E0   (0x0010)  


	/// Functions
	// Function /DBDUICore/Alerts/WBP_CoreAlerts.WBP_CoreAlerts_C.SetEventBackground
	// void SetEventBackground(FString EventThemeLabel);                                                                     // [0x61d2f50] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Alerts/WBP_CoreAlerts.WBP_CoreAlerts_C.SetData
	// void SetData(TArray<FRewardWrapperViewData>& Data, TArray<UUserWidget*>& Widget);                                     // [0x61d2f50] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Alerts/WBP_CoreAlerts.WBP_CoreAlerts_C.Finished_4A3EFA3847957701465B81AFF62B0D0D
	// void Finished_4A3EFA3847957701465B81AFF62B0D0D();                                                                     // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Alerts/WBP_CoreAlerts.WBP_CoreAlerts_C.Finished_51CB27344662389D77C9C3A24FE729B8
	// void Finished_51CB27344662389D77C9C3A24FE729B8();                                                                     // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Alerts/WBP_CoreAlerts.WBP_CoreAlerts_C.PlayEndSequenceAnimation
	// void PlayEndSequenceAnimation();                                                                                      // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /DBDUICore/Alerts/WBP_CoreAlerts.WBP_CoreAlerts_C.PlayInterSequenceAnimation
	// void PlayInterSequenceAnimation();                                                                                    // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /DBDUICore/Alerts/WBP_CoreAlerts.WBP_CoreAlerts_C.PlayNextRewardsSequenceAnimation
	// void PlayNextRewardsSequenceAnimation(TArray<FRewardWrapperViewData>& AlertRewards);                                  // [0x61d2f50] Event|Public|HasOutParms|BlueprintEvent 
	// Function /DBDUICore/Alerts/WBP_CoreAlerts.WBP_CoreAlerts_C.PlayDisplayRewardSound
	// void PlayDisplayRewardSound(FRewardWrapperViewData& RewardData);                                                      // [0x61d2f50] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Alerts/WBP_CoreAlerts.WBP_CoreAlerts_C.PlayDisappearRewardSound
	// void PlayDisappearRewardSound();                                                                                      // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Alerts/WBP_CoreAlerts.WBP_CoreAlerts_C.PlaySoundEffect
	// void PlaySoundEffect(class UAkAudioEvent* soundFx);                                                                   // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Alerts/WBP_CoreAlerts.WBP_CoreAlerts_C.ExecuteUbergraph_WBP_CoreAlerts
	// void ExecuteUbergraph_WBP_CoreAlerts(int32_t EntryPoint);                                                             // [0x61d2f50] Final|HasDefaults    
};

