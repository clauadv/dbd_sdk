
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: DBDSharedTypes
/// dependency: DBDUIViewInterfaces
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: SlateCore
/// dependency: UMG

/// Enum /Script/DBDUIPresenters.EPresenterPhase
/// Size: 0x03
enum class EPresenterPhase : uint8_t
{
	EPresenterPhase__Initialization                                                  = 0,
	EPresenterPhase__StartPresenting                                                 = 1,
	EPresenterPhase__EPresenterPhase_MAX                                             = 2
};

/// Enum /Script/DBDUIPresenters.EGameLayer
/// Size: 0x08
enum class EGameLayer : uint8_t
{
	EGameLayer__Default                                                              = 0,
	EGameLayer__Overlay                                                              = 1,
	EGameLayer__UMGPopup                                                             = 2,
	EGameLayer__HighOverlay                                                          = 3,
	EGameLayer__Alerts                                                               = 4,
	EGameLayer__Tooltip                                                              = 5,
	EGameLayer__Watermark                                                            = 6,
	EGameLayer__EGameLayer_MAX                                                       = 7
};

/// Class /Script/DBDUIPresenters.UIComponent
/// Size: 0x0000 (0x000030 - 0x000030)
class UUIComponent : public UObject
{ 
public:
};

/// Class /Script/DBDUIPresenters.Presenter
/// Size: 0x00A0 (0x000030 - 0x0000D0)
class UPresenter : public UUIComponent
{ 
public:
	bool                                               _overrideWidgetInstantiationPhase;                          // 0x0030   (0x0001)  
	EPresenterPhase                                    _widgetInstantiationPhase;                                  // 0x0031   (0x0001)  
	bool                                               RequestPresentationAtBeginPlay;                             // 0x0032   (0x0001)  
	ESlateVisibility                                   InitialVisibility;                                          // 0x0033   (0x0001)  
	int32_t                                            _widgetZOrder;                                              // 0x0034   (0x0004)  
	class UUserWidget*                                 _widget;                                                    // 0x0038   (0x0008)  
	class UPresenterParentInfo*                        _parentInfo;                                                // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0048   (0x0010)  MISSED
	SDK_UNDEFINED(80,4555) /* TSet<FString> */         __um(_ignoredPresentationRequirementFunctions);             // 0x0058   (0x0050)  
	TArray<class UPresenterRequirementFunction*>       _presentationRequirementFunctions;                          // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x00B8   (0x0010)  MISSED
	char                                               _filter;                                                    // 0x00C8   (0x0001)  
	char                                               _currencyFilter;                                            // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x00CA   (0x0006)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.Presenter.ShouldPresent
	// bool ShouldPresent();                                                                                                 // [0x49cb900] Final|Native|Private|Const 
	// Function /Script/DBDUIPresenters.Presenter.OnContextUnfocus
	// void OnContextUnfocus(EContext Context);                                                                              // [0x49ca590] Native|Protected     
	// Function /Script/DBDUIPresenters.Presenter.OnContextFocus
	// void OnContextFocus(EContext Context);                                                                                // [0x49ca510] Native|Protected     
	// Function /Script/DBDUIPresenters.Presenter.OnContextChanged
	// void OnContextChanged(EContext Context);                                                                              // [0x49ca490] Native|Protected     
	// Function /Script/DBDUIPresenters.Presenter.IsPlayerStateReady
	// bool IsPlayerStateReady();                                                                                            // [0x49c9f80] Final|Native|Protected|Const 
	// Function /Script/DBDUIPresenters.Presenter.IsGameStateReady
	// bool IsGameStateReady();                                                                                              // [0x49c9f50] Final|Native|Protected|Const 
	// Function /Script/DBDUIPresenters.Presenter.IsContextReady
	// bool IsContextReady();                                                                                                // [0x49c9f20] Final|Native|Protected|Const 
};

/// Class /Script/DBDUIPresenters.HudPresenter
/// Size: 0x0038 (0x0000D0 - 0x000108)
class UHudPresenter : public UPresenter
{ 
public:
	EHudParentContainerType                            HudParentContainer;                                         // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00D1   (0x0007)  MISSED
	class ADBDPlayer*                                  _pendingCharacter;                                          // 0x00D8   (0x0008)  
	class ADBDPlayer*                                  _presentedCharacter;                                        // 0x00E0   (0x0008)  
	class ADBDSpectator*                               _spectatorPawn;                                             // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00F0   (0x0008)  MISSED
	class UHudScreen*                                  _hudScreen;                                                 // 0x00F8   (0x0008)  
	class UCoreHudRootWidget*                          _rootWidget;                                                // 0x0100   (0x0008)  


	/// Functions
	// Function /Script/DBDUIPresenters.HudPresenter.OnPawnUnpossessed
	// void OnPawnUnpossessed(class APawn* Pawn);                                                                            // [0x49c53b0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.HudPresenter.OnPawnPossessed
	// void OnPawnPossessed(class APawn* Pawn);                                                                              // [0x49c5320] Final|Native|Private 
	// Function /Script/DBDUIPresenters.HudPresenter.OnLocallyObservedChanged
	// void OnLocallyObservedChanged();                                                                                      // [0x49c4670] Final|Native|Private 
	// Function /Script/DBDUIPresenters.HudPresenter.IsPendingPawnReady
	// bool IsPendingPawnReady();                                                                                            // [0x49c4640] Final|Native|Private|Const 
	// Function /Script/DBDUIPresenters.HudPresenter.IsHudReady
	// bool IsHudReady();                                                                                                    // [0x49c45e0] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.AimingCrosshairPresenter
/// Size: 0x0028 (0x000108 - 0x000130)
class UAimingCrosshairPresenter : public UHudPresenter
{ 
public:
	class UClass*                                      AimingCrosshairWidgetClass;                                 // 0x0108   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0110   (0x0020)  MISSED
};

/// Class /Script/DBDUIPresenters.BaseAlertPresenter
/// Size: 0x0008 (0x0000D0 - 0x0000D8)
class UBaseAlertPresenter : public UPresenter
{ 
public:
	EContext                                           ObservedContext;                                            // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00D1   (0x0007)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.BaseAlertPresenter.OnContextLeave
	// void OnContextLeave(EContext Context);                                                                                // [0x49be030] Final|Native|Protected 
	// Function /Script/DBDUIPresenters.BaseAlertPresenter.OnContextEnter
	// void OnContextEnter(EContext Context);                                                                                // [0x49bdf30] Final|Native|Protected 
	// Function /Script/DBDUIPresenters.BaseAlertPresenter.IsContextEntered
	// bool IsContextEntered();                                                                                              // [0x49bd7d0] Final|Native|Protected|Const 
};

/// Class /Script/DBDUIPresenters.AlertsPresenter
/// Size: 0x0060 (0x0000D8 - 0x000138)
class UAlertsPresenter : public UBaseAlertPresenter
{ 
public:
	class UClass*                                      AlertsWidgetClass;                                          // 0x00D8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x00E0   (0x0058)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.AlertsPresenter.OnRewardAlertSequenceCompleted
	// void OnRewardAlertSequenceCompleted();                                                                                // [0x49beed0] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.AntiCampSelfUnhookMeterPresenter
/// Size: 0x0028 (0x000108 - 0x000130)
class UAntiCampSelfUnhookMeterPresenter : public UHudPresenter
{ 
public:
	class UClass*                                      AntiCampSelfUnhookMeterWidget;                              // 0x0108   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0110   (0x0020)  MISSED
};

/// Class /Script/DBDUIPresenters.SubPresenter
/// Size: 0x0040 (0x000030 - 0x000070)
class USubPresenter : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0030   (0x0040)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.SubPresenter.OnPresenterStopAsyncOperation
	// void OnPresenterStopAsyncOperation();                                                                                 // [0x48fa1a0] Native|Public        
	// Function /Script/DBDUIPresenters.SubPresenter.OnPresenterStartAsyncOperation
	// void OnPresenterStartAsyncOperation();                                                                                // [0x49cd2b0] Native|Public        
};

/// Class /Script/DBDUIPresenters.ArchiveCompendiumSubPresenter
/// Size: 0x0080 (0x000070 - 0x0000F0)
class UArchiveCompendiumSubPresenter : public USubPresenter
{ 
public:
	SDK_UNDEFINED(16,4556) /* TScriptInterface<Class> */ __um(_archiveCompendiumWidget);                           // 0x0070   (0x0010)  
	unsigned char                                      UnknownData00_6[0x70];                                      // 0x0080   (0x0070)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.ArchiveCompendiumSubPresenter.OnTomeSelected
	// void OnTomeSelected(FString tomeId);                                                                                  // [0x49bf350] Final|Native|Protected 
};

/// Class /Script/DBDUIPresenters.ArchiveQuestMapSubPresenter
/// Size: 0x01F8 (0x000070 - 0x000268)
class UArchiveQuestMapSubPresenter : public USubPresenter
{ 
public:
	unsigned char                                      UnknownData00_2[0x150];                                     // 0x0070   (0x0150)  MISSED
	SDK_UNDEFINED(16,4557) /* TScriptInterface<Class> */ __um(_archiveQuestMapWidget);                             // 0x01C0   (0x0010)  
	SDK_UNDEFINED(16,4558) /* TScriptInterface<Class> */ __um(_archiveLevelProgressionWidget);                     // 0x01D0   (0x0010)  
	unsigned char                                      UnknownData01_5[0x58];                                      // 0x01E0   (0x0058)  MISSED
	TArray<EArchivesStoryLevelStatus>                  _storyLevelStatusCache;                                     // 0x0238   (0x0010)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0248   (0x0020)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.ArchiveQuestMapSubPresenter.UpdateTomeLevels
	// void UpdateTomeLevels();                                                                                              // [0x49bf530] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveQuestMapSubPresenter.OnTomeMapCreated
	// void OnTomeMapCreated();                                                                                              // [0x49bf330] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveQuestMapSubPresenter.OnTomeLevelRewardAnimationDone
	// void OnTomeLevelRewardAnimationDone();                                                                                // [0x49bf310] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveQuestMapSubPresenter.OnQuestNodeUnhovered
	// void OnQuestNodeUnhovered(EPlayerRole Role);                                                                          // [0x49bed90] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveQuestMapSubPresenter.OnQuestNodeHovered
	// void OnQuestNodeHovered(EPlayerRole Role);                                                                            // [0x49bed10] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveQuestMapSubPresenter.OnNodeSelected
	// void OnNodeSelected(FName& NodeId, EPlayerRole Role, FVector2D& position);                                            // [0x49be960] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/DBDUIPresenters.ArchiveQuestMapSubPresenter.OnLevelSelected
	// void OnLevelSelected(int32_t levelIndex);                                                                             // [0x49be360] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveQuestMapSubPresenter.NavigateToNextLevelAfterUnlock
	// void NavigateToNextLevelAfterUnlock();                                                                                // [0x49bd8c0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveQuestMapSubPresenter.GetCurrentLevel
	// void GetCurrentLevel();                                                                                               // [0x49bd7b0] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.ArchiveEditorSubPresenter
/// Size: 0x0028 (0x000268 - 0x000290)
class UArchiveEditorSubPresenter : public UArchiveQuestMapSubPresenter
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0268   (0x0018)  MISSED
	SDK_UNDEFINED(16,4559) /* TScriptInterface<Class> */ __um(_archiveEditorWidget);                               // 0x0280   (0x0010)  


	/// Functions
	// Function /Script/DBDUIPresenters.ArchiveEditorSubPresenter.OnSaveTomeGraph
	// void OnSaveTomeGraph(TArray<FArchiveNodeGraphViewData>& nodeList);                                                    // [0x49bf030] Final|Native|Private|HasOutParms 
};

/// Class /Script/DBDUIPresenters.ArchiveImageViewerPresenter
/// Size: 0x0090 (0x0000D0 - 0x000160)
class UArchiveImageViewerPresenter : public UPresenter
{ 
public:
	class UClass*                                      ArchiveImageViewerWidgetClass;                              // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x88];                                      // 0x00D8   (0x0088)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.ArchiveImageViewerPresenter.OnTextVisibilityChanged
	// void OnTextVisibilityChanged();                                                                                       // [0x49bf2d0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveImageViewerPresenter.OnImageViewerVoiceOverPlayed
	// void OnImageViewerVoiceOverPlayed();                                                                                  // [0x49be300] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveImageViewerPresenter.OnImageViewerVoiceOverAutoplay
	// void OnImageViewerVoiceOverAutoplay(bool autoplay);                                                                   // [0x49be1e0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveImageViewerPresenter.OnBackAction
	// void OnBackAction();                                                                                                  // [0x49bdad0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveImageViewerPresenter.OnArchivesVoiceOverPlayed
	// void OnArchivesVoiceOverPlayed(bool Playing);                                                                         // [0x49bd970] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveImageViewerPresenter.OnArchivesVoiceOverAutoplay
	// void OnArchivesVoiceOverAutoplay(bool autoplay);                                                                      // [0x49bd8e0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveImageViewerPresenter.CanShowFullScreenMode
	// bool CanShowFullScreenMode();                                                                                         // [0x49bd570] Final|Native|Private|Const 
};

/// Class /Script/DBDUIPresenters.ArchiveJournalSubPresenter
/// Size: 0x00D8 (0x000070 - 0x000148)
class UArchiveJournalSubPresenter : public USubPresenter
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0070   (0x0038)  MISSED
	SDK_UNDEFINED(16,4560) /* TScriptInterface<Class> */ __um(_archiveJournalWidget);                              // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x90];                                      // 0x00B8   (0x0090)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.ArchiveJournalSubPresenter.OnVignetteSelected
	// void OnVignetteSelected(FString VignetteId);                                                                          // [0x49bf3f0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveJournalSubPresenter.OnShowImageViewer
	// void OnShowImageViewer();                                                                                             // [0x49bf130] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveJournalSubPresenter.OnPlayCinematic
	// void OnPlayCinematic(int32_t index);                                                                                  // [0x49bea80] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveJournalSubPresenter.OnImageViewerVoiceOverPlayed
	// void OnImageViewerVoiceOverPlayed();                                                                                  // [0x49be320] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveJournalSubPresenter.OnImageViewerVoiceOverAutoplay
	// void OnImageViewerVoiceOverAutoplay(bool autoplay);                                                                   // [0x49be270] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveJournalSubPresenter.OnEntrySelected
	// void OnEntrySelected(int32_t entryIndex);                                                                             // [0x49be130] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveJournalSubPresenter.OnClickPlayButton
	// void OnClickPlayButton(int32_t entryIndex);                                                                           // [0x49bddd0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveJournalSubPresenter.OnAutoplayChanged
	// void OnAutoplayChanged(bool autoplayActive, int32_t entryIndex);                                                      // [0x49bda00] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.ArchiveMenuPresenter
/// Size: 0x00C8 (0x0000D0 - 0x000198)
class UArchiveMenuPresenter : public UPresenter
{ 
public:
	class UClass*                                      ArchiveMenuWidgetClass;                                     // 0x00D0   (0x0008)  
	class UArchiveTomeSubPresenter*                    _archiveTomeSubPresenter;                                   // 0x00D8   (0x0008)  
	class UArchiveRiftSubPresenter*                    _archiveRiftSubPresenter;                                   // 0x00E0   (0x0008)  
	class UArchiveCompendiumSubPresenter*              _archiveCompendiumSubPresenter;                             // 0x00E8   (0x0008)  
	class USubPresenter*                               _activeSubPresenter;                                        // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData00_6[0xA0];                                      // 0x00F8   (0x00A0)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.ArchiveMenuPresenter.OnSlotSelectorClosed
	// void OnSlotSelectorClosed();                                                                                          // [0x49bf1e0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveMenuPresenter.OnShowImageViewer
	// void OnShowImageViewer(bool voiceOverIsPlaying);                                                                      // [0x49bf150] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveMenuPresenter.OnMenuTabSelected
	// void OnMenuTabSelected(EArchiveMenuState menuState, bool alreadySelected);                                            // [0x49be3f0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveMenuPresenter.OnInfoClicked
	// void OnInfoClicked();                                                                                                 // [0x49be340] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveMenuPresenter.OnHideImageViewer
	// void OnHideImageViewer();                                                                                             // [0x49be1c0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveMenuPresenter.OnChallengeReminderSlotSelected
	// void OnChallengeReminderSlotSelected(EPlayerRole Role);                                                               // [0x49bdc90] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveMenuPresenter.OnChallengeReminderClicked
	// void OnChallengeReminderClicked(EPlayerRole Role);                                                                    // [0x49bdc10] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveMenuPresenter.OnBackAction
	// void OnBackAction();                                                                                                  // [0x49bdaf0] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.BasePopupPresenter
/// Size: 0x0040 (0x0000D0 - 0x000110)
class UBasePopupPresenter : public UPresenter
{ 
public:
	EContext                                           ObservedContext;                                            // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00D1   (0x0007)  MISSED
	class UClass*                                      PopupWidgetClass;                                           // 0x00D8   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00E0   (0x0008)  MISSED
	class UBasePopupViewData*                          _viewData;                                                  // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x00F0   (0x0020)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.BasePopupPresenter.OnContextLeave
	// void OnContextLeave(EContext Context);                                                                                // [0x49be0b0] Final|Native|Protected 
	// Function /Script/DBDUIPresenters.BasePopupPresenter.OnContextEnter
	// void OnContextEnter(EContext Context);                                                                                // [0x49bdfb0] Final|Native|Protected 
	// Function /Script/DBDUIPresenters.BasePopupPresenter.IsContextEntered
	// bool IsContextEntered();                                                                                              // [0x49bd800] Final|Native|Protected|Const 
};

/// Class /Script/DBDUIPresenters.GenericPopupPresenter
/// Size: 0x0050 (0x000110 - 0x000160)
class UGenericPopupPresenter : public UBasePopupPresenter
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0110   (0x0050)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.GenericPopupPresenter.OnBack
	// void OnBack();                                                                                                        // [0x49c47c0] Native|Protected     
	// Function /Script/DBDUIPresenters.GenericPopupPresenter.OnAppResumed
	// void OnAppResumed(bool isAppResumed);                                                                                 // [0x49c4710] Final|Native|Protected 
	// Function /Script/DBDUIPresenters.GenericPopupPresenter.OnAction
	// void OnAction(EPopupButtonType popupAction);                                                                          // [0x49c4690] Native|Protected     
};

/// Class /Script/DBDUIPresenters.ArchivePassPurchasePopupPresenter
/// Size: 0x0000 (0x000160 - 0x000160)
class UArchivePassPurchasePopupPresenter : public UGenericPopupPresenter
{ 
public:
};

/// Class /Script/DBDUIPresenters.ArchivePresenterHelper
/// Size: 0x0000 (0x000030 - 0x000030)
class UArchivePresenterHelper : public UObject
{ 
public:
};

/// Class /Script/DBDUIPresenters.ArchiveRiftSubPresenter
/// Size: 0x0128 (0x000070 - 0x000198)
class UArchiveRiftSubPresenter : public USubPresenter
{ 
public:
	unsigned char                                      UnknownData00_2[0x60];                                      // 0x0070   (0x0060)  MISSED
	SDK_UNDEFINED(16,4561) /* TScriptInterface<Class> */ __um(_archiveRiftWidget);                                 // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData01_6[0xB8];                                      // 0x00E0   (0x00B8)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.ArchiveRiftSubPresenter.OnToggleOutfitDisplay
	// void OnToggleOutfitDisplay();                                                                                         // [0x49bf2f0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveRiftSubPresenter.OnRewardItemClicked
	// void OnRewardItemClicked(FName ItemId);                                                                               // [0x49bef70] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveRiftSubPresenter.OnRewardCurrencyClicked
	// void OnRewardCurrencyClicked(ECurrencyType CurrencyType);                                                             // [0x49beef0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveRiftSubPresenter.OnClickPurchaseTiers
	// void OnClickPurchaseTiers();                                                                                          // [0x49bde80] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveRiftSubPresenter.OnClickPurchasePremiumPass
	// void OnClickPurchasePremiumPass();                                                                                    // [0x49bde60] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveRiftSubPresenter.OnBonusTierTooltipShown
	// void OnBonusTierTooltipShown();                                                                                       // [0x49bdb50] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.ArchiveTierPurchasePopupPresenter
/// Size: 0x0060 (0x000160 - 0x0001C0)
class UArchiveTierPurchasePopupPresenter : public UGenericPopupPresenter
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0160   (0x0060)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.ArchiveTierPurchasePopupPresenter.OnConfirmPurchase
	// void OnConfirmPurchase(int32_t tiersToPurchaseNumber);                                                                // [0x49bdea0] Final|Native|Protected 
};

/// Class /Script/DBDUIPresenters.ArchiveTomeSubPresenter
/// Size: 0x0090 (0x000070 - 0x000100)
class UArchiveTomeSubPresenter : public USubPresenter
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0070   (0x0030)  MISSED
	class UArchiveQuestMapSubPresenter*                _archiveQuestMapSubPresenter;                               // 0x00A0   (0x0008)  
	class UArchiveEditorSubPresenter*                  _archiveEditorSubPresenter;                                 // 0x00A8   (0x0008)  
	class UArchiveJournalSubPresenter*                 _archiveJournalSubPresenter;                                // 0x00B0   (0x0008)  
	class USubPresenter*                               _activeSubPresenter;                                        // 0x00B8   (0x0008)  
	SDK_UNDEFINED(16,4562) /* TScriptInterface<Class> */ __um(_archiveTomeWidget);                                 // 0x00C0   (0x0010)  
	class UMaterialInterface*                          _archiveSideNavSkinMaterial;                                // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x00D8   (0x0028)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.ArchiveTomeSubPresenter.OnMenuTabSelected
	// void OnMenuTabSelected(EArchiveTomeMenuState menuState);                                                              // [0x49be4c0] Final|Native|Public  
	// Function /Script/DBDUIPresenters.ArchiveTomeSubPresenter.OnEditorWidgetSwitchComplete
	// void OnEditorWidgetSwitchComplete();                                                                                  // [0x45fe020] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.AuricCellsPresenter
/// Size: 0x0088 (0x0000D0 - 0x000158)
class UAuricCellsPresenter : public UPresenter
{ 
public:
	class UClass*                                      AuricCellsWidgetClass;                                      // 0x00D0   (0x0008)  
	FAuricCellsFirstPurchaseViewData                   _firstPurchaseViewData;                                     // 0x00D8   (0x0058)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0130   (0x0028)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.AuricCellsPresenter.OnPremiumTransactionCompleted
	// void OnPremiumTransactionCompleted(bool success);                                                                     // [0x49beb50] Final|Native|Private 
	// Function /Script/DBDUIPresenters.AuricCellsPresenter.OnBuyAction
	// void OnBuyAction(FName bundleId);                                                                                     // [0x49bdb70] Final|Native|Private 
	// Function /Script/DBDUIPresenters.AuricCellsPresenter.OnBackAction
	// void OnBackAction();                                                                                                  // [0x49bdb10] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.ChallengeTrackerPresenter
/// Size: 0x00A0 (0x000108 - 0x0001A8)
class UChallengeTrackerPresenter : public UHudPresenter
{ 
public:
	class UClass*                                      ChallengeTrackerWidgetClass;                                // 0x0108   (0x0008)  
	float                                              ReadingTimeDelaySec;                                        // 0x0110   (0x0004)  
	unsigned char                                      UnknownData00_6[0x94];                                      // 0x0114   (0x0094)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.ChallengeTrackerPresenter.OnWidgetProgressingDone
	// void OnWidgetProgressingDone();                                                                                       // [0x49bf510] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ChallengeTrackerPresenter.OnWidgetOpeningDone
	// void OnWidgetOpeningDone();                                                                                           // [0x49bf4f0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ChallengeTrackerPresenter.OnWidgetClosingDone
	// void OnWidgetClosingDone();                                                                                           // [0x49bf490] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ChallengeTrackerPresenter.OnReadingTimeDelayDone
	// void OnReadingTimeDelayDone();                                                                                        // [0x49bee10] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ChallengeTrackerPresenter.OnQuestEventRepetitionValueChanged
	// void OnQuestEventRepetitionValueChanged(int32_t value, FString questEventIdTracked);                                  // [0x49bebe0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ChallengeTrackerPresenter.BindToQuestRepetitionEvents
	// void BindToQuestRepetitionEvents();                                                                                   // [0x49bd550] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.CinematicPresenter
/// Size: 0x0090 (0x0000D0 - 0x000160)
class UCinematicPresenter : public UPresenter
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00D0   (0x0008)  MISSED
	class UClass*                                      CinematicWidgetClass;                                       // 0x00D8   (0x0008)  
	unsigned char                                      UnknownData01_5[0x78];                                      // 0x00E0   (0x0078)  MISSED
	SDK_UNDEFINED(8,4563) /* TWeakObjectPtr<USubtitlesManager*> */ __um(_subtitlesManager);                        // 0x0158   (0x0008)  


	/// Functions
	// Function /Script/DBDUIPresenters.CinematicPresenter.OnWidgetFadeOutAnimationDone
	// void OnWidgetFadeOutAnimationDone();                                                                                  // [0x49bf4d0] Final|Native|Public  
	// Function /Script/DBDUIPresenters.CinematicPresenter.OnWidgetFadeInAnimationDone
	// void OnWidgetFadeInAnimationDone();                                                                                   // [0x49bf4b0] Final|Native|Public  
	// Function /Script/DBDUIPresenters.CinematicPresenter.OnSubtitlesUpdated
	// void OnSubtitlesUpdated(TArray<FString>& Subtitles);                                                                  // [0x49bf200] Final|Native|Public|HasOutParms 
	// Function /Script/DBDUIPresenters.CinematicPresenter.OnPlaybackStarted
	// void OnPlaybackStarted();                                                                                             // [0x49beb30] Final|Native|Public  
	// Function /Script/DBDUIPresenters.CinematicPresenter.OnPlaybackDone
	// void OnPlaybackDone();                                                                                                // [0x49beb10] Final|Native|Public  
	// Function /Script/DBDUIPresenters.CinematicPresenter.MuteGameAudio
	// void MuteGameAudio(bool shouldMute);                                                                                  // [0x49bd830] Final|Native|Public  
	// Function /Script/DBDUIPresenters.CinematicPresenter.DBD_StopVideoPlayer
	// void DBD_StopVideoPlayer();                                                                                           // [0x45fe020] Final|Exec|Native|Private 
	// Function /Script/DBDUIPresenters.CinematicPresenter.DBD_ChangeVideoVolume
	// void DBD_ChangeVideoVolume(float Volume);                                                                             // [0x49bd730] Final|Exec|Native|Private 
	// Function /Script/DBDUIPresenters.CinematicPresenter.DBD_ChangeVideoPlaybackMode
	// void DBD_ChangeVideoPlaybackMode(FString Mode);                                                                       // [0x49bd690] Final|Exec|Native|Private 
};

/// Class /Script/DBDUIPresenters.ContextObserver
/// Size: 0x0080 (0x000030 - 0x0000B0)
class UContextObserver : public UUIComponent
{ 
public:
	TArray<EContext>                                   ObservedContexts;                                           // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x70];                                      // 0x0040   (0x0070)  MISSED
};

/// Class /Script/DBDUIPresenters.CreditsPresenter
/// Size: 0x0018 (0x0000D0 - 0x0000E8)
class UCreditsPresenter : public UPresenter
{ 
public:
	class UClass*                                      CreditsScreenWidgetClass;                                   // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00D8   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.CreditsPresenter.OnBackAction
	// void OnBackAction();                                                                                                  // [0x49bdb30] Final|Native|Private 
	// Function /Script/DBDUIPresenters.CreditsPresenter.Credits_ScrollToName
	// void Credits_ScrollToName(FString Name, float Delay);                                                                 // [0x49bd5a0] Final|Exec|Native|Public 
	// Function /Script/DBDUIPresenters.CreditsPresenter.Credits_ScrollToEnd
	// void Credits_ScrollToEnd();                                                                                           // [0x45fe020] Final|Exec|Native|Public 
};

/// Class /Script/DBDUIPresenters.CurrencyConversionPopupPresenter
/// Size: 0x0010 (0x000160 - 0x000170)
class UCurrencyConversionPopupPresenter : public UGenericPopupPresenter
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0160   (0x0010)  MISSED
};

/// Class /Script/DBDUIPresenters.DailyRitualsPopupPresenter
/// Size: 0x0020 (0x000160 - 0x000180)
class UDailyRitualsPopupPresenter : public UGenericPopupPresenter
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0160   (0x0020)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.DailyRitualsPopupPresenter.OnRitualsSyncErrorEvent
	// void OnRitualsSyncErrorEvent();                                                                                       // [0x45fe020] Final|Native|Protected|Const 
	// Function /Script/DBDUIPresenters.DailyRitualsPopupPresenter.OnRitualsFetchedEvent
	// void OnRitualsFetchedEvent();                                                                                         // [0x49bf010] Final|Native|Protected|Const 
	// Function /Script/DBDUIPresenters.DailyRitualsPopupPresenter.OnRemoveRitual
	// void OnRemoveRitual(FString ID);                                                                                      // [0x49bee30] Final|Native|Protected 
	// Function /Script/DBDUIPresenters.DailyRitualsPopupPresenter.OnClaimRitual
	// void OnClaimRitual(FString ID);                                                                                       // [0x49bdd30] Final|Native|Protected 
	// Function /Script/DBDUIPresenters.DailyRitualsPopupPresenter.OnClaimAllRituals
	// void OnClaimAllRituals();                                                                                             // [0x49bdd10] Final|Native|Protected 
};

/// Class /Script/DBDUIPresenters.DirectionalMinigamePresenter
/// Size: 0x0028 (0x000108 - 0x000130)
class UDirectionalMinigamePresenter : public UHudPresenter
{ 
public:
	class UClass*                                      DirectionalMinigameWidgetClass;                             // 0x0108   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0110   (0x0020)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.DirectionalMinigamePresenter.OnMinigameStart
	// void OnMinigameStart(TArray<EDirectionalInputKey> Sequence, int32_t currentIndex);                                    // [0x49be830] Final|Native|Private 
	// Function /Script/DBDUIPresenters.DirectionalMinigamePresenter.OnMinigameInit
	// void OnMinigameInit(FDirectionalMiniGameDefinition miniGameDefinition);                                               // [0x49be720] Final|Native|Private|Const 
	// Function /Script/DBDUIPresenters.DirectionalMinigamePresenter.OnMinigameEnterKey
	// void OnMinigameEnterKey(EDirectionalInputKey enteredKey, int32_t enteredIndex, bool isCorrect, int32_t currentIndex); // [0x49be5c0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.DirectionalMinigamePresenter.OnMinigameEnd
	// void OnMinigameEnd(EDirectionalMinigameResult Result);                                                                // [0x49be540] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.DisplayStandPresenter
/// Size: 0x0068 (0x0000D0 - 0x000138)
class UDisplayStandPresenter : public UPresenter
{ 
public:
	class UClass*                                      CoreDisplayStandWidgetClass;                                // 0x00D0   (0x0008)  
	EContext                                           ObservedContext;                                            // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00D9   (0x0003)  MISSED
	FName                                              DisplayStandName;                                           // 0x00DC   (0x000C)  
	FAnchorData                                        DragZoneLayoutData;                                         // 0x00E8   (0x0028)  
	float                                              DragZonePositionX;                                          // 0x0110   (0x0004)  
	float                                              DragZonePositionY;                                          // 0x0114   (0x0004)  
	float                                              DragZoneSizeX;                                              // 0x0118   (0x0004)  
	float                                              DragZoneSizeY;                                              // 0x011C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0120   (0x0018)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.DisplayStandPresenter.OnDisplayStandRotation
	// void OnDisplayStandRotation(float distance);                                                                          // [0x49c4920] Final|Native|Public  
	// Function /Script/DBDUIPresenters.DisplayStandPresenter.IsContextEntered
	// bool IsContextEntered();                                                                                              // [0x49c45b0] Final|Native|Private|Const 
};

/// Class /Script/DBDUIPresenters.EventEntryRewardsSubPresenter
/// Size: 0x0080 (0x000070 - 0x0000F0)
class UEventEntryRewardsSubPresenter : public USubPresenter
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0070   (0x0030)  MISSED
	SDK_UNDEFINED(16,4564) /* TScriptInterface<Class> */ __um(_tabWidget);                                         // 0x00A0   (0x0010)  
	TArray<class UStoreCustomizationItemViewData*>     _rewardsGridData;                                           // 0x00B0   (0x0010)  
	TArray<class UStoreCustomizationItemViewData*>     _previewAreaRewardsData;                                    // 0x00C0   (0x0010)  
	class UEventEntryPresenter*                        _parentPresenter;                                           // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x00D8   (0x0018)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.EventEntryRewardsSubPresenter.OnRewardGridItemClicked
	// void OnRewardGridItemClicked(int32_t selectedIndex);                                                                  // [0x49c55e0] Final|Native|Protected 
	// Function /Script/DBDUIPresenters.EventEntryRewardsSubPresenter.OnPreviewAreaItemClicked
	// void OnPreviewAreaItemClicked(int32_t selectedIndex);                                                                 // [0x49c5510] Final|Native|Protected 
	// Function /Script/DBDUIPresenters.EventEntryRewardsSubPresenter.OnInstructionButtonClicked
	// void OnInstructionButtonClicked();                                                                                    // [0x49c4e00] Final|Native|Protected 
};

/// Class /Script/DBDUIPresenters.EventEntryCollectionSubPresenter
/// Size: 0x0048 (0x0000F0 - 0x000138)
class UEventEntryCollectionSubPresenter : public UEventEntryRewardsSubPresenter
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x00F0   (0x0048)  MISSED
};

/// Class /Script/DBDUIPresenters.EventEntryDetailsSubPresenter
/// Size: 0x0060 (0x000070 - 0x0000D0)
class UEventEntryDetailsSubPresenter : public USubPresenter
{ 
public:
	SDK_UNDEFINED(16,4565) /* TScriptInterface<Class> */ __um(_detailsTabWidget);                                  // 0x0070   (0x0010)  
	FDetailsTabViewData                                _viewData;                                                  // 0x0080   (0x0048)  
	class UEventEntryPresenter*                        _parentPresenter;                                           // 0x00C8   (0x0008)  
};

/// Class /Script/DBDUIPresenters.EventEntryEventSubPresenter
/// Size: 0x0020 (0x000070 - 0x000090)
class UEventEntryEventSubPresenter : public USubPresenter
{ 
public:
	SDK_UNDEFINED(16,4566) /* TScriptInterface<Class> */ __um(_eventTabWidget);                                    // 0x0070   (0x0010)  
	class UEventTabViewData*                           _tabsData;                                                  // 0x0080   (0x0008)  
	class UEventEntryPresenter*                        _parentPresenter;                                           // 0x0088   (0x0008)  


	/// Functions
	// Function /Script/DBDUIPresenters.EventEntryEventSubPresenter.OnArchiveButtonClicked
	// void OnArchiveButtonClicked();                                                                                        // [0x49c47a0] Final|Native|Protected 
};

/// Class /Script/DBDUIPresenters.EventEntryPresenter
/// Size: 0x00A0 (0x0000D0 - 0x000170)
class UEventEntryPresenter : public UPresenter
{ 
public:
	class UClass*                                      EventEntryWidgetClass;                                      // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x00D8   (0x0018)  MISSED
	class UEventEntryEventSubPresenter*                _eventSubPresenter;                                         // 0x00F0   (0x0008)  
	class UEventEntryDetailsSubPresenter*              _detailsSubPresenter;                                       // 0x00F8   (0x0008)  
	class UEventEntryCollectionSubPresenter*           _collectionSubPresenter;                                    // 0x0100   (0x0008)  
	class UEventEntryStoreSubPresenter*                _storeSubPresenter;                                         // 0x0108   (0x0008)  
	class USubPresenter*                               _activeSubPresenter;                                        // 0x0110   (0x0008)  
	class UEventEntryViewData*                         _viewData;                                                  // 0x0118   (0x0008)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0120   (0x0050)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.EventEntryPresenter.OnSelectedTabChanged
	// void OnSelectedTabChanged(int32_t Key);                                                                               // [0x49c5720] Final|Native|Private 
	// Function /Script/DBDUIPresenters.EventEntryPresenter.OnMilestoneTrackerItemClicked
	// void OnMilestoneTrackerItemClicked(int32_t selectedIndex);                                                            // [0x49c5270] Final|Native|Private 
	// Function /Script/DBDUIPresenters.EventEntryPresenter.OnBackAction
	// void OnBackAction();                                                                                                  // [0x49c47e0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.EventEntryPresenter.GoToStoreButtonClicked
	// void GoToStoreButtonClicked(FName selectedStoreTabItemId);                                                            // [0x49c44f0] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.EventEntryStoreSubPresenter
/// Size: 0x0028 (0x0000F0 - 0x000118)
class UEventEntryStoreSubPresenter : public UEventEntryRewardsSubPresenter
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00F0   (0x0018)  MISSED
	TArray<class UStoreCustomizationItemViewData*>     _storeItems;                                                // 0x0108   (0x0010)  
};

/// Class /Script/DBDUIPresenters.EventObjectiveItemPresenter
/// Size: 0x00C0 (0x000108 - 0x0001C8)
class UEventObjectiveItemPresenter : public UHudPresenter
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0108   (0x0008)  MISSED
	class UClass*                                      DefaultCoreHudEventObjectiveItemWidgetClass;                // 0x0110   (0x0008)  
	SDK_UNDEFINED(80,4567) /* TMap<FName, UClass*> */  __um(CoreHudEventObjectiveItemWidgetClassMapping);          // 0x0118   (0x0050)  
	unsigned char                                      UnknownData01_6[0x60];                                      // 0x0168   (0x0060)  MISSED
};

/// Class /Script/DBDUIPresenters.ExamplePresenter
/// Size: 0x0040 (0x000108 - 0x000148)
class UExamplePresenter : public UHudPresenter
{ 
public:
	class UClass*                                      ExampleWidgetClass;                                         // 0x0108   (0x0008)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0110   (0x0038)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.ExamplePresenter.OnButtonClick
	// void OnButtonClick();                                                                                                 // [0x49c4820] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.ExternalEffectsPresenter
/// Size: 0x0018 (0x000108 - 0x000120)
class UExternalEffectsPresenter : public UHudPresenter
{ 
public:
	class UClass*                                      CoreExternalEffectsWidgetClass;                             // 0x0108   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0110   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.ExternalEffectsPresenter.OnShowExternalEffect
	// void OnShowExternalEffect(FExternalEffectData& Data);                                                                 // [0x49c5860] Final|Native|Protected|HasOutParms 
	// Function /Script/DBDUIPresenters.ExternalEffectsPresenter.OnHideExternalEffect
	// void OnHideExternalEffect(FName ItemId, EExternalEffectSource ExternalEffectSource);                                  // [0x49c4d10] Final|Native|Protected 
};

/// Class /Script/DBDUIPresenters.FearMarketPopupPresenter
/// Size: 0x0000 (0x000160 - 0x000160)
class UFearMarketPopupPresenter : public UGenericPopupPresenter
{ 
public:
};

/// Class /Script/DBDUIPresenters.FocusHandler
/// Size: 0x0018 (0x000030 - 0x000048)
class UFocusHandler : public UUIComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0030   (0x0018)  MISSED
};

/// Class /Script/DBDUIPresenters.GenericTextInputPopupPresenter
/// Size: 0x0070 (0x000160 - 0x0001D0)
class UGenericTextInputPopupPresenter : public UGenericPopupPresenter
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0160   (0x0070)  MISSED
};

/// Class /Script/DBDUIPresenters.FriendSearchPopupPresenter
/// Size: 0x0050 (0x0001D0 - 0x000220)
class UFriendSearchPopupPresenter : public UGenericTextInputPopupPresenter
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x01D0   (0x0050)  MISSED
};

/// Class /Script/DBDUIPresenters.GameManualSubPresenter
/// Size: 0x0010 (0x000070 - 0x000080)
class UGameManualSubPresenter : public USubPresenter
{ 
public:
	SDK_UNDEFINED(16,4568) /* TScriptInterface<Class> */ __um(_gameManualWidget);                                  // 0x0070   (0x0010)  


	/// Functions
	// Function /Script/DBDUIPresenters.GameManualSubPresenter.OnCategoryCategoryEntered
	// void OnCategoryCategoryEntered(EHelpType categoryType);                                                               // [0x49c4840] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.GenericRefreshingPopupPresenter
/// Size: 0x0020 (0x000160 - 0x000180)
class UGenericRefreshingPopupPresenter : public UGenericPopupPresenter
{ 
public:
	float                                              DefaultRefreshingIntervalsTime;                             // 0x0160   (0x0004)  
	float                                              DefaultTimeoutTime;                                         // 0x0164   (0x0004)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0168   (0x0018)  MISSED
};

/// Class /Script/DBDUIPresenters.GlobalLoadingSpinnerPresenter
/// Size: 0x0018 (0x0000D0 - 0x0000E8)
class UGlobalLoadingSpinnerPresenter : public UPresenter
{ 
public:
	class UClass*                                      GlobalLoadSpinnerWidgetClass;                               // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00D8   (0x0010)  MISSED
};

/// Class /Script/DBDUIPresenters.PresenterParentInfo
/// Size: 0x0008 (0x000030 - 0x000038)
class UPresenterParentInfo : public UObject
{ 
public:
	class UClass*                                      ParentClass;                                                // 0x0030   (0x0008)  
};

/// Class /Script/DBDUIPresenters.GridPresenterParentInfo
/// Size: 0x0028 (0x000038 - 0x000060)
class UGridPresenterParentInfo : public UPresenterParentInfo
{ 
public:
	SDK_UNDEFINED(1,4569) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0038   (0x0001)  
	SDK_UNDEFINED(1,4570) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x003A   (0x0002)  MISSED
	FMargin                                            Padding;                                                    // 0x003C   (0x0010)  
	FVector2D                                          Nudge;                                                      // 0x004C   (0x0008)  
	uint32_t                                           row;                                                        // 0x0054   (0x0004)  
	uint32_t                                           Column;                                                     // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Class /Script/DBDUIPresenters.PresenterParentWidget
/// Size: 0x0000 (0x000298 - 0x000298)
class UPresenterParentWidget : public UUserWidget
{ 
public:
};

/// Class /Script/DBDUIPresenters.GridPresenterParentWidget
/// Size: 0x0008 (0x000298 - 0x0002A0)
class UGridPresenterParentWidget : public UPresenterParentWidget
{ 
public:
	class UGridPanel*                                  Container;                                                  // 0x0298   (0x0008)  
};

/// Class /Script/DBDUIPresenters.HudEndGameScenarioPresenter
/// Size: 0x0040 (0x000108 - 0x000148)
class UHudEndGameScenarioPresenter : public UHudPresenter
{ 
public:
	class UClass*                                      EndGameCollapseBarWidgetClass;                              // 0x0108   (0x0008)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0110   (0x0038)  MISSED
};

/// Class /Script/DBDUIPresenters.HudEventProgressionPresenter
/// Size: 0x0040 (0x000108 - 0x000148)
class UHudEventProgressionPresenter : public UHudPresenter
{ 
public:
	class UClass*                                      CoreHudEventProgressionWidgetClass;                         // 0x0108   (0x0008)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0110   (0x0038)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.HudEventProgressionPresenter.OnEventProgressionDataInitialized
	// void OnEventProgressionDataInitialized(FHudEventProgression2023ViewData& EventProgressionData);                       // [0x49c4be0] Final|Native|Private|HasOutParms 
	// Function /Script/DBDUIPresenters.HudEventProgressionPresenter.OnEventProgressChanged
	// void OnEventProgressChanged(int32_t value);                                                                           // [0x49c4b50] Final|Native|Private 
	// Function /Script/DBDUIPresenters.HudEventProgressionPresenter.OnEventIsChannelingHauntChanged
	// void OnEventIsChannelingHauntChanged(bool value);                                                                     // [0x49c4ac0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.HudEventProgressionPresenter.OnEventInVoidZoneChanged
	// void OnEventInVoidZoneChanged(bool value);                                                                            // [0x49c4a30] Final|Native|Private 
	// Function /Script/DBDUIPresenters.HudEventProgressionPresenter.OnEventHauntTargetChanged
	// void OnEventHauntTargetChanged(int32_t value);                                                                        // [0x49c49a0] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.HudMatchResultPresenter
/// Size: 0x0018 (0x000108 - 0x000120)
class UHudMatchResultPresenter : public UHudPresenter
{ 
public:
	class UClass*                                      MatchResultWidgetClass;                                     // 0x0108   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0110   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.HudMatchResultPresenter.StartEndGameSequence
	// void StartEndGameSequence();                                                                                          // [0x49c5bc0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.HudMatchResultPresenter.ShowEndSequence
	// void ShowEndSequence(float Duration, bool IsSlasher, int32_t matchResult);                                            // [0x49c5aa0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.HudMatchResultPresenter.OnMatchResultFadeOutCompleted
	// void OnMatchResultFadeOutCompleted();                                                                                 // [0x49c5150] Final|Native|Private 
	// Function /Script/DBDUIPresenters.HudMatchResultPresenter.NotifyInParadiseOrEscaped
	// void NotifyInParadiseOrEscaped();                                                                                     // [0x49c4670] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.HudObjectivesPresenter
/// Size: 0x0058 (0x000108 - 0x000160)
class UHudObjectivesPresenter : public UHudPresenter
{ 
public:
	class UClass*                                      CoreHudObjectivesWidgetClass;                               // 0x0108   (0x0008)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0110   (0x0050)  MISSED
};

/// Class /Script/DBDUIPresenters.HudPeekingPromptsPresenter
/// Size: 0x0030 (0x000108 - 0x000138)
class UHudPeekingPromptsPresenter : public UHudPresenter
{ 
public:
	class UClass*                                      LeaningArrowsWidgetClass;                                   // 0x0108   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0110   (0x0028)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.HudPeekingPromptsPresenter.UpdatePeekingState
	// void UpdatePeekingState(ELeanState potentialLeanState);                                                               // [0x49c5be0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.HudPeekingPromptsPresenter.HandleBestPlayerInteractionsChanged
	// void HandleBestPlayerInteractionsChanged();                                                                           // [0x49c4590] Final|Native|Private 
	// Function /Script/DBDUIPresenters.HudPeekingPromptsPresenter.CanPlayerLean
	// bool CanPlayerLean();                                                                                                 // [0x49c44c0] Final|Native|Private|Const 
};

/// Class /Script/DBDUIPresenters.HudSpectatePresenter
/// Size: 0x0050 (0x000108 - 0x000158)
class UHudSpectatePresenter : public UHudPresenter
{ 
public:
	class UClass*                                      CoreSpectateBarWidget;                                      // 0x0108   (0x0008)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x0110   (0x0048)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.HudSpectatePresenter.OnPreviousPlayerTriggered
	// void OnPreviousPlayerTriggered();                                                                                     // [0x49c55a0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.HudSpectatePresenter.OnPlayerGameStateChanged
	// void OnPlayerGameStateChanged(class ADBDPlayerState* DBDPlayerState, EGameState newGameState);                        // [0x49c5440] Final|Native|Private 
	// Function /Script/DBDUIPresenters.HudSpectatePresenter.OnNextPlayerTriggered
	// void OnNextPlayerTriggered();                                                                                         // [0x49c5300] Final|Native|Private 
	// Function /Script/DBDUIPresenters.HudSpectatePresenter.OnLeaveTriggered
	// void OnLeaveTriggered();                                                                                              // [0x49c4e20] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.HudTutorialObjectivesPresenter
/// Size: 0x0070 (0x000108 - 0x000178)
class UHudTutorialObjectivesPresenter : public UHudPresenter
{ 
public:
	class UClass*                                      TutorialObjectivesWidgetClass;                              // 0x0108   (0x0008)  
	unsigned char                                      UnknownData00_6[0x68];                                      // 0x0110   (0x0068)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.HudTutorialObjectivesPresenter.IsInTutorial
	// bool IsInTutorial();                                                                                                  // [0x49c4610] Final|Native|Private|Const 
};

/// Class /Script/DBDUIPresenters.LightSensitivityPresenter
/// Size: 0x0028 (0x0000D0 - 0x0000F8)
class ULightSensitivityPresenter : public UPresenter
{ 
public:
	class UClass*                                      LightSensitivityScreenWidgetClass;                          // 0x00D0   (0x0008)  
	float                                              AutoCompleteTime;                                           // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x1C];                                      // 0x00DC   (0x001C)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.LightSensitivityPresenter.OnContinue
	// void OnContinue();                                                                                                    // [0x49c48e0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.LightSensitivityPresenter.OnCompletedFadeOut
	// void OnCompletedFadeOut();                                                                                            // [0x49c48c0] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.LoadoutMenuPopupPresenter
/// Size: 0x0040 (0x000160 - 0x0001A0)
class ULoadoutMenuPopupPresenter : public UGenericPopupPresenter
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0160   (0x0010)  MISSED
	TArray<class ULoadoutMenuPopupViewData*>           _loadoutPopupSlotData;                                      // 0x0170   (0x0010)  
	TArray<class ULoadoutMenuPopupViewData*>           _loadoutPopupInventoryData;                                 // 0x0180   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0190   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.LoadoutMenuPopupPresenter.SetLoadoutPopupViewData
	// class ULoadoutMenuPopupViewData* SetLoadoutPopupViewData(FInventorySlotData& SlotData, EPlayerRole playerRole);       // [0x49c5910] Final|Native|Private|HasOutParms 
	// Function /Script/DBDUIPresenters.LoadoutMenuPopupPresenter.OnSelectedCharacterChanged
	// void OnSelectedCharacterChanged(int32_t SelectedCharacterIndex);                                                      // [0x49c5690] Final|Native|Private 
	// Function /Script/DBDUIPresenters.LoadoutMenuPopupPresenter.OnLoadoutMenuSlotIsSelected
	// void OnLoadoutMenuSlotIsSelected(ELoadoutSlot slotSelected);                                                          // [0x49c50d0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.LoadoutMenuPopupPresenter.OnLoadoutMenuPresetSelected
	// void OnLoadoutMenuPresetSelected(int32_t presetId, ELoadoutSlot slotSelected);                                        // [0x49c5000] Final|Native|Private 
	// Function /Script/DBDUIPresenters.LoadoutMenuPopupPresenter.OnLoadoutMenuPresetClicked
	// void OnLoadoutMenuPresetClicked(int32_t presetId, ELoadoutSlot slotSelected);                                         // [0x49c4f30] Final|Native|Private 
	// Function /Script/DBDUIPresenters.LoadoutMenuPopupPresenter.OnLoadoutMenuInventorySlotClick
	// void OnLoadoutMenuInventorySlotClick(ELoadoutSlot itemIndex, FName ItemId);                                           // [0x49c4e40] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.NewActiveTomePopupPresenter
/// Size: 0x0020 (0x000160 - 0x000180)
class UNewActiveTomePopupPresenter : public UGenericPopupPresenter
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0160   (0x0020)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.NewActiveTomePopupPresenter.OnRiftButtonClicked
	// void OnRiftButtonClicked();                                                                                           // [0x49c5670] Final|Native|Private 
	// Function /Script/DBDUIPresenters.NewActiveTomePopupPresenter.OnCurrentTomeButtonClicked
	// void OnCurrentTomeButtonClicked();                                                                                    // [0x49c4900] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.OnboardingMenuPresenter
/// Size: 0x0038 (0x0000D0 - 0x000108)
class UOnboardingMenuPresenter : public UPresenter
{ 
public:
	class UClass*                                      OnboardingMenuWidgetClass;                                  // 0x00D0   (0x0008)  
	class UOnboardingTutorialSubPresenter*             _onboardingTutorialSubPresenter;                            // 0x00D8   (0x0008)  
	class UGameManualSubPresenter*                     _gameManualSubPresenter;                                    // 0x00E0   (0x0008)  
	class USubPresenter*                               _activeSubPresenter;                                        // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00F0   (0x0018)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.OnboardingMenuPresenter.OnSetUIEnabled
	// void OnSetUIEnabled(bool Enabled);                                                                                    // [0x49c57b0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.OnboardingMenuPresenter.OnSettingsAction
	// void OnSettingsAction();                                                                                              // [0x49c5840] Final|Native|Private 
	// Function /Script/DBDUIPresenters.OnboardingMenuPresenter.OnQuitGameAction
	// void OnQuitGameAction();                                                                                              // [0x49c55c0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.OnboardingMenuPresenter.OnMenuTabSelectedAgain
	// void OnMenuTabSelectedAgain(EOnboardingMenuState menuState);                                                          // [0x49c51f0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.OnboardingMenuPresenter.OnMenuTabSelected
	// void OnMenuTabSelected(EOnboardingMenuState menuState);                                                               // [0x49c5170] Final|Native|Private 
	// Function /Script/DBDUIPresenters.OnboardingMenuPresenter.OnFirstOnboardingStepsDone
	// void OnFirstOnboardingStepsDone(bool isFirstStepsDone);                                                               // [0x49c4c80] Final|Native|Private 
	// Function /Script/DBDUIPresenters.OnboardingMenuPresenter.OnChangeAccountAction
	// void OnChangeAccountAction();                                                                                         // [0x45fe020] Final|Native|Private 
	// Function /Script/DBDUIPresenters.OnboardingMenuPresenter.OnBackAction
	// void OnBackAction();                                                                                                  // [0x49c4800] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.OnboardingTutorialSubPresenter
/// Size: 0x0060 (0x000070 - 0x0000D0)
class UOnboardingTutorialSubPresenter : public USubPresenter
{ 
public:
	SDK_UNDEFINED(16,4571) /* TScriptInterface<Class> */ __um(_onboardingTutorialWidget);                          // 0x0070   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0080   (0x0050)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.OnboardingTutorialSubPresenter.OnSelectTutorial
	// void OnSelectTutorial(FString stepId, FString tutorialId);                                                            // [0x49cb2a0] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.PawnObserver
/// Size: 0x0040 (0x000030 - 0x000070)
class UPawnObserver : public UUIComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0030   (0x0040)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.PawnObserver.OnPawnControllerSet
	// void OnPawnControllerSet(class APawn* Pawn, class AController* OldController, class AController* NewController);      // [0x49caf00] Final|Native|Private 
	// Function /Script/DBDUIPresenters.PawnObserver.OnLocallyObservedChanged
	// void OnLocallyObservedChanged();                                                                                      // [0x49cad80] Final|Native|Public  
};

/// Class /Script/DBDUIPresenters.PingStatusPresenter
/// Size: 0x0038 (0x000108 - 0x000140)
class UPingStatusPresenter : public UHudPresenter
{ 
public:
	class UClass*                                      PingStatusWidgetClass;                                      // 0x0108   (0x0008)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0110   (0x0030)  MISSED
};

/// Class /Script/DBDUIPresenters.PlayerProfilePresenter
/// Size: 0x0028 (0x0000D0 - 0x0000F8)
class UPlayerProfilePresenter : public UPresenter
{ 
public:
	class UClass*                                      CorePlayerProfileWidgetClass;                               // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x00D8   (0x0020)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.PlayerProfilePresenter.UnfocusPlayerProfile
	// void UnfocusPlayerProfile();                                                                                          // [0x49cb950] Final|Native|Private 
	// Function /Script/DBDUIPresenters.PlayerProfilePresenter.ShowPlayerProfile
	// void ShowPlayerProfile();                                                                                             // [0x49cb930] Final|Native|Private 
	// Function /Script/DBDUIPresenters.PlayerProfilePresenter.SetSpecialEventCurrency
	// void SetSpecialEventCurrency(ECurrencyType specialEventCurrencyType);                                                 // [0x49cb880] Final|Native|Private 
	// Function /Script/DBDUIPresenters.PlayerProfilePresenter.RefreshWallet
	// void RefreshWallet();                                                                                                 // [0x49cb7e0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.PlayerProfilePresenter.RefreshPlayerCard
	// void RefreshPlayerCard();                                                                                             // [0x49cb7c0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.PlayerProfilePresenter.OnWalletUpdated
	// void OnWalletUpdated(TArray<FShopWalletUpdate>& walletUpdates);                                                       // [0x49cb6d0] Final|Native|Private|HasOutParms 
	// Function /Script/DBDUIPresenters.PlayerProfilePresenter.OnUpdatePlayerProfileFilter
	// void OnUpdatePlayerProfileFilter(char Filter);                                                                        // [0x49cb630] Final|Native|Private 
	// Function /Script/DBDUIPresenters.PlayerProfilePresenter.OnUpdatePlayerProfileCurrencyFilter
	// void OnUpdatePlayerProfileCurrencyFilter(char currencyFilter);                                                        // [0x49cb5b0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.PlayerProfilePresenter.OnResetPlayerProfileFilter
	// void OnResetPlayerProfileFilter();                                                                                    // [0x49cb1f0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.PlayerProfilePresenter.OnResetPlayerProfileCurrencyFilter
	// void OnResetPlayerProfileCurrencyFilter();                                                                            // [0x49cb1d0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.PlayerProfilePresenter.OnPlayerProfileCurrencyClicked
	// void OnPlayerProfileCurrencyClicked(ECurrencyType CurrencyType);                                                      // [0x49cb030] Final|Native|Private 
	// Function /Script/DBDUIPresenters.PlayerProfilePresenter.OnPlayerProfileClicked
	// void OnPlayerProfileClicked();                                                                                        // [0x49cb010] Final|Native|Private 
	// Function /Script/DBDUIPresenters.PlayerProfilePresenter.OnCurrentSpecialEventChanged
	// void OnCurrentSpecialEventChanged(FCombinedSpecialEventData& previousSpecialEvent, ESpecialEventStatus previousSpecialEventStatus, FCombinedSpecialEventData& currentSpecialEvent, ESpecialEventStatus currentSpecialEventStatus); // [0x49ca610] Final|Native|Private|HasOutParms 
	// Function /Script/DBDUIPresenters.PlayerProfilePresenter.HidePlayerProfile
	// void HidePlayerProfile();                                                                                             // [0x49c9f00] Final|Native|Private 
	// Function /Script/DBDUIPresenters.PlayerProfilePresenter.GetPlayerName
	// FText GetPlayerName();                                                                                                // [0x49c9e60] Final|Native|Private 
	// Function /Script/DBDUIPresenters.PlayerProfilePresenter.FocusPlayerProfile
	// void FocusPlayerProfile(char Filter, char currencyFilter);                                                            // [0x49c9d90] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.PresenterGroup
/// Size: 0x0028 (0x000030 - 0x000058)
class UPresenterGroup : public UUIComponent
{ 
public:
	EPresenterPhase                                    WidgetInstantiationPhase;                                   // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	TArray<class UUIComponent*>                        _components;                                                // 0x0038   (0x0010)  
	TArray<class UPresenter*>                          _presenters;                                                // 0x0048   (0x0010)  
};

/// Class /Script/DBDUIPresenters.PresenterManager
/// Size: 0x0040 (0x000038 - 0x000078)
class UPresenterManager : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0038   (0x0008)  MISSED
	TArray<class UPresenterGroup*>                     _persistentPresenterGroups;                                 // 0x0040   (0x0010)  
	TArray<class UPresenterGroup*>                     _transientPresenterGroups;                                  // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0060   (0x0018)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.PresenterManager.OnViewportCreated
	// void OnViewportCreated();                                                                                             // [0x49cb6b0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.PresenterManager.OnPlayerStateChanged
	// void OnPlayerStateChanged(class APlayerState* PlayerState);                                                           // [0x49cb0b0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.PresenterManager.OnLoadingTransition
	// void OnLoadingTransition(ELoadingTransitionType TransitionType);                                                      // [0x49cad00] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.PresenterRequirementFunction
/// Size: 0x0020 (0x000030 - 0x000050)
class UPresenterRequirementFunction : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0030   (0x0020)  MISSED
};

/// Class /Script/DBDUIPresenters.ProcessingPopupPresenter
/// Size: 0x0010 (0x000110 - 0x000120)
class UProcessingPopupPresenter : public UBasePopupPresenter
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0110   (0x0010)  MISSED
};

/// Class /Script/DBDUIPresenters.ProfileMenuCustomizationSubPresenter
/// Size: 0x0038 (0x000070 - 0x0000A8)
class UProfileMenuCustomizationSubPresenter : public USubPresenter
{ 
public:
	SDK_UNDEFINED(16,4572) /* TScriptInterface<Class> */ __um(_profileMenuCustomizationWidget);                    // 0x0070   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0080   (0x0028)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.ProfileMenuCustomizationSubPresenter.OnRewardGridItemClicked
	// void OnRewardGridItemClicked(int32_t selectedIndex);                                                                  // [0x49cb210] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ProfileMenuCustomizationSubPresenter.OnEquipButtonClicked
	// void OnEquipButtonClicked();                                                                                          // [0x49cace0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ProfileMenuCustomizationSubPresenter.OnCustomizationSortingChanged
	// void OnCustomizationSortingChanged(EItemSorting itemSorting);                                                         // [0x49caa20] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.ProfileMenuPresenter
/// Size: 0x0038 (0x0000D0 - 0x000108)
class UProfileMenuPresenter : public UPresenter
{ 
public:
	class UClass*                                      ProfileMenuWidgetClass;                                     // 0x00D0   (0x0008)  
	class UProfileMenuStatsSubPresenter*               _statsSubPresenter;                                         // 0x00D8   (0x0008)  
	class UProfileMenuCustomizationSubPresenter*       _badgeSubPresenter;                                         // 0x00E0   (0x0008)  
	class UProfileMenuCustomizationSubPresenter*       _bannerSubPresenter;                                        // 0x00E8   (0x0008)  
	class USubPresenter*                               _activeSubPresenter;                                        // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00F8   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.ProfileMenuPresenter.SetMenuState
	// void SetMenuState(EProfileMenuState menuState);                                                                       // [0x49cb800] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ProfileMenuPresenter.OnSettingsButtonClicked
	// void OnSettingsButtonClicked();                                                                                       // [0x45fe020] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ProfileMenuPresenter.OnBackButtonClicked
	// void OnBackButtonClicked();                                                                                           // [0x49ca120] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.ProfileMenuStatsSubPresenter
/// Size: 0x0018 (0x000070 - 0x000088)
class UProfileMenuStatsSubPresenter : public USubPresenter
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0070   (0x0008)  MISSED
	SDK_UNDEFINED(16,4573) /* TScriptInterface<Class> */ __um(_profileMenuStatsWidget);                            // 0x0078   (0x0010)  
};

/// Class /Script/DBDUIPresenters.ProgressionSystemInfoPopupPresenter
/// Size: 0x0010 (0x000160 - 0x000170)
class UProgressionSystemInfoPopupPresenter : public UGenericPopupPresenter
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0160   (0x0010)  MISSED
};

/// Class /Script/DBDUIPresenters.ReportFeedbackPopupPresenter
/// Size: 0x0010 (0x000160 - 0x000170)
class UReportFeedbackPopupPresenter : public UGenericPopupPresenter
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0160   (0x0010)  MISSED
};

/// Class /Script/DBDUIPresenters.RewardPopupPresenter
/// Size: 0x0000 (0x000160 - 0x000160)
class URewardPopupPresenter : public UGenericPopupPresenter
{ 
public:
};

/// Class /Script/DBDUIPresenters.RootContainer
/// Size: 0x0070 (0x000030 - 0x0000A0)
class URootContainer : public UUIComponent
{ 
public:
	EGameLayer                                         GameLayer;                                                  // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              UnfocusedOpacity;                                           // 0x0034   (0x0004)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0038   (0x0010)  MISSED
	SDK_UNDEFINED(80,4574) /* TMap<UClass*, UPresenterParentWidget*> */ __um(_presenterParentWidgets);             // 0x0048   (0x0050)  
	class UUserWidget*                                 _rootWidget;                                                // 0x0098   (0x0008)  
};

/// Class /Script/DBDUIPresenters.RootWidget
/// Size: 0x0008 (0x000298 - 0x0002A0)
class URootWidget : public UUserWidget
{ 
public:
	class UCanvasPanel*                                _canvasPanel;                                               // 0x0298   (0x0008)  
};

/// Class /Script/DBDUIPresenters.SeasonEndRankRewardsPopupPresenter
/// Size: 0x0010 (0x000160 - 0x000170)
class USeasonEndRankRewardsPopupPresenter : public UGenericPopupPresenter
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0160   (0x0010)  MISSED
};

/// Class /Script/DBDUIPresenters.SkillCheckPresenter
/// Size: 0x0030 (0x000108 - 0x000138)
class USkillCheckPresenter : public UHudPresenter
{ 
public:
	class UClass*                                      SkillCheckWidgetClass;                                      // 0x0108   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0110   (0x0028)  MISSED
};

/// Class /Script/DBDUIPresenters.StoreSubPresenter
/// Size: 0x0020 (0x000070 - 0x000090)
class UStoreSubPresenter : public USubPresenter
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0070   (0x0010)  MISSED
	class Ushopmanager*                                _shopManager;                                               // 0x0080   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0088   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.StoreSubPresenter.OnSubTabSelected
	// void OnSubTabSelected(int32_t subTabId);                                                                              // [0x49cd2d0] Native|Protected     
};

/// Class /Script/DBDUIPresenters.StoreCharactersSubPresenter
/// Size: 0x01F8 (0x000090 - 0x000288)
class UStoreCharactersSubPresenter : public UStoreSubPresenter
{ 
public:
	class UClass*                                      StoreCharactersWidgetClass;                                 // 0x0090   (0x0008)  
	FName                                              DisplayStandName;                                           // 0x0098   (0x000C)  
	float                                              CameraTransitionDurationSeconds;                            // 0x00A4   (0x0004)  
	unsigned char                                      UnknownData00_5[0xE0];                                      // 0x00A8   (0x00E0)  MISSED
	TArray<class UStoreCharacterItemViewData*>         _availableCharacters;                                       // 0x0188   (0x0010)  
	class UStoreCharacterItemViewData*                 _selectedCharacter;                                         // 0x0198   (0x0008)  
	TArray<class UStoreCustomizationItemViewData*>     _availableCustomizations;                                   // 0x01A0   (0x0010)  
	TArray<class UStoreCustomizationItemViewData*>     _filteredCustomizations;                                    // 0x01B0   (0x0010)  
	TArray<FStoreCategoryViewData>                     _availableCategories;                                       // 0x01C0   (0x0010)  
	FStoreCharactersFiltersData                        _charactersFilterData;                                      // 0x01D0   (0x0058)  
	FStoreCharactersFiltersData                        _customizationsFilterData;                                  // 0x0228   (0x0058)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0280   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.StoreCharactersSubPresenter.OnDisplayStandPawnLoaded
	// void OnDisplayStandPawnLoaded(int32_t characterIndex);                                                                // [0x49cac50] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreCharactersSubPresenter.OnCustomizationsFiltersChanged
	// void OnCustomizationsFiltersChanged(FStoreCharactersFiltersData customizationsFilterData);                            // [0x49caac0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreCharactersSubPresenter.OnCustomizationSelected
	// void OnCustomizationSelected(FName CustomizationId, bool IsSelected);                                                 // [0x49ca930] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreCharactersSubPresenter.OnCustomizationsClearFiltersClicked
	// void OnCustomizationsClearFiltersClicked();                                                                           // [0x49caaa0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreCharactersSubPresenter.OnCharactersFiltersChanged
	// void OnCharactersFiltersChanged(FStoreCharactersFiltersData charactersFilterData);                                    // [0x49ca300] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreCharactersSubPresenter.OnCharacterSelected
	// void OnCharacterSelected(int32_t characterIndex);                                                                     // [0x49ca250] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreCharactersSubPresenter.OnCharactersClearFiltersClicked
	// void OnCharactersClearFiltersClicked();                                                                               // [0x49ca2e0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreCharactersSubPresenter.OnCategorySelected
	// void OnCategorySelected(ECustomizationCategory category);                                                             // [0x49ca1d0] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.StoreCollectionsSubPresenter
/// Size: 0x0070 (0x000090 - 0x000100)
class UStoreCollectionsSubPresenter : public UStoreSubPresenter
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0090   (0x0040)  MISSED
	TArray<class UStoreCollectionViewData*>            _specialCollectionsViewData;                                // 0x00D0   (0x0010)  
	TArray<class UStoreCollectionViewData*>            _featuredCollectionsViewData;                               // 0x00E0   (0x0010)  
	TArray<class UStoreCollectionViewData*>            _allCollectionsViewData;                                    // 0x00F0   (0x0010)  
};

/// Class /Script/DBDUIPresenters.StoreFeaturedSubPresenter
/// Size: 0x0010 (0x000090 - 0x0000A0)
class UStoreFeaturedSubPresenter : public UStoreSubPresenter
{ 
public:
	SDK_UNDEFINED(16,4575) /* TScriptInterface<Class> */ __um(_storeFeaturedWidget);                               // 0x0090   (0x0010)  


	/// Functions
	// Function /Script/DBDUIPresenters.StoreFeaturedSubPresenter.OnBackendStoreDataReceived
	// void OnBackendStoreDataReceived(bool success);                                                                        // [0x49ca140] Native|Public        
};

/// Class /Script/DBDUIPresenters.StoreMenuPresenter
/// Size: 0x0080 (0x0000D0 - 0x000150)
class UStoreMenuPresenter : public UPresenter
{ 
public:
	class UClass*                                      StoreMenuWidgetClass;                                       // 0x00D0   (0x0008)  
	FName                                              DisplayStandName;                                           // 0x00D8   (0x000C)  
	float                                              InStoreCameraTransitionDurationSeconds;                     // 0x00E4   (0x0004)  
	class UStoreFeaturedSubPresenter*                  _storeFeaturedSubPresenter;                                 // 0x00E8   (0x0008)  
	class UStoreSpecialsSubPresenter*                  _storeSpecialsSubPresenter;                                 // 0x00F0   (0x0008)  
	class UStoreCollectionsSubPresenter*               _storeCollectionsSubPresenter;                              // 0x00F8   (0x0008)  
	class UStoreSpecialPacksSubPresenter*              _storeSpecialPacksSubPresenter;                             // 0x0100   (0x0008)  
	class UStoreCharactersSubPresenter*                _storeCharactersSubPresenter;                               // 0x0108   (0x0008)  
	class UStoreSubPresenter*                          _activeSubPresenter;                                        // 0x0110   (0x0008)  
	class Ushopmanager*                                _shopManager;                                               // 0x0118   (0x0008)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0120   (0x0030)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.StoreMenuPresenter.OpenRedeemCodePopup
	// void OpenRedeemCodePopup();                                                                                           // [0x49cb7a0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreMenuPresenter.OpenAuricCellsOverlay
	// void OpenAuricCellsOverlay();                                                                                         // [0x49ca0e0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreMenuPresenter.OnStopSubPresenterAsyncOperation
	// void OnStopSubPresenterAsyncOperation(class USubPresenter* SubPresenter);                                             // [0x49cb520] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreMenuPresenter.OnStartSubPresenterAsyncOperation
	// void OnStartSubPresenterAsyncOperation(class USubPresenter* SubPresenter);                                            // [0x49cb490] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreMenuPresenter.OnMoveToCharactersPageRequested
	// void OnMoveToCharactersPageRequested(int32_t characterIndex);                                                         // [0x49cae70] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreMenuPresenter.OnMenuTabSelected
	// void OnMenuTabSelected(EStoreMenuState menuState, bool alreadySelected);                                              // [0x49cada0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreMenuPresenter.OnBackAction
	// void OnBackAction();                                                                                                  // [0x49ca100] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreMenuPresenter.OnAllStoreDataLoadComplete
	// void OnAllStoreDataLoadComplete(bool success);                                                                        // [0x49c9fb0] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.StoreSpecialPacksSubPresenter
/// Size: 0x0068 (0x000090 - 0x0000F8)
class UStoreSpecialPacksSubPresenter : public UStoreSubPresenter
{ 
public:
	class UClass*                                      StoreBundlesWidgetClass;                                    // 0x0090   (0x0008)  
	unsigned char                                      UnknownData00_5[0x40];                                      // 0x0098   (0x0040)  MISSED
	TArray<class UStoreSpecialPackViewData*>           _specialPacks;                                              // 0x00D8   (0x0010)  
	TArray<class UStoreChapterPackViewData*>           _chapterPacks;                                              // 0x00E8   (0x0010)  


	/// Functions
	// Function /Script/DBDUIPresenters.StoreSpecialPacksSubPresenter.OnSpecialPackBuyClicked
	// void OnSpecialPackBuyClicked(FString PackId);                                                                         // [0x49cb3a0] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.StoreSpecialsSubPresenter
/// Size: 0x0028 (0x000090 - 0x0000B8)
class UStoreSpecialsSubPresenter : public UStoreSubPresenter
{ 
public:
	SDK_UNDEFINED(16,4576) /* TScriptInterface<Class> */ __um(_storeSpecialsWidget);                               // 0x0090   (0x0010)  
	TArray<class UStoreSpecialsItemViewData*>          _cachedSpecialsItems;                                       // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00B0   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.StoreSpecialsSubPresenter.OnPremiumTransactionCompleted
	// void OnPremiumTransactionCompleted(bool success);                                                                     // [0x49cb140] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreSpecialsSubPresenter.OnAuricCellSpecialOtherOptions
	// void OnAuricCellSpecialOtherOptions();                                                                                // [0x49ca0e0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreSpecialsSubPresenter.OnAuricCellSpecialBuyAction
	// void OnAuricCellSpecialBuyAction(FName bundleId);                                                                     // [0x49ca040] Final|Native|Private 
};

/// Struct /Script/DBDUIPresenters.SubtitlesEntry
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSubtitlesEntry
{ 
	SDK_UNDEFINED(16,4577) /* FString */               __um(Subtitle);                                             // 0x0000   (0x0010)  
	bool                                               isAOneLiner;                                                // 0x0010   (0x0001)  
	bool                                               hasDurationOverride;                                        // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0012   (0x0002)  MISSED
	float                                              durationOverride;                                           // 0x0014   (0x0004)  
};

/// Class /Script/DBDUIPresenters.SubtitlesPresenter
/// Size: 0x0058 (0x0000D0 - 0x000128)
class USubtitlesPresenter : public UPresenter
{ 
public:
	class UClass*                                      SubtitlesWidgetClass;                                       // 0x00D0   (0x0008)  
	int32_t                                            NumberOfCharactersPerLine;                                  // 0x00D8   (0x0004)  
	float                                              DurationPerLine;                                            // 0x00DC   (0x0004)  
	bool                                               KeepSingleCharacter;                                        // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00E1   (0x0007)  MISSED
	TArray<FSubtitlesEntry>                            _entryQueue;                                                // 0x00E8   (0x0010)  
	FTimerHandle                                       _timerHandle;                                               // 0x00F8   (0x0008)  
	SDK_UNDEFINED(8,4578) /* TWeakObjectPtr<UNavigationScreen*> */ __um(_navigationScreen);                        // 0x0100   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0108   (0x0020)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.SubtitlesPresenter.OnEntryTimedOut
	// void OnEntryTimedOut();                                                                                               // [0x49cd290] Final|Native|Private 
	// Function /Script/DBDUIPresenters.SubtitlesPresenter.IsSubtitlesEnabled
	// bool IsSubtitlesEnabled();                                                                                            // [0x49cd230] Final|Native|Private|Const 
};

/// Class /Script/DBDUIPresenters.TemplatePresenter
/// Size: 0x0020 (0x000108 - 0x000128)
class UTemplatePresenter : public UHudPresenter
{ 
public:
	class UClass*                                      TemplateWidgetClass;                                        // 0x0108   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0110   (0x0018)  MISSED
};

/// Class /Script/DBDUIPresenters.TestBuildFlagPresenter
/// Size: 0x0020 (0x0000D0 - 0x0000F0)
class UTestBuildFlagPresenter : public UPresenter
{ 
public:
	class UClass*                                      TestBuildFlagWidgetClass;                                   // 0x00D0   (0x0008)  
	ETestBuildFlagPosition                             testBuildFlagPosition;                                      // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x17];                                      // 0x00D9   (0x0017)  MISSED
};

/// Class /Script/DBDUIPresenters.TestPresenter
/// Size: 0x0010 (0x0000D0 - 0x0000E0)
class UTestPresenter : public UPresenter
{ 
public:
	class UClass*                                      TestWidgetClass;                                            // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00D8   (0x0008)  MISSED
};

/// Class /Script/DBDUIPresenters.HudTutorialBlockingNotificationsPresenter
/// Size: 0x00E8 (0x000108 - 0x0001F0)
class UHudTutorialBlockingNotificationsPresenter : public UHudPresenter
{ 
public:
	class UClass*                                      CoreTutorialBlockingNotificationsWidget;                    // 0x0108   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0110   (0x0008)  MISSED
	class ATutorialsUtilities*                         _tutorialsUtilities;                                        // 0x0118   (0x0008)  
	unsigned char                                      UnknownData01_6[0xD0];                                      // 0x0120   (0x00D0)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.HudTutorialBlockingNotificationsPresenter.OnTutorialNotificationClosedByUserInput
	// void OnTutorialNotificationClosedByUserInput();                                                                       // [0x49cd3a0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.HudTutorialBlockingNotificationsPresenter.OnTutorialHudFadeOutTriggered
	// void OnTutorialHudFadeOutTriggered();                                                                                 // [0x49cd380] Final|Native|Private 
	// Function /Script/DBDUIPresenters.HudTutorialBlockingNotificationsPresenter.OnTutorialHudFadeInTriggered
	// void OnTutorialHudFadeInTriggered();                                                                                  // [0x49cd360] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.HudTutorialMysteryNotesPresenter
/// Size: 0x0018 (0x000108 - 0x000120)
class UHudTutorialMysteryNotesPresenter : public UHudPresenter
{ 
public:
	class UClass*                                      CoreTutorialMysteryNoteWidget;                              // 0x0108   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0110   (0x0010)  MISSED
};

/// Class /Script/DBDUIPresenters.UnlockPersonalPerksPopupPresenter
/// Size: 0x0010 (0x000160 - 0x000170)
class UUnlockPersonalPerksPopupPresenter : public UGenericPopupPresenter
{ 
public:
	TArray<class UMenuPerkViewData*>                   _perksData;                                                 // 0x0160   (0x0010)  
};

/// Class /Script/DBDUIPresenters.WatermarkPresenter
/// Size: 0x0018 (0x0000D0 - 0x0000E8)
class UWatermarkPresenter : public UPresenter
{ 
public:
	class UClass*                                      WatermarkWidgetClass;                                       // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00D8   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.WatermarkPresenter.IsUsingCommandLineArgument
	// bool IsUsingCommandLineArgument();                                                                                    // [0x49cd260] Final|Native|Protected 
	// Function /Script/DBDUIPresenters.WatermarkPresenter.IsSteamBuild
	// bool IsSteamBuild();                                                                                                  // [0x44bd900] Final|Native|Protected 
	// Function /Script/DBDUIPresenters.WatermarkPresenter.IsNonShippingBuild
	// bool IsNonShippingBuild();                                                                                            // [0x44bd900] Final|Native|Protected 
};

/// Struct /Script/DBDUIPresenters.QuestEventsTrackingData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FQuestEventsTrackingData
{ 
	SDK_UNDEFINED(16,4579) /* FString */               __um(QuestEventId);                                         // 0x0000   (0x0010)  
	int32_t                                            CurrentProgressionValue;                                    // 0x0010   (0x0004)  
	int32_t                                            MaxProgressionValue;                                        // 0x0014   (0x0004)  
	EQuestOperationType                                OperationType;                                              // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/DBDUIPresenters.PresenterGroupData
/// Size: 0x0008 (0x000008 - 0x000010)
struct FPresenterGroupData : FDBDTableRowBase
{ 
	class UClass*                                      PresenterGroup;                                             // 0x0008   (0x0008)  
};

