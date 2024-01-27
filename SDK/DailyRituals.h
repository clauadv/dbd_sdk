
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
/// Size: 0x0018 (0x0003A8 - 0x0003C0)
class UWBP_DailyRitualsContainerWidget_C : public UDailyRitualsContainerWidget
{ 
public:
	class UWBP_DailyRitualTileWidget_C*                WBP_DailyRitualTileWidget;                                  // 0x03A8   (0x0008)  
	class UWBP_DailyRitualTileWidget_C*                WBP_DailyRitualTileWidget0;                                 // 0x03B0   (0x0008)  
	class UWBP_DailyRitualTileWidget_C*                WBP_DailyRitualTileWidget1;                                 // 0x03B8   (0x0008)  
};

/// Class /DBDUICore/DailyRituals/WBP_DailyRitualTileRemoveButtonWidget.WBP_DailyRitualTileRemoveButtonWidget_C
/// Size: 0x0008 (0x000408 - 0x000410)
class UWBP_DailyRitualTileRemoveButtonWidget_C : public UCoreButtonWidget
{ 
public:
	class UDBDImage*                                   Icon;                                                       // 0x0408   (0x0008)  
};

/// Class /DBDUICore/DailyRituals/WBP_DailyRitualTileClaimButtonWidget.WBP_DailyRitualTileClaimButtonWidget_C
/// Size: 0x0018 (0x000408 - 0x000420)
class UWBP_DailyRitualTileClaimButtonWidget_C : public UCoreButtonWidget
{ 
public:
	class UWidgetAnimation*                            CompletedGlowAnimation;                                     // 0x0408   (0x0008)  
	class UDBDImage*                                   GlowAnimation;                                              // 0x0410   (0x0008)  
	class UDBDImage*                                   Icon;                                                       // 0x0418   (0x0008)  
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
	// void Finished_138C48CA45BF3996E8DAF7814D16D1ED();                                                                     // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/DailyRituals/WBP_DailyRitualTileWidget.WBP_DailyRitualTileWidget_C.Finished_F2C6128D460D972B729F1FB6DE6530D6
	// void Finished_F2C6128D460D972B729F1FB6DE6530D6();                                                                     // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/DailyRituals/WBP_DailyRitualTileWidget.WBP_DailyRitualTileWidget_C.Finished_97337F834CE4F10F60F9458FA83EBF61
	// void Finished_97337F834CE4F10F60F9458FA83EBF61();                                                                     // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/DailyRituals/WBP_DailyRitualTileWidget.WBP_DailyRitualTileWidget_C.PlayFadeInAnimation
	// void PlayFadeInAnimation();                                                                                           // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/DailyRituals/WBP_DailyRitualTileWidget.WBP_DailyRitualTileWidget_C.PlayFadeOutAnimation
	// void PlayFadeOutAnimation();                                                                                          // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/DailyRituals/WBP_DailyRitualTileWidget.WBP_DailyRitualTileWidget_C.ExecuteUbergraph_WBP_DailyRitualTileWidget
	// void ExecuteUbergraph_WBP_DailyRitualTileWidget(int32_t EntryPoint);                                                  // [0x61c32d0] Final                
};

