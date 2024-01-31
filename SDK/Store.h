
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
/// dependency: UMG

/// Class /DBDUICore/Store/Items/WBP_CoreStoreCustomizationItem.WBP_CoreStoreCustomizationItem_C
/// Size: 0x0078 (0x0004F0 - 0x000568)
class UWBP_CoreStoreCustomizationItem_C : public UCoreStoreCustomizationItemWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04F0   (0x0008)  
	class UDBDImage*                                   BackgroundImage;                                            // 0x04F8   (0x0008)  
	class UOverlay*                                    EquippedTag;                                                // 0x0500   (0x0008)  
	class UDBDImage*                                   EquippedTagIcon;                                            // 0x0508   (0x0008)  
	class UOverlay*                                    EventCheckmarkTag;                                          // 0x0510   (0x0008)  
	class UDBDImage*                                   EventCheckmarkTagIcon;                                      // 0x0518   (0x0008)  
	class UOverlay*                                    EventPointsTag;                                             // 0x0520   (0x0008)  
	class UDBDImage*                                   EventPointsTagIcon;                                         // 0x0528   (0x0008)  
	class UDBDImage*                                   KillSwitchIcon;                                             // 0x0530   (0x0008)  
	class UOverlay*                                    KillswitchOverlay;                                          // 0x0538   (0x0008)  
	class UWBP_LockedOverlay_C*                        LockedOverlay;                                              // 0x0540   (0x0008)  
	class UOverlay*                                    OwnedTag;                                                   // 0x0548   (0x0008)  
	class UDBDImage*                                   RarityImage;                                                // 0x0550   (0x0008)  
	class UOverlay*                                    UnbreakableSetTag;                                          // 0x0558   (0x0008)  
	class UDBDImage*                                   UnbreakableSetTagIcon;                                      // 0x0560   (0x0008)  


	/// Functions
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCustomizationItem.WBP_CoreStoreCustomizationItem_C.SetPriceTags
	// void SetPriceTags(bool IsBuyable, TArray<FPriceTagViewData>& PriceTags);                                              // [0x61d2f50] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCustomizationItem.WBP_CoreStoreCustomizationItem_C.SetTimerFlags
	// void SetTimerFlags(FString LimitedTimeText, FString DiscountTimeText, bool IsOwned);                                  // [0x61d2f50] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCustomizationItem.WBP_CoreStoreCustomizationItem_C.SetEquippedTag
	// void SetEquippedTag(bool IsEquipped);                                                                                 // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCustomizationItem.WBP_CoreStoreCustomizationItem_C.SetLockedOverlay
	// void SetLockedOverlay(bool IsLocked);                                                                                 // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCustomizationItem.WBP_CoreStoreCustomizationItem_C.SetEventCheckmarkTag
	// void SetEventCheckmarkTag(bool IsOwned);                                                                              // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCustomizationItem.WBP_CoreStoreCustomizationItem_C.SetEventPointsTag
	// void SetEventPointsTag(bool GrantsMilestonePointOnUnlock);                                                            // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCustomizationItem.WBP_CoreStoreCustomizationItem_C.Set Unbreakable Set Tag
	// void Set Unbreakable Set Tag(bool IsUnbreakable);                                                                     // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCustomizationItem.WBP_CoreStoreCustomizationItem_C.SetKillSwitchOverlay
	// void SetKillSwitchOverlay(bool IsEnabled);                                                                            // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCustomizationItem.WBP_CoreStoreCustomizationItem_C.SetOwnedTag
	// void SetOwnedTag(bool IsOwned);                                                                                       // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCustomizationItem.WBP_CoreStoreCustomizationItem_C.SetRarity
	// void SetRarity(EItemRarity Rarity);                                                                                   // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCustomizationItem.WBP_CoreStoreCustomizationItem_C.SetStoreCustomizationItemData
	// void SetStoreCustomizationItemData(class UStoreCustomizationItemViewData* Data);                                      // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCustomizationItem.WBP_CoreStoreCustomizationItem_C.SetSmallTemplate
	// void SetSmallTemplate(bool useSmallTemplate);                                                                         // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCustomizationItem.WBP_CoreStoreCustomizationItem_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61d2f50] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Store/Items/WBP_CoreStoreCustomizationItem.WBP_CoreStoreCustomizationItem_C.ExecuteUbergraph_WBP_CoreStoreCustomizationItem
	// void ExecuteUbergraph_WBP_CoreStoreCustomizationItem(int32_t EntryPoint);                                             // [0x61d2f50] Final                
};

