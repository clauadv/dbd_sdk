
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
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: InputCore
/// dependency: RemoteContentCache
/// dependency: UMG

/// Enum /Script/DBDUIViewInterfaces.EOriginWidgetState
/// Size: 0x07
enum class EOriginWidgetState : uint8_t
{
	EOriginWidgetState__None                                                         = 0,
	EOriginWidgetState__CurrencyPurchase                                             = 1,
	EOriginWidgetState__Store                                                        = 2,
	EOriginWidgetState__Archives                                                     = 3,
	EOriginWidgetState__Gameplay                                                     = 4,
	EOriginWidgetState__MilestonePoints                                              = 5,
	EOriginWidgetState__EOriginWidgetState_MAX                                       = 6
};

/// Enum /Script/DBDUIViewInterfaces.EArchiveTomeMenuState
/// Size: 0x03
enum class EArchiveTomeMenuState : uint8_t
{
	EArchiveTomeMenuState__QuestMap                                                  = 0,
	EArchiveTomeMenuState__Journal                                                   = 1,
	EArchiveTomeMenuState__EArchiveTomeMenuState_MAX                                 = 2
};

/// Enum /Script/DBDUIViewInterfaces.EOnboardingMenuState
/// Size: 0x03
enum class EOnboardingMenuState : uint8_t
{
	EOnboardingMenuState__Tutorial                                                   = 0,
	EOnboardingMenuState__GameManual                                                 = 1,
	EOnboardingMenuState__EOnboardingMenuState_MAX                                   = 2
};

/// Enum /Script/DBDUIViewInterfaces.EProfileMenuState
/// Size: 0x04
enum class EProfileMenuState : uint8_t
{
	EProfileMenuState__Stats                                                         = 0,
	EProfileMenuState__Badge                                                         = 1,
	EProfileMenuState__Banner                                                        = 2,
	EProfileMenuState__EProfileMenuState_MAX                                         = 3
};

/// Enum /Script/DBDUIViewInterfaces.EStoreCharactersMenuState
/// Size: 0x04
enum class EStoreCharactersMenuState : uint8_t
{
	EStoreCharactersMenuState__Selection                                             = 0,
	EStoreCharactersMenuState__Customizations                                        = 1,
	EStoreCharactersMenuState__Bio                                                   = 2,
	EStoreCharactersMenuState__EStoreCharactersMenuState_MAX                         = 3
};

/// Enum /Script/DBDUIViewInterfaces.EStoreMenuState
/// Size: 0x07
enum class EStoreMenuState : uint8_t
{
	EStoreMenuState__Featured                                                        = 0,
	EStoreMenuState__Specials                                                        = 1,
	EStoreMenuState__Collections                                                     = 2,
	EStoreMenuState__SpecialPacks                                                    = 3,
	EStoreMenuState__Killers                                                         = 4,
	EStoreMenuState__Survivors                                                       = 5,
	EStoreMenuState__EStoreMenuState_MAX                                             = 6
};

/// Enum /Script/DBDUIViewInterfaces.EAntiCampSelfUnhookMeterState
/// Size: 0x05
enum class EAntiCampSelfUnhookMeterState : uint8_t
{
	EAntiCampSelfUnhookMeterState__Hidden                                            = 0,
	EAntiCampSelfUnhookMeterState__FillingUp                                         = 1,
	EAntiCampSelfUnhookMeterState__Stopped                                           = 2,
	EAntiCampSelfUnhookMeterState__Full                                              = 3,
	EAntiCampSelfUnhookMeterState__EAntiCampSelfUnhookMeterState_MAX                 = 4
};

/// Enum /Script/DBDUIViewInterfaces.EArchivePathStatus
/// Size: 0x04
enum class EArchivePathStatus : uint8_t
{
	EArchivePathStatus__Closed                                                       = 0,
	EArchivePathStatus__Available                                                    = 1,
	EArchivePathStatus__Completed                                                    = 2,
	EArchivePathStatus__EArchivePathStatus_MAX                                       = 3
};

/// Enum /Script/DBDUIViewInterfaces.ETierType
/// Size: 0x03
enum class ETierType : uint8_t
{
	ETierType__None                                                                  = 0,
	ETierType__Bonus                                                                 = 1,
	ETierType__ETierType_MAX                                                         = 2
};

/// Enum /Script/DBDUIViewInterfaces.EArchiveTomeType
/// Size: 0x04
enum class EArchiveTomeType : uint8_t
{
	EArchiveTomeType__CurrentTome                                                    = 0,
	EArchiveTomeType__PastTome                                                       = 1,
	EArchiveTomeType__EventTome                                                      = 2,
	EArchiveTomeType__EArchiveTomeType_MAX                                           = 3
};

/// Enum /Script/DBDUIViewInterfaces.EEventEntryTabState
/// Size: 0x05
enum class EEventEntryTabState : uint8_t
{
	EEventEntryTabState__Event                                                       = 0,
	EEventEntryTabState__Details                                                     = 1,
	EEventEntryTabState__Collection                                                  = 2,
	EEventEntryTabState__Store                                                       = 3,
	EEventEntryTabState__EEventEntryTabState_MAX                                     = 4
};

/// Enum /Script/DBDUIViewInterfaces.EGameManualMenuState
/// Size: 0x03
enum class EGameManualMenuState : uint8_t
{
	EGameManualMenuState__Categories                                                 = 0,
	EGameManualMenuState__Topics                                                     = 1,
	EGameManualMenuState__EGameManualMenuState_MAX                                   = 2
};

/// Enum /Script/DBDUIViewInterfaces.ESingleHookState
/// Size: 0x05
enum class ESingleHookState : uint8_t
{
	ESingleHookState__EMPTY                                                          = 0,
	ESingleHookState__UNHOOKED                                                       = 1,
	ESingleHookState__HOOKED                                                         = 2,
	ESingleHookState__DISCONNECTED                                                   = 3,
	ESingleHookState__ESingleHookState_MAX                                           = 4
};

/// Enum /Script/DBDUIViewInterfaces.EAimingCrosshairState
/// Size: 0x08
enum class EAimingCrosshairState : uint8_t
{
	EAimingCrosshairState__Hidden                                                    = 0,
	EAimingCrosshairState__NoTarget                                                  = 1,
	EAimingCrosshairState__Cooldown                                                  = 2,
	EAimingCrosshairState__Assimilating                                              = 3,
	EAimingCrosshairState__Teleporting                                               = 4,
	EAimingCrosshairState__ProgressPaused                                            = 5,
	EAimingCrosshairState__LockedOut                                                 = 6,
	EAimingCrosshairState__EAimingCrosshairState_MAX                                 = 7
};

/// Enum /Script/DBDUIViewInterfaces.EHudStatusEffectAlertViewType
/// Size: 0x05
enum class EHudStatusEffectAlertViewType : uint8_t
{
	EHudStatusEffectAlertViewType__Unhandled                                         = 0,
	EHudStatusEffectAlertViewType__Perk                                              = 1,
	EHudStatusEffectAlertViewType__Item                                              = 2,
	EHudStatusEffectAlertViewType__Addon                                             = 3,
	EHudStatusEffectAlertViewType__EHudStatusEffectAlertViewType_MAX                 = 4
};

/// Enum /Script/DBDUIViewInterfaces.EInteractionPromptType
/// Size: 0x08
enum class EInteractionPromptType : uint8_t
{
	EInteractionPromptType__PressButton                                              = 0,
	EInteractionPromptType__MashButton                                               = 1,
	EInteractionPromptType__HoldButton                                               = 2,
	EInteractionPromptType__AlternateTwoButtons                                      = 3,
	EInteractionPromptType__WiggleThumbstick                                         = 4,
	EInteractionPromptType__MovementAxes                                             = 5,
	EInteractionPromptType__MovementKeys                                             = 6,
	EInteractionPromptType__EInteractionPromptType_MAX                               = 7
};

/// Enum /Script/DBDUIViewInterfaces.EMilestoneTrackerItemState
/// Size: 0x04
enum class EMilestoneTrackerItemState : uint8_t
{
	EMilestoneTrackerItemState__Unlocked                                             = 0,
	EMilestoneTrackerItemState__InProgress                                           = 1,
	EMilestoneTrackerItemState__Locked                                               = 2,
	EMilestoneTrackerItemState__EMilestoneTrackerItemState_MAX                       = 3
};

/// Enum /Script/DBDUIViewInterfaces.EStoreCollectionsMenuState
/// Size: 0x04
enum class EStoreCollectionsMenuState : uint8_t
{
	EStoreCollectionsMenuState__Special                                              = 0,
	EStoreCollectionsMenuState__Featured                                             = 1,
	EStoreCollectionsMenuState__All                                                  = 2,
	EStoreCollectionsMenuState__EStoreCollectionsMenuState_MAX                       = 3
};

/// Enum /Script/DBDUIViewInterfaces.EStoreItemLayout
/// Size: 0x08
enum class EStoreItemLayout : uint8_t
{
	EStoreItemLayout__None                                                           = 0,
	EStoreItemLayout__OwnedTag                                                       = 1,
	EStoreItemLayout__LockedTag                                                      = 2,
	EStoreItemLayout__TimerTags                                                      = 4,
	EStoreItemLayout__PriceTags                                                      = 8,
	EStoreItemLayout__EventCheckmarkTag                                              = 16,
	EStoreItemLayout__EventIconTag                                                   = 32,
	EStoreItemLayout__EStoreItemLayout_MAX                                           = 33
};

/// Enum /Script/DBDUIViewInterfaces.EStoreSpecialPacksMenuState
/// Size: 0x04
enum class EStoreSpecialPacksMenuState : uint8_t
{
	EStoreSpecialPacksMenuState__Special                                             = 0,
	EStoreSpecialPacksMenuState__Chapter                                             = 1,
	EStoreSpecialPacksMenuState__Heritage                                            = 2,
	EStoreSpecialPacksMenuState__EStoreSpecialPacksMenuState_MAX                     = 3
};

/// Enum /Script/DBDUIViewInterfaces.ETestBuildFlagPosition
/// Size: 0x02
enum class ETestBuildFlagPosition : uint8_t
{
	ETestBuildFlagPosition__Hud                                                      = 0,
	ETestBuildFlagPosition__ETestBuildFlagPosition_MAX                               = 1
};

/// Class /Script/DBDUIViewInterfaces.AddonViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UAddonViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.AddonViewInterface.SetData
	// void SetData(FAddonViewData& BaseLoadoutPartViewData);                                                                // [0x49d66b0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.AddonViewInterface.ClearData
	// void ClearData();                                                                                                     // [0x49d5eb0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.AlertsViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UAlertsViewInterface : public UInterface
{ 
public:
};

/// Class /Script/DBDUIViewInterfaces.AntiCampSelfUnhookMeterViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UAntiCampSelfUnhookMeterViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.AntiCampSelfUnhookMeterViewInterface.SetState
	// void SetState(EAntiCampSelfUnhookMeterState NewState);                                                                // [0x49d70c0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.AntiCampSelfUnhookMeterViewInterface.SetProgress
	// void SetProgress(float Progress);                                                                                     // [0x49d6d20] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.ArchiveCompendiumViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UArchiveCompendiumViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.ArchiveCompendiumViewInterface.SetPastTomesViewData
	// void SetPastTomesViewData(TArray<FCompendiumButtonData>& pastStoryButtonData);                                        // [0x49d6bf0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.ArchiveEditorViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UArchiveEditorViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.ArchiveEditorViewInterface.InitEditor
	// void InitEditor();                                                                                                    // [0x49d6100] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveEditorViewInterface.DisplayEditorSaving
	// void DisplayEditorSaving(FString Path);                                                                               // [0x49d5ef0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.ArchiveImageViewerViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UArchiveImageViewerViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.ArchiveImageViewerViewInterface.UpdateContent
	// void UpdateContent(FArchivesVignetteEntryViewData& Data);                                                             // [0x49d8140] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveImageViewerViewInterface.SetVoiceOverPlaying
	// void SetVoiceOverPlaying(bool voiceOverPlaying);                                                                      // [0x49d7c10] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveImageViewerViewInterface.SetVoiceOverAutoplay
	// void SetVoiceOverAutoplay(bool voiceOverAutoplay);                                                                    // [0x49d6280] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveImageViewerViewInterface.SetTextVisibility
	// void SetTextVisibility(bool visible);                                                                                 // [0x49d6120] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.ArchiveJournalViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UArchiveJournalViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.ArchiveJournalViewInterface.SetVoiceOverPlaying
	// void SetVoiceOverPlaying(bool voiceOverPlaying);                                                                      // [0x49d7ca0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveJournalViewInterface.SetVoiceOverAutoplay
	// void SetVoiceOverAutoplay(bool voiceOverAutoplay);                                                                    // [0x49d7030] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveJournalViewInterface.SetVignetteList
	// void SetVignetteList(TArray<FArchivesVignetteViewData>& vignetteDataList);                                            // [0x49d7ab0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveJournalViewInterface.SetVignetteInputsEnabled
	// void SetVignetteInputsEnabled(bool Enabled);                                                                          // [0x49d6620] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveJournalViewInterface.SetVignetteData
	// void SetVignetteData(FArchivesVignetteViewData& vignetteViewData);                                                    // [0x49d78b0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveJournalViewInterface.SetEntryData
	// void SetEntryData(FArchivesVignetteEntryViewData& entryViewData);                                                     // [0x49d6770] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveJournalViewInterface.SetCinematicButtonsEnabled
	// void SetCinematicButtonsEnabled(bool Enabled);                                                                        // [0x49d6590] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveJournalViewInterface.SetArrowButtonEnabled
	// void SetArrowButtonEnabled(bool IsEnabled);                                                                           // [0x49d6280] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveJournalViewInterface.OnImageViewerVoiceOverPlayed
	// void OnImageViewerVoiceOverPlayed();                                                                                  // [0x49d6100] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveJournalViewInterface.OnImageViewerVoiceOverAutoplay
	// void OnImageViewerVoiceOverAutoplay(bool autoplay);                                                                   // [0x49d6120] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UArchiveLevelProgressionViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.UpdateLevelStatus
	// void UpdateLevelStatus(int32_t Level, EArchivesStoryLevelStatus Status);                                              // [0x49d8260] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.SetTomeRewardsData
	// void SetTomeRewardsData(TArray<FRewardWrapperViewData>& RewardsData, bool areLocked);                                 // [0x49d7740] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.SetTomeLevelsData
	// void SetTomeLevelsData(TArray<UArchiveStoryLevelViewData*>& levelsData, int32_t selectedLevel);                       // [0x49d7640] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.SetRewardsContainerVisibility
	// void SetRewardsContainerVisibility(bool IsVisible);                                                                   // [0x49d6590] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.SetLevelSelectorVisibility
	// void SetLevelSelectorVisibility(bool IsVisible);                                                                      // [0x49d6ae0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.SetLevelSelectorEnabled
	// void SetLevelSelectorEnabled(bool Enabled);                                                                           // [0x49d6a50] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.SetActiveLevel
	// void SetActiveLevel(int32_t levelIndex, bool performAction);                                                          // [0x49d61b0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.PlayRewardsAnimation
	// void PlayRewardsAnimation();                                                                                          // [0x49d5eb0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveLevelProgressionViewInterface.GoToNextLevel
	// void GoToNextLevel(int32_t levelIndex);                                                                               // [0x49d6050] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.ArchiveStoryLevelViewData
/// Size: 0x0010 (0x000030 - 0x000040)
class UArchiveStoryLevelViewData : public UObject
{ 
public:
	int32_t                                            Level;                                                      // 0x0030   (0x0004)  
	EArchivesStoryLevelStatus                          Status;                                                     // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	FDateTime                                          StartDate;                                                  // 0x0038   (0x0008)  
};

/// Class /Script/DBDUIViewInterfaces.ArchiveMenuViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UArchiveMenuViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.ArchiveMenuViewInterface.UpdateBackgroundSkin
	// void UpdateBackgroundSkin(int32_t Key, FArchiveTomeSkinData& Data);                                                   // [0x49d8040] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveMenuViewInterface.ShowUI
	// void ShowUI();                                                                                                        // [0x49d6100] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveMenuViewInterface.ShowSlotSelector
	// void ShowSlotSelector(FArchiveNodeViewData& Data);                                                                    // [0x49d7d30] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveMenuViewInterface.SetTitle
	// void SetTitle(FText& Title);                                                                                          // [0x49d7570] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveMenuViewInterface.SetTabsInputsEnabled
	// void SetTabsInputsEnabled(bool Enabled);                                                                              // [0x49d6120] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveMenuViewInterface.SetTabSelected
	// void SetTabSelected(int32_t Key);                                                                                     // [0x49d7370] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveMenuViewInterface.SetTabsData
	// void SetTabsData(TArray<FTabWidgetData>& tabsData, int32_t SelectedKey);                                              // [0x49d7400] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveMenuViewInterface.SetTabEnabled
	// void SetTabEnabled(int32_t Key, bool Enabled);                                                                        // [0x49d72a0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveMenuViewInterface.SetSubtitleVisible
	// void SetSubtitleVisible(bool IsVisible);                                                                              // [0x49d7210] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveMenuViewInterface.SetSubtitle
	// void SetSubtitle(FText& Subtitle);                                                                                    // [0x49d7140] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveMenuViewInterface.SetReminderSlotsEnabled
	// void SetReminderSlotsEnabled(bool Enabled);                                                                           // [0x49d7030] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveMenuViewInterface.SetRemainingTimeVisible
	// void SetRemainingTimeVisible(bool IsVisible);                                                                         // [0x49d6fa0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveMenuViewInterface.SetRemainingTime
	// void SetRemainingTime(FString RemainingTime, bool isMoreThanWarningThreshold, EArchiveMenuState menuState);           // [0x49d6e70] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveMenuViewInterface.SetQuestNodeHoverEffect
	// void SetQuestNodeHoverEffect(EPlayerRole Role, bool IsHovered);                                                       // [0x49d6da0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveMenuViewInterface.SetMenuState
	// void SetMenuState(EArchiveMenuState menuState);                                                                       // [0x49d6b70] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveMenuViewInterface.SetInfoButtonVisible
	// void SetInfoButtonVisible(bool IsVisible);                                                                            // [0x49d69c0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveMenuViewInterface.SetInfoButtonEnabled
	// void SetInfoButtonEnabled(bool IsEnabled);                                                                            // [0x49d6930] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveMenuViewInterface.SetEventLabel
	// void SetEventLabel(FString eventLabel);                                                                               // [0x49d6890] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveMenuViewInterface.SetControllerElementsEnabled
	// void SetControllerElementsEnabled(bool Enabled);                                                                      // [0x49d6620] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveMenuViewInterface.SetChallengeReminderVisibility
	// void SetChallengeReminderVisibility(bool IsVisible);                                                                  // [0x49d6500] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveMenuViewInterface.SetChallengeReminderData
	// void SetChallengeReminderData(FArchiveChallengeReminderViewData& Data, EPlayerRole Role, bool needsAnimation, FVector2D& animationOriginalPosition); // [0x49d6310] Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveMenuViewInterface.Init
	// void Init();                                                                                                          // [0x49d60e0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveMenuViewInterface.HideUI
	// void HideUI();                                                                                                        // [0x49d5eb0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveMenuViewInterface.GetArchiveTomeInterface
	// TScriptInterface<Class> GetArchiveTomeInterface();                                                                    // [0x49d6010] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DBDUIViewInterfaces.ArchiveMenuViewInterface.GetArchiveRiftInterface
	// TScriptInterface<Class> GetArchiveRiftInterface();                                                                    // [0x49d5fd0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DBDUIViewInterfaces.ArchiveMenuViewInterface.GetArchiveCompendiumInterface
	// TScriptInterface<Class> GetArchiveCompendiumInterface();                                                              // [0x49d5f90] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DBDUIViewInterfaces.ArchiveMenuViewInterface.CloseSlotSelector
	// void CloseSlotSelector();                                                                                             // [0x49d5ed0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveMenuViewInterface.ClearChallengeReminderData
	// void ClearChallengeReminderData(EPlayerRole Role);                                                                    // [0x49d5e30] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.BasePopupViewData
/// Size: 0x0038 (0x000030 - 0x000068)
class UBasePopupViewData : public UObject
{ 
public:
	EPopupPriority                                     Priority;                                                   // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	SDK_UNDEFINED(24,1268) /* FText */                 __um(Title);                                                // 0x0038   (0x0018)  
	SDK_UNDEFINED(24,1269) /* FText */                 __um(Message);                                              // 0x0050   (0x0018)  
};

/// Struct /Script/DBDUIViewInterfaces.PopupButtonViewData
/// Size: 0x0080 (0x000000 - 0x000080)
struct FPopupButtonViewData
{ 
	SDK_UNDEFINED(24,1270) /* FText */                 __um(label);                                                // 0x0000   (0x0018)  
	FKey                                               Key;                                                        // 0x0018   (0x0020)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x0038   (0x0048)  MISSED
};

/// Class /Script/DBDUIViewInterfaces.GenericPopupViewData
/// Size: 0x0188 (0x000068 - 0x0001F0)
class UGenericPopupViewData : public UBasePopupViewData
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0068   (0x0008)  MISSED
	FPopupButtonViewData                               ProgressionData;                                            // 0x0070   (0x0080)  
	FPopupButtonViewData                               RegressionData;                                             // 0x00F0   (0x0080)  
	FPopupButtonViewData                               AlternativeData;                                            // 0x0170   (0x0080)  
};

/// Class /Script/DBDUIViewInterfaces.ArchivePassPurchasePopupViewData
/// Size: 0x0060 (0x0001F0 - 0x000250)
class UArchivePassPurchasePopupViewData : public UGenericPopupViewData
{ 
public:
	SDK_UNDEFINED(24,1271) /* FText */                 __um(AvailabilityDates);                                    // 0x01F0   (0x0018)  
	SDK_UNDEFINED(48,1272) /* TWeakObjectPtr<UTexture2D*> */ __um(ImageTexture);                                   // 0x0208   (0x0030)  
	ECurrencyType                                      CurrencyType;                                               // 0x0238   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0239   (0x0003)  MISSED
	int32_t                                            Price;                                                      // 0x023C   (0x0004)  
	float                                              DiscountPercentage;                                         // 0x0240   (0x0004)  
	bool                                               IsAffordable;                                               // 0x0244   (0x0001)  
	unsigned char                                      UnknownData01_6[0xB];                                       // 0x0245   (0x000B)  MISSED
};

/// Class /Script/DBDUIViewInterfaces.ArchivePassPurchasePopupViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UArchivePassPurchasePopupViewInterface : public UInterface
{ 
public:
};

/// Class /Script/DBDUIViewInterfaces.ArchiveQuestMapViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UArchiveQuestMapViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.ArchiveQuestMapViewInterface.UpdateQuestMapData
	// void UpdateQuestMapData(TArray<FArchiveNodeGraphViewData>& nodeDataList, TArray<FArchiveMapPathViewData>& pathDataList); // [0x49ddb60] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveQuestMapViewInterface.SetQuestMapData
	// void SetQuestMapData(TArray<FArchiveNodeGraphViewData>& nodeDataList, TArray<FArchiveMapPathViewData>& pathDataList, bool needsCascadeAppear); // [0x49dd520] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveQuestMapViewInterface.SetLoadingSpinner
	// void SetLoadingSpinner(bool isLoading);                                                                               // [0x49d6280] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveQuestMapViewInterface.Reset
	// void Reset();                                                                                                         // [0x49d6100] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.ArchiveRiftViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UArchiveRiftViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.ArchiveRiftViewInterface.SetRiftFragmentTooltipViewData
	// void SetRiftFragmentTooltipViewData(FCurrencyProgressionTooltipViewData& RiftFragmentTooltipViewData);                // [0x49dd7a0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveRiftViewInterface.SetRewardTiersData
	// void SetRewardTiersData(TArray<FArchiveRiftTierRewardsViewData>& riftTiersData);                                      // [0x49dd6d0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveRiftViewInterface.SetMatchmakingSoftlockState
	// void SetMatchmakingSoftlockState(bool isInMatchmakingSoftlock);                                                       // [0x49d7030] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveRiftViewInterface.SetImagePreviewAreaData
	// void SetImagePreviewAreaData(FCustomizationItemPreviewAreaViewData& ViewData);                                        // [0x49dd320] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveRiftViewInterface.SetData
	// void SetData(FArchivesRiftGenericViewData& Data);                                                                     // [0x49dd270] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveRiftViewInterface.PlayUnlockingAnimation
	// void PlayUnlockingAnimation(FArchivesRiftUnlockSequenceData& Data);                                                   // [0x49dd1d0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.ArchiveTierPurchasePopupViewData
/// Size: 0x0060 (0x0001F0 - 0x000250)
class UArchiveTierPurchasePopupViewData : public UGenericPopupViewData
{ 
public:
	SDK_UNDEFINED(48,1273) /* TWeakObjectPtr<UTexture2D*> */ __um(ImageTexture);                                   // 0x01F0   (0x0030)  
	int32_t                                            MaxTiers;                                                   // 0x0220   (0x0004)  
	int32_t                                            currentTier;                                                // 0x0224   (0x0004)  
	ECurrencyType                                      CurrencyType;                                               // 0x0228   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0229   (0x0003)  MISSED
	int32_t                                            UnitPrice;                                                  // 0x022C   (0x0004)  
	float                                              DiscountPercentage;                                         // 0x0230   (0x0004)  
	bool                                               IsAffordable;                                               // 0x0234   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0235   (0x0003)  MISSED
	int32_t                                            CurrentWalletAmount;                                        // 0x0238   (0x0004)  
	int32_t                                            InitialQuantity;                                            // 0x023C   (0x0004)  
	int32_t                                            FirstBonusTier;                                             // 0x0240   (0x0004)  
	int32_t                                            LastBonusTier;                                              // 0x0244   (0x0004)  
	bool                                               IsBonusTier;                                                // 0x0248   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0249   (0x0007)  MISSED
};

/// Class /Script/DBDUIViewInterfaces.ArchiveTierPurchasePopupViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UArchiveTierPurchasePopupViewInterface : public UInterface
{ 
public:
};

/// Class /Script/DBDUIViewInterfaces.ArchiveTomeViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UArchiveTomeViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.ArchiveTomeViewInterface.UpdateBackgroundSkin
	// void UpdateBackgroundSkin(int32_t Key, class UMaterialInterface* skinMaterail);                                       // [0x49dda90] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveTomeViewInterface.ToggleEditor
	// void ToggleEditor(bool IsEnabled);                                                                                    // [0x49d6590] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveTomeViewInterface.SetUiTakeoverActive
	// void SetUiTakeoverActive(bool IsActive);                                                                              // [0x49d6280] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveTomeViewInterface.SetSideNavTabsVisibility
	// void SetSideNavTabsVisibility(int32_t Key, bool IsVisible);                                                           // [0x49dd9c0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveTomeViewInterface.SetSideNavTabsEnabled
	// void SetSideNavTabsEnabled(int32_t Key, bool IsEnabled);                                                              // [0x49d61b0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveTomeViewInterface.SetSideNavTabsData
	// void SetSideNavTabsData(TArray<FTabWidgetData>& tabsData, int32_t SelectedKey);                                       // [0x49dd850] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveTomeViewInterface.SetNotificationVisibility
	// void SetNotificationVisibility(int32_t Key, bool HasNotification);                                                    // [0x49dd450] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveTomeViewInterface.SetMenuState
	// void SetMenuState(EArchiveTomeMenuState menuState);                                                                   // [0x49dd3d0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ArchiveTomeViewInterface.GetMenuState
	// EArchiveTomeMenuState GetMenuState();                                                                                 // [0x49dd1a0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DBDUIViewInterfaces.ArchiveTomeViewInterface.GetArchiveQuestMapInterface
	// TScriptInterface<Class> GetArchiveQuestMapInterface();                                                                // [0x49dd160] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DBDUIViewInterfaces.ArchiveTomeViewInterface.GetArchiveLevelProgressionInterface
	// TScriptInterface<Class> GetArchiveLevelProgressionInterface();                                                        // [0x49dd120] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DBDUIViewInterfaces.ArchiveTomeViewInterface.GetArchiveJournalInterface
	// TScriptInterface<Class> GetArchiveJournalInterface();                                                                 // [0x49dd0e0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DBDUIViewInterfaces.ArchiveTomeViewInterface.GetArchiveEditorInterface
	// FEditorInterfaces GetArchiveEditorInterface();                                                                        // [0x49dd080] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewInterfaces.AuricCellsViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UAuricCellsViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.AuricCellsViewInterface.SetData
	// void SetData(FAuricCellsViewData& ViewData);                                                                          // [0x49e2bb0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.BasePopupViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UBasePopupViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.BasePopupViewInterface.Leave
	// void Leave();                                                                                                         // [0x49d5eb0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.BasePopupViewInterface.Enter
	// void Enter(class UBasePopupViewData* Data);                                                                           // [0x49e2600] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.ChallengeTrackerViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UChallengeTrackerViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.ChallengeTrackerViewInterface.UpdateWidgetProgression
	// void UpdateWidgetProgression(FArchiveNodeObjectiveViewData& ProgressionData);                                         // [0x49e2df0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ChallengeTrackerViewInterface.OpenWidget
	// void OpenWidget();                                                                                                    // [0x49e2950] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ChallengeTrackerViewInterface.InitWidgetData
	// void InitWidgetData(FChallengeTrackerViewData& ViewData);                                                             // [0x49e2830] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ChallengeTrackerViewInterface.CloseWidget
	// void CloseWidget();                                                                                                   // [0x49d6100] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Struct /Script/DBDUIViewInterfaces.LoadoutTooltipData
/// Size: 0x0090 (0x000000 - 0x000090)
struct FLoadoutTooltipData
{ 
	FName                                              ItemId;                                                     // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(24,1274) /* FText */                 __um(DisplayName);                                          // 0x0010   (0x0018)  
	SDK_UNDEFINED(24,1275) /* FText */                 __um(ParentDisplayName);                                    // 0x0028   (0x0018)  
	SDK_UNDEFINED(24,1276) /* FText */                 __um(Description);                                          // 0x0040   (0x0018)  
	int32_t                                            Level;                                                      // 0x0058   (0x0004)  
	EItemRarity                                        Rarity;                                                     // 0x005C   (0x0001)  
	bool                                               IsLocked;                                                   // 0x005D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x005E   (0x0002)  MISSED
	SDK_UNDEFINED(24,1277) /* FText */                 __um(EventName);                                            // 0x0060   (0x0018)  
	SDK_UNDEFINED(16,1278) /* FString */               __um(EventId);                                              // 0x0078   (0x0010)  
	bool                                               IsPastEvent;                                                // 0x0088   (0x0001)  
	EInventoryItemType                                 ItemType;                                                   // 0x0089   (0x0001)  
	EItemAvailability                                  Availability;                                               // 0x008A   (0x0001)  
	unsigned char                                      UnknownData02_6[0x5];                                       // 0x008B   (0x0005)  MISSED
};

/// Class /Script/DBDUIViewInterfaces.CharacterPerkViewData
/// Size: 0x0098 (0x000030 - 0x0000C8)
class UCharacterPerkViewData : public UObject
{ 
public:
	class UMenuPerkViewData*                           Perk;                                                       // 0x0030   (0x0008)  
	FLoadoutTooltipData                                PerkTooltip;                                                // 0x0038   (0x0090)  
};

/// Class /Script/DBDUIViewInterfaces.CinematicViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UCinematicViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.CinematicViewInterface.SetSize
	// void SetSize(FVector2D Size);                                                                                         // [0x49e2ca0] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.CinematicViewInterface.GetBinkVideoPlayer
	// class UBinkMediaPlayer* GetBinkVideoPlayer();                                                                         // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.CinematicViewInterface.FadeOutAnimation
	// void FadeOutAnimation(float fadeOutDuration, float Delay);                                                            // [0x49e2760] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.CinematicViewInterface.FadeInAnimation
	// void FadeInAnimation(float fadeInDuration, float Delay);                                                              // [0x49e2690] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.CoreBaseViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UCoreBaseViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.CoreBaseViewInterface.OnStopAsyncOperation
	// void OnStopAsyncOperation();                                                                                          // [0x49d5eb0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.CoreBaseViewInterface.OnStartAsyncOperation
	// void OnStartAsyncOperation();                                                                                         // [0x49d6100] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.CreditsViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UCreditsViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.CreditsViewInterface.SetText
	// void SetText(FText& Text);                                                                                            // [0x49e2d20] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.CreditsViewInterface.ScrollToName
	// void ScrollToName(FString Name, float Delay);                                                                         // [0x49e2970] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.CreditsViewInterface.ScrollToEnd
	// void ScrollToEnd();                                                                                                   // [0x49d6100] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.CurrencyConversionPopupViewData
/// Size: 0x0030 (0x0001F0 - 0x000220)
class UCurrencyConversionPopupViewData : public UGenericPopupViewData
{ 
public:
	SDK_UNDEFINED(24,1279) /* FText */                 __um(EventName);                                            // 0x01F0   (0x0018)  
	ECurrencyType                                      FromCurrencyType;                                           // 0x0208   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0209   (0x0003)  MISSED
	int32_t                                            FromCurrencyAmount;                                         // 0x020C   (0x0004)  
	ECurrencyType                                      ToCurrencyType;                                             // 0x0210   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0211   (0x0003)  MISSED
	int32_t                                            ToCurrencyAmount;                                           // 0x0214   (0x0004)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0218   (0x0008)  MISSED
};

/// Class /Script/DBDUIViewInterfaces.CurrencyConversionPopupViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UCurrencyConversionPopupViewInterface : public UInterface
{ 
public:
};

/// Class /Script/DBDUIViewInterfaces.DailyRitualsPopupViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UDailyRitualsPopupViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.DailyRitualsPopupViewInterface.StartAnim
	// void StartAnim();                                                                                                     // [0x49d6100] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.DailyRitualsPopupViewInterface.SetDailyRitualsData
	// void SetDailyRitualsData(TArray<FDailyRitualViewData>& dailyRitualsData, bool isAfterTrial);                          // [0x49e2a60] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.DailyRitualsPopupViewInterface.SetCanRemoveDailyRitual
	// void SetCanRemoveDailyRitual(bool canRemoveDailyRitual);                                                              // [0x49d6120] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.DailyRitualsPopupViewInterface.SetAllDailyRitualTilesVisible
	// void SetAllDailyRitualTilesVisible();                                                                                 // [0x49d5eb0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.DisplayStandViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UDisplayStandViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.DisplayStandViewInterface.SetDragZone
	// void SetDragZone(FDisplayStandViewData& layoutData);                                                                  // [0x49e9b40] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.EndGameCollapseBarViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UEndGameCollapseBarViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.EndGameCollapseBarViewInterface.StartEndGameScenario
	// void StartEndGameScenario();                                                                                          // [0x49d5eb0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.EndGameCollapseBarViewInterface.SetEndGameScenarioProgressionValue
	// void SetEndGameScenarioProgressionValue(float Amount);                                                                // [0x49e9c00] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.EndGameCollapseBarViewInterface.SetEndGameScenarioProgressionMode
	// void SetEndGameScenarioProgressionMode(bool isSlowMode);                                                              // [0x49d6120] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.EndGameCollapseBarViewInterface.InitEndGameScenario
	// void InitEndGameScenario();                                                                                           // [0x49e8cc0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.EquippedItemViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UEquippedItemViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.EquippedItemViewInterface.SetFakeItem
	// void SetFakeItem(bool isHoldingFakeItem, TWeakObjectPtr<UTexture2D*>& fakeItemIcon, FKey InputKey, int32_t Count);    // [0x49e9d30] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.EquippedItemViewInterface.SetData
	// void SetData(FItemBundleViewData& itemBundleData);                                                                    // [0x49e98d0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.EquippedItemViewInterface.SetActiveState
	// void SetActiveState(bool IsActive);                                                                                   // [0x49d6280] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.EquippedItemViewInterface.ClearData
	// void ClearData(bool fullClear);                                                                                       // [0x49d6120] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.EquippedPowerViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UEquippedPowerViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.EquippedPowerViewInterface.SetData
	// void SetData(FPowerBundleViewData& powerBundleData);                                                                  // [0x49e99c0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.EquippedPowerViewInterface.SetCarryingMode
	// void SetCarryingMode(bool IsCarrying);                                                                                // [0x49d7c10] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.EquippedPowerViewInterface.SetActiveState
	// void SetActiveState(bool IsActive);                                                                                   // [0x49d6280] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.EquippedPowerViewInterface.ClearData
	// void ClearData();                                                                                                     // [0x49e2950] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.EventCollectionViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UEventCollectionViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.EventCollectionViewInterface.SetSelectedReward
	// void SetSelectedReward(int32_t selectedIndex);                                                                        // [0x49ea360] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.EventCollectionViewInterface.SetPreviewAreaData
	// void SetPreviewAreaData(FCustomizationItemPreviewAreaViewData& ViewData);                                             // [0x49ea2b0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.EventCollectionViewInterface.SetItemsData
	// void SetItemsData(TArray<UStoreCustomizationItemViewData*>& customizationRewardsData, int32_t selectedIndex);         // [0x49ea070] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.EventCollectionViewInterface.SetInstructionWidgetData
	// void SetInstructionWidgetData(FCustomizationItemOriginViewData& ViewData);                                            // [0x49e9f20] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.EventCollectionViewInterface.Init
	// void Init(FEventEntryPopupSkinUIData& skinData);                                                                      // [0x49e9050] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.EventCollectionViewInterface.DisableInstructionStoreButton
	// void DisableInstructionStoreButton();                                                                                 // [0x49d6100] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.EventCollectionViewInterface.DisableInstructionInputs
	// void DisableInstructionInputs();                                                                                      // [0x49d5eb0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.EventCollectionViewInterface.DisableInstructionCurrencyButton
	// void DisableInstructionCurrencyButton();                                                                              // [0x49e2950] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.EventCollectionViewInterface.DisableInstructionArchivesButton
	// void DisableInstructionArchivesButton();                                                                              // [0x49e8cc0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.EventCollectionViewInterface.DeselectReward
	// void DeselectReward();                                                                                                // [0x49d5ed0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.EventCollectionViewInterface.Deinit
	// void Deinit();                                                                                                        // [0x49e8ca0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.EventDetailsViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UEventDetailsViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.EventDetailsViewInterface.Init
	// void Init(FDetailsTabViewData& ViewData, FEventEntryPopupSkinUIData& skinData);                                       // [0x49e9100] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.EventDetailsViewInterface.Deinit
	// void Deinit();                                                                                                        // [0x49d5eb0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.EventEntryViewData
/// Size: 0x00D0 (0x000030 - 0x000100)
class UEventEntryViewData : public UObject
{ 
public:
	SDK_UNDEFINED(24,1280) /* FText */                 __um(Title);                                                // 0x0030   (0x0018)  
	SDK_UNDEFINED(16,1281) /* FString */               __um(Message);                                              // 0x0048   (0x0010)  
	FDateTime                                          StartDate;                                                  // 0x0058   (0x0008)  
	FDateTime                                          EndDate;                                                    // 0x0060   (0x0008)  
	SDK_UNDEFINED(24,1282) /* FText */                 __um(AvailabilityDates);                                    // 0x0068   (0x0018)  
	SDK_UNDEFINED(24,1283) /* FText */                 __um(EventFrameLabel);                                      // 0x0080   (0x0018)  
	SDK_UNDEFINED(24,1284) /* FText */                 __um(ImageBannerText);                                      // 0x0098   (0x0018)  
	SDK_UNDEFINED(24,1285) /* FText */                 __um(EventTabMessage);                                      // 0x00B0   (0x0018)  
	SDK_UNDEFINED(48,1286) /* TWeakObjectPtr<UTexture2D*> */ __um(ImageTexture);                                   // 0x00C8   (0x0030)  
	bool                                               ShouldShowEventTomeButton;                                  // 0x00F8   (0x0001)  
	bool                                               ShouldActivateUiTakeover;                                   // 0x00F9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00FA   (0x0006)  MISSED
};

/// Class /Script/DBDUIViewInterfaces.EventEntryViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UEventEntryViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.EventEntryViewInterface.SetTabsData
	// void SetTabsData(TArray<FTabWidgetData>& tabsData, int32_t SelectedKey);                                              // [0x49ea3f0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.EventEntryViewInterface.SetOverlayState
	// void SetOverlayState(EEventEntryTabState& tabState);                                                                  // [0x49ea220] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.EventEntryViewInterface.SetMilestoneTrackerData
	// void SetMilestoneTrackerData(FMilestoneTrackerViewData& ViewData);                                                    // [0x49ea170] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.EventEntryViewInterface.SelectMilestoneTrackerItem
	// void SelectMilestoneTrackerItem(FName ItemId);                                                                        // [0x49e94b0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.EventEntryViewInterface.RequestOverlayClosure
	// void RequestOverlayClosure();                                                                                         // [0x49e9490] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.EventEntryViewInterface.InitializeOverlay
	// void InitializeOverlay(class UEventEntryViewData* ViewData);                                                          // [0x49e9400] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.EventEntryViewInterface.GetStoreSubPresenterInterface
	// TScriptInterface<Class> GetStoreSubPresenterInterface();                                                              // [0x49e8ed0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DBDUIViewInterfaces.EventEntryViewInterface.GetRowDataFromEventSkinDataTable
	// bool GetRowDataFromEventSkinDataTable(FEventEntryPopupSkinUIData& skinData, FText& EventFrameLabel);                  // [0x49e8d80] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.EventEntryViewInterface.GetEventSubPresenterInterface
	// TScriptInterface<Class> GetEventSubPresenterInterface();                                                              // [0x49e8d40] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DBDUIViewInterfaces.EventEntryViewInterface.GetEventSkinDataTable
	// class UDataTable* GetEventSkinDataTable();                                                                            // [0x49e8d10] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DBDUIViewInterfaces.EventEntryViewInterface.GetDetailsSubPresenterInterface
	// TScriptInterface<Class> GetDetailsSubPresenterInterface();                                                            // [0x49dd160] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DBDUIViewInterfaces.EventEntryViewInterface.GetCollectionSubPresenterInterface
	// TScriptInterface<Class> GetCollectionSubPresenterInterface();                                                         // [0x49dd120] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DBDUIViewInterfaces.EventEntryViewInterface.DeselectMilestoneTrackerItems
	// void DeselectMilestoneTrackerItems();                                                                                 // [0x49d6100] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.EventEntryViewInterface.ChangeSelectedTab
	// void ChangeSelectedTab(int32_t Key);                                                                                  // [0x49d6050] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.EventTabViewData
/// Size: 0x0050 (0x000030 - 0x000080)
class UEventTabViewData : public UObject
{ 
public:
	SDK_UNDEFINED(48,1287) /* TWeakObjectPtr<UTexture2D*> */ __um(ImageTexture);                                   // 0x0030   (0x0030)  
	bool                                               ShouldShowEventTomeButton;                                  // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0061   (0x0007)  MISSED
	SDK_UNDEFINED(24,1288) /* FText */                 __um(Message);                                              // 0x0068   (0x0018)  
};

/// Class /Script/DBDUIViewInterfaces.EventInfoViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UEventInfoViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.EventInfoViewInterface.Init
	// void Init(class UEventTabViewData* ViewData, FEventEntryPopupSkinUIData& skinData);                                   // [0x49e9300] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.EventInfoViewInterface.DisableArchivesButton
	// void DisableArchivesButton();                                                                                         // [0x49d5eb0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.EventInfoViewInterface.Deinit
	// void Deinit();                                                                                                        // [0x49d6100] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.ExampleViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UExampleViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.ExampleViewInterface.SetExampleText
	// void SetExampleText(FString Text);                                                                                    // [0x49e9c90] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ExampleViewInterface.SetExampleProgressRatio
	// void SetExampleProgressRatio(float Ratio);                                                                            // [0x49d6d20] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.ExternalEffectsViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UExternalEffectsViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.ExternalEffectsViewInterface.ShowExternalPerk
	// void ShowExternalPerk(FPerkViewData& PerkViewData);                                                                   // [0x49ea640] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ExternalEffectsViewInterface.ShowExternalAddon
	// void ShowExternalAddon(FAddonViewData& AddonViewData);                                                                // [0x49ea560] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ExternalEffectsViewInterface.HideExternalPerk
	// void HideExternalPerk(FName ItemId);                                                                                  // [0x49e8fb0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ExternalEffectsViewInterface.HideExternalAddon
	// void HideExternalAddon(FName ItemId);                                                                                 // [0x49e8f10] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ExternalEffectsViewInterface.HideAllExternalPerks
	// void HideAllExternalPerks();                                                                                          // [0x49d6100] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ExternalEffectsViewInterface.HideAllExternalAddons
	// void HideAllExternalAddons();                                                                                         // [0x49d5eb0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.FearMarketPopupViewData
/// Size: 0x0020 (0x0001F0 - 0x000210)
class UFearMarketPopupViewData : public UGenericPopupViewData
{ 
public:
	class UMenuPerkViewData*                           ItemData;                                                   // 0x01F0   (0x0008)  
	int32_t                                            Cost;                                                       // 0x01F8   (0x0004)  
	int32_t                                            BloodpointConversion;                                       // 0x01FC   (0x0004)  
	bool                                               IsPurchased;                                                // 0x0200   (0x0001)  
	bool                                               AlreadyOwned;                                               // 0x0201   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0202   (0x0002)  MISSED
	int32_t                                            AvailableTokens;                                            // 0x0204   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0208   (0x0008)  MISSED
};

/// Class /Script/DBDUIViewInterfaces.FearMarketPopupViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UFearMarketPopupViewInterface : public UInterface
{ 
public:
};

/// Class /Script/DBDUIViewInterfaces.FriendSearchPopupViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UFriendSearchPopupViewInterface : public UInterface
{ 
public:
};

/// Class /Script/DBDUIViewInterfaces.GameManualViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UGameManualViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.GameManualViewInterface.SetCurrentManualMenuState
	// void SetCurrentManualMenuState(EGameManualMenuState menuState);                                                       // [0x49e9850] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.GameManualViewInterface.SetCategoryData
	// void SetCategoryData(FHelpCategoryData categoryData, TArray<FHelpTopicData>& topicsData);                             // [0x49e9550] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.GameManualViewInterface.GetCurrentManualMenuState
	// EGameManualMenuState GetCurrentManualMenuState();                                                                     // [0x49e8ce0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewInterfaces.GenericPopupViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UGenericPopupViewInterface : public UInterface
{ 
public:
};

/// Class /Script/DBDUIViewInterfaces.GenericRefreshingPopupViewData
/// Size: 0x0050 (0x0001F0 - 0x000240)
class UGenericRefreshingPopupViewData : public UGenericPopupViewData
{ 
public:
	float                                              RefreshingIntervalsTime;                                    // 0x01F0   (0x0004)  
	float                                              TimeoutTime;                                                // 0x01F4   (0x0004)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x01F8   (0x0048)  MISSED
};

/// Class /Script/DBDUIViewInterfaces.GenericRefreshingPopupViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UGenericRefreshingPopupViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.GenericRefreshingPopupViewInterface.Refresh
	// void Refresh(float RemainingTime);                                                                                    // [0x49d6d20] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.GenericTextInputPopupViewData
/// Size: 0x00E0 (0x0001F0 - 0x0002D0)
class UGenericTextInputPopupViewData : public UGenericPopupViewData
{ 
public:
	unsigned char                                      UnknownData00_1[0xE0];                                      // 0x01F0   (0x00E0)  MISSED
};

/// Class /Script/DBDUIViewInterfaces.GenericTextInputPopupViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UGenericTextInputPopupViewInterface : public UInterface
{ 
public:
};

/// Class /Script/DBDUIViewInterfaces.GlobalLoadSpinnerViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UGlobalLoadSpinnerViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.GlobalLoadSpinnerViewInterface.SetGlobalSpinnerVisibility
	// void SetGlobalSpinnerVisibility(bool IsVisible);                                                                      // [0x49d6280] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.HookCountViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UHookCountViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.HookCountViewInterface.SetHookCountVisibility
	// void SetHookCountVisibility(bool visible);                                                                            // [0x49d6280] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.HookCountViewInterface.SetData
	// void SetData(int32_t currentHookCount, int32_t maxHookCount, int32_t initialMaxHookCount);                            // [0x49efdf0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.HookCountViewInterface.InitWidget
	// void InitWidget();                                                                                                    // [0x49e8cc0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.HookCountViewInterface.ClearData
	// void ClearData();                                                                                                     // [0x49d6100] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.HudAimingCrosshairViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UHudAimingCrosshairViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.HudAimingCrosshairViewInterface.SetState
	// void SetState(EAimingCrosshairState NewState);                                                                        // [0x49d70c0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.HudAimingCrosshairViewInterface.SetProgress
	// void SetProgress(float Progress);                                                                                     // [0x49d6d20] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.HudAlertViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UHudAlertViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.HudAlertViewInterface.ShowStatusEffectAlert
	// void ShowStatusEffectAlert(FStatusEffectAlertViewData& Data);                                                         // [0x49f04b0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.HudAlertViewInterface.ShowScoreAlert
	// void ShowScoreAlert(FScoreAlertViewData& Data);                                                                       // [0x49f03f0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.HudAlertViewInterface.SetScoreEventsVisibility
	// void SetScoreEventsVisibility(bool visible);                                                                          // [0x49d6280] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.HudAlertViewInterface.FadeOut
	// void FadeOut(float Delay);                                                                                            // [0x49e9c00] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.HudAlertViewInterface.FadeIn
	// void FadeIn();                                                                                                        // [0x49e2950] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.HudDirectionalMiniGameViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UHudDirectionalMiniGameViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.HudDirectionalMiniGameViewInterface.UpdateResult
	// void UpdateResult(int32_t index, bool IsSuccessful);                                                                  // [0x49f0950] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.HudDirectionalMiniGameViewInterface.UpdateFinalResult
	// void UpdateFinalResult(EDirectionalMinigameResult finalResult);                                                       // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.HudDirectionalMiniGameViewInterface.Show
	// void Show(TArray<EDirectionalInputKey>& directions);                                                                  // [0x49f0340] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.HudDirectionalMiniGameViewInterface.Init
	// void Init(int32_t maxItems, EDirectionalMiniGameType Type);                                                           // [0x49efa50] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.HudDirectionalMiniGameViewInterface.Hide
	// void Hide();                                                                                                          // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.HudEventObjectiveItemViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UHudEventObjectiveItemViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.HudEventObjectiveItemViewInterface.SetWidgetState
	// void SetWidgetState(EEventObjectiveItemState eventItemState);                                                         // [0x49f02c0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.HudEventObjectiveItemViewInterface.SetWidgetData
	// void SetWidgetData(EEventObjectiveItemState eventItemState, int32_t charges, int32_t maxCharges, float ChargePercent); // [0x49f0170] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.HudEventObjectiveItemViewInterface.SetInputKey
	// void SetInputKey(FKey InputKey);                                                                                      // [0x49effa0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.HudEventObjectiveItemViewInterface.SetCooldownPercentage
	// void SetCooldownPercentage(float cooldownPercent);                                                                    // [0x49d6d20] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.HudEventObjectiveItemViewInterface.SetChargePercentage
	// void SetChargePercentage(float ChargePercent);                                                                        // [0x49e9c00] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.HudEventObjectiveItemViewInterface.SetAvailableCharges
	// void SetAvailableCharges(int32_t charges, int32_t maxCharges);                                                        // [0x49efd20] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.HudEventObjectiveItemViewInterface.InitWidget
	// void InitWidget();                                                                                                    // [0x49efc60] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.HudEventObjectiveItemViewInterface.ClearData
	// void ClearData();                                                                                                     // [0x49efa30] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.HudEventProgression2023ViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UHudEventProgression2023ViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.HudEventProgression2023ViewInterface.UpdateVoidZoneState
	// void UpdateVoidZoneState(FHudEventProgression2023ViewData& HudEventProgressionViewData);                              // [0x49f0a20] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.HudEventProgression2023ViewInterface.UpdateHauntTarget
	// void UpdateHauntTarget(FHudEventProgression2023ViewData& HudEventProgressionViewData);                                // [0x49f07a0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.HudEventProgression2023ViewInterface.UpdateEnergyProgress
	// void UpdateEnergyProgress(FHudEventProgression2023ViewData& HudEventProgressionViewData);                             // [0x49f05c0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.HudEventProgression2023ViewInterface.InitEventProgression
	// void InitEventProgression(FHudEventProgression2023ViewData& HudEventProgressionViewData);                             // [0x49efb20] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.HudEventProgression2023ViewInterface.EnableEventProgression
	// void EnableEventProgression(bool IsEnabled);                                                                          // [0x49d7030] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.HudEventProgressionViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UHudEventProgressionViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.HudEventProgressionViewInterface.UpdateEventPendingProgress
	// void UpdateEventPendingProgress(FHudEventProgressionViewData& HudEventProgressionViewData);                           // [0x49f0700] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.HudEventProgressionViewInterface.UpdateEventBankedProgress
	// void UpdateEventBankedProgress(FHudEventProgressionViewData& HudEventProgressionViewData);                            // [0x49f0660] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.HudEventProgressionViewInterface.InitEventProgression
	// void InitEventProgression(FHudEventProgressionViewData& HudEventProgressionViewData);                                 // [0x49efbc0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.HudEventProgressionViewInterface.EnableEventProgression
	// void EnableEventProgression(bool IsEnabled);                                                                          // [0x49d6620] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.HudObjectivesViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UHudObjectivesViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.HudObjectivesViewInterface.SetHudObjectiveData
	// void SetHudObjectiveData(FHudObjectivesViewData& hudObjectiveViewData);                                               // [0x49efef0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.HudObjectivesViewInterface.SetHookCountVisibility
	// void SetHookCountVisibility(bool visible);                                                                            // [0x49d6280] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.HudObjectivesViewInterface.SetHookCountData
	// void SetHookCountData(int32_t currentHookCount, int32_t maxHookCount, int32_t initialMaxHookCount);                   // [0x49efdf0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.HudObjectivesViewInterface.InitWidget
	// void InitWidget();                                                                                                    // [0x49efa30] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.HudObjectivesViewInterface.ClearHookCountData
	// void ClearHookCountData();                                                                                            // [0x49d6100] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.HudObjectivesViewInterface.ClearData
	// void ClearData();                                                                                                     // [0x49e8cc0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.InteractionProgressViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UInteractionProgressViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.InteractionProgressViewInterface.UpdateInputProgress
	// void UpdateInputProgress(float Progress, float itemCharge, bool IsBlocked);                                           // [0x49f0840] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.InteractionProgressViewInterface.SetInputProgressPrompt
	// void SetInputProgressPrompt(FInteractionProgressViewData& Data);                                                      // [0x49f0090] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.InteractionProgressViewInterface.PlayHemorrhageAnimation
	// void PlayHemorrhageAnimation();                                                                                       // [0x49d5eb0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.InteractionProgressViewInterface.HideInputProgressPrompt
	// void HideInputProgressPrompt();                                                                                       // [0x49d6100] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.InteractionPromptsContainerViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UInteractionPromptsContainerViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.InteractionPromptsContainerViewInterface.RemovePrompt
	// void RemovePrompt(FName ID);                                                                                          // [0x49efc80] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.InteractionPromptsContainerViewInterface.RemoveAllPrompts
	// void RemoveAllPrompts();                                                                                              // [0x49d5eb0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.InteractionPromptsContainerViewInterface.AddPrompt
	// void AddPrompt(FInteractionPromptViewData& Data);                                                                     // [0x49ef880] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.ItemBundleViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UItemBundleViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.ItemBundleViewInterface.SetData
	// void SetData(FItemBundleViewData& ItemBundleViewData);                                                                // [0x49f5730] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ItemBundleViewInterface.ClearData
	// void ClearData();                                                                                                     // [0x49d5eb0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.ItemInteractionViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UItemInteractionViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.ItemInteractionViewInterface.SetData
	// void SetData(FItemBundleViewData& itemBundleData);                                                                    // [0x49f5730] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ItemInteractionViewInterface.ClearData
	// void ClearData();                                                                                                     // [0x49d5eb0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.ItemViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UItemViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.ItemViewInterface.SetData
	// void SetData(FItemViewData& ItemViewData);                                                                            // [0x49f5820] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ItemViewInterface.ClearData
	// void ClearData();                                                                                                     // [0x49d5eb0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.LeaningArrowsViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class ULeaningArrowsViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.LeaningArrowsViewInterface.SetData
	// void SetData(ELeanState& leanState);                                                                                  // [0x49f5950] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.LightSensitivityViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class ULightSensitivityViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.LightSensitivityViewInterface.StartFadeOut
	// void StartFadeOut();                                                                                                  // [0x49d5eb0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.LoadoutMenuPopupViewData
/// Size: 0x0110 (0x0001F0 - 0x000300)
class ULoadoutMenuPopupViewData : public UGenericPopupViewData
{ 
public:
	SDK_UNDEFINED(48,1289) /* TWeakObjectPtr<UTexture2D*> */ __um(LoadoutIcon);                                    // 0x01F0   (0x0030)  
	FName                                              ItemId;                                                     // 0x0220   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x022C   (0x0004)  MISSED
	SDK_UNDEFINED(24,1290) /* FText */                 __um(DisplayName);                                          // 0x0230   (0x0018)  
	SDK_UNDEFINED(24,1291) /* FText */                 __um(ParentDisplayName);                                    // 0x0248   (0x0018)  
	SDK_UNDEFINED(24,1292) /* FText */                 __um(ParentTypeDisplayName);                                // 0x0260   (0x0018)  
	bool                                               IsParentAvailable;                                          // 0x0278   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0279   (0x0007)  MISSED
	SDK_UNDEFINED(24,1293) /* FText */                 __um(Description);                                          // 0x0280   (0x0018)  
	EInventoryItemType                                 ItemType;                                                   // 0x0298   (0x0001)  
	EItemRarity                                        Rarity;                                                     // 0x0299   (0x0001)  
	EStatusEffectType                                  StatusEffectType;                                           // 0x029A   (0x0001)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x029B   (0x0001)  MISSED
	int32_t                                            Level;                                                      // 0x029C   (0x0004)  
	SDK_UNDEFINED(24,1294) /* FText */                 __um(Subtitle);                                             // 0x02A0   (0x0018)  
	int32_t                                            StackCount;                                                 // 0x02B8   (0x0004)  
	EItemAvailability                                  Availability;                                               // 0x02BC   (0x0001)  
	bool                                               IsTeachablePerk;                                            // 0x02BD   (0x0001)  
	bool                                               IsSlasherPerk;                                              // 0x02BE   (0x0001)  
	bool                                               IsSlasher;                                                  // 0x02BF   (0x0001)  
	bool                                               IsLocked;                                                   // 0x02C0   (0x0001)  
	bool                                               IsKillSwitch;                                               // 0x02C1   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x02C2   (0x0006)  MISSED
	SDK_UNDEFINED(24,1295) /* FText */                 __um(EventName);                                            // 0x02C8   (0x0018)  
	SDK_UNDEFINED(16,1296) /* FString */               __um(EventId);                                              // 0x02E0   (0x0010)  
	bool                                               IsPastEvent;                                                // 0x02F0   (0x0001)  
	unsigned char                                      UnknownData04_6[0xF];                                       // 0x02F1   (0x000F)  MISSED
};

/// Class /Script/DBDUIViewInterfaces.LoadoutMenuPopupViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class ULoadoutMenuPopupViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.LoadoutMenuPopupViewInterface.UpdatePresetData
	// void UpdatePresetData(TArray<int32_t>& presetData, int32_t selectedPreset);                                           // [0x49f6150] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.LoadoutMenuPopupViewInterface.SetSelectedInventoryItem
	// void SetSelectedInventoryItem(TArray<int32_t>& selectedIndex, bool isUnequip);                                        // [0x49f6050] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.LoadoutMenuPopupViewInterface.SetSelectableCharacters
	// void SetSelectableCharacters(TArray<FTabWidgetData>& selectableCharacters, FTabWidgetData selectedCharacterData, int32_t botIndex); // [0x49f5db0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.LoadoutMenuPopupViewInterface.SetLoadoutMenuSlotData
	// void SetLoadoutMenuSlotData(TArray<ULoadoutMenuPopupViewData*>& loadoutMenuSlotButtonData);                           // [0x49f5d00] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.LoadoutMenuPopupViewInterface.SetLoadoutMenuInventoryData
	// void SetLoadoutMenuInventoryData(TArray<ULoadoutMenuPopupViewData*>& loadoutMenuSlotButtonData, ELoadoutSlot slotSelected, bool isNextSlot); // [0x49f5bd0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.LoadoutMenuPopupViewInterface.SetIsPerkSurfacingExperimentActive
	// void SetIsPerkSurfacingExperimentActive(bool isPerkSurfacingExperimentActive);                                        // [0x49d6280] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.MainMenuViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UMainMenuViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.MainMenuViewInterface.SetEventButton
	// void SetEventButton(bool isEventActive, FMainMenuButtonViewData& Data);                                               // [0x49f5ab0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.MainMenuViewInterface.SetBloodPointBonus
	// void SetBloodPointBonus(bool isOnKiller, FMainMenuButtonViewData& Data);                                              // [0x49f5610] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.MainMenuViewInterface.SetArchivesButton
	// void SetArchivesButton(FMainMenuButtonViewData& Data);                                                                // [0x49f5550] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.MatchResultViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UMatchResultViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.MatchResultViewInterface.UpdateWidget
	// void UpdateWidget(FMatchResultViewData& Data);                                                                        // [0x49f6250] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.MatchResultViewInterface.SetMatchResultVisibility
	// void SetMatchResultVisibility(ESlateVisibility Visibility);                                                           // [0x49e9850] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.MatchResultViewInterface.PlayAnimationSequence
	// void PlayAnimationSequence();                                                                                         // [0x49d6100] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.MenuLoadoutPartViewData
/// Size: 0x0068 (0x000030 - 0x000098)
class UMenuLoadoutPartViewData : public UObject
{ 
public:
	FName                                              ItemId;                                                     // 0x0030   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	SDK_UNDEFINED(48,1297) /* TWeakObjectPtr<UTexture2D*> */ __um(iconTexture);                                    // 0x0040   (0x0030)  
	EItemRarity                                        Rarity;                                                     // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0071   (0x0003)  MISSED
	int32_t                                            StackCount;                                                 // 0x0074   (0x0004)  
	SDK_UNDEFINED(24,1298) /* FText */                 __um(ParentDisplayName);                                    // 0x0078   (0x0018)  
	bool                                               IsLocked;                                                   // 0x0090   (0x0001)  
	EItemAvailability                                  Availability;                                               // 0x0091   (0x0001)  
	bool                                               IsKillSwitchEnabled;                                        // 0x0092   (0x0001)  
	unsigned char                                      UnknownData02_6[0x5];                                       // 0x0093   (0x0005)  MISSED
};

/// Class /Script/DBDUIViewInterfaces.MenuAddonViewData
/// Size: 0x0000 (0x000098 - 0x000098)
class UMenuAddonViewData : public UMenuLoadoutPartViewData
{ 
public:
};

/// Class /Script/DBDUIViewInterfaces.MenuItemViewData
/// Size: 0x0000 (0x000098 - 0x000098)
class UMenuItemViewData : public UMenuLoadoutPartViewData
{ 
public:
};

/// Class /Script/DBDUIViewInterfaces.MenuOfferingViewData
/// Size: 0x0000 (0x000098 - 0x000098)
class UMenuOfferingViewData : public UMenuLoadoutPartViewData
{ 
public:
};

/// Class /Script/DBDUIViewInterfaces.MenuPerkViewData
/// Size: 0x0060 (0x000098 - 0x0000F8)
class UMenuPerkViewData : public UMenuLoadoutPartViewData
{ 
public:
	int32_t                                            Level;                                                      // 0x0098   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x009C   (0x0004)  MISSED
	SDK_UNDEFINED(24,1299) /* FText */                 __um(DisplayName);                                          // 0x00A0   (0x0018)  
	SDK_UNDEFINED(24,1300) /* FText */                 __um(Description);                                          // 0x00B8   (0x0018)  
	SDK_UNDEFINED(24,1301) /* FText */                 __um(EventName);                                            // 0x00D0   (0x0018)  
	SDK_UNDEFINED(16,1302) /* FString */               __um(EventId);                                              // 0x00E8   (0x0010)  
};

/// Class /Script/DBDUIViewInterfaces.MenuPowerViewData
/// Size: 0x0030 (0x000098 - 0x0000C8)
class UMenuPowerViewData : public UMenuLoadoutPartViewData
{ 
public:
	SDK_UNDEFINED(24,1303) /* FText */                 __um(Description);                                          // 0x0098   (0x0018)  
	SDK_UNDEFINED(24,1304) /* FText */                 __um(EventName);                                            // 0x00B0   (0x0018)  
};

/// Class /Script/DBDUIViewInterfaces.NewActiveTomePopupViewData
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UNewActiveTomePopupViewData : public UGenericPopupViewData
{ 
public:
};

/// Class /Script/DBDUIViewInterfaces.NewActiveTomePopupViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UNewActiveTomePopupViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.NewActiveTomePopupViewInterface.SetRiftEnabled
	// void SetRiftEnabled(bool IsEnabled);                                                                                  // [0x49d6280] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.NewActiveTomePopupViewInterface.SetRemainingTime
	// void SetRemainingTime(FString RemainingTime);                                                                         // [0x49e9c90] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.OfferingInteractionViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UOfferingInteractionViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.OfferingInteractionViewInterface.SetData
	// void SetData(FOfferingViewData& OfferingData);                                                                        // [0x49f59e0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.OfferingInteractionViewInterface.ClearData
	// void ClearData();                                                                                                     // [0x49d5eb0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.OfferingViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UOfferingViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.OfferingViewInterface.SetData
	// void SetData(FOfferingViewData& OfferingViewData);                                                                    // [0x49f59e0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.OfferingViewInterface.ClearData
	// void ClearData();                                                                                                     // [0x49d5eb0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.OnboardingMenuViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UOnboardingMenuViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.OnboardingMenuViewInterface.SetUIEnabled
	// void SetUIEnabled(bool Enabled);                                                                                      // [0x49d7030] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.OnboardingMenuViewInterface.SetQuitGameButtonVisible
	// void SetQuitGameButtonVisible(bool visible);                                                                          // [0x49d6120] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.OnboardingMenuViewInterface.SetOnboardingMenuState
	// void SetOnboardingMenuState(EOnboardingMenuState menuState);                                                          // [0x49fce50] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.OnboardingMenuViewInterface.SetFirstTimeUserExperience
	// void SetFirstTimeUserExperience(bool ftue);                                                                           // [0x49d7ca0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.OnboardingMenuViewInterface.SetChangeAccountInputSwitcherVisible
	// void SetChangeAccountInputSwitcherVisible(bool visible);                                                              // [0x49d7c10] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.OnboardingMenuViewInterface.SetChangeAccountInputSwitcherPlayerNickname
	// void SetChangeAccountInputSwitcherPlayerNickname(FString playerNickname);                                             // [0x49d5ef0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.OnboardingMenuViewInterface.SetBackButtonVisible
	// void SetBackButtonVisible(bool visible);                                                                              // [0x49d6620] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.OnboardingMenuViewInterface.GetOnboardingTutorialInterface
	// TScriptInterface<Class> GetOnboardingTutorialInterface();                                                             // [0x49fca00] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DBDUIViewInterfaces.OnboardingMenuViewInterface.GetGameManualInterface
	// TScriptInterface<Class> GetGameManualInterface();                                                                     // [0x49fc9c0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewInterfaces.OnboardingTutorialViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UOnboardingTutorialViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.OnboardingTutorialViewInterface.UpdateProgress
	// void UpdateProgress(TArray<FOnboardingStepViewData>& before, TArray<FOnboardingStepViewData>& after, TArray<FRewardWrapperViewData>& Rewards); // [0x49fd4c0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.OnboardingTutorialViewInterface.StopLoadingSpinner
	// void StopLoadingSpinner();                                                                                            // [0x49e8cc0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetUIEnabled
	// void SetUIEnabled(bool Enabled);                                                                                      // [0x49d6120] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetTutorialProgressionFeedbacks
	// void SetTutorialProgressionFeedbacks(FString completedStepId, bool isOnboardingEnabled);                              // [0x49fd1d0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetProgress
	// void SetProgress(TArray<FOnboardingStepViewData>& Progress);                                                          // [0x49fd0f0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetIsKillSwitch
	// void SetIsKillSwitch(bool IsKillSwitch);                                                                              // [0x49d7c10] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.OnboardingTutorialViewInterface.SetCanShowGoToMainMenuTutorialButton
	// void SetCanShowGoToMainMenuTutorialButton(bool canShowGoToMainMenuTutorialButton);                                    // [0x49d6280] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.PerksContainerViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UPerksContainerViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.PerksContainerViewInterface.GetPerkInterface
	// TScriptInterface<Class> GetPerkInterface(int32_t index);                                                              // [0x49fca40] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.PerkViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UPerkViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.PerkViewInterface.UpdatePerkCooldown
	// void UpdatePerkCooldown(float cooldownValue, bool IsRechargeable, bool IsRechargeableActive);                         // [0x49fd3a0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.PerkViewInterface.SetData
	// void SetData(FPerkViewData& PerkViewData);                                                                            // [0x49fcb90] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.PerkViewInterface.ClearData
	// void ClearData();                                                                                                     // [0x49d5eb0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.PingStatusViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UPingStatusViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.PingStatusViewInterface.SetLocalPingStatus
	// void SetLocalPingStatus(EConnectionQuality& localPing);                                                               // [0x49fcdc0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.PingStatusViewInterface.SetLocalPacketLossStatus
	// void SetLocalPacketLossStatus(EConnectionQuality& localPacketLoss);                                                   // [0x49fcd30] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.PingStatusViewInterface.SetKillerConnectionQualityStatus
	// void SetKillerConnectionQualityStatus(EConnectionQuality& killerConnectionQuality);                                   // [0x49f5950] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.PlayerCardAnimationViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UPlayerCardAnimationViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.PlayerCardAnimationViewInterface.OnStopAnimation
	// void OnStopAnimation();                                                                                               // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.PlayerCardAnimationViewInterface.OnPlayAnimation
	// void OnPlayAnimation();                                                                                               // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.PlayerCardViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UPlayerCardViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.PlayerCardViewInterface.SetData
	// void SetData(FPlayerCardViewData playerCardData);                                                                     // [0x49fcc50] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.PlayerProfileViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UPlayerProfileViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.PlayerProfileViewInterface.UpdateWallet
	// void UpdateWallet(ECurrencyType Type, int32_t newBalance, int32_t previousBalance);                                   // [0x49fd700] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.PlayerProfileViewInterface.UpdatePlayerProfileOpacity
	// void UpdatePlayerProfileOpacity(bool isFocused);                                                                      // [0x49d7030] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.PlayerProfileViewInterface.UpdatePlayerCardButton
	// void UpdatePlayerCardButton(bool isProfileMenuContextEntered);                                                        // [0x49d7c10] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.PlayerProfileViewInterface.ShowUI
	// void ShowUI();                                                                                                        // [0x49d5ed0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.PlayerProfileViewInterface.SetWalletVisibility
	// void SetWalletVisibility(bool IsVisible);                                                                             // [0x49d6500] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.PlayerProfileViewInterface.SetWalletData
	// void SetWalletData(TArray<FCurrencyLabelViewData>& walletData);                                                       // [0x49fd2c0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.PlayerProfileViewInterface.SetPlayerName
	// void SetPlayerName(FText& playerNameText);                                                                            // [0x49fd020] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.PlayerProfileViewInterface.SetPlayerCardEnabled
	// void SetPlayerCardEnabled(bool IsEnabled);                                                                            // [0x49d6fa0] Native|Public        
	// Function /Script/DBDUIViewInterfaces.PlayerProfileViewInterface.SetPlayerCardBannerOpacity
	// void SetPlayerCardBannerOpacity(float Opacity);                                                                       // [0x49d6d20] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.PlayerProfileViewInterface.SetPlayerCard
	// void SetPlayerCard(FPlayerCardViewData& Badge, FPlayerCardViewData& Banner);                                          // [0x49fced0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.PlayerProfileViewInterface.HideUI
	// void HideUI();                                                                                                        // [0x49efa30] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.PlayerProfileViewInterface.HidePlayerName
	// void HidePlayerName();                                                                                                // [0x49efc60] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.PlayerProfileViewInterface.HidePlayerCard
	// void HidePlayerCard();                                                                                                // [0x49e2950] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.PlayerProfileViewInterface.FullUpdateCurrency
	// void FullUpdateCurrency(FCurrencyLabelViewData& ViewData);                                                            // [0x49fc900] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.PlayerStatusesContainerViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UPlayerStatusesContainerViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.PlayerStatusesContainerViewInterface.GetPlayerStatusInterface
	// TScriptInterface<Class> GetPlayerStatusInterface(int32_t index);                                                      // [0x49fca40] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.KillerStatusData
/// Size: 0x0000 (0x000030 - 0x000030)
class UKillerStatusData : public UObject
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.KillerStatusData.IsEqual
	// bool IsEqual(class UKillerStatusData* Other);                                                                         // [0x49fcaf0] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewInterfaces.DoctorStatusData
/// Size: 0x0008 (0x000030 - 0x000038)
class UDoctorStatusData : public UKillerStatusData
{ 
public:
	EAfflictionLevel                                   AfflictionLevel;                                            // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/DBDUIViewInterfaces.ExecutionerStatusData
/// Size: 0x0008 (0x000030 - 0x000038)
class UExecutionerStatusData : public UKillerStatusData
{ 
public:
	float                                              AgonyProgress;                                              // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/DBDUIViewInterfaces.TwinsStatusData
/// Size: 0x0008 (0x000030 - 0x000038)
class UTwinsStatusData : public UKillerStatusData
{ 
public:
	bool                                               TwinsActive;                                                // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/DBDUIViewInterfaces.GhostfaceStatusData
/// Size: 0x0008 (0x000030 - 0x000038)
class UGhostfaceStatusData : public UKillerStatusData
{ 
public:
	bool                                               IsExposed;                                                  // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              StalkingProgress;                                           // 0x0034   (0x0004)  
};

/// Class /Script/DBDUIViewInterfaces.NightmareStatusData
/// Size: 0x0010 (0x000030 - 0x000040)
class UNightmareStatusData : public UKillerStatusData
{ 
public:
	ESleepingUIState                                   SleepingState;                                              // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              SleepingProgress;                                           // 0x0034   (0x0004)  
	float                                              SleepProtectionRemainingDuration;                           // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/DBDUIViewInterfaces.PigStatusData
/// Size: 0x0008 (0x000030 - 0x000038)
class UPigStatusData : public UKillerStatusData
{ 
public:
	EReverseBearTrapUIState                            ReverseBearTrapState;                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              TimerProgress;                                              // 0x0034   (0x0004)  
};

/// Class /Script/DBDUIViewInterfaces.PlagueStatusData
/// Size: 0x0008 (0x000030 - 0x000038)
class UPlagueStatusData : public UKillerStatusData
{ 
public:
	ESicknessLevel                                     SicknessLevel;                                              // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              SicknessProgress;                                           // 0x0034   (0x0004)  
};

/// Class /Script/DBDUIViewInterfaces.TricksterStatusData
/// Size: 0x0010 (0x000030 - 0x000040)
class UTricksterStatusData : public UKillerStatusData
{ 
public:
	float                                              CurrentLacerationLevel;                                     // 0x0030   (0x0004)  
	float                                              MaximumLacerationLevel;                                     // 0x0034   (0x0004)  
	bool                                               IsDangerousLacerationLevel;                                 // 0x0038   (0x0001)  
	bool                                               WasRecentlyDamagedByLaceration;                             // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x003A   (0x0006)  MISSED
};

/// Class /Script/DBDUIViewInterfaces.K24StatusData
/// Size: 0x0008 (0x000030 - 0x000038)
class UK24StatusData : public UKillerStatusData
{ 
public:
	bool                                               IsContaminated;                                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/DBDUIViewInterfaces.K25StatusData
/// Size: 0x0008 (0x000030 - 0x000038)
class UK25StatusData : public UKillerStatusData
{ 
public:
	float                                              ChainHuntProgressPercentage;                                // 0x0030   (0x0004)  
	bool                                               IsHoldingLamentConfiguration;                               // 0x0034   (0x0001)  
	bool                                               IsSolvingLamentConfiguration;                               // 0x0035   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0036   (0x0002)  MISSED
};

/// Class /Script/DBDUIViewInterfaces.K26StatusData
/// Size: 0x0008 (0x000030 - 0x000038)
class UK26StatusData : public UKillerStatusData
{ 
public:
	bool                                               IsCrowAttached;                                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/DBDUIViewInterfaces.TheOnryoStatusData
/// Size: 0x0010 (0x000030 - 0x000040)
class UTheOnryoStatusData : public UKillerStatusData
{ 
public:
	bool                                               IsCondemnedActive;                                          // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              CondemnedProgress;                                          // 0x0034   (0x0004)  
	bool                                               IsFullCondemned;                                            // 0x0038   (0x0001)  
	bool                                               IsHoldingTape;                                              // 0x0039   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x003A   (0x0006)  MISSED
};

/// Class /Script/DBDUIViewInterfaces.K28StatusData
/// Size: 0x0008 (0x000030 - 0x000038)
class UK28StatusData : public UKillerStatusData
{ 
public:
	float                                              DayNightCycleProgressPercentage;                            // 0x0030   (0x0004)  
	bool                                               IsDaytime;                                                  // 0x0034   (0x0001)  
	bool                                               IsTransitioningToNighttime;                                 // 0x0035   (0x0001)  
	bool                                               IsNighttime;                                                // 0x0036   (0x0001)  
	bool                                               IsTransitioningToDaytime;                                   // 0x0037   (0x0001)  
};

/// Class /Script/DBDUIViewInterfaces.K29StatusData
/// Size: 0x0008 (0x000030 - 0x000038)
class UK29StatusData : public UKillerStatusData
{ 
public:
	float                                              InfectionPercentage;                                        // 0x0030   (0x0004)  
	bool                                               IsInfected;                                                 // 0x0034   (0x0001)  
	bool                                               IsInfectionActive;                                          // 0x0035   (0x0001)  
	bool                                               IsInfectionCritical;                                        // 0x0036   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0037   (0x0001)  MISSED
};

/// Class /Script/DBDUIViewInterfaces.K30StatusData
/// Size: 0x0008 (0x000030 - 0x000038)
class UK30StatusData : public UKillerStatusData
{ 
public:
	float                                              HuntRemainingPercentage;                                    // 0x0030   (0x0004)  
	bool                                               IsHuntingSurvivor;                                          // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0035   (0x0003)  MISSED
};

/// Class /Script/DBDUIViewInterfaces.K31StatusData
/// Size: 0x0008 (0x000030 - 0x000038)
class UK31StatusData : public UKillerStatusData
{ 
public:
	float                                              EffectProgressPercentage;                                   // 0x0030   (0x0004)  
	bool                                               IsClawTrapped;                                              // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0035   (0x0003)  MISSED
};

/// Class /Script/DBDUIViewInterfaces.K32StatusData
/// Size: 0x0008 (0x000030 - 0x000038)
class UK32StatusData : public UKillerStatusData
{ 
public:
	bool                                               IsAssimilated;                                              // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/DBDUIViewInterfaces.PlayerStatusViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UPlayerStatusViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.PlayerStatusViewInterface.UpdateSurvivorSpecificPingIcon
	// void UpdateSurvivorSpecificPingIcon(EConnectionQuality& connectionQuality);                                           // [0x4a03cd0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.PlayerStatusViewInterface.UpdateSurvivorActivityProgress
	// void UpdateSurvivorActivityProgress(float Progress);                                                                  // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.PlayerStatusViewInterface.TriggerAfflictionHit
	// void TriggerAfflictionHit();                                                                                          // [0x49d5eb0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.PlayerStatusViewInterface.ShowSurvivorActivity
	// void ShowSurvivorActivity(TWeakObjectPtr<UTexture2D*>& activityIcon, bool ShouldDisplayProgress);                     // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.PlayerStatusViewInterface.SetTimerProgress
	// void SetTimerProgress(float value, bool IsDeepWound);                                                                 // [0x4a037c0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.PlayerStatusViewInterface.SetPlayerNameVisibility
	// void SetPlayerNameVisibility(bool visible);                                                                           // [0x49d7c10] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.PlayerStatusViewInterface.SetKiller
	// void SetKiller(FGameplayTag killerTag);                                                                               // [0x4a032c0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.PlayerStatusViewInterface.SetData
	// void SetData(FPlayerStatusViewData& Data);                                                                            // [0x4a02d70] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.PlayerStatusViewInterface.SetCampProgress
	// void SetCampProgress(float value, bool IsLocalPlayerAKiller);                                                         // [0x4a02c90] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.PlayerStatusViewInterface.PlayTimerAnimation
	// void PlayTimerAnimation();                                                                                            // [0x49e9490] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.PlayerStatusViewInterface.PlayHookEscapeFailedAnimation
	// void PlayHookEscapeFailedAnimation();                                                                                 // [0x49e8cc0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.PlayerStatusViewInterface.HideSurvivorActivity
	// void HideSurvivorActivity();                                                                                          // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.PlayerStatusViewInterface.EnableChasesMode
	// void EnableChasesMode(bool isChased);                                                                                 // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.PlayerStatusViewInterface.ClearData
	// void ClearData();                                                                                                     // [0x49efc60] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.PowerBundleViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UPowerBundleViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.PowerBundleViewInterface.SetData
	// void SetData(FPowerBundleViewData& PowerBundleViewData);                                                              // [0x4a02e40] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.PowerBundleViewInterface.ClearData
	// void ClearData();                                                                                                     // [0x49d5eb0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.PowerViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UPowerViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.PowerViewInterface.SetData
	// void SetData(FPowerViewData& PowerViewData);                                                                          // [0x4a02fc0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.PowerViewInterface.ClearData
	// void ClearData();                                                                                                     // [0x49d5eb0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.ProcessingPopupViewData
/// Size: 0x0000 (0x000068 - 0x000068)
class UProcessingPopupViewData : public UBasePopupViewData
{ 
public:
};

/// Class /Script/DBDUIViewInterfaces.ProcessingPopupViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UProcessingPopupViewInterface : public UInterface
{ 
public:
};

/// Class /Script/DBDUIViewInterfaces.ProfileMenuCustomizationViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UProfileMenuCustomizationViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.ProfileMenuCustomizationViewInterface.SetSelectedItem
	// void SetSelectedItem(int32_t selectedIndex);                                                                          // [0x4a03460] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ProfileMenuCustomizationViewInterface.SetPreviewAreaData
	// void SetPreviewAreaData(FCustomizationItemPreviewAreaViewData& ViewData, bool noCustomizationEquipped);               // [0x4a03360] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ProfileMenuCustomizationViewInterface.SetItemsData
	// void SetItemsData(TArray<UStoreCustomizationItemViewData*>& customizationRewardsData, int32_t selectedIndex);         // [0x4a031c0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ProfileMenuCustomizationViewInterface.SetEquipButtonText
	// void SetEquipButtonText(bool canEquip, bool IsEquipped);                                                              // [0x4a030f0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ProfileMenuCustomizationViewInterface.Init
	// void Init(ECustomizationCategory CustomizationCategory, EItemSorting itemSortingType);                                // [0x4a02bc0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ProfileMenuCustomizationViewInterface.EnableInputs
	// void EnableInputs(bool enable);                                                                                       // [0x49d6280] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ProfileMenuCustomizationViewInterface.DeselectItem
	// void DeselectItem();                                                                                                  // [0x49e8cc0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ProfileMenuCustomizationViewInterface.Deinit
	// void Deinit();                                                                                                        // [0x49d5ed0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.ProfileMenuStatsViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UProfileMenuStatsViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.ProfileMenuStatsViewInterface.SetPlayerRanks
	// void SetPlayerRanks(FRankViewData& survivorViewData, FRankViewData& killerViewData);                                  // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ProfileMenuStatsViewInterface.SetPlayerLevel
	// void SetPlayerLevel(FPlayerLevelViewData& ViewData);                                                                  // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.ProfileMenuViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UProfileMenuViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.ProfileMenuViewInterface.SetTitle
	// void SetTitle(FText& Title);                                                                                          // [0x4a038a0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ProfileMenuViewInterface.SetTabSelected
	// void SetTabSelected(int32_t Key);                                                                                     // [0x4a035c0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ProfileMenuViewInterface.SetTabsData
	// void SetTabsData(TArray<FTabWidgetData>& tabsData, int32_t SelectedKey);                                              // [0x4a03650] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ProfileMenuViewInterface.SetTabEnabled
	// void SetTabEnabled(int32_t Key, bool Enabled);                                                                        // [0x49d61b0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ProfileMenuViewInterface.SetSubtitle
	// void SetSubtitle(FText& Subtitle);                                                                                    // [0x4a034f0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ProfileMenuViewInterface.SetMenuState
	// void SetMenuState(EProfileMenuState menuState);                                                                       // [0x49f02c0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ProfileMenuViewInterface.GetProfileMenuStatsInterface
	// TScriptInterface<Class> GetProfileMenuStatsInterface();                                                               // [0x49fca00] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DBDUIViewInterfaces.ProfileMenuViewInterface.GetProfileMenuBannerInterface
	// TScriptInterface<Class> GetProfileMenuBannerInterface();                                                              // [0x4a02b80] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DBDUIViewInterfaces.ProfileMenuViewInterface.GetProfileMenuBadgeInterface
	// TScriptInterface<Class> GetProfileMenuBadgeInterface();                                                               // [0x49fc9c0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewInterfaces.ProgressionSystemInfoPopupViewData
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UProgressionSystemInfoPopupViewData : public UGenericPopupViewData
{ 
public:
};

/// Class /Script/DBDUIViewInterfaces.ProgressionSystemInfoPopupViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UProgressionSystemInfoPopupViewInterface : public UInterface
{ 
public:
};

/// Class /Script/DBDUIViewInterfaces.ReportFeedbackPopupViewData
/// Size: 0x0010 (0x0001F0 - 0x000200)
class UReportFeedbackPopupViewData : public UGenericPopupViewData
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x01F0   (0x0010)  MISSED
};

/// Class /Script/DBDUIViewInterfaces.ReportFeedbackPopupViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UReportFeedbackPopupViewInterface : public UInterface
{ 
public:
};

/// Class /Script/DBDUIViewInterfaces.RewardPopupViewData
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class URewardPopupViewData : public UGenericPopupViewData
{ 
public:
};

/// Class /Script/DBDUIViewInterfaces.RewardPopupViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class URewardPopupViewInterface : public UInterface
{ 
public:
};

/// Class /Script/DBDUIViewInterfaces.ScreenIndicatorsContainerViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UScreenIndicatorsContainerViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.ScreenIndicatorsContainerViewInterface.ShowDirectionIndicator
	// void ShowDirectionIndicator(FScreenIndicatorViewData& Data);                                                          // [0x4a03970] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.ScreenIndicatorsContainerViewInterface.RemoveDirectionIndicator
	// void RemoveDirectionIndicator(FString ID);                                                                            // [0x49d5ef0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Struct /Script/DBDUIViewInterfaces.RewardViewData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FRewardViewData
{ 
	SDK_UNDEFINED(48,1305) /* TWeakObjectPtr<UTexture2D*> */ __um(Icon);                                           // 0x0000   (0x0030)  
};

/// Struct /Script/DBDUIViewInterfaces.CharacterTooltipViewData
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FCharacterTooltipViewData
{ 
	SDK_UNDEFINED(24,1306) /* FText */                 __um(DisplayName);                                          // 0x0000   (0x0018)  
	SDK_UNDEFINED(24,1307) /* FText */                 __um(Biography);                                            // 0x0018   (0x0018)  
	SDK_UNDEFINED(24,1308) /* FText */                 __um(DLCTitle);                                             // 0x0030   (0x0018)  
	SDK_UNDEFINED(24,1309) /* FText */                 __um(PackId);                                               // 0x0048   (0x0018)  
	SDK_UNDEFINED(24,1310) /* FText */                 __um(PackTitle);                                            // 0x0060   (0x0018)  
	int32_t                                            Level;                                                      // 0x0078   (0x0004)  
	int32_t                                            Prestige;                                                   // 0x007C   (0x0004)  
	bool                                               IsUnlocked;                                                 // 0x0080   (0x0001)  
	bool                                               IsNewInStore;                                               // 0x0081   (0x0001)  
	bool                                               IsOwned;                                                    // 0x0082   (0x0001)  
	bool                                               IsAvailableInStore;                                         // 0x0083   (0x0001)  
	bool                                               IsDLCPurchasable;                                           // 0x0084   (0x0001)  
	ECharacterDifficulty                               Difficulty;                                                 // 0x0085   (0x0001)  
	bool                                               IsEnabled;                                                  // 0x0086   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0087   (0x0001)  MISSED
	SDK_UNDEFINED(24,1311) /* FText */                 __um(CharacterDisabledMessage);                             // 0x0088   (0x0018)  
};

/// Struct /Script/DBDUIViewInterfaces.CharacterRewardViewData
/// Size: 0x00C0 (0x000030 - 0x0000F0)
struct FCharacterRewardViewData : FRewardViewData
{ 
	FName                                              ItemId;                                                     // 0x0030   (0x000C)  
	bool                                               IsOwned;                                                    // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x003D   (0x0003)  MISSED
	int32_t                                            Level;                                                      // 0x0040   (0x0004)  
	int32_t                                            Prestige;                                                   // 0x0044   (0x0004)  
	FCharacterTooltipViewData                          TooltipData;                                                // 0x0048   (0x00A0)  
	bool                                               IsEnabled;                                                  // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00E9   (0x0007)  MISSED
};

/// Struct /Script/DBDUIViewInterfaces.CurrencyExpirationLabelViewData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FCurrencyExpirationLabelViewData
{ 
	int32_t                                            Amount;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(24,1312) /* FText */                 __um(ExpirationDate);                                       // 0x0008   (0x0018)  
};

/// Struct /Script/DBDUIViewInterfaces.CurrencyProgressionTooltipViewData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FCurrencyProgressionTooltipViewData
{ 
	bool                                               IsCurrency;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(24,1313) /* FText */                 __um(Title);                                                // 0x0008   (0x0018)  
	SDK_UNDEFINED(24,1314) /* FText */                 __um(Description);                                          // 0x0020   (0x0018)  
	SDK_UNDEFINED(48,1315) /* TWeakObjectPtr<UMaterialInterface*> */ __um(TooltipHeaderMaterial);                  // 0x0038   (0x0030)  
	SDK_UNDEFINED(48,1316) /* TWeakObjectPtr<UTexture2D*> */ __um(TooltipDecorationIcon);                          // 0x0068   (0x0030)  
	SDK_UNDEFINED(24,1317) /* FText */                 __um(EventName);                                            // 0x0098   (0x0018)  
	SDK_UNDEFINED(24,1318) /* FText */                 __um(EventDescription);                                     // 0x00B0   (0x0018)  
	SDK_UNDEFINED(24,1319) /* FText */                 __um(EventTimer);                                           // 0x00C8   (0x0018)  
	TArray<FCurrencyExpirationLabelViewData>           ExpirationData;                                             // 0x00E0   (0x0010)  
};

/// Struct /Script/DBDUIViewInterfaces.CurrencyProgressionRewardViewData
/// Size: 0x0130 (0x000030 - 0x000160)
struct FCurrencyProgressionRewardViewData : FRewardViewData
{ 
	ECurrencyType                                      CurrencyType;                                               // 0x0030   (0x0001)  
	EProgressionType                                   ProgressionType;                                            // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0032   (0x0002)  MISSED
	int32_t                                            Amount;                                                     // 0x0034   (0x0004)  
	bool                                               IsAffordable;                                               // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	SDK_UNDEFINED(48,1320) /* TWeakObjectPtr<UMaterialInterface*> */ __um(RewardBackgroundMaterial);               // 0x0040   (0x0030)  
	FCurrencyProgressionTooltipViewData                TooltipData;                                                // 0x0070   (0x00F0)  
};

/// Struct /Script/DBDUIViewInterfaces.PriceTagViewData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPriceTagViewData
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	ECurrencyType                                      Type;                                                       // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            Amount;                                                     // 0x000C   (0x0004)  
	int32_t                                            DiscountValue;                                              // 0x0010   (0x0004)  
	bool                                               IsAffordable;                                               // 0x0014   (0x0001)  
	bool                                               DisplayDiscountAsOriginalPrice;                             // 0x0015   (0x0001)  
	unsigned char                                      UnknownData02_6[0xA];                                       // 0x0016   (0x000A)  MISSED
};

/// Struct /Script/DBDUIViewInterfaces.CustomizationTooltipViewData
/// Size: 0x0118 (0x000000 - 0x000118)
struct FCustomizationTooltipViewData
{ 
	SDK_UNDEFINED(24,1321) /* FText */                 __um(DisplayName);                                          // 0x0000   (0x0018)  
	SDK_UNDEFINED(24,1322) /* FText */                 __um(ParentName);                                           // 0x0018   (0x0018)  
	SDK_UNDEFINED(24,1323) /* FText */                 __um(RarityPartInfo);                                       // 0x0030   (0x0018)  
	SDK_UNDEFINED(24,1324) /* FText */                 __um(CollectionDisplayName);                                // 0x0048   (0x0018)  
	SDK_UNDEFINED(24,1325) /* FText */                 __um(Description);                                          // 0x0060   (0x0018)  
	SDK_UNDEFINED(24,1326) /* FText */                 __um(RoleCategoryInfo);                                     // 0x0078   (0x0018)  
	EOriginWidgetState                                 CustomizationOriginState;                                   // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0091   (0x0007)  MISSED
	SDK_UNDEFINED(24,1327) /* FText */                 __um(CustomizationOriginInfo);                              // 0x0098   (0x0018)  
	bool                                               IsLocked;                                                   // 0x00B0   (0x0001)  
	bool                                               IsUnbreakable;                                              // 0x00B1   (0x0001)  
	bool                                               IsEquipped;                                                 // 0x00B2   (0x0001)  
	bool                                               IsBuyable;                                                  // 0x00B3   (0x0001)  
	bool                                               IsOwned;                                                    // 0x00B4   (0x0001)  
	bool                                               IsOutfitPart;                                               // 0x00B5   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x00B6   (0x0002)  MISSED
	SDK_UNDEFINED(24,1328) /* FText */                 __um(OutfitInfoText);                                       // 0x00B8   (0x0018)  
	EPlayerRole                                        AssociatedRole;                                             // 0x00D0   (0x0001)  
	EItemRarity                                        Rarity;                                                     // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x00D2   (0x0006)  MISSED
	TArray<FPriceTagViewData>                          Prices;                                                     // 0x00D8   (0x0010)  
	bool                                               IsEnabled;                                                  // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x00E9   (0x0007)  MISSED
	SDK_UNDEFINED(24,1329) /* FText */                 __um(CustomizationDisabledMessage);                         // 0x00F0   (0x0018)  
	SDK_UNDEFINED(16,1330) /* FString */               __um(EventBannerLabel);                                     // 0x0108   (0x0010)  
};

/// Struct /Script/DBDUIViewInterfaces.CustomizationRewardViewData
/// Size: 0x0180 (0x000030 - 0x0001B0)
struct FCustomizationRewardViewData : FRewardViewData
{ 
	FName                                              CustomizationId;                                            // 0x0030   (0x000C)  
	FName                                              OutfitId;                                                   // 0x003C   (0x000C)  
	FDateTime                                          ReleaseDate;                                                // 0x0048   (0x0008)  
	EItemRarity                                        Rarity;                                                     // 0x0050   (0x0001)  
	bool                                               IsOwned;                                                    // 0x0051   (0x0001)  
	bool                                               IsBuyable;                                                  // 0x0052   (0x0001)  
	bool                                               IsEquipped;                                                 // 0x0053   (0x0001)  
	bool                                               IsUnbreakable;                                              // 0x0054   (0x0001)  
	bool                                               IsEventItem;                                                // 0x0055   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0056   (0x0002)  MISSED
	FCustomizationTooltipViewData                      TooltipData;                                                // 0x0058   (0x0118)  
	ECustomizationCategory                             CustomizationCategory;                                      // 0x0170   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0171   (0x0003)  MISSED
	int32_t                                            AssociatedCharacter;                                        // 0x0174   (0x0004)  
	bool                                               IsEnabled;                                                  // 0x0178   (0x0001)  
	bool                                               GrantsMilestonePointOnUnlock;                               // 0x0179   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x017A   (0x0006)  MISSED
	TArray<FPriceTagViewData>                          PriceTagData;                                               // 0x0180   (0x0010)  
	SDK_UNDEFINED(16,1331) /* FString */               __um(LimitedTimeText);                                      // 0x0190   (0x0010)  
	SDK_UNDEFINED(16,1332) /* FString */               __um(DiscountTimeText);                                     // 0x01A0   (0x0010)  
};

/// Struct /Script/DBDUIViewInterfaces.RewardWrapperViewData
/// Size: 0x0408 (0x000000 - 0x000408)
struct FRewardWrapperViewData
{ 
	ERewardType                                        RewardType;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FCharacterRewardViewData                           CharacterRewardViewData;                                    // 0x0008   (0x00F0)  
	FCurrencyProgressionRewardViewData                 CurrencyProgressionRewardViewData;                          // 0x00F8   (0x0160)  
	FCustomizationRewardViewData                       CustomizationRewardViewData;                                // 0x0258   (0x01B0)  
};

/// Class /Script/DBDUIViewInterfaces.SeasonEndRankRewardsPopupViewData
/// Size: 0x0030 (0x0001F0 - 0x000220)
class USeasonEndRankRewardsPopupViewData : public UGenericPopupViewData
{ 
public:
	int32_t                                            OldKillerRank;                                              // 0x01F0   (0x0004)  
	int32_t                                            OldSurvivorRank;                                            // 0x01F4   (0x0004)  
	TArray<FRewardWrapperViewData>                     SurvivorRewards;                                            // 0x01F8   (0x0010)  
	TArray<FRewardWrapperViewData>                     KillerRewards;                                              // 0x0208   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0218   (0x0008)  MISSED
};

/// Class /Script/DBDUIViewInterfaces.SeasonEndRankRewardsPopupViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class USeasonEndRankRewardsPopupViewInterface : public UInterface
{ 
public:
};

/// Class /Script/DBDUIViewInterfaces.SkillCheckViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class USkillCheckViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.SkillCheckViewInterface.UpdateProgress
	// void UpdateProgress(float value);                                                                                     // [0x4a03c40] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.SkillCheckViewInterface.UpdatePositionOffset
	// void UpdatePositionOffset(int32_t X, int32_t Y);                                                                      // [0x4a03b70] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.SkillCheckViewInterface.ShowSkillCheckSuccess
	// void ShowSkillCheckSuccess(bool IsBonus);                                                                             // [0x49d7c10] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.SkillCheckViewInterface.ShowSkillCheckFail
	// void ShowSkillCheckFail();                                                                                            // [0x49e2950] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.SkillCheckViewInterface.ShowSkillCheck
	// void ShowSkillCheck(FSkillCheckViewData& skillCheckData);                                                             // [0x4a03a50] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.SkillCheckViewInterface.HideSkillCheck
	// void HideSkillCheck();                                                                                                // [0x49efa30] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.SkillCheckViewInterface.ApplyScaleFactor
	// void ApplyScaleFactor(float Scale);                                                                                   // [0x49d6d20] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.SpectateBarViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class USpectateBarViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.SpectateBarViewInterface.SetSpectatedName
	// void SetSpectatedName(FString playerName);                                                                            // [0x49e9c90] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.SpectateBarViewInterface.SetSpectateBarVisibility
	// void SetSpectateBarVisibility(bool IsVisible);                                                                        // [0x49d6620] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.SpectateBarViewInterface.SetBotTag
	// void SetBotTag(bool IsBot);                                                                                           // [0x49d6280] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.SpectateBarViewInterface.SetArrowsVisibility
	// void SetArrowsVisibility(bool IsVisible);                                                                             // [0x49d6120] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.StartSequenceViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UStartSequenceViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.StartSequenceViewInterface.ShowStartSequence
	// void ShowStartSequence(FStartSequenceViewData& Data);                                                                 // [0x49f5550] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.StartSequenceViewInterface.HideStartSequence
	// void HideStartSequence();                                                                                             // [0x49d5eb0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.StartSequenceViewInterface.GetIsStartSequenceVisible
	// bool GetIsStartSequenceVisible();                                                                                     // [0x4a08d20] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewInterfaces.StatusEffectViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UStatusEffectViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.StatusEffectViewInterface.ShowActiveStatusEffect
	// void ShowActiveStatusEffect(FStatusEffectViewData& statusEffectData);                                                 // [0x4a098c0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.StatusEffectViewInterface.RemoveExistingStatusEffect
	// void RemoveExistingStatusEffect(FName& statusEffectID);                                                               // [0x4a08f50] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.StoreBaseSubTabsViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UStoreBaseSubTabsViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.StoreBaseSubTabsViewInterface.UpdateTabData
	// void UpdateTabData(int32_t subTabId, FTabWidgetData TabWidgetData);                                                   // [0x4a09970] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.StoreBaseSubTabsViewInterface.UnselectCurrentTab
	// void UnselectCurrentTab();                                                                                            // [0x49e2950] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.StoreBaseSubTabsViewInterface.SetSubTabsData
	// void SetSubTabsData(TArray<FTabWidgetData>& tabsData);                                                                // [0x4a097a0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.StoreBaseSubTabsViewInterface.SelectSubTab
	// void SelectSubTab(int32_t SelectedKey);                                                                               // [0x4a08ff0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.StoreBaseSubTabsViewInterface.ActivateSubTabContent
	// void ActivateSubTabContent(int32_t State);                                                                            // [0x4a08c90] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.StoreChapterPacksListViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UStoreChapterPacksListViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.StoreChapterPacksListViewInterface.SetData
	// void SetData(TArray<UStoreChapterPackViewData*>& Data);                                                               // [0x4a09210] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.StoreChapterPackViewData
/// Size: 0x00A0 (0x000030 - 0x0000D0)
class UStoreChapterPackViewData : public UObject
{ 
public:
	SDK_UNDEFINED(16,1333) /* FString */               __um(ID);                                                   // 0x0030   (0x0010)  
	SDK_UNDEFINED(24,1334) /* FText */                 __um(DisplayTitle);                                         // 0x0040   (0x0018)  
	SDK_UNDEFINED(48,1335) /* TWeakObjectPtr<UTexture2D*> */ __um(PackImage);                                      // 0x0058   (0x0030)  
	FPriceTagViewData                                  PriceTagData;                                               // 0x0088   (0x0020)  
	TArray<class UStoreCharacterItemViewData*>         CharactersData;                                             // 0x00A8   (0x0010)  
	TArray<class UStoreCustomizationItemViewData*>     CustomizationsData;                                         // 0x00B8   (0x0010)  
	int32_t                                            SortOrder;                                                  // 0x00C8   (0x0004)  
	bool                                               IsNew;                                                      // 0x00CC   (0x0001)  
	bool                                               IsOwned;                                                    // 0x00CD   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00CE   (0x0002)  MISSED
};

/// Class /Script/DBDUIViewInterfaces.StoreItemViewData
/// Size: 0x0038 (0x000030 - 0x000068)
class UStoreItemViewData : public UObject
{ 
public:
	TArray<FPriceTagViewData>                          PriceTagData;                                               // 0x0030   (0x0010)  
	bool                                               IsInStore;                                                  // 0x0040   (0x0001)  
	bool                                               IsNewInStore;                                               // 0x0041   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0042   (0x0006)  MISSED
	SDK_UNDEFINED(16,1336) /* FString */               __um(LimitedTimeText);                                      // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,1337) /* FString */               __um(DiscountTimeText);                                     // 0x0058   (0x0010)  
};

/// Struct /Script/DBDUIViewInterfaces.SpecialEventInfoViewData
/// Size: 0x0060 (0x000000 - 0x000060)
struct FSpecialEventInfoViewData
{ 
	SDK_UNDEFINED(16,1338) /* FString */               __um(EventId);                                              // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1339) /* FString */               __um(EventBannerFrameLabel);                                // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,1340) /* FString */               __um(EventThemeFrameLabel);                                 // 0x0020   (0x0010)  
	SDK_UNDEFINED(24,1341) /* FText */                 __um(EventName);                                            // 0x0030   (0x0018)  
	bool                                               IsPastEvent;                                                // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	SDK_UNDEFINED(16,1342) /* FString */               __um(BloodwebCollectSoundEvent);                            // 0x0050   (0x0010)  
};

/// Class /Script/DBDUIViewInterfaces.StoreCharacterItemViewData
/// Size: 0x01F8 (0x000068 - 0x000260)
class UStoreCharacterItemViewData : public UStoreItemViewData
{ 
public:
	FCharacterRewardViewData                           CharacterReward;                                            // 0x0068   (0x00F0)  
	int32_t                                            characterIndex;                                             // 0x0158   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x015C   (0x0004)  MISSED
	SDK_UNDEFINED(24,1343) /* FText */                 __um(DisplayName);                                          // 0x0160   (0x0018)  
	SDK_UNDEFINED(24,1344) /* FText */                 __um(Biography);                                            // 0x0178   (0x0018)  
	EPlayerRole                                        playerRole;                                                 // 0x0190   (0x0001)  
	ECharacterDifficulty                               Difficulty;                                                 // 0x0191   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0192   (0x0006)  MISSED
	FSpecialEventInfoViewData                          EventInfo;                                                  // 0x0198   (0x0060)  
	FName                                              KillerPowerId;                                              // 0x01F8   (0x000C)  
	bool                                               IsUnlocked;                                                 // 0x0204   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0205   (0x0003)  MISSED
	int32_t                                            UnlockInfo;                                                 // 0x0208   (0x0004)  
	int32_t                                            ItemsOwned;                                                 // 0x020C   (0x0004)  
	int32_t                                            TotalItems;                                                 // 0x0210   (0x0004)  
	bool                                               HasNonSelectedPerks;                                        // 0x0214   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0215   (0x0003)  MISSED
	SDK_UNDEFINED(16,1345) /* FString */               __um(DLCId);                                                // 0x0218   (0x0010)  
	SDK_UNDEFINED(16,1346) /* FString */               __um(DLCTitle);                                             // 0x0228   (0x0010)  
	SDK_UNDEFINED(16,1347) /* FString */               __um(PackId);                                               // 0x0238   (0x0010)  
	SDK_UNDEFINED(16,1348) /* FString */               __um(PackTitle);                                            // 0x0248   (0x0010)  
	bool                                               IsDLCPurchasable;                                           // 0x0258   (0x0001)  
	bool                                               IsDlcLockedKiller;                                          // 0x0259   (0x0001)  
	bool                                               IsLegacyRewardPrestigeEnabled;                              // 0x025A   (0x0001)  
	unsigned char                                      UnknownData04_6[0x5];                                       // 0x025B   (0x0005)  MISSED
};

/// Class /Script/DBDUIViewInterfaces.StoreCharactersBioViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UStoreCharactersBioViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.StoreCharactersBioViewInterface.SetData
	// void SetData(FText& characterBio);                                                                                    // [0x4a092c0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.StoreCharactersCustomizationsViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UStoreCharactersCustomizationsViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.StoreCharactersCustomizationsViewInterface.SetData
	// void SetData(FStoreCharactersCustomizationsViewData& Data);                                                           // [0x4a09390] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.StoreCharactersCustomizationsViewInterface.GetStoreCharactersFilterInterface
	// TScriptInterface<Class> GetStoreCharactersFilterInterface();                                                          // [0x4a08dd0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewInterfaces.StoreCharactersFilterViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UStoreCharactersFilterViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.StoreCharactersFilterViewInterface.SetRarityFiltersVisibility
	// void SetRarityFiltersVisibility(bool showRarityFilters);                                                              // [0x49d6280] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.StoreCharactersFilterViewInterface.SetFiltersState
	// void SetFiltersState(FStoreCharactersFiltersData newFiltersData);                                                     // [0x4a09580] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.StoreCharactersSelectionViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UStoreCharactersSelectionViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.StoreCharactersSelectionViewInterface.SetData
	// void SetData(FStoreCharactersSelectionViewData& Data);                                                                // [0x4a094d0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.StoreCharactersSelectionViewInterface.GetStoreCharactersFilterInterface
	// TScriptInterface<Class> GetStoreCharactersFilterInterface();                                                          // [0x4a08dd0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewInterfaces.StoreCharactersViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UStoreCharactersViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.StoreCharactersViewInterface.SetKillerPower
	// void SetKillerPower(class UMenuPowerViewData* KillerPower);                                                           // [0x4a09710] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.StoreCharactersViewInterface.SetCharacterData
	// void SetCharacterData(FText& characterName, EPlayerRole Role, TArray<UCharacterPerkViewData*>& characterPerks);       // [0x4a09080] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.StoreCharactersViewInterface.GetStoreCharactersSelectionInterface
	// TScriptInterface<Class> GetStoreCharactersSelectionInterface();                                                       // [0x4a08e10] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DBDUIViewInterfaces.StoreCharactersViewInterface.GetStoreCharactersCustomizationsInterface
	// TScriptInterface<Class> GetStoreCharactersCustomizationsInterface();                                                  // [0x4a08d90] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DBDUIViewInterfaces.StoreCharactersViewInterface.GetStoreCharactersBioInterface
	// TScriptInterface<Class> GetStoreCharactersBioInterface();                                                             // [0x4a08d50] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewInterfaces.StoreCollectionsListViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UStoreCollectionsListViewInterface : public UInterface
{ 
public:
};

/// Class /Script/DBDUIViewInterfaces.StoreCollectionsViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UStoreCollectionsViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.StoreCollectionsViewInterface.GetTabSpecialInterface
	// TScriptInterface<Class> GetTabSpecialInterface();                                                                     // [0x4a08d50] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DBDUIViewInterfaces.StoreCollectionsViewInterface.GetTabFeaturedInterface
	// TScriptInterface<Class> GetTabFeaturedInterface();                                                                    // [0x4a08e50] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DBDUIViewInterfaces.StoreCollectionsViewInterface.GetTabAllInterface
	// TScriptInterface<Class> GetTabAllInterface();                                                                         // [0x4a08dd0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewInterfaces.StoreCollectionViewData
/// Size: 0x0110 (0x000030 - 0x000140)
class UStoreCollectionViewData : public UObject
{ 
public:
	SDK_UNDEFINED(16,1349) /* FString */               __um(CollectionId);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1350) /* FString */               __um(DisplayTitle);                                         // 0x0040   (0x0010)  
	SDK_UNDEFINED(16,1351) /* FString */               __um(DisplaySubtitle);                                      // 0x0050   (0x0010)  
	FDateTime                                          ActiveFrom;                                                 // 0x0060   (0x0008)  
	FDateTime                                          ActiveTo;                                                   // 0x0068   (0x0008)  
	int32_t                                            SortOrder;                                                  // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	FSoftRemoteContentCacheObjectPtr                   HeroImage;                                                  // 0x0078   (0x0060)  
	SDK_UNDEFINED(48,1352) /* TWeakObjectPtr<UFileMediaSource*> */ __um(HeroVideo);                                // 0x00D8   (0x0030)  
	TArray<FSoftRemoteContentCacheObjectPtr>           AdditionalImages;                                           // 0x0108   (0x0010)  
	bool                                               IsNew;                                                      // 0x0118   (0x0001)  
	bool                                               IsFeatured;                                                 // 0x0119   (0x0001)  
	bool                                               IsSpecial;                                                  // 0x011A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x011B   (0x0005)  MISSED
	FDateTime                                          SpecialStartDate;                                           // 0x0120   (0x0008)  
	FDateTime                                          SpecialEndDate;                                             // 0x0128   (0x0008)  
	TArray<class UStoreCustomizationItemViewData*>     Items;                                                      // 0x0130   (0x0010)  


	/// Functions
	// Function /Script/DBDUIViewInterfaces.StoreCollectionViewData.IsSpecialActive
	// bool IsSpecialActive();                                                                                               // [0x4a08f20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewInterfaces.StoreCollectionViewData.IsCollectionActive
	// bool IsCollectionActive();                                                                                            // [0x4a08ef0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewInterfaces.StoreCollectionViewData.HasHeroVideo
	// bool HasHeroVideo();                                                                                                  // [0x4a08ec0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewInterfaces.StoreCollectionViewData.HasHeroImage
	// bool HasHeroImage();                                                                                                  // [0x4a08e90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewInterfaces.StoreCustomizationItemViewData
/// Size: 0x02F8 (0x000068 - 0x000360)
class UStoreCustomizationItemViewData : public UStoreItemViewData
{ 
public:
	FCustomizationRewardViewData                       CustomizationReward;                                        // 0x0068   (0x01B0)  
	FName                                              MirrorsId;                                                  // 0x0218   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0224   (0x0004)  MISSED
	SDK_UNDEFINED(16,1353) /* FString */               __um(DisplayName);                                          // 0x0228   (0x0010)  
	SDK_UNDEFINED(16,1354) /* FString */               __um(DisplayCollectionName);                                // 0x0238   (0x0010)  
	SDK_UNDEFINED(16,1355) /* FString */               __um(Description);                                          // 0x0248   (0x0010)  
	SDK_UNDEFINED(16,1356) /* FString */               __um(RoleCategoryInfo);                                     // 0x0258   (0x0010)  
	SDK_UNDEFINED(16,1357) /* FString */               __um(RarityPartInfo);                                       // 0x0268   (0x0010)  
	FSpecialEventInfoViewData                          EventInfo;                                                  // 0x0278   (0x0060)  
	TArray<FName>                                      ParentBundleIds;                                            // 0x02D8   (0x0010)  
	TArray<FName>                                      ChildrenItemIds;                                            // 0x02E8   (0x0010)  
	FCustomTransformation                              CustomTransformation;                                       // 0x02F8   (0x0014)  
	bool                                               IsVisceral;                                                 // 0x030C   (0x0001)  
	bool                                               IsLocked;                                                   // 0x030D   (0x0001)  
	EPlayerRole                                        AssociatedRole;                                             // 0x030E   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x030F   (0x0001)  MISSED
	FDateTime                                          ReleaseDate;                                                // 0x0310   (0x0008)  
	unsigned char                                      UnknownData02_6[0x48];                                      // 0x0318   (0x0048)  MISSED
};

/// Class /Script/DBDUIViewInterfaces.StoreFeaturedViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UStoreFeaturedViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.StoreFeaturedViewInterface.InitFeaturedCustomizationItems
	// void InitFeaturedCustomizationItems(TArray<UStoreCustomizationItemViewData*>& viewDataArray);                         // [0x4a0e420] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.StoreFeaturedViewInterface.InitFeaturedCharacters
	// void InitFeaturedCharacters(TArray<FStoreFeaturedCharacterViewData>& characterViewDataArray);                         // [0x4a0e320] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.StoreFeaturedViewInterface.FocusFeaturedCharacter
	// void FocusFeaturedCharacter(int32_t characterIndex);                                                                  // [0x4a08c90] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.StoreMenuViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UStoreMenuViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.StoreMenuViewInterface.SetTabSelected
	// void SetTabSelected(int32_t Key);                                                                                     // [0x4a035c0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.StoreMenuViewInterface.SetTabsData
	// void SetTabsData(TArray<FTabWidgetData>& tabsData, int32_t SelectedKey);                                              // [0x4a03650] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.StoreMenuViewInterface.SetTabEnabled
	// void SetTabEnabled(int32_t Key, bool Enabled);                                                                        // [0x49d61b0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.StoreMenuViewInterface.SetMenuState
	// void SetMenuState(EStoreMenuState State);                                                                             // [0x49f02c0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.StoreMenuViewInterface.GetStoreSpecialsInterface
	// TScriptInterface<Class> GetStoreSpecialsInterface();                                                                  // [0x49fc9c0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DBDUIViewInterfaces.StoreMenuViewInterface.GetStoreSpecialPacksInterface
	// TScriptInterface<Class> GetStoreSpecialPacksInterface();                                                              // [0x4a0e2e0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DBDUIViewInterfaces.StoreMenuViewInterface.GetStoreFeaturedInterface
	// TScriptInterface<Class> GetStoreFeaturedInterface();                                                                  // [0x49fca00] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DBDUIViewInterfaces.StoreMenuViewInterface.GetStoreCollectionsInterface
	// TScriptInterface<Class> GetStoreCollectionsInterface();                                                               // [0x4a02b80] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DBDUIViewInterfaces.StoreMenuViewInterface.GetStoreCharactersInterface
	// TScriptInterface<Class> GetStoreCharactersInterface();                                                                // [0x4a08e10] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewInterfaces.StoreSpecialPacksHeritageViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UStoreSpecialPacksHeritageViewInterface : public UInterface
{ 
public:
};

/// Class /Script/DBDUIViewInterfaces.StoreSpecialPacksListViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UStoreSpecialPacksListViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.StoreSpecialPacksListViewInterface.SetData
	// void SetData(TArray<UStoreSpecialPackViewData*>& Data);                                                               // [0x4a09210] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.StoreSpecialPacksViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UStoreSpecialPacksViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.StoreSpecialPacksViewInterface.GetTabSpecialsInterface
	// TScriptInterface<Class> GetTabSpecialsInterface();                                                                    // [0x4a08d50] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DBDUIViewInterfaces.StoreSpecialPacksViewInterface.GetTabHeritageInterface
	// TScriptInterface<Class> GetTabHeritageInterface();                                                                    // [0x4a08dd0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DBDUIViewInterfaces.StoreSpecialPacksViewInterface.GetTabChaptersInterface
	// TScriptInterface<Class> GetTabChaptersInterface();                                                                    // [0x4a08e50] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewInterfaces.StoreSpecialPackViewData
/// Size: 0x00A8 (0x000030 - 0x0000D8)
class UStoreSpecialPackViewData : public UObject
{ 
public:
	SDK_UNDEFINED(16,1358) /* FString */               __um(ID);                                                   // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1359) /* FString */               __um(DisplayTitle);                                         // 0x0040   (0x0010)  
	SDK_UNDEFINED(48,1360) /* TWeakObjectPtr<UTexture2D*> */ __um(PackImage);                                      // 0x0050   (0x0030)  
	FPriceTagViewData                                  PriceTagData;                                               // 0x0080   (0x0020)  
	TArray<class UStoreCharacterItemViewData*>         CharactersData;                                             // 0x00A0   (0x0010)  
	TArray<class UStoreCustomizationItemViewData*>     CustomizationsData;                                         // 0x00B0   (0x0010)  
	FDateTime                                          ActivationStartDate;                                        // 0x00C0   (0x0008)  
	FDateTime                                          ActivationEndDate;                                          // 0x00C8   (0x0008)  
	int32_t                                            SortOrder;                                                  // 0x00D0   (0x0004)  
	bool                                               IsNew;                                                      // 0x00D4   (0x0001)  
	bool                                               IsOwned;                                                    // 0x00D5   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00D6   (0x0002)  MISSED
};

/// Class /Script/DBDUIViewInterfaces.StoreSpecialsItemViewData
/// Size: 0x0010 (0x000068 - 0x000078)
class UStoreSpecialsItemViewData : public UStoreItemViewData
{ 
public:
	FDateTime                                          EndTime;                                                    // 0x0068   (0x0008)  
	class UStoreItemViewData*                          Item;                                                       // 0x0070   (0x0008)  
};

/// Class /Script/DBDUIViewInterfaces.StoreSpecialsViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UStoreSpecialsViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.StoreSpecialsViewInterface.SetSpecialsData
	// void SetSpecialsData(TArray<UStoreSpecialsItemViewData*>& specialsData);                                              // [0x49f0340] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.StoreSpecialsViewInterface.SetAuricCellsSpecialOfferData
	// void SetAuricCellsSpecialOfferData(FAuricCellsBundleViewData& auricCellsSpecialOfferData);                            // [0x4a0e570] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.SubtitlesViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class USubtitlesViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.SubtitlesViewInterface.ShowSubtitle
	// void ShowSubtitle(FText& subtitleText);                                                                               // [0x4a038a0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.SubtitlesViewInterface.SetSubtitlesSize
	// void SetSubtitlesSize(ESubtitlesSize Size);                                                                           // [0x4a0e850] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.SubtitlesViewInterface.SetSubtitlesPosition
	// void SetSubtitlesPosition(ESubtitlesPosition position);                                                               // [0x49d70c0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.SubtitlesViewInterface.SetSubtitlesBackgroundOpacity
	// void SetSubtitlesBackgroundOpacity(ESubtitlesBackgroundOpacity Opacity);                                              // [0x49f02c0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.SubtitlesViewInterface.SetConstrainAspectRatioChanged
	// void SetConstrainAspectRatioChanged(bool isConstrained, float AspectRatio);                                           // [0x4a0e680] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.SubtitlesViewInterface.HideSubtitles
	// void HideSubtitles();                                                                                                 // [0x49e9490] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.TemplateViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UTemplateViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.TemplateViewInterface.TemplateExampleFunction
	// void TemplateExampleFunction(FTemplateViewData& templateData);                                                        // [0x4a0ea90] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.TestBuildFlagViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UTestBuildFlagViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.TestBuildFlagViewInterface.UpdateWidget
	// void UpdateWidget(ETestBuildType testBuildType, ETestBuildFlagPosition testBuildFlagPosition);                        // [0x4a0eb20] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.TutorialHighlightViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UTutorialHighlightViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.TutorialHighlightViewInterface.SetTutorialHighlight
	// void SetTutorialHighlight(bool Show, EHudComponent& componentId);                                                     // [0x4a0e8d0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.TutorialMysteryNoteViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UTutorialMysteryNoteViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.TutorialMysteryNoteViewInterface.ShowMysteryNote
	// void ShowMysteryNote(FNotifTutorialPopupViewData& notifData);                                                         // [0x4a0e9b0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.TutorialMysteryNoteViewInterface.HideMysteryNote
	// void HideMysteryNote();                                                                                               // [0x49d5eb0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.TutorialObjectivesViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UTutorialObjectivesViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.TutorialObjectivesViewInterface.RemoveTutorialObjective
	// void RemoveTutorialObjective(FName& ID);                                                                              // [0x4a0e4d0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.TutorialObjectivesViewInterface.RemoveAllTutorialObjectives
	// void RemoveAllTutorialObjectives();                                                                                   // [0x49d6100] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.TutorialObjectivesViewInterface.CompleteTutorialObjective
	// void CompleteTutorialObjective(FName& ID, bool removeAfterCompletion);                                                // [0x4a0e110] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.TutorialObjectivesViewInterface.AddTutorialObjective
	// void AddTutorialObjective(FName& ID, FTutorialObjectivesViewData& InteractionPromptViewData);                         // [0x4a0dfe0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.TutorialPopupViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UTutorialPopupViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.TutorialPopupViewInterface.ShowNotifTutorialPopup
	// void ShowNotifTutorialPopup(FNotifTutorialPopupViewData& notifTutoData);                                              // [0x4a0e9b0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewInterfaces.TutorialPopupViewInterface.HideTutorialPopup
	// void HideTutorialPopup(bool playSoundEffect);                                                                         // [0x49d6280] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewInterfaces.UIUtilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UUIUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.UIUtilities.ConvertArchiveCurrentAndMaxProgressionInPercentage
	// void ConvertArchiveCurrentAndMaxProgressionInPercentage(int32_t& outCurrentProgression, int32_t& outMaxProgression);  // [0x4a0e200] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/DBDUIViewInterfaces.UnlockPersonalPerksPopupViewData
/// Size: 0x0010 (0x0001F0 - 0x000200)
class UUnlockPersonalPerksPopupViewData : public UGenericPopupViewData
{ 
public:
	TArray<class UMenuPerkViewData*>                   PerksData;                                                  // 0x01F0   (0x0010)  
};

/// Class /Script/DBDUIViewInterfaces.UnlockPersonalPerksPopupViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UUnlockPersonalPerksPopupViewInterface : public UInterface
{ 
public:
};

/// Class /Script/DBDUIViewInterfaces.WatermarkViewInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UWatermarkViewInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewInterfaces.WatermarkViewInterface.SetSteamValuesText
	// void SetSteamValuesText(FString SteamName, FString SteamId);                                                          // [0x4a0e750] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Struct /Script/DBDUIViewInterfaces.ArchiveNodeObjectiveViewData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FArchiveNodeObjectiveViewData
{ 
	SDK_UNDEFINED(24,1361) /* FText */                 __um(Description);                                          // 0x0000   (0x0018)  
	int32_t                                            CurrentProgress;                                            // 0x0018   (0x0004)  
	int32_t                                            MaxProgress;                                                // 0x001C   (0x0004)  
	EQuestProgressionType                              ProgressionType;                                            // 0x0020   (0x0001)  
	bool                                               IsCommunityObjective;                                       // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0022   (0x0006)  MISSED
};

/// Struct /Script/DBDUIViewInterfaces.ArchiveNodeViewData
/// Size: 0x00B8 (0x000000 - 0x0000B8)
struct FArchiveNodeViewData
{ 
	EArchiveNodeType                                   Type;                                                       // 0x0000   (0x0001)  
	EStoryNodeState                                    Status;                                                     // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	SDK_UNDEFINED(24,1362) /* FText */                 __um(Title);                                                // 0x0008   (0x0018)  
	SDK_UNDEFINED(24,1363) /* FText */                 __um(Subtitle);                                             // 0x0020   (0x0018)  
	SDK_UNDEFINED(24,1364) /* FText */                 __um(Description);                                          // 0x0038   (0x0018)  
	SDK_UNDEFINED(16,1365) /* FString */               __um(DebugInfo);                                            // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,1366) /* FString */               __um(IconPath);                                             // 0x0060   (0x0010)  
	TArray<FArchiveNodeObjectiveViewData>              Objectives;                                                 // 0x0070   (0x0010)  
	TArray<FRewardWrapperViewData>                     Rewards;                                                    // 0x0080   (0x0010)  
	SDK_UNDEFINED(16,1367) /* TArray<FText> */         __um(VignetteTitles);                                       // 0x0090   (0x0010)  
	EPlayerRole                                        Role;                                                       // 0x00A0   (0x0001)  
	bool                                               IsImageReward;                                              // 0x00A1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x00A2   (0x0006)  MISSED
	SDK_UNDEFINED(16,1368) /* FString */               __um(VignetteId);                                           // 0x00A8   (0x0010)  
};

/// Struct /Script/DBDUIViewInterfaces.ArchiveNodeGraphViewData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FArchiveNodeGraphViewData
{ 
	FName                                              ID;                                                         // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FArchiveNodeViewData                               ViewData;                                                   // 0x0010   (0x00B8)  
	FVector2D                                          position;                                                   // 0x00C8   (0x0008)  
	TArray<FName>                                      Neighbors;                                                  // 0x00D0   (0x0010)  
	TArray<int32_t>                                    PathIndices;                                                // 0x00E0   (0x0010)  
};

/// Struct /Script/DBDUIViewInterfaces.StoreCharactersFiltersData
/// Size: 0x0058 (0x000000 - 0x000058)
struct FStoreCharactersFiltersData
{ 
	bool                                               IsFavorite;                                                 // 0x0000   (0x0001)  
	bool                                               IsOwned;                                                    // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	SDK_UNDEFINED(80,1369) /* TMap<EItemRarity, bool> */ __um(RarityFiltersMap);                                   // 0x0008   (0x0050)  
};

/// Struct /Script/DBDUIViewInterfaces.TabWidgetData
/// Size: 0x0080 (0x000000 - 0x000080)
struct FTabWidgetData
{ 
	int32_t                                            Key;                                                        // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(24,1370) /* FText */                 __um(Title);                                                // 0x0008   (0x0018)  
	bool                                               HasNotification;                                            // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	SDK_UNDEFINED(48,1371) /* TWeakObjectPtr<UTexture2D*> */ __um(Icon);                                           // 0x0028   (0x0030)  
	bool                                               ForcesIconSize;                                             // 0x0058   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0059   (0x0003)  MISSED
	FVector2D                                          IconSize;                                                   // 0x005C   (0x0008)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0064   (0x0004)  MISSED
	SDK_UNDEFINED(16,1372) /* FString */               __um(AnalyticsName);                                        // 0x0068   (0x0010)  
	bool                                               IsKillSwitchEnabled;                                        // 0x0078   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Struct /Script/DBDUIViewInterfaces.CorePlayerLevelTooltipViewData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FCorePlayerLevelTooltipViewData
{ 
	int32_t                                            PlayerLevel;                                                // 0x0000   (0x0004)  
	int32_t                                            PrestigeLevel;                                              // 0x0004   (0x0004)  
	int32_t                                            CurrentXP;                                                  // 0x0008   (0x0004)  
	int32_t                                            CurrentCapXP;                                               // 0x000C   (0x0004)  
};

/// Struct /Script/DBDUIViewInterfaces.PlayerLevelViewData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPlayerLevelViewData
{ 
	int32_t                                            PlayerLevel;                                                // 0x0000   (0x0004)  
	int32_t                                            PrestigeLevel;                                              // 0x0004   (0x0004)  
	FCorePlayerLevelTooltipViewData                    TooltipData;                                                // 0x0008   (0x0010)  
};

/// Struct /Script/DBDUIViewInterfaces.BaseLoadoutPartViewData
/// Size: 0x0058 (0x000000 - 0x000058)
struct FBaseLoadoutPartViewData
{ 
	FName                                              ItemId;                                                     // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(48,1373) /* TWeakObjectPtr<UTexture2D*> */ __um(iconTexture);                                    // 0x0010   (0x0030)  
	SDK_UNDEFINED(16,1374) /* FString */               __um(DisplayName);                                          // 0x0040   (0x0010)  
	EItemRarity                                        Rarity;                                                     // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Struct /Script/DBDUIViewInterfaces.AddonViewData
/// Size: 0x0010 (0x000058 - 0x000068)
struct FAddonViewData : FBaseLoadoutPartViewData
{ 
	float                                              Cooldown;                                                   // 0x0058   (0x0004)  
	EStatusEffectType                                  StatusEffectType;                                           // 0x005C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x005D   (0x0003)  MISSED
	int32_t                                            StackCount;                                                 // 0x0060   (0x0004)  
	ELoadoutPartState                                  LoadoutPartState;                                           // 0x0064   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0065   (0x0003)  MISSED
};

/// Struct /Script/DBDUIViewInterfaces.AlertsViewData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FAlertsViewData
{ 
	TArray<FRewardWrapperViewData>                     AlertRewards;                                               // 0x0000   (0x0010)  
	SDK_UNDEFINED(48,1375) /* TWeakObjectPtr<UTexture2D*> */ __um(EventBackground);                                // 0x0010   (0x0030)  
};

/// Struct /Script/DBDUIViewInterfaces.ArchiveChallengeReminderViewData
/// Size: 0x00D0 (0x000000 - 0x0000D0)
struct FArchiveChallengeReminderViewData
{ 
	FArchiveNodeViewData                               NodeViewData;                                               // 0x0000   (0x00B8)  
	SDK_UNDEFINED(24,1376) /* FText */                 __um(TomeSourceSubtitle);                                   // 0x00B8   (0x0018)  
};

/// Struct /Script/DBDUIViewInterfaces.CompendiumButtonData
/// Size: 0x0070 (0x000000 - 0x000070)
struct FCompendiumButtonData
{ 
	SDK_UNDEFINED(16,1377) /* FString */               __um(tomeId);                                               // 0x0000   (0x0010)  
	SDK_UNDEFINED(24,1378) /* FText */                 __um(TomeTitle);                                            // 0x0010   (0x0018)  
	bool                                               IsMastered;                                                 // 0x0028   (0x0001)  
	bool                                               IsActive;                                                   // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x002A   (0x0002)  MISSED
	int32_t                                            VolumeIndex;                                                // 0x002C   (0x0004)  
	TArray<class UArchiveStoryLevelViewData*>          TomeLevels;                                                 // 0x0030   (0x0010)  
	SDK_UNDEFINED(48,1379) /* TWeakObjectPtr<UTexture2D*> */ __um(StoryBookMarkTexture);                           // 0x0040   (0x0030)  
};

/// Struct /Script/DBDUIViewInterfaces.ArchiveMapPathViewData
/// Size: 0x002C (0x000000 - 0x00002C)
struct FArchiveMapPathViewData
{ 
	FVector2D                                          StartPositon;                                               // 0x0000   (0x0008)  
	FVector2D                                          EndPositon;                                                 // 0x0008   (0x0008)  
	FName                                              StartNodeId;                                                // 0x0010   (0x000C)  
	FName                                              EndNodeId;                                                  // 0x001C   (0x000C)  
	EArchivePathStatus                                 Status;                                                     // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
};

/// Struct /Script/DBDUIViewInterfaces.ArchiveRewardNodeTooltipViewData
/// Size: 0x0220 (0x000000 - 0x000220)
struct FArchiveRewardNodeTooltipViewData
{ 
	ERewardType                                        RewardType;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,1380) /* FString */               __um(NodeDebugInfo);                                        // 0x0008   (0x0010)  
	FCustomizationTooltipViewData                      CustomizationTooltipViewData;                               // 0x0018   (0x0118)  
	FCurrencyProgressionTooltipViewData                CurrencyProgressionTooltipViewData;                         // 0x0130   (0x00F0)  
};

/// Struct /Script/DBDUIViewInterfaces.ArchivesVignetteEntryViewData
/// Size: 0x0070 (0x000000 - 0x000070)
struct FArchivesVignetteEntryViewData
{ 
	SDK_UNDEFINED(24,1381) /* FText */                 __um(Title);                                                // 0x0000   (0x0018)  
	SDK_UNDEFINED(24,1382) /* FText */                 __um(Description);                                          // 0x0018   (0x0018)  
	bool                                               IsRead;                                                     // 0x0030   (0x0001)  
	bool                                               HasAudio;                                                   // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0032   (0x0006)  MISSED
	SDK_UNDEFINED(48,1383) /* TWeakObjectPtr<UTexture2D*> */ __um(RewardImage);                                    // 0x0038   (0x0030)  
	float                                              PreviewTextureOffset;                                       // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/DBDUIViewInterfaces.ArchivesVignetteViewData
/// Size: 0x0060 (0x000000 - 0x000060)
struct FArchivesVignetteViewData
{ 
	SDK_UNDEFINED(16,1384) /* FString */               __um(VignetteId);                                           // 0x0000   (0x0010)  
	SDK_UNDEFINED(24,1385) /* FText */                 __um(Title);                                                // 0x0010   (0x0018)  
	SDK_UNDEFINED(24,1386) /* FText */                 __um(Subtitle);                                             // 0x0028   (0x0018)  
	int32_t                                            LastShownProgressValue;                                     // 0x0040   (0x0004)  
	int32_t                                            CurrentProgress;                                            // 0x0044   (0x0004)  
	int32_t                                            MaxProgress;                                                // 0x0048   (0x0004)  
	int32_t                                            CinematicsNumber;                                           // 0x004C   (0x0004)  
	TArray<FArchivesVignetteEntryViewData>             Entries;                                                    // 0x0050   (0x0010)  
};

/// Struct /Script/DBDUIViewInterfaces.ArchivesPastTomeViewData
/// Size: 0x0070 (0x000000 - 0x000070)
struct FArchivesPastTomeViewData
{ 
	SDK_UNDEFINED(16,1387) /* FString */               __um(tomeId);                                               // 0x0000   (0x0010)  
	SDK_UNDEFINED(24,1388) /* FText */                 __um(TomeTitle);                                            // 0x0010   (0x0018)  
	bool                                               HasActiveNode;                                              // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            VolumeIndex;                                                // 0x002C   (0x0004)  
	TArray<class UArchiveStoryLevelViewData*>          TomeLevels;                                                 // 0x0030   (0x0010)  
	SDK_UNDEFINED(48,1389) /* TWeakObjectPtr<UTexture2D*> */ __um(StoryBookMarkTexture);                           // 0x0040   (0x0030)  
};

/// Struct /Script/DBDUIViewInterfaces.ArchivesRiftGenericViewData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FArchivesRiftGenericViewData
{ 
	FDateTime                                          EndDate;                                                    // 0x0000   (0x0008)  
	int32_t                                            currentTier;                                                // 0x0008   (0x0004)  
	int32_t                                            MaxTier;                                                    // 0x000C   (0x0004)  
	int32_t                                            CurrentStars;                                               // 0x0010   (0x0004)  
	int32_t                                            StarsPerTiers;                                              // 0x0014   (0x0004)  
	bool                                               OwnPass;                                                    // 0x0018   (0x0001)  
	bool                                               ShowBonusTierTooltip;                                       // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x001A   (0x0006)  MISSED
};

/// Struct /Script/DBDUIViewInterfaces.ArchiveRiftTierRewardsViewData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FArchiveRiftTierRewardsViewData
{ 
	int32_t                                            tier;                                                       // 0x0000   (0x0004)  
	ETierType                                          TierType;                                                   // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              TierProgress;                                               // 0x0008   (0x0004)  
	bool                                               IsPremiumUnlocked;                                          // 0x000C   (0x0001)  
	bool                                               IsCurrentTier;                                              // 0x000D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x000E   (0x0002)  MISSED
	TArray<FRewardWrapperViewData>                     FreeRewards;                                                // 0x0010   (0x0010)  
	TArray<FRewardWrapperViewData>                     PremiumRewards;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/DBDUIViewInterfaces.ArchivesRiftUnlockSequenceData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FArchivesRiftUnlockSequenceData
{ 
	int32_t                                            currentTier;                                                // 0x0000   (0x0004)  
	int32_t                                            previousTier;                                               // 0x0004   (0x0004)  
	bool                                               IsPremiumUnlocked;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/DBDUIViewInterfaces.EditorInterfaces
/// Size: 0x0030 (0x000000 - 0x000030)
struct FEditorInterfaces
{ 
	SDK_UNDEFINED(16,1390) /* TScriptInterface<Class> */ __um(QuestMapInterface);                                  // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1391) /* TScriptInterface<Class> */ __um(LevelProgressionInterface);                          // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,1392) /* TScriptInterface<Class> */ __um(EditorInterface);                                    // 0x0020   (0x0010)  
};

/// Struct /Script/DBDUIViewInterfaces.AuricCellsBundleViewData
/// Size: 0x0088 (0x000000 - 0x000088)
struct FAuricCellsBundleViewData
{ 
	FName                                              ID;                                                         // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(48,1393) /* TWeakObjectPtr<UTexture2D*> */ __um(iconTexture);                                    // 0x0010   (0x0030)  
	SDK_UNDEFINED(24,1394) /* FText */                 __um(BundleName);                                           // 0x0040   (0x0018)  
	int32_t                                            CurrencyAmount;                                             // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x005C   (0x0004)  MISSED
	SDK_UNDEFINED(16,1395) /* FString */               __um(DisplayedPrice);                                       // 0x0060   (0x0010)  
	float                                              BonusPercentage;                                            // 0x0070   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	SDK_UNDEFINED(16,1396) /* FString */               __um(LimitedTimeText);                                      // 0x0078   (0x0010)  
};

/// Struct /Script/DBDUIViewInterfaces.AuricCellsFirstPurchaseViewData
/// Size: 0x0058 (0x000000 - 0x000058)
struct FAuricCellsFirstPurchaseViewData
{ 
	bool                                               IsFirstPurchase;                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(48,1397) /* TWeakObjectPtr<UTexture2D*> */ __um(iconTexture);                                    // 0x0008   (0x0030)  
	SDK_UNDEFINED(16,1398) /* FString */               __um(Title);                                                // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,1399) /* FString */               __um(Description);                                          // 0x0048   (0x0010)  
};

/// Struct /Script/DBDUIViewInterfaces.AuricCellsViewData
/// Size: 0x0078 (0x000000 - 0x000078)
struct FAuricCellsViewData
{ 
	TArray<FAuricCellsBundleViewData>                  Bundles;                                                    // 0x0000   (0x0010)  
	FAuricCellsFirstPurchaseViewData                   FirstPurchase;                                              // 0x0010   (0x0058)  
	SDK_UNDEFINED(16,1400) /* FString */               __um(TaxIncludeMessage);                                    // 0x0068   (0x0010)  
};

/// Struct /Script/DBDUIViewInterfaces.ChallengeTrackerViewData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FChallengeTrackerViewData
{ 
	SDK_UNDEFINED(24,1401) /* FText */                 __um(ChallengeTitle);                                       // 0x0000   (0x0018)  
	FArchiveNodeObjectiveViewData                      ProgressionData;                                            // 0x0018   (0x0028)  
};

/// Struct /Script/DBDUIViewInterfaces.CurrencyLabelViewData
/// Size: 0x0130 (0x000000 - 0x000130)
struct FCurrencyLabelViewData
{ 
	ECurrencyType                                      Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(48,1402) /* TWeakObjectPtr<UTexture2D*> */ __um(Icon);                                           // 0x0008   (0x0030)  
	int32_t                                            Amount;                                                     // 0x0038   (0x0004)  
	bool                                               PlayBonusAnimation;                                         // 0x003C   (0x0001)  
	bool                                               isClickable;                                                // 0x003D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x003E   (0x0002)  MISSED
	FCurrencyProgressionTooltipViewData                TooltipData;                                                // 0x0040   (0x00F0)  
};

/// Struct /Script/DBDUIViewInterfaces.CustomizationItemOriginViewData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FCustomizationItemOriginViewData
{ 
	EOriginWidgetState                                 State;                                                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,1403) /* TArray<FText> */         __um(Args);                                                 // 0x0008   (0x0010)  
	FPriceTagViewData                                  CurrencyData;                                               // 0x0018   (0x0020)  
};

/// Struct /Script/DBDUIViewInterfaces.CustomizationItemPreviewAreaViewData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FCustomizationItemPreviewAreaViewData
{ 
	class UStoreCustomizationItemViewData*             PreviewItem;                                                // 0x0000   (0x0008)  
	TArray<class UStoreCustomizationItemViewData*>     ItemsData;                                                  // 0x0008   (0x0010)  
	bool                                               IsOutfit;                                                   // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/DBDUIViewInterfaces.DailyRitualViewData
/// Size: 0x0078 (0x000000 - 0x000078)
struct FDailyRitualViewData
{ 
	SDK_UNDEFINED(16,1404) /* FString */               __um(Key);                                                  // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1405) /* FString */               __um(Title);                                                // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,1406) /* FString */               __um(Description);                                          // 0x0020   (0x0010)  
	SDK_UNDEFINED(48,1407) /* TWeakObjectPtr<UTexture2D*> */ __um(iconTexture);                                    // 0x0030   (0x0030)  
	EDailyRitualState                                  RitualState;                                                // 0x0060   (0x0001)  
	bool                                               IsNew;                                                      // 0x0061   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0062   (0x0002)  MISSED
	int32_t                                            TextProgress;                                               // 0x0064   (0x0004)  
	int32_t                                            TextThreshold;                                              // 0x0068   (0x0004)  
	float                                              BarProgress;                                                // 0x006C   (0x0004)  
	float                                              BarThreshold;                                               // 0x0070   (0x0004)  
	int32_t                                            BloodpointsReward;                                          // 0x0074   (0x0004)  
};

/// Struct /Script/DBDUIViewInterfaces.DisplayStandViewData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FDisplayStandViewData
{ 
	FAnchorData                                        Anchors;                                                    // 0x0000   (0x0028)  
	float                                              PositionX;                                                  // 0x0028   (0x0004)  
	float                                              PositionY;                                                  // 0x002C   (0x0004)  
	float                                              SizeX;                                                      // 0x0030   (0x0004)  
	float                                              SizeY;                                                      // 0x0034   (0x0004)  
};

/// Struct /Script/DBDUIViewInterfaces.DetailsTabViewData
/// Size: 0x0048 (0x000000 - 0x000048)
struct FDetailsTabViewData
{ 
	EDetailsTabLayout                                  Layout;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FSpecialEventDetailsTabContentData>         ContentData;                                                // 0x0008   (0x0010)  
	SDK_UNDEFINED(48,1408) /* TWeakObjectPtr<UTexture2D*> */ __um(Image);                                          // 0x0018   (0x0030)  
};

/// Struct /Script/DBDUIViewInterfaces.EventEntryPopupSkinUIData
/// Size: 0x0218 (0x000008 - 0x000220)
struct FEventEntryPopupSkinUIData : FTableRowBase
{ 
	FLinearColor                                       ScrollBarColor;                                             // 0x0008   (0x0010)  
	SDK_UNDEFINED(48,1409) /* TWeakObjectPtr<UTexture2D*> */ __um(EventImage);                                     // 0x0018   (0x0030)  
	SDK_UNDEFINED(48,1410) /* TWeakObjectPtr<UTexture2D*> */ __um(PreviewAreaBackground);                          // 0x0048   (0x0030)  
	FLinearColor                                       BaseColor;                                                  // 0x0078   (0x0010)  
	SDK_UNDEFINED(48,1411) /* TWeakObjectPtr<UMaterialInstance*> */ __um(BackgroundTexture);                       // 0x0088   (0x0030)  
	SDK_UNDEFINED(48,1412) /* TWeakObjectPtr<UTexture2D*> */ __um(BackgroundCenterImage);                          // 0x00B8   (0x0030)  
	SDK_UNDEFINED(48,1413) /* TWeakObjectPtr<UMaterialInstance*> */ __um(TabMaterialInstance);                     // 0x00E8   (0x0030)  
	bool                                               IsUsingBackgroundTexture;                                   // 0x0118   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0119   (0x0007)  MISSED
	SDK_UNDEFINED(48,1414) /* TWeakObjectPtr<UMaterialInstance*> */ __um(TitleBannerMaterial);                     // 0x0120   (0x0030)  
	SDK_UNDEFINED(48,1415) /* TWeakObjectPtr<UTexture2D*> */ __um(TitleIcon);                                      // 0x0150   (0x0030)  
	SDK_UNDEFINED(48,1416) /* TWeakObjectPtr<UMaterialInstance*> */ __um(HeaderBackgroundMaterial);                // 0x0180   (0x0030)  
	SDK_UNDEFINED(48,1417) /* TWeakObjectPtr<UMaterialInstance*> */ __um(MilestoneTrackerBackground);              // 0x01B0   (0x0030)  
	SDK_UNDEFINED(48,1418) /* TWeakObjectPtr<UMaterialInstance*> */ __um(MilestoneTrackerHighlightBar);            // 0x01E0   (0x0030)  
	FLinearColor                                       PreviewBGTintColor;                                         // 0x0210   (0x0010)  
};

/// Struct /Script/DBDUIViewInterfaces.PerkViewData
/// Size: 0x0018 (0x000058 - 0x000070)
struct FPerkViewData : FBaseLoadoutPartViewData
{ 
	int32_t                                            Level;                                                      // 0x0058   (0x0004)  
	float                                              Cooldown;                                                   // 0x005C   (0x0004)  
	EStatusEffectType                                  StatusEffectType;                                           // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	int32_t                                            StackCount;                                                 // 0x0064   (0x0004)  
	bool                                               IsRechargeable;                                             // 0x0068   (0x0001)  
	bool                                               IsRechargeableActive;                                       // 0x0069   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x006A   (0x0006)  MISSED
};

/// Struct /Script/DBDUIViewInterfaces.ItemViewData
/// Size: 0x0038 (0x000058 - 0x000090)
struct FItemViewData : FBaseLoadoutPartViewData
{ 
	bool                                               IsEnergyTypeValid;                                          // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0059   (0x0003)  MISSED
	float                                              EnergyLevel;                                                // 0x005C   (0x0004)  
	int32_t                                            Count;                                                      // 0x0060   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0064   (0x0004)  MISSED
	FKey                                               InputKey;                                                   // 0x0068   (0x0020)  
	bool                                               ShowKeyPrompt;                                              // 0x0088   (0x0001)  
	bool                                               IsLimitedItem;                                              // 0x0089   (0x0001)  
	bool                                               IsAvailable;                                                // 0x008A   (0x0001)  
	bool                                               IsSpecialItem;                                              // 0x008B   (0x0001)  
	bool                                               IsCursedItem;                                               // 0x008C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x008D   (0x0003)  MISSED
};

/// Struct /Script/DBDUIViewInterfaces.StatusEffectAlertViewData
/// Size: 0x01B0 (0x000000 - 0x0001B0)
struct FStatusEffectAlertViewData
{ 
	SDK_UNDEFINED(16,1419) /* FString */               __um(StatusEffectName);                                     // 0x0000   (0x0010)  
	SDK_UNDEFINED(48,1420) /* TWeakObjectPtr<UTexture2D*> */ __um(StatusEffectIcon);                               // 0x0010   (0x0030)  
	EStatusEffectType                                  StatusEffectType;                                           // 0x0040   (0x0001)  
	EHudStatusEffectAlertViewType                      SourceViewType;                                             // 0x0041   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0042   (0x0006)  MISSED
	FPerkViewData                                      PerkViewData;                                               // 0x0048   (0x0070)  
	FItemViewData                                      ItemViewData;                                               // 0x00B8   (0x0090)  
	FAddonViewData                                     AddonViewData;                                              // 0x0148   (0x0068)  
};

/// Struct /Script/DBDUIViewInterfaces.ScoreAlertViewData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FScoreAlertViewData
{ 
	EDBDScoreCategory                                  scoreType;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,1421) /* FString */               __um(Title);                                                // 0x0008   (0x0010)  
	int32_t                                            ScoreValue;                                                 // 0x0018   (0x0004)  
	float                                              Progress;                                                   // 0x001C   (0x0004)  
};

/// Struct /Script/DBDUIViewInterfaces.HudEventProgression2023ViewData
/// Size: 0x0014 (0x000000 - 0x000014)
struct FHudEventProgression2023ViewData
{ 
	bool                                               IsInVoidZone;                                               // 0x0000   (0x0001)  
	bool                                               IsChannelingHaunt;                                          // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	int32_t                                            EnergyProgress;                                             // 0x0004   (0x0004)  
	int32_t                                            HauntTarget;                                                // 0x0008   (0x0004)  
	int32_t                                            MaxEnergy;                                                  // 0x000C   (0x0004)  
	bool                                               IsInitialized;                                              // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/DBDUIViewInterfaces.HudEventProgressionViewData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FHudEventProgressionViewData
{ 
	int32_t                                            ProgressBanked;                                             // 0x0000   (0x0004)  
	int32_t                                            ProgressPending;                                            // 0x0004   (0x0004)  
	int32_t                                            ProgressCapacity;                                           // 0x0008   (0x0004)  
	int32_t                                            ProgressMax;                                                // 0x000C   (0x0004)  
};

/// Struct /Script/DBDUIViewInterfaces.HudObjectivesViewData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FHudObjectivesViewData
{ 
	EPlayerTeam                                        playerTeam;                                                 // 0x0000   (0x0001)  
	bool                                               isHatchOpen;                                                // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	int32_t                                            nbGeneratorsLeft;                                           // 0x0004   (0x0004)  
	int32_t                                            requiredActivatedGeneratorCount;                            // 0x0008   (0x0004)  
};

/// Struct /Script/DBDUIViewInterfaces.StatusEffectViewData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FStatusEffectViewData
{ 
	FName                                              ID;                                                         // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(48,1422) /* TWeakObjectPtr<UTexture2D*> */ __um(iconTexture);                                    // 0x0010   (0x0030)  
	EStatusEffectType                                  StatusEffectType;                                           // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	int32_t                                            Level;                                                      // 0x0044   (0x0004)  
	float                                              Percentage;                                                 // 0x0048   (0x0004)  
	bool                                               PlayIntroAnimation;                                         // 0x004C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x004D   (0x0003)  MISSED
};

/// Struct /Script/DBDUIViewInterfaces.InteractionProgressViewData
/// Size: 0x0070 (0x000000 - 0x000070)
struct FInteractionProgressViewData
{ 
	SDK_UNDEFINED(16,1423) /* FString */               __um(Message);                                              // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1424) /* FString */               __um(SecondaryMessage);                                     // 0x0010   (0x0010)  
	EBarColor                                          BarColor;                                                   // 0x0020   (0x0001)  
	EBarColor                                          ChargeBarColor;                                             // 0x0021   (0x0001)  
	bool                                               ShowIcon;                                                   // 0x0022   (0x0001)  
	bool                                               ShowIconCharge;                                             // 0x0023   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	SDK_UNDEFINED(48,1425) /* TWeakObjectPtr<UTexture2D*> */ __um(ItemIcon);                                       // 0x0028   (0x0030)  
	TArray<FStatusEffectViewData>                      Proficiencies;                                              // 0x0058   (0x0010)  
	float                                              PermanentProgress;                                          // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/DBDUIViewInterfaces.InteractionPromptViewData
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FInteractionPromptViewData
{ 
	FName                                              ID;                                                         // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(16,1426) /* FString */               __um(Message);                                              // 0x0010   (0x0010)  
	EInteractionPromptType                             Type;                                                       // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	FKey                                               InputKey1;                                                  // 0x0028   (0x0020)  
	FKey                                               InputKey2;                                                  // 0x0048   (0x0020)  
	FKey                                               InputKey3;                                                  // 0x0068   (0x0020)  
	FKey                                               InputKey4;                                                  // 0x0088   (0x0020)  
	bool                                               PlaceInCenter;                                              // 0x00A8   (0x0001)  
	bool                                               IsAvailable;                                                // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x00AA   (0x0006)  MISSED
};

/// Struct /Script/DBDUIViewInterfaces.ItemBundleViewData
/// Size: 0x0160 (0x000000 - 0x000160)
struct FItemBundleViewData
{ 
	FItemViewData                                      Item;                                                       // 0x0000   (0x0090)  
	FAddonViewData                                     addon1;                                                     // 0x0090   (0x0068)  
	FAddonViewData                                     addon2;                                                     // 0x00F8   (0x0068)  
};

/// Struct /Script/DBDUIViewInterfaces.KillerStatusDataMapping
/// Size: 0x0020 (0x000008 - 0x000028)
struct FKillerStatusDataMapping : FDBDTableRowBase
{ 
	FGameplayTag                                       killer;                                                     // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	class UClass*                                      ViewDataClass;                                              // 0x0018   (0x0008)  
	class UClass*                                      WidgetClass;                                                // 0x0020   (0x0008)  
};

/// Struct /Script/DBDUIViewInterfaces.MainMenuButtonViewData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMainMenuButtonViewData
{ 
	SDK_UNDEFINED(16,1427) /* FString */               __um(Bonus);                                                // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1428) /* FString */               __um(Timer);                                                // 0x0010   (0x0010)  
	bool                                               IsNew;                                                      // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/DBDUIViewInterfaces.MatchResultViewData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FMatchResultViewData
{ 
	bool                                               IsSlasher;                                                  // 0x0000   (0x0001)  
	EGameState                                         SurvivorResult;                                             // 0x0001   (0x0001)  
	EKillerMatchResult                                 KillerResult;                                               // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0003   (0x0001)  MISSED
	float                                              Duration;                                                   // 0x0004   (0x0004)  
};

/// Struct /Script/DBDUIViewInterfaces.MilestoneTrackerItemViewData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMilestoneTrackerItemViewData
{ 
	int32_t                                            EventPoints;                                                // 0x0000   (0x0004)  
	EMilestoneTrackerItemState                         State;                                                      // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	class UStoreCustomizationItemViewData*             RewardData;                                                 // 0x0008   (0x0008)  
};

/// Struct /Script/DBDUIViewInterfaces.MilestoneTrackerViewData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMilestoneTrackerViewData
{ 
	TArray<FMilestoneTrackerItemViewData>              MilestoneRewardsList;                                       // 0x0000   (0x0010)  
	int32_t                                            UserMilestonePointData;                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/DBDUIViewInterfaces.MilestoneTrackerUpdateItemViewData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMilestoneTrackerUpdateItemViewData
{ 
	int32_t                                            index;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FMilestoneTrackerItemViewData                      updatedViewData;                                            // 0x0008   (0x0010)  
};

/// Struct /Script/DBDUIViewInterfaces.NotifTutorialPopupViewData
/// Size: 0x0080 (0x000000 - 0x000080)
struct FNotifTutorialPopupViewData
{ 
	SDK_UNDEFINED(16,1429) /* FString */               __um(Title);                                                // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1430) /* FString */               __um(Description);                                          // 0x0010   (0x0010)  
	SDK_UNDEFINED(48,1431) /* TWeakObjectPtr<UTexture2D*> */ __um(Icon);                                           // 0x0020   (0x0030)  
	SDK_UNDEFINED(48,1432) /* TWeakObjectPtr<UTexture2D*> */ __um(Image);                                          // 0x0050   (0x0030)  
};

/// Struct /Script/DBDUIViewInterfaces.OfferingViewData
/// Size: 0x0008 (0x000058 - 0x000060)
struct FOfferingViewData : FBaseLoadoutPartViewData
{ 
	int32_t                                            StackCount;                                                 // 0x0058   (0x0004)  
	EItemAvailability                                  Availability;                                               // 0x005C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x005D   (0x0003)  MISSED
};

/// Struct /Script/DBDUIViewInterfaces.OnboardingTutorialViewData
/// Size: 0x0078 (0x000000 - 0x000078)
struct FOnboardingTutorialViewData
{ 
	SDK_UNDEFINED(16,1433) /* FString */               __um(tutorialId);                                           // 0x0000   (0x0010)  
	bool                                               COMPLETED;                                                  // 0x0010   (0x0001)  
	bool                                               MainRewardClaimed;                                          // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0012   (0x0006)  MISSED
	TArray<FRewardWrapperViewData>                     MainRewards;                                                // 0x0018   (0x0010)  
	TArray<FRewardWrapperViewData>                     AlternativeRewards;                                         // 0x0028   (0x0010)  
	EOnboardingTutorialType                            TutorialType;                                               // 0x0038   (0x0001)  
	EOnboardingTutorialButtonStyle                     ButtonStyle;                                                // 0x0039   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x003A   (0x0006)  MISSED
	SDK_UNDEFINED(24,1434) /* FText */                 __um(DisplayName);                                          // 0x0040   (0x0018)  
	SDK_UNDEFINED(24,1435) /* FText */                 __um(Description);                                          // 0x0058   (0x0018)  
	class UTexture2D*                                  Icon;                                                       // 0x0070   (0x0008)  
};

/// Struct /Script/DBDUIViewInterfaces.OnboardingStepViewData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FOnboardingStepViewData
{ 
	SDK_UNDEFINED(16,1436) /* FString */               __um(stepId);                                               // 0x0000   (0x0010)  
	EOnboardingStepStatus                              Status;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	TArray<FOnboardingTutorialViewData>                Tutorials;                                                  // 0x0018   (0x0010)  
};

/// Struct /Script/DBDUIViewInterfaces.PlayerCardViewData
/// Size: 0x0068 (0x000000 - 0x000068)
struct FPlayerCardViewData
{ 
	SDK_UNDEFINED(48,1437) /* TWeakObjectPtr<UTexture2D*> */ __um(Icon);                                           // 0x0000   (0x0030)  
	SDK_UNDEFINED(48,1438) /* TWeakObjectPtr<UTexture2D*> */ __um(SecondaryIcon);                                  // 0x0030   (0x0030)  
	class UClass*                                      AnimationRef;                                               // 0x0060   (0x0008)  
};

/// Struct /Script/DBDUIViewInterfaces.PlayerStatusViewData
/// Size: 0x0048 (0x000000 - 0x000048)
struct FPlayerStatusViewData
{ 
	SDK_UNDEFINED(16,1439) /* FString */               __um(playerName);                                           // 0x0000   (0x0010)  
	class UTexture2D*                                  PlayerPortraitIcon;                                         // 0x0010   (0x0008)  
	class UTexture2D*                                  PlayerPortraitIconOverride;                                 // 0x0018   (0x0008)  
	EPlayerStatus                                      PlayerStatusState;                                          // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	float                                              TimerProgress;                                              // 0x0024   (0x0004)  
	bool                                               IsDeepWound;                                                // 0x0028   (0x0001)  
	bool                                               IsBroken;                                                   // 0x0029   (0x0001)  
	bool                                               IsBot;                                                      // 0x002A   (0x0001)  
	bool                                               IsLocalPlayerAKiller;                                       // 0x002B   (0x0001)  
	EObsessionUIState                                  ObsessionState;                                             // 0x002C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x002D   (0x0003)  MISSED
	int32_t                                            DrainStage;                                                 // 0x0030   (0x0004)  
	EConnectionQuality                                 ConnectionQualityStatus;                                    // 0x0034   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	class UKillerStatusData*                           KillerStatusData;                                           // 0x0038   (0x0008)  
	float                                              CampProgress;                                               // 0x0040   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/DBDUIViewInterfaces.PowerViewData
/// Size: 0x0030 (0x000058 - 0x000088)
struct FPowerViewData : FBaseLoadoutPartViewData
{ 
	FKey                                               InputKey;                                                   // 0x0058   (0x0020)  
	bool                                               IsRechargeable;                                             // 0x0078   (0x0001)  
	bool                                               IsActivated;                                                // 0x0079   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x007A   (0x0002)  MISSED
	int32_t                                            Count;                                                      // 0x007C   (0x0004)  
	float                                              ProgressValue;                                              // 0x0080   (0x0004)  
	bool                                               ShowKeyPrompt;                                              // 0x0084   (0x0001)  
	bool                                               IsCountDisplayForced;                                       // 0x0085   (0x0001)  
	bool                                               IsAvailable;                                                // 0x0086   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x0087   (0x0001)  MISSED
};

/// Struct /Script/DBDUIViewInterfaces.PowerBundleViewData
/// Size: 0x0158 (0x000000 - 0x000158)
struct FPowerBundleViewData
{ 
	FPowerViewData                                     Power;                                                      // 0x0000   (0x0088)  
	FAddonViewData                                     addon1;                                                     // 0x0088   (0x0068)  
	FAddonViewData                                     addon2;                                                     // 0x00F0   (0x0068)  
};

/// Struct /Script/DBDUIViewInterfaces.RankTooltipViewData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRankTooltipViewData
{ 
	int32_t                                            Rank;                                                       // 0x0000   (0x0004)  
	bool                                               IsKiller;                                                   // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	SDK_UNDEFINED(16,1440) /* FString */               __um(RankName);                                             // 0x0008   (0x0010)  
	int32_t                                            RankPipsCount;                                              // 0x0018   (0x0004)  
	int32_t                                            ActivePipsCount;                                            // 0x001C   (0x0004)  
};

/// Struct /Script/DBDUIViewInterfaces.RankViewData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FRankViewData
{ 
	int32_t                                            Rank;                                                       // 0x0000   (0x0004)  
	bool                                               IsKiller;                                                   // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	FRankTooltipViewData                               tooltipViewData;                                            // 0x0008   (0x0020)  
};

/// Struct /Script/DBDUIViewInterfaces.SkillCheckViewData
/// Size: 0x0058 (0x000000 - 0x000058)
struct FSkillCheckViewData
{ 
	FKey                                               InputKey;                                                   // 0x0000   (0x0020)  
	FKey                                               InputKey2;                                                  // 0x0020   (0x0020)  
	float                                              HitAreaStart;                                               // 0x0040   (0x0004)  
	float                                              HitAreaLength;                                              // 0x0044   (0x0004)  
	float                                              BonusAreaStart;                                             // 0x0048   (0x0004)  
	float                                              BonusAreaLength;                                            // 0x004C   (0x0004)  
	bool                                               IsHexed;                                                    // 0x0050   (0x0001)  
	bool                                               IsSpectating;                                               // 0x0051   (0x0001)  
	bool                                               IsReversed;                                                 // 0x0052   (0x0001)  
	bool                                               IsMirrored;                                                 // 0x0053   (0x0001)  
	bool                                               IsInsane;                                                   // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0055   (0x0003)  MISSED
};

/// Struct /Script/DBDUIViewInterfaces.StartSequenceViewData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FStartSequenceViewData
{ 
	SDK_UNDEFINED(16,1441) /* FString */               __um(ThemeName);                                            // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1442) /* FString */               __um(MapName);                                              // 0x0010   (0x0010)  
	EThemeColorId                                      ThemeColorId;                                               // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/DBDUIViewInterfaces.StoreCategoryViewData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FStoreCategoryViewData
{ 
	ECustomizationCategory                             category;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(48,1443) /* TWeakObjectPtr<UTexture2D*> */ __um(Icon);                                           // 0x0008   (0x0030)  
	SDK_UNDEFINED(24,1444) /* FText */                 __um(DisplayName);                                          // 0x0038   (0x0018)  
};

/// Struct /Script/DBDUIViewInterfaces.StoreCharactersCustomizationsViewData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FStoreCharactersCustomizationsViewData
{ 
	TArray<class UStoreCustomizationItemViewData*>     Customizations;                                             // 0x0000   (0x0010)  
	TArray<FName>                                      SelectedCustomizationIds;                                   // 0x0010   (0x0010)  
	int32_t                                            MaxSelectedCustomizations;                                  // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FStoreCategoryViewData>                     Categories;                                                 // 0x0028   (0x0010)  
	ECustomizationCategory                             SelectedCategory;                                           // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/DBDUIViewInterfaces.StoreCharactersSelectionViewData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FStoreCharactersSelectionViewData
{ 
	TArray<class UStoreCharacterItemViewData*>         Characters;                                                 // 0x0000   (0x0010)  
	int32_t                                            SelectedCharacterIndex;                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/DBDUIViewInterfaces.StoreFeaturedCharacterViewData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FStoreFeaturedCharacterViewData
{ 
	int32_t                                            characterIndex;                                             // 0x0000   (0x0004)  
	EPlayerRole                                        playerRole;                                                 // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	class UTexture2D*                                  CharacterPortrait;                                          // 0x0008   (0x0008)  
	SDK_UNDEFINED(24,1445) /* FText */                 __um(characterName);                                        // 0x0010   (0x0018)  
};

/// Struct /Script/DBDUIViewInterfaces.TemplateViewData
/// Size: 0x0001 (0x000000 - 0x000001)
struct FTemplateViewData
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/DBDUIViewInterfaces.TutorialObjectivesViewData
/// Size: 0x0170 (0x000000 - 0x000170)
struct FTutorialObjectivesViewData
{ 
	SDK_UNDEFINED(16,1446) /* FString */               __um(Description);                                          // 0x0000   (0x0010)  
	FInteractionPromptViewData                         PrimaryInteractionPromptViewData;                           // 0x0010   (0x00B0)  
	FInteractionPromptViewData                         SecondaryInteractionPromptViewData;                         // 0x00C0   (0x00B0)  
};

/// Struct /Script/DBDUIViewInterfaces.CustomIconPathExclusionUIDataRow
/// Size: 0x0010 (0x000008 - 0x000018)
struct FCustomIconPathExclusionUIDataRow : FTableRowBase
{ 
	SDK_UNDEFINED(16,1447) /* FString */               __um(Path);                                                 // 0x0008   (0x0010)  
};

