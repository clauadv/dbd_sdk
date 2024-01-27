
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Common
/// dependency: CoreUObject
/// dependency: DBDUIViewsCore
/// dependency: Engine
/// dependency: UITween
/// dependency: UMG

/// Class /DBDUICore/Store/Items/WBP_CoreStoreCustomizationItem.WBP_CoreStoreCustomizationItem_C
/// Size: 0x0098 (0x0004A0 - 0x000538)
class UWBP_CoreStoreCustomizationItem_C : public UCoreStoreCustomizationItemWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04A0   (0x0008)  
	class UDBDImage*                                   BackgroundImage;                                            // 0x04A8   (0x0008)  
	class UOverlay*                                    DiscountTimeTag;                                            // 0x04B0   (0x0008)  
	class UTextBlock*                                  DiscountTimeTagText;                                        // 0x04B8   (0x0008)  
	class UOverlay*                                    EquippedTag;                                                // 0x04C0   (0x0008)  
	class UDBDImage*                                   EquippedTagIcon;                                            // 0x04C8   (0x0008)  
	class UOverlay*                                    EventCheckmarkTag;                                          // 0x04D0   (0x0008)  
	class UDBDImage*                                   EventCheckmarkTagIcon;                                      // 0x04D8   (0x0008)  
	class UOverlay*                                    EventPointsTag;                                             // 0x04E0   (0x0008)  
	class UDBDImage*                                   EventPointsTagIcon;                                         // 0x04E8   (0x0008)  
	class UDBDImage*                                   KillSwitchIcon;                                             // 0x04F0   (0x0008)  
	class UOverlay*                                    KillSwitchOverlay;                                          // 0x04F8   (0x0008)  
	class UOverlay*                                    LimitedTimeTag;                                             // 0x0500   (0x0008)  
	class UTextBlock*                                  LimitedTimeTagText;                                         // 0x0508   (0x0008)  
	class UWBP_LockedOverlay_C*                        LockedOverlay;                                              // 0x0510   (0x0008)  
	class UOverlay*                                    OwnedTag;                                                   // 0x0518   (0x0008)  
	class UDBDImage*                                   RarityImage;                                                // 0x0520   (0x0008)  
	class UOverlay*                                    UnbreakableSetTag;                                          // 0x0528   (0x0008)  
	class UDBDImage*                                   UnbreakableSetTagIcon;                                      // 0x0530   (0x0008)  


	/// Functions
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCustomizationItem.WBP_CoreStoreCustomizationItem_C.SetEquippedTag
	// void SetEquippedTag(bool IsEquipped);                                                                                 // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCustomizationItem.WBP_CoreStoreCustomizationItem_C.SetLockedOverlay
	// void SetLockedOverlay(bool IsLocked);                                                                                 // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCustomizationItem.WBP_CoreStoreCustomizationItem_C.SetDiscountTimeTag
	// void SetDiscountTimeTag(FString DiscountTimeText, bool IsOwned);                                                      // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCustomizationItem.WBP_CoreStoreCustomizationItem_C.SetLimitedTimeTag
	// void SetLimitedTimeTag(FString LimitedTimeText, bool IsOwned);                                                        // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCustomizationItem.WBP_CoreStoreCustomizationItem_C.SetEventCheckmarkTag
	// void SetEventCheckmarkTag(bool IsOwned);                                                                              // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCustomizationItem.WBP_CoreStoreCustomizationItem_C.SetEventPointsTag
	// void SetEventPointsTag(bool GrantsMilestonePointOnUnlock);                                                            // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCustomizationItem.WBP_CoreStoreCustomizationItem_C.Set Unbreakable Set Tag
	// void Set Unbreakable Set Tag(bool IsUnbreakable);                                                                     // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCustomizationItem.WBP_CoreStoreCustomizationItem_C.SetKillSwitchOverlay
	// void SetKillSwitchOverlay(bool IsEnabled);                                                                            // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCustomizationItem.WBP_CoreStoreCustomizationItem_C.SetOwnedTag
	// void SetOwnedTag(bool IsOwned);                                                                                       // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCustomizationItem.WBP_CoreStoreCustomizationItem_C.SetRarity
	// void SetRarity(EItemRarity Rarity);                                                                                   // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCustomizationItem.WBP_CoreStoreCustomizationItem_C.SetStoreCustomizationItemData
	// void SetStoreCustomizationItemData(class UStoreCustomizationItemViewData* Data);                                      // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCustomizationItem.WBP_CoreStoreCustomizationItem_C.SetSmallTemplate
	// void SetSmallTemplate(bool useSmallTemplate);                                                                         // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCustomizationItem.WBP_CoreStoreCustomizationItem_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCustomizationItem.WBP_CoreStoreCustomizationItem_C.ExecuteUbergraph_WBP_CoreStoreCustomizationItem
	// void ExecuteUbergraph_WBP_CoreStoreCustomizationItem(int32_t EntryPoint);                                             // [0x61c32d0] Final                
};

/// Class /DBDUICore/Store/Items/WBP_CoreStoreCharacterItem.WBP_CoreStoreCharacterItem_C
/// Size: 0x0070 (0x0004A0 - 0x000510)
class UWBP_CoreStoreCharacterItem_C : public UCoreStoreCharacterItemWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04A0   (0x0008)  
	class UDBDImage*                                   BackgroundImage;                                            // 0x04A8   (0x0008)  
	class UOverlay*                                    DiscountTimeTag;                                            // 0x04B0   (0x0008)  
	class UTextBlock*                                  DiscountTimeTagText;                                        // 0x04B8   (0x0008)  
	class UDBDTextBlock*                               ItemsOwned;                                                 // 0x04C0   (0x0008)  
	class UDBDImage*                                   KillSwitchOverlay;                                          // 0x04C8   (0x0008)  
	class UOverlay*                                    LimitedTimeTag;                                             // 0x04D0   (0x0008)  
	class UTextBlock*                                  LimitedTimeTagText;                                         // 0x04D8   (0x0008)  
	class UWBP_LockedOverlay_C*                        LockedOverlay;                                              // 0x04E0   (0x0008)  
	class UOverlay*                                    OwnedTag;                                                   // 0x04E8   (0x0008)  
	class UDBDImage*                                   Shadow;                                                     // 0x04F0   (0x0008)  
	class UDBDImage*                                   StreamingIcon;                                              // 0x04F8   (0x0008)  
	class UDBDImage*                                   Tint;                                                       // 0x0500   (0x0008)  
	class UDBDTextBlock*                               TotalItems;                                                 // 0x0508   (0x0008)  


	/// Functions
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCharacterItem.WBP_CoreStoreCharacterItem_C.SetLockedOverlay
	// void SetLockedOverlay(bool IsUnlocked, bool IsDlcLockedKiller);                                                       // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCharacterItem.WBP_CoreStoreCharacterItem_C.SetDiscountTimeTag
	// void SetDiscountTimeTag(FString DiscountTimeText, bool IsOwned);                                                      // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCharacterItem.WBP_CoreStoreCharacterItem_C.SetLimitedTimeTag
	// void SetLimitedTimeTag(FString LimitedTimeText, bool IsOwned);                                                        // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCharacterItem.WBP_CoreStoreCharacterItem_C.SetKillSwitchOverlay
	// void SetKillSwitchOverlay(bool IsEnabled);                                                                            // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCharacterItem.WBP_CoreStoreCharacterItem_C.SetOwnedTag
	// void SetOwnedTag(bool IsOwned);                                                                                       // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCharacterItem.WBP_CoreStoreCharacterItem_C.SetItemsCount
	// void SetItemsCount(int32_t Items Owned, int32_t Total Items);                                                         // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCharacterItem.WBP_CoreStoreCharacterItem_C.SetStoreCharacterItemData
	// void SetStoreCharacterItemData(class UStoreCharacterItemViewData* Data);                                              // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCharacterItem.WBP_CoreStoreCharacterItem_C.SetSmallTemplate
	// void SetSmallTemplate(bool useSmallTemplate);                                                                         // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCharacterItem.WBP_CoreStoreCharacterItem_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCharacterItem.WBP_CoreStoreCharacterItem_C.ExecuteUbergraph_WBP_CoreStoreCharacterItem
	// void ExecuteUbergraph_WBP_CoreStoreCharacterItem(int32_t EntryPoint);                                                 // [0x61c32d0] Final                
};

/// Class /DBDUICore/Store/SpecialPacks/WBP_CoreStoreSpecialPacksList.WBP_CoreStoreSpecialPacksList_C
/// Size: 0x0000 (0x000348 - 0x000348)
class UWBP_CoreStoreSpecialPacksList_C : public UCoreStoreSpecialPacksListWidget
{ 
public:
};

/// Class /DBDUICore/Store/SpecialPacks/WBP_CoreStoreSpecialPacksHeritageTab.WBP_CoreStoreSpecialPacksHeritageTab_C
/// Size: 0x0000 (0x000318 - 0x000318)
class UWBP_CoreStoreSpecialPacksHeritageTab_C : public UCoreStoreSpecialPacksHeritageTabWidget
{ 
public:
};

/// Class /DBDUICore/Store/SpecialPacks/WBP_CoreStoreChapterPacksList.WBP_CoreStoreChapterPacksList_C
/// Size: 0x0000 (0x000348 - 0x000348)
class UWBP_CoreStoreChapterPacksList_C : public UCoreStoreChapterPacksListWidget
{ 
public:
};

/// Class /DBDUICore/Store/SpecialPacks/WBP_CoreStoreSpecialPacks.WBP_CoreStoreSpecialPacks_C
/// Size: 0x0018 (0x000340 - 0x000358)
class UWBP_CoreStoreSpecialPacks_C : public UCoreStoreSpecialPacksWidget
{ 
public:
	class UWBP_CoreStoreChapterPacksList_C*            WBP_CoreStoreChapterPacksTab;                               // 0x0340   (0x0008)  
	class UWBP_CoreStoreSpecialPacksHeritageTab_C*     WBP_CoreStoreHeritagePacksTab;                              // 0x0348   (0x0008)  
	class UWBP_CoreStoreSpecialPacksList_C*            WBP_CoreStoreSpecialPacksTab;                               // 0x0350   (0x0008)  


	/// Functions
	// Function /DBDUICore/Store/SpecialPacks/WBP_CoreStoreSpecialPacks.WBP_CoreStoreSpecialPacks_C.GetTabHeritageInterface
	// TScriptInterface<Class> GetTabHeritageInterface();                                                                    // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /DBDUICore/Store/SpecialPacks/WBP_CoreStoreSpecialPacks.WBP_CoreStoreSpecialPacks_C.GetTabSpecialsInterface
	// TScriptInterface<Class> GetTabSpecialsInterface();                                                                    // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /DBDUICore/Store/SpecialPacks/WBP_CoreStoreSpecialPacks.WBP_CoreStoreSpecialPacks_C.GetTabChaptersInterface
	// TScriptInterface<Class> GetTabChaptersInterface();                                                                    // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /DBDUICore/Store/SpecialPacks/WBP_CoreStoreSpecialPackItem.WBP_CoreStoreSpecialPackItem_C
/// Size: 0x0021 (0x0004A8 - 0x0004C9)
class UWBP_CoreStoreSpecialPackItem_C : public UCoreStoreSpecialPacksPackItemWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04A8   (0x0008)  
	class UDBDImage*                                   BannerImage;                                                // 0x04B0   (0x0008)  
	class UScrollBox*                                  ContentScroll;                                              // 0x04B8   (0x0008)  
	class UDBDTextBlock*                               OwnedTag;                                                   // 0x04C0   (0x0008)  
	bool                                               IsOwned;                                                    // 0x04C8   (0x0001)  


	/// Functions
	// Function /DBDUICore/Store/SpecialPacks/WBP_CoreStoreSpecialPackItem.WBP_CoreStoreSpecialPackItem_C.SetExpanded
	// void SetExpanded(bool expanded);                                                                                      // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/SpecialPacks/WBP_CoreStoreSpecialPackItem.WBP_CoreStoreSpecialPackItem_C.ToggleExpanded
	// void ToggleExpanded();                                                                                                // [0x61c32d0] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/SpecialPacks/WBP_CoreStoreSpecialPackItem.WBP_CoreStoreSpecialPackItem_C.BndEvt__WBP_CoreStoreSpecialPacksItem_BannerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__WBP_CoreStoreSpecialPacksItem_BannerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Store/SpecialPacks/WBP_CoreStoreSpecialPackItem.WBP_CoreStoreSpecialPackItem_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Store/SpecialPacks/WBP_CoreStoreSpecialPackItem.WBP_CoreStoreSpecialPackItem_C.SetData
	// void SetData(class UStoreSpecialPackViewData* Data);                                                                  // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/SpecialPacks/WBP_CoreStoreSpecialPackItem.WBP_CoreStoreSpecialPackItem_C.ExecuteUbergraph_WBP_CoreStoreSpecialPackItem
	// void ExecuteUbergraph_WBP_CoreStoreSpecialPackItem(int32_t EntryPoint);                                               // [0x61c32d0] Final                
};

/// Class /DBDUICore/Store/SpecialPacks/WBP_CoreStoreChapterPackItem.WBP_CoreStoreChapterPackItem_C
/// Size: 0x0021 (0x0004A0 - 0x0004C1)
class UWBP_CoreStoreChapterPackItem_C : public UCoreStoreChapterPackItemWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04A0   (0x0008)  
	class UDBDImage*                                   BannerImage;                                                // 0x04A8   (0x0008)  
	class UScrollBox*                                  ContentScroll;                                              // 0x04B0   (0x0008)  
	class UDBDTextBlock*                               OwnedTag;                                                   // 0x04B8   (0x0008)  
	bool                                               IsOwned;                                                    // 0x04C0   (0x0001)  


	/// Functions
	// Function /DBDUICore/Store/SpecialPacks/WBP_CoreStoreChapterPackItem.WBP_CoreStoreChapterPackItem_C.SetExpanded
	// void SetExpanded(bool expanded);                                                                                      // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/SpecialPacks/WBP_CoreStoreChapterPackItem.WBP_CoreStoreChapterPackItem_C.ToggleExpanded
	// void ToggleExpanded();                                                                                                // [0x61c32d0] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/SpecialPacks/WBP_CoreStoreChapterPackItem.WBP_CoreStoreChapterPackItem_C.BndEvt__WBP_CoreStoreSpecialPacksItem_BannerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__WBP_CoreStoreSpecialPacksItem_BannerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Store/SpecialPacks/WBP_CoreStoreChapterPackItem.WBP_CoreStoreChapterPackItem_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Store/SpecialPacks/WBP_CoreStoreChapterPackItem.WBP_CoreStoreChapterPackItem_C.SetData
	// void SetData(class UStoreChapterPackViewData* Data);                                                                  // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/SpecialPacks/WBP_CoreStoreChapterPackItem.WBP_CoreStoreChapterPackItem_C.ExecuteUbergraph_WBP_CoreStoreChapterPackItem
	// void ExecuteUbergraph_WBP_CoreStoreChapterPackItem(int32_t EntryPoint);                                               // [0x61c32d0] Final                
};

/// Class /DBDUICore/Store/Characters/WBP_CoreStoreCharactersFilterWidget.WBP_CoreStoreCharactersFilterWidget_C
/// Size: 0x0058 (0x000358 - 0x0003B0)
class UWBP_CoreStoreCharactersFilterWidget_C : public UCoreStoreCharactersFilterWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0358   (0x0008)  
	class UDBDImage*                                   Background;                                                 // 0x0360   (0x0008)  
	class UWBP_CoreFilterButton_C*                     CommonCheckBox;                                             // 0x0368   (0x0008)  
	class UWBP_CoreFilterButton_C*                     EventCheckBox;                                              // 0x0370   (0x0008)  
	class UWBP_CoreFilterButton_C*                     FavoriteCheckBox;                                           // 0x0378   (0x0008)  
	class UWBP_CoreFilterButton_C*                     LegendaryCheckBox;                                          // 0x0380   (0x0008)  
	class UWBP_CoreFilterButton_C*                     OwnedCheckBox;                                              // 0x0388   (0x0008)  
	class UWBP_CoreFilterButton_C*                     RareCheckBox;                                               // 0x0390   (0x0008)  
	class UWBP_CoreFilterButton_C*                     UltraRareCheckBox;                                          // 0x0398   (0x0008)  
	class UWBP_CoreFilterButton_C*                     UncommonCheckBox;                                           // 0x03A0   (0x0008)  
	class UWBP_CoreFilterButton_C*                     VeryRareCheckBox;                                           // 0x03A8   (0x0008)  


	/// Functions
	// Function /DBDUICore/Store/Characters/WBP_CoreStoreCharactersFilterWidget.WBP_CoreStoreCharactersFilterWidget_C.ToggleRarityFiltersVisibility
	// void ToggleRarityFiltersVisibility(bool showRarityFilters);                                                           // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Characters/WBP_CoreStoreCharactersFilterWidget.WBP_CoreStoreCharactersFilterWidget_C.ResetFilters
	// void ResetFilters();                                                                                                  // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Store/Characters/WBP_CoreStoreCharactersFilterWidget.WBP_CoreStoreCharactersFilterWidget_C.ToggleWidgetVisibility
	// void ToggleWidgetVisibility();                                                                                        // [0x61c32d0] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Characters/WBP_CoreStoreCharactersFilterWidget.WBP_CoreStoreCharactersFilterWidget_C.SetRarityFiltersVisibility
	// void SetRarityFiltersVisibility(bool showRarityFilters);                                                              // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Characters/WBP_CoreStoreCharactersFilterWidget.WBP_CoreStoreCharactersFilterWidget_C.ExecuteUbergraph_WBP_CoreStoreCharactersFilterWidget
	// void ExecuteUbergraph_WBP_CoreStoreCharactersFilterWidget(int32_t EntryPoint);                                        // [0x61c32d0] Final                
};

/// Class /DBDUICore/Store/Characters/WBP_CoreStoreCharactersSelection.WBP_CoreStoreCharactersSelection_C
/// Size: 0x0010 (0x000370 - 0x000380)
class UWBP_CoreStoreCharactersSelection_C : public UCoreStoreCharactersSelectionWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0370   (0x0008)  
	class UWBP_CoreIconButton_C*                       FiltersButton;                                              // 0x0378   (0x0008)  


	/// Functions
	// Function /DBDUICore/Store/Characters/WBP_CoreStoreCharactersSelection.WBP_CoreStoreCharactersSelection_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Store/Characters/WBP_CoreStoreCharactersSelection.WBP_CoreStoreCharactersSelection_C.OnFiltersButtonClicked
	// void OnFiltersButtonClicked(class UCoreButtonWidget* buttonTarget);                                                   // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Characters/WBP_CoreStoreCharactersSelection.WBP_CoreStoreCharactersSelection_C.ExecuteUbergraph_WBP_CoreStoreCharactersSelection
	// void ExecuteUbergraph_WBP_CoreStoreCharactersSelection(int32_t EntryPoint);                                           // [0x61c32d0] Final                
};

/// Class /DBDUICore/Store/Characters/WBP_CoreStoreCharactersCustomizations.WBP_CoreStoreCharactersCustomizations_C
/// Size: 0x0010 (0x0003B0 - 0x0003C0)
class UWBP_CoreStoreCharactersCustomizations_C : public UCoreStoreCharactersCustomizationsWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03B0   (0x0008)  
	class UWBP_CoreIconButton_C*                       FiltersButton;                                              // 0x03B8   (0x0008)  


	/// Functions
	// Function /DBDUICore/Store/Characters/WBP_CoreStoreCharactersCustomizations.WBP_CoreStoreCharactersCustomizations_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Store/Characters/WBP_CoreStoreCharactersCustomizations.WBP_CoreStoreCharactersCustomizations_C.OnFiltersButtonClicked
	// void OnFiltersButtonClicked(class UCoreButtonWidget* buttonTarget);                                                   // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Characters/WBP_CoreStoreCharactersCustomizations.WBP_CoreStoreCharactersCustomizations_C.ExecuteUbergraph_WBP_CoreStoreCharactersCustomizations
	// void ExecuteUbergraph_WBP_CoreStoreCharactersCustomizations(int32_t EntryPoint);                                      // [0x61c32d0] Final                
};

/// Class /DBDUICore/Store/Characters/WBP_CoreStoreCharactersBio.WBP_CoreStoreCharactersBio_C
/// Size: 0x0000 (0x000328 - 0x000328)
class UWBP_CoreStoreCharactersBio_C : public UCoreStoreCharactersBioWidget
{ 
public:
};

/// Class /DBDUICore/Store/Characters/WBP_CoreStoreCharacterPerksToast.WBP_CoreStoreCharacterPerksToast_C
/// Size: 0x0030 (0x000480 - 0x0004B0)
class UWBP_CoreStoreCharacterPerksToast_C : public UCoreStoreCharacterPerksToastWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0480   (0x0008)  
	class UDBDImage*                                   ClosedBackground;                                           // 0x0488   (0x0008)  
	class USizeBox*                                    ClosedStateSizeBox;                                         // 0x0490   (0x0008)  
	class UDBDImage*                                   OpenBackground;                                             // 0x0498   (0x0008)  
	class USizeBox*                                    OpenStateSizeBox;                                           // 0x04A0   (0x0008)  
	class UDBDImage*                                   TempButtonIcon;                                             // 0x04A8   (0x0008)  


	/// Functions
	// Function /DBDUICore/Store/Characters/WBP_CoreStoreCharacterPerksToast.WBP_CoreStoreCharacterPerksToast_C.Open Toast Internal
	// void Open Toast Internal();                                                                                           // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Characters/WBP_CoreStoreCharacterPerksToast.WBP_CoreStoreCharacterPerksToast_C.Close Toast Internal
	// void Close Toast Internal();                                                                                          // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Characters/WBP_CoreStoreCharacterPerksToast.WBP_CoreStoreCharacterPerksToast_C.OnClicked
	// void OnClicked();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Store/Characters/WBP_CoreStoreCharacterPerksToast.WBP_CoreStoreCharacterPerksToast_C.Show
	// void Show();                                                                                                          // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Characters/WBP_CoreStoreCharacterPerksToast.WBP_CoreStoreCharacterPerksToast_C.Hide
	// void Hide();                                                                                                          // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Characters/WBP_CoreStoreCharacterPerksToast.WBP_CoreStoreCharacterPerksToast_C.SetCharacterRole
	// void SetCharacterRole(EPlayerRole Role);                                                                              // [0x61c32d0] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Characters/WBP_CoreStoreCharacterPerksToast.WBP_CoreStoreCharacterPerksToast_C.OpenToast
	// void OpenToast();                                                                                                     // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Characters/WBP_CoreStoreCharacterPerksToast.WBP_CoreStoreCharacterPerksToast_C.CloseToast
	// void CloseToast();                                                                                                    // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Characters/WBP_CoreStoreCharacterPerksToast.WBP_CoreStoreCharacterPerksToast_C.ExecuteUbergraph_WBP_CoreStoreCharacterPerksToast
	// void ExecuteUbergraph_WBP_CoreStoreCharacterPerksToast(int32_t EntryPoint);                                           // [0x61c32d0] Final                
};

/// Class /DBDUICore/Store/Collections/WBP_CoreStoreCollectionsItem.WBP_CoreStoreCollectionsItem_C
/// Size: 0x0029 (0x000340 - 0x000369)
class UWBP_CoreStoreCollectionsItem_C : public UCoreStoreCollectionsItemWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0340   (0x0008)  
	class UDBDButton*                                  BannerButton;                                               // 0x0348   (0x0008)  
	class UDBDImage*                                   BannerImage;                                                // 0x0350   (0x0008)  
	class UHorizontalBox*                              TimerBox;                                                   // 0x0358   (0x0008)  
	class UDBDTextBlock*                               titleText;                                                  // 0x0360   (0x0008)  
	bool                                               IsExpanded;                                                 // 0x0368   (0x0001)  


	/// Functions
	// Function /DBDUICore/Store/Collections/WBP_CoreStoreCollectionsItem.WBP_CoreStoreCollectionsItem_C.LoadFailed_430E22844203D5D49332C7A7A277FF43
	// void LoadFailed_430E22844203D5D49332C7A7A277FF43(class UTexture2D* LoadedTexture);                                    // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Collections/WBP_CoreStoreCollectionsItem.WBP_CoreStoreCollectionsItem_C.Loaded_430E22844203D5D49332C7A7A277FF43
	// void Loaded_430E22844203D5D49332C7A7A277FF43(class UTexture2D* LoadedTexture);                                        // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Collections/WBP_CoreStoreCollectionsItem.WBP_CoreStoreCollectionsItem_C.BndEvt__WBP_CoreStoreCollectionsItem_BannerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__WBP_CoreStoreCollectionsItem_BannerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Store/Collections/WBP_CoreStoreCollectionsItem.WBP_CoreStoreCollectionsItem_C.SetExpanded
	// void SetExpanded(bool expanded);                                                                                      // [0x61c32d0] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Collections/WBP_CoreStoreCollectionsItem.WBP_CoreStoreCollectionsItem_C.ToggleExpanded
	// void ToggleExpanded();                                                                                                // [0x61c32d0] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Collections/WBP_CoreStoreCollectionsItem.WBP_CoreStoreCollectionsItem_C.SetupView
	// void SetupView(class UStoreCollectionViewData* collectionViewData);                                                   // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Collections/WBP_CoreStoreCollectionsItem.WBP_CoreStoreCollectionsItem_C.ExecuteUbergraph_WBP_CoreStoreCollectionsItem
	// void ExecuteUbergraph_WBP_CoreStoreCollectionsItem(int32_t EntryPoint);                                               // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Store/Collections/WBP_CoreStoreCollectionsList.WBP_CoreStoreCollectionsList_C
/// Size: 0x0000 (0x000338 - 0x000338)
class UWBP_CoreStoreCollectionsList_C : public UCoreStoreCollectionsListWidget
{ 
public:
};

/// Class /DBDUICore/Store/Featured/WBP_CoreStoreFeatured_Character.WBP_CoreStoreFeatured_Character_C
/// Size: 0x0030 (0x000480 - 0x0004B0)
class UWBP_CoreStoreFeatured_Character_C : public UCoreStoreFeaturedCharacterWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0480   (0x0008)  
	class UDBDTextBlock*                               CharacterNameTB;                                            // 0x0488   (0x0008)  
	class UOverlay*                                    SelectedPanel;                                              // 0x0490   (0x0008)  
	class USizeBox*                                    TileSizeBox;                                                // 0x0498   (0x0008)  
	float                                              SelectionAnimDuration;                                      // 0x04A0   (0x0004)  
	EEasingType                                        SelectionAnimEasing;                                        // 0x04A4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x04A5   (0x0003)  MISSED
	float                                              MinTileWidth;                                               // 0x04A8   (0x0004)  
	float                                              MaxTileWidth;                                               // 0x04AC   (0x0004)  


	/// Functions
	// Function /DBDUICore/Store/Featured/WBP_CoreStoreFeatured_Character.WBP_CoreStoreFeatured_Character_C.OnSelectedChanged
	// void OnSelectedChanged(bool IsSelected);                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Store/Featured/WBP_CoreStoreFeatured_Character.WBP_CoreStoreFeatured_Character_C.OnTileSelectionUpdate
	// void OnTileSelectionUpdate(class UUITweenInstance* tween);                                                            // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Featured/WBP_CoreStoreFeatured_Character.WBP_CoreStoreFeatured_Character_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Store/Featured/WBP_CoreStoreFeatured_Character.WBP_CoreStoreFeatured_Character_C.SetCharacterData
	// void SetCharacterData(FStoreFeaturedCharacterViewData& CharacterData);                                                // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Featured/WBP_CoreStoreFeatured_Character.WBP_CoreStoreFeatured_Character_C.OnSelectedPanelFadedOut
	// void OnSelectedPanelFadedOut(class UUITweenInstance* tween);                                                          // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Featured/WBP_CoreStoreFeatured_Character.WBP_CoreStoreFeatured_Character_C.BndEvt__WBP_CoreStoreFeatured_Character_TransitionButton_K2Node_ComponentBoundEvent_0_OnClickedDelegate__DelegateSignature
	// void BndEvt__WBP_CoreStoreFeatured_Character_TransitionButton_K2Node_ComponentBoundEvent_0_OnClickedDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Store/Featured/WBP_CoreStoreFeatured_Character.WBP_CoreStoreFeatured_Character_C.ExecuteUbergraph_WBP_CoreStoreFeatured_Character
	// void ExecuteUbergraph_WBP_CoreStoreFeatured_Character(int32_t EntryPoint);                                            // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Store/Featured/WBP_CoreStoreFeatured_ItemContainer.WBP_CoreStoreFeatured_ItemContainer_C
/// Size: 0x0008 (0x000438 - 0x000440)
class UWBP_CoreStoreFeatured_ItemContainer_C : public UCoreStoreFeaturedCustomizationItemContainerWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0438   (0x0008)  


	/// Functions
	// Function /DBDUICore/Store/Featured/WBP_CoreStoreFeatured_ItemContainer.WBP_CoreStoreFeatured_ItemContainer_C.MoveTo
	// void MoveTo(class UCoreButtonWidget* Button);                                                                         // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Featured/WBP_CoreStoreFeatured_ItemContainer.WBP_CoreStoreFeatured_ItemContainer_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Store/Featured/WBP_CoreStoreFeatured_ItemContainer.WBP_CoreStoreFeatured_ItemContainer_C.InitItemContainer
	// void InitItemContainer();                                                                                             // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Featured/WBP_CoreStoreFeatured_ItemContainer.WBP_CoreStoreFeatured_ItemContainer_C.SetItems
	// void SetItems(TArray<UStoreCustomizationItemViewData*>& viewDataArray);                                               // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Featured/WBP_CoreStoreFeatured_ItemContainer.WBP_CoreStoreFeatured_ItemContainer_C.ExecuteUbergraph_WBP_CoreStoreFeatured_ItemContainer
	// void ExecuteUbergraph_WBP_CoreStoreFeatured_ItemContainer(int32_t EntryPoint);                                        // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Store/Featured/WBP_CoreStoreFeatured_CharacterContainer.WBP_CoreStoreFeatured_CharacterContainer_C
/// Size: 0x0008 (0x000370 - 0x000378)
class UWBP_CoreStoreFeatured_CharacterContainer_C : public UCoreStoreFeaturedCharacterContainerWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0370   (0x0008)  


	/// Functions
	// Function /DBDUICore/Store/Featured/WBP_CoreStoreFeatured_CharacterContainer.WBP_CoreStoreFeatured_CharacterContainer_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Store/Featured/WBP_CoreStoreFeatured_CharacterContainer.WBP_CoreStoreFeatured_CharacterContainer_C.ExecuteUbergraph_WBP_CoreStoreFeatured_CharacterContainer
	// void ExecuteUbergraph_WBP_CoreStoreFeatured_CharacterContainer(int32_t EntryPoint);                                   // [0x61c32d0] Final                
};

/// Class /DBDUICore/Store/Items/WBP_CoreStoreSpecialsItem.WBP_CoreStoreSpecialsItem_C
/// Size: 0x0010 (0x000440 - 0x000450)
class UWBP_CoreStoreSpecialsItem_C : public UCoreSelectableButtonWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0440   (0x0008)  
	class UDBDImage*                                   ItemIcon;                                                   // 0x0448   (0x0008)  


	/// Functions
	// Function /DBDUICore/Store/Items/WBP_CoreStoreSpecialsItem.WBP_CoreStoreSpecialsItem_C.OnInitialized
	// void OnInitialized();                                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreSpecialsItem.WBP_CoreStoreSpecialsItem_C.ExecuteUbergraph_WBP_CoreStoreSpecialsItem
	// void ExecuteUbergraph_WBP_CoreStoreSpecialsItem(int32_t EntryPoint);                                                  // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Store/Specials/WBP_CoreStoreSpecials.WBP_CoreStoreSpecials_C
/// Size: 0x0000 (0x000340 - 0x000340)
class UWBP_CoreStoreSpecials_C : public UCoreStoreSpecialsWidget
{ 
public:
};

/// Class /DBDUICore/Store/Featured/WBP_CoreStoreFeatured.WBP_CoreStoreFeatured_C
/// Size: 0x0048 (0x000348 - 0x000390)
class UWBP_CoreStoreFeatured_C : public UCoreStoreFeaturedWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0348   (0x0008)  
	class UExpandableArea*                             ExpandableArea;                                             // 0x0350   (0x0008)  
	class UVerticalBox*                                FeaturedChapterPackContainer;                               // 0x0358   (0x0008)  
	class UDBDImage*                                   FeaturedChapterPackImg;                                     // 0x0360   (0x0008)  
	class UVerticalBox*                                FeaturedCharactersContainer;                                // 0x0368   (0x0008)  
	class UVerticalBox*                                FeaturedContainer;                                          // 0x0370   (0x0008)  
	class UHorizontalBox*                              MiscContainer;                                              // 0x0378   (0x0008)  
	TArray<class UDBDImage*>                           DummyFeaturedImages;                                        // 0x0380   (0x0010)  


	/// Functions
	// Function /DBDUICore/Store/Featured/WBP_CoreStoreFeatured.WBP_CoreStoreFeatured_C.InitCustomizationTiles
	// void InitCustomizationTiles(TArray<UStoreCustomizationItemViewData*>& viewDataArray);                                 // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Featured/WBP_CoreStoreFeatured.WBP_CoreStoreFeatured_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Store/Featured/WBP_CoreStoreFeatured.WBP_CoreStoreFeatured_C.InitFeaturedCustomizationItems
	// void InitFeaturedCustomizationItems(TArray<UStoreCustomizationItemViewData*>& viewDataArray);                         // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Featured/WBP_CoreStoreFeatured.WBP_CoreStoreFeatured_C.InitFeaturedCharacters
	// void InitFeaturedCharacters(TArray<FStoreFeaturedCharacterViewData>& characterViewDataArray);                         // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Featured/WBP_CoreStoreFeatured.WBP_CoreStoreFeatured_C.ExecuteUbergraph_WBP_CoreStoreFeatured
	// void ExecuteUbergraph_WBP_CoreStoreFeatured(int32_t EntryPoint);                                                      // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Store/Collections/WBP_CoreStoreCollections.WBP_CoreStoreCollections_C
/// Size: 0x0018 (0x000340 - 0x000358)
class UWBP_CoreStoreCollections_C : public UCoreStoreCollectionsWidget
{ 
public:
	class UWBP_CoreStoreCollectionsList_C*             AllTab;                                                     // 0x0340   (0x0008)  
	class UWBP_CoreStoreCollectionsList_C*             FeaturedTab;                                                // 0x0348   (0x0008)  
	class UWBP_CoreStoreCollectionsList_C*             SpecialTab;                                                 // 0x0350   (0x0008)  


	/// Functions
	// Function /DBDUICore/Store/Collections/WBP_CoreStoreCollections.WBP_CoreStoreCollections_C.GetTabAllInterface
	// TScriptInterface<Class> GetTabAllInterface();                                                                         // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /DBDUICore/Store/Collections/WBP_CoreStoreCollections.WBP_CoreStoreCollections_C.GetTabFeaturedInterface
	// TScriptInterface<Class> GetTabFeaturedInterface();                                                                    // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /DBDUICore/Store/Collections/WBP_CoreStoreCollections.WBP_CoreStoreCollections_C.GetTabSpecialInterface
	// TScriptInterface<Class> GetTabSpecialInterface();                                                                     // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /DBDUICore/Store/Characters/WBP_CoreStoreCharacters.WBP_CoreStoreCharacters_C
/// Size: 0x0018 (0x000350 - 0x000368)
class UWBP_CoreStoreCharacters_C : public UCoreStoreCharactersWidget
{ 
public:
	class UWBP_CoreStoreCharactersBio_C*               BioTab;                                                     // 0x0350   (0x0008)  
	class UWBP_CoreStoreCharactersCustomizations_C*    CustomizationsTab;                                          // 0x0358   (0x0008)  
	class UWBP_CoreStoreCharactersSelection_C*         SelectionTab;                                               // 0x0360   (0x0008)  


	/// Functions
	// Function /DBDUICore/Store/Characters/WBP_CoreStoreCharacters.WBP_CoreStoreCharacters_C.GetStoreCharactersBioInterface
	// TScriptInterface<Class> GetStoreCharactersBioInterface();                                                             // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /DBDUICore/Store/Characters/WBP_CoreStoreCharacters.WBP_CoreStoreCharacters_C.GetStoreCharactersCustomizationsInterface
	// TScriptInterface<Class> GetStoreCharactersCustomizationsInterface();                                                  // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /DBDUICore/Store/Characters/WBP_CoreStoreCharacters.WBP_CoreStoreCharacters_C.GetStoreCharactersSelectionInterface
	// TScriptInterface<Class> GetStoreCharactersSelectionInterface();                                                       // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /DBDUICore/Store/Root/WBP_CoreStoreRoot.WBP_CoreStoreRoot_C
/// Size: 0x0038 (0x000378 - 0x0003B0)
class UWBP_CoreStoreRoot_C : public UCoreStoreMenuWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0378   (0x0008)  
	class UWBP_CoreStoreCharacters_C*                  CharactersSubPage;                                          // 0x0380   (0x0008)  
	class UWBP_CoreStoreCollections_C*                 CollectionsSubPage;                                         // 0x0388   (0x0008)  
	class UWBP_CoreStoreFeatured_C*                    FeaturedSubPage;                                            // 0x0390   (0x0008)  
	class UWidgetSwitcher*                             MenuStateSwitcher;                                          // 0x0398   (0x0008)  
	class UWBP_CoreStoreSpecialPacks_C*                SpecialPacksSubPage;                                        // 0x03A0   (0x0008)  
	class UWBP_CoreStoreSpecials_C*                    SpecialsSubPage;                                            // 0x03A8   (0x0008)  


	/// Functions
	// Function /DBDUICore/Store/Root/WBP_CoreStoreRoot.WBP_CoreStoreRoot_C.GetStoreSpecialPacksInterface
	// TScriptInterface<Class> GetStoreSpecialPacksInterface();                                                              // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /DBDUICore/Store/Root/WBP_CoreStoreRoot.WBP_CoreStoreRoot_C.GetStoreSpecialsInterface
	// TScriptInterface<Class> GetStoreSpecialsInterface();                                                                  // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /DBDUICore/Store/Root/WBP_CoreStoreRoot.WBP_CoreStoreRoot_C.GetStoreFeaturedInterface
	// TScriptInterface<Class> GetStoreFeaturedInterface();                                                                  // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /DBDUICore/Store/Root/WBP_CoreStoreRoot.WBP_CoreStoreRoot_C.GetStoreCollectionsInterface
	// TScriptInterface<Class> GetStoreCollectionsInterface();                                                               // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /DBDUICore/Store/Root/WBP_CoreStoreRoot.WBP_CoreStoreRoot_C.GetStoreCharactersInterface
	// TScriptInterface<Class> GetStoreCharactersInterface();                                                                // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /DBDUICore/Store/Root/WBP_CoreStoreRoot.WBP_CoreStoreRoot_C.SetMenuState
	// void SetMenuState(EStoreMenuState State);                                                                             // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Root/WBP_CoreStoreRoot.WBP_CoreStoreRoot_C.BndEvt__WBP_CoreStoreRoot_BackInputSwitcher_K2Node_ComponentBoundEvent_0_InputSwitcherTriggeredDelegate__DelegateSignature
	// void BndEvt__WBP_CoreStoreRoot_BackInputSwitcher_K2Node_ComponentBoundEvent_0_InputSwitcherTriggeredDelegate__DelegateSignature(); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Store/Root/WBP_CoreStoreRoot.WBP_CoreStoreRoot_C.ExecuteUbergraph_WBP_CoreStoreRoot
	// void ExecuteUbergraph_WBP_CoreStoreRoot(int32_t EntryPoint);                                                          // [0x61c32d0] Final                
};

/// Class /DBDUICore/Store/Featured/WBP_CoreStoreFeatured_CustomizationItem.WBP_CoreStoreFeatured_CustomizationItem_C
/// Size: 0x0058 (0x000458 - 0x0004B0)
class UWBP_CoreStoreFeatured_CustomizationItem_C : public UCoreStoreFeaturedCustomizationItemWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0458   (0x0008)  
	class UWidgetAnimation*                            ExpandTileAnim;                                             // 0x0460   (0x0008)  
	class UWBP_CoreCurrencyLabel_C*                    AuricCellsLabel;                                            // 0x0468   (0x0008)  
	class UDBDImage*                                   Background;                                                 // 0x0470   (0x0008)  
	class UDBDTextBlock*                               CustomNameTB;                                               // 0x0478   (0x0008)  
	class UDBDImage*                                   DBDImage;                                                   // 0x0480   (0x0008)  
	class UDBDImage*                                   ItemIcon;                                                   // 0x0488   (0x0008)  
	class UDBDImage*                                   RarityBG;                                                   // 0x0490   (0x0008)  
	class UWBP_CoreCurrencyLabel_C*                    ShardsLabel;                                                // 0x0498   (0x0008)  
	class UDBDImage*                                   timerBG;                                                    // 0x04A0   (0x0008)  
	class UWBP_CoreStandardButton_C*                   WBP_CoreStandardButton;                                     // 0x04A8   (0x0008)  


	/// Functions
	// Function /DBDUICore/Store/Featured/WBP_CoreStoreFeatured_CustomizationItem.WBP_CoreStoreFeatured_CustomizationItem_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Store/Featured/WBP_CoreStoreFeatured_CustomizationItem.WBP_CoreStoreFeatured_CustomizationItem_C.OnSelectedChanged
	// void OnSelectedChanged(bool IsSelected);                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Store/Featured/WBP_CoreStoreFeatured_CustomizationItem.WBP_CoreStoreFeatured_CustomizationItem_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Store/Featured/WBP_CoreStoreFeatured_CustomizationItem.WBP_CoreStoreFeatured_CustomizationItem_C.SetCustomizationData
	// void SetCustomizationData(class UStoreCustomizationItemViewData* specialOffersData);                                  // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Featured/WBP_CoreStoreFeatured_CustomizationItem.WBP_CoreStoreFeatured_CustomizationItem_C.OnMouseEnter
	// void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                                   // [0x61c32d0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /DBDUICore/Store/Featured/WBP_CoreStoreFeatured_CustomizationItem.WBP_CoreStoreFeatured_CustomizationItem_C.ExecuteUbergraph_WBP_CoreStoreFeatured_CustomizationItem
	// void ExecuteUbergraph_WBP_CoreStoreFeatured_CustomizationItem(int32_t EntryPoint);                                    // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Store/Characters/WBP_CoreStoreCategoryWidget.WBP_CoreStoreCategoryWidget_C
/// Size: 0x0018 (0x000450 - 0x000468)
class UWBP_CoreStoreCategoryWidget_C : public UCoreStoreCategoryWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0450   (0x0008)  
	class UDBDImage*                                   Icon;                                                       // 0x0458   (0x0008)  
	class UOverlay*                                    SelectedContainer;                                          // 0x0460   (0x0008)  


	/// Functions
	// Function /DBDUICore/Store/Characters/WBP_CoreStoreCategoryWidget.WBP_CoreStoreCategoryWidget_C.SetData
	// void SetData(FStoreCategoryViewData& Data);                                                                           // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Characters/WBP_CoreStoreCategoryWidget.WBP_CoreStoreCategoryWidget_C.OnSelectedChanged
	// void OnSelectedChanged(bool IsSelected);                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Store/Characters/WBP_CoreStoreCategoryWidget.WBP_CoreStoreCategoryWidget_C.ExecuteUbergraph_WBP_CoreStoreCategoryWidget
	// void ExecuteUbergraph_WBP_CoreStoreCategoryWidget(int32_t EntryPoint);                                                // [0x61c32d0] Final|HasDefaults    
};

