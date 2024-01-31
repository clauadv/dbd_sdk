
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Customization
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
/// Size: 0x10
enum class EGameLayer : uint8_t
{
	EGameLayer__Default                                                              = 0,
	EGameLayer__LowOverlay                                                           = 1,
	EGameLayer__Overlay                                                              = 2,
	EGameLayer__ToastNotifications                                                   = 3,
	EGameLayer__UMGPopup                                                             = 4,
	EGameLayer__HighOverlay                                                          = 5,
	EGameLayer__Alerts                                                               = 6,
	EGameLayer__Tooltip                                                              = 7,
	EGameLayer__Watermark                                                            = 8,
	EGameLayer__EGameLayer_MAX                                                       = 9
};

/// Class /Script/DBDUIPresenters.UIComponent
/// Size: 0x0000 (0x000030 - 0x000030)
class UUIComponent : public UObject
{ 
public:
};

/// Class /Script/DBDUIPresenters.Presenter
/// Size: 0x00B8 (0x000030 - 0x0000E8)
class UPresenter : public UUIComponent
{ 
public:
	bool                                               _overrideWidgetInstantiationPhase;                          // 0x0030   (0x0001)  
	EPresenterPhase                                    _widgetInstantiationPhase;                                  // 0x0031   (0x0001)  
	ESlateVisibility                                   InitialVisibility;                                          // 0x0032   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0033   (0x0001)  MISSED
	int32_t                                            _widgetZOrder;                                              // 0x0034   (0x0004)  
	class UUserWidget*                                 _widget;                                                    // 0x0038   (0x0008)  
	class UPresenterParentInfo*                        _parentInfo;                                                // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0048   (0x0010)  MISSED
	SDK_UNDEFINED(80,4948) /* TSet<FString> */         __um(_ignoredPresentationRequirementFunctions);             // 0x0058   (0x0050)  
	TArray<class UPresenterRequirementFunction*>       _presentationRequirementFunctions;                          // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x00B8   (0x0010)  MISSED
	char                                               _filter;                                                    // 0x00C8   (0x0001)  
	char                                               _currencyFilter;                                            // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x00CA   (0x0006)  MISSED
	SDK_UNDEFINED(16,4949) /* TArray<TScriptInterface<Class>> */ __um(_lockedFeatureElements);                     // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x00E0   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.Presenter.ShouldPresent
	// bool ShouldPresent();                                                                                                 // [0x497b620] Final|Native|Private|Const 
	// Function /Script/DBDUIPresenters.Presenter.OnContextUnfocus
	// void OnContextUnfocus(EContext Context);                                                                              // [0x4979ef0] Native|Protected     
	// Function /Script/DBDUIPresenters.Presenter.OnContextFocus
	// void OnContextFocus(EContext Context);                                                                                // [0x4979e70] Native|Protected     
	// Function /Script/DBDUIPresenters.Presenter.OnContextChanged
	// void OnContextChanged(EContext Context);                                                                              // [0x4979df0] Native|Protected     
	// Function /Script/DBDUIPresenters.Presenter.IsPlayerStateReady
	// bool IsPlayerStateReady();                                                                                            // [0x4979840] Final|Native|Protected|Const 
	// Function /Script/DBDUIPresenters.Presenter.IsGameStateReady
	// bool IsGameStateReady();                                                                                              // [0x4979810] Final|Native|Protected|Const 
	// Function /Script/DBDUIPresenters.Presenter.IsContextReady
	// bool IsContextReady();                                                                                                // [0x49797e0] Final|Native|Protected|Const 
};

/// Class /Script/DBDUIPresenters.HudPresenter
/// Size: 0x0040 (0x0000E8 - 0x000128)
class UHudPresenter : public UPresenter
{ 
public:
	EHudParentContainerType                            HudParentContainer;                                         // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00E9   (0x0007)  MISSED
	class ADBDPlayer*                                  _pendingCharacter;                                          // 0x00F0   (0x0008)  
	class ADBDPlayer*                                  _presentedCharacter;                                        // 0x00F8   (0x0008)  
	class ADBDSpectator*                               _spectatorPawn;                                             // 0x0100   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0108   (0x0008)  MISSED
	class UHudScreen*                                  _hudScreen;                                                 // 0x0110   (0x0008)  
	class UCoreHudRootWidget*                          _rootWidget;                                                // 0x0118   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0120   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.HudPresenter.OnPawnUnpossessed
	// void OnPawnUnpossessed(class APawn* Pawn);                                                                            // [0x4974b70] Final|Native|Private 
	// Function /Script/DBDUIPresenters.HudPresenter.OnPawnPossessed
	// void OnPawnPossessed(class APawn* Pawn);                                                                              // [0x4974ae0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.HudPresenter.OnLocallyObservedChanged
	// void OnLocallyObservedChanged();                                                                                      // [0x4973ad0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.HudPresenter.IsVisibleForCurrentGameMode
	// bool IsVisibleForCurrentGameMode();                                                                                   // [0x4973aa0] Final|Native|Private|Const 
	// Function /Script/DBDUIPresenters.HudPresenter.IsPendingPawnReady
	// bool IsPendingPawnReady();                                                                                            // [0x4973a70] Final|Native|Private|Const 
	// Function /Script/DBDUIPresenters.HudPresenter.IsHudReady
	// bool IsHudReady();                                                                                                    // [0x4973a10] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.AimingCrosshairPresenter
/// Size: 0x0028 (0x000128 - 0x000150)
class UAimingCrosshairPresenter : public UHudPresenter
{ 
public:
	class UClass*                                      AimingCrosshairWidgetClass;                                 // 0x0128   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0130   (0x0020)  MISSED
};

/// Class /Script/DBDUIPresenters.BaseAlertPresenter
/// Size: 0x0008 (0x0000E8 - 0x0000F0)
class UBaseAlertPresenter : public UPresenter
{ 
public:
	EContext                                           ObservedContext;                                            // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00E9   (0x0007)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.BaseAlertPresenter.OnContextLeave
	// void OnContextLeave(EContext Context);                                                                                // [0x496d3d0] Final|Native|Protected 
	// Function /Script/DBDUIPresenters.BaseAlertPresenter.OnContextEnter
	// void OnContextEnter(EContext Context);                                                                                // [0x496d2d0] Final|Native|Protected 
	// Function /Script/DBDUIPresenters.BaseAlertPresenter.IsContextEntered
	// bool IsContextEntered();                                                                                              // [0x496cb70] Final|Native|Protected|Const 
};

/// Class /Script/DBDUIPresenters.AlertsPresenter
/// Size: 0x0060 (0x0000F0 - 0x000150)
class UAlertsPresenter : public UBaseAlertPresenter
{ 
public:
	class UClass*                                      AlertsWidgetClass;                                          // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x00F8   (0x0058)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.AlertsPresenter.OnRewardAlertSequenceCompleted
	// void OnRewardAlertSequenceCompleted();                                                                                // [0x496e370] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.AntiCampSelfUnhookMeterPresenter
/// Size: 0x0028 (0x000128 - 0x000150)
class UAntiCampSelfUnhookMeterPresenter : public UHudPresenter
{ 
public:
	class UClass*                                      AntiCampSelfUnhookMeterWidget;                              // 0x0128   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0130   (0x0020)  MISSED
};

/// Class /Script/DBDUIPresenters.SubPresenter
/// Size: 0x0040 (0x000030 - 0x000070)
class USubPresenter : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0030   (0x0040)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.SubPresenter.OnPresenterStopAsyncOperation
	// void OnPresenterStopAsyncOperation();                                                                                 // [0x497ec40] Native|Public        
	// Function /Script/DBDUIPresenters.SubPresenter.OnPresenterStartAsyncOperation
	// void OnPresenterStartAsyncOperation();                                                                                // [0x497ec20] Native|Public        
};

/// Class /Script/DBDUIPresenters.ArchiveCompendiumSubPresenter
/// Size: 0x0080 (0x000070 - 0x0000F0)
class UArchiveCompendiumSubPresenter : public USubPresenter
{ 
public:
	SDK_UNDEFINED(16,4950) /* TScriptInterface<Class> */ __um(_archiveCompendiumWidget);                           // 0x0070   (0x0010)  
	unsigned char                                      UnknownData00_6[0x70];                                      // 0x0080   (0x0070)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.ArchiveCompendiumSubPresenter.OnTomeSelected
	// void OnTomeSelected(FString tomeId);                                                                                  // [0x496e810] Final|Native|Protected 
};

/// Class /Script/DBDUIPresenters.ArchiveQuestMapSubPresenter
/// Size: 0x01F8 (0x000070 - 0x000268)
class UArchiveQuestMapSubPresenter : public USubPresenter
{ 
public:
	unsigned char                                      UnknownData00_2[0x150];                                     // 0x0070   (0x0150)  MISSED
	SDK_UNDEFINED(16,4951) /* TScriptInterface<Class> */ __um(_archiveQuestMapWidget);                             // 0x01C0   (0x0010)  
	SDK_UNDEFINED(16,4952) /* TScriptInterface<Class> */ __um(_archiveLevelProgressionWidget);                     // 0x01D0   (0x0010)  
	unsigned char                                      UnknownData01_5[0x58];                                      // 0x01E0   (0x0058)  MISSED
	TArray<EArchivesStoryLevelStatus>                  _storyLevelStatusCache;                                     // 0x0238   (0x0010)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0248   (0x0020)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.ArchiveQuestMapSubPresenter.UpdateTomeLevels
	// void UpdateTomeLevels();                                                                                              // [0x496e9f0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveQuestMapSubPresenter.OnTomeMapCreated
	// void OnTomeMapCreated();                                                                                              // [0x496e7f0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveQuestMapSubPresenter.OnTomeLevelRewardAnimationDone
	// void OnTomeLevelRewardAnimationDone();                                                                                // [0x496e7d0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveQuestMapSubPresenter.OnQuestNodeUnhovered
	// void OnQuestNodeUnhovered(EPlayerRole Role);                                                                          // [0x496e230] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveQuestMapSubPresenter.OnQuestNodeHovered
	// void OnQuestNodeHovered(EPlayerRole Role);                                                                            // [0x496e1b0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveQuestMapSubPresenter.OnPlayerCardUpdated
	// void OnPlayerCardUpdated(FString badgeId, FString BannerId);                                                          // [0x496def0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveQuestMapSubPresenter.OnNodeSelected
	// void OnNodeSelected(FName& NodeId, EPlayerRole Role, FVector2D& position);                                            // [0x496dd00] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/DBDUIPresenters.ArchiveQuestMapSubPresenter.OnLevelSelected
	// void OnLevelSelected(int32_t levelIndex);                                                                             // [0x496d700] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveQuestMapSubPresenter.NavigateToNextLevelAfterUnlock
	// void NavigateToNextLevelAfterUnlock();                                                                                // [0x496cc60] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveQuestMapSubPresenter.GetCurrentLevel
	// void GetCurrentLevel();                                                                                               // [0x496cb50] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.ArchiveEditorSubPresenter
/// Size: 0x0028 (0x000268 - 0x000290)
class UArchiveEditorSubPresenter : public UArchiveQuestMapSubPresenter
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0268   (0x0018)  MISSED
	SDK_UNDEFINED(16,4953) /* TScriptInterface<Class> */ __um(_archiveEditorWidget);                               // 0x0280   (0x0010)  


	/// Functions
	// Function /Script/DBDUIPresenters.ArchiveEditorSubPresenter.OnSaveTomeGraph
	// void OnSaveTomeGraph(TArray<FArchiveNodeGraphViewData>& nodeList);                                                    // [0x496e4d0] Final|Native|Private|HasOutParms 
};

/// Class /Script/DBDUIPresenters.ArchiveImageViewerPresenter
/// Size: 0x0090 (0x0000E8 - 0x000178)
class UArchiveImageViewerPresenter : public UPresenter
{ 
public:
	class UClass*                                      ArchiveImageViewerWidgetClass;                              // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x88];                                      // 0x00F0   (0x0088)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.ArchiveImageViewerPresenter.OnTextVisibilityChanged
	// void OnTextVisibilityChanged();                                                                                       // [0x496e790] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveImageViewerPresenter.OnImageViewerVoiceOverPlayed
	// void OnImageViewerVoiceOverPlayed();                                                                                  // [0x496d6a0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveImageViewerPresenter.OnImageViewerVoiceOverAutoplay
	// void OnImageViewerVoiceOverAutoplay(bool autoplay);                                                                   // [0x496d580] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveImageViewerPresenter.OnBackAction
	// void OnBackAction();                                                                                                  // [0x496ce70] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveImageViewerPresenter.OnArchivesVoiceOverPlayed
	// void OnArchivesVoiceOverPlayed(bool Playing);                                                                         // [0x496cd10] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveImageViewerPresenter.OnArchivesVoiceOverAutoplay
	// void OnArchivesVoiceOverAutoplay(bool autoplay);                                                                      // [0x496cc80] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveImageViewerPresenter.CanShowFullScreenMode
	// bool CanShowFullScreenMode();                                                                                         // [0x496c910] Final|Native|Private|Const 
};

/// Class /Script/DBDUIPresenters.ArchiveJournalSubPresenter
/// Size: 0x00D8 (0x000070 - 0x000148)
class UArchiveJournalSubPresenter : public USubPresenter
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0070   (0x0038)  MISSED
	SDK_UNDEFINED(16,4954) /* TScriptInterface<Class> */ __um(_archiveJournalWidget);                              // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x90];                                      // 0x00B8   (0x0090)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.ArchiveJournalSubPresenter.OnVignetteSelected
	// void OnVignetteSelected(FString VignetteId);                                                                          // [0x496e8b0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveJournalSubPresenter.OnShowImageViewer
	// void OnShowImageViewer();                                                                                             // [0x496e5d0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveJournalSubPresenter.OnPlayCinematic
	// void OnPlayCinematic(int32_t index);                                                                                  // [0x496de20] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveJournalSubPresenter.OnImageViewerVoiceOverPlayed
	// void OnImageViewerVoiceOverPlayed();                                                                                  // [0x496d6c0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveJournalSubPresenter.OnImageViewerVoiceOverAutoplay
	// void OnImageViewerVoiceOverAutoplay(bool autoplay);                                                                   // [0x496d610] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveJournalSubPresenter.OnEntrySelected
	// void OnEntrySelected(int32_t entryIndex);                                                                             // [0x496d4d0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveJournalSubPresenter.OnClickPlayButton
	// void OnClickPlayButton(int32_t entryIndex);                                                                           // [0x496d170] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveJournalSubPresenter.OnAutoplayChanged
	// void OnAutoplayChanged(bool autoplayActive, int32_t entryIndex);                                                      // [0x496cda0] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.ArchiveMenuPresenter
/// Size: 0x00C8 (0x0000E8 - 0x0001B0)
class UArchiveMenuPresenter : public UPresenter
{ 
public:
	class UClass*                                      ArchiveMenuWidgetClass;                                     // 0x00E8   (0x0008)  
	class UArchiveTomeSubPresenter*                    _archiveTomeSubPresenter;                                   // 0x00F0   (0x0008)  
	class UArchiveRiftSubPresenter*                    _archiveRiftSubPresenter;                                   // 0x00F8   (0x0008)  
	class UArchiveCompendiumSubPresenter*              _archiveCompendiumSubPresenter;                             // 0x0100   (0x0008)  
	class USubPresenter*                               _activeSubPresenter;                                        // 0x0108   (0x0008)  
	unsigned char                                      UnknownData00_6[0xA0];                                      // 0x0110   (0x00A0)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.ArchiveMenuPresenter.OnSlotSelectorClosed
	// void OnSlotSelectorClosed();                                                                                          // [0x496e6a0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveMenuPresenter.OnShowImageViewer
	// void OnShowImageViewer(bool voiceOverIsPlaying);                                                                      // [0x496e5f0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveMenuPresenter.OnMenuTabSelected
	// void OnMenuTabSelected(EArchiveMenuState menuState, bool alreadySelected);                                            // [0x496d790] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveMenuPresenter.OnInfoClicked
	// void OnInfoClicked();                                                                                                 // [0x496d6e0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveMenuPresenter.OnHideImageViewer
	// void OnHideImageViewer();                                                                                             // [0x496d560] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveMenuPresenter.OnChallengeReminderSlotSelected
	// void OnChallengeReminderSlotSelected(EPlayerRole Role);                                                               // [0x496d030] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveMenuPresenter.OnChallengeReminderClicked
	// void OnChallengeReminderClicked(EPlayerRole Role);                                                                    // [0x496cfb0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveMenuPresenter.OnBackAction
	// void OnBackAction();                                                                                                  // [0x496ce90] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.BasePopupPresenter
/// Size: 0x0040 (0x0000E8 - 0x000128)
class UBasePopupPresenter : public UPresenter
{ 
public:
	EContext                                           ObservedContext;                                            // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00E9   (0x0007)  MISSED
	class UClass*                                      PopupWidgetClass;                                           // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00F8   (0x0008)  MISSED
	class UBasePopupViewData*                          _viewData;                                                  // 0x0100   (0x0008)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0108   (0x0020)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.BasePopupPresenter.OnContextLeave
	// void OnContextLeave(EContext Context);                                                                                // [0x496d450] Final|Native|Protected 
	// Function /Script/DBDUIPresenters.BasePopupPresenter.OnContextEnter
	// void OnContextEnter(EContext Context);                                                                                // [0x496d350] Final|Native|Protected 
	// Function /Script/DBDUIPresenters.BasePopupPresenter.IsContextEntered
	// bool IsContextEntered();                                                                                              // [0x496cba0] Final|Native|Protected|Const 
};

/// Class /Script/DBDUIPresenters.GenericPopupPresenter
/// Size: 0x0058 (0x000128 - 0x000180)
class UGenericPopupPresenter : public UBasePopupPresenter
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0128   (0x0058)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.GenericPopupPresenter.OnBack
	// void OnBack();                                                                                                        // [0x4973c40] Native|Protected     
	// Function /Script/DBDUIPresenters.GenericPopupPresenter.OnAppResumed
	// void OnAppResumed(bool isAppResumed);                                                                                 // [0x4973b70] Final|Native|Protected 
	// Function /Script/DBDUIPresenters.GenericPopupPresenter.OnAction
	// void OnAction(EPopupButtonType popupAction);                                                                          // [0x4973af0] Native|Protected     
};

/// Class /Script/DBDUIPresenters.ArchivePassPurchasePopupPresenter
/// Size: 0x0000 (0x000180 - 0x000180)
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
/// Size: 0x0140 (0x000070 - 0x0001B0)
class UArchiveRiftSubPresenter : public USubPresenter
{ 
public:
	unsigned char                                      UnknownData00_2[0x78];                                      // 0x0070   (0x0078)  MISSED
	SDK_UNDEFINED(16,4955) /* TScriptInterface<Class> */ __um(_archiveRiftWidget);                                 // 0x00E8   (0x0010)  
	unsigned char                                      UnknownData01_6[0xB8];                                      // 0x00F8   (0x00B8)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.ArchiveRiftSubPresenter.OnToggleOutfitDisplay
	// void OnToggleOutfitDisplay();                                                                                         // [0x496e7b0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveRiftSubPresenter.OnRewardItemClicked
	// void OnRewardItemClicked(FName ItemId);                                                                               // [0x496e410] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveRiftSubPresenter.OnRewardCurrencyClicked
	// void OnRewardCurrencyClicked(ECurrencyType CurrencyType);                                                             // [0x496e390] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveRiftSubPresenter.OnClickPurchaseTiers
	// void OnClickPurchaseTiers();                                                                                          // [0x496d220] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveRiftSubPresenter.OnClickPurchasePremiumPass
	// void OnClickPurchasePremiumPass();                                                                                    // [0x496d200] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ArchiveRiftSubPresenter.OnBonusTierTooltipShown
	// void OnBonusTierTooltipShown();                                                                                       // [0x496cef0] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.ArchiveTierPurchasePopupPresenter
/// Size: 0x0060 (0x000180 - 0x0001E0)
class UArchiveTierPurchasePopupPresenter : public UGenericPopupPresenter
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0180   (0x0060)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.ArchiveTierPurchasePopupPresenter.OnConfirmPurchase
	// void OnConfirmPurchase(int32_t tiersToPurchaseNumber);                                                                // [0x496d240] Final|Native|Protected 
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
	SDK_UNDEFINED(16,4956) /* TScriptInterface<Class> */ __um(_archiveTomeWidget);                                 // 0x00C0   (0x0010)  
	class UMaterialInterface*                          _archiveSideNavSkinMaterial;                                // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x00D8   (0x0028)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.ArchiveTomeSubPresenter.OnMenuTabSelected
	// void OnMenuTabSelected(EArchiveTomeMenuState menuState);                                                              // [0x496d860] Final|Native|Public  
	// Function /Script/DBDUIPresenters.ArchiveTomeSubPresenter.OnEditorWidgetSwitchComplete
	// void OnEditorWidgetSwitchComplete();                                                                                  // [0x4592da0] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.AuricCellsPresenter
/// Size: 0x0088 (0x0000E8 - 0x000170)
class UAuricCellsPresenter : public UPresenter
{ 
public:
	class UClass*                                      AuricCellsWidgetClass;                                      // 0x00E8   (0x0008)  
	FAuricCellsFirstPurchaseViewData                   _firstPurchaseViewData;                                     // 0x00F0   (0x0058)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0148   (0x0028)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.AuricCellsPresenter.OnPremiumTransactionCompleted
	// void OnPremiumTransactionCompleted(bool success);                                                                     // [0x496dff0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.AuricCellsPresenter.OnBuyAction
	// void OnBuyAction(FName bundleId);                                                                                     // [0x496cf10] Final|Native|Private 
	// Function /Script/DBDUIPresenters.AuricCellsPresenter.OnBackAction
	// void OnBackAction();                                                                                                  // [0x496ceb0] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.ChallengeTrackerPresenter
/// Size: 0x00A0 (0x000128 - 0x0001C8)
class UChallengeTrackerPresenter : public UHudPresenter
{ 
public:
	class UClass*                                      ChallengeTrackerWidgetClass;                                // 0x0128   (0x0008)  
	float                                              ReadingTimeDelaySec;                                        // 0x0130   (0x0004)  
	unsigned char                                      UnknownData00_6[0x94];                                      // 0x0134   (0x0094)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.ChallengeTrackerPresenter.OnWidgetProgressingDone
	// void OnWidgetProgressingDone();                                                                                       // [0x496e9d0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ChallengeTrackerPresenter.OnWidgetOpeningDone
	// void OnWidgetOpeningDone();                                                                                           // [0x496e9b0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ChallengeTrackerPresenter.OnWidgetClosingDone
	// void OnWidgetClosingDone();                                                                                           // [0x496e950] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ChallengeTrackerPresenter.OnReadingTimeDelayDone
	// void OnReadingTimeDelayDone();                                                                                        // [0x496e2b0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ChallengeTrackerPresenter.OnQuestEventRepetitionValueChanged
	// void OnQuestEventRepetitionValueChanged(int32_t value, FString questEventIdTracked);                                  // [0x496e080] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ChallengeTrackerPresenter.BindToQuestRepetitionEvents
	// void BindToQuestRepetitionEvents();                                                                                   // [0x496c8f0] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.CinematicPresenter
/// Size: 0x0098 (0x0000E8 - 0x000180)
class UCinematicPresenter : public UPresenter
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00E8   (0x0008)  MISSED
	class UClass*                                      CinematicWidgetClass;                                       // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x7C];                                      // 0x00F8   (0x007C)  MISSED
	SDK_UNDEFINED(8,4957) /* TWeakObjectPtr<USubtitlesManager*> */ __um(_subtitlesManager);                        // 0x0174   (0x0008)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x017C   (0x0004)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.CinematicPresenter.OnWidgetFadeOutAnimationDone
	// void OnWidgetFadeOutAnimationDone();                                                                                  // [0x496e990] Final|Native|Public  
	// Function /Script/DBDUIPresenters.CinematicPresenter.OnWidgetFadeInAnimationDone
	// void OnWidgetFadeInAnimationDone();                                                                                   // [0x496e970] Final|Native|Public  
	// Function /Script/DBDUIPresenters.CinematicPresenter.OnSubtitlesUpdated
	// void OnSubtitlesUpdated(TArray<FString>& Subtitles);                                                                  // [0x496e6c0] Final|Native|Public|HasOutParms 
	// Function /Script/DBDUIPresenters.CinematicPresenter.OnSkipButtonClicked
	// void OnSkipButtonClicked();                                                                                           // [0x496e680] Final|Native|Public  
	// Function /Script/DBDUIPresenters.CinematicPresenter.OnPlaybackStarted
	// void OnPlaybackStarted();                                                                                             // [0x496ded0] Final|Native|Public  
	// Function /Script/DBDUIPresenters.CinematicPresenter.OnPlaybackDone
	// void OnPlaybackDone();                                                                                                // [0x496deb0] Final|Native|Public  
	// Function /Script/DBDUIPresenters.CinematicPresenter.MuteGameAudio
	// void MuteGameAudio(bool shouldMute);                                                                                  // [0x496cbd0] Final|Native|Public  
	// Function /Script/DBDUIPresenters.CinematicPresenter.DBD_StopVideoPlayer
	// void DBD_StopVideoPlayer();                                                                                           // [0x4592da0] Final|Exec|Native|Private 
	// Function /Script/DBDUIPresenters.CinematicPresenter.DBD_ChangeVideoVolume
	// void DBD_ChangeVideoVolume(float Volume);                                                                             // [0x496cad0] Final|Exec|Native|Private 
	// Function /Script/DBDUIPresenters.CinematicPresenter.DBD_ChangeVideoPlaybackMode
	// void DBD_ChangeVideoPlaybackMode(FString Mode);                                                                       // [0x496ca30] Final|Exec|Native|Private 
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
/// Size: 0x0018 (0x0000E8 - 0x000100)
class UCreditsPresenter : public UPresenter
{ 
public:
	class UClass*                                      CreditsScreenWidgetClass;                                   // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00F0   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.CreditsPresenter.OnBackAction
	// void OnBackAction();                                                                                                  // [0x496ced0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.CreditsPresenter.Credits_ScrollToName
	// void Credits_ScrollToName(FString Name, float Delay);                                                                 // [0x496c940] Final|Exec|Native|Public 
	// Function /Script/DBDUIPresenters.CreditsPresenter.Credits_ScrollToEnd
	// void Credits_ScrollToEnd();                                                                                           // [0x4592da0] Final|Exec|Native|Public 
};

/// Class /Script/DBDUIPresenters.CurrencyConversionPopupPresenter
/// Size: 0x0010 (0x000180 - 0x000190)
class UCurrencyConversionPopupPresenter : public UGenericPopupPresenter
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0180   (0x0010)  MISSED
};

/// Class /Script/DBDUIPresenters.DailyRitualsPopupPresenter
/// Size: 0x0020 (0x000180 - 0x0001A0)
class UDailyRitualsPopupPresenter : public UGenericPopupPresenter
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0180   (0x0020)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.DailyRitualsPopupPresenter.OnRitualsSyncErrorEvent
	// void OnRitualsSyncErrorEvent();                                                                                       // [0x4592da0] Final|Native|Protected|Const 
	// Function /Script/DBDUIPresenters.DailyRitualsPopupPresenter.OnRitualsFetchedEvent
	// void OnRitualsFetchedEvent();                                                                                         // [0x496e4b0] Final|Native|Protected|Const 
	// Function /Script/DBDUIPresenters.DailyRitualsPopupPresenter.OnRemoveRitual
	// void OnRemoveRitual(FString ID);                                                                                      // [0x496e2d0] Final|Native|Protected 
	// Function /Script/DBDUIPresenters.DailyRitualsPopupPresenter.OnClaimRitual
	// void OnClaimRitual(FString ID);                                                                                       // [0x496d0d0] Final|Native|Protected 
	// Function /Script/DBDUIPresenters.DailyRitualsPopupPresenter.OnClaimAllRituals
	// void OnClaimAllRituals();                                                                                             // [0x496d0b0] Final|Native|Protected 
};

/// Class /Script/DBDUIPresenters.DataHelper
/// Size: 0x0000 (0x000030 - 0x000030)
class UDataHelper : public UObject
{ 
public:
};

/// Class /Script/DBDUIPresenters.DirectionalMinigamePresenter
/// Size: 0x0028 (0x000128 - 0x000150)
class UDirectionalMinigamePresenter : public UHudPresenter
{ 
public:
	class UClass*                                      DirectionalMinigameWidgetClass;                             // 0x0128   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0130   (0x0020)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.DirectionalMinigamePresenter.OnMinigameStart
	// void OnMinigameStart(TArray<EDirectionalInputKey> Sequence, int32_t currentIndex);                                    // [0x496dbd0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.DirectionalMinigamePresenter.OnMinigameInit
	// void OnMinigameInit(FDirectionalMiniGameDefinition miniGameDefinition);                                               // [0x496dac0] Final|Native|Private|Const 
	// Function /Script/DBDUIPresenters.DirectionalMinigamePresenter.OnMinigameEnterKey
	// void OnMinigameEnterKey(EDirectionalInputKey enteredKey, int32_t enteredIndex, bool isCorrect, int32_t currentIndex); // [0x496d960] Final|Native|Private 
	// Function /Script/DBDUIPresenters.DirectionalMinigamePresenter.OnMinigameEnd
	// void OnMinigameEnd(EDirectionalMinigameResult Result);                                                                // [0x496d8e0] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.DisplayStandPresenter
/// Size: 0x0068 (0x0000E8 - 0x000150)
class UDisplayStandPresenter : public UPresenter
{ 
public:
	class UClass*                                      CoreDisplayStandWidgetClass;                                // 0x00E8   (0x0008)  
	EContext                                           ObservedContext;                                            // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00F1   (0x0003)  MISSED
	FName                                              DisplayStandName;                                           // 0x00F4   (0x000C)  
	FAnchorData                                        DragZoneLayoutData;                                         // 0x0100   (0x0028)  
	float                                              DragZonePositionX;                                          // 0x0128   (0x0004)  
	float                                              DragZonePositionY;                                          // 0x012C   (0x0004)  
	float                                              DragZoneSizeX;                                              // 0x0130   (0x0004)  
	float                                              DragZoneSizeY;                                              // 0x0134   (0x0004)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0138   (0x0018)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.DisplayStandPresenter.OnDisplayStandRotation
	// void OnDisplayStandRotation(float distance);                                                                          // [0x4973ef0] Final|Native|Public  
	// Function /Script/DBDUIPresenters.DisplayStandPresenter.IsContextEntered
	// bool IsContextEntered();                                                                                              // [0x49739e0] Final|Native|Private|Const 
};

/// Class /Script/DBDUIPresenters.EventEntryRewardsSubPresenter
/// Size: 0x0080 (0x000070 - 0x0000F0)
class UEventEntryRewardsSubPresenter : public USubPresenter
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0070   (0x0030)  MISSED
	SDK_UNDEFINED(16,4958) /* TScriptInterface<Class> */ __um(_tabWidget);                                         // 0x00A0   (0x0010)  
	TArray<class UStoreCustomizationItemViewData*>     _rewardsGridData;                                           // 0x00B0   (0x0010)  
	TArray<class UStoreCustomizationItemViewData*>     _previewAreaRewardsData;                                    // 0x00C0   (0x0010)  
	class UEventEntryPresenter*                        _parentPresenter;                                           // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x00D8   (0x0018)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.EventEntryRewardsSubPresenter.OnRewardGridItemClicked
	// void OnRewardGridItemClicked(int32_t selectedIndex);                                                                  // [0x49750c0] Final|Native|Protected 
	// Function /Script/DBDUIPresenters.EventEntryRewardsSubPresenter.OnPreviewAreaItemClicked
	// void OnPreviewAreaItemClicked(int32_t selectedIndex);                                                                 // [0x4975010] Final|Native|Protected 
	// Function /Script/DBDUIPresenters.EventEntryRewardsSubPresenter.OnInstructionButtonClicked
	// void OnInstructionButtonClicked();                                                                                    // [0x49743a0] Final|Native|Protected 
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
	SDK_UNDEFINED(16,4959) /* TScriptInterface<Class> */ __um(_detailsTabWidget);                                  // 0x0070   (0x0010)  
	FDetailsTabViewData                                _viewData;                                                  // 0x0080   (0x0048)  
	class UEventEntryPresenter*                        _parentPresenter;                                           // 0x00C8   (0x0008)  
};

/// Class /Script/DBDUIPresenters.EventEntryEventSubPresenter
/// Size: 0x0020 (0x000070 - 0x000090)
class UEventEntryEventSubPresenter : public USubPresenter
{ 
public:
	SDK_UNDEFINED(16,4960) /* TScriptInterface<Class> */ __um(_eventTabWidget);                                    // 0x0070   (0x0010)  
	class UEventTabViewData*                           _tabsData;                                                  // 0x0080   (0x0008)  
	class UEventEntryPresenter*                        _parentPresenter;                                           // 0x0088   (0x0008)  


	/// Functions
	// Function /Script/DBDUIPresenters.EventEntryEventSubPresenter.OnArchiveButtonClicked
	// void OnArchiveButtonClicked();                                                                                        // [0x4973c00] Final|Native|Protected 
};

/// Class /Script/DBDUIPresenters.EventEntryPresenter
/// Size: 0x00A0 (0x0000E8 - 0x000188)
class UEventEntryPresenter : public UPresenter
{ 
public:
	class UClass*                                      EventEntryWidgetClass;                                      // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x00F0   (0x0018)  MISSED
	class UEventEntryEventSubPresenter*                _eventSubPresenter;                                         // 0x0108   (0x0008)  
	class UEventEntryDetailsSubPresenter*              _detailsSubPresenter;                                       // 0x0110   (0x0008)  
	class UEventEntryCollectionSubPresenter*           _collectionSubPresenter;                                    // 0x0118   (0x0008)  
	class UEventEntryStoreSubPresenter*                _storeSubPresenter;                                         // 0x0120   (0x0008)  
	class USubPresenter*                               _activeSubPresenter;                                        // 0x0128   (0x0008)  
	class UEventEntryViewData*                         _viewData;                                                  // 0x0130   (0x0008)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0138   (0x0050)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.EventEntryPresenter.OnSelectedTabChanged
	// void OnSelectedTabChanged(int32_t Key);                                                                               // [0x49751e0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.EventEntryPresenter.OnMilestoneTrackerItemClicked
	// void OnMilestoneTrackerItemClicked(int32_t selectedIndex);                                                            // [0x4974810] Final|Native|Private 
	// Function /Script/DBDUIPresenters.EventEntryPresenter.OnBackAction
	// void OnBackAction();                                                                                                  // [0x4973c60] Final|Native|Private 
	// Function /Script/DBDUIPresenters.EventEntryPresenter.GoToStoreButtonClicked
	// void GoToStoreButtonClicked(FName selectedStoreTabItemId);                                                            // [0x4973920] Final|Native|Private 
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
/// Size: 0x00C0 (0x000128 - 0x0001E8)
class UEventObjectiveItemPresenter : public UHudPresenter
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0128   (0x0008)  MISSED
	class UClass*                                      DefaultCoreHudEventObjectiveItemWidgetClass;                // 0x0130   (0x0008)  
	SDK_UNDEFINED(80,4961) /* TMap<FName, UClass*> */  __um(CoreHudEventObjectiveItemWidgetClassMapping);          // 0x0138   (0x0050)  
	unsigned char                                      UnknownData01_6[0x60];                                      // 0x0188   (0x0060)  MISSED
};

/// Class /Script/DBDUIPresenters.ExamplePresenter
/// Size: 0x0040 (0x000128 - 0x000168)
class UExamplePresenter : public UHudPresenter
{ 
public:
	class UClass*                                      ExampleWidgetClass;                                         // 0x0128   (0x0008)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0130   (0x0038)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.ExamplePresenter.OnButtonClick
	// void OnButtonClick();                                                                                                 // [0x4973c80] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.ExternalEffectsPresenter
/// Size: 0x0018 (0x000128 - 0x000140)
class UExternalEffectsPresenter : public UHudPresenter
{ 
public:
	class UClass*                                      CoreExternalEffectsWidgetClass;                             // 0x0128   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0130   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.ExternalEffectsPresenter.OnShowExternalEffect
	// void OnShowExternalEffect(FExternalEffectData& Data);                                                                 // [0x4975290] Final|Native|Protected|HasOutParms 
	// Function /Script/DBDUIPresenters.ExternalEffectsPresenter.OnHideExternalEffect
	// void OnHideExternalEffect(FName ItemId, EExternalEffectSource ExternalEffectSource);                                  // [0x49742b0] Final|Native|Protected 
};

/// Class /Script/DBDUIPresenters.FearMarketPopupPresenter
/// Size: 0x0000 (0x000180 - 0x000180)
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
/// Size: 0x0070 (0x000180 - 0x0001F0)
class UGenericTextInputPopupPresenter : public UGenericPopupPresenter
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0180   (0x0070)  MISSED
};

/// Class /Script/DBDUIPresenters.FriendSearchPopupPresenter
/// Size: 0x0050 (0x0001F0 - 0x000240)
class UFriendSearchPopupPresenter : public UGenericTextInputPopupPresenter
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x01F0   (0x0050)  MISSED
};

/// Class /Script/DBDUIPresenters.GameManualSubPresenter
/// Size: 0x0010 (0x000070 - 0x000080)
class UGameManualSubPresenter : public USubPresenter
{ 
public:
	SDK_UNDEFINED(16,4962) /* TScriptInterface<Class> */ __um(_gameManualWidget);                                  // 0x0070   (0x0010)  


	/// Functions
	// Function /Script/DBDUIPresenters.GameManualSubPresenter.OnCategoryCategoryEntered
	// void OnCategoryCategoryEntered(EHelpType categoryType);                                                               // [0x4973ca0] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.GenericRefreshingPopupPresenter
/// Size: 0x0020 (0x000180 - 0x0001A0)
class UGenericRefreshingPopupPresenter : public UGenericPopupPresenter
{ 
public:
	float                                              DefaultRefreshingIntervalsTime;                             // 0x0180   (0x0004)  
	float                                              DefaultTimeoutTime;                                         // 0x0184   (0x0004)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0188   (0x0018)  MISSED
};

/// Class /Script/DBDUIPresenters.GlobalLoadingSpinnerPresenter
/// Size: 0x0018 (0x0000E8 - 0x000100)
class UGlobalLoadingSpinnerPresenter : public UPresenter
{ 
public:
	class UClass*                                      GlobalLoadSpinnerWidgetClass;                               // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00F0   (0x0010)  MISSED
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
	SDK_UNDEFINED(1,4963) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0038   (0x0001)  
	SDK_UNDEFINED(1,4964) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0039   (0x0001)  
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
/// Size: 0x0010 (0x000298 - 0x0002A8)
class UGridPresenterParentWidget : public UPresenterParentWidget
{ 
public:
	class UGridPanel*                                  Container;                                                  // 0x0298   (0x0008)  
	class UImage*                                      DividerImage;                                               // 0x02A0   (0x0008)  


	/// Functions
	// Function /Script/DBDUIPresenters.GridPresenterParentWidget.OnChildVisibilityChanged
	// void OnChildVisibilityChanged(ESlateVisibility InVisibility);                                                         // [0x4973d20] Final|Native|Public  
};

/// Class /Script/DBDUIPresenters.HudEndGameScenarioPresenter
/// Size: 0x0040 (0x000128 - 0x000168)
class UHudEndGameScenarioPresenter : public UHudPresenter
{ 
public:
	class UClass*                                      EndGameCollapseBarWidgetClass;                              // 0x0128   (0x0008)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0130   (0x0038)  MISSED
};

/// Class /Script/DBDUIPresenters.HudEventProgressionPresenter
/// Size: 0x0040 (0x000128 - 0x000168)
class UHudEventProgressionPresenter : public UHudPresenter
{ 
public:
	class UClass*                                      CoreHudEventProgressionWidgetClass;                         // 0x0128   (0x0008)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0130   (0x0038)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.HudEventProgressionPresenter.OnEventProgressionDataInitialized
	// void OnEventProgressionDataInitialized(FHudEventProgression2023ViewData& EventProgressionData);                       // [0x49741d0] Final|Native|Private|HasOutParms 
	// Function /Script/DBDUIPresenters.HudEventProgressionPresenter.OnEventProgressChanged
	// void OnEventProgressChanged(int32_t value);                                                                           // [0x4974140] Final|Native|Private 
	// Function /Script/DBDUIPresenters.HudEventProgressionPresenter.OnEventIsChannelingHauntChanged
	// void OnEventIsChannelingHauntChanged(bool value);                                                                     // [0x49740b0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.HudEventProgressionPresenter.OnEventInVoidZoneChanged
	// void OnEventInVoidZoneChanged(bool value);                                                                            // [0x4974020] Final|Native|Private 
	// Function /Script/DBDUIPresenters.HudEventProgressionPresenter.OnEventHauntTargetChanged
	// void OnEventHauntTargetChanged(int32_t value);                                                                        // [0x4973f90] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.HudMatchResultPresenter
/// Size: 0x0018 (0x000128 - 0x000140)
class UHudMatchResultPresenter : public UHudPresenter
{ 
public:
	class UClass*                                      MatchResultWidgetClass;                                     // 0x0128   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0130   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.HudMatchResultPresenter.StartEndGameSequence
	// void StartEndGameSequence();                                                                                          // [0x4975630] Final|Native|Private 
	// Function /Script/DBDUIPresenters.HudMatchResultPresenter.ShowEndSequence
	// void ShowEndSequence(float Duration, bool IsSlasher, int32_t matchResult);                                            // [0x4975510] Final|Native|Private 
	// Function /Script/DBDUIPresenters.HudMatchResultPresenter.OnMatchResultFadeOutCompleted
	// void OnMatchResultFadeOutCompleted();                                                                                 // [0x49747f0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.HudMatchResultPresenter.NotifyInParadiseOrEscaped
	// void NotifyInParadiseOrEscaped();                                                                                     // [0x4973ad0] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.HudObjectivesPresenter
/// Size: 0x0058 (0x000128 - 0x000180)
class UHudObjectivesPresenter : public UHudPresenter
{ 
public:
	class UClass*                                      CoreHudObjectivesWidgetClass;                               // 0x0128   (0x0008)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0130   (0x0050)  MISSED
};

/// Class /Script/DBDUIPresenters.HudPeekingPromptsPresenter
/// Size: 0x0030 (0x000128 - 0x000158)
class UHudPeekingPromptsPresenter : public UHudPresenter
{ 
public:
	class UClass*                                      LeaningArrowsWidgetClass;                                   // 0x0128   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0130   (0x0028)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.HudPeekingPromptsPresenter.UpdatePeekingState
	// void UpdatePeekingState(ELeanState potentialLeanState);                                                               // [0x4975650] Final|Native|Private 
	// Function /Script/DBDUIPresenters.HudPeekingPromptsPresenter.HandleBestPlayerInteractionsChanged
	// void HandleBestPlayerInteractionsChanged();                                                                           // [0x49739c0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.HudPeekingPromptsPresenter.CanPlayerLean
	// bool CanPlayerLean();                                                                                                 // [0x49738f0] Final|Native|Private|Const 
};

/// Class /Script/DBDUIPresenters.HudSpectatePresenter
/// Size: 0x0050 (0x000128 - 0x000178)
class UHudSpectatePresenter : public UHudPresenter
{ 
public:
	class UClass*                                      CoreSpectateBarWidget;                                      // 0x0128   (0x0008)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x0130   (0x0048)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.HudSpectatePresenter.OnPreviousPlayerTriggered
	// void OnPreviousPlayerTriggered();                                                                                     // [0x49750a0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.HudSpectatePresenter.OnPlayerGameStateChanged
	// void OnPlayerGameStateChanged(class ADBDPlayerState* DBDPlayerState, EGameState newGameState);                        // [0x4974f40] Final|Native|Private 
	// Function /Script/DBDUIPresenters.HudSpectatePresenter.OnNextPlayerTriggered
	// void OnNextPlayerTriggered();                                                                                         // [0x4974ac0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.HudSpectatePresenter.OnLeaveTriggered
	// void OnLeaveTriggered();                                                                                              // [0x4974440] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.HudTutorialObjectivesPresenter
/// Size: 0x0070 (0x000128 - 0x000198)
class UHudTutorialObjectivesPresenter : public UHudPresenter
{ 
public:
	class UClass*                                      TutorialObjectivesWidgetClass;                              // 0x0128   (0x0008)  
	unsigned char                                      UnknownData00_6[0x68];                                      // 0x0130   (0x0068)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.HudTutorialObjectivesPresenter.IsInTutorial
	// bool IsInTutorial();                                                                                                  // [0x4973a40] Final|Native|Private|Const 
};

/// Class /Script/DBDUIPresenters.LightSensitivityPresenter
/// Size: 0x0028 (0x0000E8 - 0x000110)
class ULightSensitivityPresenter : public UPresenter
{ 
public:
	class UClass*                                      LightSensitivityScreenWidgetClass;                          // 0x00E8   (0x0008)  
	float                                              AutoCompleteTime;                                           // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x1C];                                      // 0x00F4   (0x001C)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.LightSensitivityPresenter.OnContinue
	// void OnContinue();                                                                                                    // [0x4973dc0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.LightSensitivityPresenter.OnCompletedFadeOut
	// void OnCompletedFadeOut();                                                                                            // [0x4973da0] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.LoadoutMenuPresenter
/// Size: 0x0080 (0x0000E8 - 0x000168)
class ULoadoutMenuPresenter : public UPresenter
{ 
public:
	class UClass*                                      LoadoutMenuWidgetClass;                                     // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x00F0   (0x0010)  MISSED
	TArray<class ULoadoutMenuViewData*>                _loadoutMenuSlotData;                                       // 0x0100   (0x0010)  
	TArray<class ULoadoutMenuViewData*>                _loadoutMenuInventoryData;                                  // 0x0110   (0x0010)  
	unsigned char                                      UnknownData01_6[0x48];                                      // 0x0120   (0x0048)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.LoadoutMenuPresenter.SetLoadoutViewData
	// class ULoadoutMenuViewData* SetLoadoutViewData(FInventorySlotData& SlotData, EPlayerRole PlayerRole);                 // [0x4975380] Final|Native|Private|HasOutParms 
	// Function /Script/DBDUIPresenters.LoadoutMenuPresenter.OnSelectedCharacterChanged
	// void OnSelectedCharacterChanged(int32_t SelectedCharacterIndex);                                                      // [0x4975150] Final|Native|Private 
	// Function /Script/DBDUIPresenters.LoadoutMenuPresenter.OnLoadoutMenuSlotIsSelected
	// void OnLoadoutMenuSlotIsSelected(ELoadoutSlot slotSelected);                                                          // [0x49746f0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.LoadoutMenuPresenter.OnLoadoutMenuPresetSelected
	// void OnLoadoutMenuPresetSelected(int32_t presetId, ELoadoutSlot slotSelected);                                        // [0x4974620] Final|Native|Private 
	// Function /Script/DBDUIPresenters.LoadoutMenuPresenter.OnLoadoutMenuPresetClicked
	// void OnLoadoutMenuPresetClicked(int32_t presetId, ELoadoutSlot slotSelected);                                         // [0x4974550] Final|Native|Private 
	// Function /Script/DBDUIPresenters.LoadoutMenuPresenter.OnLoadoutMenuInventorySlotClick
	// void OnLoadoutMenuInventorySlotClick(ELoadoutSlot itemIndex, FName ItemId);                                           // [0x4974460] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.MainMenuPresenter
/// Size: 0x03B8 (0x0000E8 - 0x0004A0)
class UMainMenuPresenter : public UPresenter
{ 
public:
	class UClass*                                      MainMenuWidgetClass;                                        // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x3B0];                                     // 0x00F0   (0x03B0)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.MainMenuPresenter.OnTutorialButtonClicked
	// void OnTutorialButtonClicked();                                                                                       // [0x4975360] Final|Native|Private 
	// Function /Script/DBDUIPresenters.MainMenuPresenter.OnStoreButtonClicked
	// void OnStoreButtonClicked();                                                                                          // [0x4975340] Final|Native|Private 
	// Function /Script/DBDUIPresenters.MainMenuPresenter.OnSettingsButtonClicked
	// void OnSettingsButtonClicked();                                                                                       // [0x4975270] Final|Native|Private 
	// Function /Script/DBDUIPresenters.MainMenuPresenter.OnPlaySurvivorButtonClicked
	// void OnPlaySurvivorButtonClicked(EGameType gameType);                                                                 // [0x4974ec0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.MainMenuPresenter.OnPlayLimitedTimeEventSurvivorButtonClicked
	// void OnPlayLimitedTimeEventSurvivorButtonClicked(EGameType gameType, FName& eventID);                                 // [0x4974de0] Final|Native|Private|HasOutParms 
	// Function /Script/DBDUIPresenters.MainMenuPresenter.OnPlayLimitedTimeEventKillerButtonClicked
	// void OnPlayLimitedTimeEventKillerButtonClicked(EGameType gameType, FName& eventID);                                   // [0x4974d00] Final|Native|Private|HasOutParms 
	// Function /Script/DBDUIPresenters.MainMenuPresenter.OnPlayKillerButtonClicked
	// void OnPlayKillerButtonClicked(EGameType gameType);                                                                   // [0x4974c80] Final|Native|Private 
	// Function /Script/DBDUIPresenters.MainMenuPresenter.OnPlayCustomButtonClicked
	// void OnPlayCustomButtonClicked(EGameType gameType);                                                                   // [0x4974c00] Final|Native|Private 
	// Function /Script/DBDUIPresenters.MainMenuPresenter.OnNewsContentReceived
	// void OnNewsContentReceived(bool success, TArray<FNewsContentDetails>& receivedNewsData, int32_t newsHighestWeight);   // [0x49748c0] Final|Native|Private|HasOutParms 
	// Function /Script/DBDUIPresenters.MainMenuPresenter.OnNewsButtonClicked
	// void OnNewsButtonClicked();                                                                                           // [0x49748a0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.MainMenuPresenter.OnMainMenuFadeCompleted
	// void OnMainMenuFadeCompleted(EDBDCameraViewType View);                                                                // [0x4974770] Final|Native|Private 
	// Function /Script/DBDUIPresenters.MainMenuPresenter.OnLTESubMenuOpeningChanged
	// void OnLTESubMenuOpeningChanged(EMenuOpened menuOpened);                                                              // [0x49743c0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.MainMenuPresenter.OnFriendsButtonClicked
	// void OnFriendsButtonClicked();                                                                                        // [0x4974290] Final|Native|Private 
	// Function /Script/DBDUIPresenters.MainMenuPresenter.OnExitButtonClicked
	// void OnExitButtonClicked();                                                                                           // [0x4974270] Final|Native|Private 
	// Function /Script/DBDUIPresenters.MainMenuPresenter.OnEventButtonClicked
	// void OnEventButtonClicked();                                                                                          // [0x4973f70] Final|Native|Private 
	// Function /Script/DBDUIPresenters.MainMenuPresenter.OnDailyRitualsButtonClicked
	// void OnDailyRitualsButtonClicked();                                                                                   // [0x4973ed0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.MainMenuPresenter.OnCreditsButtonClicked
	// void OnCreditsButtonClicked();                                                                                        // [0x4973eb0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.MainMenuPresenter.OnCreatePartyCompleted
	// void OnCreatePartyCompleted(bool success, int32_t idToTransitionTo);                                                  // [0x4973de0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.MainMenuPresenter.OnChangeAccountClicked
	// void OnChangeAccountClicked();                                                                                        // [0x4592da0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.MainMenuPresenter.OnArchivesButtonClicked
	// void OnArchivesButtonClicked();                                                                                       // [0x4973c20] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.NewActiveTomePopupPresenter
/// Size: 0x0020 (0x000180 - 0x0001A0)
class UNewActiveTomePopupPresenter : public UGenericPopupPresenter
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0180   (0x0020)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.NewActiveTomePopupPresenter.OnRiftButtonClicked
	// void OnRiftButtonClicked();                                                                                           // [0x497b020] Final|Native|Private 
	// Function /Script/DBDUIPresenters.NewActiveTomePopupPresenter.OnCurrentTomeButtonClicked
	// void OnCurrentTomeButtonClicked();                                                                                    // [0x497a290] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.OnboardingMenuPresenter
/// Size: 0x0038 (0x0000E8 - 0x000120)
class UOnboardingMenuPresenter : public UPresenter
{ 
public:
	class UClass*                                      OnboardingMenuWidgetClass;                                  // 0x00E8   (0x0008)  
	class UOnboardingTutorialSubPresenter*             _onboardingTutorialSubPresenter;                            // 0x00F0   (0x0008)  
	class UGameManualSubPresenter*                     _gameManualSubPresenter;                                    // 0x00F8   (0x0008)  
	class USubPresenter*                               _activeSubPresenter;                                        // 0x0100   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0108   (0x0018)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.OnboardingMenuPresenter.OnSetUIEnabled
	// void OnSetUIEnabled(bool Enabled);                                                                                    // [0x497b1e0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.OnboardingMenuPresenter.OnSettingsAction
	// void OnSettingsAction();                                                                                              // [0x497b270] Final|Native|Private 
	// Function /Script/DBDUIPresenters.OnboardingMenuPresenter.OnQuitGameAction
	// void OnQuitGameAction();                                                                                              // [0x497af30] Final|Native|Private 
	// Function /Script/DBDUIPresenters.OnboardingMenuPresenter.OnMenuTabSelectedAgain
	// void OnMenuTabSelectedAgain(EOnboardingMenuState menuState);                                                          // [0x497aa90] Final|Native|Private 
	// Function /Script/DBDUIPresenters.OnboardingMenuPresenter.OnMenuTabSelected
	// void OnMenuTabSelected(EOnboardingMenuState menuState);                                                               // [0x497aa10] Final|Native|Private 
	// Function /Script/DBDUIPresenters.OnboardingMenuPresenter.OnFirstOnboardingStepsDone
	// void OnFirstOnboardingStepsDone(bool isFirstStepsDone);                                                               // [0x497a850] Final|Native|Private 
	// Function /Script/DBDUIPresenters.OnboardingMenuPresenter.OnChangeAccountAction
	// void OnChangeAccountAction();                                                                                         // [0x4592da0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.OnboardingMenuPresenter.OnBackAction
	// void OnBackAction();                                                                                                  // [0x4979870] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.OnboardingTutorialSubPresenter
/// Size: 0x0060 (0x000070 - 0x0000D0)
class UOnboardingTutorialSubPresenter : public USubPresenter
{ 
public:
	SDK_UNDEFINED(16,4965) /* TScriptInterface<Class> */ __um(_onboardingTutorialWidget);                          // 0x0070   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0080   (0x0050)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.OnboardingTutorialSubPresenter.OnSelectTutorial
	// void OnSelectTutorial(FString stepId, FString tutorialId);                                                            // [0x497b0e0] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.PawnObserver
/// Size: 0x0040 (0x000030 - 0x000070)
class UPawnObserver : public UUIComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0030   (0x0040)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.PawnObserver.OnPawnControllerSet
	// void OnPawnControllerSet(class APawn* Pawn, class AController* OldController, class AController* NewController);      // [0x497aba0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.PawnObserver.OnLocallyObservedChanged
	// void OnLocallyObservedChanged();                                                                                      // [0x497a9f0] Final|Native|Public  
};

/// Class /Script/DBDUIPresenters.PingStatusPresenter
/// Size: 0x0038 (0x000128 - 0x000160)
class UPingStatusPresenter : public UHudPresenter
{ 
public:
	class UClass*                                      PingStatusWidgetClass;                                      // 0x0128   (0x0008)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0130   (0x0030)  MISSED
};

/// Class /Script/DBDUIPresenters.PlayerProfilePresenter
/// Size: 0x0048 (0x0000E8 - 0x000130)
class UPlayerProfilePresenter : public UPresenter
{ 
public:
	class UClass*                                      CorePlayerProfileWidgetClass;                               // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x00F0   (0x0040)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.PlayerProfilePresenter.UnfocusPlayerProfile
	// void UnfocusPlayerProfile();                                                                                          // [0x497b670] Final|Native|Private 
	// Function /Script/DBDUIPresenters.PlayerProfilePresenter.ShowPlayerProfile
	// void ShowPlayerProfile();                                                                                             // [0x497b650] Final|Native|Private 
	// Function /Script/DBDUIPresenters.PlayerProfilePresenter.SetSpecialEventCurrency
	// void SetSpecialEventCurrency(ECurrencyType specialEventCurrencyType);                                                 // [0x497b5a0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.PlayerProfilePresenter.RefreshWallet
	// void RefreshWallet();                                                                                                 // [0x497b500] Final|Native|Private 
	// Function /Script/DBDUIPresenters.PlayerProfilePresenter.RefreshPlayerCard
	// void RefreshPlayerCard();                                                                                             // [0x497b4e0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.PlayerProfilePresenter.OnWalletUpdated
	// void OnWalletUpdated(TArray<FShopWalletUpdate>& walletUpdates);                                                       // [0x497b3f0] Final|Native|Private|HasOutParms 
	// Function /Script/DBDUIPresenters.PlayerProfilePresenter.OnUpdatePlayerProfileFilter
	// void OnUpdatePlayerProfileFilter(char Filter);                                                                        // [0x497b350] Final|Native|Private 
	// Function /Script/DBDUIPresenters.PlayerProfilePresenter.OnUpdatePlayerProfileCurrencyFilter
	// void OnUpdatePlayerProfileCurrencyFilter(char currencyFilter);                                                        // [0x497b2d0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.PlayerProfilePresenter.OnUpdatePlayerCardAnimationMode
	// void OnUpdatePlayerCardAnimationMode();                                                                               // [0x497b2b0] Final|Native|Private|Const 
	// Function /Script/DBDUIPresenters.PlayerProfilePresenter.OnResetPlayerProfileFilter
	// void OnResetPlayerProfileFilter();                                                                                    // [0x497af70] Final|Native|Private 
	// Function /Script/DBDUIPresenters.PlayerProfilePresenter.OnResetPlayerProfileCurrencyFilter
	// void OnResetPlayerProfileCurrencyFilter();                                                                            // [0x497af50] Final|Native|Private 
	// Function /Script/DBDUIPresenters.PlayerProfilePresenter.OnPlayerProfileCurrencyClicked
	// void OnPlayerProfileCurrencyClicked(ECurrencyType CurrencyType);                                                      // [0x497acd0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.PlayerProfilePresenter.OnPlayerProfileClicked
	// void OnPlayerProfileClicked();                                                                                        // [0x497acb0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.PlayerProfilePresenter.OnCurrentSpecialEventChanged
	// void OnCurrentSpecialEventChanged(FCombinedSpecialEventData& previousSpecialEvent, ESpecialEventStatus previousSpecialEventStatus, FCombinedSpecialEventData& currentSpecialEvent, ESpecialEventStatus currentSpecialEventStatus); // [0x4979f70] Final|Native|Private|HasOutParms 
	// Function /Script/DBDUIPresenters.PlayerProfilePresenter.HidePlayerProfile
	// void HidePlayerProfile();                                                                                             // [0x49797c0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.PlayerProfilePresenter.GetPlayerName
	// FText GetPlayerName();                                                                                                // [0x4979720] Final|Native|Private|Const 
	// Function /Script/DBDUIPresenters.PlayerProfilePresenter.FocusPlayerProfile
	// void FocusPlayerProfile(char Filter, char currencyFilter);                                                            // [0x4979650] Final|Native|Private 
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
	// void OnViewportCreated();                                                                                             // [0x497b3d0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.PresenterManager.OnPlayerStateChanged
	// void OnPlayerStateChanged(class APlayerState* PlayerState);                                                           // [0x497ad50] Final|Native|Private 
	// Function /Script/DBDUIPresenters.PresenterManager.OnLoadingTransition
	// void OnLoadingTransition(ELoadingTransitionType TransitionType);                                                      // [0x497a970] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.PresenterRequirementFunction
/// Size: 0x0020 (0x000030 - 0x000050)
class UPresenterRequirementFunction : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0030   (0x0020)  MISSED
};

/// Class /Script/DBDUIPresenters.ProcessingPopupPresenter
/// Size: 0x0010 (0x000128 - 0x000138)
class UProcessingPopupPresenter : public UBasePopupPresenter
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0128   (0x0010)  MISSED
};

/// Class /Script/DBDUIPresenters.ProfileMenuCustomizationSubPresenter
/// Size: 0x0058 (0x000070 - 0x0000C8)
class UProfileMenuCustomizationSubPresenter : public USubPresenter
{ 
public:
	SDK_UNDEFINED(16,4966) /* TScriptInterface<Class> */ __um(_profileMenuCustomizationWidget);                    // 0x0070   (0x0010)  
	TArray<class UStoreCustomizationItemViewData*>     _itemsData;                                                 // 0x0080   (0x0010)  
	TArray<class UStoreCustomizationItemViewData*>     _displayedItemsData;                                        // 0x0090   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x00A0   (0x0028)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.ProfileMenuCustomizationSubPresenter.OnSearchBarTextChanged
	// void OnSearchBarTextChanged(FString enteredText);                                                                     // [0x497b040] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ProfileMenuCustomizationSubPresenter.OnRewardGridItemClicked
	// void OnRewardGridItemClicked(int32_t selectedIndex);                                                                  // [0x497af90] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ProfileMenuCustomizationSubPresenter.OnEquipButtonClicked
	// void OnEquipButtonClicked();                                                                                          // [0x497a830] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ProfileMenuCustomizationSubPresenter.OnCustomizationSortingChanged
	// void OnCustomizationSortingChanged(ESortingOption itemSorting, ESortingOrder sortingOrder);                           // [0x497a420] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.ProfileMenuPresenter
/// Size: 0x0040 (0x0000E8 - 0x000128)
class UProfileMenuPresenter : public UPresenter
{ 
public:
	class UClass*                                      ProfileMenuWidgetClass;                                     // 0x00E8   (0x0008)  
	class UProfileMenuStatsSubPresenter*               _statsSubPresenter;                                         // 0x00F0   (0x0008)  
	class UProfileMenuCustomizationSubPresenter*       _badgeSubPresenter;                                         // 0x00F8   (0x0008)  
	class UProfileMenuCustomizationSubPresenter*       _bannerSubPresenter;                                        // 0x0100   (0x0008)  
	class USubPresenter*                               _activeSubPresenter;                                        // 0x0108   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0110   (0x0018)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.ProfileMenuPresenter.SetMenuState
	// void SetMenuState(EProfileMenuState menuState);                                                                       // [0x497b520] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ProfileMenuPresenter.OnSettingsButtonClicked
	// void OnSettingsButtonClicked();                                                                                       // [0x497b290] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ProfileMenuPresenter.OnBackButtonClicked
	// void OnBackButtonClicked();                                                                                           // [0x4979890] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.ProfileMenuStatsSubPresenter
/// Size: 0x0018 (0x000070 - 0x000088)
class UProfileMenuStatsSubPresenter : public USubPresenter
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0070   (0x0008)  MISSED
	SDK_UNDEFINED(16,4967) /* TScriptInterface<Class> */ __um(_profileMenuStatsWidget);                            // 0x0078   (0x0010)  
};

/// Class /Script/DBDUIPresenters.ProgressionSystemInfoPopupPresenter
/// Size: 0x0010 (0x000180 - 0x000190)
class UProgressionSystemInfoPopupPresenter : public UGenericPopupPresenter
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0180   (0x0010)  MISSED
};

/// Class /Script/DBDUIPresenters.ReportFeedbackPopupPresenter
/// Size: 0x0010 (0x000180 - 0x000190)
class UReportFeedbackPopupPresenter : public UGenericPopupPresenter
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0180   (0x0010)  MISSED
};

/// Class /Script/DBDUIPresenters.RewardPopupPresenter
/// Size: 0x0000 (0x000180 - 0x000180)
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
	SDK_UNDEFINED(80,4968) /* TMap<UClass*, UPresenterParentWidget*> */ __um(_presenterParentWidgets);             // 0x0048   (0x0050)  
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
/// Size: 0x0010 (0x000180 - 0x000190)
class USeasonEndRankRewardsPopupPresenter : public UGenericPopupPresenter
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0180   (0x0010)  MISSED
};

/// Class /Script/DBDUIPresenters.ShrineOfSecretsPresenter
/// Size: 0x0030 (0x0000E8 - 0x000118)
class UShrineOfSecretsPresenter : public UPresenter
{ 
public:
	class UClass*                                      ShrineOfSecretsWidgetClass;                                 // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x00F0   (0x0028)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.ShrineOfSecretsPresenter.OnPurchaseButtonClicked
	// void OnPurchaseButtonClicked(FShrineOfSecretsItemViewData& ShrineOfSecretsItemViewData);                              // [0x497ade0] Final|Native|Private|HasOutParms 
	// Function /Script/DBDUIPresenters.ShrineOfSecretsPresenter.OnItemBuyCompleted
	// void OnItemBuyCompleted(bool success);                                                                                // [0x497a8e0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ShrineOfSecretsPresenter.OnBackButtonClicked
	// void OnBackButtonClicked();                                                                                           // [0x49798b0] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.SkillCheckPresenter
/// Size: 0x0030 (0x000128 - 0x000158)
class USkillCheckPresenter : public UHudPresenter
{ 
public:
	class UClass*                                      SkillCheckWidgetClass;                                      // 0x0128   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0130   (0x0028)  MISSED
};

/// Class /Script/DBDUIPresenters.StoreSubPresenter
/// Size: 0x0030 (0x000070 - 0x0000A0)
class UStoreSubPresenter : public USubPresenter
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0070   (0x0018)  MISSED
	class Ushopmanager*                                _shopManager;                                               // 0x0088   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0090   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.StoreSubPresenter.OnSubTabSelected
	// void OnSubTabSelected(int32_t subTabId);                                                                              // [0x497ee20] Native|Protected     
};

/// Class /Script/DBDUIPresenters.StoreCharactersSubPresenter
/// Size: 0x02F8 (0x0000A0 - 0x000398)
class UStoreCharactersSubPresenter : public UStoreSubPresenter
{ 
public:
	class UClass*                                      StoreCharactersWidgetClass;                                 // 0x00A0   (0x0008)  
	FName                                              DisplayStandName;                                           // 0x00A8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x74];                                      // 0x00B4   (0x0074)  MISSED
	TArray<class UStoreCharacterItemViewData*>         _availableCharacters;                                       // 0x0128   (0x0010)  
	TArray<class UStoreCharacterItemViewData*>         _displayingCharacters;                                      // 0x0138   (0x0010)  
	SDK_UNDEFINED(80,4969) /* TMap<int32_t, UStoreCharacterItemViewData*> */ __um(_charactersMap);                 // 0x0148   (0x0050)  
	TArray<class UStoreCustomizationItemViewData*>     _availableCustomizations;                                   // 0x0198   (0x0010)  
	TArray<class UStoreCustomizationItemViewData*>     _displayingCustomizations;                                  // 0x01A8   (0x0010)  
	SDK_UNDEFINED(80,4970) /* TMap<FName, UStoreCustomizationItemViewData*> */ __um(_customizationsMap);           // 0x01B8   (0x0050)  
	FCharacterCustomization                            _defaultCustomization;                                      // 0x0208   (0x0024)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x022C   (0x0004)  MISSED
	FEquippedPlayerCustomization                       _equippedCustomization;                                     // 0x0230   (0x0038)  
	FEquippedPlayerCustomization                       _selectedCustomization;                                     // 0x0268   (0x0038)  
	TArray<FStoreCategoryViewData>                     _availableCategories;                                       // 0x02A0   (0x0010)  
	FStoreCharactersFiltersData                        _charactersFilterData;                                      // 0x02B0   (0x0058)  
	ESortingOption                                     _charactersSortingOption;                                   // 0x0308   (0x0001)  
	ESortingOrder                                      _charactersSortingOrder;                                    // 0x0309   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x030A   (0x0006)  MISSED
	FStoreCharactersFiltersData                        _customizationsFilterData;                                  // 0x0310   (0x0058)  
	ESortingOption                                     _customizationsSortingOption;                               // 0x0368   (0x0001)  
	ESortingOrder                                      _customizationsSortingOrder;                                // 0x0369   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2E];                                      // 0x036A   (0x002E)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.StoreCharactersSubPresenter.PlayMoriAnimation
	// void PlayMoriAnimation();                                                                                             // [0x497b4c0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreCharactersSubPresenter.OnMoriComplete
	// void OnMoriComplete(class UAnimationPreviewSubsystem* AnimationPreviewSubsystem);                                     // [0x497ab10] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreCharactersSubPresenter.OnCustomizationUnlockCompleted
	// void OnCustomizationUnlockCompleted(bool success);                                                                    // [0x497a570] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreCharactersSubPresenter.OnCustomizationUnlockClicked
	// void OnCustomizationUnlockClicked(ECurrencyType CurrencyType);                                                        // [0x497a4f0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreCharactersSubPresenter.OnCustomizationsSortingChanged
	// void OnCustomizationsSortingChanged(ESortingOption sortingOption, ESortingOrder sortingOrder);                        // [0x497a760] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreCharactersSubPresenter.OnCustomizationsFiltersChanged
	// void OnCustomizationsFiltersChanged(FStoreCharactersFiltersData& customizationsFilterData);                           // [0x497a620] Final|Native|Private|HasOutParms 
	// Function /Script/DBDUIPresenters.StoreCharactersSubPresenter.OnCustomizationSelected
	// void OnCustomizationSelected(FName CustomizationId, bool IsSelected);                                                 // [0x497a330] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreCharactersSubPresenter.OnCustomizationSelectAllClicked
	// void OnCustomizationSelectAllClicked();                                                                               // [0x497a310] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreCharactersSubPresenter.OnCustomizationSeePackClicked
	// void OnCustomizationSeePackClicked();                                                                                 // [0x497a2f0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreCharactersSubPresenter.OnCustomizationsClearFiltersClicked
	// void OnCustomizationsClearFiltersClicked();                                                                           // [0x497a600] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreCharactersSubPresenter.OnCustomizationEquipClicked
	// void OnCustomizationEquipClicked();                                                                                   // [0x497a2d0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreCharactersSubPresenter.OnCustomizationEquipAllClicked
	// void OnCustomizationEquipAllClicked();                                                                                // [0x497a2b0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreCharactersSubPresenter.OnCharmSlotSelected
	// void OnCharmSlotSelected(int32_t slotIndex);                                                                          // [0x4979d60] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreCharactersSubPresenter.OnCharacterUnlockCompleted
	// void OnCharacterUnlockCompleted(bool success);                                                                        // [0x4979aa0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreCharactersSubPresenter.OnCharacterUnlockClicked
	// void OnCharacterUnlockClicked(ECurrencyType CurrencyType);                                                            // [0x4979a20] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreCharactersSubPresenter.OnCharactersSortingChanged
	// void OnCharactersSortingChanged(ESortingOption sortingOption, ESortingOrder sortingOrder);                            // [0x4979c90] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreCharactersSubPresenter.OnCharactersFiltersChanged
	// void OnCharactersFiltersChanged(FStoreCharactersFiltersData& charactersFilterData);                                   // [0x4979b50] Final|Native|Private|HasOutParms 
	// Function /Script/DBDUIPresenters.StoreCharactersSubPresenter.OnCharacterSelected
	// void OnCharacterSelected(int32_t CharacterIndex);                                                                     // [0x4979990] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreCharactersSubPresenter.OnCharacterSeePackClicked
	// void OnCharacterSeePackClicked();                                                                                     // [0x4979970] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreCharactersSubPresenter.OnCharactersClearFiltersClicked
	// void OnCharactersClearFiltersClicked();                                                                               // [0x4979b30] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreCharactersSubPresenter.OnCharacterEquipClicked
	// void OnCharacterEquipClicked();                                                                                       // [0x4979950] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreCharactersSubPresenter.OnCategorySelected
	// void OnCategorySelected(ECustomizationCategory category);                                                             // [0x49798d0] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.StoreCollectionsSubPresenter
/// Size: 0x0088 (0x0000A0 - 0x000128)
class UStoreCollectionsSubPresenter : public UStoreSubPresenter
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x00A0   (0x0040)  MISSED
	TArray<class UStoreCollectionViewData*>            _specialCollectionsViewData;                                // 0x00E0   (0x0010)  
	TArray<class UStoreCollectionViewData*>            _featuredCollectionsViewData;                               // 0x00F0   (0x0010)  
	TArray<class UStoreCollectionViewData*>            _allCollectionsViewData;                                    // 0x0100   (0x0010)  
	class UStoreCollectionViewData*                    _focusedCollection;                                         // 0x0110   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0118   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.StoreCollectionsSubPresenter.OnCollectionUnfocused
	// void OnCollectionUnfocused();                                                                                         // [0x497e9a0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreCollectionsSubPresenter.OnCollectionItemSelected
	// void OnCollectionItemSelected(FString collectionId, FName selectedCustomizationItemId);                               // [0x497e8a0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreCollectionsSubPresenter.OnCollectionFocused
	// void OnCollectionFocused(FString collectionId);                                                                       // [0x497e800] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.StoreFeaturedSubPresenter
/// Size: 0x0040 (0x0000A0 - 0x0000E0)
class UStoreFeaturedSubPresenter : public UStoreSubPresenter
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x00A0   (0x0010)  MISSED
	TArray<class UStoreCustomizationItemViewData*>     _itemsViewData;                                             // 0x00B0   (0x0010)  
	TArray<FStoreFeaturedCharacterViewData>            _charactersViewData;                                        // 0x00C0   (0x0010)  
	TArray<class UStoreFeaturedChapterPackViewData*>   _chapterPacksViewData;                                      // 0x00D0   (0x0010)  


	/// Functions
	// Function /Script/DBDUIPresenters.StoreFeaturedSubPresenter.RequestMoveToCharactersPage
	// void RequestMoveToCharactersPage(FStoreRedirectionData& StoreRedirectionData);                                        // [0x497ef30] Final|Native|Private|HasOutParms 
	// Function /Script/DBDUIPresenters.StoreFeaturedSubPresenter.OnBackendStoreDataReceived
	// void OnBackendStoreDataReceived(bool success);                                                                        // [0x497e500] Native|Public        
};

/// Class /Script/DBDUIPresenters.StoreMenuPresenter
/// Size: 0x0098 (0x0000E8 - 0x000180)
class UStoreMenuPresenter : public UPresenter
{ 
public:
	class UClass*                                      StoreMenuWidgetClass;                                       // 0x00E8   (0x0008)  
	FName                                              DisplayStandName;                                           // 0x00F0   (0x000C)  
	float                                              InStoreCameraTransitionDurationSeconds;                     // 0x00FC   (0x0004)  
	class UStoreFeaturedSubPresenter*                  _storeFeaturedSubPresenter;                                 // 0x0100   (0x0008)  
	class UStoreSpecialsSubPresenter*                  _storeSpecialsSubPresenter;                                 // 0x0108   (0x0008)  
	class UStoreCollectionsSubPresenter*               _storeCollectionsSubPresenter;                              // 0x0110   (0x0008)  
	class UStoreSpecialPacksSubPresenter*              _storeSpecialPacksSubPresenter;                             // 0x0118   (0x0008)  
	class UStoreCharactersSubPresenter*                _storeKillersSubPresenter;                                  // 0x0120   (0x0008)  
	class UStoreCharactersSubPresenter*                _storeSurvivorsSubPresenter;                                // 0x0128   (0x0008)  
	class UStoreSubPresenter*                          _activeSubPresenter;                                        // 0x0130   (0x0008)  
	class Ushopmanager*                                _shopManager;                                               // 0x0138   (0x0008)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0140   (0x0040)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.StoreMenuPresenter.OpenRedeemCodePopup
	// void OpenRedeemCodePopup();                                                                                           // [0x497ef10] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreMenuPresenter.OpenAuricCellsOverlay
	// void OpenAuricCellsOverlay();                                                                                         // [0x497e4c0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreMenuPresenter.OnStopSubPresenterAsyncOperation
	// void OnStopSubPresenterAsyncOperation(class USubPresenter* SubPresenter);                                             // [0x497ed90] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreMenuPresenter.OnStartSubPresenterAsyncOperation
	// void OnStartSubPresenterAsyncOperation(class USubPresenter* SubPresenter);                                            // [0x497ed00] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreMenuPresenter.OnMenuTabSelected
	// void OnMenuTabSelected(EStoreMenuState menuState);                                                                    // [0x497ea80] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreMenuPresenter.OnBackAction
	// void OnBackAction();                                                                                                  // [0x497e4e0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreMenuPresenter.OnAllStoreDataLoadComplete
	// void OnAllStoreDataLoadComplete(bool success);                                                                        // [0x497e290] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.StoreSpecialPacksSubPresenter
/// Size: 0x0098 (0x0000A0 - 0x000138)
class UStoreSpecialPacksSubPresenter : public UStoreSubPresenter
{ 
public:
	class UClass*                                      StoreBundlesWidgetClass;                                    // 0x00A0   (0x0008)  
	TArray<class UStoreSpecialPackViewData*>           _specialPacks;                                              // 0x00A8   (0x0010)  
	TArray<class UStoreChapterPackViewData*>           _chapterPacks;                                              // 0x00B8   (0x0010)  
	TArray<FStoreHeritagePackViewData>                 _heritagePacks;                                             // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x00D8   (0x0060)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.StoreSpecialPacksSubPresenter.RequestMoveToCharactersPage
	// void RequestMoveToCharactersPage(FStoreRedirectionData& redirectionData);                                             // [0x497ef30] Final|Native|Private|HasOutParms 
	// Function /Script/DBDUIPresenters.StoreSpecialPacksSubPresenter.OnSpecialPackBuyClicked
	// void OnSpecialPackBuyClicked(FString PackId);                                                                         // [0x497ec60] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreSpecialPacksSubPresenter.OnHeritagePackBuyClicked
	// void OnHeritagePackBuyClicked(FString PackId);                                                                        // [0x497e9e0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreSpecialPacksSubPresenter.OnChapterPackRedirectClicked
	// void OnChapterPackRedirectClicked(FString chapterId, FString HeritageId);                                             // [0x497e700] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreSpecialPacksSubPresenter.OnChapterPackBuyClicked
	// void OnChapterPackBuyClicked(FString PackId);                                                                         // [0x497e660] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreSpecialPacksSubPresenter.OnArchivePassItemClicked
	// void OnArchivePassItemClicked(FName& archiveId, FString PackId);                                                      // [0x497e320] Final|Native|Private|HasOutParms 
};

/// Class /Script/DBDUIPresenters.StoreSpecialsSubPresenter
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UStoreSpecialsSubPresenter : public UStoreSubPresenter
{ 
public:
	SDK_UNDEFINED(16,4971) /* TScriptInterface<Class> */ __um(_storeSpecialsWidget);                               // 0x00A0   (0x0010)  
	TArray<class UStoreCustomizationItemViewData*>     _cachedSpecialsItems;                                       // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00C0   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.StoreSpecialsSubPresenter.RequestMoveToCharactersPage
	// void RequestMoveToCharactersPage(FStoreRedirectionData& StoreRedirectionData);                                        // [0x497ef30] Final|Native|Private|HasOutParms 
	// Function /Script/DBDUIPresenters.StoreSpecialsSubPresenter.OnPremiumTransactionCompleted
	// void OnPremiumTransactionCompleted(bool success);                                                                     // [0x497eb90] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreSpecialsSubPresenter.OnAuricCellSpecialOtherOptions
	// void OnAuricCellSpecialOtherOptions();                                                                                // [0x497e4c0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.StoreSpecialsSubPresenter.OnAuricCellSpecialBuyAction
	// void OnAuricCellSpecialBuyAction(FName bundleId);                                                                     // [0x497e420] Final|Native|Private 
};

/// Struct /Script/DBDUIPresenters.SubtitlesEntry
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSubtitlesEntry
{ 
	SDK_UNDEFINED(16,4972) /* FString */               __um(Subtitle);                                             // 0x0000   (0x0010)  
	bool                                               isAOneLiner;                                                // 0x0010   (0x0001)  
	bool                                               hasDurationOverride;                                        // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0012   (0x0002)  MISSED
	float                                              durationOverride;                                           // 0x0014   (0x0004)  
};

/// Class /Script/DBDUIPresenters.SubtitlesPresenter
/// Size: 0x0050 (0x0000E8 - 0x000138)
class USubtitlesPresenter : public UPresenter
{ 
public:
	class UClass*                                      SubtitlesWidgetClass;                                       // 0x00E8   (0x0008)  
	int32_t                                            NumberOfCharactersPerLine;                                  // 0x00F0   (0x0004)  
	float                                              DurationPerLine;                                            // 0x00F4   (0x0004)  
	bool                                               KeepSingleCharacter;                                        // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00F9   (0x0007)  MISSED
	TArray<FSubtitlesEntry>                            _entryQueue;                                                // 0x0100   (0x0010)  
	FTimerHandle                                       _timerHandle;                                               // 0x0110   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0118   (0x0020)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.SubtitlesPresenter.OnEntryTimedOut
	// void OnEntryTimedOut();                                                                                               // [0x497e9c0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.SubtitlesPresenter.IsSubtitlesEnabled
	// bool IsSubtitlesEnabled();                                                                                            // [0x497e230] Final|Native|Private|Const 
};

/// Class /Script/DBDUIPresenters.TemplatePresenter
/// Size: 0x0020 (0x000128 - 0x000148)
class UTemplatePresenter : public UHudPresenter
{ 
public:
	class UClass*                                      TemplateWidgetClass;                                        // 0x0128   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0130   (0x0018)  MISSED
};

/// Class /Script/DBDUIPresenters.TestBuildFlagPresenter
/// Size: 0x0020 (0x0000E8 - 0x000108)
class UTestBuildFlagPresenter : public UPresenter
{ 
public:
	class UClass*                                      TestBuildFlagWidgetClass;                                   // 0x00E8   (0x0008)  
	ETestBuildFlagPosition                             testBuildFlagPosition;                                      // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x17];                                      // 0x00F1   (0x0017)  MISSED
};

/// Class /Script/DBDUIPresenters.TestPresenter
/// Size: 0x0010 (0x0000E8 - 0x0000F8)
class UTestPresenter : public UPresenter
{ 
public:
	class UClass*                                      TestWidgetClass;                                            // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00F0   (0x0008)  MISSED
};

/// Class /Script/DBDUIPresenters.ToastNotificationPresenter
/// Size: 0x0020 (0x0000E8 - 0x000108)
class UToastNotificationPresenter : public UPresenter
{ 
public:
	class UClass*                                      ToastNotificationContainerWidgetClass;                      // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x00F0   (0x0018)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.ToastNotificationPresenter.OnNotificationRemoved
	// void OnNotificationRemoved(uint32_t notificationId);                                                                  // [0x497eb00] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ToastNotificationPresenter.OnButtonSelected
	// void OnButtonSelected(int32_t buttonId, uint32_t notificationId);                                                     // [0x497e590] Final|Native|Private 
	// Function /Script/DBDUIPresenters.ToastNotificationPresenter.DisplayPopup
	// void DisplayPopup(uint32_t notificationId);                                                                           // [0x497e1a0] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.HudTutorialBlockingNotificationsPresenter
/// Size: 0x00E8 (0x000128 - 0x000210)
class UHudTutorialBlockingNotificationsPresenter : public UHudPresenter
{ 
public:
	class UClass*                                      CoreTutorialBlockingNotificationsWidget;                    // 0x0128   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0130   (0x0008)  MISSED
	class ATutorialsUtilities*                         _tutorialsUtilities;                                        // 0x0138   (0x0008)  
	unsigned char                                      UnknownData01_6[0xD0];                                      // 0x0140   (0x00D0)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.HudTutorialBlockingNotificationsPresenter.OnTutorialNotificationClosedByUserInput
	// void OnTutorialNotificationClosedByUserInput();                                                                       // [0x497eef0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.HudTutorialBlockingNotificationsPresenter.OnTutorialHudFadeOutTriggered
	// void OnTutorialHudFadeOutTriggered();                                                                                 // [0x497eed0] Final|Native|Private 
	// Function /Script/DBDUIPresenters.HudTutorialBlockingNotificationsPresenter.OnTutorialHudFadeInTriggered
	// void OnTutorialHudFadeInTriggered();                                                                                  // [0x497eeb0] Final|Native|Private 
};

/// Class /Script/DBDUIPresenters.HudTutorialMysteryNotesPresenter
/// Size: 0x0018 (0x000128 - 0x000140)
class UHudTutorialMysteryNotesPresenter : public UHudPresenter
{ 
public:
	class UClass*                                      CoreTutorialMysteryNoteWidget;                              // 0x0128   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0130   (0x0010)  MISSED
};

/// Class /Script/DBDUIPresenters.UnlockPersonalPerksPopupPresenter
/// Size: 0x0010 (0x000180 - 0x000190)
class UUnlockPersonalPerksPopupPresenter : public UGenericPopupPresenter
{ 
public:
	TArray<class UMenuPerkViewData*>                   _perksData;                                                 // 0x0180   (0x0010)  
};

/// Class /Script/DBDUIPresenters.WatermarkPresenter
/// Size: 0x0018 (0x0000E8 - 0x000100)
class UWatermarkPresenter : public UPresenter
{ 
public:
	class UClass*                                      WatermarkWidgetClass;                                       // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00F0   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDUIPresenters.WatermarkPresenter.IsUsingCommandLineArgument
	// bool IsUsingCommandLineArgument();                                                                                    // [0x497e260] Final|Native|Protected 
	// Function /Script/DBDUIPresenters.WatermarkPresenter.IsSteamBuild
	// bool IsSteamBuild();                                                                                                  // [0x44525f0] Final|Native|Protected 
	// Function /Script/DBDUIPresenters.WatermarkPresenter.IsNonShippingBuild
	// bool IsNonShippingBuild();                                                                                            // [0x44525f0] Final|Native|Protected 
};

/// Struct /Script/DBDUIPresenters.QuestEventsTrackingData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FQuestEventsTrackingData
{ 
	SDK_UNDEFINED(16,4973) /* FString */               __um(QuestEventId);                                         // 0x0000   (0x0010)  
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

