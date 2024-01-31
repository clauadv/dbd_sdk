
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

/// Class /DBDUICore/DailyRituals/WBP_DailyRitualsContainerWidget.WBP_DailyRitualsContainerWidget_C
/// Size: 0x0018 (0x0003B8 - 0x0003D0)
class UWBP_DailyRitualsContainerWidget_C : public UDailyRitualsContainerWidget
{ 
public:
	class UWBP_DailyRitualTileWidget_C*                WBP_DailyRitualTileWidget;                                  // 0x03B8   (0x0008)  
	class UWBP_DailyRitualTileWidget_C*                WBP_DailyRitualTileWidget0;                                 // 0x03C0   (0x0008)  
	class UWBP_DailyRitualTileWidget_C*                WBP_DailyRitualTileWidget1;                                 // 0x03C8   (0x0008)  
};

/// Class /DBDUICore/DailyRituals/WBP_DailyRitualTileRemoveButtonWidget.WBP_DailyRitualTileRemoveButtonWidget_C
/// Size: 0x0008 (0x000420 - 0x000428)
class UWBP_DailyRitualTileRemoveButtonWidget_C : public UCoreButtonWidget
{ 
public:
	class UDBDImage*                                   Icon;                                                       // 0x0420   (0x0008)  
};

/// Class /DBDUICore/DailyRituals/WBP_DailyRitualTileClaimButtonWidget.WBP_DailyRitualTileClaimButtonWidget_C
/// Size: 0x0018 (0x000420 - 0x000438)
class UWBP_DailyRitualTileClaimButtonWidget_C : public UCoreButtonWidget
{ 
public:
	class UWidgetAnimation*                            CompletedGlowAnimation;                                     // 0x0420   (0x0008)  
	class UDBDImage*                                   GlowAnimation;                                              // 0x0428   (0x0008)  
	class UDBDImage*                                   Icon;                                                       // 0x0430   (0x0008)  
};

/// Class /DBDUICore/DailyRituals/WBP_OnboardingRitualTileWidget.WBP_OnboardingRitualTileWidget_C
/// Size: 0x0028 (0x000440 - 0x000468)
class UWBP_OnboardingRitualTileWidget_C : public UDailyRitualTileWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0440   (0x0008)  
	class UWidgetAnimation*                            SheenAnim;                                                  // 0x0448   (0x0008)  
	class UWidgetAnimation*                            FadeIn;                                                     // 0x0450   (0x0008)  
	class UWidgetAnimation*                            FadeOut;                                                    // 0x0458   (0x0008)  
	class UDBDImage*                                   RewardIcon;                                                 // 0x0460   (0x0008)  


	/// Functions
	// Function /DBDUICore/DailyRituals/WBP_OnboardingRitualTileWidget.WBP_OnboardingRitualTileWidget_C.Finished_4257A0884DB125E29887F4A3CA5F9B16
	// void Finished_4257A0884DB125E29887F4A3CA5F9B16();                                                                     // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/DailyRituals/WBP_OnboardingRitualTileWidget.WBP_OnboardingRitualTileWidget_C.Finished_A62056C94224E02A55E4E4BCC2F00240
	// void Finished_A62056C94224E02A55E4E4BCC2F00240();                                                                     // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/DailyRituals/WBP_OnboardingRitualTileWidget.WBP_OnboardingRitualTileWidget_C.Finished_45D122694525E07974A8FABD0498077E
	// void Finished_45D122694525E07974A8FABD0498077E();                                                                     // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/DailyRituals/WBP_OnboardingRitualTileWidget.WBP_OnboardingRitualTileWidget_C.PlayFadeInAnimation
	// void PlayFadeInAnimation();                                                                                           // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/DailyRituals/WBP_OnboardingRitualTileWidget.WBP_OnboardingRitualTileWidget_C.PlayFadeOutAnimation
	// void PlayFadeOutAnimation();                                                                                          // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/DailyRituals/WBP_OnboardingRitualTileWidget.WBP_OnboardingRitualTileWidget_C.ExecuteUbergraph_WBP_OnboardingRitualTileWidget
	// void ExecuteUbergraph_WBP_OnboardingRitualTileWidget(int32_t EntryPoint);                                             // [0x61d2f50] Final                
};

/// Class /DBDUICore/DailyRituals/WBP_DailyRitualTileWidget.WBP_DailyRitualTileWidget_C
/// Size: 0x0028 (0x000440 - 0x000468)
class UWBP_DailyRitualTileWidget_C : public UDailyRitualTileWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0440   (0x0008)  
	class UWidgetAnimation*                            SheenAnim;                                                  // 0x0448   (0x0008)  
	class UWidgetAnimation*                            FadeIn;                                                     // 0x0450   (0x0008)  
	class UWidgetAnimation*                            FadeOut;                                                    // 0x0458   (0x0008)  
	class UDBDImage*                                   RewardIcon;                                                 // 0x0460   (0x0008)  


	/// Functions
	// Function /DBDUICore/DailyRituals/WBP_DailyRitualTileWidget.WBP_DailyRitualTileWidget_C.Finished_138C48CA45BF3996E8DAF7814D16D1ED
	// void Finished_138C48CA45BF3996E8DAF7814D16D1ED();                                                                     // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/DailyRituals/WBP_DailyRitualTileWidget.WBP_DailyRitualTileWidget_C.Finished_F2C6128D460D972B729F1FB6DE6530D6
	// void Finished_F2C6128D460D972B729F1FB6DE6530D6();                                                                     // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/DailyRituals/WBP_DailyRitualTileWidget.WBP_DailyRitualTileWidget_C.Finished_97337F834CE4F10F60F9458FA83EBF61
	// void Finished_97337F834CE4F10F60F9458FA83EBF61();                                                                     // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/DailyRituals/WBP_DailyRitualTileWidget.WBP_DailyRitualTileWidget_C.PlayFadeInAnimation
	// void PlayFadeInAnimation();                                                                                           // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/DailyRituals/WBP_DailyRitualTileWidget.WBP_DailyRitualTileWidget_C.PlayFadeOutAnimation
	// void PlayFadeOutAnimation();                                                                                          // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/DailyRituals/WBP_DailyRitualTileWidget.WBP_DailyRitualTileWidget_C.ExecuteUbergraph_WBP_DailyRitualTileWidget
	// void ExecuteUbergraph_WBP_DailyRitualTileWidget(int32_t EntryPoint);                                                  // [0x61d2f50] Final                
};

