
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: Common
/// dependency: CoreUObject
/// dependency: DBDUIViewsCore
/// dependency: Engine
/// dependency: SlateCore
/// dependency: UMG

/// Class /DBDUICore/ProfileMenu/WBP_ProfileMenuTitle.WBP_ProfileMenuTitle_C
/// Size: 0x0010 (0x000298 - 0x0002A8)
class UWBP_ProfileMenuTitle_C : public UUserWidget
{ 
public:
	class UDBDTextBlock*                               SubtitleTextBlock;                                          // 0x0298   (0x0008)  
	class UDBDTextBlock*                               TitleTextBlock;                                             // 0x02A0   (0x0008)  


	/// Functions
	// Function /DBDUICore/ProfileMenu/WBP_ProfileMenuTitle.WBP_ProfileMenuTitle_C.SetSubtitle
	// void SetSubtitle(FText subtitleText);                                                                                 // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/ProfileMenu/WBP_ProfileMenuTitle.WBP_ProfileMenuTitle_C.SetTitle
	// void SetTitle(FText titleText);                                                                                       // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /DBDUICore/ProfileMenu/WBP_ProfileMenuSideNav.WBP_ProfileMenuSideNav_C
/// Size: 0x0008 (0x000398 - 0x0003A0)
class UWBP_ProfileMenuSideNav_C : public UCoreTabContainerWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0398   (0x0008)  


	/// Functions
	// Function /DBDUICore/ProfileMenu/WBP_ProfileMenuSideNav.WBP_ProfileMenuSideNav_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/ProfileMenu/WBP_ProfileMenuSideNav.WBP_ProfileMenuSideNav_C.ExecuteUbergraph_WBP_ProfileMenuSideNav
	// void ExecuteUbergraph_WBP_ProfileMenuSideNav(int32_t EntryPoint);                                                     // [0x61c32d0] Final                
};

/// Class /DBDUICore/ProfileMenu/WBP_ProfileMenuCustomizationWidget.WBP_ProfileMenuCustomizationWidget_C
/// Size: 0x0058 (0x0003F8 - 0x000450)
class UWBP_ProfileMenuCustomizationWidget_C : public UProfileMenuCustomizationWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03F8   (0x0008)  
	class UOverlay*                                    ContainerSize;                                              // 0x0400   (0x0008)  
	class UDBDImage*                                   DefaultTextBG;                                              // 0x0408   (0x0008)  
	class UOverlay*                                    NoCustomizationEquippedContainer;                           // 0x0410   (0x0008)  
	class UDBDTextBlock*                               NoCustomizationEquippedTB;                                  // 0x0418   (0x0008)  
	FSlateColor                                        TintColor;                                                  // 0x0420   (0x0028)  
	float                                              BadgeContainerSize;                                         // 0x0448   (0x0004)  
	float                                              BannerContainerSize;                                        // 0x044C   (0x0004)  


	/// Functions
	// Function /DBDUICore/ProfileMenu/WBP_ProfileMenuCustomizationWidget.WBP_ProfileMenuCustomizationWidget_C.SetScrollPrompt
	// void SetScrollPrompt(class UCoreKeyListenerInputPromptWidget* DisplayPrompt);                                         // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/ProfileMenu/WBP_ProfileMenuCustomizationWidget.WBP_ProfileMenuCustomizationWidget_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/ProfileMenu/WBP_ProfileMenuCustomizationWidget.WBP_ProfileMenuCustomizationWidget_C.SetPreviewAreaData
	// void SetPreviewAreaData(FCustomizationItemPreviewAreaViewData& ViewData, bool noCustomizationEquipped);               // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/ProfileMenu/WBP_ProfileMenuCustomizationWidget.WBP_ProfileMenuCustomizationWidget_C.ExecuteUbergraph_WBP_ProfileMenuCustomizationWidget
	// void ExecuteUbergraph_WBP_ProfileMenuCustomizationWidget(int32_t EntryPoint);                                         // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/ProfileMenu/WBP_ProfileMenuRoot.WBP_ProfileMenuRoot_C
/// Size: 0x0068 (0x000360 - 0x0003C8)
class UWBP_ProfileMenuRoot_C : public UCoreProfileMenuWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0360   (0x0008)  
	class UDBDImage*                                   BackgroundFog;                                              // 0x0368   (0x0008)  
	class UDBDImage*                                   BackgroundFog0;                                             // 0x0370   (0x0008)  
	class UDBDImage*                                   BackgroundFog1;                                             // 0x0378   (0x0008)  
	class UWBP_ProfileMenuCustomizationWidget_C*       BadgeMenuWidget;                                            // 0x0380   (0x0008)  
	class UWBP_ProfileMenuCustomizationWidget_C*       BannerMenuWidget;                                           // 0x0388   (0x0008)  
	class UDBDImage*                                   BG;                                                         // 0x0390   (0x0008)  
	class UWidgetSwitcher*                             MenuTabsSwitcher;                                           // 0x0398   (0x0008)  
	class UDBDImage*                                   NoMoveSmoke;                                                // 0x03A0   (0x0008)  
	class UWBP_CoreFooterInputSwitcher_C*              SettingsInputSwitcher;                                      // 0x03A8   (0x0008)  
	class USpacer*                                     SPACER1;                                                    // 0x03B0   (0x0008)  
	class UWBP_ProfileMenuStatsWidget_C*               StatsMenuWidget;                                            // 0x03B8   (0x0008)  
	class UWBP_ProfileMenuTitle_C*                     TitleSection;                                               // 0x03C0   (0x0008)  


	/// Functions
	// Function /DBDUICore/ProfileMenu/WBP_ProfileMenuRoot.WBP_ProfileMenuRoot_C.SetScrollPrompts
	// void SetScrollPrompts();                                                                                              // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/ProfileMenu/WBP_ProfileMenuRoot.WBP_ProfileMenuRoot_C.GetProfileMenuBadgeInterface
	// TScriptInterface<Class> GetProfileMenuBadgeInterface();                                                               // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /DBDUICore/ProfileMenu/WBP_ProfileMenuRoot.WBP_ProfileMenuRoot_C.GetProfileMenuBannerInterface
	// TScriptInterface<Class> GetProfileMenuBannerInterface();                                                              // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /DBDUICore/ProfileMenu/WBP_ProfileMenuRoot.WBP_ProfileMenuRoot_C.GetProfileMenuStatsInterface
	// TScriptInterface<Class> GetProfileMenuStatsInterface();                                                               // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /DBDUICore/ProfileMenu/WBP_ProfileMenuRoot.WBP_ProfileMenuRoot_C.SetMenuState
	// void SetMenuState(EProfileMenuState menuState);                                                                       // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/ProfileMenu/WBP_ProfileMenuRoot.WBP_ProfileMenuRoot_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/ProfileMenu/WBP_ProfileMenuRoot.WBP_ProfileMenuRoot_C.SetTitle
	// void SetTitle(FText& Title);                                                                                          // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/ProfileMenu/WBP_ProfileMenuRoot.WBP_ProfileMenuRoot_C.SetSubtitle
	// void SetSubtitle(FText& Subtitle);                                                                                    // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/ProfileMenu/WBP_ProfileMenuRoot.WBP_ProfileMenuRoot_C.SettingsInputSwitcherEvent
	// void SettingsInputSwitcherEvent();                                                                                    // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/ProfileMenu/WBP_ProfileMenuRoot.WBP_ProfileMenuRoot_C.ExecuteUbergraph_WBP_ProfileMenuRoot
	// void ExecuteUbergraph_WBP_ProfileMenuRoot(int32_t EntryPoint);                                                        // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/ProfileMenu/WBP_ProfileMenuTab.WBP_ProfileMenuTab_C
/// Size: 0x0048 (0x000478 - 0x0004C0)
class UWBP_ProfileMenuTab_C : public UCoreTabWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0478   (0x0008)  
	class UGridPanel*                                  ContentGrid;                                                // 0x0480   (0x0008)  
	class UDBDImage*                                   Icon;                                                       // 0x0488   (0x0008)  
	class UDBDImage*                                   IconBg;                                                     // 0x0490   (0x0008)  
	class UWBP_CoreOnHoverBorder_C*                    OnHoverBorder;                                              // 0x0498   (0x0008)  
	class UDBDImage*                                   Rollover;                                                   // 0x04A0   (0x0008)  
	class UDBDImage*                                   SelectedBG;                                                 // 0x04A8   (0x0008)  
	class UDBDImage*                                   Triangle;                                                   // 0x04B0   (0x0008)  
	class UTexture2D*                                  Texture;                                                    // 0x04B8   (0x0008)  


	/// Functions
	// Function /DBDUICore/ProfileMenu/WBP_ProfileMenuTab.WBP_ProfileMenuTab_C.PostInit
	// void PostInit();                                                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /DBDUICore/ProfileMenu/WBP_ProfileMenuTab.WBP_ProfileMenuTab_C.OnSelectedChanged
	// void OnSelectedChanged(bool IsSelected);                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/ProfileMenu/WBP_ProfileMenuTab.WBP_ProfileMenuTab_C.OnEnabledChanged
	// void OnEnabledChanged(bool IsEnabled);                                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/ProfileMenu/WBP_ProfileMenuTab.WBP_ProfileMenuTab_C.UpdateBackgroundSkin
	// void UpdateBackgroundSkin(class UMaterialInterface* skinMaterial);                                                    // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/ProfileMenu/WBP_ProfileMenuTab.WBP_ProfileMenuTab_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/ProfileMenu/WBP_ProfileMenuTab.WBP_ProfileMenuTab_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/ProfileMenu/WBP_ProfileMenuTab.WBP_ProfileMenuTab_C.ExecuteUbergraph_WBP_ProfileMenuTab
	// void ExecuteUbergraph_WBP_ProfileMenuTab(int32_t EntryPoint);                                                         // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/ProfileMenu/WBP_ProfileMenuStatsWidget.WBP_ProfileMenuStatsWidget_C
/// Size: 0x0058 (0x000380 - 0x0003D8)
class UWBP_ProfileMenuStatsWidget_C : public UProfileMenuStatsWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0380   (0x0008)  
	class UDBDImage*                                   fog_background;                                             // 0x0388   (0x0008)  
	class UWBP_CorePlayerRankWrapper_C*                KillerRank;                                                 // 0x0390   (0x0008)  
	class UDBDImage*                                   lineHorizontal;                                             // 0x0398   (0x0008)  
	class UDBDImage*                                   lineVertical;                                               // 0x03A0   (0x0008)  
	class UDBDRichTextBlock*                           PlayerLevelDescriptionRTB;                                  // 0x03A8   (0x0008)  
	class UDBDTextBlock*                               PlayerLevelTB;                                              // 0x03B0   (0x0008)  
	class UDBDRichTextBlock*                           RankDescriptionRTB;                                         // 0x03B8   (0x0008)  
	class UWBP_CorePlayerRankWrapper_C*                SurvivorRank;                                               // 0x03C0   (0x0008)  
	class UWBP_CorePlayerLevel_C*                      WBP_CorePlayerLevel;                                        // 0x03C8   (0x0008)  
	class UWBP_CorePlayerLevelExpGauge_C*              WBP_CorePlayerLevelExpGauge;                                // 0x03D0   (0x0008)  


	/// Functions
	// Function /DBDUICore/ProfileMenu/WBP_ProfileMenuStatsWidget.WBP_ProfileMenuStatsWidget_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/ProfileMenu/WBP_ProfileMenuStatsWidget.WBP_ProfileMenuStatsWidget_C.SetPlayerLevel
	// void SetPlayerLevel(FPlayerLevelViewData& ViewData);                                                                  // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/ProfileMenu/WBP_ProfileMenuStatsWidget.WBP_ProfileMenuStatsWidget_C.SetPlayerRanks
	// void SetPlayerRanks(FRankViewData& survivorViewData, FRankViewData& killerViewData);                                  // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/ProfileMenu/WBP_ProfileMenuStatsWidget.WBP_ProfileMenuStatsWidget_C.ExecuteUbergraph_WBP_ProfileMenuStatsWidget
	// void ExecuteUbergraph_WBP_ProfileMenuStatsWidget(int32_t EntryPoint);                                                 // [0x61c32d0] Final|HasDefaults    
};

