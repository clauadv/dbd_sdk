
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DBDUIViewInterfaces
/// dependency: DBDUIViewsCore
/// dependency: Engine
/// dependency: UMG

/// Class /DBDUICore/AuricCells/WBP_CoreAuricCellsContainer.WBP_CoreAuricCellsContainer_C
/// Size: 0x0018 (0x000350 - 0x000368)
class UWBP_CoreAuricCellsContainer_C : public UCoreAuricCellsContainerWidget
{ 
public:
	class UWBP_CoreAuricCellsBundle_C*                 WBP_CoreAuricCellsTile;                                     // 0x0350   (0x0008)  
	class UWBP_CoreAuricCellsBundle_C*                 WBP_CoreAuricCellsTile0;                                    // 0x0358   (0x0008)  
	class UWBP_CoreAuricCellsBundle_C*                 WBP_CoreAuricCellsTile1;                                    // 0x0360   (0x0008)  
};

/// Class /DBDUICore/AuricCells/WBP_CoreAuricCells.WBP_CoreAuricCells_C
/// Size: 0x0050 (0x000360 - 0x0003B0)
class UWBP_CoreAuricCells_C : public UCoreAuricCellsWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0360   (0x0008)  
	class UOverlay*                                    EmptyBundles;                                               // 0x0368   (0x0008)  
	class UOverlay*                                    FirstPurchase;                                              // 0x0370   (0x0008)  
	class UImage*                                      FirstPurchaseAlreadyClaimedIconImage;                       // 0x0378   (0x0008)  
	class UDBDTextBlock*                               FirstPurchaseDescriptionTextBlock;                          // 0x0380   (0x0008)  
	class UDBDImage*                                   FirstPurchaseIconImage;                                     // 0x0388   (0x0008)  
	class UDBDTextBlock*                               FirstPurchaseTitleTextBlock;                                // 0x0390   (0x0008)  
	class UDBDTextBlock*                               TaxIncludedTextBlock;                                       // 0x0398   (0x0008)  
	TArray<FAuricCellsBundleViewData>                  Bundles;                                                    // 0x03A0   (0x0010)  


	/// Functions
	// Function /DBDUICore/AuricCells/WBP_CoreAuricCells.WBP_CoreAuricCells_C.SetContentVisibility
	// void SetContentVisibility(bool HasBundles);                                                                           // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/AuricCells/WBP_CoreAuricCells.WBP_CoreAuricCells_C.SetTaxIncludedData
	// void SetTaxIncludedData(FString TaxIncludeMessage);                                                                   // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/AuricCells/WBP_CoreAuricCells.WBP_CoreAuricCells_C.SetFirstPurchaseData
	// void SetFirstPurchaseData(FAuricCellsFirstPurchaseViewData FirstPurchaseData);                                        // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/AuricCells/WBP_CoreAuricCells.WBP_CoreAuricCells_C.BndEvt__WBP_CoreAuricCells_BackInputSwitcher_K2Node_ComponentBoundEvent_0_InputSwitcherTriggeredDelegate__DelegateSignature
	// void BndEvt__WBP_CoreAuricCells_BackInputSwitcher_K2Node_ComponentBoundEvent_0_InputSwitcherTriggeredDelegate__DelegateSignature(); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/AuricCells/WBP_CoreAuricCells.WBP_CoreAuricCells_C.SetData
	// void SetData(FAuricCellsViewData& ViewData);                                                                          // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/AuricCells/WBP_CoreAuricCells.WBP_CoreAuricCells_C.ExecuteUbergraph_WBP_CoreAuricCells
	// void ExecuteUbergraph_WBP_CoreAuricCells(int32_t EntryPoint);                                                         // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/AuricCells/WBP_CoreAuricCellsBundle.WBP_CoreAuricCellsBundle_C
/// Size: 0x0008 (0x000370 - 0x000378)
class UWBP_CoreAuricCellsBundle_C : public UCoreAuricCellsBundleWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0370   (0x0008)  


	/// Functions
	// Function /DBDUICore/AuricCells/WBP_CoreAuricCellsBundle.WBP_CoreAuricCellsBundle_C.SetupAsReward
	// void SetupAsReward();                                                                                                 // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/AuricCells/WBP_CoreAuricCellsBundle.WBP_CoreAuricCellsBundle_C.ExecuteUbergraph_WBP_CoreAuricCellsBundle
	// void ExecuteUbergraph_WBP_CoreAuricCellsBundle(int32_t EntryPoint);                                                   // [0x61c32d0] Final                
};

/// Class /DBDUICore/AuricCells/WBP_CoreAuricCellsSpecialOffer.WBP_CoreAuricCellsSpecialOffer_C
/// Size: 0x0008 (0x000390 - 0x000398)
class UWBP_CoreAuricCellsSpecialOffer_C : public UCoreAuricCellsSpecialOfferWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0390   (0x0008)  


	/// Functions
	// Function /DBDUICore/AuricCells/WBP_CoreAuricCellsSpecialOffer.WBP_CoreAuricCellsSpecialOffer_C.OnStartAsyncOperation
	// void OnStartAsyncOperation();                                                                                         // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/AuricCells/WBP_CoreAuricCellsSpecialOffer.WBP_CoreAuricCellsSpecialOffer_C.OnStopAsyncOperation
	// void OnStopAsyncOperation();                                                                                          // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/AuricCells/WBP_CoreAuricCellsSpecialOffer.WBP_CoreAuricCellsSpecialOffer_C.ExecuteUbergraph_WBP_CoreAuricCellsSpecialOffer
	// void ExecuteUbergraph_WBP_CoreAuricCellsSpecialOffer(int32_t EntryPoint);                                             // [0x61c32d0] Final                
};

