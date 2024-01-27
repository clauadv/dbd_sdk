
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AkAudio
/// dependency: BinkMediaPlayer
/// dependency: CoreCommonUIUtils
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: DBDInput
/// dependency: DBDSharedTypes
/// dependency: DBDUIManagers
/// dependency: DBDUIViewInterfaces
/// dependency: Engine
/// dependency: InputCore
/// dependency: SlateCore
/// dependency: UITween
/// dependency: UMG

/// Enum /Script/DBDUIViewsCore.EButtonWidgetVisibility
/// Size: 0x04
enum class EButtonWidgetVisibility : uint8_t
{
	EButtonWidgetVisibility__Visible                                                 = 0,
	EButtonWidgetVisibility__Collapsed                                               = 1,
	EButtonWidgetVisibility__Hidden                                                  = 2,
	EButtonWidgetVisibility__EButtonWidgetVisibility_MAX                             = 3
};

/// Enum /Script/DBDUIViewsCore.EAnalogCursorStickiness
/// Size: 0x07
enum class EAnalogCursorStickiness : uint8_t
{
	EAnalogCursorStickiness__None                                                    = 0,
	EAnalogCursorStickiness__ButtonSmall                                             = 1,
	EAnalogCursorStickiness__ButtonMedium                                            = 2,
	EAnalogCursorStickiness__ButtonLarge                                             = 3,
	EAnalogCursorStickiness__Bloodweb                                                = 4,
	EAnalogCursorStickiness__Slow                                                    = 5,
	EAnalogCursorStickiness__EAnalogCursorStickiness_MAX                             = 6
};

/// Enum /Script/DBDUIViewsCore.EItemFilterOption
/// Size: 0x11
enum class EItemFilterOption : uint8_t
{
	EItemFilterOption__None                                                          = 0,
	EItemFilterOption__Favorite                                                      = 1,
	EItemFilterOption__Owned                                                         = 2,
	EItemFilterOption__Common                                                        = 3,
	EItemFilterOption__Uncommon                                                      = 4,
	EItemFilterOption__Rare                                                          = 5,
	EItemFilterOption__VeryRare                                                      = 6,
	EItemFilterOption__UltraRare                                                     = 7,
	EItemFilterOption__Legendary                                                     = 8,
	EItemFilterOption__Event                                                         = 9,
	EItemFilterOption__EItemFilterOption_MAX                                         = 10
};

/// Enum /Script/DBDUIViewsCore.EChallengeReminderUpdateType
/// Size: 0x03
enum class EChallengeReminderUpdateType : uint8_t
{
	EChallengeReminderUpdateType__Reveal                                             = 0,
	EChallengeReminderUpdateType__Swap                                               = 1,
	EChallengeReminderUpdateType__EChallengeReminderUpdateType_MAX                   = 2
};

/// Enum /Script/DBDUIViewsCore.EEditorMode
/// Size: 0x03
enum class EEditorMode : uint8_t
{
	EEditorMode__Node                                                                = 0,
	EEditorMode__Path                                                                = 1,
	EEditorMode__EEditorMode_MAX                                                     = 2
};

/// Enum /Script/DBDUIViewsCore.ENodeStatusChange
/// Size: 0x07
enum class ENodeStatusChange : uint8_t
{
	ENodeStatusChange__NodeQuestActivate                                             = 0,
	ENodeStatusChange__NodeQuestPaused                                               = 1,
	ENodeStatusChange__NodeQuestUnlock                                               = 2,
	ENodeStatusChange__NodeRewardAvailableForClaim                                   = 3,
	ENodeStatusChange__NodeQuestClaimed                                              = 4,
	ENodeStatusChange__None                                                          = 5,
	ENodeStatusChange__ENodeStatusChange_MAX                                         = 6
};

/// Enum /Script/DBDUIViewsCore.EBackgroundProgressBarState
/// Size: 0x06
enum class EBackgroundProgressBarState : uint8_t
{
	EBackgroundProgressBarState__Empty                                               = 0,
	EBackgroundProgressBarState__Quarter                                             = 1,
	EBackgroundProgressBarState__Half                                                = 2,
	EBackgroundProgressBarState__ThreeQuarters                                       = 3,
	EBackgroundProgressBarState__Full                                                = 4,
	EBackgroundProgressBarState__EBackgroundProgressBarState_MAX                     = 5
};

/// Enum /Script/DBDUIViewsCore.EInputSwitcherDisplayRule
/// Size: 0x05
enum class EInputSwitcherDisplayRule : uint8_t
{
	EInputSwitcherDisplayRule__Undefined                                             = 0,
	EInputSwitcherDisplayRule__OnlyGamepad                                           = 1,
	EInputSwitcherDisplayRule__OnlyKeyboard                                          = 2,
	EInputSwitcherDisplayRule__Always                                                = 3,
	EInputSwitcherDisplayRule__EInputSwitcherDisplayRule_MAX                         = 4
};

/// Enum /Script/DBDUIViewsCore.EPlayerStatusBloodSplatterType
/// Size: 0x04
enum class EPlayerStatusBloodSplatterType : uint8_t
{
	EPlayerStatusBloodSplatterType__None                                             = 0,
	EPlayerStatusBloodSplatterType__Top                                              = 1,
	EPlayerStatusBloodSplatterType__Bottom                                           = 2,
	EPlayerStatusBloodSplatterType__EPlayerStatusBloodSplatterType_MAX               = 3
};

/// Enum /Script/DBDUIViewsCore.EShowScrollDisplayPrompt
/// Size: 0x04
enum class EShowScrollDisplayPrompt : uint8_t
{
	EShowScrollDisplayPrompt__DontShow                                               = 0,
	EShowScrollDisplayPrompt__AlwaysShow                                             = 1,
	EShowScrollDisplayPrompt__ShowOnMouseOver                                        = 2,
	EShowScrollDisplayPrompt__EShowScrollDisplayPrompt_MAX                           = 3
};

/// Enum /Script/DBDUIViewsCore.ETooltipVerticalAlignment
/// Size: 0x04
enum class ETooltipVerticalAlignment : uint8_t
{
	ETooltipVerticalAlignment__Default                                               = 0,
	ETooltipVerticalAlignment__Top                                                   = 1,
	ETooltipVerticalAlignment__Bottom                                                = 2,
	ETooltipVerticalAlignment__ETooltipVerticalAlignment_MAX                         = 3
};

/// Enum /Script/DBDUIViewsCore.ETooltipHorizontalAlignment
/// Size: 0x04
enum class ETooltipHorizontalAlignment : uint8_t
{
	ETooltipHorizontalAlignment__Default                                             = 0,
	ETooltipHorizontalAlignment__Left                                                = 1,
	ETooltipHorizontalAlignment__Right                                               = 2,
	ETooltipHorizontalAlignment__ETooltipHorizontalAlignment_MAX                     = 3
};

/// Enum /Script/DBDUIViewsCore.EDragZoneAxis
/// Size: 0x03
enum class EDragZoneAxis : uint8_t
{
	EDragZoneAxis__Horizontal                                                        = 0,
	EDragZoneAxis__Vertical                                                          = 1,
	EDragZoneAxis__EDragZoneAxis_MAX                                                 = 2
};

/// Enum /Script/DBDUIViewsCore.EFriendItemWidgetType
/// Size: 0x07
enum class EFriendItemWidgetType : uint8_t
{
	Friend                                                                           = 0,
	ViewProfile                                                                      = 1,
	PendingSentRequest                                                               = 2,
	PendingReceivedRequest                                                           = 3,
	NotFriend                                                                        = 4,
	Blocked                                                                          = 5,
	EFriendItemWidgetType_MAX                                                        = 6
};

/// Enum /Script/DBDUIViewsCore.ETooltipType
/// Size: 0x12
enum class ETooltipType : uint8_t
{
	ETooltipType__None                                                               = 0,
	ETooltipType__ArchiveCompendium                                                  = 1,
	ETooltipType__ArchiveNode                                                        = 2,
	ETooltipType__ArchiveRewardNode                                                  = 3,
	ETooltipType__Character                                                          = 4,
	ETooltipType__CurrencyProgression                                                = 5,
	ETooltipType__Customization                                                      = 6,
	ETooltipType__Label                                                              = 7,
	ETooltipType__Loadout                                                            = 8,
	ETooltipType__PlayerLevel                                                        = 9,
	ETooltipType__Rank                                                               = 10,
	ETooltipType__ETooltipType_MAX                                                   = 11
};

/// Class /Script/DBDUIViewsCore.CoreBaseUserWidget
/// Size: 0x0078 (0x000298 - 0x000310)
class UCoreBaseUserWidget : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0298   (0x0010)  MISSED
	class UScaleBox*                                   ScaleContainer;                                             // 0x02A8   (0x0008)  
	bool                                               IsInteractive;                                              // 0x02B0   (0x0001)  
	EControlMode                                       _controlMode;                                               // 0x02B1   (0x0001)  
	EScaleType                                         ScaleType;                                                  // 0x02B2   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x02B3   (0x0005)  MISSED
	class UDBDInputManager*                            _inputManager;                                              // 0x02B8   (0x0008)  
	SDK_UNDEFINED(80,3211) /* TMap<FName, UWidgetAnimation*> */ __um(_animationMap);                               // 0x02C0   (0x0050)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreBaseUserWidget.UpdateScale
	// void UpdateScale(float Scale);                                                                                        // [0x4b98710] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreBaseUserWidget.StopAnimationByName
	// bool StopAnimationByName(FName animName);                                                                             // [0x4b98640] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreBaseUserWidget.RegisterForInput
	// void RegisterForInput();                                                                                              // [0x4b976a0] Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreBaseUserWidget.PlayAnimationByName
	// bool PlayAnimationByName(FName animName, float starttime, int32_t loopcount, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed); // [0x4b97500] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreBaseUserWidget.OnControlModeChangedBP
	// void OnControlModeChangedBP(EControlMode controlMode);                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreBaseUserWidget.GetAnimationByName
	// class UWidgetAnimation* GetAnimationByName(FName animName);                                                           // [0x4b96cc0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewsCore.CoreBaseUserWidget.DeregisterFromInput
	// void DeregisterFromInput();                                                                                           // [0x4b96b00] Native|Public|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.TooltipWidget
/// Size: 0x0010 (0x000310 - 0x000320)
class UTooltipWidget : public UCoreBaseUserWidget
{ 
public:
	FMargin                                            _tooltipMargin;                                             // 0x0310   (0x0010)  
};

/// Class /Script/DBDUIViewsCore.ArchiveCompendiumTooltipWidget
/// Size: 0x0018 (0x000320 - 0x000338)
class UArchiveCompendiumTooltipWidget : public UTooltipWidget
{ 
public:
	class UDBDTextBlock*                               TomeTitleTB;                                                // 0x0320   (0x0008)  
	class UDBDTextBlock*                               DescriptionTB;                                              // 0x0328   (0x0008)  
	class UCoreStoryLevelsSelectorWidget*              StoryLevelsSelector;                                        // 0x0330   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.ArchiveCompendiumTooltipWidget.SetTooltipData
	// void SetTooltipData(FCompendiumButtonData& tooltipViewData);                                                          // [0x4b89880] Final|Native|Public|HasOutParms 
	// Function /Script/DBDUIViewsCore.ArchiveCompendiumTooltipWidget.Reset
	// void Reset();                                                                                                         // [0x4b88fd0] Final|Native|Public  
};

/// Class /Script/DBDUIViewsCore.ArchiveNodeTooltipWidget
/// Size: 0x0050 (0x000320 - 0x000370)
class UArchiveNodeTooltipWidget : public UTooltipWidget
{ 
public:
	class UDBDImage*                                   BackgroundIMG;                                              // 0x0320   (0x0008)  
	class UDBDImage*                                   RarityIMG;                                                  // 0x0328   (0x0008)  
	class UDBDTextBlock*                               NodeTitleTB;                                                // 0x0330   (0x0008)  
	class UDBDTextBlock*                               SubtitleTB;                                                 // 0x0338   (0x0008)  
	class UDBDRichTextBlock*                           NodeDescriptionRTB;                                         // 0x0340   (0x0008)  
	class UClass*                                      ObjectiveWidgetClass;                                       // 0x0348   (0x0008)  
	class UClass*                                      RewardWidgetClass;                                          // 0x0350   (0x0008)  
	class UVerticalBox*                                ArchiveObjectivesContainer;                                 // 0x0358   (0x0008)  
	class UHorizontalBox*                              RewardsContainer;                                           // 0x0360   (0x0008)  
	class UDBDRichTextBlock*                           VignetteRTB;                                                // 0x0368   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.ArchiveNodeTooltipWidget.SetTooltipData
	// void SetTooltipData(FArchiveNodeViewData& NodeViewData);                                                              // [0x4b89990] Final|Native|Public|HasOutParms 
	// Function /Script/DBDUIViewsCore.ArchiveNodeTooltipWidget.SetNodeType
	// void SetNodeType(EArchiveNodeType Type);                                                                              // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.ArchiveNodeTooltipWidget.Reset
	// void Reset();                                                                                                         // [0x4b88ff0] Final|Native|Public  
};

/// Class /Script/DBDUIViewsCore.ArchiveRewardNodeTooltipWidget
/// Size: 0x0010 (0x000320 - 0x000330)
class UArchiveRewardNodeTooltipWidget : public UTooltipWidget
{ 
public:
	class UCustomizationTooltipWidget*                 CustomizationTooltip;                                       // 0x0320   (0x0008)  
	class UCurrencyProgressionTooltipWidget*           CurrencyProgressionTooltip;                                 // 0x0328   (0x0008)  
};

/// Class /Script/DBDUIViewsCore.AspectRatioBox
/// Size: 0x0018 (0x000148 - 0x000160)
class UAspectRatioBox : public UContentWidget
{ 
public:
	float                                              AspectRatio;                                                // 0x0148   (0x0004)  
	bool                                               IsAspectRatioOverridden : 1;                                // 0x014C:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x13];                                      // 0x014D   (0x0013)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.AspectRatioBox.SetAspectRatio
	// void SetAspectRatio(float inAspectRatio);                                                                             // [0x4b890e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.AspectRatioBox.ClearAspectRatio
	// void ClearAspectRatio();                                                                                              // [0x4b881f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.AspectRatioBoxSlot
/// Size: 0x0028 (0x000040 - 0x000068)
class UAspectRatioBoxSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0040   (0x0010)  
	SDK_UNDEFINED(1,3212) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0050   (0x0001)  
	SDK_UNDEFINED(1,3213) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x0052   (0x0016)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.AspectRatioBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> inVerticalAlignment);                                       // [0x4b89ca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.AspectRatioBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x4b896c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.AspectRatioBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> inHorizontalAlignment);                                 // [0x4b894b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CharacterTooltipWidget
/// Size: 0x0020 (0x000320 - 0x000340)
class UCharacterTooltipWidget : public UTooltipWidget
{ 
public:
	class UDBDTextBlock*                               InstructionTB;                                              // 0x0320   (0x0008)  
	class UDBDTextBlock*                               LevelTB;                                                    // 0x0328   (0x0008)  
	class UDBDTextBlock*                               LockDetailsTB;                                              // 0x0330   (0x0008)  
	class UDBDRichTextBlock*                           DifficultyRTB;                                              // 0x0338   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CharacterTooltipWidget.SetTooltipData
	// void SetTooltipData(FCharacterTooltipViewData& characterViewData);                                                    // [0x61c32d0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CharacterTooltipWidget.SetLockDetails
	// void SetLockDetails(FCharacterTooltipViewData& characterViewData);                                                    // [0x4b895c0] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CharacterTooltipWidget.SetLevel
	// void SetLevel(int32_t Level);                                                                                         // [0x4b89530] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CharacterTooltipWidget.SetDifficulty
	// void SetDifficulty(ECharacterDifficulty Difficulty);                                                                  // [0x4b89360] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CoreBaseLoadoutPartWidget
/// Size: 0x0018 (0x000298 - 0x0002B0)
class UCoreBaseLoadoutPartWidget : public UUserWidget
{ 
public:
	class UDBDImage*                                   ImageRarity;                                                // 0x0298   (0x0008)  
	class UDBDImage*                                   ImageIcon;                                                  // 0x02A0   (0x0008)  
	class UTextBlock*                                  TextStackCount;                                             // 0x02A8   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutStackCount
	// void SetLoadoutStackCount(int32_t StackCount);                                                                        // [0x4b98320] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartRarity
	// void SetLoadoutPartRarity(EItemRarity Rarity);                                                                        // [0x4b982a0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreBaseLoadoutPartWidget.SetLoadoutPartIcon
	// void SetLoadoutPartIcon(TWeakObjectPtr<UTexture2D*> Icon);                                                            // [0x4b98190] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CoreAddonWidget
/// Size: 0x0008 (0x0002B0 - 0x0002B8)
class UCoreAddonWidget : public UCoreBaseLoadoutPartWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x02B0   (0x0008)  MISSED
};

/// Class /Script/DBDUIViewsCore.CoreAlertsWidget
/// Size: 0x0108 (0x000310 - 0x000418)
class UCoreAlertsWidget : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0310   (0x0018)  MISSED
	class UClass*                                      RewardWidgetClass;                                          // 0x0328   (0x0008)  
	class UHorizontalBox*                              AlertRewardContainer;                                       // 0x0330   (0x0008)  
	class UDBDRichTextBlock*                           RewardsDescriptionText;                                     // 0x0338   (0x0008)  
	class UDBDImage*                                   EventIMG;                                                   // 0x0340   (0x0008)  
	class UDBDRichTextBlock*                           RewardName;                                                 // 0x0348   (0x0008)  
	ETooltipHorizontalAlignment                        HorizontalAlignment;                                        // 0x0350   (0x0001)  
	ETooltipVerticalAlignment                          VerticalAlignment;                                          // 0x0351   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0352   (0x0002)  MISSED
	float                                              _fadeInRewardDuration;                                      // 0x0354   (0x0004)  
	float                                              _fadeRewardDelay;                                           // 0x0358   (0x0004)  
	EEasingType                                        _fadeInRewardEasing;                                        // 0x035C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x035D   (0x0003)  MISSED
	float                                              _sequenceDelay;                                             // 0x0360   (0x0004)  
	float                                              _sequenceFadeOutDuration;                                   // 0x0364   (0x0004)  
	float                                              _finalSequenceDelay;                                        // 0x0368   (0x0004)  
	float                                              _finalSequenceFadeOutDuration;                              // 0x036C   (0x0004)  
	FVector2D                                          _rewardInitialScale;                                        // 0x0370   (0x0008)  
	FVector2D                                          _rewardFinalScale;                                          // 0x0378   (0x0008)  
	float                                              _rewardScalingDuration;                                     // 0x0380   (0x0004)  
	float                                              _rewardScalingDelay;                                        // 0x0384   (0x0004)  
	float                                              _rewardScalingIdleDuration;                                 // 0x0388   (0x0004)  
	EEasingType                                        _rewardScalingEasing;                                       // 0x038C   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x038D   (0x0003)  MISSED
	float                                              _sequenceShiftDuration;                                     // 0x0390   (0x0004)  
	float                                              _sequenceShiftDelay;                                        // 0x0394   (0x0004)  
	EEasingType                                        _sequenceShiftEasing;                                       // 0x0398   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0399   (0x0003)  MISSED
	FVector2D                                          _rewardContainerShiftFinalPosition;                         // 0x039C   (0x0008)  
	unsigned char                                      UnknownData05_6[0x74];                                      // 0x03A4   (0x0074)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreAlertsWidget.ShowRewardTooltip
	// void ShowRewardTooltip(class UCoreButtonWidget* rewardWidget);                                                        // [0x4b89f10] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreAlertsWidget.ShowRewardNameVisibility
	// void ShowRewardNameVisibility(class UUITweenInstance* tween);                                                         // [0x4b89e80] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreAlertsWidget.ShowAlertRewards
	// void ShowAlertRewards(FAlertsViewData& AlertsViewData);                                                               // [0x4b89d20] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreAlertsWidget.SetRewardsDescription
	// void SetRewardsDescription(FString rewardsDescription);                                                               // [0x4b89750] Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreAlertsWidget.RewardAlertSequenceCompleted
	// void RewardAlertSequenceCompleted(class UUITweenInstance* tween);                                                     // [0x4b89050] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreAlertsWidget.PlayDisplayRewardSound
	// void PlayDisplayRewardSound(FRewardWrapperViewData RewardData);                                                       // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreAlertsWidget.PlayDisappearRewardSound
	// void PlayDisappearRewardSound();                                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreAlertsWidget.OnRewardItemsFadeOutCompleted
	// void OnRewardItemsFadeOutCompleted(class UUITweenInstance* tween);                                                    // [0x4b88bf0] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreAlertsWidget.HideRewardTooltip
	// void HideRewardTooltip(class UCoreButtonWidget* rewardWidget);                                                        // [0x4b88600] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreAlertsWidget.EndRewardDisplayRequested
	// void EndRewardDisplayRequested();                                                                                     // [0x4b88510] Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreAlertsWidget.EndOfRewardDisplay
	// void EndOfRewardDisplay(class UUITweenInstance* tween);                                                               // [0x4b88480] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreAlertsWidget.DisplayNextRewardSequence
	// void DisplayNextRewardSequence(class UUITweenInstance* tween);                                                        // [0x4b883f0] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreAlertsWidget.DisplayNextReward
	// void DisplayNextReward(class UUITweenInstance* tween);                                                                // [0x4b88360] Final|Native|Private 
};

/// Class /Script/DBDUIViewsCore.CoreButtonWidget
/// Size: 0x00F8 (0x000310 - 0x000408)
class UCoreButtonWidget : public UCoreBaseUserWidget
{ 
public:
	class UDBDImage*                                   BackgroundIMG;                                              // 0x0310   (0x0008)  
	class UDBDImage*                                   AdditionalIconIMG;                                          // 0x0318   (0x0008)  
	SDK_UNDEFINED(16,3214) /* FMulticastInlineDelegate */ __um(OnHoveredDelegate);                                 // 0x0320   (0x0010)  
	SDK_UNDEFINED(16,3215) /* FMulticastInlineDelegate */ __um(OnUnhoveredDelegate);                               // 0x0330   (0x0010)  
	SDK_UNDEFINED(16,3216) /* FMulticastInlineDelegate */ __um(OnPressedDelegate);                                 // 0x0340   (0x0010)  
	SDK_UNDEFINED(16,3217) /* FMulticastInlineDelegate */ __um(OnReleasedDelegate);                                // 0x0350   (0x0010)  
	SDK_UNDEFINED(16,3218) /* FMulticastInlineDelegate */ __um(OnClickedDelegate);                                 // 0x0360   (0x0010)  
	SDK_UNDEFINED(16,3219) /* FString */               __um(HoveredSfxName);                                       // 0x0370   (0x0010)  
	class UAkAudioEvent*                               HoveredSfx;                                                 // 0x0380   (0x0008)  
	SDK_UNDEFINED(16,3220) /* FString */               __um(PressedSfxName);                                       // 0x0388   (0x0010)  
	class UAkAudioEvent*                               PressedSfx;                                                 // 0x0398   (0x0008)  
	SDK_UNDEFINED(16,3221) /* FString */               __um(ClickedSfxName);                                       // 0x03A0   (0x0010)  
	class UAkAudioEvent*                               ClickedSfx;                                                 // 0x03B0   (0x0008)  
	EAnalogCursorStickiness                            AnalogCursorStickiness;                                     // 0x03B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x03B9   (0x0007)  MISSED
	class UDBDButton*                                  HitzoneButton;                                              // 0x03C0   (0x0008)  
	class UDBDTextBlock*                               LabelTB;                                                    // 0x03C8   (0x0008)  
	SDK_UNDEFINED(1,3222) /* TEnumAsByte<ETextJustify> */ __um(_alignment);                                        // 0x03D0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x21];                                      // 0x03D1   (0x0021)  MISSED
	bool                                               SendAnalyticsData;                                          // 0x03F2   (0x0001)  
	unsigned char                                      UnknownData02_5[0x5];                                       // 0x03F3   (0x0005)  MISSED
	SDK_UNDEFINED(16,3223) /* FString */               __um(AnalyticsName);                                        // 0x03F8   (0x0010)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreButtonWidget.SetVisible
	// void SetVisible(EButtonWidgetVisibility visible);                                                                     // [0x4b98590] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreButtonWidget.SetRepeatable
	// void SetRepeatable(bool isRepeatable, class UCurveFloat* repetitionDelayCurve);                                       // [0x4b98440] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreButtonWidget.SetPressable
	// void SetPressable(bool isPressable);                                                                                  // [0x4b983b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreButtonWidget.SetLabel
	// void SetLabel(FText& label);                                                                                          // [0x4b980c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreButtonWidget.SetHoverable
	// void SetHoverable(bool isHoverable);                                                                                  // [0x4b97fa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreButtonWidget.SetHoldable
	// void SetHoldable(bool isHoldable);                                                                                    // [0x4b97f10] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreButtonWidget.SetEnabled
	// void SetEnabled(bool IsEnabled);                                                                                      // [0x4b97e80] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreButtonWidget.SetClickable
	// void SetClickable(bool isClickable);                                                                                  // [0x4b97d20] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreButtonWidget.SetChargeable
	// void SetChargeable(bool isChargeable);                                                                                // [0x4b97c90] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreButtonWidget.SetBackground
	// void SetBackground(TWeakObjectPtr<UMaterialInstance*> backgroundMaterial);                                            // [0x4b97a30] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreButtonWidget.SetAlignment
	// void SetAlignment(TEnumAsByte<ETextJustify> newAlignment);                                                            // [0x4b97920] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreButtonWidget.SetAdditionalIcon
	// void SetAdditionalIcon(TWeakObjectPtr<UTexture2D*> iconTexture);                                                      // [0x4b97810] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreButtonWidget.OnUnhoveredDelegate__DelegateSignature
	// void OnUnhoveredDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget);                                   // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/DBDUIViewsCore.CoreButtonWidget.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreButtonWidget.OnReleasedDelegate__DelegateSignature
	// void OnReleasedDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget);                                    // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/DBDUIViewsCore.CoreButtonWidget.OnReleased
	// void OnReleased();                                                                                                    // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreButtonWidget.OnPressedDelegate__DelegateSignature
	// void OnPressedDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget);                                     // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/DBDUIViewsCore.CoreButtonWidget.OnPressed
	// void OnPressed();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreButtonWidget.OnLongPressed
	// void OnLongPressed();                                                                                                 // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreButtonWidget.OnInternalUnhovered
	// void OnInternalUnhovered();                                                                                           // [0x4b971e0] Native|Protected     
	// Function /Script/DBDUIViewsCore.CoreButtonWidget.OnInternalReleased
	// void OnInternalReleased();                                                                                            // [0x4b971c0] Native|Protected     
	// Function /Script/DBDUIViewsCore.CoreButtonWidget.OnInternalPressed
	// void OnInternalPressed();                                                                                             // [0x4b971a0] Native|Protected     
	// Function /Script/DBDUIViewsCore.CoreButtonWidget.OnInternalLongPressed
	// void OnInternalLongPressed();                                                                                         // [0x4b97180] Native|Protected     
	// Function /Script/DBDUIViewsCore.CoreButtonWidget.OnInternalHovered
	// void OnInternalHovered();                                                                                             // [0x4b97160] Native|Protected     
	// Function /Script/DBDUIViewsCore.CoreButtonWidget.OnInternalClicked
	// void OnInternalClicked();                                                                                             // [0x4b97140] Native|Protected     
	// Function /Script/DBDUIViewsCore.CoreButtonWidget.OnHoveredDelegate__DelegateSignature
	// void OnHoveredDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget);                                     // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/DBDUIViewsCore.CoreButtonWidget.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreButtonWidget.OnEnabledChanged
	// void OnEnabledChanged(bool IsEnabled);                                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreButtonWidget.OnClickedDelegate__DelegateSignature
	// void OnClickedDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget);                                     // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/DBDUIViewsCore.CoreButtonWidget.OnClicked
	// void OnClicked();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreButtonWidget.OnAlignmentChanged
	// void OnAlignmentChanged(TEnumAsByte<ETextJustify> newAlignment);                                                      // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreButtonWidget.IsEnabled
	// bool IsEnabled();                                                                                                     // [0x4b96de0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewsCore.CoreButtonWidget.GetHitzonePaintSpaceGeometry
	// FGeometry GetHitzonePaintSpaceGeometry();                                                                             // [0x4b96d70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewsCore.CoreSelectableButtonWidget
/// Size: 0x0038 (0x000408 - 0x000440)
class UCoreSelectableButtonWidget : public UCoreButtonWidget
{ 
public:
	SDK_UNDEFINED(16,3224) /* FMulticastInlineDelegate */ __um(OnSelectedChangedDelegate);                         // 0x0408   (0x0010)  
	SDK_UNDEFINED(16,3225) /* FMulticastInlineDelegate */ __um(OnSelectedAgainDelegate);                           // 0x0418   (0x0010)  
	SDK_UNDEFINED(16,3226) /* FString */               __um(_analyticsName);                                       // 0x0428   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0438   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreSelectableButtonWidget.UpdateBackgroundSkin
	// void UpdateBackgroundSkin(class UMaterialInterface* skinMaterial);                                                    // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreSelectableButtonWidget.SetSelected
	// void SetSelected(bool IsSelected);                                                                                    // [0x4bb3e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreSelectableButtonWidget.SetSelectable
	// void SetSelectable(bool IsSelectable);                                                                                // [0x4bb3d90] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreSelectableButtonWidget.OnSelectedChangedDelegate__DelegateSignature
	// void OnSelectedChangedDelegate__DelegateSignature(class UCoreSelectableButtonWidget* buttonTarget, bool IsSelected);  // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/DBDUIViewsCore.CoreSelectableButtonWidget.OnSelectedChanged
	// void OnSelectedChanged(bool IsSelected);                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreSelectableButtonWidget.OnSelectedAgainDelegate__DelegateSignature
	// void OnSelectedAgainDelegate__DelegateSignature(class UCoreSelectableButtonWidget* buttonTarget);                     // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/DBDUIViewsCore.CoreSelectableButtonWidget.IsSelected
	// bool IsSelected();                                                                                                    // [0x4bb3440] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewsCore.CoreSelectableButtonWidget.IsSelectable
	// bool IsSelectable();                                                                                                  // [0x4bb3410] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget
/// Size: 0x0068 (0x000440 - 0x0004A8)
class UCoreArchiveChallengeReminderSlotWidget : public UCoreSelectableButtonWidget
{ 
public:
	class UCoreArchiveQuestNodeWidget*                 Node;                                                       // 0x0440   (0x0008)  
	class UDBDImage*                                   EmptySlotImage;                                             // 0x0448   (0x0008)  
	class UDBDImage*                                   InactiveBG;                                                 // 0x0450   (0x0008)  
	class UDBDImage*                                   ActiveBG;                                                   // 0x0458   (0x0008)  
	class UDBDImage*                                   SmokeBackground;                                            // 0x0460   (0x0008)  
	class UDBDImage*                                   ProgressBar;                                                // 0x0468   (0x0008)  
	class UDBDImage*                                   SelectorHighlight;                                          // 0x0470   (0x0008)  
	class UDBDTextBlock*                               TitleTB;                                                    // 0x0478   (0x0008)  
	class UDBDTextBlock*                               SubtitleTB;                                                 // 0x0480   (0x0008)  
	class UDBDTextBlock*                               InactiveTitleTB;                                            // 0x0488   (0x0008)  
	class UDBDTextBlock*                               InactiveSubtitleTB;                                         // 0x0490   (0x0008)  
	class UCoreOnHoverBorderWidget*                    OnHoverBorder;                                              // 0x0498   (0x0008)  
	EPlayerRole                                        _slotRole;                                                  // 0x04A0   (0x0001)  
	bool                                               _hasActiveHoverEffect;                                      // 0x04A1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x04A2   (0x0006)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.UpdateVisualState
	// void UpdateVisualState(FArchiveChallengeReminderViewData& Data);                                                      // [0x61c32d0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.UpdateProgressBar
	// void UpdateProgressBar(float Progress);                                                                               // [0x61c32d0] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.UpdateActiveState
	// void UpdateActiveState(bool IsActive, bool PlayAnimation);                                                            // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.SwapChallenge
	// void SwapChallenge(FArchiveChallengeReminderViewData& Data);                                                          // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.SetSlotSelectorState
	// void SetSlotSelectorState(bool isSelectorOpen);                                                                       // [0x4b897f0] Final|Native|Public  
	// Function /Script/DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.SetQuestNodeHoverEffect
	// void SetQuestNodeHoverEffect(bool IsHovered);                                                                         // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.SetData
	// void SetData(FArchiveChallengeReminderViewData& Data);                                                                // [0x4b89270] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.InitVisualState
	// void InitVisualState();                                                                                               // [0x61c32d0] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.Init
	// void Init(EPlayerRole Role);                                                                                          // [0x4b88690] Final|Native|Public  
	// Function /Script/DBDUIViewsCore.CoreArchiveChallengeReminderSlotWidget.ClearData
	// void ClearData();                                                                                                     // [0x4b88210] Final|Native|Public  
};

/// Class /Script/DBDUIViewsCore.CoreArchiveCompendiumButtonWidget
/// Size: 0x0088 (0x000408 - 0x000490)
class UCoreArchiveCompendiumButtonWidget : public UCoreButtonWidget
{ 
public:
	ETooltipHorizontalAlignment                        HorizontalAlignment;                                        // 0x0408   (0x0001)  
	ETooltipVerticalAlignment                          VerticalAlignment;                                          // 0x0409   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x040A   (0x0006)  MISSED
	class UDBDImage*                                   TomeProgressStyleTexture;                                   // 0x0410   (0x0008)  
	class UDBDTextBlock*                               VolumeIndex;                                                // 0x0418   (0x0008)  
	FCompendiumButtonData                              _compendiumButtonData;                                      // 0x0420   (0x0070)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.SetLevelProgressionVisual
	// void SetLevelProgressionVisual(int32_t buttonLevel, EArchivesStoryLevelStatus levelStatus);                           // [0x61c32d0] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.SetGhostStory
	// void SetGhostStory(bool isGhostStory);                                                                                // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.SetButtonVisual
	// void SetButtonVisual(FCompendiumButtonData& buttonData);                                                              // [0x61c32d0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.SetButtonData
	// void SetButtonData(FCompendiumButtonData& buttonData);                                                                // [0x4b89160] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.ResetVisuals
	// void ResetVisuals();                                                                                                  // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.OnButtonUnhovered
	// void OnButtonUnhovered();                                                                                             // [0x4b88800] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.OnButtonHovered
	// void OnButtonHovered();                                                                                               // [0x4b887e0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreArchiveCompendiumButtonWidget.GetTomeId
	// FString GetTomeId();                                                                                                  // [0x4b88540] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CoreTabContentWidget
/// Size: 0x0020 (0x000310 - 0x000330)
class UCoreTabContentWidget : public UCoreBaseUserWidget
{ 
public:
	TArray<class UWidget*>                             ContentWidgets;                                             // 0x0310   (0x0010)  
	float                                              _contentFadeInTime;                                         // 0x0320   (0x0004)  
	EEasingType                                        _contentFadeInEasing;                                       // 0x0324   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0325   (0x0003)  MISSED
	float                                              _contentFadeOutTime;                                        // 0x0328   (0x0004)  
	EEasingType                                        _contentFadeOutEasing;                                      // 0x032C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x032D   (0x0003)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreTabContentWidget.StopFadeInTweening
	// void StopFadeInTweening(float opacityValue);                                                                          // [0x4bbe130] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreTabContentWidget.ResetFade
	// void ResetFade();                                                                                                     // [0x4bbd6e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreTabContentWidget.FadeOutContent
	// void FadeOutContent();                                                                                                // [0x4bbca80] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreTabContentWidget.FadeInContent
	// void FadeInContent();                                                                                                 // [0x4bbca60] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CoreArchiveCompendiumWidget
/// Size: 0x0058 (0x000330 - 0x000388)
class UCoreArchiveCompendiumWidget : public UCoreTabContentWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0330   (0x0008)  MISSED
	class UClass*                                      _compendiumButtonWidgetClass;                               // 0x0338   (0x0008)  
	SDK_UNDEFINED(16,3227) /* FMulticastInlineDelegate */ __um(_onCompendiumClickedDelegate);                      // 0x0340   (0x0010)  
	class UGridPanel*                                  CompendiumGrid;                                             // 0x0350   (0x0008)  
	class UDBDScrollBox*                               CompendiumScroll;                                           // 0x0358   (0x0008)  
	int32_t                                            _cellsPerRow;                                               // 0x0360   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0364   (0x0004)  MISSED
	TArray<class UCoreArchiveCompendiumButtonWidget*>  _compendiumButtonWidgetPool;                                // 0x0368   (0x0010)  
	TArray<class UCoreArchiveCompendiumButtonWidget*>  _compendiumButtonWidgetList;                                // 0x0378   (0x0010)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreArchiveCompendiumWidget.SetGridSlot
	// void SetGridSlot(class UGridSlot* GridSlot, int32_t index);                                                           // [0x4b893e0] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreArchiveCompendiumWidget.ResetScroll
	// void ResetScroll();                                                                                                   // [0x4b89030] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreArchiveCompendiumWidget.Reset
	// void Reset();                                                                                                         // [0x4b89010] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreArchiveCompendiumWidget.OnPastStoryClicked
	// void OnPastStoryClicked(class UCoreButtonWidget* Button);                                                             // [0x4b88880] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.CoreArchiveCompendiumWidget.CreateGhostStories
	// void CreateGhostStories(int32_t currentStoryNum);                                                                     // [0x4b882d0] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreArchiveCompendiumWidget.CreateAndAddButtonToGrid
	// class UCoreArchiveCompendiumButtonWidget* CreateAndAddButtonToGrid(int32_t index);                                    // [0x4b88230] Final|Native|Private 
};

/// Class /Script/DBDUIViewsCore.CoreArchiveJournalImageViewerWidget
/// Size: 0x0058 (0x000330 - 0x000388)
class UCoreArchiveJournalImageViewerWidget : public UCoreTabContentWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0330   (0x0008)  MISSED
	class UCoreInputSwitcherWidget*                    BackInputSwitcher;                                          // 0x0338   (0x0008)  
	class UCoreInputSwitcherWidget*                    TextVisibilityInputSwitcher;                                // 0x0340   (0x0008)  
	SDK_UNDEFINED(16,3228) /* FMulticastInlineDelegate */ __um(_backActionDelegate);                               // 0x0348   (0x0010)  
	SDK_UNDEFINED(16,3229) /* FMulticastInlineDelegate */ __um(_imageViewerTextVisibilityActionDelegate);          // 0x0358   (0x0010)  
	SDK_UNDEFINED(16,3230) /* FMulticastInlineDelegate */ __um(_imageViewerVoiceOverPlayedDelegate);               // 0x0368   (0x0010)  
	SDK_UNDEFINED(16,3231) /* FMulticastInlineDelegate */ __um(_imageViewerVoiceOverAutoplayDelegate);             // 0x0378   (0x0010)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreArchiveJournalImageViewerWidget.SetVoiceOverText
	// void SetVoiceOverText(FText& playVoiceOverText, FText& stopVoiceOverText, FText& autoplayVoiceOverText);              // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveJournalImageViewerWidget.SetTextVisibilityInputText
	// void SetTextVisibilityInputText(FText& DisplayText, FText& hideText);                                                 // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveJournalImageViewerWidget.SetScrollData
	// void SetScrollData(FText& journalEntryScrollPromptText);                                                              // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveJournalImageViewerWidget.SetData
	// void SetData(FArchivesVignetteEntryViewData& Data, bool hasTitle, bool hasDescription);                               // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveJournalImageViewerWidget.OnVoiceOverPlay
	// void OnVoiceOverPlay();                                                                                               // [0x4b88f90] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreArchiveJournalImageViewerWidget.OnVoiceOverAutoPlay
	// void OnVoiceOverAutoPlay(bool autoplay);                                                                              // [0x4b88e70] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreArchiveJournalImageViewerWidget.OnTextVisibilityChanged
	// void OnTextVisibilityChanged();                                                                                       // [0x4b88ca0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CoreArchiveJournalWidget
/// Size: 0x00F0 (0x000330 - 0x000420)
class UCoreArchiveJournalWidget : public UCoreTabContentWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0330   (0x0008)  MISSED
	class UCoreArchiveVignetteButtonContainerWidget*   VignetteButtonContainer;                                    // 0x0338   (0x0008)  
	class UCoreArchiveVignetteEntryContainerWidget*    VignetteEntryContainer;                                     // 0x0340   (0x0008)  
	class UCoreArchiveVignetteCinematicContainerWidget* VignetteCinematicsContainer;                               // 0x0348   (0x0008)  
	class UCoreInputSwitcherWidget*                    LeftArrowInputSwitcher;                                     // 0x0350   (0x0008)  
	class UCoreInputSwitcherWidget*                    RightArrowInputSwitcher;                                    // 0x0358   (0x0008)  
	bool                                               AreInputsEnabled;                                           // 0x0360   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0361   (0x0007)  MISSED
	SDK_UNDEFINED(48,3232) /* TWeakObjectPtr<UTexture2D*> */ __um(DebugRewardImage);                               // 0x0368   (0x0030)  
	char                                               RewardImageMaxDescriptionLength;                            // 0x0398   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0399   (0x0007)  MISSED
	SDK_UNDEFINED(16,3233) /* FMulticastInlineDelegate */ __um(_vignetteSelectedDelegate);                         // 0x03A0   (0x0010)  
	SDK_UNDEFINED(16,3234) /* FMulticastInlineDelegate */ __um(_vignetteEntrySelectedDelegate);                    // 0x03B0   (0x0010)  
	SDK_UNDEFINED(16,3235) /* FMulticastInlineDelegate */ __um(_vignetteCinematicPlayedDelegate);                  // 0x03C0   (0x0010)  
	SDK_UNDEFINED(16,3236) /* FMulticastInlineDelegate */ __um(_vignetteVoiceOverPlayedDelegate);                  // 0x03D0   (0x0010)  
	SDK_UNDEFINED(16,3237) /* FMulticastInlineDelegate */ __um(_vignetteVoiceOverAutoplayDelegate);                // 0x03E0   (0x0010)  
	SDK_UNDEFINED(16,3238) /* FMulticastInlineDelegate */ __um(_vignetteShowImageViewerDelegate);                  // 0x03F0   (0x0010)  
	unsigned char                                      UnknownData03_6[0x20];                                      // 0x0400   (0x0020)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreArchiveJournalWidget.ShowImageViewer
	// void ShowImageViewer();                                                                                               // [0x4b89e60] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreArchiveJournalWidget.SetVoiceOverText
	// void SetVoiceOverText(FText& playVoiceOverText, FText& stopVoiceOverText, FText& autoplayVoiceOverText);              // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveJournalWidget.SetVoiceOverButtonsVisibility
	// void SetVoiceOverButtonsVisibility(bool IsVisible);                                                                   // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveJournalWidget.SetVignetteText
	// void SetVignetteText(FText& titleText, FText& subtitleText);                                                          // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveJournalWidget.SetTopFogOffset
	// void SetTopFogOffset(bool hasTitle, bool hasDescription);                                                             // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveJournalWidget.SetEntryText
	// void SetEntryText(FText& titleText, FText& descriptionText);                                                          // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveJournalWidget.SetEntryImage
	// void SetEntryImage(FText& titleText, FText& descriptionText, TWeakObjectPtr<UTexture2D*>& RewardImage, float textureOffset); // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveJournalWidget.SetBottomFogOffset
	// void SetBottomFogOffset(bool HasAudio);                                                                               // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveJournalWidget.OnVoiceOverPlay
	// void OnVoiceOverPlay();                                                                                               // [0x4b88fb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreArchiveJournalWidget.OnVoiceOverAutoPlay
	// void OnVoiceOverAutoPlay(bool autoplay);                                                                              // [0x4b88f00] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreArchiveJournalWidget.OnVignetteEntrySelected
	// void OnVignetteEntrySelected(class UCoreSelectableButtonWidget* selectedButton);                                      // [0x4b88de0] Final|Native|Public  
	// Function /Script/DBDUIViewsCore.CoreArchiveJournalWidget.OnVignetteCinematicSelected
	// void OnVignetteCinematicSelected(class UCoreSelectableButtonWidget* selectedButton);                                  // [0x4b88d50] Final|Native|Public  
	// Function /Script/DBDUIViewsCore.CoreArchiveJournalWidget.OnVignetteButtonSelected
	// void OnVignetteButtonSelected(class UCoreSelectableButtonWidget* selectedButton);                                     // [0x4b88cc0] Final|Native|Public  
	// Function /Script/DBDUIViewsCore.CoreArchiveJournalWidget.OnRightArrowTriggered
	// void OnRightArrowTriggered();                                                                                         // [0x4b88c80] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreArchiveJournalWidget.OnRewardImageLoaded
	// void OnRewardImageLoaded(TWeakObjectPtr<UTexture2D*> LoadedTexture, bool success, FText titleText, FText descriptionText, float textureOffset); // [0x4b88910] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreArchiveJournalWidget.OnLeftArrowTriggered
	// void OnLeftArrowTriggered();                                                                                          // [0x4b88860] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreArchiveJournalWidget.OnJournalEntriesUnlocked
	// void OnJournalEntriesUnlocked();                                                                                      // [0x4b88840] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreArchiveJournalWidget.OnFirstJournalEntryUnlocked
	// void OnFirstJournalEntryUnlocked();                                                                                   // [0x4b88820] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreArchiveJournalWidget.InitializeArrow
	// void InitializeArrow(class UCoreInputSwitcherWidget* arrowWidget, bool Active);                                       // [0x4b88710] Final|Native|Private 
};

/// Class /Script/DBDUIViewsCore.CoreArchiveLevelProgressionWidget
/// Size: 0x0068 (0x000310 - 0x000378)
class UCoreArchiveLevelProgressionWidget : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0310   (0x0008)  MISSED
	SDK_UNDEFINED(16,3239) /* FMulticastInlineDelegate */ __um(_levelSelectedDelegate);                            // 0x0318   (0x0010)  
	SDK_UNDEFINED(16,3240) /* FMulticastInlineDelegate */ __um(_levelAnimationDoneDelegate);                       // 0x0328   (0x0010)  
	SDK_UNDEFINED(16,3241) /* FMulticastInlineDelegate */ __um(_levelRewardAnimationDoneDelegate);                 // 0x0338   (0x0010)  
	SDK_UNDEFINED(16,3242) /* FMulticastInlineDelegate */ __um(_levelUnlockedAnimationDoneDelegate);               // 0x0348   (0x0010)  
	class UCoreStoryLevelsSelectorWidget*              StoryLevelsSelector;                                        // 0x0358   (0x0008)  
	class UDBDTextBlock*                               LevelNumberTF;                                              // 0x0360   (0x0008)  
	class UDBDTextBlock*                               LevelCompletionTF;                                          // 0x0368   (0x0008)  
	class UOverlay*                                    SideContent;                                                // 0x0370   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreArchiveLevelProgressionWidget.OnTomeLevelUnlockedAnimation
	// void OnTomeLevelUnlockedAnimation();                                                                                  // [0x4b8e440] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreArchiveLevelProgressionWidget.OnStoryLevelSelected
	// void OnStoryLevelSelected(class UCoreSelectableButtonWidget* selectedButton);                                         // [0x4b8e3b0] Final|Native|Protected 
};

/// Class /Script/DBDUIViewsCore.CoreArchiveMenuWidget
/// Size: 0x0268 (0x000310 - 0x000578)
class UCoreArchiveMenuWidget : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0310   (0x0008)  MISSED
	class UCoreTabContainerWidget*                     ArchiveMenuTabs;                                            // 0x0318   (0x0008)  
	class UCoreArchiveChallengeReminderSlotWidget*     SurvivorChallengeSlot;                                      // 0x0320   (0x0008)  
	class UCoreArchiveChallengeReminderSlotWidget*     KillerChallengeSlot;                                        // 0x0328   (0x0008)  
	class UCoreArchiveSlotSelectorWidget*              SlotSelector;                                               // 0x0330   (0x0008)  
	class UCoreInputSwitcherWidget*                    BackInputSwitcher;                                          // 0x0338   (0x0008)  
	class UCoreButtonWidget*                           InfoButton;                                                 // 0x0340   (0x0008)  
	SDK_UNDEFINED(16,3243) /* FMulticastInlineDelegate */ __um(_backActionDelegate);                               // 0x0348   (0x0010)  
	SDK_UNDEFINED(16,3244) /* FMulticastInlineDelegate */ __um(_infoClickedDelegate);                              // 0x0358   (0x0010)  
	SDK_UNDEFINED(16,3245) /* FMulticastInlineDelegate */ __um(_slotSelectorClosedDelegate);                       // 0x0368   (0x0010)  
	SDK_UNDEFINED(16,3246) /* FMulticastInlineDelegate */ __um(MenuTabSelectedDelegate);                           // 0x0378   (0x0010)  
	SDK_UNDEFINED(16,3247) /* FMulticastInlineDelegate */ __um(_challengeReminderClickedDelegate);                 // 0x0388   (0x0010)  
	SDK_UNDEFINED(16,3248) /* FMulticastInlineDelegate */ __um(_slotSelectionSelectedDelegate);                    // 0x0398   (0x0010)  
	SDK_UNDEFINED(24,3249) /* FText */                 __um(_riftRemainingTimeText);                               // 0x03A8   (0x0018)  
	unsigned char                                      UnknownData01_6[0x1B8];                                     // 0x03C0   (0x01B8)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreArchiveMenuWidget.SetScrollData
	// void SetScrollData(FText& vignetteListScrollPromptText, FText& journalEntryScrollPromptText);                         // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveMenuWidget.OnSlotSelectionCancelled
	// void OnSlotSelectionCancelled();                                                                                      // [0x4b8e300] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.CoreArchiveMenuWidget.OnSlotSelected
	// void OnSlotSelected(EPlayerRole Role);                                                                                // [0x4b8e280] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.CoreArchiveMenuWidget.OnMenuTabSelectedAgain
	// void OnMenuTabSelectedAgain(class UCoreSelectableButtonWidget* selectedButton);                                       // [0x4b8d970] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.CoreArchiveMenuWidget.OnMenuTabSelected
	// void OnMenuTabSelected(class UCoreSelectableButtonWidget* selectedButton);                                            // [0x4b8d8e0] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.CoreArchiveMenuWidget.OnInfoButtonClicked
	// void OnInfoButtonClicked(class UCoreButtonWidget* buttonTarget);                                                      // [0x4b8d7c0] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.CoreArchiveMenuWidget.OnChallengeReminderClick
	// void OnChallengeReminderClick(class UCoreButtonWidget* Button);                                                       // [0x4b8d360] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.CoreArchiveMenuWidget.GetTimeRemainingLabelFromMenuState
	// FText GetTimeRemainingLabelFromMenuState(EArchiveMenuState menuState);                                                // [0x4b8cb30] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CoreArchiveObjectiveWidget
/// Size: 0x0020 (0x000310 - 0x000330)
class UCoreArchiveObjectiveWidget : public UCoreBaseUserWidget
{ 
public:
	class UDBDRichTextBlock*                           ObjectiveDescriptionRTB;                                    // 0x0310   (0x0008)  
	class UDBDImage*                                   ProgressBar;                                                // 0x0318   (0x0008)  
	class UDBDTextBlock*                               CurrentProgressTB;                                          // 0x0320   (0x0008)  
	class UDBDTextBlock*                               MaxProgressTB;                                              // 0x0328   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreArchiveObjectiveWidget.SetData
	// void SetData(FArchiveNodeObjectiveViewData& objectiveData);                                                           // [0x4b8e480] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CoreBasePopupWidget
/// Size: 0x0018 (0x000310 - 0x000328)
class UCoreBasePopupWidget : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0310   (0x0008)  MISSED
	class UDBDRichTextBlock*                           titleText;                                                  // 0x0318   (0x0008)  
	class UDBDRichTextBlock*                           MessageText;                                                // 0x0320   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreBasePopupWidget.Show
	// void Show(class UBasePopupViewData* Data);                                                                            // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreBasePopupWidget.Hide
	// void Hide();                                                                                                          // [0x61c32d0] Event|Public|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CoreGenericPopupWidget
/// Size: 0x0040 (0x000328 - 0x000368)
class UCoreGenericPopupWidget : public UCoreBasePopupWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0328   (0x0008)  MISSED
	class UCoreInputSwitcherWidget*                    ProgressionButton;                                          // 0x0330   (0x0008)  
	class UCoreInputSwitcherWidget*                    RegressionButton;                                           // 0x0338   (0x0008)  
	class UCoreInputSwitcherWidget*                    AlternativeButton;                                          // 0x0340   (0x0008)  
	SDK_UNDEFINED(16,3250) /* FMulticastInlineDelegate */ __um(_popupActionDelegate);                              // 0x0348   (0x0010)  
	SDK_UNDEFINED(16,3251) /* FMulticastInlineDelegate */ __um(_popupBackActionDelegate);                          // 0x0358   (0x0010)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreGenericPopupWidget.OnRegressionAction
	// void OnRegressionAction();                                                                                            // [0x4b971e0] Native|Protected     
	// Function /Script/DBDUIViewsCore.CoreGenericPopupWidget.OnProgressionAction
	// void OnProgressionAction();                                                                                           // [0x4b97160] Native|Protected     
	// Function /Script/DBDUIViewsCore.CoreGenericPopupWidget.OnAlternativeAction
	// void OnAlternativeAction();                                                                                           // [0x4b971a0] Native|Protected     
};

/// Class /Script/DBDUIViewsCore.CoreArchivePassPurchasePopupWidget
/// Size: 0x0008 (0x000368 - 0x000370)
class UCoreArchivePassPurchasePopupWidget : public UCoreGenericPopupWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0368   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreArchivePassPurchasePopupWidget.GetTranslatedAvailabilityTitleText
	// FText GetTranslatedAvailabilityTitleText();                                                                           // [0x4b8cc20] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewsCore.CoreArchiveQuestMapWidget
/// Size: 0x0178 (0x000330 - 0x0004A8)
class UCoreArchiveQuestMapWidget : public UCoreTabContentWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0330   (0x0008)  MISSED
	class UCanvasPanel*                                ChallengesContainer;                                        // 0x0338   (0x0008)  
	class UClass*                                      ArchiveQuestNodeWidgetClass;                                // 0x0340   (0x0008)  
	class UClass*                                      ArchiveQuestPathWidgetClass;                                // 0x0348   (0x0008)  
	int32_t                                            MaxDisplayedNodes;                                          // 0x0350   (0x0004)  
	int32_t                                            MaxDisplayedPaths;                                          // 0x0354   (0x0004)  
	float                                              QuestMapRevealDuration;                                     // 0x0358   (0x0004)  
	float                                              NodeRevealDuration;                                         // 0x035C   (0x0004)  
	float                                              PathRevealDuration;                                         // 0x0360   (0x0004)  
	EEasingType                                        NodeRevealEasingType;                                       // 0x0364   (0x0001)  
	EEasingType                                        PathRevealEasingType;                                       // 0x0365   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0366   (0x0002)  MISSED
	class UAkAudioEvent*                               QuestMapGenerationSound;                                    // 0x0368   (0x0008)  
	TArray<FArchiveNodeGraphViewData>                  _nodeGraphDataList;                                         // 0x0370   (0x0010)  
	TArray<FArchiveMapPathViewData>                    _pathDataList;                                              // 0x0380   (0x0010)  
	SDK_UNDEFINED(16,3252) /* FMulticastInlineDelegate */ __um(_questMapCreatedDelegate);                          // 0x0390   (0x0010)  
	SDK_UNDEFINED(16,3253) /* FMulticastInlineDelegate */ __um(_questNodeHoveredDelegate);                         // 0x03A0   (0x0010)  
	SDK_UNDEFINED(16,3254) /* FMulticastInlineDelegate */ __um(_questNodeUnhoveredDelegate);                       // 0x03B0   (0x0010)  
	SDK_UNDEFINED(16,3255) /* FMulticastInlineDelegate */ __um(_questNodeSelectedDelegate);                        // 0x03C0   (0x0010)  
	SDK_UNDEFINED(80,3256) /* TMap<FName, UCoreArchiveQuestNodeWidget*> */ __um(_nodeDictionary);                  // 0x03D0   (0x0050)  
	SDK_UNDEFINED(80,3257) /* TMap<FName, UCoreArchiveQuestPathWidget*> */ __um(_pathDictionary);                  // 0x0420   (0x0050)  
	TArray<class UCoreArchiveQuestNodeWidget*>         _nodeWidgetPool;                                            // 0x0470   (0x0010)  
	TArray<class UCoreArchiveQuestPathWidget*>         _pathWidgetPool;                                            // 0x0480   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0490   (0x0018)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestMapWidget.UnbindFromPath
	// void UnbindFromPath(class UCoreArchiveQuestPathWidget* Path);                                                         // [0x4b8e7f0] Native|Protected     
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestMapWidget.UnbindFromNode
	// void UnbindFromNode(class UCoreArchiveQuestNodeWidget* Node);                                                         // [0x4b8e760] Native|Protected     
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestMapWidget.SetupPath
	// void SetupPath(FArchiveMapPathViewData& PathData);                                                                    // [0x4b8e680] Final|Native|Private|HasOutParms 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestMapWidget.SetupNode
	// void SetupNode(FArchiveNodeGraphViewData& NodeData);                                                                  // [0x4b8e560] Final|Native|Private|HasOutParms 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestMapWidget.OnNodeUnhovered
	// void OnNodeUnhovered(class UCoreButtonWidget* buttonTarget);                                                          // [0x4b8dce0] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestMapWidget.OnNodesRevealCompleted
	// void OnNodesRevealCompleted();                                                                                        // [0x4b8e0b0] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestMapWidget.OnNodeHovered
	// void OnNodeHovered(class UCoreButtonWidget* buttonTarget);                                                            // [0x4b8dbc0] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestMapWidget.OnNodeClicked
	// void OnNodeClicked(class UCoreButtonWidget* buttonTarget);                                                            // [0x4b8db30] Native|Protected     
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestMapWidget.BindToPath
	// void BindToPath(class UCoreArchiveQuestPathWidget* Path);                                                             // [0x4b8caa0] Native|Protected     
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestMapWidget.BindToNode
	// void BindToNode(class UCoreArchiveQuestNodeWidget* Node);                                                             // [0x4b8ca10] Native|Protected     
};

/// Struct /Script/DBDUIViewsCore.LinePair
/// Size: 0x0010 (0x000000 - 0x000010)
struct FLinePair
{ 
	FVector2D                                          Start;                                                      // 0x0000   (0x0008)  
	FVector2D                                          End;                                                        // 0x0008   (0x0008)  
};

/// Class /Script/DBDUIViewsCore.CoreArchiveQuestEditorWidget
/// Size: 0x0100 (0x0004A8 - 0x0005A8)
class UCoreArchiveQuestEditorWidget : public UCoreArchiveQuestMapWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x04A8   (0x0008)  MISSED
	TArray<FLinePair>                                  _gridLinesListVertical;                                     // 0x04B0   (0x0010)  
	TArray<FLinePair>                                  _gridLinesListHorizontal;                                   // 0x04C0   (0x0010)  
	class UCoreArchiveQuestNodeWidget*                 _activeNode;                                                // 0x04D0   (0x0008)  
	class UCoreArchiveQuestPathWidget*                 _pathInCreation;                                            // 0x04D8   (0x0008)  
	SDK_UNDEFINED(16,3258) /* FMulticastInlineDelegate */ __um(_questEditorSaveDelegate);                          // 0x04E0   (0x0010)  
	bool                                               _isCreatingPath;                                            // 0x04F0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x04F1   (0x0007)  MISSED
	class UBorder*                                     EditorBorder;                                               // 0x04F8   (0x0008)  
	class UCheckBox*                                   MoveNodesRadioCheckbox;                                     // 0x0500   (0x0008)  
	class UCheckBox*                                   LinkNodesRadioCheckbox;                                     // 0x0508   (0x0008)  
	class UCheckBox*                                   GridVisibilityCheckbox;                                     // 0x0510   (0x0008)  
	class UCheckBox*                                   SnapGridCheckbox;                                           // 0x0518   (0x0008)  
	class UEditableTextBox*                            GridTileWidthInputPixelsTextBox;                            // 0x0520   (0x0008)  
	class UEditableTextBox*                            GridTileWidthInputPercentTextBox;                           // 0x0528   (0x0008)  
	class UEditableTextBox*                            GridTileHeightInputPixelsTextBox;                           // 0x0530   (0x0008)  
	class UEditableTextBox*                            GridTileHeightInputPercentTextBox;                          // 0x0538   (0x0008)  
	class UCoreKeyListenerButtonWidget*                RefreshGridButton;                                          // 0x0540   (0x0008)  
	class UOverlay*                                    NodeCoordinateContainer;                                    // 0x0548   (0x0008)  
	class UEditableTextBox*                            NodeXInputPixels;                                           // 0x0550   (0x0008)  
	class UEditableTextBox*                            NodeXInputPercent;                                          // 0x0558   (0x0008)  
	class UEditableTextBox*                            NodeYInputPixels;                                           // 0x0560   (0x0008)  
	class UEditableTextBox*                            NodeYInputPercent;                                          // 0x0568   (0x0008)  
	class UCoreKeyListenerButtonWidget*                SubmitButton;                                               // 0x0570   (0x0008)  
	class UCoreKeyListenerButtonWidget*                SaveQuestMapButton;                                         // 0x0578   (0x0008)  
	class UVerticalBox*                                SaveInfoContainer;                                          // 0x0580   (0x0008)  
	class UDBDTextBlock*                               PathTextBlock;                                              // 0x0588   (0x0008)  
	float                                              GridTileHeightValuePercent;                                 // 0x0590   (0x0004)  
	float                                              GridTileWidthValuePercent;                                  // 0x0594   (0x0004)  
	bool                                               IsSnapping;                                                 // 0x0598   (0x0001)  
	bool                                               IsGridVisible;                                              // 0x0599   (0x0001)  
	EEditorMode                                        Mode;                                                       // 0x059A   (0x0001)  
	unsigned char                                      UnknownData02_6[0xD];                                       // 0x059B   (0x000D)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestEditorWidget.SetHighlightedGridLines
	// void SetHighlightedGridLines(int32_t verticalIndex, int32_t horizontalIndex);                                         // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestEditorWidget.SetGridLinesArray
	// void SetGridLinesArray(TArray<FLinePair>& gridArrayVertical, TArray<FLinePair>& gridArrayHorizontal);                 // [0x61c32d0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnSnapGridChecked
	// void OnSnapGridChecked(bool checked);                                                                                 // [0x4b8e320] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnSaveGraphClick
	// void OnSaveGraphClick(class UCoreButtonWidget* buttonTarget);                                                         // [0x4b8e1f0] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnRefreshGridClick
	// void OnRefreshGridClick(class UCoreButtonWidget* buttonTarget);                                                       // [0x4b8e160] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnPathClicked
	// void OnPathClicked(class UCoreButtonWidget* buttonTarget);                                                            // [0x4b8e0d0] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnNodeYPixelChanged
	// void OnNodeYPixelChanged(FText& Text);                                                                                // [0x4b8dfe0] Final|Native|Private|HasOutParms 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnNodeYPercentChanged
	// void OnNodeYPercentChanged(FText& Text);                                                                              // [0x4b8df10] Final|Native|Private|HasOutParms 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnNodeXPixelChanged
	// void OnNodeXPixelChanged(FText& Text);                                                                                // [0x4b8de40] Final|Native|Private|HasOutParms 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnNodeXPercentChanged
	// void OnNodeXPercentChanged(FText& Text);                                                                              // [0x4b8dd70] Final|Native|Private|HasOutParms 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnNodeSubmitClick
	// void OnNodeSubmitClick(class UCoreButtonWidget* buttonTarget);                                                        // [0x4b8dc50] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnNodeBeginDrag
	// void OnNodeBeginDrag(FName& ID);                                                                                      // [0x4b8da90] Final|Native|Private|HasOutParms 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnMoveNodesModeChecked
	// void OnMoveNodesModeChecked(bool checked);                                                                            // [0x4b8da00] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnLinkNodesModeChecked
	// void OnLinkNodesModeChecked(bool checked);                                                                            // [0x4b8d850] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnGridVisbilityChecked
	// void OnGridVisbilityChecked(bool checked);                                                                            // [0x4b8d730] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnGridTileWidthPixelChanged
	// void OnGridTileWidthPixelChanged(FText& Text);                                                                        // [0x4b8d660] Final|Native|Private|HasOutParms 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnGridTileWidthPercentChanged
	// void OnGridTileWidthPercentChanged(FText& Text);                                                                      // [0x4b8d590] Final|Native|Private|HasOutParms 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnGridTileHeightPixelChanged
	// void OnGridTileHeightPixelChanged(FText& Text);                                                                       // [0x4b8d4c0] Final|Native|Private|HasOutParms 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestEditorWidget.OnGridTileHeightPercentChanged
	// void OnGridTileHeightPercentChanged(FText& Text);                                                                     // [0x4b8d3f0] Final|Native|Private|HasOutParms 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestEditorWidget.NodeDragged
	// void NodeDragged(FVector2D& position);                                                                                // [0x4b8d2d0] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestEditorWidget.IntermediatePathMove
	// void IntermediatePathMove(FVector2D& position);                                                                       // [0x4b8d120] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CoreArchiveQuestNodeWidget
/// Size: 0x0160 (0x000408 - 0x000568)
class UCoreArchiveQuestNodeWidget : public UCoreButtonWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0408   (0x0010)  MISSED
	ETooltipHorizontalAlignment                        HorizontalAlignment;                                        // 0x0418   (0x0001)  
	ETooltipVerticalAlignment                          VerticalAlignment;                                          // 0x0419   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x041A   (0x0006)  MISSED
	class UDBDImage*                                   Icon;                                                       // 0x0420   (0x0008)  
	class UOverlay*                                    VignetteTextIndicatorOverlay;                               // 0x0428   (0x0008)  
	class UOverlay*                                    VignetteImageIndicatorOverlay;                              // 0x0430   (0x0008)  
	class UOverlay*                                    VignetteCurrencyAmountOverlay;                              // 0x0438   (0x0008)  
	class UDBDRichTextBlock*                           VignetteCurrencyAmountText;                                 // 0x0440   (0x0008)  
	SDK_UNDEFINED(80,3259) /* TMap<ENodeStatusChange, UAkAudioEvent*> */ __um(StatusChangeAudioEvents);            // 0x0448   (0x0050)  
	FArchiveNodeViewData                               _nodeData;                                                  // 0x0498   (0x00B8)  
	FName                                              _nodeId;                                                    // 0x0550   (0x000C)  
	bool                                               _isChallengeReminderNode;                                   // 0x055C   (0x0001)  
	bool                                               _isDraggable;                                               // 0x055D   (0x0001)  
	unsigned char                                      UnknownData02_6[0xA];                                       // 0x055E   (0x000A)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestNodeWidget.UpdateStoryIndicatorOpacity
	// void UpdateStoryIndicatorOpacity(bool IsImageReward, bool isCompleted);                                               // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestNodeWidget.UpdateNode
	// void UpdateNode(FArchiveNodeViewData& Data);                                                                          // [0x4b8e8a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestNodeWidget.UpdateAllStoryIndicators
	// void UpdateAllStoryIndicators();                                                                                      // [0x4b8e880] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestNodeWidget.ShowRewardNodeTooltip
	// void ShowRewardNodeTooltip();                                                                                         // [0x4b8e740] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestNodeWidget.SetCustomizationRewardRarity
	// void SetCustomizationRewardRarity(EItemRarity Rarity);                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestNodeWidget.SetCurrencyRewardBackground
	// void SetCurrencyRewardBackground(ECurrencyType CurrencyType);                                                         // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestNodeWidget.Reset
	// void Reset();                                                                                                         // [0x4b8e460] Final|Native|Public  
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestNodeWidget.OnStatusChanged
	// void OnStatusChanged(ENodeStatusChange nodeStatusChange);                                                             // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestNodeWidget.OnReset
	// void OnReset();                                                                                                       // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestNodeWidget.OnInit
	// void OnInit();                                                                                                        // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestNodeWidget.NeedsChallengeReminderHoverAnimation
	// bool NeedsChallengeReminderHoverAnimation();                                                                          // [0x4b8d280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestNodeWidget.IsValidNode
	// bool IsValidNode();                                                                                                   // [0x4b8d1f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestNodeWidget.IsSelectableNode
	// bool IsSelectableNode();                                                                                              // [0x4b8d1b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestNodeWidget.InitNode
	// void InitNode(FName& NodeId, FArchiveNodeViewData& Data, bool isChallengeReminderNode);                               // [0x4b8cd80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestNodeWidget.HandleStatusChange
	// void HandleStatusChange(EStoryNodeState prevStatus, EStoryNodeState currentStatus);                                   // [0x4b8ccb0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestNodeWidget.BroadcastDragBegin
	// void BroadcastDragBegin();                                                                                            // [0x45fe020] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CoreArchiveQuestPathWidget
/// Size: 0x0048 (0x000408 - 0x000450)
class UCoreArchiveQuestPathWidget : public UCoreButtonWidget
{ 
public:
	class UOverlay*                                    PathOverlay;                                                // 0x0408   (0x0008)  
	class UDBDImage*                                   PathImage;                                                  // 0x0410   (0x0008)  
	EArchivePathStatus                                 _status;                                                    // 0x0418   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0419   (0x0003)  MISSED
	FArchiveMapPathViewData                            _data;                                                      // 0x041C   (0x002C)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0448   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestPathWidget.UpdatePath
	// void UpdatePath(FArchiveMapPathViewData& Data);                                                                       // [0x4b93890] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestPathWidget.SetVisualState
	// void SetVisualState(EArchivePathStatus& pathStatus);                                                                  // [0x61c32d0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestPathWidget.Reset
	// void Reset();                                                                                                         // [0x4b932c0] Final|Native|Public  
	// Function /Script/DBDUIViewsCore.CoreArchiveQuestPathWidget.InitPath
	// void InitPath(FArchiveMapPathViewData& Data);                                                                         // [0x4b92a20] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CoreArchiveRiftTierItem
/// Size: 0x0060 (0x000298 - 0x0002F8)
class UCoreArchiveRiftTierItem : public UUserWidget
{ 
public:
	SDK_UNDEFINED(16,3260) /* FMulticastInlineDelegate */ __um(_itemClickedDelegate);                              // 0x0298   (0x0010)  
	SDK_UNDEFINED(16,3261) /* FMulticastInlineDelegate */ __um(_unlockAnimationCompleteDelegate);                  // 0x02A8   (0x0010)  
	class UGridPanel*                                  FreeRewardsContainer;                                       // 0x02B8   (0x0008)  
	class UGridPanel*                                  PremiumRewardsContainer;                                    // 0x02C0   (0x0008)  
	TArray<class UCoreRewardWrapperWidget*>            _freeRewardWidgets;                                         // 0x02C8   (0x0010)  
	TArray<class UCoreRewardWrapperWidget*>            _premiumRewardWidgets;                                      // 0x02D8   (0x0010)  
	class UAkAudioEvent*                               _unlockAnimationCompleteSound;                              // 0x02E8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x02F0   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreArchiveRiftTierItem.SetLockedState
	// void SetLockedState(bool IsLocked, bool hasPremium);                                                                  // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveRiftTierItem.SetGenericData
	// void SetGenericData(FArchiveRiftTierRewardsViewData& Data);                                                           // [0x61c32d0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveRiftTierItem.PlayUnlockanimation
	// void PlayUnlockanimation(bool IsPremiumUnlocked, float Delay);                                                        // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveRiftTierItem.OnRewardClicked
	// void OnRewardClicked(class UCoreButtonWidget* Button);                                                                // [0x4b92f90] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.CoreArchiveRiftTierItem.Clear
	// void Clear();                                                                                                         // [0x61c32d0] Event|Public|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CoreArchiveRiftWidget
/// Size: 0x02F0 (0x000330 - 0x000620)
class UCoreArchiveRiftWidget : public UCoreTabContentWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0330   (0x0008)  MISSED
	ETooltipHorizontalAlignment                        HorizontalAlignment;                                        // 0x0338   (0x0001)  
	ETooltipVerticalAlignment                          VerticalAlignment;                                          // 0x0339   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x033A   (0x0006)  MISSED
	SDK_UNDEFINED(16,3262) /* FMulticastInlineDelegate */ __um(_rewardItemClickedDelegate);                        // 0x0340   (0x0010)  
	SDK_UNDEFINED(16,3263) /* FMulticastInlineDelegate */ __um(_rewardCurrencyClickedDelegate);                    // 0x0350   (0x0010)  
	SDK_UNDEFINED(16,3264) /* FMulticastInlineDelegate */ __um(_purchasePremiumPassClickedDelegate);               // 0x0360   (0x0010)  
	SDK_UNDEFINED(16,3265) /* FMulticastInlineDelegate */ __um(_purchaseTierClickedDelegate);                      // 0x0370   (0x0010)  
	SDK_UNDEFINED(16,3266) /* FMulticastInlineDelegate */ __um(_outfitClickedDelegate);                            // 0x0380   (0x0010)  
	SDK_UNDEFINED(16,3267) /* FMulticastInlineDelegate */ __um(_bonusTierShownDelegate);                           // 0x0390   (0x0010)  
	FArchivesRiftGenericViewData                       _genericData;                                               // 0x03A0   (0x0020)  
	TArray<FArchiveRiftTierRewardsViewData>            _riftTiersData;                                             // 0x03C0   (0x0010)  
	int32_t                                            _currentPage;                                               // 0x03D0   (0x0004)  
	int32_t                                            _maxTierItemsPerPage;                                       // 0x03D4   (0x0004)  
	float                                              _animationItemDelay;                                        // 0x03D8   (0x0004)  
	float                                              _animationPremiumTrackDelay;                                // 0x03DC   (0x0004)  
	float                                              _pageSwitchFadeDuration;                                    // 0x03E0   (0x0004)  
	EEasingType                                        _pageSwitchFadeTweenEasing;                                 // 0x03E4   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x03E5   (0x0003)  MISSED
	class UClass*                                      _archiveRiftTierItemClass;                                  // 0x03E8   (0x0008)  
	SDK_UNDEFINED(24,3268) /* FText */                 __um(_freePurchaseButtonText);                              // 0x03F0   (0x0018)  
	SDK_UNDEFINED(24,3269) /* FText */                 __um(_freePurchaseDescriptionText);                         // 0x0408   (0x0018)  
	SDK_UNDEFINED(24,3270) /* FText */                 __um(_premiumPurchaseButtonText);                           // 0x0420   (0x0018)  
	SDK_UNDEFINED(24,3271) /* FText */                 __um(_premiumPurchaseDescriptionText);                      // 0x0438   (0x0018)  
	SDK_UNDEFINED(24,3272) /* FText */                 __um(_maxTierText);                                         // 0x0450   (0x0018)  
	SDK_UNDEFINED(24,3273) /* FText */                 __um(_currentProgressInfoText);                             // 0x0468   (0x0018)  
	FCurrencyProgressionTooltipViewData                _riftFragmentTooltipViewData;                               // 0x0480   (0x00F0)  
	class UCoreToggleButtonWidget*                     OutfitButton;                                               // 0x0570   (0x0008)  
	class UCoreInputSwitcherWidget*                    PurchaseButton;                                             // 0x0578   (0x0008)  
	class UHorizontalBox*                              RewardGrid;                                                 // 0x0580   (0x0008)  
	class UDBDRichTextBlock*                           TierInfoDescriptionRTB;                                     // 0x0588   (0x0008)  
	class UDBDTextBlock*                               TierInfoTopTB;                                              // 0x0590   (0x0008)  
	class UDBDTextBlock*                               TierInfoBottomTB;                                           // 0x0598   (0x0008)  
	class UDBDTextBlock*                               FreeTrackLabelTB;                                           // 0x05A0   (0x0008)  
	class UDBDTextBlock*                               PremiumTrackLabelTB;                                        // 0x05A8   (0x0008)  
	class UDBDTextBlock*                               PaginationTB;                                               // 0x05B0   (0x0008)  
	class UCoreInputSwitcherWidget*                    PaginationPreviousButton;                                   // 0x05B8   (0x0008)  
	class UCoreInputSwitcherWidget*                    PaginationNextButton;                                       // 0x05C0   (0x0008)  
	class UCoreImagePreviewAreaWidget*                 ImagePreviewArea;                                           // 0x05C8   (0x0008)  
	TArray<class UCoreArchiveRiftTierItem*>            _tierItemPool;                                              // 0x05D0   (0x0010)  
	class UUITweenInstance*                            _contentVisbilityTween;                                     // 0x05E0   (0x0008)  
	class UUITweenInstance*                            _pageSwitchVisbilityTween;                                  // 0x05E8   (0x0008)  
	class UCoreSelectableButtonWidget*                 _currentSelectedReward;                                     // 0x05F0   (0x0008)  
	unsigned char                                      UnknownData03_6[0x28];                                      // 0x05F8   (0x0028)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreArchiveRiftWidget.SetVisualData
	// void SetVisualData(FArchivesRiftGenericViewData& Data);                                                               // [0x61c32d0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveRiftWidget.SetTierVisuals
	// void SetTierVisuals(ETierType TierType);                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveRiftWidget.SetPaginationVisuals
	// void SetPaginationVisuals(bool showBonusTierHighlight, FText& bonusTierTooltipText);                                  // [0x61c32d0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveRiftWidget.PlayPremiumTrackUnlockAnimation
	// void PlayPremiumTrackUnlockAnimation();                                                                               // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveRiftWidget.OnRewardItemClicked
	// void OnRewardItemClicked(int32_t tier, class UCoreButtonWidget* Button, bool isPremium, int32_t index);               // [0x4b93020] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreArchiveRiftWidget.OnRewardAnimationCompleted
	// void OnRewardAnimationCompleted();                                                                                    // [0x4b92f70] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreArchiveRiftWidget.OnPreviousButtonClicked
	// void OnPreviousButtonClicked();                                                                                       // [0x4b92f50] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreArchiveRiftWidget.OnOutfitButtonUnhovered
	// void OnOutfitButtonUnhovered(class UCoreButtonWidget* Button);                                                        // [0x4b92ec0] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreArchiveRiftWidget.OnOutfitButtonHovered
	// void OnOutfitButtonHovered(class UCoreButtonWidget* Button);                                                          // [0x4b92e30] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreArchiveRiftWidget.OnOutfitButtonClicked
	// void OnOutfitButtonClicked(class UCoreButtonWidget* Button);                                                          // [0x4b92da0] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreArchiveRiftWidget.OnNextButtonClicked
	// void OnNextButtonClicked();                                                                                           // [0x4b92d80] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreArchiveRiftWidget.OnCurrentPageAnimationCompleted
	// void OnCurrentPageAnimationCompleted();                                                                               // [0x4b92c70] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreArchiveRiftWidget.DisplayPage
	// void DisplayPage(class UUITweenInstance* tween);                                                                      // [0x4b92970] Final|Native|Private 
};

/// Class /Script/DBDUIViewsCore.CoreArchiveSlotSelectorWidget
/// Size: 0x0048 (0x000310 - 0x000358)
class UCoreArchiveSlotSelectorWidget : public UCoreBaseUserWidget
{ 
public:
	class UArchiveNodeTooltipWidget*                   NodeTooltip;                                                // 0x0310   (0x0008)  
	class UCoreKeyListenerInputPromptWidget*           SurvivorSlotPromptWidget;                                   // 0x0318   (0x0008)  
	class UCoreKeyListenerInputPromptWidget*           BothSlotPromptWidget;                                       // 0x0320   (0x0008)  
	class UCoreKeyListenerInputPromptWidget*           KillerSlotPromptWidget;                                     // 0x0328   (0x0008)  
	class UCoreInputSwitcherWidget*                    CancelPromptWidget;                                         // 0x0330   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0338   (0x0020)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreArchiveSlotSelectorWidget.OnSurvivorSelection
	// void OnSurvivorSelection();                                                                                           // [0x4b93180] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreArchiveSlotSelectorWidget.OnKillerSelection
	// void OnKillerSelection();                                                                                             // [0x4b92c90] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreArchiveSlotSelectorWidget.OnCancelSelection
	// void OnCancelSelection();                                                                                             // [0x4b92c30] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreArchiveSlotSelectorWidget.OnBothSelection
	// void OnBothSelection();                                                                                               // [0x4b92ae0] Final|Native|Private 
};

/// Class /Script/DBDUIViewsCore.CoreArchiveTierPurchasePopupWidget
/// Size: 0x00F8 (0x000368 - 0x000460)
class UCoreArchiveTierPurchasePopupWidget : public UCoreGenericPopupWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0368   (0x0008)  MISSED
	class UCoreInputSwitcherWidget*                    LessInputSwitcher;                                          // 0x0370   (0x0008)  
	class UCoreInputSwitcherWidget*                    MoreInputSwitcher;                                          // 0x0378   (0x0008)  
	class UDBDRichTextBlock*                           CurrentQuantityText;                                        // 0x0380   (0x0008)  
	class UDBDImage*                                   ImageContainer;                                             // 0x0388   (0x0008)  
	class UOverlay*                                    PriceContainer;                                             // 0x0390   (0x0008)  
	class UDBDTextBlock*                               PriceText;                                                  // 0x0398   (0x0008)  
	class UDBDTextBlock*                               DiscountText;                                               // 0x03A0   (0x0008)  
	class UCurveFloat*                                 _quantityCurve;                                             // 0x03A8   (0x0008)  
	SDK_UNDEFINED(24,3274) /* FText */                 __um(_bonusTierStyleName);                                  // 0x03B0   (0x0018)  
	SDK_UNDEFINED(80,3275) /* TMap<ECurrencyType, FSlateColor> */ __um(_currencyTextColors);                       // 0x03C8   (0x0050)  
	FSlateColor                                        _unaffordablePriceColor;                                    // 0x0418   (0x0028)  
	SDK_UNDEFINED(16,3276) /* FMulticastInlineDelegate */ __um(_confirmPurchaseDelegate);                          // 0x0440   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0450   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreArchiveTierPurchasePopupWidget.SetVisualData
	// void SetVisualData(class UArchiveTierPurchasePopupViewData* ViewData);                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveTierPurchasePopupWidget.SetCurrencyIcon
	// void SetCurrencyIcon(ECurrencyType CurrencyType);                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveTierPurchasePopupWidget.OnMoreInputTriggered
	// void OnMoreInputTriggered();                                                                                          // [0x4b92d60] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreArchiveTierPurchasePopupWidget.OnLessInputTriggered
	// void OnLessInputTriggered();                                                                                          // [0x4b92cb0] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreArchiveTierPurchasePopupWidget.OnConfirmPurchase
	// void OnConfirmPurchase();                                                                                             // [0x4b92c50] Final|Native|Private 
};

/// Class /Script/DBDUIViewsCore.CoreArchiveTomeWidget
/// Size: 0x0048 (0x000330 - 0x000378)
class UCoreArchiveTomeWidget : public UCoreTabContentWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0330   (0x0008)  MISSED
	class UClass*                                      _archiveQuestEditorWidgetClass;                             // 0x0338   (0x0008)  
	class UCoreArchiveQuestEditorWidget*               _archiveQuestEditorWidget;                                  // 0x0340   (0x0008)  
	class UCoreTabContainerWidget*                     ArchiveTomeSideNav;                                         // 0x0348   (0x0008)  
	class UWidgetSwitcher*                             EditorSwitcher;                                             // 0x0350   (0x0008)  
	SDK_UNDEFINED(16,3277) /* FMulticastInlineDelegate */ __um(MenuTabSelectedDelegate);                           // 0x0358   (0x0010)  
	SDK_UNDEFINED(16,3278) /* FMulticastInlineDelegate */ __um(_editorSwitchCompleteDelegate);                     // 0x0368   (0x0010)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreArchiveTomeWidget.OnMenuTabSelected
	// void OnMenuTabSelected(class UCoreSelectableButtonWidget* selectedButton);                                            // [0x4b92cd0] Final|Native|Protected 
};

/// Class /Script/DBDUIViewsCore.CoreButtonSelector
/// Size: 0x0050 (0x000310 - 0x000360)
class UCoreButtonSelector : public UCoreBaseUserWidget
{ 
public:
	SDK_UNDEFINED(16,3279) /* FMulticastInlineDelegate */ __um(OnSelectedDelegate);                                // 0x0310   (0x0010)  
	SDK_UNDEFINED(16,3280) /* FMulticastInlineDelegate */ __um(OnSelectedAgainDelegate);                           // 0x0320   (0x0010)  
	SDK_UNDEFINED(16,3281) /* FMulticastInlineDelegate */ __um(OnUnselectedDelegate);                              // 0x0330   (0x0010)  
	TArray<class UCoreSelectableButtonWidget*>         _buttons;                                                   // 0x0340   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0350   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreButtonSelector.UnselectCurrent
	// void UnselectCurrent();                                                                                               // [0x4b986f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreButtonSelector.SetInputsEnabled
	// void SetInputsEnabled(bool Enabled);                                                                                  // [0x4b98030] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreButtonSelector.SetAllEnabled
	// void SetAllEnabled(bool Enabled);                                                                                     // [0x4b979a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreButtonSelector.SelectPrevious
	// bool SelectPrevious();                                                                                                // [0x4b977e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreButtonSelector.SelectNext
	// bool SelectNext();                                                                                                    // [0x4b977b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreButtonSelector.Select
	// bool Select(class UCoreSelectableButtonWidget* buttonToSelect, bool performAction);                                   // [0x4b976e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreButtonSelector.OnUnselectedDelegate__DelegateSignature
	// void OnUnselectedDelegate__DelegateSignature(class UCoreSelectableButtonWidget* unselectedButton);                    // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/DBDUIViewsCore.CoreButtonSelector.OnSelectedDelegate__DelegateSignature
	// void OnSelectedDelegate__DelegateSignature(class UCoreSelectableButtonWidget* selectedButton);                        // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/DBDUIViewsCore.CoreButtonSelector.OnSelectedAgainDelegate__DelegateSignature
	// void OnSelectedAgainDelegate__DelegateSignature(class UCoreSelectableButtonWidget* selectedButton);                   // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/DBDUIViewsCore.CoreButtonSelector.OnButtonSelectedChanged
	// void OnButtonSelectedChanged(class UCoreSelectableButtonWidget* selectedButton, bool IsSelected);                     // [0x4b96e90] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreButtonSelector.OnButtonSelectedAgain
	// void OnButtonSelectedAgain(class UCoreSelectableButtonWidget* selectedButton);                                        // [0x4b96e00] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreButtonSelector.HasSelection
	// bool HasSelection();                                                                                                  // [0x4b96db0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewsCore.CoreTabContainerWidget
/// Size: 0x0038 (0x000360 - 0x000398)
class UCoreTabContainerWidget : public UCoreButtonSelector
{ 
public:
	class UAkAudioEvent*                               InputPromptTriggeredSfx;                                    // 0x0360   (0x0008)  
	bool                                               AlignHorizontally;                                          // 0x0368   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0369   (0x0003)  MISSED
	FMargin                                            TabPadding;                                                 // 0x036C   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x037C   (0x0004)  MISSED
	class UClass*                                      CoreTabClass;                                               // 0x0380   (0x0008)  
	class UGridPanel*                                  TabContainer;                                               // 0x0388   (0x0008)  
	bool                                               UseControllerTabSwitching;                                  // 0x0390   (0x0001)  
	bool                                               CanLoop;                                                    // 0x0391   (0x0001)  
	bool                                               FillContainerSpace;                                         // 0x0392   (0x0001)  
	bool                                               SendAnalyticsData;                                          // 0x0393   (0x0001)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0394   (0x0004)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreTabContainerWidget.UpdateBackgroundSkin
	// void UpdateBackgroundSkin(int32_t Key, class UMaterialInterface* skinMaterial);                                       // [0x4bbe1b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreTabContainerWidget.SetUseControllerTabSwitching
	// void SetUseControllerTabSwitching(bool Enabled);                                                                      // [0x4bbe0a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreTabContainerWidget.SetUiTakeoverActive
	// void SetUiTakeoverActive(bool IsActive);                                                                              // [0x4bbdff0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreTabContainerWidget.SetTabVisible
	// void SetTabVisible(int32_t Key, bool visible);                                                                        // [0x4bbdf20] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreTabContainerWidget.SetTabEnabled
	// void SetTabEnabled(int32_t Key, bool Enabled);                                                                        // [0x4bbde50] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreTabContainerWidget.SetNotificationVisibility
	// void SetNotificationVisibility(int32_t Key, bool HasNotification);                                                    // [0x4bbdbe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreTabContainerWidget.RemoveTabs
	// void RemoveTabs();                                                                                                    // [0x4bbd6c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreTabContainerWidget.OnTabSelected
	// void OnTabSelected(class UCoreSelectableButtonWidget* selectedButton);                                                // [0x4bbd630] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreTabContainerWidget.LayOutTabs
	// void LayOutTabs();                                                                                                    // [0x4bbd050] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreTabContainerWidget.Init
	// void Init(TArray<FTabWidgetData>& tabsData);                                                                          // [0x4bbcea0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreTabContainerWidget.GetTabIndex
	// int32_t GetTabIndex(int32_t Key);                                                                                     // [0x4bbcc20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewsCore.CoreTabContainerWidget.GetTab
	// class UCoreTabWidget* GetTab(int32_t Key);                                                                            // [0x4bbcb80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewsCore.CoreArchiveVignetteButtonContainerWidget
/// Size: 0x0000 (0x000398 - 0x000398)
class UCoreArchiveVignetteButtonContainerWidget : public UCoreTabContainerWidget
{ 
public:
};

/// Class /Script/DBDUIViewsCore.CoreTabWidget
/// Size: 0x0038 (0x000440 - 0x000478)
class UCoreTabWidget : public UCoreSelectableButtonWidget
{ 
public:
	class UDBDTextBlock*                               TabTextField;                                               // 0x0440   (0x0008)  
	class UDBDImage*                                   TabImage;                                                   // 0x0448   (0x0008)  
	class UWidget*                                     NotificationWidget;                                         // 0x0450   (0x0008)  
	SDK_UNDEFINED(24,3282) /* FText */                 __um(LabelTooltipText);                                     // 0x0458   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0470   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreTabWidget.SetNotificationVisibility
	// void SetNotificationVisibility(bool HasNotification);                                                                 // [0x4bbdcb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreTabWidget.SetIconTexture
	// void SetIconTexture(class UTexture2D* iconTexture, FVector2D forcedIconSize);                                         // [0x4bbda60] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreTabWidget.SetIconSoftTexture
	// void SetIconSoftTexture(TWeakObjectPtr<UTexture2D*> iconTexture, FVector2D forcedIconSize);                           // [0x4bbd910] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreTabWidget.PostInit
	// void PostInit();                                                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreTabWidget.HasLabelTooltip
	// bool HasLabelTooltip();                                                                                               // [0x4bbce60] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreTabWidget.GetTabText
	// FText GetTabText();                                                                                                   // [0x4bbccc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewsCore.CoreTabWidget.GetKey
	// int32_t GetKey();                                                                                                     // [0x4bbcaa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewsCore.CoreArchiveVignetteButtonWidget
/// Size: 0x0078 (0x000478 - 0x0004F0)
class UCoreArchiveVignetteButtonWidget : public UCoreTabWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x70];                                      // 0x0478   (0x0070)  MISSED
	int32_t                                            _subtitleMaxLength;                                         // 0x04E8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x04EC   (0x0004)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreArchiveVignetteButtonWidget.SetVisualData
	// void SetVisualData(FText& vignetteTitle, FText& vignetteSubtitle, FText& vignetteProgressText, bool displayProgress, float vignetteProgress, bool isUnread, FText& unreadIndicatorText, bool showCinematics, bool lockCinematics); // [0x61c32d0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveVignetteButtonWidget.SetVignetteRead
	// void SetVignetteRead(bool IsRead);                                                                                    // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveVignetteButtonWidget.SetData
	// void SetData(FArchivesVignetteViewData& vignetteDataList);                                                            // [0x4b932e0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CoreArchiveVignetteCinematicButton
/// Size: 0x0008 (0x000478 - 0x000480)
class UCoreArchiveVignetteCinematicButton : public UCoreTabWidget
{ 
public:
	bool                                               isForceDisabled;                                            // 0x0478   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0479   (0x0007)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreArchiveVignetteCinematicButton.UnlockCinematic
	// void UnlockCinematic();                                                                                               // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveVignetteCinematicButton.SetIsForceDisabled
	// void SetIsForceDisabled(bool isForceDisabled);                                                                        // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CoreArchiveVignetteCinematicContainerWidget
/// Size: 0x0000 (0x000398 - 0x000398)
class UCoreArchiveVignetteCinematicContainerWidget : public UCoreTabContainerWidget
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreArchiveVignetteCinematicContainerWidget.UnlockCinematics
	// void UnlockCinematics();                                                                                              // [0x4b93870] Final|Native|Public  
};

/// Class /Script/DBDUIViewsCore.CoreArchiveVignetteEntryButtonWidget
/// Size: 0x0028 (0x000478 - 0x0004A0)
class UCoreArchiveVignetteEntryButtonWidget : public UCoreTabWidget
{ 
public:
	class UTexture2D*                                  TextIconLocked;                                             // 0x0478   (0x0008)  
	class UTexture2D*                                  TextIconUnlocked;                                           // 0x0480   (0x0008)  
	class UTexture2D*                                  ImageIconLocked;                                            // 0x0488   (0x0008)  
	class UTexture2D*                                  ImageIconUnlocked;                                          // 0x0490   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0498   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreArchiveVignetteEntryButtonWidget.UnlockEntry
	// void UnlockEntry();                                                                                                   // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveVignetteEntryButtonWidget.SetVisualData
	// void SetVisualData(int32_t entryNumber, bool IsRead, FText& unreadIndicatorText, bool isImage);                       // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreArchiveVignetteEntryButtonWidget.SetData
	// void SetData(int32_t entryNumber, bool IsRead, bool isImage);                                                         // [0x4b934e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreArchiveVignetteEntryButtonWidget.GetEntryNumber
	// int32_t GetEntryNumber();                                                                                             // [0x4b92a00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewsCore.CoreArchiveVignetteEntryContainerWidget
/// Size: 0x0040 (0x000398 - 0x0003D8)
class UCoreArchiveVignetteEntryContainerWidget : public UCoreTabContainerWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0398   (0x0020)  MISSED
	class UProgressBar*                                JournalProgressBar;                                         // 0x03B8   (0x0008)  
	EEasingType                                        AnimationEasing;                                            // 0x03C0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x03C1   (0x0003)  MISSED
	float                                              ProgressAnimationDuration;                                  // 0x03C4   (0x0004)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x03C8   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreArchiveVignetteEntryContainerWidget.OnUnlockProgress
	// void OnUnlockProgress(class UUITweenInstance* tween);                                                                 // [0x4b93230] Final|Native|Public  
	// Function /Script/DBDUIViewsCore.CoreArchiveVignetteEntryContainerWidget.OnUnlockComplete
	// void OnUnlockComplete(class UUITweenInstance* tween);                                                                 // [0x4b931a0] Final|Native|Public  
};

/// Class /Script/DBDUIViewsCore.CoreAuricCellsBundleWidget
/// Size: 0x0060 (0x000310 - 0x000370)
class UCoreAuricCellsBundleWidget : public UCoreBaseUserWidget
{ 
public:
	SDK_UNDEFINED(16,3283) /* FMulticastInlineDelegate */ __um(_buyActionDelegate);                                // 0x0310   (0x0010)  
	class UCorePremiumCurrencyButtonWidget*            BuyButton;                                                  // 0x0320   (0x0008)  
	class UDBDTextBlock*                               BaseAmountTextBlock;                                        // 0x0328   (0x0008)  
	class UDBDTextBlock*                               AmountTextBlock;                                            // 0x0330   (0x0008)  
	class UDBDTextBlock*                               TitleTextBlock;                                             // 0x0338   (0x0008)  
	class UPanelWidget*                                BonusPanel;                                                 // 0x0340   (0x0008)  
	class UDBDTextBlock*                               BonusTextBlock;                                             // 0x0348   (0x0008)  
	class UDBDTextBlock*                               InfoTextBlock;                                              // 0x0350   (0x0008)  
	class UDBDImage*                                   IconImage;                                                  // 0x0358   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0360   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreAuricCellsBundleWidget.SetupAsReward
	// void SetupAsReward();                                                                                                 // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreAuricCellsBundleWidget.SetData
	// void SetData(FAuricCellsBundleViewData& BundleData);                                                                  // [0x4b935f0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreAuricCellsBundleWidget.OnBuyButtonClicked
	// void OnBuyButtonClicked(class UCoreButtonWidget* buttonTarget);                                                       // [0x4b92ba0] Final|Native|Protected 
};

/// Class /Script/DBDUIViewsCore.CoreAuricCellsContainerWidget
/// Size: 0x0040 (0x000310 - 0x000350)
class UCoreAuricCellsContainerWidget : public UCoreBaseUserWidget
{ 
public:
	SDK_UNDEFINED(16,3284) /* FMulticastInlineDelegate */ __um(_buyActionDelegate);                                // 0x0310   (0x0010)  
	class UClass*                                      _tileWidgetClass;                                           // 0x0320   (0x0008)  
	FMargin                                            _tilePadding;                                               // 0x0328   (0x0010)  
	class UHorizontalBox*                              Container;                                                  // 0x0338   (0x0008)  
	TArray<class UCoreAuricCellsBundleWidget*>         _tiles;                                                     // 0x0340   (0x0010)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreAuricCellsContainerWidget.SetData
	// void SetData(TArray<FAuricCellsBundleViewData>& bundlesData);                                                         // [0x4b93740] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreAuricCellsContainerWidget.OnBuyAction
	// void OnBuyAction(FName bundleId);                                                                                     // [0x4b92b00] Final|Native|Protected 
};

/// Class /Script/DBDUIViewsCore.CoreAuricCellsSpecialOfferWidget
/// Size: 0x0020 (0x000370 - 0x000390)
class UCoreAuricCellsSpecialOfferWidget : public UCoreAuricCellsBundleWidget
{ 
public:
	SDK_UNDEFINED(16,3285) /* FMulticastInlineDelegate */ __um(_otherOptionsActionDelegate);                       // 0x0370   (0x0010)  
	class UCoreKeyListenerButtonWidget*                OtherOptionsButton;                                         // 0x0380   (0x0008)  
	class UDBDTextBlock*                               TimeLeftTextBlock;                                          // 0x0388   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreAuricCellsSpecialOfferWidget.OnOtherOptionsClick
	// void OnOtherOptionsClick(class UCoreButtonWidget* selectedButton);                                                    // [0x4b97310] Final|Native|Protected 
};

/// Class /Script/DBDUIViewsCore.CoreAuricCellsWidget
/// Size: 0x0050 (0x000310 - 0x000360)
class UCoreAuricCellsWidget : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0310   (0x0008)  MISSED
	SDK_UNDEFINED(16,3286) /* FMulticastInlineDelegate */ __um(_backActionDelegate);                               // 0x0318   (0x0010)  
	SDK_UNDEFINED(16,3287) /* FMulticastInlineDelegate */ __um(_buyActionDelegate);                                // 0x0328   (0x0010)  
	class UCoreInputSwitcherWidget*                    BackInputSwitcher;                                          // 0x0338   (0x0008)  
	class UCoreAuricCellsContainerWidget*              Container;                                                  // 0x0340   (0x0008)  
	class UDBDTextBlock*                               TitleTextBlock;                                             // 0x0348   (0x0008)  
	class UDBDTextBlock*                               EmptyBundlesTitleTextBlock;                                 // 0x0350   (0x0008)  
	class UDBDTextBlock*                               EmptyBundlesDescriptionTextBlock;                           // 0x0358   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreAuricCellsWidget.OnBuyAction
	// void OnBuyAction(FName bundleId);                                                                                     // [0x4b96f60] Final|Native|Protected 
};

/// Class /Script/DBDUIViewsCore.CoreBaseHudWidget
/// Size: 0x0018 (0x000310 - 0x000328)
class UCoreBaseHudWidget : public UCoreBaseUserWidget
{ 
public:
	float                                              FocusAnimationDuration;                                     // 0x0310   (0x0004)  
	float                                              FocusAnimationDelay;                                        // 0x0314   (0x0004)  
	EEasingType                                        FocusAnimationEasing;                                       // 0x0318   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0319   (0x0003)  MISSED
	float                                              FocusAnimationMaxOpacity;                                   // 0x031C   (0x0004)  
	float                                              FocusAnimationMinOpacity;                                   // 0x0320   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0324   (0x0004)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreBaseHudWidget.ShouldPlayFocusAnimation
	// bool ShouldPlayFocusAnimation();                                                                                      // [0x4b98610] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DBDUIViewsCore.CoreBaseHudWidget.PlayFocusAnimation
	// void PlayFocusAnimation();                                                                                            // [0x4b97160] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CoreBinkVideoPlayerWidget
/// Size: 0x00B8 (0x000310 - 0x0003C8)
class UCoreBinkVideoPlayerWidget : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0310   (0x0010)  MISSED
	class UCanvasPanel*                                VideoBinkCanvas;                                            // 0x0320   (0x0008)  
	class UDBDImage*                                   VideoBinkBG;                                                // 0x0328   (0x0008)  
	class USizeBox*                                    VideoBinkSizeBox;                                           // 0x0330   (0x0008)  
	class UScaleBox*                                   VideoBinkScaleBox;                                          // 0x0338   (0x0008)  
	class UImage*                                      VideoBinkImage;                                             // 0x0340   (0x0008)  
	class UBinkMediaPlayer*                            _binkMediaPlayer;                                           // 0x0348   (0x0008)  
	unsigned char                                      UnknownData01_6[0x78];                                      // 0x0350   (0x0078)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreBinkVideoPlayerWidget.SetSize_Implementation
	// void SetSize_Implementation(FVector2D Size);                                                                          // [0x4b98510] Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreBinkVideoPlayerWidget.OnSubtitlesChanged
	// void OnSubtitlesChanged(TArray<FString>& subtitlesText);                                                              // [0x4b97430] Final|Native|Public|HasOutParms 
	// Function /Script/DBDUIViewsCore.CoreBinkVideoPlayerWidget.OnMediaOpened
	// void OnMediaOpened(FString OpenedUrl);                                                                                // [0x4b97220] Final|Native|Public  
	// Function /Script/DBDUIViewsCore.CoreBinkVideoPlayerWidget.OnMediaClosed
	// void OnMediaClosed();                                                                                                 // [0x4b97200] Final|Native|Public  
	// Function /Script/DBDUIViewsCore.CoreBinkVideoPlayerWidget.OnFadeOutAnimationComplete
	// void OnFadeOutAnimationComplete(class UUITweenInstance* tween);                                                       // [0x4b970b0] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreBinkVideoPlayerWidget.OnFadeInAnimationComplete
	// void OnFadeInAnimationComplete(class UUITweenInstance* tween);                                                        // [0x4b97020] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreBinkVideoPlayerWidget.OnEndReached
	// void OnEndReached();                                                                                                  // [0x4b97000] Final|Native|Public  
	// Function /Script/DBDUIViewsCore.CoreBinkVideoPlayerWidget.FadeOutAnimation_Implementation
	// void FadeOutAnimation_Implementation(float fadeOutDuration, float Delay);                                             // [0x4b96bf0] Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreBinkVideoPlayerWidget.FadeInAnimation_Implementation
	// void FadeInAnimation_Implementation(float fadeInDuration, float Delay);                                               // [0x4b96b20] Native|Public|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CoreChallengeTrackerWidget
/// Size: 0x0068 (0x000328 - 0x000390)
class UCoreChallengeTrackerWidget : public UCoreBaseHudWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0328   (0x0008)  MISSED
	SDK_UNDEFINED(16,3288) /* FMulticastInlineDelegate */ __um(_onWidgetOpeningDone);                              // 0x0330   (0x0010)  
	SDK_UNDEFINED(16,3289) /* FMulticastInlineDelegate */ __um(_onWidgetClosingDone);                              // 0x0340   (0x0010)  
	SDK_UNDEFINED(16,3290) /* FMulticastInlineDelegate */ __um(_onWidgetProgressionDone);                          // 0x0350   (0x0010)  
	class UAkAudioEvent*                               OpenSfx;                                                    // 0x0360   (0x0008)  
	class UAkAudioEvent*                               CloseSfx;                                                   // 0x0368   (0x0008)  
	class UAkAudioEvent*                               ProgressionSfx;                                             // 0x0370   (0x0008)  
	class UAkAudioEvent*                               CompleteSfx;                                                // 0x0378   (0x0008)  
	FName                                              ProgressionAudioRTPC;                                       // 0x0380   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x038C   (0x0004)  MISSED
};

/// Class /Script/DBDUIViewsCore.CoreRewardWidget
/// Size: 0x0020 (0x000440 - 0x000460)
class UCoreRewardWidget : public UCoreSelectableButtonWidget
{ 
public:
	class UDBDImage*                                   RewardIcon;                                                 // 0x0440   (0x0008)  
	class UScaleBox*                                   LayoutScale;                                                // 0x0448   (0x0008)  
	class UCoreLockedOverlayWidget*                    LockedOverlay;                                              // 0x0450   (0x0008)  
	class UCoreOnHoverBorderWidget*                    OnHoverBorder;                                              // 0x0458   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreRewardWidget.SetSmallTemplate
	// void SetSmallTemplate(bool useSmallTemplate);                                                                         // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreRewardWidget.SetRewardScale
	// void SetRewardScale(float Scale);                                                                                     // [0x4bb3c10] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreRewardWidget.SetRewardData
	// void SetRewardData(FRewardViewData& RewardData);                                                                      // [0x4bb3b50] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreRewardWidget.SetIsLocked
	// void SetIsLocked(bool IsLocked, bool useAnimation);                                                                   // [0x4bb37e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreRewardWidget.ClearData
	// void ClearData();                                                                                                     // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CoreCharacterRewardWidget
/// Size: 0x0000 (0x000460 - 0x000460)
class UCoreCharacterRewardWidget : public UCoreRewardWidget
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreCharacterRewardWidget.SetCharacterRewardData
	// void SetCharacterRewardData(FCharacterRewardViewData& CharacterRewardViewData);                                       // [0x4b97bd0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CoreCreditsWidget
/// Size: 0x0038 (0x000310 - 0x000348)
class UCoreCreditsWidget : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0310   (0x0008)  MISSED
	float                                              ScrollSpeed;                                                // 0x0318   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x031C   (0x0004)  MISSED
	class UCoreInputSwitcherWidget*                    BackInputSwitcher;                                          // 0x0320   (0x0008)  
	class UDBDRichTextBlock*                           CreditsTextBlock;                                           // 0x0328   (0x0008)  
	SDK_UNDEFINED(16,3291) /* FMulticastInlineDelegate */ __um(_backActionDelegate);                               // 0x0330   (0x0010)  
	class UUITweenInstance*                            _tween;                                                     // 0x0340   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreCreditsWidget.ScrollText
	// void ScrollText();                                                                                                    // [0x4b976c0] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreCreditsWidget.OnScrollEnd
	// void OnScrollEnd(class UUITweenInstance* tween);                                                                      // [0x4b973a0] Final|Native|Private 
};

/// Class /Script/DBDUIViewsCore.CoreKeyListenerButtonWidget
/// Size: 0x0038 (0x000408 - 0x000440)
class UCoreKeyListenerButtonWidget : public UCoreButtonWidget
{ 
public:
	bool                                               IsKeyboardLabelVisible;                                     // 0x0408   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0409   (0x0007)  MISSED
	class UDBDTextBlock*                               InputNameTB;                                                // 0x0410   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0418   (0x0028)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreKeyListenerButtonWidget.SetUIAction
	// void SetUIAction(EUIActionType ActionType);                                                                           // [0x4ba9730] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreKeyListenerButtonWidget.SetKeyOverride
	// void SetKeyOverride(FKey keyOverride);                                                                                // [0x4ba8d40] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CoreCurrencyButtonWidget
/// Size: 0x0008 (0x000440 - 0x000448)
class UCoreCurrencyButtonWidget : public UCoreKeyListenerButtonWidget
{ 
public:
	class UCorePriceTagWidget*                         PriceTag;                                                   // 0x0440   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreCurrencyButtonWidget.SetCurrencyData
	// void SetCurrencyData(FPriceTagViewData& CurrencyData);                                                                // [0x4b97db0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreCurrencyButtonWidget.SetBackgroundVisible
	// void SetBackgroundVisible(bool showBackground);                                                                       // [0x4b97b40] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/DBDUIViewsCore.CoreCurrencyExpirationLabelWidget
/// Size: 0x0000 (0x000310 - 0x000310)
class UCoreCurrencyExpirationLabelWidget : public UCoreBaseUserWidget
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreCurrencyExpirationLabelWidget.SetData
	// void SetData(FCurrencyExpirationLabelViewData& ViewData);                                                             // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CoreCurrencyForTooltipsWidget
/// Size: 0x0000 (0x000310 - 0x000310)
class UCoreCurrencyForTooltipsWidget : public UCoreBaseUserWidget
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreCurrencyForTooltipsWidget.SetData
	// void SetData(FCurrencyProgressionRewardViewData& currencyRewardViewData);                                             // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CoreCurrencyLabelWidget
/// Size: 0x0000 (0x000408 - 0x000408)
class UCoreCurrencyLabelWidget : public UCoreButtonWidget
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreCurrencyLabelWidget.UpdateCurrency
	// void UpdateCurrency(int32_t newBalance, int32_t previousBalance);                                                     // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreCurrencyLabelWidget.SetData
	// void SetData(FCurrencyLabelViewData& ViewData);                                                                       // [0x61c32d0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreCurrencyLabelWidget.PlayNotEnoughCurrency
	// void PlayNotEnoughCurrency();                                                                                         // [0x61c32d0] Event|Public|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CoreCurrencyProgressionRewardWidget
/// Size: 0x0000 (0x000460 - 0x000460)
class UCoreCurrencyProgressionRewardWidget : public UCoreRewardWidget
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreCurrencyProgressionRewardWidget.SetCurrencyProgressionRewardData
	// void SetCurrencyProgressionRewardData(FCurrencyProgressionRewardViewData& CurrencyProgressionRewardViewData);         // [0x4b9de50] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CoreKeyListenerInputPromptWidget
/// Size: 0x0058 (0x000310 - 0x000368)
class UCoreKeyListenerInputPromptWidget : public UCoreBaseUserWidget
{ 
public:
	SDK_UNDEFINED(16,3292) /* FString */               __um(ClickedSfxName);                                       // 0x0310   (0x0010)  
	class UAkAudioEvent*                               ClickedSfx;                                                 // 0x0320   (0x0008)  
	class UCoreInputPromptWidget*                      InputPrompt;                                                // 0x0328   (0x0008)  
	class UDBDTextBlock*                               LabelTB;                                                    // 0x0330   (0x0008)  
	class UDBDImage*                                   AdditionalIconIMG;                                          // 0x0338   (0x0008)  
	SDK_UNDEFINED(16,3293) /* FMulticastInlineDelegate */ __um(_onKeyListenerInputPromptTriggeredDelegate);        // 0x0340   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0350   (0x0018)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetUIAction
	// void SetUIAction(EUIActionType ActionType);                                                                           // [0x4ba97b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetRepeatable
	// void SetRepeatable(bool isRepeatable, class UCurveFloat* repetitionDelayCurve);                                       // [0x4ba95d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetLabel
	// void SetLabel(FText& label);                                                                                          // [0x4ba8f20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetKeyOverride
	// void SetKeyOverride(FKey keyOverride);                                                                                // [0x4ba8e30] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetEnabled
	// void SetEnabled(bool IsEnabled);                                                                                      // [0x4ba8c20] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreKeyListenerInputPromptWidget.SetAdditionalIcon
	// void SetAdditionalIcon(TWeakObjectPtr<UTexture2D*> iconTexture);                                                      // [0x4ba8a60] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreKeyListenerInputPromptWidget.OnEnabledChanged
	// void OnEnabledChanged(bool IsEnabled);                                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreKeyListenerInputPromptWidget.IsEnabled
	// bool IsEnabled();                                                                                                     // [0x4ba8010] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewsCore.CoreCurrencyPromptWidget
/// Size: 0x0008 (0x000368 - 0x000370)
class UCoreCurrencyPromptWidget : public UCoreKeyListenerInputPromptWidget
{ 
public:
	class UCorePriceTagWidget*                         PriceTag;                                                   // 0x0368   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreCurrencyPromptWidget.SetCurrencyData
	// void SetCurrencyData(FPriceTagViewData& CurrencyData);                                                                // [0x4b9dcb0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewsCore.CoreCurrencyPromptWidget.SetBackgroundVisible
	// void SetBackgroundVisible(bool showBackground);                                                                       // [0x4b9db90] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/DBDUIViewsCore.CoreInputSwitcherWidget
/// Size: 0x0090 (0x000310 - 0x0003A0)
class UCoreInputSwitcherWidget : public UCoreBaseUserWidget
{ 
public:
	EInputSwitcherDisplayRule                          ButtonDisplayRule;                                          // 0x0310   (0x0001)  
	EInputSwitcherDisplayRule                          InputPromptDisplayRule;                                     // 0x0311   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0312   (0x0006)  MISSED
	SDK_UNDEFINED(16,3294) /* FString */               __um(ButtonPressedSfxName);                                 // 0x0318   (0x0010)  
	class UAkAudioEvent*                               ButtonPressedSfx;                                           // 0x0328   (0x0008)  
	SDK_UNDEFINED(16,3295) /* FString */               __um(ButtonHoveredSfxName);                                 // 0x0330   (0x0010)  
	class UAkAudioEvent*                               ButtonHoveredSfx;                                           // 0x0340   (0x0008)  
	SDK_UNDEFINED(16,3296) /* FString */               __um(InputTriggeredSfxName);                                // 0x0348   (0x0010)  
	class UAkAudioEvent*                               InputTriggeredSfx;                                          // 0x0358   (0x0008)  
	class UCoreKeyListenerInputPromptWidget*           InputPrompt;                                                // 0x0360   (0x0008)  
	class UCoreButtonWidget*                           Button;                                                     // 0x0368   (0x0008)  
	bool                                               _shouldRegisterForInputInConstruct;                         // 0x0370   (0x0001)  
	SDK_UNDEFINED(1,3297) /* TEnumAsByte<ETextJustify> */ __um(_alignment);                                        // 0x0371   (0x0001)  
	bool                                               _isEnabled;                                                 // 0x0372   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x0373   (0x0005)  MISSED
	SDK_UNDEFINED(16,3298) /* FMulticastInlineDelegate */ __um(_onInputSwitcherTriggeredDelegate);                 // 0x0378   (0x0010)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x0388   (0x0001)  MISSED
	bool                                               SendAnalyticsData;                                          // 0x0389   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x038A   (0x0006)  MISSED
	SDK_UNDEFINED(16,3299) /* FString */               __um(AnalyticsName);                                        // 0x0390   (0x0010)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreInputSwitcherWidget.SetUIAction
	// void SetUIAction(EUIActionType ActionType);                                                                           // [0x4ba4020] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreInputSwitcherWidget.SetRepeatable
	// void SetRepeatable(bool isRepeatable, class UCurveFloat* repetitionDelayCurve);                                       // [0x4ba3f50] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreInputSwitcherWidget.SetLabel
	// void SetLabel(FText& label);                                                                                          // [0x4ba3db0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreInputSwitcherWidget.SetKeyOverride
	// void SetKeyOverride(FKey keyOverride);                                                                                // [0x4ba3cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreInputSwitcherWidget.SetEnabled
	// void SetEnabled(bool IsEnabled);                                                                                      // [0x4ba3820] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreInputSwitcherWidget.SetBackground
	// void SetBackground(TWeakObjectPtr<UMaterialInstance*> backgroundMaterial);                                            // [0x4ba35d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreInputSwitcherWidget.SetAlignment
	// void SetAlignment(TEnumAsByte<ETextJustify> newAlignment);                                                            // [0x4ba3550] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreInputSwitcherWidget.SetAdditionalIcon
	// void SetAdditionalIcon(TWeakObjectPtr<UTexture2D*> iconTexture);                                                      // [0x4ba3440] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreInputSwitcherWidget.OnInputPromptTriggered
	// void OnInputPromptTriggered();                                                                                        // [0x4ba2f80] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreInputSwitcherWidget.OnButtonClicked
	// void OnButtonClicked(class UCoreButtonWidget* Target);                                                                // [0x4ba2d40] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreInputSwitcherWidget.OnAlignmentChanged
	// void OnAlignmentChanged(TEnumAsByte<ETextJustify> newAlignment);                                                      // [0x4ba2cc0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreInputSwitcherWidget.GetInputPrompt
	// class UCoreKeyListenerInputPromptWidget* GetInputPrompt();                                                            // [0x4ba2880] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewsCore.CoreInputSwitcherWidget.GetButton
	// class UCoreButtonWidget* GetButton();                                                                                 // [0x4ba2770] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewsCore.CoreCurrencySwitcherWidget
/// Size: 0x0000 (0x0003A0 - 0x0003A0)
class UCoreCurrencySwitcherWidget : public UCoreInputSwitcherWidget
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreCurrencySwitcherWidget.SetCurrencyData
	// void SetCurrencyData(FPriceTagViewData& CurrencyData);                                                                // [0x4b9dd80] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewsCore.CoreCurrencySwitcherWidget.SetBackgroundVisible
	// void SetBackgroundVisible(bool showBackground);                                                                       // [0x4b9dc20] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/DBDUIViewsCore.CoreCustomizationRewardWidget
/// Size: 0x01E8 (0x000460 - 0x000648)
class UCoreCustomizationRewardWidget : public UCoreRewardWidget
{ 
public:
	FMargin                                            _priceTagPadding;                                           // 0x0460   (0x0010)  
	class UClass*                                      PriceTagWidgetClass;                                        // 0x0470   (0x0008)  
	class UDBDImage*                                   RarityIMG;                                                  // 0x0478   (0x0008)  
	class UDBDImage*                                   EventPointsImage;                                           // 0x0480   (0x0008)  
	class UDBDImage*                                   CheckmarkImage;                                             // 0x0488   (0x0008)  
	class UVerticalBox*                                PriceTagsVerticalBox;                                       // 0x0490   (0x0008)  
	FCustomizationRewardViewData                       _data;                                                      // 0x0498   (0x01B0)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreCustomizationRewardWidget.SetVisibleCurrencies
	// void SetVisibleCurrencies(TArray<ECurrencyType> visibleCurrencyTypes);                                                // [0x4b9e470] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreCustomizationRewardWidget.SetRarity
	// void SetRarity(EItemRarity Rarity);                                                                                   // [0x4b9e140] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreCustomizationRewardWidget.SetOwnedText
	// void SetOwnedText(FText& ownedText);                                                                                  // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreCustomizationRewardWidget.SetMilestoneTrackerOwnedVisuals
	// void SetMilestoneTrackerOwnedVisuals(bool IsOwned, bool useAnimation);                                                // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreCustomizationRewardWidget.SetLimitedTimeText
	// void SetLimitedTimeText(FString LimitedTimeText);                                                                     // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreCustomizationRewardWidget.SetDiscountTimeText
	// void SetDiscountTimeText(FString DiscountTimeText);                                                                   // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreCustomizationRewardWidget.SetCustomizationRewardData
	// void SetCustomizationRewardData(FCustomizationRewardViewData& CustomizationRewardViewData);                           // [0x4b9df90] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreCustomizationRewardWidget.HideTimeTexts
	// void HideTimeTexts();                                                                                                 // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreCustomizationRewardWidget.DisplayEventPointIcon
	// void DisplayEventPointIcon(bool Show);                                                                                // [0x4b9d7b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CoreDisplayStandWidget
/// Size: 0x0020 (0x000310 - 0x000330)
class UCoreDisplayStandWidget : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0310   (0x0008)  MISSED
	SDK_UNDEFINED(16,3300) /* FMulticastInlineDelegate */ __um(_displayStandRotationDelegate);                     // 0x0318   (0x0010)  
	class UDragZone*                                   DragZone;                                                   // 0x0328   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreDisplayStandWidget.OnDrag
	// void OnDrag(FVector2D cursorDelta);                                                                                   // [0x4b9d9f0] Final|Native|Protected|HasDefaults 
};

/// Class /Script/DBDUIViewsCore.CoreEndGameCollapseBarWidget
/// Size: 0x0078 (0x000328 - 0x0003A0)
class UCoreEndGameCollapseBarWidget : public UCoreBaseHudWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0328   (0x0008)  MISSED
	float                                              _progressBarInterpSpeed;                                    // 0x0330   (0x0004)  
	unsigned char                                      UnknownData01_6[0x6C];                                      // 0x0334   (0x006C)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreEndGameCollapseBarWidget.UpdateBarProgression
	// void UpdateBarProgression(float Progress);                                                                            // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreEndGameCollapseBarWidget.PlayToZeroAnimation
	// void PlayToZeroAnimation();                                                                                           // [0x61c32d0] Event|Protected|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CoreEndGameCollapseProgressWidget
/// Size: 0x0048 (0x000310 - 0x000358)
class UCoreEndGameCollapseProgressWidget : public UCoreBaseUserWidget
{ 
public:
	class UProgressBar*                                ProgressBar;                                                // 0x0310   (0x0008)  
	class UCanvasPanel*                                MarkerLeftCanvas;                                           // 0x0318   (0x0008)  
	class UCanvasPanel*                                MarkerRightCanvas;                                          // 0x0320   (0x0008)  
	class UHorizontalBoxSlot*                          _markerLeftBox;                                             // 0x0328   (0x0008)  
	class UHorizontalBoxSlot*                          _markerRightBox;                                            // 0x0330   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0338   (0x0020)  MISSED
};

/// Class /Script/DBDUIViewsCore.CoreEquippedItemWidget
/// Size: 0x0010 (0x000328 - 0x000338)
class UCoreEquippedItemWidget : public UCoreBaseHudWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0328   (0x0008)  MISSED
	class UAkAudioEvent*                               ItemDisappearSfx;                                           // 0x0330   (0x0008)  
};

/// Class /Script/DBDUIViewsCore.CoreEquippedPowerWidget
/// Size: 0x0008 (0x000328 - 0x000330)
class UCoreEquippedPowerWidget : public UCoreBaseHudWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0328   (0x0008)  MISSED
};

/// Class /Script/DBDUIViewsCore.CoreEventEntryWidget
/// Size: 0x0298 (0x000310 - 0x0005A8)
class UCoreEventEntryWidget : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0310   (0x0008)  MISSED
	class UEventEntryViewData*                         _viewData;                                                  // 0x0318   (0x0008)  
	class UDataTable*                                  _eventSkinDataTable;                                        // 0x0320   (0x0008)  
	FEventEntryPopupSkinUIData                         _skinData;                                                  // 0x0328   (0x0220)  
	class UDBDImage*                                   TitleBanner;                                                // 0x0548   (0x0008)  
	class UDBDImage*                                   TitleImage;                                                 // 0x0550   (0x0008)  
	class UDBDTextBlock*                               EventDateText;                                              // 0x0558   (0x0008)  
	class UCoreTabContainerWidget*                     TabsContainer;                                              // 0x0560   (0x0008)  
	class UMilestoneTrackerWidget*                     MilestoneTracker;                                           // 0x0568   (0x0008)  
	class UCoreKeyListenerInputPromptWidget*           ScrollPrompt;                                               // 0x0570   (0x0008)  
	SDK_UNDEFINED(16,3301) /* FMulticastInlineDelegate */ __um(_eventEntryTabSelectedEvent);                       // 0x0578   (0x0010)  
	SDK_UNDEFINED(16,3302) /* FMulticastInlineDelegate */ __um(_backActionDelegate);                               // 0x0588   (0x0010)  
	class UCoreInputSwitcherWidget*                    RegressionButton;                                           // 0x0598   (0x0008)  
	class URichTextBlock*                              titleText;                                                  // 0x05A0   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreEventEntryWidget.SetUiTakeoverActive
	// void SetUiTakeoverActive(bool IsActive);                                                                              // [0x4b9e3e0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreEventEntryWidget.SetTabsVisuals
	// void SetTabsVisuals();                                                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreEventEntryWidget.OnTabSelected
	// void OnTabSelected(class UCoreSelectableButtonWidget* selectedButton);                                                // [0x4b9da70] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.CoreEventEntryWidget.OnShow
	// void OnShow();                                                                                                        // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreEventEntryWidget.OnLeave
	// void OnLeave();                                                                                                       // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreEventEntryWidget.OnEnter
	// void OnEnter();                                                                                                       // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreEventEntryWidget.OnBackAction
	// void OnBackAction();                                                                                                  // [0x4b9d9d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CoreExampleWidget
/// Size: 0x0098 (0x000328 - 0x0003C0)
class UCoreExampleWidget : public UCoreBaseHudWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0328   (0x0008)  MISSED
	SDK_UNDEFINED(16,3303) /* FString */               __um(EditAnywhere);                                         // 0x0330   (0x0010)  
	SDK_UNDEFINED(16,3304) /* FString */               __um(EditDefaultsOnly);                                     // 0x0340   (0x0010)  
	SDK_UNDEFINED(16,3305) /* FString */               __um(EditInstanceOnly);                                     // 0x0350   (0x0010)  
	SDK_UNDEFINED(16,3306) /* FString */               __um(EditNoBlueprint);                                      // 0x0360   (0x0010)  
	SDK_UNDEFINED(16,3307) /* FString */               __um(EditDefaultsOnlyBlueprintReadOnly);                    // 0x0370   (0x0010)  
	SDK_UNDEFINED(16,3308) /* FString */               __um(VisibleAnywhere);                                      // 0x0380   (0x0010)  
	SDK_UNDEFINED(16,3309) /* FString */               __um(VisibleDefaultsOnly);                                  // 0x0390   (0x0010)  
	SDK_UNDEFINED(16,3310) /* FString */               __um(VisibleInstanceOnly);                                  // 0x03A0   (0x0010)  
	SDK_UNDEFINED(16,3311) /* FMulticastInlineDelegate */ __um(ExampleButtonClickDelegate);                        // 0x03B0   (0x0010)  
};

/// Class /Script/DBDUIViewsCore.CoreExternalEffectsWidget
/// Size: 0x0278 (0x000328 - 0x0005A0)
class UCoreExternalEffectsWidget : public UCoreBaseHudWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0328   (0x0008)  MISSED
	FVector2D                                          GridSlotSize;                                               // 0x0330   (0x0008)  
	float                                              AddonScaleRatio;                                            // 0x0338   (0x0004)  
	int32_t                                            SpacingBetweenRows;                                         // 0x033C   (0x0004)  
	int32_t                                            SpacingPerks;                                               // 0x0340   (0x0004)  
	int32_t                                            SpacingAddons;                                              // 0x0344   (0x0004)  
	int32_t                                            SpacingBetweenPerksAndAddons;                               // 0x0348   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x034C   (0x0004)  MISSED
	class UClass*                                      PerkWidgetClass;                                            // 0x0350   (0x0008)  
	class UClass*                                      AddonWidgetClass;                                           // 0x0358   (0x0008)  
	class UGridPanel*                                  Container;                                                  // 0x0360   (0x0008)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0368   (0x0008)  MISSED
	TArray<FPerkViewData>                              _perkData;                                                  // 0x0370   (0x0010)  
	SDK_UNDEFINED(80,3312) /* TMap<FName, UCorePerkWidget*> */ __um(_perkWidgets);                                 // 0x0380   (0x0050)  
	TArray<class UCorePerkWidget*>                     _perkPool;                                                  // 0x03D0   (0x0010)  
	SDK_UNDEFINED(80,3313) /* TMap<FName, TScriptInterface<Class>> */ __um(_perkViewInterfaces);                   // 0x03E0   (0x0050)  
	TArray<FAddonViewData>                             _addonData;                                                 // 0x0430   (0x0010)  
	SDK_UNDEFINED(80,3314) /* TMap<FName, UCoreAddonWidget*> */ __um(_addonWidgets);                               // 0x0440   (0x0050)  
	TArray<class UCoreAddonWidget*>                    _addonPool;                                                 // 0x0490   (0x0010)  
	SDK_UNDEFINED(80,3315) /* TMap<FName, TScriptInterface<Class>> */ __um(_addonViewInterfaces);                  // 0x04A0   (0x0050)  
	SDK_UNDEFINED(80,3316) /* TMap<FName, FTimerHandle> */ __um(_timerHandleMap);                                  // 0x04F0   (0x0050)  
	SDK_UNDEFINED(80,3317) /* TMap<FName, USpacer*> */ __um(_spacerWidgets);                                       // 0x0540   (0x0050)  
	TArray<class USpacer*>                             _spacerPool;                                                // 0x0590   (0x0010)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalPerk_Implementation
	// void HideExternalPerk_Implementation(FName ItemId);                                                                   // [0x4b9d8f0] Native|Public        
	// Function /Script/DBDUIViewsCore.CoreExternalEffectsWidget.HideExternalAddon_Implementation
	// void HideExternalAddon_Implementation(FName ItemId);                                                                  // [0x4b9d840] Native|Public        
};

/// Class /Script/DBDUIViewsCore.CoreFearMarketWidget
/// Size: 0x0030 (0x000368 - 0x000398)
class UCoreFearMarketWidget : public UCoreGenericPopupWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0368   (0x0008)  MISSED
	class UCoreMenuPerkWidget*                         MenuPerk;                                                   // 0x0370   (0x0008)  
	class UHorizontalBox*                              BloodpointsRewardContainer;                                 // 0x0378   (0x0008)  
	class UDBDTextBlock*                               BloodpointsValueTB;                                         // 0x0380   (0x0008)  
	class UDBDTextBlock*                               CostTextTB;                                                 // 0x0388   (0x0008)  
	class UDBDTextBlock*                               AvailableTextTB;                                            // 0x0390   (0x0008)  
};

/// Class /Script/DBDUIViewsCore.CoreFilterButtonWidget
/// Size: 0x0038 (0x000408 - 0x000440)
class UCoreFilterButtonWidget : public UCoreButtonWidget
{ 
public:
	class UDBDImage*                                   LabelIMG;                                                   // 0x0408   (0x0008)  
	EItemFilterOption                                  _filterOption;                                              // 0x0410   (0x0001)  
	bool                                               _isToggled;                                                 // 0x0411   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0412   (0x0006)  MISSED
	class UTexture2D*                                  FavoriteTagTexture;                                         // 0x0418   (0x0008)  
	class UTexture2D*                                  OwnedTagTexture;                                            // 0x0420   (0x0008)  
	bool                                               _defaultToggleState;                                        // 0x0428   (0x0001)  
	unsigned char                                      UnknownData01_6[0x17];                                      // 0x0429   (0x0017)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreFilterButtonWidget.UpdateVisualState
	// void UpdateVisualState();                                                                                             // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreFilterButtonWidget.SetupTextOnly
	// void SetupTextOnly(FText& label);                                                                                     // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreFilterButtonWidget.SetupImageOnly
	// void SetupImageOnly(class UTexture2D* Texture);                                                                       // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreFilterButtonWidget.SetupImageAndText
	// void SetupImageAndText(class UTexture2D* Texture, FText& label);                                                      // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreFilterButtonWidget.SetToggledState
	// void SetToggledState(bool IsToggled);                                                                                 // [0x4b9e350] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreFilterButtonWidget.IsToggled
	// bool IsToggled();                                                                                                     // [0x4b9d9a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewsCore.CoreFooterButtonWidget
/// Size: 0x0040 (0x000408 - 0x000448)
class UCoreFooterButtonWidget : public UCoreButtonWidget
{ 
public:
	class UDBDImage*                                   IconIMG;                                                    // 0x0408   (0x0008)  
	FLinearColor                                       _hoveredColor;                                              // 0x0410   (0x0010)  
	FLinearColor                                       _unhoveredColor;                                            // 0x0420   (0x0010)  
	SDK_UNDEFINED(24,3318) /* FText */                 __um(_tooltipLabelText);                                    // 0x0430   (0x0018)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreFooterButtonWidget.SetUnhoveredColor
	// void SetUnhoveredColor();                                                                                             // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreFooterButtonWidget.SetHoveredColor
	// void SetHoveredColor();                                                                                               // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CoreFooterInputSwitcherWidget
/// Size: 0x0008 (0x0003A0 - 0x0003A8)
class UCoreFooterInputSwitcherWidget : public UCoreInputSwitcherWidget
{ 
public:
	class UTexture2D*                                  _iconTexture;                                               // 0x03A0   (0x0008)  
};

/// Class /Script/DBDUIViewsCore.CoreGameManualCategoryButton
/// Size: 0x0030 (0x000408 - 0x000438)
class UCoreGameManualCategoryButton : public UCoreButtonWidget
{ 
public:
	class UDBDTextBlock*                               Title;                                                      // 0x0408   (0x0008)  
	class UDBDTextBlock*                               Description;                                                // 0x0410   (0x0008)  
	class UDBDImage*                                   Icon;                                                       // 0x0418   (0x0008)  
	class UDBDImage*                                   Background;                                                 // 0x0420   (0x0008)  
	class UTexture2D*                                  iconTexture;                                                // 0x0428   (0x0008)  
	class UTexture2D*                                  BackgroundTexture;                                          // 0x0430   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreGameManualCategoryButton.SetText
	// void SetText(FText Title, FText Description);                                                                         // [0x4b9e1c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CoreGameManualPanelWidget
/// Size: 0x00D8 (0x000310 - 0x0003E8)
class UCoreGameManualPanelWidget : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0310   (0x0008)  MISSED
	EGameManualMenuState                               _currentSelectedManualMenu;                                 // 0x0318   (0x0001)  
	EHelpType                                          _currentGameManualTopic;                                    // 0x0319   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x031A   (0x0006)  MISSED
	class UPanelWidget*                                CategoryPanel;                                              // 0x0320   (0x0008)  
	class UCoreGameManualCategoryButton*               GameCategoryButton;                                         // 0x0328   (0x0008)  
	class UCoreGameManualCategoryButton*               SurvivorCategoryButton;                                     // 0x0330   (0x0008)  
	class UCoreGameManualCategoryButton*               KillerCategoryButton;                                       // 0x0338   (0x0008)  
	class UPanelWidget*                                TopicsPanel;                                                // 0x0340   (0x0008)  
	class UCoreTabContainerWidget*                     GameManualTopicsTabs;                                       // 0x0348   (0x0008)  
	class UDBDTextBlock*                               GameManualContentTitle;                                     // 0x0350   (0x0008)  
	class UDBDTextBlock*                               GameManualContentSubtitle;                                  // 0x0358   (0x0008)  
	class UDBDRichTextBlock*                           GameManualContentText;                                      // 0x0360   (0x0008)  
	SDK_UNDEFINED(16,3319) /* FMulticastInlineDelegate */ __um(_onSetOnboardingMenuSubtitleDelegate);              // 0x0368   (0x0010)  
	SDK_UNDEFINED(16,3320) /* FMulticastInlineDelegate */ __um(_onResetOnboardingMenuSubtitleDelegate);            // 0x0378   (0x0010)  
	unsigned char                                      UnknownData02_6[0x60];                                      // 0x0388   (0x0060)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreGameManualPanelWidget.ToggleGameManualMenuState
	// void ToggleGameManualMenuState();                                                                                     // [0x4b9e5e0] Final|Native|Private|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreGameManualPanelWidget.ShowHelpTopics
	// void ShowHelpTopics(EHelpType categoryType);                                                                          // [0x4b9e560] Final|Native|Private|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreGameManualPanelWidget.SetGameManualMenuState
	// void SetGameManualMenuState(EGameManualMenuState menuState);                                                          // [0x4b9e0c0] Final|Native|Private|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreGameManualPanelWidget.SetCurrentOnbardingMenuSubtitle
	// void SetCurrentOnbardingMenuSubtitle();                                                                               // [0x4b9df70] Final|Native|Private|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreGameManualPanelWidget.ResetScrolls
	// void ResetScrolls(bool resetTopicsScroll);                                                                            // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreGameManualPanelWidget.OnTopicsTabSelected
	// void OnTopicsTabSelected(class UCoreSelectableButtonWidget* selectedButton);                                          // [0x4b9db00] Final|Native|Private 
};

/// Class /Script/DBDUIViewsCore.CoreGenericRefreshingPopupWidget
/// Size: 0x0010 (0x000368 - 0x000378)
class UCoreGenericRefreshingPopupWidget : public UCoreGenericPopupWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0368   (0x0010)  MISSED
};

/// Class /Script/DBDUIViewsCore.CoreGenericTextInputPopupWidget
/// Size: 0x0068 (0x000368 - 0x0003D0)
class UCoreGenericTextInputPopupWidget : public UCoreGenericPopupWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0368   (0x0040)  MISSED
	class UEditableTextBox*                            InputTextBox;                                               // 0x03A8   (0x0008)  
	class UDBDScrollBox*                               MessageScrollBox;                                           // 0x03B0   (0x0008)  
	class UDBDImage*                                   ErrorIcon;                                                  // 0x03B8   (0x0008)  
	class UDBDRichTextBlock*                           ErrorMessageTextBlock;                                      // 0x03C0   (0x0008)  
	class UDBDButton*                                  KeyboardButton;                                             // 0x03C8   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreGenericTextInputPopupWidget.OnTextInputChoiceSelected
	// void OnTextInputChoiceSelected(EPopupButtonType selectedButtonType, FString inputText);                               // [0x4ba32f0] Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreGenericTextInputPopupWidget.OnTextEntered
	// void OnTextEntered(EPopupButtonType selectedButtonType, FString inputText);                                           // [0x4ba3200] Native|Protected|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreGenericTextInputPopupWidget.OnTextCommitted
	// void OnTextCommitted(FText& InText, TEnumAsByte<ETextCommit> inCommitType);                                           // [0x4ba30e0] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreGenericTextInputPopupWidget.OnKeyboardButtonClicked
	// void OnKeyboardButtonClicked();                                                                                       // [0x4ba3030] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.CoreGenericTextInputPopupWidget.OnButtonUnhovered
	// void OnButtonUnhovered(class UCoreButtonWidget* Button);                                                              // [0x4ba2e60] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.CoreGenericTextInputPopupWidget.OnButtonHovered
	// void OnButtonHovered(class UCoreButtonWidget* Button);                                                                // [0x4ba2dd0] Final|Native|Protected 
};

/// Class /Script/DBDUIViewsCore.CoreGlobalLoadingSpinnerWidget
/// Size: 0x0008 (0x000310 - 0x000318)
class UCoreGlobalLoadingSpinnerWidget : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0310   (0x0008)  MISSED
};

/// Class /Script/DBDUIViewsCore.CoreHookCountWidget
/// Size: 0x0008 (0x000328 - 0x000330)
class UCoreHookCountWidget : public UCoreBaseHudWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0328   (0x0008)  MISSED
};

/// Class /Script/DBDUIViewsCore.CoreHudAimingCrosshairWidget
/// Size: 0x0010 (0x000328 - 0x000338)
class UCoreHudAimingCrosshairWidget : public UCoreBaseHudWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0328   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreHudAimingCrosshairWidget.GetState
	// EAimingCrosshairState GetState();                                                                                     // [0x4ba2a70] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewsCore.CoreHudAimingCrosshairWidget.GetProgress
	// float GetProgress();                                                                                                  // [0x4ba2a20] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewsCore.CoreHudAimingCrosshairWidget.GetPreviousState
	// EAimingCrosshairState GetPreviousState();                                                                             // [0x4ba2a00] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewsCore.CoreHudAlertWidget
/// Size: 0x0090 (0x000328 - 0x0003B8)
class UCoreHudAlertWidget : public UCoreBaseHudWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0328   (0x0008)  MISSED
	int32_t                                            MaxDisplayedItems;                                          // 0x0330   (0x0004)  
	float                                              SecondaryAlpha;                                             // 0x0334   (0x0004)  
	float                                              FullAlertDuration;                                          // 0x0338   (0x0004)  
	float                                              PendingAlertDuration;                                       // 0x033C   (0x0004)  
	float                                              AnimationDuration;                                          // 0x0340   (0x0004)  
	EEasingType                                        AnimationEasing;                                            // 0x0344   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0345   (0x0003)  MISSED
	float                                              AnimationTranslationY;                                      // 0x0348   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x034C   (0x0004)  MISSED
	class UClass*                                      CoreHudScoreAlertItemClass;                                 // 0x0350   (0x0008)  
	class UClass*                                      CoreHudStatusEffectAlertItemClass;                          // 0x0358   (0x0008)  
	class UGridPanel*                                  AlertContainer;                                             // 0x0360   (0x0008)  
	TArray<class UCoreBaseUserWidget*>                 _alerts;                                                    // 0x0368   (0x0010)  
	TArray<class UCoreBaseUserWidget*>                 _pendingAlerts;                                             // 0x0378   (0x0010)  
	TArray<class UCoreHudScoreAlertItem*>              _scoreAlertPool;                                            // 0x0388   (0x0010)  
	TArray<class UCoreHudStatusEffectAlertItem*>       _statusEffectAlertPool;                                     // 0x0398   (0x0010)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x03A8   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreHudAlertWidget.PopAlert
	// void PopAlert();                                                                                                      // [0x4ba3400] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreHudAlertWidget.OnPopAlertComplete
	// void OnPopAlertComplete(class UUITweenInstance* tween);                                                               // [0x4ba3050] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreHudAlertWidget.OnClearAlertsComplete
	// void OnClearAlertsComplete(class UUITweenInstance* tween);                                                            // [0x4ba2ef0] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreHudAlertWidget.GetRemainingTime
	// float GetRemainingTime();                                                                                             // [0x4ba2a40] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewsCore.CoreHudAlertWidget.GetPendingAlerts
	// TArray<UCoreBaseUserWidget*> GetPendingAlerts();                                                                      // [0x4ba2940] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewsCore.CoreHudAlertWidget.GetAlerts
	// TArray<UCoreBaseUserWidget*> GetAlerts();                                                                             // [0x4ba26b0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewsCore.CoreHudAlertWidget.ClearAlerts
	// void ClearAlerts();                                                                                                   // [0x4ba2690] Final|Native|Private 
};

/// Class /Script/DBDUIViewsCore.CoreHudAntiCampSelfUnhookMeterWidget
/// Size: 0x0010 (0x000328 - 0x000338)
class UCoreHudAntiCampSelfUnhookMeterWidget : public UCoreBaseHudWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0328   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreHudAntiCampSelfUnhookMeterWidget.SetVisualState
	// void SetVisualState(EAntiCampSelfUnhookMeterState NewState);                                                          // [0x61c32d0] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreHudAntiCampSelfUnhookMeterWidget.GetState
	// EAntiCampSelfUnhookMeterState GetState();                                                                             // [0x4ba2a70] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewsCore.CoreHudAntiCampSelfUnhookMeterWidget.GetProgress
	// float GetProgress();                                                                                                  // [0x4ba2a20] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewsCore.CoreHudAntiCampSelfUnhookMeterWidget.GetPreviousState
	// EAntiCampSelfUnhookMeterState GetPreviousState();                                                                     // [0x4ba2a00] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewsCore.CoreHudDirectionalMiniGameItemWidget
/// Size: 0x0000 (0x000328 - 0x000328)
class UCoreHudDirectionalMiniGameItemWidget : public UCoreBaseHudWidget
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreHudDirectionalMiniGameItemWidget.UpdateResult
	// void UpdateResult(bool IsSuccessful);                                                                                 // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreHudDirectionalMiniGameItemWidget.UpdateFinaleVisualState
	// void UpdateFinaleVisualState(bool IsSuccessful);                                                                      // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreHudDirectionalMiniGameItemWidget.RevealDirection
	// void RevealDirection(bool withAnimation);                                                                             // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreHudDirectionalMiniGameItemWidget.Init
	// void Init(EDirectionalInputKey Direction);                                                                            // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CoreHudDirectionalMiniGameWidget
/// Size: 0x0038 (0x000328 - 0x000360)
class UCoreHudDirectionalMiniGameWidget : public UCoreBaseHudWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0328   (0x0008)  MISSED
	class UClass*                                      SkullMerchantItemWidgetClass;                               // 0x0330   (0x0008)  
	class UClass*                                      WormholeItemWidgetClass;                                    // 0x0338   (0x0008)  
	class UHorizontalBox*                              Container;                                                  // 0x0340   (0x0008)  
	TArray<class UCoreHudDirectionalMiniGameItemWidget*> _widgets;                                                 // 0x0348   (0x0010)  
	EDirectionalMiniGameType                           _currentType;                                               // 0x0358   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0359   (0x0007)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreHudDirectionalMiniGameWidget.ShowVisual
	// void ShowVisual();                                                                                                    // [0x61c32d0] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreHudDirectionalMiniGameWidget.GetWidgets
	// TArray<UCoreHudDirectionalMiniGameItemWidget*> GetWidgets();                                                          // [0x4ba2a90] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreHudDirectionalMiniGameWidget.GetCurrentType
	// EDirectionalMiniGameType GetCurrentType();                                                                            // [0x4ba2790] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewsCore.CoreHudEventObjectiveItemWidget
/// Size: 0x0018 (0x000328 - 0x000340)
class UCoreHudEventObjectiveItemWidget : public UCoreBaseHudWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0328   (0x0008)  MISSED
	EEventObjectiveItemState                           _currentState;                                              // 0x0330   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0331   (0x0003)  MISSED
	int32_t                                            _charges;                                                   // 0x0334   (0x0004)  
	int32_t                                            _maxCharges;                                                // 0x0338   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x033C   (0x0004)  MISSED
};

/// Class /Script/DBDUIViewsCore.CoreHudEventProgression2023Widget
/// Size: 0x0008 (0x000328 - 0x000330)
class UCoreHudEventProgression2023Widget : public UCoreBaseHudWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0328   (0x0008)  MISSED
};

/// Class /Script/DBDUIViewsCore.CoreHudEventProgressionWidget
/// Size: 0x0008 (0x000328 - 0x000330)
class UCoreHudEventProgressionWidget : public UCoreBaseHudWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0328   (0x0008)  MISSED
};

/// Class /Script/DBDUIViewsCore.CoreHudObjectivesWidget
/// Size: 0x0018 (0x000328 - 0x000340)
class UCoreHudObjectivesWidget : public UCoreBaseHudWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0328   (0x0010)  MISSED
	class UDBDTextBlock*                               SpecialSpacer;                                              // 0x0338   (0x0008)  
};

/// Class /Script/DBDUIViewsCore.CoreHudScoreAlertItem
/// Size: 0x0000 (0x000310 - 0x000310)
class UCoreHudScoreAlertItem : public UCoreBaseUserWidget
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreHudScoreAlertItem.SetData
	// void SetData(FScoreAlertViewData& Data);                                                                              // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CoreHudStatusEffectAlertItem
/// Size: 0x0000 (0x000310 - 0x000310)
class UCoreHudStatusEffectAlertItem : public UCoreBaseUserWidget
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreHudStatusEffectAlertItem.SetData
	// void SetData(FStatusEffectAlertViewData& Data);                                                                       // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CoreImagePreviewAreaWidget
/// Size: 0x0020 (0x000310 - 0x000330)
class UCoreImagePreviewAreaWidget : public UCoreBaseUserWidget
{ 
public:
	class UDBDImage*                                   PreviewArea;                                                // 0x0310   (0x0008)  
	class UDBDImage*                                   PreviewAreaBG;                                              // 0x0318   (0x0008)  
	class UDBDRichTextBlock*                           ItemContainerText;                                          // 0x0320   (0x0008)  
	class UCustomizationItemGridContainer*             ItemContainer;                                              // 0x0328   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreImagePreviewAreaWidget.ShowBGImage
	// void ShowBGImage();                                                                                                   // [0x4b97160] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreImagePreviewAreaWidget.SetPreviewContainerVisual
	// void SetPreviewContainerVisual(ECustomizationCategory CustomizationCategory);                                         // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreImagePreviewAreaWidget.SetData
	// void SetData(FCustomizationItemPreviewAreaViewData& ViewData);                                                        // [0x4ba36e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreImagePreviewAreaWidget.OnItemClicked
	// void OnItemClicked(int32_t selectedIndex);                                                                            // [0x4ba2fa0] Final|Native|Protected 
};

/// Class /Script/DBDUIViewsCore.CoreInputPromptWidget
/// Size: 0x0040 (0x000310 - 0x000350)
class UCoreInputPromptWidget : public UCoreBaseUserWidget
{ 
public:
	SDK_UNDEFINED(24,3321) /* FText */                 __um(_unfoundInputKeyText);                                 // 0x0310   (0x0018)  
	FKey                                               _inputKey;                                                  // 0x0328   (0x0020)  
	bool                                               _isEnabled;                                                 // 0x0348   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0349   (0x0007)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreInputPromptWidget.SetInputKey
	// void SetInputKey(FKey& InputKey);                                                                                     // [0x4ba3b20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreInputPromptWidget.SetEnabled
	// void SetEnabled(bool IsEnabled);                                                                                      // [0x4ba3790] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreInputPromptWidget.PromptNotFound
	// void PromptNotFound();                                                                                                // [0x4ba3420] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreInputPromptWidget.OnEnabledChanged
	// void OnEnabledChanged(bool IsEnabled);                                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreInputPromptWidget.IsEnabled
	// bool IsEnabled();                                                                                                     // [0x4ba2ca0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DBDUIViewsCore.CoreInputPromptWidget.GetInputShortDisplayName
	// FText GetInputShortDisplayName();                                                                                     // [0x4ba28a0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewsCore.CoreInputPromptWidget.GetInputKey
	// FKey GetInputKey();                                                                                                   // [0x4ba27b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DBDUIViewsCore.CoreInputPromptWidget.DisplayPrompt
	// void DisplayPrompt();                                                                                                 // [0x61c32d0] Event|Protected|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CoreInteractionProgressWidget
/// Size: 0x0030 (0x000328 - 0x000358)
class UCoreInteractionProgressWidget : public UCoreBaseHudWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0328   (0x0010)  MISSED
	TArray<class UCoreStatusEffectIcon*>               Proficiencies;                                              // 0x0338   (0x0010)  
	SDK_UNDEFINED(16,3322) /* FMulticastInlineDelegate */ __um(_hemorrhageAnimationIsCompleteDelegate);            // 0x0348   (0x0010)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreInteractionProgressWidget.SetProficiencies
	// void SetProficiencies(TArray<FStatusEffectViewData>& proficiencyDatas);                                               // [0x4ba3e80] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CoreInteractionPromptActionWidget
/// Size: 0x00B8 (0x000310 - 0x0003C8)
class UCoreInteractionPromptActionWidget : public UCoreBaseUserWidget
{ 
public:
	class UCoreInputPromptWidget*                      InputPrompt;                                                // 0x0310   (0x0008)  
	class UCoreInputPromptWidget*                      InputPrompt2;                                               // 0x0318   (0x0008)  
	class UCoreInputPromptWidget*                      InputPrompt3;                                               // 0x0320   (0x0008)  
	class UCoreInputPromptWidget*                      InputPrompt4;                                               // 0x0328   (0x0008)  
	FName                                              IdleAnimationName;                                          // 0x0330   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x033C   (0x0004)  MISSED
	FKey                                               InputKey;                                                   // 0x0340   (0x0020)  
	FKey                                               InputKey2;                                                  // 0x0360   (0x0020)  
	FKey                                               InputKey3;                                                  // 0x0380   (0x0020)  
	FKey                                               InputKey4;                                                  // 0x03A0   (0x0020)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x03C0   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreInteractionPromptActionWidget.StopIdleAnimation
	// void StopIdleAnimation();                                                                                             // [0x4ba40a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey4
	// void SetInputKey4(FKey& InputKey4);                                                                                   // [0x4ba3a50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey3
	// void SetInputKey3(FKey& InputKey3);                                                                                   // [0x4ba3980] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey2
	// void SetInputKey2(FKey& InputKey2);                                                                                   // [0x4ba38b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreInteractionPromptActionWidget.SetInputKey
	// void SetInputKey(FKey& InputKey);                                                                                     // [0x4ba3bf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreInteractionPromptActionWidget.PlayIdleAnimation
	// void PlayIdleAnimation();                                                                                             // [0x4ba33e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreInteractionPromptActionWidget.HasThirdPrompt
	// bool HasThirdPrompt();                                                                                                // [0x4ba2c30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewsCore.CoreInteractionPromptActionWidget.HasSecondPrompt
	// bool HasSecondPrompt();                                                                                               // [0x4ba2bc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewsCore.CoreInteractionPromptActionWidget.HasFourthPrompt
	// bool HasFourthPrompt();                                                                                               // [0x4ba2b50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewsCore.CoreInteractionPromptsContainerWidget
/// Size: 0x00D0 (0x000328 - 0x0003F8)
class UCoreInteractionPromptsContainerWidget : public UCoreBaseHudWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0328   (0x0010)  MISSED
	class UDBDWrapBox*                                 CenterContainerBox;                                         // 0x0338   (0x0008)  
	class UDBDWrapBox*                                 ContainerBox;                                               // 0x0340   (0x0008)  
	class UClass*                                      InteractionPromptWidgetClass;                               // 0x0348   (0x0008)  
	int32_t                                            MaxDisplayedPrompts;                                        // 0x0350   (0x0004)  
	int32_t                                            MaxDisplayedCenterPrompts;                                  // 0x0354   (0x0004)  
	FMargin                                            SlotMargin;                                                 // 0x0358   (0x0010)  
	TArray<FInteractionPromptViewData>                 _promptViewDataList;                                        // 0x0368   (0x0010)  
	TArray<FInteractionPromptViewData>                 _centerPromptViewDataList;                                  // 0x0378   (0x0010)  
	TArray<class UCoreInteractionPromptWidget*>        _promptWidgets;                                             // 0x0388   (0x0010)  
	TArray<class UCoreInteractionPromptWidget*>        _centerPromptWidgets;                                       // 0x0398   (0x0010)  
	SDK_UNDEFINED(80,3323) /* TMap<FName, UCoreInteractionPromptWidget*> */ __um(_displayedPromptsMap);            // 0x03A8   (0x0050)  
};

/// Class /Script/DBDUIViewsCore.CoreInteractionPromptWidget
/// Size: 0x0020 (0x000298 - 0x0002B8)
class UCoreInteractionPromptWidget : public UUserWidget
{ 
public:
	float                                              LargeTextScale;                                             // 0x0298   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x029C   (0x0004)  MISSED
	class UScaleBox*                                   LargeTextScaleBox;                                          // 0x02A0   (0x0008)  
	class UDBDTextBlock*                               ActionTB;                                                   // 0x02A8   (0x0008)  
	class UDBDTextManager*                             _textManager;                                               // 0x02B0   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreInteractionPromptWidget.SetData
	// void SetData(FInteractionPromptViewData& Data);                                                                       // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreInteractionPromptWidget.OnLargeTextSettingsChanged
	// void OnLargeTextSettingsChanged(bool isLargeTextEnabled);                                                             // [0x4ba83a0] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreInteractionPromptWidget.ClearData
	// void ClearData();                                                                                                     // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CoreItemBundleWidget
/// Size: 0x0008 (0x000310 - 0x000318)
class UCoreItemBundleWidget : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0310   (0x0008)  MISSED
};

/// Class /Script/DBDUIViewsCore.CoreItemInteractionWidget
/// Size: 0x0008 (0x000328 - 0x000330)
class UCoreItemInteractionWidget : public UCoreBaseHudWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0328   (0x0008)  MISSED
};

/// Class /Script/DBDUIViewsCore.CoreItemWidget
/// Size: 0x0008 (0x0002B0 - 0x0002B8)
class UCoreItemWidget : public UCoreBaseLoadoutPartWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x02B0   (0x0008)  MISSED
};

/// Class /Script/DBDUIViewsCore.CoreLeaningArrowsWidget
/// Size: 0x0008 (0x000328 - 0x000330)
class UCoreLeaningArrowsWidget : public UCoreBaseHudWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0328   (0x0008)  MISSED
};

/// Class /Script/DBDUIViewsCore.CoreLightSensitivityWidget
/// Size: 0x0030 (0x000310 - 0x000340)
class UCoreLightSensitivityWidget : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0310   (0x0008)  MISSED
	TArray<class UDBDRichTextBlock*>                   _lightSensitivityRichTextBlocks;                            // 0x0318   (0x0010)  
	class UWidgetAnimation*                            FadeOutAnim;                                                // 0x0328   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0330   (0x0010)  MISSED
};

/// Class /Script/DBDUIViewsCore.CoreLockedOverlayWidget
/// Size: 0x0000 (0x000310 - 0x000310)
class UCoreLockedOverlayWidget : public UCoreBaseUserWidget
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreLockedOverlayWidget.SetIsLocked
	// void SetIsLocked(bool IsLocked, bool useAnimation);                                                                   // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CoreMainMenuButtonWidget
/// Size: 0x0010 (0x000408 - 0x000418)
class UCoreMainMenuButtonWidget : public UCoreButtonWidget
{ 
public:
	class UDBDTextBlock*                               TimerTB;                                                    // 0x0408   (0x0008)  
	class UDBDTextBlock*                               BonusTB;                                                    // 0x0410   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreMainMenuButtonWidget.SetButtonData
	// void SetButtonData(FMainMenuButtonViewData& buttonData);                                                              // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CoreMainMenuWidget
/// Size: 0x0098 (0x000310 - 0x0003A8)
class UCoreMainMenuWidget : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0310   (0x0008)  MISSED
	class UCoreMainMenuButtonWidget*                   PlayButton;                                                 // 0x0318   (0x0008)  
	class UCoreMainMenuButtonWidget*                   PlayLimitedTimeEventButton;                                 // 0x0320   (0x0008)  
	class UCoreMainMenuButtonWidget*                   TutorialButton;                                             // 0x0328   (0x0008)  
	class UCoreMainMenuButtonWidget*                   ArchivesButton;                                             // 0x0330   (0x0008)  
	class UCoreMainMenuButtonWidget*                   StoreButton;                                                // 0x0338   (0x0008)  
	class UCoreMainMenuButtonWidget*                   PlayKillerButton;                                           // 0x0340   (0x0008)  
	class UCoreMainMenuButtonWidget*                   PlaySurvivorButton;                                         // 0x0348   (0x0008)  
	class UCoreMainMenuButtonWidget*                   PlayCustomGameButton;                                       // 0x0350   (0x0008)  
	class UCoreMainMenuButtonWidget*                   PlayLimitedTimeEventKillerButton;                           // 0x0358   (0x0008)  
	class UCoreMainMenuButtonWidget*                   PlayLimitedTimeEventSurvivorButton;                         // 0x0360   (0x0008)  
	class UCoreMainMenuButtonWidget*                   EventButton;                                                // 0x0368   (0x0008)  
	class UCoreButtonWidget*                           DailyRitualsButton;                                         // 0x0370   (0x0008)  
	class UCoreButtonWidget*                           FriendsButton;                                              // 0x0378   (0x0008)  
	class UCoreButtonWidget*                           SettingsButton;                                             // 0x0380   (0x0008)  
	class UCoreButtonWidget*                           NewsButton;                                                 // 0x0388   (0x0008)  
	class UCoreButtonWidget*                           CreditsButton;                                              // 0x0390   (0x0008)  
	class UCoreButtonWidget*                           ExitButton;                                                 // 0x0398   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x03A0   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreMainMenuWidget.ShowPlaySubMenu
	// void ShowPlaySubMenu(bool Open);                                                                                      // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreMainMenuWidget.ShowLimitedTimeEventSubMenu
	// void ShowLimitedTimeEventSubMenu(bool Open);                                                                          // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreMainMenuWidget.OnTutorialButtonClicked
	// void OnTutorialButtonClicked(class UCoreButtonWidget* Target);                                                        // [0x4ba89d0] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreMainMenuWidget.OnStoreButtonClicked
	// void OnStoreButtonClicked(class UCoreButtonWidget* Target);                                                           // [0x4ba8940] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreMainMenuWidget.OnSettingsButtonClicked
	// void OnSettingsButtonClicked(class UCoreButtonWidget* Target);                                                        // [0x4ba88b0] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreMainMenuWidget.OnPlaySurvivorButtonClicked
	// void OnPlaySurvivorButtonClicked(class UCoreButtonWidget* Target);                                                    // [0x4ba8820] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreMainMenuWidget.OnPlayLimitedTimeEventSurvivorButtonClicked
	// void OnPlayLimitedTimeEventSurvivorButtonClicked(class UCoreButtonWidget* Target);                                    // [0x4ba8790] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreMainMenuWidget.OnPlayLimitedTimeEventKillerButtonClicked
	// void OnPlayLimitedTimeEventKillerButtonClicked(class UCoreButtonWidget* Target);                                      // [0x4ba8700] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreMainMenuWidget.OnPlayLimitedTimeEventButtonClicked
	// void OnPlayLimitedTimeEventButtonClicked(class UCoreButtonWidget* Target);                                            // [0x4ba8670] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreMainMenuWidget.OnPlayKillerButtonClicked
	// void OnPlayKillerButtonClicked(class UCoreButtonWidget* Target);                                                      // [0x4ba85e0] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreMainMenuWidget.OnPlayCustomButtonClicked
	// void OnPlayCustomButtonClicked(class UCoreButtonWidget* Target);                                                      // [0x4ba8550] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreMainMenuWidget.OnPlayButtonClicked
	// void OnPlayButtonClicked(class UCoreButtonWidget* Target);                                                            // [0x4ba84c0] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreMainMenuWidget.OnNewsButtonClicked
	// void OnNewsButtonClicked(class UCoreButtonWidget* Target);                                                            // [0x4ba8430] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreMainMenuWidget.OnFriendsButtonClicked
	// void OnFriendsButtonClicked(class UCoreButtonWidget* Target);                                                         // [0x4ba8310] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreMainMenuWidget.OnExitButtonClicked
	// void OnExitButtonClicked(class UCoreButtonWidget* Target);                                                            // [0x4ba8280] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreMainMenuWidget.OnEventButtonClicked
	// void OnEventButtonClicked(class UCoreButtonWidget* Target);                                                           // [0x4ba81f0] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreMainMenuWidget.OnDailyRitualsButtonClicked
	// void OnDailyRitualsButtonClicked(class UCoreButtonWidget* Target);                                                    // [0x4ba8160] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreMainMenuWidget.OnCreditsButtonClicked
	// void OnCreditsButtonClicked(class UCoreButtonWidget* Target);                                                         // [0x4ba80d0] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreMainMenuWidget.OnArchivesButtonClicked
	// void OnArchivesButtonClicked(class UCoreButtonWidget* Target);                                                        // [0x4ba8040] Final|Native|Private 
};

/// Class /Script/DBDUIViewsCore.CoreMatchResultWidget
/// Size: 0x00D8 (0x000328 - 0x000400)
class UCoreMatchResultWidget : public UCoreBaseHudWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0328   (0x0008)  MISSED
	SDK_UNDEFINED(24,3324) /* FText */                 __um(_survivorDefaultResultText);                           // 0x0330   (0x0018)  
	SDK_UNDEFINED(80,3325) /* TMap<EGameState, FText> */ __um(_survivorResultTexts);                               // 0x0348   (0x0050)  
	SDK_UNDEFINED(24,3326) /* FText */                 __um(_killerDefaultResultText);                             // 0x0398   (0x0018)  
	SDK_UNDEFINED(80,3327) /* TMap<EKillerMatchResult, FText> */ __um(_killerResultTexts);                         // 0x03B0   (0x0050)  
};

/// Class /Script/DBDUIViewsCore.CoreMenuLoadoutPartWidget
/// Size: 0x0108 (0x000440 - 0x000548)
class UCoreMenuLoadoutPartWidget : public UCoreSelectableButtonWidget
{ 
public:
	ELoadoutSlot                                       slotIndex;                                                  // 0x0440   (0x0001)  
	ETooltipHorizontalAlignment                        HorizontalAlignment;                                        // 0x0441   (0x0001)  
	ETooltipVerticalAlignment                          VerticalAlignment;                                          // 0x0442   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0443   (0x0005)  MISSED
	FLoadoutTooltipData                                _loadoutTooltipViewData;                                    // 0x0448   (0x0090)  
	class UDBDImage*                                   RarityIMG;                                                  // 0x04D8   (0x0008)  
	class UDBDImage*                                   IconIMG;                                                    // 0x04E0   (0x0008)  
	class UDBDImage*                                   KillSwitchIMG;                                              // 0x04E8   (0x0008)  
	class UDBDImage*                                   lockedIcon;                                                 // 0x04F0   (0x0008)  
	class UDBDImage*                                   Background;                                                 // 0x04F8   (0x0008)  
	class UDBDImage*                                   ShadowOffset;                                               // 0x0500   (0x0008)  
	class UGridPanel*                                  Selected;                                                   // 0x0508   (0x0008)  
	class UScaleBox*                                   LayoutScale;                                                // 0x0510   (0x0008)  
	class UCoreOnHoverBorderWidget*                    OnHoverBorder;                                              // 0x0518   (0x0008)  
	class UTextBlock*                                  StackCountTB;                                               // 0x0520   (0x0008)  
	class UDBDImage*                                   PlusSignIcon;                                               // 0x0528   (0x0008)  
	class UTexture2D*                                  RarityTexture;                                              // 0x0530   (0x0008)  
	FName                                              _itemId;                                                    // 0x0538   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0544   (0x0004)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetSelectedState
	// void SetSelectedState(bool selectedState);                                                                            // [0x4ba96a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetLoadoutPartTooltipData
	// void SetLoadoutPartTooltipData(FLoadoutTooltipData& TooltipData);                                                     // [0x4ba9100] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetLoadoutPartScale
	// void SetLoadoutPartScale(float Scale);                                                                                // [0x4ba9080] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetLoadoutPartData
	// void SetLoadoutPartData(class UMenuLoadoutPartViewData* Data);                                                        // [0x4ba8ff0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetIsPerkSurfacingExperimentActive
	// void SetIsPerkSurfacingExperimentActive(bool isPerkSurfacingExperimentActive);                                        // [0x4ba8cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetEmptyWidget
	// void SetEmptyWidget();                                                                                                // [0x4ba8c00] Final|Native|Public  
	// Function /Script/DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetDisabledWidget
	// void SetDisabledWidget();                                                                                             // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetBackgroundShadowLayers
	// void SetBackgroundShadowLayers();                                                                                     // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreMenuLoadoutPartWidget.SetBackgroundLayers
	// void SetBackgroundLayers();                                                                                           // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreMenuLoadoutPartWidget.GetWidgetLockedState
	// bool GetWidgetLockedState();                                                                                          // [0x4ba7f60] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreMenuLoadoutPartWidget.GetWidgetItemId
	// FName GetWidgetItemId();                                                                                              // [0x4ba7f30] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreMenuLoadoutPartWidget.GetTooltipData
	// FLoadoutTooltipData GetTooltipData();                                                                                 // [0x4ba7cc0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CoreMenuAddonWidget
/// Size: 0x0028 (0x000548 - 0x000570)
class UCoreMenuAddonWidget : public UCoreMenuLoadoutPartWidget
{ 
public:
	class UDBDImage*                                   DisabledState;                                              // 0x0548   (0x0008)  
	float                                              _addonInventoryScale;                                       // 0x0550   (0x0004)  
	unsigned char                                      UnknownData00_6[0x1C];                                      // 0x0554   (0x001C)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreMenuAddonWidget.UpdateWidgetScale
	// void UpdateWidgetScale();                                                                                             // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreMenuAddonWidget.SetWhitePlusIconVisibility
	// void SetWhitePlusIconVisibility(bool IsVisible);                                                                      // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreMenuAddonWidget.SetMenuAddonTooltipData
	// void SetMenuAddonTooltipData(FLoadoutTooltipData& TooltipData);                                                       // [0x4ba9290] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreMenuAddonWidget.SetMenuAddonData
	// void SetMenuAddonData(class UMenuAddonViewData* Data);                                                                // [0x4ba9200] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreMenuAddonWidget.SetAddonDisabled
	// void SetAddonDisabled(bool IsParentAvailable);                                                                        // [0x4ba8b70] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreMenuAddonWidget.GetWidgetParentDisplayName
	// FText GetWidgetParentDisplayName();                                                                                   // [0x4ba7f80] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CoreMenuItemWidget
/// Size: 0x0000 (0x000548 - 0x000548)
class UCoreMenuItemWidget : public UCoreMenuLoadoutPartWidget
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreMenuItemWidget.SetMenuItemTooltipData
	// void SetMenuItemTooltipData(FLoadoutTooltipData& TooltipData);                                                        // [0x4ba9290] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreMenuItemWidget.SetMenuItemData
	// void SetMenuItemData(class UMenuItemViewData* Data);                                                                  // [0x4ba9390] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CoreMenuOfferingWidget
/// Size: 0x0000 (0x000548 - 0x000548)
class UCoreMenuOfferingWidget : public UCoreMenuLoadoutPartWidget
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreMenuOfferingWidget.SetMenuOfferingTooltipData
	// void SetMenuOfferingTooltipData(FLoadoutTooltipData& TooltipData);                                                    // [0x4ba9290] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreMenuOfferingWidget.SetMenuOfferingData
	// void SetMenuOfferingData(class UMenuOfferingViewData* Data);                                                          // [0x4ba9420] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CoreMenuPerkWidget
/// Size: 0x0000 (0x000548 - 0x000548)
class UCoreMenuPerkWidget : public UCoreMenuLoadoutPartWidget
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreMenuPerkWidget.SetMenuPerkTooltipData
	// void SetMenuPerkTooltipData(FLoadoutTooltipData& TooltipData);                                                        // [0x4ba9290] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreMenuPerkWidget.SetMenuPerkLevel
	// void SetMenuPerkLevel(int32_t Level);                                                                                 // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreMenuPerkWidget.SetMenuPerkData
	// void SetMenuPerkData(class UMenuPerkViewData* Data);                                                                  // [0x4ba94b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreMenuPerkWidget.SetEmptyPerk
	// void SetEmptyPerk();                                                                                                  // [0x61c32d0] Event|Public|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CoreMenuPowerWidget
/// Size: 0x0000 (0x000548 - 0x000548)
class UCoreMenuPowerWidget : public UCoreMenuLoadoutPartWidget
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreMenuPowerWidget.SetMenuPowerTooltipData
	// void SetMenuPowerTooltipData(FLoadoutTooltipData& TooltipData);                                                       // [0x4ba9290] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreMenuPowerWidget.SetMenuPowerData
	// void SetMenuPowerData(class UMenuPowerViewData* Data);                                                                // [0x4ba9540] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CoreOfferingInteractionWidget
/// Size: 0x0008 (0x000328 - 0x000330)
class UCoreOfferingInteractionWidget : public UCoreBaseHudWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0328   (0x0008)  MISSED
};

/// Class /Script/DBDUIViewsCore.CoreOfferingWidget
/// Size: 0x0008 (0x0002B0 - 0x0002B8)
class UCoreOfferingWidget : public UCoreBaseLoadoutPartWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x02B0   (0x0008)  MISSED
};

/// Class /Script/DBDUIViewsCore.CoreOnboardingButtonHolderWidget
/// Size: 0x0030 (0x000310 - 0x000340)
class UCoreOnboardingButtonHolderWidget : public UCoreBaseUserWidget
{ 
public:
	SDK_UNDEFINED(16,3328) /* FMulticastInlineDelegate */ __um(OnTutorialButtonClickedDelegate);                   // 0x0310   (0x0010)  
	SDK_UNDEFINED(16,3329) /* FMulticastInlineDelegate */ __um(OnSetDataAnimationCompleteDelegate);                // 0x0320   (0x0010)  
	TArray<class UCoreOnboardingTutorialButtonWidget*> TutorialButtons;                                            // 0x0330   (0x0010)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreOnboardingButtonHolderWidget.OnClickedTutorialButton
	// void OnClickedTutorialButton(class UCoreButtonWidget* clickedTutorialButton);                                         // [0x4bae370] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.CoreOnboardingButtonHolderWidget.OnButtonSetDataAnimationCompleteDelegate
	// void OnButtonSetDataAnimationCompleteDelegate();                                                                      // [0x4bae350] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.CoreOnboardingButtonHolderWidget.GetStepId
	// FString GetStepId();                                                                                                  // [0x4bae280] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CoreOnboardingMenuTitleWidget
/// Size: 0x0000 (0x000310 - 0x000310)
class UCoreOnboardingMenuTitleWidget : public UCoreBaseUserWidget
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuTitle
	// void SetOnboardingMenuTitle(FText& menuTitle);                                                                        // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuSubtitle
	// void SetOnboardingMenuSubtitle(FText& menuTitle);                                                                     // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreOnboardingMenuTitleWidget.SetOnboardingMenuDoubleTitle
	// void SetOnboardingMenuDoubleTitle(FText& menuTitle, FText& menuSubTitle);                                             // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreOnboardingMenuTitleWidget.ResetOnboardingMenuSubtitle
	// void ResetOnboardingMenuSubtitle();                                                                                   // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CoreOnboardingMenuWidget
/// Size: 0x00A0 (0x000310 - 0x0003B0)
class UCoreOnboardingMenuWidget : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0310   (0x0008)  MISSED
	class UCoreTabContainerWidget*                     OnboardingMenuTabs;                                         // 0x0318   (0x0008)  
	class UCoreOnboardingMenuTitleWidget*              menuTitle;                                                  // 0x0320   (0x0008)  
	class UCoreInputSwitcherWidget*                    BackInputSwitcher;                                          // 0x0328   (0x0008)  
	class UCoreFooterInputSwitcherWidget*              SettingsInputSwitcher;                                      // 0x0330   (0x0008)  
	class UCoreFooterInputSwitcherWidget*              QuitGameInputSwitcher;                                      // 0x0338   (0x0008)  
	class UCoreInputSwitcherWidget*                    ChangeAccountInputSwitcher;                                 // 0x0340   (0x0008)  
	SDK_UNDEFINED(16,3330) /* FMulticastInlineDelegate */ __um(BackActionDelegate);                                // 0x0348   (0x0010)  
	SDK_UNDEFINED(16,3331) /* FMulticastInlineDelegate */ __um(SettingsActionDelegate);                            // 0x0358   (0x0010)  
	SDK_UNDEFINED(16,3332) /* FMulticastInlineDelegate */ __um(QuitGameActionDelegate);                            // 0x0368   (0x0010)  
	SDK_UNDEFINED(16,3333) /* FMulticastInlineDelegate */ __um(ChangeAccountActionDelegate);                       // 0x0378   (0x0010)  
	SDK_UNDEFINED(16,3334) /* FMulticastInlineDelegate */ __um(MenuTabSelectedDelegate);                           // 0x0388   (0x0010)  
	SDK_UNDEFINED(16,3335) /* FMulticastInlineDelegate */ __um(MenuTabSelectedAgainDelegate);                      // 0x0398   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x03A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreOnboardingMenuWidget.SetTitleText
	// void SetTitleText(bool IsInTutorial);                                                                                 // [0x4baeab0] Final|Native|Private|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreOnboardingMenuWidget.SetBackButton
	// void SetBackButton(bool isFTUE);                                                                                      // [0x4bae880] Final|Native|Private|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreOnboardingMenuWidget.OnMenuTabSelectedAgain
	// void OnMenuTabSelectedAgain(class UCoreSelectableButtonWidget* selectedButton);                                       // [0x4bae490] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreOnboardingMenuWidget.OnMenuTabSelected
	// void OnMenuTabSelected(class UCoreSelectableButtonWidget* selectedButton);                                            // [0x4bae400] Final|Native|Private 
};

/// Struct /Script/DBDUIViewsCore.OnboardingTutorialButtonViewData
/// Size: 0x0078 (0x000000 - 0x000078)
struct FOnboardingTutorialButtonViewData
{ 
	EOnboardingStepStatus                              StepStatus;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,3336) /* FString */               __um(stepId);                                               // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,3337) /* FString */               __um(tutorialId);                                           // 0x0018   (0x0010)  
	SDK_UNDEFINED(24,3338) /* FText */                 __um(Title);                                                // 0x0028   (0x0018)  
	SDK_UNDEFINED(24,3339) /* FText */                 __um(Description);                                          // 0x0040   (0x0018)  
	class UTexture2D*                                  Icon;                                                       // 0x0058   (0x0008)  
	TArray<FRewardWrapperViewData>                     RewardsData;                                                // 0x0060   (0x0010)  
	EOnboardingTutorialButtonStyle                     ButtonStyle;                                                // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/DBDUIViewsCore.CoreOnboardingTutorialButtonWidget
/// Size: 0x00E8 (0x000408 - 0x0004F0)
class UCoreOnboardingTutorialButtonWidget : public UCoreButtonWidget
{ 
public:
	SDK_UNDEFINED(16,3340) /* FMulticastInlineDelegate */ __um(OnSetDataAnimationCompleteDelegate);                // 0x0408   (0x0010)  
	SDK_UNDEFINED(16,3341) /* FString */               __um(UnavailablePressedSfxName);                            // 0x0418   (0x0010)  
	class UAkAudioEvent*                               UnavailablePressedSfx;                                      // 0x0428   (0x0008)  
	class UDBDTextBlock*                               titleText;                                                  // 0x0430   (0x0008)  
	class UDBDTextBlock*                               descriptionText;                                            // 0x0438   (0x0008)  
	class UDBDTextBlock*                               RewardsText;                                                // 0x0440   (0x0008)  
	class UDBDImage*                                   RoleIcon;                                                   // 0x0448   (0x0008)  
	class UWidgetSwitcher*                             StateSwitcher;                                              // 0x0450   (0x0008)  
	class UDBDImage*                                   LockedImage;                                                // 0x0458   (0x0008)  
	class UDBDImage*                                   CompletedImage;                                             // 0x0460   (0x0008)  
	TArray<class UCoreRewardWrapperWidget*>            RewardWrappers;                                             // 0x0468   (0x0010)  
	FOnboardingTutorialButtonViewData                  ViewData;                                                   // 0x0478   (0x0078)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetVisual
	// void SetVisual();                                                                                                     // [0x4baeb40] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetUIEnabled
	// void SetUIEnabled(bool Enabled);                                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetIsKillSwitch
	// void SetIsKillSwitch(bool IsKillSwitch);                                                                              // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.SetData
	// void SetData(FOnboardingTutorialButtonViewData& ViewData, bool isRefreshingWithAnimation);                            // [0x61c32d0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardReleased
	// void OnRewardReleased(class UCoreButtonWidget* buttonTarget);                                                         // [0x4bae7f0] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardPressed
	// void OnRewardPressed(class UCoreButtonWidget* buttonTarget);                                                          // [0x4bae760] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.OnRewardClicked
	// void OnRewardClicked(class UCoreButtonWidget* buttonTarget);                                                          // [0x4bae6d0] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreOnboardingTutorialButtonWidget.IsInUnavailableStep
	// bool IsInUnavailableStep();                                                                                           // [0x4bae300] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/DBDUIViewsCore.PendingStepData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPendingStepData
{ 
	TArray<FOnboardingTutorialButtonViewData>          updatedButtonViewData;                                      // 0x0000   (0x0010)  
};

/// Class /Script/DBDUIViewsCore.CoreOnboardingTutorialPanelWidget
/// Size: 0x0070 (0x000310 - 0x000380)
class UCoreOnboardingTutorialPanelWidget : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0310   (0x0008)  MISSED
	TArray<class UOverlay*>                            OnboardingButtonHolderContainers;                           // 0x0318   (0x0010)  
	SDK_UNDEFINED(16,3342) /* FMulticastInlineDelegate */ __um(TutorialSelectedDelegate);                          // 0x0328   (0x0010)  
	class UUserWidget*                                 LoadingWidget;                                              // 0x0338   (0x0008)  
	float                                              _arrowHighlightRenderOpacity;                               // 0x0340   (0x0004)  
	float                                              _arrowUnhighlightRenderOpacity;                             // 0x0344   (0x0004)  
	class UClass*                                      _oneTutorialButtonHolderWidgetClass;                        // 0x0348   (0x0008)  
	class UClass*                                      _twoTutorialButtonHolderWidgetClass;                        // 0x0350   (0x0008)  
	TArray<class UCoreOnboardingButtonHolderWidget*>   _onboardingButtonHolderWidgets;                             // 0x0358   (0x0010)  
	TArray<FPendingStepData>                           _pendingData;                                               // 0x0368   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0378   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.TryBroadcastSelectedTutorial
	// void TryBroadcastSelectedTutorial(class UCoreButtonWidget* buttonTarget);                                             // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.SetTutorialSeparators
	// void SetTutorialSeparators(FString completedStepId);                                                                  // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.SetTutorialDescription
	// void SetTutorialDescription(FText& Description, bool isWarning);                                                      // [0x61c32d0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.NextPendingButtonUpdated
	// void NextPendingButtonUpdated();                                                                                      // [0x4bae330] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreOnboardingTutorialPanelWidget.CheckNextPendingButtonUpdate
	// void CheckNextPendingButtonUpdate();                                                                                  // [0x4bae0f0] Final|Native|Private 
};

/// Class /Script/DBDUIViewsCore.CoreOnHoverBorderWidget
/// Size: 0x0000 (0x000310 - 0x000310)
class UCoreOnHoverBorderWidget : public UCoreBaseUserWidget
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreOnHoverBorderWidget.UpdateColors
	// void UpdateColors(FLinearColor& progressBarColor, FLinearColor& BackgroundColor);                                     // [0x61c32d0] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreOnHoverBorderWidget.UnbindFromButton
	// void UnbindFromButton();                                                                                              // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreOnHoverBorderWidget.PlayPressedAnimation
	// void PlayPressedAnimation(bool playForward);                                                                          // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreOnHoverBorderWidget.PlayHoveredAnimation
	// void PlayHoveredAnimation(bool playForward);                                                                          // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreOnHoverBorderWidget.BindToButton
	// void BindToButton(class UCoreButtonWidget* buttonToBindOn);                                                           // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CorePaginationContainerWidget
/// Size: 0x00D8 (0x000360 - 0x000438)
class UCorePaginationContainerWidget : public UCoreButtonSelector
{ 
public:
	SDK_UNDEFINED(16,3343) /* FMulticastInlineDelegate */ __um(OnSelectedPageDelegate);                            // 0x0360   (0x0010)  
	class UClass*                                      PaginationWidgetClass;                                      // 0x0370   (0x0008)  
	int32_t                                            MaxNumberOfPages;                                           // 0x0378   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x037C   (0x0004)  MISSED
	class UGridPanel*                                  PaginationContainer;                                        // 0x0380   (0x0008)  
	class UCoreSelectableButtonWidget*                 FirstPage;                                                  // 0x0388   (0x0008)  
	class UDBDTextBlock*                               FirstEllipsis;                                              // 0x0390   (0x0008)  
	class UDBDTextBlock*                               LastEllipsis;                                               // 0x0398   (0x0008)  
	class UCoreSelectableButtonWidget*                 LastPage;                                                   // 0x03A0   (0x0008)  
	FMargin                                            _widgetPadding;                                             // 0x03A8   (0x0010)  
	TArray<class UCoreSelectableButtonWidget*>         _paginationWidgetList;                                      // 0x03B8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x70];                                      // 0x03C8   (0x0070)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CorePaginationContainerWidget.UpdateSelectedWidget
	// void UpdateSelectedWidget(int32_t currentIndex, int32_t numberOfPages);                                               // [0x4baeb60] Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CorePaginationContainerWidget.OnSelectedPageDelegate__DelegateSignature
	// void OnSelectedPageDelegate__DelegateSignature(int32_t selectedPage, bool isUpdate);                                  // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/DBDUIViewsCore.CorePaginationContainerWidget.OnPaginationSelected
	// void OnPaginationSelected(class UCoreSelectableButtonWidget* selectedButton);                                         // [0x4bae520] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CorePaginationContainerWidget.GetCurrentPage
	// int32_t GetCurrentPage();                                                                                             // [0x4bae260] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CorePerksContainerWidget
/// Size: 0x0028 (0x000328 - 0x000350)
class UCorePerksContainerWidget : public UCoreBaseHudWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0328   (0x0008)  MISSED
	TArray<class UCorePerkWidget*>                     PerkWidgets;                                                // 0x0330   (0x0010)  
	SDK_UNDEFINED(16,3344) /* TArray<TScriptInterface<Class>> */ __um(_perkViewInterfaces);                        // 0x0340   (0x0010)  
};

/// Class /Script/DBDUIViewsCore.CorePerkWidget
/// Size: 0x0008 (0x0002B0 - 0x0002B8)
class UCorePerkWidget : public UCoreBaseLoadoutPartWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x02B0   (0x0008)  MISSED
};

/// Class /Script/DBDUIViewsCore.CorePingStatusWidget
/// Size: 0x0008 (0x000328 - 0x000330)
class UCorePingStatusWidget : public UCoreBaseHudWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0328   (0x0008)  MISSED
};

/// Class /Script/DBDUIViewsCore.CorePlayerCardAnimationWidget
/// Size: 0x0008 (0x000310 - 0x000318)
class UCorePlayerCardAnimationWidget : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0310   (0x0008)  MISSED
};

/// Class /Script/DBDUIViewsCore.CorePlayerCardWidget
/// Size: 0x0018 (0x000310 - 0x000328)
class UCorePlayerCardWidget : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0310   (0x0008)  MISSED
	class UDBDImage*                                   Icon;                                                       // 0x0318   (0x0008)  
	class UOverlay*                                    AnimationContainer;                                         // 0x0320   (0x0008)  
};

/// Class /Script/DBDUIViewsCore.CorePlayerExpGaugeWidget
/// Size: 0x0048 (0x000310 - 0x000358)
class UCorePlayerExpGaugeWidget : public UCoreBaseUserWidget
{ 
public:
	SDK_UNDEFINED(20,3345) /* FDelegateProperty */     __um(_onPlayerExpUpdateCompletedDelegate);                  // 0x0310   (0x0014)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0324   (0x0004)  MISSED
	SDK_UNDEFINED(24,3346) /* FText */                 __um(XpText);                                               // 0x0328   (0x0018)  
	SDK_UNDEFINED(24,3347) /* FText */                 __um(ProgressText);                                         // 0x0340   (0x0018)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CorePlayerExpGaugeWidget.SetViewData
	// void SetViewData(FPlayerLevelViewData& playerViewData);                                                               // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CorePlayerExpGaugeWidget.OnUpdateProgress
	// void OnUpdateProgress(class UUITweenInstance* tween);                                                                 // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CorePlayerExpGaugeWidget.OnUpdateComplete
	// void OnUpdateComplete(class UUITweenInstance* tween);                                                                 // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CorePlayerExpGaugeWidget.OnPlayerExpUpdateCompleted__DelegateSignature
	// void OnPlayerExpUpdateCompleted__DelegateSignature();                                                                 // [0x61c32d0] Public|Delegate      
	// Function /Script/DBDUIViewsCore.CorePlayerExpGaugeWidget.Add
	// void Add(int32_t bonusXp);                                                                                            // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CorePlayerLevelTooltipWidget
/// Size: 0x0040 (0x000320 - 0x000360)
class UCorePlayerLevelTooltipWidget : public UTooltipWidget
{ 
public:
	class UDBDTextBlock*                               TitleTB;                                                    // 0x0320   (0x0008)  
	class UDBDTextBlock*                               XPCurrentTitleTB;                                           // 0x0328   (0x0008)  
	class UDBDTextBlock*                               XPTB;                                                       // 0x0330   (0x0008)  
	class UDBDTextBlock*                               XPNextTitleTB;                                              // 0x0338   (0x0008)  
	class UDBDTextBlock*                               NextXpTB;                                                   // 0x0340   (0x0008)  
	class UDBDTextBlock*                               PlayerLevelTitleTB;                                         // 0x0348   (0x0008)  
	class UDBDTextBlock*                               PrestigeTitleTB;                                            // 0x0350   (0x0008)  
	class UDBDRichTextBlock*                           InfoTB;                                                     // 0x0358   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CorePlayerLevelTooltipWidget.SetTooltipData
	// void SetTooltipData(FCorePlayerLevelTooltipViewData& ViewData);                                                       // [0x61c32d0] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CorePlayerLevelWidget
/// Size: 0x0000 (0x000408 - 0x000408)
class UCorePlayerLevelWidget : public UCoreButtonWidget
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewsCore.CorePlayerLevelWidget.SetData
	// void SetData(FPlayerLevelViewData& ViewData);                                                                         // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CorePlayerLevelWidget.AnimateLevelUp
	// void AnimateLevelUp();                                                                                                // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CorePlayerNameWidget
/// Size: 0x0008 (0x000310 - 0x000318)
class UCorePlayerNameWidget : public UCoreBaseUserWidget
{ 
public:
	class UDBDTextBlock*                               PlayerNameTB;                                               // 0x0310   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CorePlayerNameWidget.SetPlayerName
	// void SetPlayerName(FText& playerName);                                                                                // [0x4bae910] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CorePlayerProfileWidget
/// Size: 0x0048 (0x000310 - 0x000358)
class UCorePlayerProfileWidget : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0310   (0x0008)  MISSED
	class UCoreButtonWidget*                           PlayerCardButton;                                           // 0x0318   (0x0008)  
	class UCoreWalletWidget*                           Wallet;                                                     // 0x0320   (0x0008)  
	class UCorePlayerNameWidget*                       playerName;                                                 // 0x0328   (0x0008)  
	SDK_UNDEFINED(16,3348) /* FMulticastInlineDelegate */ __um(_onPlayerProfileClickedDelegate);                   // 0x0330   (0x0010)  
	float                                              _playerCardEnabledOpacity;                                  // 0x0340   (0x0004)  
	float                                              _playerCardDisabledOpacity;                                 // 0x0344   (0x0004)  
	float                                              _playerProfileFocusOpacity;                                 // 0x0348   (0x0004)  
	float                                              _playerProfileUnfocusOpacity;                               // 0x034C   (0x0004)  
	bool                                               _isProfileMenuContextEntered;                               // 0x0350   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0351   (0x0007)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CorePlayerProfileWidget.SetBadgeBannerData
	// void SetBadgeBannerData(TWeakObjectPtr<UTexture2D*>& Badge, FPlayerCardViewData& Banner, bool showBanner);            // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CorePlayerProfileWidget.OnPlayerProfileClicked
	// void OnPlayerProfileClicked(class UCoreButtonWidget* Button);                                                         // [0x4bae640] Final|Native|Private|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CorePlayerProfileWidget.OnPlayerCardButtonUnhovered
	// void OnPlayerCardButtonUnhovered(class UCoreButtonWidget* Button);                                                    // [0x4b92ec0] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CorePlayerProfileWidget.OnPlayerCardButtonHovered
	// void OnPlayerCardButtonHovered(class UCoreButtonWidget* Button);                                                      // [0x4bae5b0] Final|Native|Private 
};

/// Struct /Script/DBDUIViewsCore.CoreRankWidgetConfiguration
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FCoreRankWidgetConfiguration
{ 
	SDK_UNDEFINED(80,3349) /* TMap<int32_t, FCoreRanksConfiguration> */ __um(SurvivorRanks);                       // 0x0000   (0x0050)  
	SDK_UNDEFINED(80,3350) /* TMap<int32_t, FCoreRanksConfiguration> */ __um(KillerRanks);                         // 0x0050   (0x0050)  
	SDK_UNDEFINED(80,3351) /* TMap<int32_t, UTexture2D*> */ __um(RankNumberImages);                                // 0x00A0   (0x0050)  
};

/// Class /Script/DBDUIViewsCore.CorePlayerRankWidget
/// Size: 0x0108 (0x000408 - 0x000510)
class UCorePlayerRankWidget : public UCoreButtonWidget
{ 
public:
	FCoreRankWidgetConfiguration                       _widgetConfiguration;                                       // 0x0408   (0x00F0)  
	bool                                               _showTooltipOnHover;                                        // 0x04F8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x04F9   (0x0007)  MISSED
	class UDBDImage*                                   LevelBG;                                                    // 0x0500   (0x0008)  
	class UDBDImage*                                   RankNumberImage;                                            // 0x0508   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CorePlayerRankWidget.SetRankImageAndText
	// void SetRankImageAndText(int32_t rankIndex, bool IsKiller);                                                           // [0x4bae9e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CorePlayerRankWidget.SetData
	// void SetData(FRankViewData& Data);                                                                                    // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CorePlayerRankWidget.GetConfiguration
	// FCoreRankWidgetConfiguration GetConfiguration();                                                                      // [0x4bae110] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewsCore.CorePlayerRankWidget.AnimateRankUp
	// void AnimateRankUp();                                                                                                 // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CorePlayerStatusesContainerWidget
/// Size: 0x0030 (0x000328 - 0x000358)
class UCorePlayerStatusesContainerWidget : public UCoreBaseHudWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0328   (0x0010)  MISSED
	TArray<class UCorePlayerStatusWidget*>             PlayerStatusWidgets;                                        // 0x0338   (0x0010)  
	SDK_UNDEFINED(16,3352) /* TArray<TScriptInterface<Class>> */ __um(_playerStatusViewInterfaces);                // 0x0348   (0x0010)  
};

/// Class /Script/DBDUIViewsCore.CorePlayerStatusKillerEffectWidget
/// Size: 0x0000 (0x000328 - 0x000328)
class UCorePlayerStatusKillerEffectWidget : public UCoreBaseHudWidget
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewsCore.CorePlayerStatusKillerEffectWidget.SetKillerData
	// void SetKillerData(FPlayerStatusViewData& Data);                                                                      // [0x61c32d0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CorePlayerStatusKillerEffectWidget.ClearVisual
	// void ClearVisual();                                                                                                   // [0x4b971a0] Native|Event|Protected|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CorePlayerStatusKillerEffectK07Widget
/// Size: 0x0000 (0x000328 - 0x000328)
class UCorePlayerStatusKillerEffectK07Widget : public UCorePlayerStatusKillerEffectWidget
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewsCore.CorePlayerStatusKillerEffectK07Widget.AfflictionHit
	// void AfflictionHit();                                                                                                 // [0x61c32d0] Event|Protected|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CorePlayerStatusWidget
/// Size: 0x0120 (0x000328 - 0x000448)
class UCorePlayerStatusWidget : public UCoreBaseHudWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0328   (0x0008)  MISSED
	int32_t                                            MaxNameLength;                                              // 0x0330   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0334   (0x0004)  MISSED
	SDK_UNDEFINED(80,3353) /* TMap<EPlayerStatus, FPlayerStatusAssets> */ __um(PlayerStatusAssets);                // 0x0338   (0x0050)  
	class UAkAudioEvent*                               ObsessionSfx;                                               // 0x0388   (0x0008)  
	class UDBDTextBlock*                               PlayerNameTextfield;                                        // 0x0390   (0x0008)  
	class UOverlay*                                    KillerStatusContainer;                                      // 0x0398   (0x0008)  
	FPlayerStatusViewData                              _cachedViewData;                                            // 0x03A0   (0x0048)  
	unsigned char                                      UnknownData02_5[0x50];                                      // 0x03E8   (0x0050)  MISSED
	class UCorePlayerStatusKillerEffectWidget*         _killerStatusEffectWidget;                                  // 0x0438   (0x0008)  
	class UDataTable*                                  _killerStatusDataMappingDB;                                 // 0x0440   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CorePlayerStatusWidget.ShouldPlaySleepAnimation
	// bool ShouldPlaySleepAnimation(ESleepingUIState newSleepState);                                                        // [0x4bb3ff0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewsCore.CorePlayerStatusWidget.HasTimerProgressChanged
	// bool HasTimerProgressChanged(float newTimerProgress);                                                                 // [0x4bb3380] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStatusDataChanged
	// bool HasPlayerStatusDataChanged(FPlayerStatusViewData& newViewData);                                                  // [0x4bb32a0] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewsCore.CorePlayerStatusWidget.HasPlayerStateChanged
	// bool HasPlayerStateChanged(EPlayerStatus newPlayerState);                                                             // [0x4bb3210] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewsCore.CorePlayerStatusWidget.HasObsessionStateChanged
	// bool HasObsessionStateChanged(EObsessionUIState newObsessionState);                                                   // [0x4bb3180] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewsCore.CorePlayerStatusWidget.HasKillerStatusDataChanged
	// bool HasKillerStatusDataChanged(FPlayerStatusViewData& newViewData);                                                  // [0x4bb30a0] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewsCore.CorePlayerStatusWidget.GetPlayerStateChangeType
	// EPlayerStateChangeType GetPlayerStateChangeType(FPlayerStatusViewData& newViewData);                                  // [0x4bb2e80] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewsCore.CorePlayerStatusWidget.GetKillerStatusEffectWidget
	// class UCorePlayerStatusKillerEffectWidget* GetKillerStatusEffectWidget();                                             // [0x4bb2e60] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewsCore.CorePlayerStatusWidget.GetKillerStatusDataMappingDB
	// class UDataTable* GetKillerStatusDataMappingDB();                                                                     // [0x4bb2e20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewsCore.CorePlayerStatusWidget.CacheViewData
	// FPlayerStatusViewData CacheViewData(FPlayerStatusViewData Data);                                                      // [0x4bb2b00] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CorePowerBundleWidget
/// Size: 0x0008 (0x000310 - 0x000318)
class UCorePowerBundleWidget : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0310   (0x0008)  MISSED
};

/// Class /Script/DBDUIViewsCore.CorePowerWidget
/// Size: 0x0008 (0x0002B0 - 0x0002B8)
class UCorePowerWidget : public UCoreBaseLoadoutPartWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x02B0   (0x0008)  MISSED
};

/// Class /Script/DBDUIViewsCore.CorePreConstructableList
/// Size: 0x00B0 (0x000030 - 0x0000E0)
class UCorePreConstructableList : public UObject
{ 
public:
	class UCoreBaseUserWidget*                         _owningObject;                                              // 0x0030   (0x0008)  
	TArray<class UCoreBaseUserWidget*>                 _widgetList;                                                // 0x0038   (0x0010)  
	class UClass*                                      _userWidgetClass;                                           // 0x0048   (0x0008)  
	class UPanelWidget*                                _container;                                                 // 0x0050   (0x0008)  
	unsigned char                                      UnknownData00_6[0x88];                                      // 0x0058   (0x0088)  MISSED
};

/// Class /Script/DBDUIViewsCore.CorePremiumCurrencyButtonWidget
/// Size: 0x0008 (0x000408 - 0x000410)
class UCorePremiumCurrencyButtonWidget : public UCoreButtonWidget
{ 
public:
	class UDBDTextBlock*                               PriceTextBlock;                                             // 0x0408   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CorePremiumCurrencyButtonWidget.SetPrice
	// void SetPrice(FText& PriceText);                                                                                      // [0x4bb3a80] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewsCore.CorePresetWidgetContainer
/// Size: 0x0040 (0x000360 - 0x0003A0)
class UCorePresetWidgetContainer : public UCoreButtonSelector
{ 
public:
	SDK_UNDEFINED(16,3354) /* FMulticastInlineDelegate */ __um(OnSelectedPresetDelegate);                          // 0x0360   (0x0010)  
	class UCoreSelectableButtonWidget*                 Preset;                                                     // 0x0370   (0x0008)  
	class UCoreSelectableButtonWidget*                 Preset0;                                                    // 0x0378   (0x0008)  
	class UCoreSelectableButtonWidget*                 Preset1;                                                    // 0x0380   (0x0008)  
	class UCoreSelectableButtonWidget*                 Preset2;                                                    // 0x0388   (0x0008)  
	TArray<class UCoreSelectableButtonWidget*>         _presetWidgets;                                             // 0x0390   (0x0010)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CorePresetWidgetContainer.SetSelectedPreset
	// void SetSelectedPreset(class UCoreSelectableButtonWidget* selectedButton);                                            // [0x4bb3eb0] Final|Native|Private|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CorePresetWidgetContainer.SetPreset
	// void SetPreset(TArray<int32_t>& presetData, int32_t selectedPreset);                                                  // [0x4bb3980] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CorePresetWidgetContainer.OnSelectedPresetDelegate__DelegateSignature
	// void OnSelectedPresetDelegate__DelegateSignature(int32_t selectedPreset);                                             // [0x61c32d0] MulticastDelegate|Public|Delegate 
};

/// Class /Script/DBDUIViewsCore.CorePriceTagWidget
/// Size: 0x0010 (0x000310 - 0x000320)
class UCorePriceTagWidget : public UCoreBaseUserWidget
{ 
public:
	bool                                               _highlightInsufficientCurrency;                             // 0x0310   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0311   (0x0007)  MISSED
	class UDBDImage*                                   CurrencyIcon;                                               // 0x0318   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CorePriceTagWidget.SetHighlightInsufficientCurrency
	// void SetHighlightInsufficientCurrency(bool Highlight);                                                                // [0x4bb36c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CorePriceTagWidget.SetData
	// void SetData(FPriceTagViewData& ViewData);                                                                            // [0x61c32d0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CorePriceTagWidget.SetCurrencyIcon
	// void SetCurrencyIcon(ECurrencyType CurrencyType);                                                                     // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CorePriceTagWidget.SetBackgroundVisible
	// void SetBackgroundVisible(bool showBackground);                                                                       // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CoreProfileMenuWidget
/// Size: 0x0050 (0x000310 - 0x000360)
class UCoreProfileMenuWidget : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0310   (0x0008)  MISSED
	class UCoreTabContainerWidget*                     TabsContainer;                                              // 0x0318   (0x0008)  
	class UCoreInputSwitcherWidget*                    BackInputSwitcher;                                          // 0x0320   (0x0008)  
	class UCoreKeyListenerInputPromptWidget*           ScrollPrompt;                                               // 0x0328   (0x0008)  
	SDK_UNDEFINED(16,3355) /* FMulticastInlineDelegate */ __um(_backButtonClickedDelegate);                        // 0x0330   (0x0010)  
	SDK_UNDEFINED(16,3356) /* FMulticastInlineDelegate */ __um(_settingsButtonClickedDelegate);                    // 0x0340   (0x0010)  
	SDK_UNDEFINED(16,3357) /* FMulticastInlineDelegate */ __um(_menuTabSelectedDelegate);                          // 0x0350   (0x0010)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreProfileMenuWidget.OnMenuTabSelected
	// void OnMenuTabSelected(class UCoreSelectableButtonWidget* selectedButton);                                            // [0x4bb3480] Final|Native|Public  
	// Function /Script/DBDUIViewsCore.CoreProfileMenuWidget.OnBackButtonClicked
	// void OnBackButtonClicked();                                                                                           // [0x4bb3460] Final|Native|Protected 
};

/// Class /Script/DBDUIViewsCore.CoreRankTooltipWidget
/// Size: 0x0020 (0x000320 - 0x000340)
class UCoreRankTooltipWidget : public UTooltipWidget
{ 
public:
	class UDBDTextBlock*                               TitleTB;                                                    // 0x0320   (0x0008)  
	class UDBDTextBlock*                               RankNameTB;                                                 // 0x0328   (0x0008)  
	class UDBDTextBlock*                               ProgressTB;                                                 // 0x0330   (0x0008)  
	class UDBDRichTextBlock*                           InfoTB;                                                     // 0x0338   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreRankTooltipWidget.SetTooltipData
	// void SetTooltipData(FRankTooltipViewData& ViewData);                                                                  // [0x4bb3f40] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CoreRewardPopupWidget
/// Size: 0x0008 (0x000368 - 0x000370)
class UCoreRewardPopupWidget : public UCoreGenericPopupWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0368   (0x0008)  MISSED
};

/// Class /Script/DBDUIViewsCore.CoreRewardWrapperWidget
/// Size: 0x0038 (0x000298 - 0x0002D0)
class UCoreRewardWrapperWidget : public UUserWidget
{ 
public:
	class UClass*                                      CharacterRewardWidget;                                      // 0x0298   (0x0008)  
	class UClass*                                      CurrencyProgressionRewardWidget;                            // 0x02A0   (0x0008)  
	class UClass*                                      CustomizationRewardWidget;                                  // 0x02A8   (0x0008)  
	class UPanelWidget*                                RewardContainer;                                            // 0x02B0   (0x0008)  
	class USizeBox*                                    SizeBox;                                                    // 0x02B8   (0x0008)  
	class UScaleBox*                                   ScaleBox;                                                   // 0x02C0   (0x0008)  
	class UCoreRewardWidget*                           _rewardWidget;                                              // 0x02C8   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreRewardWrapperWidget.SetScaleUserSpecified
	// void SetScaleUserSpecified(float Scale);                                                                              // [0x4bb3d10] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreRewardWrapperWidget.SetScaleToFit
	// void SetScaleToFit(float Size);                                                                                       // [0x4bb3c90] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreRewardWrapperWidget.SetIsLocked
	// void SetIsLocked(bool IsLocked, bool PlayAnimation);                                                                  // [0x4bb38b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreRewardWrapperWidget.SetIsClickable
	// void SetIsClickable(bool isClickable);                                                                                // [0x4bb3750] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreRewardWrapperWidget.SetData
	// void SetData(FRewardWrapperViewData& ViewData);                                                                       // [0x4bb3510] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreRewardWrapperWidget.GetRewardWidget
	// class UCoreRewardWidget* GetRewardWidget();                                                                           // [0x4bb2f60] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreRewardWrapperWidget.ClearData
	// void ClearData();                                                                                                     // [0x4bb2d20] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CoreScreenIndicatorsContainerWidget
/// Size: 0x0080 (0x000328 - 0x0003A8)
class UCoreScreenIndicatorsContainerWidget : public UCoreBaseHudWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0328   (0x0008)  MISSED
	float                                              InactiveThreshold;                                          // 0x0330   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0334   (0x0004)  MISSED
	class UCanvasPanel*                                Container;                                                  // 0x0338   (0x0008)  
	class UClass*                                      ScreenIndicatorClass;                                       // 0x0340   (0x0008)  
	SDK_UNDEFINED(80,3358) /* TMap<FString, UCoreScreenIndicatorWidget*> */ __um(_screenIndicatorsMap);            // 0x0348   (0x0050)  
	TArray<class UCoreScreenIndicatorWidget*>          _screenIndicatorsPool;                                      // 0x0398   (0x0010)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreScreenIndicatorsContainerWidget.GetScreenIndicatorsMap
	// TMap<FString, UCoreScreenIndicatorWidget*> GetScreenIndicatorsMap();                                                  // [0x4bb2f80] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreScreenIndicatorsContainerWidget.FindScreenIndicatorKey
	// FString FindScreenIndicatorKey(class UCoreScreenIndicatorWidget* value);                                              // [0x4bb2d40] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewsCore.CoreScreenIndicatorWidget
/// Size: 0x0020 (0x000310 - 0x000330)
class UCoreScreenIndicatorWidget : public UCoreBaseUserWidget
{ 
public:
	float                                              InactiveTime;                                               // 0x0310   (0x0004)  
	FVector2D                                          IndicatorPadding;                                           // 0x0314   (0x0008)  
	FVector2D                                          DistanceClamping;                                           // 0x031C   (0x0008)  
	float                                              MinDistanceRatio;                                           // 0x0324   (0x0004)  
	float                                              MinDistanceAlpha;                                           // 0x0328   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x032C   (0x0004)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreScreenIndicatorWidget.SetData
	// void SetData(FScreenIndicatorViewData& Data);                                                                         // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreScreenIndicatorWidget.ClearData
	// void ClearData();                                                                                                     // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CoreSkillCheckWidget
/// Size: 0x0008 (0x000328 - 0x000330)
class UCoreSkillCheckWidget : public UCoreBaseHudWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0328   (0x0008)  MISSED
};

/// Class /Script/DBDUIViewsCore.CoreSortButtonWidget
/// Size: 0x0020 (0x000408 - 0x000428)
class UCoreSortButtonWidget : public UCoreButtonWidget
{ 
public:
	class UDBDRichTextBlock*                           SortByRTB;                                                  // 0x0408   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0410   (0x0018)  MISSED
};

/// Class /Script/DBDUIViewsCore.CoreSpectateBarWidget
/// Size: 0x0050 (0x000328 - 0x000378)
class UCoreSpectateBarWidget : public UCoreBaseHudWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0328   (0x0008)  MISSED
	class UCoreInputSwitcherWidget*                    LeaveInputSwitcher;                                         // 0x0330   (0x0008)  
	class UCoreInputSwitcherWidget*                    LeftArrowInputSwitcher;                                     // 0x0338   (0x0008)  
	class UCoreInputSwitcherWidget*                    RightArrowInputSwitcher;                                    // 0x0340   (0x0008)  
	SDK_UNDEFINED(16,3359) /* FMulticastInlineDelegate */ __um(_leaveTriggeredDelegate);                           // 0x0348   (0x0010)  
	SDK_UNDEFINED(16,3360) /* FMulticastInlineDelegate */ __um(_leftArrowTriggeredDelegate);                       // 0x0358   (0x0010)  
	SDK_UNDEFINED(16,3361) /* FMulticastInlineDelegate */ __um(_rightArrowTriggeredDelegate);                      // 0x0368   (0x0010)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreSpectateBarWidget.OnRightArrowTriggered
	// void OnRightArrowTriggered();                                                                                         // [0x4b88f90] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreSpectateBarWidget.OnLeftArrowTriggered
	// void OnLeftArrowTriggered();                                                                                          // [0x4b88ca0] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreSpectateBarWidget.OnLeaveTriggered
	// void OnLeaveTriggered();                                                                                              // [0x4b8e440] Final|Native|Private 
};

/// Class /Script/DBDUIViewsCore.CoreStartSequenceWidget
/// Size: 0x00A0 (0x000328 - 0x0003C8)
class UCoreStartSequenceWidget : public UCoreBaseHudWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0328   (0x0008)  MISSED
	float                                              fadeInDuration;                                             // 0x0330   (0x0004)  
	float                                              fadeOutDuration;                                            // 0x0334   (0x0004)  
	EEasingType                                        FadeInEasing;                                               // 0x0338   (0x0001)  
	EEasingType                                        FadeOutEasing;                                              // 0x0339   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x033A   (0x0006)  MISSED
	SDK_UNDEFINED(80,3362) /* TMap<EThemeColorId, FLinearColor> */ __um(BorderColors);                             // 0x0340   (0x0050)  
	FLinearColor                                       DefaultColor;                                               // 0x0390   (0x0010)  
	class UDBDTextBlock*                               ThemeNameTextfield;                                         // 0x03A0   (0x0008)  
	class UImage*                                      SeparatorImage;                                             // 0x03A8   (0x0008)  
	class UDBDTextBlock*                               MapNameTextfield;                                           // 0x03B0   (0x0008)  
	SDK_UNDEFINED(16,3363) /* FMulticastInlineDelegate */ __um(StartSequenceFadeOutDelegate);                      // 0x03B8   (0x0010)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreStartSequenceWidget.OnHideStartSequenceComplete
	// void OnHideStartSequenceComplete(class UUITweenInstance* tween);                                                      // [0x4bb8bd0] Final|Native|Private 
};

/// Class /Script/DBDUIViewsCore.CoreStatusEffectIcon
/// Size: 0x0058 (0x000310 - 0x000368)
class UCoreStatusEffectIcon : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0310   (0x0058)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreStatusEffectIcon.UpdateWidget
	// void UpdateWidget();                                                                                                  // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreStatusEffectIcon.UpdatePercentageFill
	// void UpdatePercentageFill(float Percentage);                                                                          // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreStatusEffectIcon.SetStatusEffectData
	// void SetStatusEffectData(FStatusEffectViewData& Data);                                                                // [0x4bb9640] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreStatusEffectIcon.SetInactiveTicks
	// void SetInactiveTicks(int32_t inactiveTicks);                                                                         // [0x4bb9450] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreStatusEffectIcon.ResetWidget
	// void ResetWidget();                                                                                                   // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreStatusEffectIcon.GetStatusEffectData
	// FStatusEffectViewData GetStatusEffectData();                                                                          // [0x4bb84b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreStatusEffectIcon.GetInactiveTicks
	// int32_t GetInactiveTicks();                                                                                           // [0x4bb8490] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewsCore.CoreStatusEffectWidget
/// Size: 0x0098 (0x000328 - 0x0003C0)
class UCoreStatusEffectWidget : public UCoreBaseHudWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0328   (0x0008)  MISSED
	int32_t                                            InactiveThreshold;                                          // 0x0330   (0x0004)  
	int32_t                                            PrepooledItemAmount;                                        // 0x0334   (0x0004)  
	int32_t                                            ItemsByColumn;                                              // 0x0338   (0x0004)  
	float                                              EvenColumnOffset;                                           // 0x033C   (0x0004)  
	class UClass*                                      CoreStatusEffectIconClass;                                  // 0x0340   (0x0008)  
	class UGridPanel*                                  StatusEffectContainer;                                      // 0x0348   (0x0008)  
	TArray<class UCoreStatusEffectIcon*>               _statusEffectPool;                                          // 0x0350   (0x0010)  
	TArray<FName>                                      _statusEffectOrder;                                         // 0x0360   (0x0010)  
	SDK_UNDEFINED(80,3364) /* TMap<FName, UCoreStatusEffectIcon*> */ __um(_statusEffectMap);                       // 0x0370   (0x0050)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreStatusEffectWidget.GetStatusEffectMap
	// TMap<FName, UCoreStatusEffectIcon*> GetStatusEffectMap();                                                             // [0x4bb84e0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewsCore.CoreStoreBaseSubTabsWidget
/// Size: 0x0028 (0x000310 - 0x000338)
class UCoreStoreBaseSubTabsWidget : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0310   (0x0008)  MISSED
	SDK_UNDEFINED(16,3365) /* FMulticastInlineDelegate */ __um(_menuTabSelectedDelegate);                          // 0x0318   (0x0010)  
	class UCoreTabContainerWidget*                     SubTabsContainer;                                           // 0x0328   (0x0008)  
	class UWidgetSwitcher*                             TabContentSwitcher;                                         // 0x0330   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreStoreBaseSubTabsWidget.OnSubTabSelected
	// void OnSubTabSelected(class UCoreSelectableButtonWidget* selectedButton);                                             // [0x4b8ca10] Native|Protected     
	// Function /Script/DBDUIViewsCore.CoreStoreBaseSubTabsWidget.GetSubTabContentForTab
	// class UWidget* GetSubTabContentForTab(int32_t subTabId);                                                              // [0x4bb8640] Native|Event|Protected|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CoreStoreCategoryWidget
/// Size: 0x0010 (0x000440 - 0x000450)
class UCoreStoreCategoryWidget : public UCoreSelectableButtonWidget
{ 
public:
	class UCoreOnHoverBorderWidget*                    OnHoverBorder;                                              // 0x0440   (0x0008)  
	ECustomizationCategory                             _category;                                                  // 0x0448   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0449   (0x0007)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreStoreCategoryWidget.SetData
	// void SetData(FStoreCategoryViewData& Data);                                                                           // [0x4bb92d0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CoreStoreChapterPackItemWidget
/// Size: 0x0060 (0x000440 - 0x0004A0)
class UCoreStoreChapterPackItemWidget : public UCoreSelectableButtonWidget
{ 
public:
	SDK_UNDEFINED(16,3366) /* FMulticastInlineDelegate */ __um(BuyPremiumActionDelegate);                          // 0x0440   (0x0010)  
	class UDBDTextBlock*                               titleText;                                                  // 0x0450   (0x0008)  
	class UHorizontalBox*                              CharactersBox;                                              // 0x0458   (0x0008)  
	class UHorizontalBox*                              CustomizationsBox;                                          // 0x0460   (0x0008)  
	class UCorePremiumCurrencyButtonWidget*            PremiumBuyButton;                                           // 0x0468   (0x0008)  
	bool                                               _isExpanded;                                                // 0x0470   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0471   (0x0003)  MISSED
	int32_t                                            _initialItemPoolSize;                                       // 0x0474   (0x0004)  
	class UClass*                                      _characterItemWidgetClass;                                  // 0x0478   (0x0008)  
	class UClass*                                      _customizationItemWidgetClass;                              // 0x0480   (0x0008)  
	class UStoreChapterPackViewData*                   _data;                                                      // 0x0488   (0x0008)  
	class UCorePreConstructableList*                   _characterList;                                             // 0x0490   (0x0008)  
	class UCorePreConstructableList*                   _customizationList;                                         // 0x0498   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreStoreChapterPackItemWidget.ToggleExpanded
	// void ToggleExpanded();                                                                                                // [0x61c32d0] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreStoreChapterPackItemWidget.SetExpanded
	// void SetExpanded(bool expanded);                                                                                      // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreStoreChapterPackItemWidget.SetData
	// void SetData(class UStoreChapterPackViewData* Data);                                                                  // [0x4bb93c0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreStoreChapterPackItemWidget.OnPremiumBuyButtonClicked
	// void OnPremiumBuyButtonClicked(class UCoreButtonWidget* Button);                                                      // [0x4bb8e80] Final|Native|Protected 
};

/// Class /Script/DBDUIViewsCore.CoreStoreChapterPacksListWidget
/// Size: 0x0038 (0x000310 - 0x000348)
class UCoreStoreChapterPacksListWidget : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0310   (0x0018)  MISSED
	int32_t                                            _preConstructedItemsCount;                                  // 0x0328   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x032C   (0x0004)  MISSED
	class UClass*                                      _itemWidgetClass;                                           // 0x0330   (0x0008)  
	class UVerticalBox*                                Content;                                                    // 0x0338   (0x0008)  
	class UCorePreConstructableList*                   _itemList;                                                  // 0x0340   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreStoreChapterPacksListWidget.OnItemBuyActionClicked
	// void OnItemBuyActionClicked(FString PackId);                                                                          // [0x4bb8c60] Final|Native|Private 
};

/// Class /Script/DBDUIViewsCore.CoreStoreItemWidget
/// Size: 0x0058 (0x000440 - 0x000498)
class UCoreStoreItemWidget : public UCoreSelectableButtonWidget
{ 
public:
	int32_t                                            _layoutMask;                                                // 0x0440   (0x0004)  
	FMargin                                            _priceTagPadding;                                           // 0x0444   (0x0010)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0454   (0x0004)  MISSED
	class UClass*                                      _priceTagWidgetClass;                                       // 0x0458   (0x0008)  
	ETooltipHorizontalAlignment                        _tooltipHorizontalAlignment;                                // 0x0460   (0x0001)  
	ETooltipVerticalAlignment                          _tooltipVerticalAlignment;                                  // 0x0461   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0462   (0x0006)  MISSED
	class UDBDImage*                                   ItemIcon;                                                   // 0x0468   (0x0008)  
	class UScaleBox*                                   LayoutScale;                                                // 0x0470   (0x0008)  
	class UWidget*                                     SelectedOverlay;                                            // 0x0478   (0x0008)  
	class UCoreOnHoverBorderWidget*                    OnHoverBorder;                                              // 0x0480   (0x0008)  
	class UVerticalBox*                                PriceTagsVerticalBox;                                       // 0x0488   (0x0008)  
	class UTextBlock*                                  OwnedTagText;                                               // 0x0490   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreStoreItemWidget.SetStoreItemLayout
	// void SetStoreItemLayout(int32_t layoutMask);                                                                          // [0x4bbddc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreStoreItemWidget.SetStoreItemData
	// void SetStoreItemData(class UStoreItemViewData* Data);                                                                // [0x4bb93c0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreStoreItemWidget.SetSmallTemplate
	// void SetSmallTemplate(bool useSmallTemplate);                                                                         // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreStoreItemWidget.SetScale
	// void SetScale(float Scale);                                                                                           // [0x4bbdd40] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreStoreItemWidget.OnButtonUnhovered
	// void OnButtonUnhovered(class UCoreButtonWidget* targetButton);                                                        // [0x4bbd210] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.CoreStoreItemWidget.OnButtonSelectedChanged
	// void OnButtonSelectedChanged(class UCoreSelectableButtonWidget* targetButton, bool IsSelected);                       // [0x4bbd140] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.CoreStoreItemWidget.OnButtonHovered
	// void OnButtonHovered(class UCoreButtonWidget* targetButton);                                                          // [0x4bbd0b0] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.CoreStoreItemWidget.IsTagVisible
	// bool IsTagVisible(EStoreItemLayout Tag);                                                                              // [0x4bbcfc0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewsCore.CoreStoreCharacterItemWidget
/// Size: 0x0008 (0x000498 - 0x0004A0)
class UCoreStoreCharacterItemWidget : public UCoreStoreItemWidget
{ 
public:
	class UStoreCharacterItemViewData*                 _data;                                                      // 0x0498   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreStoreCharacterItemWidget.SetStoreCharacterItemData
	// void SetStoreCharacterItemData(class UStoreCharacterItemViewData* Data);                                              // [0x4bb96f0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CoreStoreCharacterPerksToastWidget
/// Size: 0x0040 (0x000440 - 0x000480)
class UCoreStoreCharacterPerksToastWidget : public UCoreKeyListenerButtonWidget
{ 
public:
	class UWidget*                                     SafeArea;                                                   // 0x0440   (0x0008)  
	bool                                               IsOpen;                                                     // 0x0448   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0449   (0x0007)  MISSED
	class UCoreMenuPowerWidget*                        CoreKillerPower;                                            // 0x0450   (0x0008)  
	class UCoreMenuPerkWidget*                         CorePerk;                                                   // 0x0458   (0x0008)  
	class UCoreMenuPerkWidget*                         CorePerk0;                                                  // 0x0460   (0x0008)  
	class UCoreMenuPerkWidget*                         CorePerk1;                                                  // 0x0468   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0470   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreStoreCharacterPerksToastWidget.ShowTooltip
	// void ShowTooltip(class UCoreButtonWidget* hoveredSlotWidget);                                                         // [0x4bb9780] Final|Native|Private|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreStoreCharacterPerksToastWidget.Show
	// void Show();                                                                                                          // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreStoreCharacterPerksToastWidget.SetPerkData
	// void SetPerkData(class UCoreMenuPerkWidget* perkWidget, class UCharacterPerkViewData* PerkViewData);                  // [0x4bb9570] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreStoreCharacterPerksToastWidget.SetKillerPowerData
	// void SetKillerPowerData(class UMenuPowerViewData* killerPowerViewData);                                               // [0x4bb94e0] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/DBDUIViewsCore.CoreStoreCharacterPerksToastWidget.SetCharacterRole
	// void SetCharacterRole(EPlayerRole Role);                                                                              // [0x61c32d0] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreStoreCharacterPerksToastWidget.SetCharacterData
	// void SetCharacterData(TArray<UCharacterPerkViewData*> characterUniquePerksViewData, EPlayerRole Role);                // [0x4bb8fa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreStoreCharacterPerksToastWidget.OpenToast
	// void OpenToast();                                                                                                     // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreStoreCharacterPerksToastWidget.OnPlayerClick
	// void OnPlayerClick(FPointerEvent& PointerEvent);                                                                      // [0x4bb8d50] Final|Native|Private|HasOutParms 
	// Function /Script/DBDUIViewsCore.CoreStoreCharacterPerksToastWidget.HideTooltip
	// void HideTooltip(class UCoreButtonWidget* unhoveredSlotWidget);                                                       // [0x4bb86e0] Final|Native|Private|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreStoreCharacterPerksToastWidget.Hide
	// void Hide();                                                                                                          // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreStoreCharacterPerksToastWidget.CloseToast
	// void CloseToast();                                                                                                    // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CoreStoreCharactersBioWidget
/// Size: 0x0018 (0x000310 - 0x000328)
class UCoreStoreCharactersBioWidget : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0310   (0x0008)  MISSED
	class UDBDRichTextBlock*                           TextContent;                                                // 0x0318   (0x0008)  
	class UScrollBox*                                  Scroll;                                                     // 0x0320   (0x0008)  
};

/// Class /Script/DBDUIViewsCore.CoreStoreCharactersCustomizationsWidget
/// Size: 0x00A0 (0x000310 - 0x0003B0)
class UCoreStoreCharactersCustomizationsWidget : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0310   (0x0008)  MISSED
	SDK_UNDEFINED(16,3367) /* FMulticastInlineDelegate */ __um(_customizationSelectedDelegate);                    // 0x0318   (0x0010)  
	SDK_UNDEFINED(16,3368) /* FMulticastInlineDelegate */ __um(_categorySelectedDelegate);                         // 0x0328   (0x0010)  
	class UClass*                                      _customizationItemWidgetClass;                              // 0x0338   (0x0008)  
	class UClass*                                      _categoryItemWidgetClass;                                   // 0x0340   (0x0008)  
	int32_t                                            _numberOfColumns;                                           // 0x0348   (0x0004)  
	float                                              _customizationItemScale;                                    // 0x034C   (0x0004)  
	int32_t                                            _layoutMask;                                                // 0x0350   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0354   (0x0004)  MISSED
	class UScrollBox*                                  CustomizationsScroll;                                       // 0x0358   (0x0008)  
	class UUniformGridPanel*                           CustomizationsContainer;                                    // 0x0360   (0x0008)  
	class UUniformGridPanel*                           CategoriesContainer;                                        // 0x0368   (0x0008)  
	class UCoreStoreCharactersFilterWidget*            FiltersWidget;                                              // 0x0370   (0x0008)  
	TArray<class UCoreStoreCustomizationItemWidget*>   _selectedCustomizationItems;                                // 0x0378   (0x0010)  
	int32_t                                            _maxSelectedItems;                                          // 0x0388   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x038C   (0x0004)  MISSED
	class UCoreStoreCategoryWidget*                    _selectedCategoryItem;                                      // 0x0390   (0x0008)  
	int32_t                                            _preConstructedCategoriesCount;                             // 0x0398   (0x0004)  
	int32_t                                            _preConstructedCustomizationsCount;                         // 0x039C   (0x0004)  
	class UCorePreConstructableList*                   _categoryList;                                              // 0x03A0   (0x0008)  
	class UCorePreConstructableList*                   _customizationList;                                         // 0x03A8   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreStoreCharactersCustomizationsWidget.OnCustomizationSelectedAgain
	// void OnCustomizationSelectedAgain(class UCoreSelectableButtonWidget* buttonTarget);                                   // [0x4bb8a70] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.CoreStoreCharactersCustomizationsWidget.OnCustomizationSelected
	// void OnCustomizationSelected(class UCoreSelectableButtonWidget* buttonTarget, bool IsSelected);                       // [0x4bb89a0] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.CoreStoreCharactersCustomizationsWidget.OnCategorySelected
	// void OnCategorySelected(class UCoreSelectableButtonWidget* buttonTarget, bool IsSelected);                            // [0x4bb8770] Final|Native|Protected 
};

/// Class /Script/DBDUIViewsCore.CoreStoreCharactersFilterWidget
/// Size: 0x0048 (0x000310 - 0x000358)
class UCoreStoreCharactersFilterWidget : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0310   (0x0008)  MISSED
	class UCoreButtonWidget*                           ClearFiltersButton;                                         // 0x0318   (0x0008)  
	class UPanelWidget*                                CheckBoxesContainer;                                        // 0x0320   (0x0008)  
	TArray<class UCoreFilterButtonWidget*>             FiltersCheckBoxArray;                                       // 0x0328   (0x0010)  
	SDK_UNDEFINED(16,3369) /* FMulticastInlineDelegate */ __um(_onClearFiltersClicked);                            // 0x0338   (0x0010)  
	SDK_UNDEFINED(16,3370) /* FMulticastInlineDelegate */ __um(_onFiltersChanged);                                 // 0x0348   (0x0010)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreStoreCharactersFilterWidget.ToggleWidgetVisibility
	// void ToggleWidgetVisibility();                                                                                        // [0x61c32d0] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreStoreCharactersFilterWidget.OnFilterOptionCheckBoxToggled
	// void OnFilterOptionCheckBoxToggled(bool IsToggled, EItemFilterOption itemFilterOption);                               // [0x4bb8b00] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreStoreCharactersFilterWidget.OnClearFiltersClicked
	// void OnClearFiltersClicked(class UCoreButtonWidget* buttonTarget);                                                    // [0x4bb8910] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CoreStoreCharactersSelectionWidget
/// Size: 0x0060 (0x000310 - 0x000370)
class UCoreStoreCharactersSelectionWidget : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0310   (0x0008)  MISSED
	SDK_UNDEFINED(16,3371) /* FMulticastInlineDelegate */ __um(_characterSelectedDelegate);                        // 0x0318   (0x0010)  
	class UClass*                                      _itemWidgetClass;                                           // 0x0328   (0x0008)  
	int32_t                                            _numberOfColumns;                                           // 0x0330   (0x0004)  
	float                                              _itemScale;                                                 // 0x0334   (0x0004)  
	int32_t                                            _layoutMask;                                                // 0x0338   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x033C   (0x0004)  MISSED
	class UScrollBox*                                  Scroll;                                                     // 0x0340   (0x0008)  
	class UUniformGridPanel*                           Container;                                                  // 0x0348   (0x0008)  
	class UCoreStoreCharactersFilterWidget*            FiltersWidget;                                              // 0x0350   (0x0008)  
	int32_t                                            _preConstructedItemsCount;                                  // 0x0358   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x035C   (0x0004)  MISSED
	class UCoreStoreCharacterItemWidget*               _selectedItem;                                              // 0x0360   (0x0008)  
	class UCorePreConstructableList*                   _characterList;                                             // 0x0368   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreStoreCharactersSelectionWidget.OnCharacterSelected
	// void OnCharacterSelected(class UCoreSelectableButtonWidget* buttonTarget, bool IsSelected);                           // [0x4bb8840] Final|Native|Protected 
};

/// Class /Script/DBDUIViewsCore.CoreStoreCharactersWidget
/// Size: 0x0018 (0x000338 - 0x000350)
class UCoreStoreCharactersWidget : public UCoreStoreBaseSubTabsWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0338   (0x0008)  MISSED
	class UDBDTextBlock*                               SelectedCharacterName;                                      // 0x0340   (0x0008)  
	class UCoreStoreCharacterPerksToastWidget*         PerksToast;                                                 // 0x0348   (0x0008)  
};

/// Class /Script/DBDUIViewsCore.CoreStoreCollectionsItemWidget
/// Size: 0x0030 (0x000310 - 0x000340)
class UCoreStoreCollectionsItemWidget : public UCoreBaseUserWidget
{ 
public:
	class UDBDTextBlock*                               TimerText;                                                  // 0x0310   (0x0008)  
	class UDBDTextBlock*                               CountText;                                                  // 0x0318   (0x0008)  
	class UHorizontalBox*                              StoreCustomizationListBox;                                  // 0x0320   (0x0008)  
	class UClass*                                      _storeCustomizationItemWidgetClass;                         // 0x0328   (0x0008)  
	int32_t                                            _preConstructedItemsCount;                                  // 0x0330   (0x0004)  
	int32_t                                            _layoutMask;                                                // 0x0334   (0x0004)  
	class UCorePreConstructableList*                   _itemList;                                                  // 0x0338   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreStoreCollectionsItemWidget.ToggleExpanded
	// void ToggleExpanded();                                                                                                // [0x61c32d0] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreStoreCollectionsItemWidget.SetupView
	// void SetupView(class UStoreCollectionViewData* collectionViewData);                                                   // [0x4b8db30] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreStoreCollectionsItemWidget.SetExpanded
	// void SetExpanded(bool expanded);                                                                                      // [0x61c32d0] Event|Protected|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CoreStoreCollectionsListWidget
/// Size: 0x0028 (0x000310 - 0x000338)
class UCoreStoreCollectionsListWidget : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0310   (0x0008)  MISSED
	class UVerticalBox*                                CollectionItemListBox;                                      // 0x0318   (0x0008)  
	class UClass*                                      _collectionItemClass;                                       // 0x0320   (0x0008)  
	int32_t                                            _preConstructedItemsCount;                                  // 0x0328   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x032C   (0x0004)  MISSED
	class UCorePreConstructableList*                   _itemList;                                                  // 0x0330   (0x0008)  
};

/// Class /Script/DBDUIViewsCore.CoreStoreCollectionsWidget
/// Size: 0x0008 (0x000338 - 0x000340)
class UCoreStoreCollectionsWidget : public UCoreStoreBaseSubTabsWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0338   (0x0008)  MISSED
};

/// Class /Script/DBDUIViewsCore.CoreStoreCustomizationItemWidget
/// Size: 0x0008 (0x000498 - 0x0004A0)
class UCoreStoreCustomizationItemWidget : public UCoreStoreItemWidget
{ 
public:
	class UStoreCustomizationItemViewData*             _data;                                                      // 0x0498   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreStoreCustomizationItemWidget.SetStoreCustomizationItemData
	// void SetStoreCustomizationItemData(class UStoreCustomizationItemViewData* Data);                                      // [0x4bb96f0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CoreStoreFeaturedCharacterContainerWidget
/// Size: 0x0010 (0x000360 - 0x000370)
class UCoreStoreFeaturedCharacterContainerWidget : public UCoreButtonSelector
{ 
public:
	class UClass*                                      CharacterTileClass;                                         // 0x0360   (0x0008)  
	class UHorizontalBox*                              Root;                                                       // 0x0368   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreStoreFeaturedCharacterContainerWidget.SetCharacters
	// void SetCharacters(TArray<FStoreFeaturedCharacterViewData>& viewDataArray);                                           // [0x4bb91c0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreStoreFeaturedCharacterContainerWidget.OnTransitionRequested
	// void OnTransitionRequested(int32_t characterIndex);                                                                   // [0x4bb8f10] Final|Native|Private 
};

/// Class /Script/DBDUIViewsCore.CoreStoreFeaturedCharacterWidget
/// Size: 0x0040 (0x000440 - 0x000480)
class UCoreStoreFeaturedCharacterWidget : public UCoreSelectableButtonWidget
{ 
public:
	SDK_UNDEFINED(16,3372) /* FMulticastInlineDelegate */ __um(OnTransitionButtonClickedDelegate);                 // 0x0440   (0x0010)  
	class UCoreButtonWidget*                           TransitionButton;                                           // 0x0450   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0458   (0x0028)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreStoreFeaturedCharacterWidget.SetCharacterData
	// void SetCharacterData(FStoreFeaturedCharacterViewData& CharacterData);                                                // [0x4bb90d0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreStoreFeaturedCharacterWidget.GetCharacterViewData
	// FStoreFeaturedCharacterViewData GetCharacterViewData();                                                               // [0x4bb83e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CoreStoreFeaturedCustomizationItemContainerWidget
/// Size: 0x00D8 (0x000360 - 0x000438)
class UCoreStoreFeaturedCustomizationItemContainerWidget : public UCoreButtonSelector
{ 
public:
	class UClass*                                      ItemTileClass;                                              // 0x0360   (0x0008)  
	class UCanvasPanel*                                Root;                                                       // 0x0368   (0x0008)  
	class UCoreInputSwitcherWidget*                    LeftArrow;                                                  // 0x0370   (0x0008)  
	class UCoreInputSwitcherWidget*                    RightArrow;                                                 // 0x0378   (0x0008)  
	int32_t                                            MaxVisibleTiles;                                            // 0x0380   (0x0004)  
	int32_t                                            TileHeight;                                                 // 0x0384   (0x0004)  
	int32_t                                            SmallTileWidth;                                             // 0x0388   (0x0004)  
	int32_t                                            BigTileWidth;                                               // 0x038C   (0x0004)  
	int32_t                                            TileSpacing;                                                // 0x0390   (0x0004)  
	float                                              TranslationDuration;                                        // 0x0394   (0x0004)  
	EEasingType                                        TranslationEasingType;                                      // 0x0398   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0399   (0x0007)  MISSED
	TArray<class UStoreCustomizationItemViewData*>     _cachedData;                                                // 0x03A0   (0x0010)  
	TArray<class UCoreStoreFeaturedCustomizationItemWidget*> _usedTilePool;                                        // 0x03B0   (0x0010)  
	TArray<class UCoreStoreFeaturedCustomizationItemWidget*> _availableTilePool;                                   // 0x03C0   (0x0010)  
	SDK_UNDEFINED(80,3373) /* TMap<int32_t, UCoreStoreFeaturedCustomizationItemWidget*> */ __um(_positionToWidgetMap); // 0x03D0   (0x0050)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0420   (0x0018)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreStoreFeaturedCustomizationItemContainerWidget.SetItems
	// void SetItems(TArray<UStoreCustomizationItemViewData*>& viewDataArray);                                               // [0x4bbdb30] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreStoreFeaturedCustomizationItemContainerWidget.OnSelectedItemChanged
	// void OnSelectedItemChanged(class UCoreSelectableButtonWidget* selectedButton);                                        // [0x4bbd580] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreStoreFeaturedCustomizationItemContainerWidget.OnMoveCompleted
	// void OnMoveCompleted();                                                                                               // [0x4bbd560] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreStoreFeaturedCustomizationItemContainerWidget.MovePrevious
	// void MovePrevious();                                                                                                  // [0x4bbd090] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreStoreFeaturedCustomizationItemContainerWidget.MoveNext
	// void MoveNext();                                                                                                      // [0x4bbd070] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreStoreFeaturedCustomizationItemContainerWidget.InitItemContainer
	// void InitItemContainer();                                                                                             // [0x4b97140] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CoreStoreFeaturedCustomizationItemWidget
/// Size: 0x0018 (0x000440 - 0x000458)
class UCoreStoreFeaturedCustomizationItemWidget : public UCoreSelectableButtonWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0440   (0x0018)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreStoreFeaturedCustomizationItemWidget.UpdateSize
	// void UpdateSize(class UUITweenInstance* tween);                                                                       // [0x4bbe3e0] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreStoreFeaturedCustomizationItemWidget.UpdatePosition
	// void UpdatePosition(class UUITweenInstance* tween);                                                                   // [0x4bbe350] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreStoreFeaturedCustomizationItemWidget.SetCustomizationData
	// void SetCustomizationData(class UStoreCustomizationItemViewData* specialOffersData);                                  // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CoreStoreFeaturedWidget
/// Size: 0x0038 (0x000310 - 0x000348)
class UCoreStoreFeaturedWidget : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0310   (0x0008)  MISSED
	TArray<class UStoreCustomizationItemViewData*>     _featuredItems;                                             // 0x0318   (0x0010)  
	class UCoreStoreFeaturedCustomizationItemContainerWidget* CustomizationItemContainer;                          // 0x0328   (0x0008)  
	class UCoreStoreFeaturedCharacterContainerWidget*  CharacterContainer;                                         // 0x0330   (0x0008)  
	SDK_UNDEFINED(16,3374) /* FMulticastInlineDelegate */ __um(_featuredCharacterSelectedDelegate);                // 0x0338   (0x0010)  
};

/// Class /Script/DBDUIViewsCore.CoreStoreMenuWidget
/// Size: 0x0068 (0x000310 - 0x000378)
class UCoreStoreMenuWidget : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0310   (0x0008)  MISSED
	class UCoreTabContainerWidget*                     StoreMenuTabs;                                              // 0x0318   (0x0008)  
	class UCoreKeyListenerButtonWidget*                RedeemCodeButton;                                           // 0x0320   (0x0008)  
	class UCoreKeyListenerButtonWidget*                GetAuricCellsButton;                                        // 0x0328   (0x0008)  
	class UCoreInputSwitcherWidget*                    BackInputSwitcher;                                          // 0x0330   (0x0008)  
	SDK_UNDEFINED(16,3375) /* FMulticastInlineDelegate */ __um(_menuTabSelectedDelegate);                          // 0x0338   (0x0010)  
	SDK_UNDEFINED(16,3376) /* FMulticastInlineDelegate */ __um(_backActionDelegate);                               // 0x0348   (0x0010)  
	SDK_UNDEFINED(16,3377) /* FMulticastInlineDelegate */ __um(_redeemCodeButtonDelegate);                         // 0x0358   (0x0010)  
	SDK_UNDEFINED(16,3378) /* FMulticastInlineDelegate */ __um(_getAuricCellsButtonDelegate);                      // 0x0368   (0x0010)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreStoreMenuWidget.OnRedeemCodeButtonClicked
	// void OnRedeemCodeButtonClicked(class UCoreButtonWidget* selectedButton);                                              // [0x4b8d7c0] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.CoreStoreMenuWidget.OnMenuTabSelectedAgain
	// void OnMenuTabSelectedAgain(class UCoreSelectableButtonWidget* selectedButton);                                       // [0x4bbd4d0] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.CoreStoreMenuWidget.OnMenuTabSelected
	// void OnMenuTabSelected(class UCoreSelectableButtonWidget* selectedButton);                                            // [0x4bbd440] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.CoreStoreMenuWidget.OnGetAuricCellsClicked
	// void OnGetAuricCellsClicked(class UCoreButtonWidget* buttonTarget);                                                   // [0x4bbd2c0] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.CoreStoreMenuWidget.OnBackAction
	// void OnBackAction();                                                                                                  // [0x4b8e440] Final|Native|Protected 
};

/// Class /Script/DBDUIViewsCore.CoreStoreSpecialPacksHeritageTabWidget
/// Size: 0x0008 (0x000310 - 0x000318)
class UCoreStoreSpecialPacksHeritageTabWidget : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0310   (0x0008)  MISSED
};

/// Class /Script/DBDUIViewsCore.CoreStoreSpecialPacksListWidget
/// Size: 0x0038 (0x000310 - 0x000348)
class UCoreStoreSpecialPacksListWidget : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0310   (0x0018)  MISSED
	int32_t                                            _preConstructedItemsCount;                                  // 0x0328   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x032C   (0x0004)  MISSED
	class UClass*                                      _itemWidgetClass;                                           // 0x0330   (0x0008)  
	class UVerticalBox*                                Content;                                                    // 0x0338   (0x0008)  
	class UCorePreConstructableList*                   _itemList;                                                  // 0x0340   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreStoreSpecialPacksListWidget.OnItemBuyActionClicked
	// void OnItemBuyActionClicked(FString PackId);                                                                          // [0x4bbd350] Final|Native|Private 
};

/// Class /Script/DBDUIViewsCore.CoreStoreSpecialPacksPackItemWidget
/// Size: 0x0068 (0x000440 - 0x0004A8)
class UCoreStoreSpecialPacksPackItemWidget : public UCoreSelectableButtonWidget
{ 
public:
	SDK_UNDEFINED(16,3379) /* FMulticastInlineDelegate */ __um(BuyWithCurrencyActionDelegate);                     // 0x0440   (0x0010)  
	class UDBDTextBlock*                               TimerText;                                                  // 0x0450   (0x0008)  
	class UDBDTextBlock*                               titleText;                                                  // 0x0458   (0x0008)  
	class UHorizontalBox*                              CharactersBox;                                              // 0x0460   (0x0008)  
	class UHorizontalBox*                              CustomizationsBox;                                          // 0x0468   (0x0008)  
	class UCoreCurrencySwitcherWidget*                 CurrencyBuyButton;                                          // 0x0470   (0x0008)  
	bool                                               _isExpanded;                                                // 0x0478   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0479   (0x0003)  MISSED
	int32_t                                            _initialItemPoolSize;                                       // 0x047C   (0x0004)  
	class UClass*                                      _characterItemWidgetClass;                                  // 0x0480   (0x0008)  
	class UClass*                                      _customizationItemWidgetClass;                              // 0x0488   (0x0008)  
	class UStoreSpecialPackViewData*                   _data;                                                      // 0x0490   (0x0008)  
	class UCorePreConstructableList*                   _characterList;                                             // 0x0498   (0x0008)  
	class UCorePreConstructableList*                   _customizationList;                                         // 0x04A0   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreStoreSpecialPacksPackItemWidget.ToggleExpanded
	// void ToggleExpanded();                                                                                                // [0x61c32d0] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreStoreSpecialPacksPackItemWidget.SetExpanded
	// void SetExpanded(bool expanded);                                                                                      // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreStoreSpecialPacksPackItemWidget.SetData
	// void SetData(class UStoreSpecialPackViewData* Data);                                                                  // [0x4bb93c0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreStoreSpecialPacksPackItemWidget.OnCurrencyBuyButtonClicked
	// void OnCurrencyBuyButtonClicked();                                                                                    // [0x4bbd2a0] Final|Native|Protected 
};

/// Class /Script/DBDUIViewsCore.CoreStoreSpecialPacksWidget
/// Size: 0x0008 (0x000338 - 0x000340)
class UCoreStoreSpecialPacksWidget : public UCoreStoreBaseSubTabsWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0338   (0x0008)  MISSED
};

/// Class /Script/DBDUIViewsCore.CoreStoreSpecialsWidget
/// Size: 0x0030 (0x000310 - 0x000340)
class UCoreStoreSpecialsWidget : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0310   (0x0008)  MISSED
	class UClass*                                      _itemWidgetClass;                                           // 0x0318   (0x0008)  
	class UCoreAuricCellsSpecialOfferWidget*           AuricCellSpecialOffer;                                      // 0x0320   (0x0008)  
	class UDBDWrapBox*                                 Container;                                                  // 0x0328   (0x0008)  
	int32_t                                            _preConstructedItemsCount;                                  // 0x0330   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0334   (0x0004)  MISSED
	class UCorePreConstructableList*                   _itemList;                                                  // 0x0338   (0x0008)  
};

/// Class /Script/DBDUIViewsCore.CoreStoryLevelButtonWidget
/// Size: 0x0038 (0x000440 - 0x000478)
class UCoreStoryLevelButtonWidget : public UCoreSelectableButtonWidget
{ 
public:
	SDK_UNDEFINED(16,3380) /* FMulticastInlineDelegate */ __um(_levelUnlockedAnimationDoneDelegate);               // 0x0440   (0x0010)  
	SDK_UNDEFINED(24,3381) /* FText */                 __um(_tooltipText);                                         // 0x0450   (0x0018)  
	ERemainingTimeFormat                               _lockedLevelTimeFormat;                                     // 0x0468   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0469   (0x000F)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreStoryLevelButtonWidget.UpdateVisualStatus
	// void UpdateVisualStatus(EArchivesStoryLevelStatus newStatus, bool newlyUnlocked);                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreStoryLevelButtonWidget.UpdateVisual
	// void UpdateVisual(class UArchiveStoryLevelViewData* ViewData, bool newlyUnlocked);                                    // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreStoryLevelButtonWidget.UpdateStatusData
	// void UpdateStatusData(EArchivesStoryLevelStatus newStatus, bool isSelectorReadOnly);                                  // [0x4bbe470] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreStoryLevelButtonWidget.SetData
	// void SetData(class UArchiveStoryLevelViewData* ViewData, bool isSelectorReadOnly);                                    // [0x4bbd700] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreStoryLevelButtonWidget.GetLevel
	// int32_t GetLevel();                                                                                                   // [0x4bbcac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewsCore.CoreStoryLevelsSelectorWidget
/// Size: 0x0048 (0x000360 - 0x0003A8)
class UCoreStoryLevelsSelectorWidget : public UCoreButtonSelector
{ 
public:
	bool                                               IsReadOnly;                                                 // 0x0360   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0361   (0x0007)  MISSED
	class UClass*                                      CoreStoryLevelButtonWidgetClass;                            // 0x0368   (0x0008)  
	class UGridPanel*                                  LevelButtonsContainer;                                      // 0x0370   (0x0008)  
	class UCoreInputSwitcherWidget*                    PreviousLevelInputSwitcher;                                 // 0x0378   (0x0008)  
	class UCoreInputSwitcherWidget*                    NextLevelInputSwitcher;                                     // 0x0380   (0x0008)  
	TArray<class UArchiveStoryLevelViewData*>          _levelButtonsData;                                          // 0x0388   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0398   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreStoryLevelsSelectorWidget.UpdateVisual
	// void UpdateVisual(EArchivesStoryLevelStatus globalStatus, bool PlayAnimation);                                        // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreStoryLevelsSelectorWidget.UpdateLevelStatus
	// void UpdateLevelStatus(int32_t Level, EArchivesStoryLevelStatus Status);                                              // [0x4bbe280] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreStoryLevelsSelectorWidget.SetUpInteractionMode
	// void SetUpInteractionMode();                                                                                          // [0x4bbe080] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreStoryLevelsSelectorWidget.SetEnabled
	// void SetEnabled(bool Enabled);                                                                                        // [0x4bbd880] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreStoryLevelsSelectorWidget.SetData
	// void SetData(TArray<UArchiveStoryLevelViewData*>& levelbuttonsData);                                                  // [0x4bbd7d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreStoryLevelsSelectorWidget.OnStoryLevelUnlockedAnimation
	// void OnStoryLevelUnlockedAnimation();                                                                                 // [0x4bbd610] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreStoryLevelsSelectorWidget.GetStoryLevelButton
	// class UCoreStoryLevelButtonWidget* GetStoryLevelButton(int32_t Level);                                                // [0x4bbcae0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewsCore.CoreStoryLevelsSelectorWidget.AdaptButtonsPoolToData
	// void AdaptButtonsPoolToData(int32_t dataNumber);                                                                      // [0x4bbc9d0] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CoreSubtitlesWidget
/// Size: 0x0010 (0x000310 - 0x000320)
class UCoreSubtitlesWidget : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0310   (0x0008)  MISSED
	class UDBDTextBlock*                               SubtitlesTB;                                                // 0x0318   (0x0008)  
};

/// Class /Script/DBDUIViewsCore.CoreTemplateWidget
/// Size: 0x0008 (0x000298 - 0x0002A0)
class UCoreTemplateWidget : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0298   (0x0008)  MISSED
};

/// Class /Script/DBDUIViewsCore.CoreTestBuildFlagWidget
/// Size: 0x0070 (0x000328 - 0x000398)
class UCoreTestBuildFlagWidget : public UCoreBaseHudWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0328   (0x0008)  MISSED
	class UGridPanel*                                  HudTestFlagContainer;                                       // 0x0330   (0x0008)  
	class UTextBlock*                                  HudTopLineTextfield;                                        // 0x0338   (0x0008)  
	class UTextBlock*                                  HudBottomLineTextfield;                                     // 0x0340   (0x0008)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0348   (0x0050)  MISSED
};

/// Class /Script/DBDUIViewsCore.CoreToggleButtonWidget
/// Size: 0x0008 (0x000408 - 0x000410)
class UCoreToggleButtonWidget : public UCoreButtonWidget
{ 
public:
	bool                                               DefaultToggleState;                                         // 0x0408   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0409   (0x0007)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreToggleButtonWidget.SetToDefaultState
	// void SetToDefaultState();                                                                                             // [0x4bc3aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreToggleButtonWidget.SetActiveVisualState
	// void SetActiveVisualState(bool IsActive);                                                                             // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreToggleButtonWidget.IsToggled
	// bool IsToggled();                                                                                                     // [0x4bc25b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewsCore.CoreTutorialMysteryNoteWidget
/// Size: 0x0008 (0x000328 - 0x000330)
class UCoreTutorialMysteryNoteWidget : public UCoreBaseHudWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0328   (0x0008)  MISSED
};

/// Class /Script/DBDUIViewsCore.CoreTutorialObjectiveItem
/// Size: 0x0010 (0x000310 - 0x000320)
class UCoreTutorialObjectiveItem : public UCoreBaseUserWidget
{ 
public:
	SDK_UNDEFINED(16,3382) /* FMulticastInlineDelegate */ __um(TutorialObjectiveCompletedDelegate);                // 0x0310   (0x0010)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreTutorialObjectiveItem.SetObjectiveCompleted
	// void SetObjectiveCompleted(bool removeAfterCompletion);                                                               // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CoreTutorialObjectiveItem.InitObjective
	// void InitObjective(FTutorialObjectivesViewData& interactionsViewData);                                                // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CoreTutorialObjectivesContainer
/// Size: 0x0080 (0x000328 - 0x0003A8)
class UCoreTutorialObjectivesContainer : public UCoreBaseHudWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0328   (0x0008)  MISSED
	class UClass*                                      CoreTutorialObjectiveItemClass;                             // 0x0330   (0x0008)  
	int32_t                                            BasePooledInstanceAmount;                                   // 0x0338   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x033C   (0x0004)  MISSED
	class UGridPanel*                                  ObjectiveContainer;                                         // 0x0340   (0x0008)  
	TArray<class UCoreTutorialObjectiveItem*>          _objectivePool;                                             // 0x0348   (0x0010)  
	SDK_UNDEFINED(80,3383) /* TMap<FName, UCoreTutorialObjectiveItem*> */ __um(_objectiveItems);                   // 0x0358   (0x0050)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreTutorialObjectivesContainer.OnTutorialObjectiveCompleted
	// void OnTutorialObjectiveCompleted(class UCoreTutorialObjectiveItem* Item);                                            // [0x4bc2cd0] Final|Native|Private 
};

/// Class /Script/DBDUIViewsCore.CoreTutorialPopupWidget
/// Size: 0x0028 (0x000328 - 0x000350)
class UCoreTutorialPopupWidget : public UCoreBaseHudWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0328   (0x0008)  MISSED
	class UCoreInputSwitcherWidget*                    ProgressionInputSwitcher;                                   // 0x0330   (0x0008)  
	class UAkAudioEvent*                               ClosePopupSfx;                                              // 0x0338   (0x0008)  
	SDK_UNDEFINED(16,3384) /* FMulticastInlineDelegate */ __um(_notifTutoConfirmButtonClickDelegate);              // 0x0340   (0x0010)  
};

/// Class /Script/DBDUIViewsCore.CoreUnlockPersonalPerksPopupWidget
/// Size: 0x0030 (0x000368 - 0x000398)
class UCoreUnlockPersonalPerksPopupWidget : public UCoreGenericPopupWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0368   (0x0008)  MISSED
	TArray<class UCoreMenuPerkWidget*>                 _perkArray;                                                 // 0x0370   (0x0010)  
	class UCoreMenuPerkWidget*                         FirstPerk;                                                  // 0x0380   (0x0008)  
	class UCoreMenuPerkWidget*                         SecondPerk;                                                 // 0x0388   (0x0008)  
	class UCoreMenuPerkWidget*                         ThirdPerk;                                                  // 0x0390   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreUnlockPersonalPerksPopupWidget.ShowMenuPerkTooltip
	// void ShowMenuPerkTooltip(class UCoreButtonWidget* hoveredSlotWidget);                                                 // [0x4bc3b70] Final|Native|Private|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreUnlockPersonalPerksPopupWidget.HideMenuPerkTooltip
	// void HideMenuPerkTooltip(class UCoreButtonWidget* unhoveredSlotWidget);                                               // [0x4bb86e0] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CoreWalletWidget
/// Size: 0x0070 (0x000310 - 0x000380)
class UCoreWalletWidget : public UCoreBaseUserWidget
{ 
public:
	class UClass*                                      CoreCurrencyLabelWidgetClass;                               // 0x0310   (0x0008)  
	class UGridPanel*                                  CurrencyContainer;                                          // 0x0318   (0x0008)  
	SDK_UNDEFINED(80,3385) /* TMap<ECurrencyType, UCoreCurrencyLabelWidget*> */ __um(_currencyWidgetMap);          // 0x0320   (0x0050)  
	SDK_UNDEFINED(16,3386) /* FMulticastInlineDelegate */ __um(_currencyClickedDelegate);                          // 0x0370   (0x0010)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreWalletWidget.UpdateCurrency
	// void UpdateCurrency(ECurrencyType Type, int32_t newBalance, int32_t previousBalance);                                 // [0x4bc3c20] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreWalletWidget.PlayNotEnoughCurrency
	// void PlayNotEnoughCurrency(ECurrencyType Type);                                                                       // [0x4bc2d60] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreWalletWidget.OnCurrencyClicked
	// void OnCurrencyClicked(class UCoreButtonWidget* buttonTarget);                                                        // [0x4bc2690] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.CoreWalletWidget.InitWallet
	// void InitWallet(TArray<FCurrencyLabelViewData>& walletData);                                                          // [0x4bc24d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CoreWalletWidget.FullUpdateCurrency
	// void FullUpdateCurrency(FCurrencyLabelViewData& ViewData);                                                            // [0x4bc23e0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CoreWatermarkWidget
/// Size: 0x0040 (0x000310 - 0x000350)
class UCoreWatermarkWidget : public UCoreBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0310   (0x0008)  MISSED
	TArray<class UDBDTextBlock*>                       _watermarkDBDTextBlocks;                                    // 0x0318   (0x0010)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0328   (0x0028)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CoreWatermarkWidget.UpdateWatermarkText
	// void UpdateWatermarkText();                                                                                           // [0x4bc3d30] Final|Native|Protected 
};

/// Class /Script/DBDUIViewsCore.CurrencyConversionPopupWidget
/// Size: 0x0008 (0x000368 - 0x000370)
class UCurrencyConversionPopupWidget : public UCoreGenericPopupWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0368   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CurrencyConversionPopupWidget.SetData
	// void SetData(class UCurrencyConversionPopupViewData* Data);                                                           // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.CurrencyProgressionTooltipWidget
/// Size: 0x0080 (0x000320 - 0x0003A0)
class UCurrencyProgressionTooltipWidget : public UTooltipWidget
{ 
public:
	int32_t                                            MaxExpirationLabels;                                        // 0x0320   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0324   (0x0004)  MISSED
	class UClass*                                      CoreCurrencyExpirationLabelWidgetClass;                     // 0x0328   (0x0008)  
	class UDBDTextBlock*                               CurrencyTB;                                                 // 0x0330   (0x0008)  
	class UDBDTextBlock*                               CurrencyTitleTB;                                            // 0x0338   (0x0008)  
	class UDBDRichTextBlock*                           CurrencyDescriptionRTB;                                     // 0x0340   (0x0008)  
	class UDBDImage*                                   TitleBgIMG;                                                 // 0x0348   (0x0008)  
	class UDBDImage*                                   TitleDecorationIMG;                                         // 0x0350   (0x0008)  
	class UVerticalBox*                                EventContainer;                                             // 0x0358   (0x0008)  
	class UDBDTextBlock*                               EventNameTB;                                                // 0x0360   (0x0008)  
	class UDBDRichTextBlock*                           EventDescriptionTB;                                         // 0x0368   (0x0008)  
	class UDBDTextBlock*                               EventTimerTB;                                               // 0x0370   (0x0008)  
	class UVerticalBox*                                ExpirationPanel;                                            // 0x0378   (0x0008)  
	class UVerticalBox*                                ExpirationLabelContainer;                                   // 0x0380   (0x0008)  
	class UDBDTextBlock*                               ExpirationTitleTB;                                          // 0x0388   (0x0008)  
	TArray<class UCoreCurrencyExpirationLabelWidget*>  _currencyExpirationWidgetPool;                              // 0x0390   (0x0010)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CurrencyProgressionTooltipWidget.SetTooltipData
	// void SetTooltipData(FCurrencyProgressionTooltipViewData& currencyViewData);                                           // [0x4bc3ac0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CustomizationItemGridContainer
/// Size: 0x0070 (0x000310 - 0x000380)
class UCustomizationItemGridContainer : public UCoreBaseUserWidget
{ 
public:
	class UClass*                                      _customizationRewardWidgetClass;                            // 0x0310   (0x0008)  
	class UClass*                                      _emptyRewardWidgetClass;                                    // 0x0318   (0x0008)  
	bool                                               _setSmallTemplate;                                          // 0x0320   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0321   (0x0003)  MISSED
	int32_t                                            _columnCountInGrid;                                         // 0x0324   (0x0004)  
	float                                              _customizationTileScale;                                    // 0x0328   (0x0004)  
	int32_t                                            _layoutMask;                                                // 0x032C   (0x0004)  
	int32_t                                            _rowCountToShowScrollBar;                                   // 0x0330   (0x0004)  
	bool                                               _fillGridWithEmptyItems;                                    // 0x0334   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0335   (0x0003)  MISSED
	class UGridPanel*                                  GridContainer;                                              // 0x0338   (0x0008)  
	class UDBDScrollBox*                               ScrollBox;                                                  // 0x0340   (0x0008)  
	SDK_UNDEFINED(24,3387) /* FText */                 __um(_scrollLabelText);                                     // 0x0348   (0x0018)  
	TArray<class UCoreStoreCustomizationItemWidget*>   _customizationRewards;                                      // 0x0360   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0370   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CustomizationItemGridContainer.SetSelectedItem
	// void SetSelectedItem(int32_t selectedIndex);                                                                          // [0x4bc3790] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CustomizationItemGridContainer.SetScrollPrompt
	// void SetScrollPrompt(class UCoreKeyListenerInputPromptWidget* DisplayPrompt);                                         // [0x4bc3700] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CustomizationItemGridContainer.SetItemsLayout
	// void SetItemsLayout(int32_t layoutMask);                                                                              // [0x4bc3560] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CustomizationItemGridContainer.SetData
	// void SetData(TArray<UStoreCustomizationItemViewData*>& customizationRewardsData, int32_t selectedIndex);              // [0x4bc2fc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CustomizationItemGridContainer.OnItemClickedDelegate__DelegateSignature
	// void OnItemClickedDelegate__DelegateSignature(int32_t selectedIndex);                                                 // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/DBDUIViewsCore.CustomizationItemGridContainer.OnItemClicked
	// void OnItemClicked(class UCoreSelectableButtonWidget* buttonTarget, bool IsSelected);                                 // [0x4bc2ae0] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.CustomizationItemGridContainer.ClearGrid
	// void ClearGrid();                                                                                                     // [0x4bc2340] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CustomizationItemOriginWidget
/// Size: 0x0050 (0x000310 - 0x000360)
class UCustomizationItemOriginWidget : public UCoreBaseUserWidget
{ 
public:
	class UDBDRichTextBlock*                           InstructionText;                                            // 0x0310   (0x0008)  
	class UDBDImage*                                   InstructionImage;                                           // 0x0318   (0x0008)  
	class UDBDRichTextBlock*                           UnlockTitle;                                                // 0x0320   (0x0008)  
	class UDBDRichTextBlock*                           UnlockSubtitle;                                             // 0x0328   (0x0008)  
	class UCoreCurrencySwitcherWidget*                 CurrencyButton;                                             // 0x0330   (0x0008)  
	class UCoreInputSwitcherWidget*                    ArchivesButton;                                             // 0x0338   (0x0008)  
	class UCoreInputSwitcherWidget*                    StoreButton;                                                // 0x0340   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0348   (0x0018)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.CustomizationItemOriginWidget.SetStoreState
	// void SetStoreState();                                                                                                 // [0x4b97140] Native|Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CustomizationItemOriginWidget.SetState
	// void SetState(FCustomizationItemOriginViewData& ViewData);                                                            // [0x4bc3820] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CustomizationItemOriginWidget.SetMilestonePointsState
	// void SetMilestonePointsState(TArray<FText>& Args);                                                                    // [0x4bc35f0] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CustomizationItemOriginWidget.SetInputSwitcherEnabled
	// void SetInputSwitcherEnabled(class UCoreInputSwitcherWidget* inputSwitcher, bool Enabled);                            // [0x4bc3490] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CustomizationItemOriginWidget.SetGameplayState
	// void SetGameplayState(TArray<FText>& Args);                                                                           // [0x4bc3380] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CustomizationItemOriginWidget.SetDefaultState
	// void SetDefaultState();                                                                                               // [0x4b97160] Native|Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CustomizationItemOriginWidget.SetData
	// void SetData(FCustomizationItemOriginViewData& ViewData);                                                             // [0x4bc30c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CustomizationItemOriginWidget.SetCurrencyPurchaseState
	// void SetCurrencyPurchaseState(FPriceTagViewData& CurrencyData);                                                       // [0x4bc2ef0] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CustomizationItemOriginWidget.SetArchivesState
	// void SetArchivesState(TArray<FText>& Args);                                                                           // [0x4bc2de0] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CustomizationItemOriginWidget.OnButtonClick
	// void OnButtonClick();                                                                                                 // [0x4bc25e0] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.CustomizationItemOriginWidget.DisableStoreButton
	// void DisableStoreButton();                                                                                            // [0x4bc23c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CustomizationItemOriginWidget.DisableInputs
	// void DisableInputs();                                                                                                 // [0x4bc23a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CustomizationItemOriginWidget.DisableCurrencyButton
	// void DisableCurrencyButton();                                                                                         // [0x4bc2380] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CustomizationItemOriginWidget.DisableArchivesButton
	// void DisableArchivesButton();                                                                                         // [0x4bc2360] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.CustomizationTooltipWidget
/// Size: 0x0010 (0x000320 - 0x000330)
class UCustomizationTooltipWidget : public UTooltipWidget
{ 
public:
	class UDBDTextBlock*                               ToolTipStatusTB;                                            // 0x0320   (0x0008)  
	class UDBDRichTextBlock*                           ToolTipDescriptionRTB;                                      // 0x0328   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.CustomizationTooltipWidget.SetTooltipData
	// void SetTooltipData(FCustomizationTooltipViewData& customizationViewData);                                            // [0x61c32d0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.CustomizationTooltipWidget.SetStatusText
	// void SetStatusText(bool IsEquipped, bool IsOwned, bool IsLocked);                                                     // [0x4bc3970] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.CustomizationTooltipWidget.AppendToDescriptionText
	// void AppendToDescriptionText(FText& appendedText);                                                                    // [0x4bc2270] Final|Native|Public|HasOutParms 
};

/// Class /Script/DBDUIViewsCore.DailyRitualsContainerWidget
/// Size: 0x0098 (0x000310 - 0x0003A8)
class UDailyRitualsContainerWidget : public UCoreBaseUserWidget
{ 
public:
	SDK_UNDEFINED(16,3388) /* FMulticastInlineDelegate */ __um(_claimButtonClickedDelegate);                       // 0x0310   (0x0010)  
	SDK_UNDEFINED(16,3389) /* FMulticastInlineDelegate */ __um(_removeButtonClickedDelegate);                      // 0x0320   (0x0010)  
	SDK_UNDEFINED(16,3390) /* FMulticastInlineDelegate */ __um(_onOutOfDailyRitualsDelegate);                      // 0x0330   (0x0010)  
	class UClass*                                      DailyRitualTileWidgetClass;                                 // 0x0340   (0x0008)  
	class UCanvasPanel*                                Container;                                                  // 0x0348   (0x0008)  
	class UDBDTextBlock*                               NoRitualWarningText;                                        // 0x0350   (0x0008)  
	float                                              TilePadding;                                                // 0x0358   (0x0004)  
	float                                              FadeInNoRitualsWarningTextDuration;                         // 0x035C   (0x0004)  
	float                                              AlignmentAnimationDuration;                                 // 0x0360   (0x0004)  
	unsigned char                                      UnknownData00_5[0x3C];                                      // 0x0364   (0x003C)  MISSED
	class UUITweenInstance*                            _alignAssignedRitualsTween;                                 // 0x03A0   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.DailyRitualsContainerWidget.StartAnim
	// void StartAnim();                                                                                                     // [0x4bc3c00] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.DailyRitualsContainerWidget.SetData
	// void SetData(TArray<FDailyRitualViewData> dailyRitualsData, bool isAfterTrial);                                       // [0x4bc3210] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.DailyRitualsContainerWidget.OnRecentlyAssignedDailyRitualFadeInComplete
	// void OnRecentlyAssignedDailyRitualFadeInComplete(class UDailyRitualTileWidget* dailyRitualTile);                      // [0x4bc2bb0] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.DailyRitualsContainerWidget.OnDelayUntilFadeInSequenceComplete
	// void OnDelayUntilFadeInSequenceComplete(class UUITweenInstance* delayUntilFadeInSequenceTween);                       // [0x4bc2a50] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.DailyRitualsContainerWidget.OnDailyRitualTileFadeOutComplete
	// void OnDailyRitualTileFadeOutComplete(class UDailyRitualTileWidget* dailyRitualTile);                                 // [0x4bc29c0] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.DailyRitualsContainerWidget.OnDailyRitualRemoveButtonClicked
	// void OnDailyRitualRemoveButtonClicked(FString dailyRitualKey);                                                        // [0x4bc2880] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.DailyRitualsContainerWidget.OnDailyRitualClaimButtonClicked
	// void OnDailyRitualClaimButtonClicked(FString dailyRitualKey);                                                         // [0x4bc2740] Final|Native|Protected 
};

/// Class /Script/DBDUIViewsCore.DailyRitualsPopupWidget
/// Size: 0x0070 (0x000368 - 0x0003D8)
class UDailyRitualsPopupWidget : public UCoreGenericPopupWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0368   (0x0008)  MISSED
	SDK_UNDEFINED(16,3391) /* FMulticastInlineDelegate */ __um(_onRemovedDailyRitualDelegate);                     // 0x0370   (0x0010)  
	SDK_UNDEFINED(16,3392) /* FMulticastInlineDelegate */ __um(_onClaimedRitualDelegate);                          // 0x0380   (0x0010)  
	SDK_UNDEFINED(16,3393) /* FMulticastInlineDelegate */ __um(_onClaimedAllRitualsDelegate);                      // 0x0390   (0x0010)  
	class UDBDImage*                                   BaseBG;                                                     // 0x03A0   (0x0008)  
	class UOverlay*                                    DailyRitualsDetails;                                        // 0x03A8   (0x0008)  
	class UDailyRitualsContainerWidget*                DailyRitualsContainer;                                      // 0x03B0   (0x0008)  
	class UDBDRichTextBlock*                           FooterText;                                                 // 0x03B8   (0x0008)  
	class UMaterialInstance*                           DefaultBackgroundMaterialInstance;                          // 0x03C0   (0x0008)  
	class UMaterialInstance*                           AfterTrialBackgroundMaterialInstance;                       // 0x03C8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x03D0   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.DailyRitualsPopupWidget.SetVisuals
	// void SetVisuals(bool isAfterTrial);                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.DailyRitualsPopupWidget.OnDailyRitualRemoveButtonClicked
	// void OnDailyRitualRemoveButtonClicked(FString dailyRitualKey);                                                        // [0x4bc2920] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.DailyRitualsPopupWidget.OnDailyRitualClaimButtonClicked
	// void OnDailyRitualClaimButtonClicked(FString dailyRitualKey);                                                         // [0x4bc27e0] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.DailyRitualsPopupWidget.OnDailyRitualClaimAllButtonClicked
	// void OnDailyRitualClaimAllButtonClicked();                                                                            // [0x4bc2720] Final|Native|Protected 
};

/// Class /Script/DBDUIViewsCore.DailyRitualTileWidget
/// Size: 0x0130 (0x000310 - 0x000440)
class UDailyRitualTileWidget : public UCoreBaseUserWidget
{ 
public:
	SDK_UNDEFINED(16,3394) /* FMulticastInlineDelegate */ __um(_claimButtonClickedDelegate);                       // 0x0310   (0x0010)  
	SDK_UNDEFINED(16,3395) /* FMulticastInlineDelegate */ __um(_removeButtonClickedDelegate);                      // 0x0320   (0x0010)  
	SDK_UNDEFINED(16,3396) /* FMulticastInlineDelegate */ __um(_onDailyRitualTileFadeInCompletedDelegate);         // 0x0330   (0x0010)  
	SDK_UNDEFINED(16,3397) /* FMulticastInlineDelegate */ __um(_onDailyRitualTileFadeOutCompletedDelegate);        // 0x0340   (0x0010)  
	class USizeBox*                                    ContainerSizeBox;                                           // 0x0350   (0x0008)  
	class UDBDImage*                                   IconImage;                                                  // 0x0358   (0x0008)  
	class UDBDImage*                                   BackgroundImage;                                            // 0x0360   (0x0008)  
	class UDBDImage*                                   ProgressBar;                                                // 0x0368   (0x0008)  
	class UDBDImage*                                   BackgroundSheen;                                            // 0x0370   (0x0008)  
	class UDBDTextBlock*                               TitleTextBlock;                                             // 0x0378   (0x0008)  
	class UDBDTextBlock*                               RewardTextBlock;                                            // 0x0380   (0x0008)  
	class UDBDTextBlock*                               DescriptionTextBlock;                                       // 0x0388   (0x0008)  
	class UDBDTextBlock*                               ProgressTextBlock;                                          // 0x0390   (0x0008)  
	class UCoreButtonWidget*                           ClaimButton;                                                // 0x0398   (0x0008)  
	class UCoreButtonWidget*                           RemoveButton;                                               // 0x03A0   (0x0008)  
	class UMaterialInterface*                          DefaultBackgroundTexture;                                   // 0x03A8   (0x0008)  
	class UMaterialInterface*                          NewBackgroundTexture;                                       // 0x03B0   (0x0008)  
	class UMaterialInterface*                          CompletedBackgroundTexture;                                 // 0x03B8   (0x0008)  
	FDailyRitualViewData                               _dailyRitualData;                                           // 0x03C0   (0x0078)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0438   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.DailyRitualTileWidget.PlayFadeOutAnimation
	// void PlayFadeOutAnimation();                                                                                          // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.DailyRitualTileWidget.PlayFadeInAnimation
	// void PlayFadeInAnimation();                                                                                           // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.DailyRitualTileWidget.OnRemoveButtonClicked
	// void OnRemoveButtonClicked(class UCoreButtonWidget* Button);                                                          // [0x4bc2c40] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.DailyRitualTileWidget.OnClaimButtonClicked
	// void OnClaimButtonClicked(class UCoreButtonWidget* Button);                                                           // [0x4bc2600] Final|Native|Protected 
};

/// Class /Script/DBDUIViewsCore.DBDButton
/// Size: 0x0018 (0x0004A0 - 0x0004B8)
class UDBDButton : public UButton
{ 
public:
	bool                                               SendAnalyticsData;                                          // 0x04A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x04A1   (0x0007)  MISSED
	SDK_UNDEFINED(16,3398) /* FString */               __um(AnalyticsName);                                        // 0x04A8   (0x0010)  
};

/// Class /Script/DBDUIViewsCore.DBDComboBoxString
/// Size: 0x0000 (0x000EE8 - 0x000EE8)
class UDBDComboBoxString : public UComboBoxString
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewsCore.DBDComboBoxString.SetData
	// void SetData(TArray<FString>& OptionsList, FString DefaultOption);                                                    // [0x4bc81f0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.DBDDropDownListButton
/// Size: 0x0000 (0x000478 - 0x000478)
class UDBDDropDownListButton : public UCoreTabWidget
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewsCore.DBDDropDownListButton.ToggleDropDownArrow
	// void ToggleDropDownArrow(bool showArrow);                                                                             // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.DBDDropDownListWidget
/// Size: 0x0028 (0x000398 - 0x0003C0)
class UDBDDropDownListWidget : public UCoreTabContainerWidget
{ 
public:
	SDK_UNDEFINED(16,3399) /* FMulticastInlineDelegate */ __um(OnSelectedOptionDelegate);                          // 0x0398   (0x0010)  
	class UCoreButtonWidget*                           _triggerButton;                                             // 0x03A8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x03B0   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.DBDDropDownListWidget.UpdateDropDown
	// void UpdateDropDown();                                                                                                // [0x4b97180] Native|Public        
	// Function /Script/DBDUIViewsCore.DBDDropDownListWidget.UnbindFromTrigger
	// void UnbindFromTrigger();                                                                                             // [0x4bc9f20] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.DBDDropDownListWidget.OnUserClicked
	// void OnUserClicked(FPointerEvent& MouseEvent);                                                                        // [0x4bc7e50] Native|Protected|HasOutParms 
	// Function /Script/DBDUIViewsCore.DBDDropDownListWidget.OnTriggerClicked
	// void OnTriggerClicked(class UCoreButtonWidget* buttonTarget);                                                         // [0x4bc7dc0] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.DBDDropDownListWidget.OnSelectedOptionDelegate__DelegateSignature
	// void OnSelectedOptionDelegate__DelegateSignature(FTabWidgetData buttonData);                                          // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/DBDUIViewsCore.DBDDropDownListWidget.OnOptionSelected
	// void OnOptionSelected(class UCoreSelectableButtonWidget* selectedButton);                                             // [0x4bc7c10] Native|Protected     
	// Function /Script/DBDUIViewsCore.DBDDropDownListWidget.HideDropDownList
	// void HideDropDownList();                                                                                              // [0x4bc74d0] Final|Native|Private|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.DBDDropDownListWidget.BindToTrigger
	// void BindToTrigger(class UCoreButtonWidget* triggerButton);                                                           // [0x4bc72a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.DBDImage
/// Size: 0x0048 (0x000250 - 0x000298)
class UDBDImage : public UImage
{ 
public:
	class UTexture2D*                                  DefaultImage;                                               // 0x0250   (0x0008)  
	SDK_UNDEFINED(16,3400) /* FMulticastInlineDelegate */ __um(_onImageStreamingCancelled);                        // 0x0258   (0x0010)  
	SDK_UNDEFINED(16,3401) /* FMulticastInlineDelegate */ __um(_onImageStreamingStarted);                          // 0x0268   (0x0010)  
	SDK_UNDEFINED(16,3402) /* FMulticastInlineDelegate */ __um(_onImageStreamingCompleted);                        // 0x0278   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0288   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.DBDImage.SetBrushFromTextureWithDefault
	// void SetBrushFromTextureWithDefault(class UTexture2D* Texture, bool matchSize);                                       // [0x4bc8120] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.DBDImage.SetBrushFromSoftTextureWithDefault
	// void SetBrushFromSoftTextureWithDefault(TWeakObjectPtr<UTexture2D*> SoftTexture, bool matchSize);                     // [0x4bc7fc0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/DBDUIViewsCore.TextBlockOverrideProperties
/// Size: 0x0048 (0x000000 - 0x000048)
struct FTextBlockOverrideProperties
{ 
	bool                                               UseColor;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSlateColor                                        Color;                                                      // 0x0008   (0x0028)  
	bool                                               UseOpacity;                                                 // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              Opacity;                                                    // 0x0034   (0x0004)  
	bool                                               UseSize;                                                    // 0x0038   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            Size;                                                       // 0x003C   (0x0004)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Class /Script/DBDUIViewsCore.DBDRichTextBlock
/// Size: 0x0110 (0x0006D0 - 0x0007E0)
class UDBDRichTextBlock : public URichTextBlock
{ 
public:
	SDK_UNDEFINED(16,3403) /* FString */               __um(TextStyle);                                            // 0x06D0   (0x0010)  
	class USwitchDockStateManager*                     _switchDockStateManager;                                    // 0x06E0   (0x0008)  
	class UDBDTextManager*                             _textManager;                                               // 0x06E8   (0x0008)  
	int32_t                                            _characterLimit;                                            // 0x06F0   (0x0004)  
	bool                                               _isUpperCase;                                               // 0x06F4   (0x0001)  
	bool                                               _hasLargeText;                                              // 0x06F5   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x06F6   (0x0002)  MISSED
	FTextBlockOverrideProperties                       _largeTextProperties;                                       // 0x06F8   (0x0048)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x0740   (0x0001)  MISSED
	bool                                               _overrideUndockedPropertiesWithLargeText;                   // 0x0741   (0x0001)  
	bool                                               _hasUndocking;                                              // 0x0742   (0x0001)  
	unsigned char                                      UnknownData02_5[0x5];                                       // 0x0743   (0x0005)  MISSED
	FTextBlockOverrideProperties                       _undockedProperties;                                        // 0x0748   (0x0048)  
	unsigned char                                      UnknownData03_6[0x50];                                      // 0x0790   (0x0050)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.DBDRichTextBlock.SetIsUpperCase
	// void SetIsUpperCase(bool isUpperCase);                                                                                // [0x4bc8710] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.DBDRichTextBlock.SetHTMLText
	// void SetHTMLText(FText& InText);                                                                                      // [0x4bc84c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.DBDRichTextBlock.PreviewUndocked
	// void PreviewUndocked();                                                                                               // [0x45fe020] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.DBDRichTextBlock.PreviewLargeText
	// void PreviewLargeText();                                                                                              // [0x45fe020] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.DBDRichTextBlock.PreviewHTMLText
	// void PreviewHTMLText();                                                                                               // [0x45fe020] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.DBDRichTextBlock.OnSwitchDockStateChanged
	// void OnSwitchDockStateChanged(bool isDocked);                                                                         // [0x4bc7ca0] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.DBDRichTextBlock.OnLargeTextSettingsChanged
	// void OnLargeTextSettingsChanged(bool isLargeText);                                                                    // [0x4bc7720] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.DBDRichTextBlock.GetIsUpperCase
	// bool GetIsUpperCase();                                                                                                // [0x4bc7330] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewsCore.DBDScrollBox
/// Size: 0x0040 (0x000910 - 0x000950)
class UDBDScrollBox : public UScrollBox
{ 
public:
	bool                                               _useControllerScroll;                                       // 0x0910   (0x0001)  
	bool                                               _shouldScrollOnMouseOver;                                   // 0x0911   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0912   (0x0002)  MISSED
	float                                              _scrollSpeed;                                               // 0x0914   (0x0004)  
	class UCoreKeyListenerInputPromptWidget*           _displayPrompt;                                             // 0x0918   (0x0008)  
	SDK_UNDEFINED(24,3404) /* FText */                 __um(_displayPromptText);                                   // 0x0920   (0x0018)  
	EShowScrollDisplayPrompt                           _showDisplayPrompt;                                         // 0x0938   (0x0001)  
	bool                                               IsUsingSmoothMask;                                          // 0x0939   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x093A   (0x0006)  MISSED
	class URetainerBox*                                SmoothMaskRetainerBox;                                      // 0x0940   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0948   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.DBDScrollBox.UpdateSmoothMask
	// void UpdateSmoothMask(float CurrentOffset);                                                                           // [0x4bc9f60] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.DBDScrollBox.UpdateDisplayPrompt
	// void UpdateDisplayPrompt();                                                                                           // [0x4bc9f40] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.DBDScrollBox.SetDisplayPrompt
	// void SetDisplayPrompt(class UCoreKeyListenerInputPromptWidget* DisplayPrompt);                                        // [0x4bc8320] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.DBDScrollBox.OnControlModeChanged
	// void OnControlModeChanged(EControlMode controlMode);                                                                  // [0x4bc76a0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.DBDScrollBox.IsScrollBarNeeded
	// bool IsScrollBarNeeded();                                                                                             // [0x4bc7530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDUIViewsCore.DBDScrollBox.IsMouseOver
	// bool IsMouseOver();                                                                                                   // [0x4bc7510] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.DBDScrollBox.HandleControllerInput
	// void HandleControllerInput(float analogValue);                                                                        // [0x4bc7450] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.DBDTextBlock
/// Size: 0x0110 (0x0002F0 - 0x000400)
class UDBDTextBlock : public UTextBlock
{ 
public:
	SDK_UNDEFINED(16,3405) /* FString */               __um(TextStyle);                                            // 0x02F0   (0x0010)  
	class USwitchDockStateManager*                     _switchDockStateManager;                                    // 0x0300   (0x0008)  
	class UDBDTextManager*                             _textManager;                                               // 0x0308   (0x0008)  
	int32_t                                            _characterLimit;                                            // 0x0310   (0x0004)  
	bool                                               _isUpperCase;                                               // 0x0314   (0x0001)  
	bool                                               _hasLargeText;                                              // 0x0315   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0316   (0x0002)  MISSED
	FTextBlockOverrideProperties                       _largeTextProperties;                                       // 0x0318   (0x0048)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x0360   (0x0001)  MISSED
	bool                                               _overrideUndockedPropertiesWithLargeText;                   // 0x0361   (0x0001)  
	bool                                               _hasUndocking;                                              // 0x0362   (0x0001)  
	unsigned char                                      UnknownData02_5[0x5];                                       // 0x0363   (0x0005)  MISSED
	FTextBlockOverrideProperties                       _undockedProperties;                                        // 0x0368   (0x0048)  
	unsigned char                                      UnknownData03_6[0x50];                                      // 0x03B0   (0x0050)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.DBDTextBlock.SetIsUpperCase
	// void SetIsUpperCase(bool isUpperCase);                                                                                // [0x4bc87a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.DBDTextBlock.PreviewUndocked
	// void PreviewUndocked();                                                                                               // [0x45fe020] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.DBDTextBlock.PreviewLargeText
	// void PreviewLargeText();                                                                                              // [0x45fe020] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.DBDTextBlock.PopulateTextStyles
	// void PopulateTextStyles();                                                                                            // [0x4bc7fa0] Final|Native|Static|Protected 
	// Function /Script/DBDUIViewsCore.DBDTextBlock.OnSwitchDockStateChanged
	// void OnSwitchDockStateChanged(bool isDocked);                                                                         // [0x4bc7d30] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.DBDTextBlock.OnLargeTextSettingsChanged
	// void OnLargeTextSettingsChanged(bool isLargeText);                                                                    // [0x4bc77b0] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.DBDTextBlock.GetTextStyles
	// TArray<FString> GetTextStyles();                                                                                      // [0x4bc7370] Final|Native|Static|Protected 
	// Function /Script/DBDUIViewsCore.DBDTextBlock.GetIsUpperCase
	// bool GetIsUpperCase();                                                                                                // [0x4bc7350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewsCore.TooltipRoot
/// Size: 0x0008 (0x000298 - 0x0002A0)
class UTooltipRoot : public UUserWidget
{ 
public:
	class UCanvasPanel*                                _canvasPanel;                                               // 0x0298   (0x0008)  
};

/// Class /Script/DBDUIViewsCore.DBDTooltipManager
/// Size: 0x0068 (0x000038 - 0x0000A0)
class UDBDTooltipManager : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0038   (0x0008)  MISSED
	class UTooltipRoot*                                _rootWidget;                                                // 0x0040   (0x0008)  
	SDK_UNDEFINED(80,3406) /* TMap<ETooltipType, UUserWidget*> */ __um(_tooltipPool);                              // 0x0048   (0x0050)  
	class UUserWidget*                                 _currentTooltip;                                            // 0x0098   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.DBDTooltipManager.ShowRankTooltip
	// void ShowRankTooltip(FRankTooltipViewData& tooltipViewData, FGeometry& triggerGeometry, ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment); // [0x4bc9d50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.DBDTooltipManager.ShowPlayerLevelTooltip
	// void ShowPlayerLevelTooltip(FCorePlayerLevelTooltipViewData& tooltipViewData, FGeometry& triggerGeometry, ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment); // [0x4bc9ba0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.DBDTooltipManager.ShowLoadoutTooltip
	// void ShowLoadoutTooltip(FLoadoutTooltipData& tooltipViewData, FGeometry& triggerGeometry, ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment); // [0x4bc98d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.DBDTooltipManager.ShowLabelTooltip
	// void ShowLabelTooltip(FText& tooltipViewData, FGeometry& triggerGeometry, ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment); // [0x4bc96e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.DBDTooltipManager.ShowCustomizationTooltip
	// void ShowCustomizationTooltip(FCustomizationTooltipViewData& tooltipViewData, FGeometry& triggerGeometry, ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment); // [0x4bc9520] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.DBDTooltipManager.ShowCurrencyTooltip
	// void ShowCurrencyTooltip(FCurrencyProgressionTooltipViewData& tooltipViewData, FGeometry& triggerGeometry, ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment); // [0x4bc9360] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.DBDTooltipManager.ShowCharacterTooltip
	// void ShowCharacterTooltip(FCharacterTooltipViewData& tooltipViewData, FGeometry& triggerGeometry, ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment); // [0x4bc9170] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.DBDTooltipManager.ShowArchiveRewardNodeTooltip
	// void ShowArchiveRewardNodeTooltip(FArchiveRewardNodeTooltipViewData& tooltipViewData, FGeometry& triggerGeometry, ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment); // [0x4bc8f80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.DBDTooltipManager.ShowArchiveNodeTooltip
	// void ShowArchiveNodeTooltip(FArchiveNodeViewData& tooltipViewData, FGeometry& triggerGeometry, ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment); // [0x4bc8b80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.DBDTooltipManager.ShowArchiveCompendiumTooltip
	// void ShowArchiveCompendiumTooltip(FCompendiumButtonData& tooltipViewData, FGeometry& triggerGeometry, ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment); // [0x4bc8940] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.DBDTooltipManager.OnViewportCreated
	// void OnViewportCreated();                                                                                             // [0x4bc7f80] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.DBDTooltipManager.HideTooltip
	// void HideTooltip();                                                                                                   // [0x4bc74f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.DBDWrapBox
/// Size: 0x0020 (0x000148 - 0x000168)
class UDBDWrapBox : public UPanelWidget
{ 
public:
	FVector2D                                          InnerSlotPadding;                                           // 0x0148   (0x0008)  
	float                                              WrapWidth;                                                  // 0x0150   (0x0004)  
	bool                                               bExplicitWrapWidth;                                         // 0x0154   (0x0001)  
	SDK_UNDEFINED(1,3407) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0155   (0x0001)  
	unsigned char                                      UnknownData00_6[0x12];                                      // 0x0156   (0x0012)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.DBDWrapBox.SetInnerSlotPadding
	// void SetInnerSlotPadding(FVector2D InPadding);                                                                        // [0x4bc8690] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.DBDWrapBox.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> inHorizontalAlignment);                                 // [0x4bc8590] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.DBDWrapBox.AddChildToWrapBox
	// class UDBDWrapBoxSlot* AddChildToWrapBox(class UWidget* Content);                                                     // [0x4bc7200] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.DBDWrapBoxSlot
/// Size: 0x0028 (0x000040 - 0x000068)
class UDBDWrapBoxSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0040   (0x0010)  
	bool                                               bFillEmptySpace;                                            // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0051   (0x0003)  MISSED
	float                                              FillSpanWhenLessThan;                                       // 0x0054   (0x0004)  
	SDK_UNDEFINED(1,3408) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0058   (0x0001)  
	SDK_UNDEFINED(1,3409) /* TEnumAsByte<EVerticalAlignment> */ __um(VerticalAlignment);                           // 0x0059   (0x0001)  
	unsigned char                                      UnknownData01_6[0xE];                                       // 0x005A   (0x000E)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.DBDWrapBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> inVerticalAlignment);                                       // [0x4bc88c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.DBDWrapBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                   // [0x4bc8830] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.DBDWrapBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> inHorizontalAlignment);                                 // [0x4bc8610] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.DBDWrapBoxSlot.SetFillSpanWhenLessThan
	// void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);                                                           // [0x4bc8440] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.DBDWrapBoxSlot.SetFillEmptySpace
	// void SetFillEmptySpace(bool InbFillEmptySpace);                                                                       // [0x4bc83b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.DragZone
/// Size: 0x0058 (0x000298 - 0x0002F0)
class UDragZone : public UUserWidget
{ 
public:
	SDK_UNDEFINED(16,3410) /* FMulticastInlineDelegate */ __um(OnDragDelegate);                                    // 0x0298   (0x0010)  
	float                                              DeadZone;                                                   // 0x02A8   (0x0004)  
	EDragZoneAxis                                      Axis;                                                       // 0x02AC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02AD   (0x0003)  MISSED
	class UBorder*                                     DebugPreview;                                               // 0x02B0   (0x0008)  
	class UDBDButton*                                  HitzoneButton;                                              // 0x02B8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x02C0   (0x0030)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.DragZone.OnMouseReleaseGlobal
	// void OnMouseReleaseGlobal(FPointerEvent& MouseEvent);                                                                 // [0x4bc7ae0] Final|Native|Private|HasOutParms 
	// Function /Script/DBDUIViewsCore.DragZone.OnMousePressHitzone
	// void OnMousePressHitzone();                                                                                           // [0x4bc7ac0] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.DragZone.OnMousePressGlobal
	// void OnMousePressGlobal(FPointerEvent& MouseEvent);                                                                   // [0x4bc7990] Final|Native|Private|HasOutParms 
	// Function /Script/DBDUIViewsCore.DragZone.OnMouseMoveGlobal
	// void OnMouseMoveGlobal(FPointerEvent& MouseEvent);                                                                    // [0x4bc7860] Final|Native|Private|HasOutParms 
	// Function /Script/DBDUIViewsCore.DragZone.OnMouseHoverHitzone
	// void OnMouseHoverHitzone();                                                                                           // [0x4bc7840] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.DragZone.OnAnalogInput
	// void OnAnalogInput(FAnalogInputEvent& analogEvent);                                                                   // [0x4bc7580] Final|Native|Private|HasOutParms 
};

/// Class /Script/DBDUIViewsCore.EventEntryRewardsTabWidget
/// Size: 0x0250 (0x000330 - 0x000580)
class UEventEntryRewardsTabWidget : public UCoreTabContentWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0330   (0x0008)  MISSED
	FEventEntryPopupSkinUIData                         _skinData;                                                  // 0x0338   (0x0220)  
	class UEventEntryRewardsDisplayWidget*             EventEntryRewardsDisplayWidget;                             // 0x0558   (0x0008)  
	SDK_UNDEFINED(16,3411) /* FMulticastInlineDelegate */ __um(_onRewardGridItemClicked);                          // 0x0560   (0x0010)  
	SDK_UNDEFINED(16,3412) /* FMulticastInlineDelegate */ __um(_onPreviewAreaItemClicked);                         // 0x0570   (0x0010)  


	/// Functions
	// Function /Script/DBDUIViewsCore.EventEntryRewardsTabWidget.SetScrollPrompt
	// void SetScrollPrompt(class UCoreKeyListenerInputPromptWidget* DisplayPrompt);                                         // [0x4bce320] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.EventEntryRewardsTabWidget.OnRewardGridItemClicked
	// void OnRewardGridItemClicked(int32_t selectedIndex);                                                                  // [0x4bcde20] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.EventEntryRewardsTabWidget.OnPreviewAreaItemClicked
	// void OnPreviewAreaItemClicked(int32_t selectedIndex);                                                                 // [0x4bcdd90] Final|Native|Protected 
};

/// Class /Script/DBDUIViewsCore.EventEntryCollectionTabWidget
/// Size: 0x0000 (0x000580 - 0x000580)
class UEventEntryCollectionTabWidget : public UEventEntryRewardsTabWidget
{ 
public:
};

/// Class /Script/DBDUIViewsCore.EventEntryDetailsTabContentWidget
/// Size: 0x0028 (0x000310 - 0x000338)
class UEventEntryDetailsTabContentWidget : public UCoreBaseUserWidget
{ 
public:
	class UDBDTextBlock*                               titleText;                                                  // 0x0310   (0x0008)  
	class UDBDRichTextBlock*                           descriptionText;                                            // 0x0318   (0x0008)  
	SDK_UNDEFINED(24,3413) /* FText */                 __um(_scrollLabelText);                                     // 0x0320   (0x0018)  


	/// Functions
	// Function /Script/DBDUIViewsCore.EventEntryDetailsTabContentWidget.SetData
	// void SetData(FSpecialEventDetailsTabContentData& ContentData, FEventEntryPopupSkinUIData& skinData);                  // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.EventEntryDetailsTabLayoutWidget
/// Size: 0x0000 (0x000310 - 0x000310)
class UEventEntryDetailsTabLayoutWidget : public UCoreBaseUserWidget
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewsCore.EventEntryDetailsTabLayoutWidget.SetData
	// void SetData(FEventEntryPopupSkinUIData& skinData, TArray<FSpecialEventDetailsTabContentData>& ContentData, TWeakObjectPtr<UTexture2D*>& ImageTexture); // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.EventEntryDetailsTabWidget
/// Size: 0x0278 (0x000330 - 0x0005A8)
class UEventEntryDetailsTabWidget : public UCoreTabContentWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0330   (0x0008)  MISSED
	FEventEntryPopupSkinUIData                         _skinData;                                                  // 0x0338   (0x0220)  
	SDK_UNDEFINED(80,3414) /* TMap<EDetailsTabLayout, UEventEntryDetailsTabLayoutWidget*> */ __um(LayoutWidgetsMap); // 0x0558   (0x0050)  
};

/// Class /Script/DBDUIViewsCore.EventEntryEventTabWidget
/// Size: 0x0288 (0x000330 - 0x0005B8)
class UEventEntryEventTabWidget : public UCoreTabContentWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0330   (0x0008)  MISSED
	class UEventTabViewData*                           _viewData;                                                  // 0x0338   (0x0008)  
	FEventEntryPopupSkinUIData                         _skinData;                                                  // 0x0340   (0x0220)  
	class UDBDImage*                                   ImageContainer;                                             // 0x0560   (0x0008)  
	class UDBDScrollBox*                               ScrollBox;                                                  // 0x0568   (0x0008)  
	class UDBDRichTextBlock*                           MessageText;                                                // 0x0570   (0x0008)  
	class UDBDRichTextBlock*                           AdditionalInformationText;                                  // 0x0578   (0x0008)  
	class UCoreInputSwitcherWidget*                    ArchivesButton;                                             // 0x0580   (0x0008)  
	SDK_UNDEFINED(24,3415) /* FText */                 __um(_scrollLabelText);                                     // 0x0588   (0x0018)  
	SDK_UNDEFINED(16,3416) /* FMulticastInlineDelegate */ __um(_onArchivesButtonClicked);                          // 0x05A0   (0x0010)  
	bool                                               _disableArchivesButton;                                     // 0x05B0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x05B1   (0x0007)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.EventEntryEventTabWidget.OnArchivesButtonClicked
	// void OnArchivesButtonClicked();                                                                                       // [0x4bcd5a0] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.EventEntryEventTabWidget.EnableInputs
	// void EnableInputs();                                                                                                  // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.EventEntryEventTabWidget.DisableInputs
	// void DisableInputs();                                                                                                 // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.EventEntryRewardsDisplayWidget
/// Size: 0x0020 (0x000310 - 0x000330)
class UEventEntryRewardsDisplayWidget : public UCoreBaseUserWidget
{ 
public:
	int32_t                                            _layoutMask;                                                // 0x0310   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0314   (0x0004)  MISSED
	class UCustomizationItemGridContainer*             RewardGrid;                                                 // 0x0318   (0x0008)  
	class UCoreImagePreviewAreaWidget*                 PreviewArea;                                                // 0x0320   (0x0008)  
	class UCustomizationItemOriginWidget*              InstructionWidget;                                          // 0x0328   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.EventEntryRewardsDisplayWidget.SetVisuals
	// void SetVisuals(FEventEntryPopupSkinUIData skinUIData);                                                               // [0x4bce610] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.EventEntryRewardsDisplayWidget.SetSelectedReward
	// void SetSelectedReward(int32_t selectedIndex);                                                                        // [0x4bce3b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.EventEntryRewardsDisplayWidget.SetScrollPrompt
	// void SetScrollPrompt(class UCoreKeyListenerInputPromptWidget* DisplayPrompt);                                         // [0x4bce290] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.EventEntryRewardsDisplayWidget.SetPreviewAreaData
	// void SetPreviewAreaData(FCustomizationItemPreviewAreaViewData& ViewData);                                             // [0x4bce1e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.EventEntryRewardsDisplayWidget.SetItemsData
	// void SetItemsData(TArray<UStoreCustomizationItemViewData*>& customizationRewardsData, int32_t selectedIndex);         // [0x4bce0e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.EventEntryRewardsDisplayWidget.SetInstructionWidgetData
	// void SetInstructionWidgetData(FCustomizationItemOriginViewData& ViewData);                                            // [0x4bcdf90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.EventEntryRewardsDisplayWidget.DisableInstructionStoreButton
	// void DisableInstructionStoreButton();                                                                                 // [0x4bcd580] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.EventEntryRewardsDisplayWidget.DisableInstructionCurrencyButton
	// void DisableInstructionCurrencyButton();                                                                              // [0x4bcd560] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.EventEntryRewardsDisplayWidget.DisableInstructionArchivesButton
	// void DisableInstructionArchivesButton();                                                                              // [0x4bcd540] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.EventEntryRewardsDisplayWidget.DisableInputs
	// void DisableInputs();                                                                                                 // [0x4bcd520] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.EventEntryStoreTabWidget
/// Size: 0x0000 (0x000580 - 0x000580)
class UEventEntryStoreTabWidget : public UEventEntryRewardsTabWidget
{ 
public:
};

/// Class /Script/DBDUIViewsCore.EventPointsWidget
/// Size: 0x0000 (0x000298 - 0x000298)
class UEventPointsWidget : public UUserWidget
{ 
public:


	/// Functions
	// Function /Script/DBDUIViewsCore.EventPointsWidget.SetValue
	// void SetValue(int32_t NewValue);                                                                                      // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.EventPointsWidget.Highlight
	// void Highlight(bool isHighlighted);                                                                                   // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.FriendItemWidget
/// Size: 0x0038 (0x000408 - 0x000440)
class UFriendItemWidget : public UCoreButtonWidget
{ 
public:
	class UDBDRichTextBlock*                           playerNameText;                                             // 0x0408   (0x0008)  
	class UDBDRichTextBlock*                           StatusText;                                                 // 0x0410   (0x0008)  
	class UDBDImage*                                   InviteIcon;                                                 // 0x0418   (0x0008)  
	class UDBDImage*                                   CrossplayIcon;                                              // 0x0420   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0428   (0x0018)  MISSED
};

/// Class /Script/DBDUIViewsCore.FriendSearchPopupWidget
/// Size: 0x00E8 (0x0003D0 - 0x0004B8)
class UFriendSearchPopupWidget : public UCoreGenericTextInputPopupWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x80];                                      // 0x03D0   (0x0080)  MISSED
	class UCoreInputSwitcherWidget*                    FriendSearchWidget;                                         // 0x0450   (0x0008)  
	class UDBDScrollBox*                               FriendSearchScrollBox;                                      // 0x0458   (0x0008)  
	class UClass*                                      FriendItemWidgetClass;                                      // 0x0460   (0x0008)  
	SDK_UNDEFINED(80,3417) /* TMap<FString, UFriendItemWidget*> */ __um(_friendsMap);                              // 0x0468   (0x0050)  


	/// Functions
	// Function /Script/DBDUIViewsCore.FriendSearchPopupWidget.OnFriendClicked
	// void OnFriendClicked(class UCoreButtonWidget* buttonTarget);                                                          // [0x4bcd800] Final|Native|Protected 
};

/// Class /Script/DBDUIViewsCore.LabelTooltipWidget
/// Size: 0x0008 (0x000320 - 0x000328)
class ULabelTooltipWidget : public UTooltipWidget
{ 
public:
	class UDBDRichTextBlock*                           LabelRTB;                                                   // 0x0320   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.LabelTooltipWidget.SetTooltipData
	// void SetTooltipData(FText& labelText);                                                                                // [0x4bce440] Final|Native|Public|HasOutParms 
	// Function /Script/DBDUIViewsCore.LabelTooltipWidget.Reset
	// void Reset();                                                                                                         // [0x4bcdeb0] Final|Native|Public  
};

/// Class /Script/DBDUIViewsCore.LoadoutMenuPopupWidget
/// Size: 0x02F0 (0x000368 - 0x000658)
class ULoadoutMenuPopupWidget : public UCoreGenericPopupWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0368   (0x0008)  MISSED
	class UDBDRichTextBlock*                           LoadoutMenuPowerItemRTB;                                    // 0x0370   (0x0008)  
	class UDBDRichTextBlock*                           LoadoutMenuAddonRTB;                                        // 0x0378   (0x0008)  
	class UDBDRichTextBlock*                           LoadoutMenuOfferingRTB;                                     // 0x0380   (0x0008)  
	class UDBDRichTextBlock*                           LoadoutMenuPerkRTB;                                         // 0x0388   (0x0008)  
	class UDBDTextBlock*                               BotRoleIndexText;                                           // 0x0390   (0x0008)  
	class UDBDRichTextBlock*                           LoadoutMenuInventoryRTB;                                    // 0x0398   (0x0008)  
	class UDBDRichTextBlock*                           LoadoutMenuSubtitleRTB;                                     // 0x03A0   (0x0008)  
	class UDBDRichTextBlock*                           LoadoutMenuPresetRTB;                                       // 0x03A8   (0x0008)  
	class UDBDDropDownListWidget*                      DropDownListWidget;                                         // 0x03B0   (0x0008)  
	class UDBDDropDownListButton*                      DropDownListTrigger;                                        // 0x03B8   (0x0008)  
	class UCoreMenuPowerWidget*                        CoreMenuPower;                                              // 0x03C0   (0x0008)  
	class UCoreMenuItemWidget*                         CoreMenuItem;                                               // 0x03C8   (0x0008)  
	class UCoreMenuAddonWidget*                        CoreAddon;                                                  // 0x03D0   (0x0008)  
	class UCoreMenuAddonWidget*                        CoreAddon0;                                                 // 0x03D8   (0x0008)  
	class UCoreMenuOfferingWidget*                     CoreOffering;                                               // 0x03E0   (0x0008)  
	class UCoreMenuPerkWidget*                         CorePerk;                                                   // 0x03E8   (0x0008)  
	class UCoreMenuPerkWidget*                         CorePerk1;                                                  // 0x03F0   (0x0008)  
	class UCoreMenuPerkWidget*                         CorePerk2;                                                  // 0x03F8   (0x0008)  
	class UCoreMenuPerkWidget*                         CorePerk3;                                                  // 0x0400   (0x0008)  
	class UCorePresetWidgetContainer*                  PresetContainer;                                            // 0x0408   (0x0008)  
	class UGridPanel*                                  InventoryGridContainer;                                     // 0x0410   (0x0008)  
	class UCorePaginationContainerWidget*              PaginationGridContainer;                                    // 0x0418   (0x0008)  
	class UCoreInputSwitcherWidget*                    LeftArrow;                                                  // 0x0420   (0x0008)  
	class UCoreInputSwitcherWidget*                    RightArrow;                                                 // 0x0428   (0x0008)  
	class UDBDImage*                                   PlusSignImage;                                              // 0x0430   (0x0008)  
	class UDBDImage*                                   LinkBarImage;                                               // 0x0438   (0x0008)  
	class UDBDImage*                                   AddonLinkBarImage;                                          // 0x0440   (0x0008)  
	SDK_UNDEFINED(16,3418) /* FMulticastInlineDelegate */ __um(_onPaginationAnimationCompletedDelegate);           // 0x0448   (0x0010)  
	SDK_UNDEFINED(16,3419) /* FMulticastInlineDelegate */ __um(_onLoadoutMenuSlotClickedDelegate);                 // 0x0458   (0x0010)  
	SDK_UNDEFINED(16,3420) /* FMulticastInlineDelegate */ __um(_onLoadoutMenuSlotSelectedDelegate);                // 0x0468   (0x0010)  
	SDK_UNDEFINED(16,3421) /* FMulticastInlineDelegate */ __um(_onLoadoutMenuInventorySlotClickedDelegate);        // 0x0478   (0x0010)  
	SDK_UNDEFINED(16,3422) /* FMulticastInlineDelegate */ __um(_onLoadoutMenuPresetSlotClickedDelegate);           // 0x0488   (0x0010)  
	SDK_UNDEFINED(16,3423) /* FMulticastInlineDelegate */ __um(_onSelectedCharacterChangedDelegate);               // 0x0498   (0x0010)  
	class UClass*                                      _loadoutPowerClass;                                         // 0x04A8   (0x0008)  
	class UClass*                                      _loadoutItemWidgetClass;                                    // 0x04B0   (0x0008)  
	class UClass*                                      _loadoutAddonClass;                                         // 0x04B8   (0x0008)  
	class UClass*                                      _loadoutOfferingClass;                                      // 0x04C0   (0x0008)  
	class UClass*                                      _loadoutPerkClass;                                          // 0x04C8   (0x0008)  
	class UClass*                                      _paginationWidgetClass;                                     // 0x04D0   (0x0008)  
	int32_t                                            _inventoryPerRow;                                           // 0x04D8   (0x0004)  
	int32_t                                            _inventoryPerColumn;                                        // 0x04DC   (0x0004)  
	int32_t                                            _cellsPerRow;                                               // 0x04E0   (0x0004)  
	FMargin                                            _inventoryItemPadding;                                      // 0x04E4   (0x0010)  
	FMargin                                            _inventoryPerkPadding;                                      // 0x04F4   (0x0010)  
	FMargin                                            _inventoryOfferingPadding;                                  // 0x0504   (0x0010)  
	float                                              _inventoryPerkExtraNudge;                                   // 0x0514   (0x0004)  
	float                                              _inventoryOfferingExtraNudge;                               // 0x0518   (0x0004)  
	ETooltipHorizontalAlignment                        HorizontalAlignment;                                        // 0x051C   (0x0001)  
	ETooltipVerticalAlignment                          VerticalAlignment;                                          // 0x051D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x051E   (0x0002)  MISSED
	TArray<class UCoreMenuLoadoutPartWidget*>          _inventoryItemWidgetList;                                   // 0x0520   (0x0010)  
	TArray<class UCoreMenuPerkWidget*>                 _perkSlotWidget;                                            // 0x0530   (0x0010)  
	TArray<class UCoreMenuAddonWidget*>                _addonSlotWidget;                                           // 0x0540   (0x0010)  
	class UMenuLoadoutPartViewData*                    _menuLoadoutPartViewData;                                   // 0x0550   (0x0008)  
	ELoadoutSlot                                       _loadoutSelectedSlot;                                       // 0x0558   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0559   (0x0003)  MISSED
	int32_t                                            _numberOfPaginationItem;                                    // 0x055C   (0x0004)  
	TArray<class ULoadoutMenuPopupViewData*>           _perkData;                                                  // 0x0560   (0x0010)  
	TArray<class ULoadoutMenuPopupViewData*>           _addonLoadoutData;                                          // 0x0570   (0x0010)  
	TArray<class ULoadoutMenuPopupViewData*>           _inventoryViewData;                                         // 0x0580   (0x0010)  
	unsigned char                                      UnknownData03_6[0xC8];                                      // 0x0590   (0x00C8)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.LoadoutMenuPopupWidget.UpdateInventoryItemData
	// void UpdateInventoryItemData();                                                                                       // [0x4bce950] Final|Native|Private|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.LoadoutMenuPopupWidget.ShowMenuLoadoutPartsTooltip
	// void ShowMenuLoadoutPartsTooltip(class UCoreButtonWidget* hoveredSlotWidget);                                         // [0x4bce7b0] Final|Native|Private|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.LoadoutMenuPopupWidget.SetInventoryItemEnabled
	// void SetInventoryItemEnabled(class UCoreMenuLoadoutPartWidget* Widget, EItemAvailability Availability);               // [0x61c32d0] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.LoadoutMenuPopupWidget.PlayPaginationOutAnimation
	// void PlayPaginationOutAnimation(bool isNextPage);                                                                     // [0x61c32d0] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.LoadoutMenuPopupWidget.PlayPaginationInAnimation
	// void PlayPaginationInAnimation();                                                                                     // [0x61c32d0] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.LoadoutMenuPopupWidget.OnPaginationSelected
	// void OnPaginationSelected(int32_t currentPage, bool isUpdate);                                                        // [0x4bcdcc0] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuRightArrowClicked
	// void OnLoadoutMenuRightArrowClicked();                                                                                // [0x4bcdca0] Final|Native|Private|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuPresetClicked
	// void OnLoadoutMenuPresetClicked(int32_t selectedPresetId);                                                            // [0x4bcdc10] Final|Native|Private|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuPowerSlotClicked
	// void OnLoadoutMenuPowerSlotClicked(class UCoreButtonWidget* menuPowerWidget);                                         // [0x4bcdb80] Final|Native|Private|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuPerkSlotClicked
	// void OnLoadoutMenuPerkSlotClicked(class UCoreButtonWidget* menuPerkWidget);                                           // [0x4bcdaf0] Final|Native|Private|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuOfferingSlotClicked
	// void OnLoadoutMenuOfferingSlotClicked(class UCoreButtonWidget* menuOfferingWidget);                                   // [0x4bcda60] Final|Native|Private|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuLeftArrowClicked
	// void OnLoadoutMenuLeftArrowClicked();                                                                                 // [0x4bcda40] Final|Native|Private|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuItemSlotClicked
	// void OnLoadoutMenuItemSlotClicked(class UCoreButtonWidget* menuItemWidget);                                           // [0x4bcd9b0] Final|Native|Private|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuInventorySlotClicked
	// void OnLoadoutMenuInventorySlotClicked(class UCoreButtonWidget* menuPerkWidget);                                      // [0x4bcd920] Final|Native|Private|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.LoadoutMenuPopupWidget.OnLoadoutMenuAddonSlotClicked
	// void OnLoadoutMenuAddonSlotClicked(class UCoreButtonWidget* menuAddonWidget);                                         // [0x4bcd890] Final|Native|Private|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.LoadoutMenuPopupWidget.OnDropdownSelected
	// void OnDropdownSelected(ESlateVisibility InVisibility);                                                               // [0x4bcd780] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.LoadoutMenuPopupWidget.OnDropDownListSelectedOptionChanged
	// void OnDropDownListSelectedOptionChanged(FTabWidgetData buttonData);                                                  // [0x4bcd600] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.LoadoutMenuPopupWidget.HideMenuLoadoutPartsTooltip
	// void HideMenuLoadoutPartsTooltip(class UCoreButtonWidget* unhoveredSlotWidget);                                       // [0x4bb86e0] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.LoadoutTooltipWidget
/// Size: 0x0050 (0x000320 - 0x000370)
class ULoadoutTooltipWidget : public UTooltipWidget
{ 
public:
	class UDBDTextBlock*                               TooltipTitle;                                               // 0x0320   (0x0008)  
	class UDBDRichTextBlock*                           ToolTipDescriptionRTB;                                      // 0x0328   (0x0008)  
	class UDBDTextBlock*                               SpecialEventTitle;                                          // 0x0330   (0x0008)  
	class UDBDTextBlock*                               SpecialEventDescription;                                    // 0x0338   (0x0008)  
	class UDBDTextBlock*                               UnlockInstructionText;                                      // 0x0340   (0x0008)  
	class UDBDTextBlock*                               RarityTypeSubtitle;                                         // 0x0348   (0x0008)  
	class UDBDImage*                                   RarityBG;                                                   // 0x0350   (0x0008)  
	class UDBDImage*                                   Line;                                                       // 0x0358   (0x0008)  
	class UDBDImage*                                   LevelIcon;                                                  // 0x0360   (0x0008)  
	class UDBDRichTextBlock*                           ToolTipWarning;                                             // 0x0368   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.LoadoutTooltipWidget.SetTooltipData
	// void SetTooltipData(FLoadoutTooltipData& tooltipViewData);                                                            // [0x4bce510] Final|Native|Public|HasOutParms 
	// Function /Script/DBDUIViewsCore.LoadoutTooltipWidget.SetLoadoutTooltipPerkLevel
	// void SetLoadoutTooltipPerkLevel(int32_t Level);                                                                       // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.LoadoutTooltipWidget.SetLoadoutTooltipLockedState
	// void SetLoadoutTooltipLockedState();                                                                                  // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.LoadoutTooltipWidget.Reset
	// void Reset();                                                                                                         // [0x4bcded0] Final|Native|Public  
};

/// Class /Script/DBDUIViewsCore.MilestoneTrackerTierItem
/// Size: 0x0020 (0x000310 - 0x000330)
class UMilestoneTrackerTierItem : public UCoreBaseUserWidget
{ 
public:
	class UCoreStoreCustomizationItemWidget*           Reward;                                                     // 0x0310   (0x0008)  
	class UEventPointsWidget*                          EventPointsWidget;                                          // 0x0318   (0x0008)  
	class UDBDImage*                                   BackgroundImage;                                            // 0x0320   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0328   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.MilestoneTrackerTierItem.UpdateBackground
	// void UpdateBackground(TWeakObjectPtr<UMaterialInstance*> Background);                                                 // [0x4bce840] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.MilestoneTrackerTierItem.SetVisualState
	// void SetVisualState(EMilestoneTrackerItemState State);                                                                // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/DBDUIViewsCore.MilestoneTrackerTierItem.SetData
	// void SetData(FMilestoneTrackerItemViewData& Data);                                                                    // [0x4bcdef0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.MilestoneTrackerTierItem.OnBackgroundImageLoadingStarted
	// void OnBackgroundImageLoadingStarted();                                                                               // [0x4bcd5e0] Final|Native|Public  
	// Function /Script/DBDUIViewsCore.MilestoneTrackerTierItem.OnBackgroundImageLoadingCompleted
	// void OnBackgroundImageLoadingCompleted();                                                                             // [0x4bcd5c0] Final|Native|Public  
	// Function /Script/DBDUIViewsCore.MilestoneTrackerTierItem.Clear
	// void Clear();                                                                                                         // [0x4bcd500] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/DBDUIViewsCore.MilestoneTrackerWidget
/// Size: 0x0058 (0x000310 - 0x000368)
class UMilestoneTrackerWidget : public UCoreBaseUserWidget
{ 
public:
	class UDBDRichTextBlock*                           Title;                                                      // 0x0310   (0x0008)  
	class UDBDRichTextBlock*                           MilestonePointsText;                                        // 0x0318   (0x0008)  
	class UEventPointsWidget*                          UserMilestonePointsWidget;                                  // 0x0320   (0x0008)  
	class UHorizontalBox*                              RewardsGrid;                                                // 0x0328   (0x0008)  
	class UDBDImage*                                   Background;                                                 // 0x0330   (0x0008)  
	class UClass*                                      _milestoneTrackerTierItemClass;                             // 0x0338   (0x0008)  
	int32_t                                            _maxTierItems;                                              // 0x0340   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0344   (0x0004)  MISSED
	TArray<class UMilestoneTrackerTierItem*>           _tierItemPool;                                              // 0x0348   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0358   (0x0010)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.MilestoneTrackerWidget.SetVisuals
	// void SetVisuals(FMilestoneTrackerEventBasedSkinViewData& ViewData);                                                   // [0x4bd1de0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.MilestoneTrackerWidget.SetData
	// void SetData(FMilestoneTrackerViewData& ViewData);                                                                    // [0x4bd1aa0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.MilestoneTrackerWidget.SelectMilestoneTrackerItem
	// void SelectMilestoneTrackerItem(FName ItemId);                                                                        // [0x4bd1a00] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.MilestoneTrackerWidget.OnRewardItemClicked
	// void OnRewardItemClicked(class UCoreButtonWidget* buttonTarget);                                                      // [0x4bd1930] Final|Native|Private 
	// Function /Script/DBDUIViewsCore.MilestoneTrackerWidget.DeselectMilestoneRewards
	// void DeselectMilestoneRewards();                                                                                      // [0x4bd17e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.NewActiveTomePopupWidget
/// Size: 0x0068 (0x000368 - 0x0003D0)
class UNewActiveTomePopupWidget : public UCoreGenericPopupWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0368   (0x0008)  MISSED
	class UDBDImage*                                   BgImageContainer;                                           // 0x0370   (0x0008)  
	class UDBDTextBlock*                               RiftTimeLabel;                                              // 0x0378   (0x0008)  
	class UDBDTextBlock*                               TomeTitle;                                                  // 0x0380   (0x0008)  
	class UDBDTextBlock*                               TomeDescription;                                            // 0x0388   (0x0008)  
	class UCoreInputSwitcherWidget*                    TomeButton;                                                 // 0x0390   (0x0008)  
	class UDBDTextBlock*                               RiftTitle;                                                  // 0x0398   (0x0008)  
	class UDBDTextBlock*                               RiftDescription;                                            // 0x03A0   (0x0008)  
	class UCoreInputSwitcherWidget*                    RiftButton;                                                 // 0x03A8   (0x0008)  
	SDK_UNDEFINED(16,3424) /* FMulticastInlineDelegate */ __um(_currentTomeButtonClickedDelegate);                 // 0x03B0   (0x0010)  
	SDK_UNDEFINED(16,3425) /* FMulticastInlineDelegate */ __um(_riftButtonClickedDelegate);                        // 0x03C0   (0x0010)  


	/// Functions
	// Function /Script/DBDUIViewsCore.NewActiveTomePopupWidget.OnRiftButtonClicked
	// void OnRiftButtonClicked();                                                                                           // [0x4bd19c0] Final|Native|Private|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.NewActiveTomePopupWidget.OnCurrentTomeButtonClicked
	// void OnCurrentTomeButtonClicked();                                                                                    // [0x4bd1800] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.ProcessingPopupWidget
/// Size: 0x0008 (0x000328 - 0x000330)
class UProcessingPopupWidget : public UCoreBasePopupWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0328   (0x0008)  MISSED
};

/// Class /Script/DBDUIViewsCore.ProfileMenuCustomizationWidget
/// Size: 0x00C8 (0x000330 - 0x0003F8)
class UProfileMenuCustomizationWidget : public UCoreTabContentWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0330   (0x0008)  MISSED
	class UCoreSortButtonWidget*                       SortButton;                                                 // 0x0338   (0x0008)  
	class UCustomizationItemGridContainer*             CustomizationGrid;                                          // 0x0340   (0x0008)  
	class UCoreImagePreviewAreaWidget*                 PreviewArea;                                                // 0x0348   (0x0008)  
	class UCoreInputSwitcherWidget*                    EquipInputSwitcher;                                         // 0x0350   (0x0008)  
	SDK_UNDEFINED(24,3426) /* FText */                 __um(_noBannerSelectedText);                                // 0x0358   (0x0018)  
	SDK_UNDEFINED(24,3427) /* FText */                 __um(_noBadgeSelectedText);                                 // 0x0370   (0x0018)  
	ECustomizationCategory                             _customizationCategory;                                     // 0x0388   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6F];                                      // 0x0389   (0x006F)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.ProfileMenuCustomizationWidget.OnEquipButtonClicked
	// void OnEquipButtonClicked();                                                                                          // [0x4bd1800] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.ProfileMenuCustomizationWidget.OnCustomizationSortingChanged
	// void OnCustomizationSortingChanged(EItemSorting itemSorting);                                                         // [0x4bd18b0] Final|Native|Protected 
	// Function /Script/DBDUIViewsCore.ProfileMenuCustomizationWidget.OnCustomizationGridItemClicked
	// void OnCustomizationGridItemClicked(int32_t selectedIndex);                                                           // [0x4bd1820] Final|Native|Protected 
};

/// Class /Script/DBDUIViewsCore.ProfileMenuPlayerRankWrapper
/// Size: 0x0048 (0x000310 - 0x000358)
class UProfileMenuPlayerRankWrapper : public UCoreBaseUserWidget
{ 
public:
	SDK_UNDEFINED(24,3428) /* FText */                 __um(ProgressText);                                         // 0x0310   (0x0018)  
	SDK_UNDEFINED(24,3429) /* FText */                 __um(KillerGradeText);                                      // 0x0328   (0x0018)  
	SDK_UNDEFINED(24,3430) /* FText */                 __um(SurvivorGradeText);                                    // 0x0340   (0x0018)  


	/// Functions
	// Function /Script/DBDUIViewsCore.ProfileMenuPlayerRankWrapper.SetData
	// void SetData(FRankViewData& Data);                                                                                    // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/DBDUIViewsCore.ProfileMenuStatsWidget
/// Size: 0x0050 (0x000330 - 0x000380)
class UProfileMenuStatsWidget : public UCoreTabContentWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0330   (0x0008)  MISSED
	SDK_UNDEFINED(24,3431) /* FText */                 __um(PlayerLevelText);                                      // 0x0338   (0x0018)  
	SDK_UNDEFINED(24,3432) /* FText */                 __um(PlayerLevelAndDevotionDescription);                    // 0x0350   (0x0018)  
	SDK_UNDEFINED(24,3433) /* FText */                 __um(KillerAndSurvivorGradesDescription);                   // 0x0368   (0x0018)  
};

/// Class /Script/DBDUIViewsCore.ProgressionSystemInfoPopupWidget
/// Size: 0x0008 (0x000368 - 0x000370)
class UProgressionSystemInfoPopupWidget : public UCoreGenericPopupWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0368   (0x0008)  MISSED
};

/// Class /Script/DBDUIViewsCore.ReportFeedbackInfoWidget
/// Size: 0x0010 (0x000310 - 0x000320)
class UReportFeedbackInfoWidget : public UCoreBaseUserWidget
{ 
public:
	class UDBDTextBlock*                               BanTimestampTB;                                             // 0x0310   (0x0008)  
	class UDBDTextBlock*                               ReasonTB;                                                   // 0x0318   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsCore.ReportFeedbackInfoWidget.SetData
	// void SetData(FReportFeedbackData& ReportData);                                                                        // [0x4bd1b50] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.ReportFeedbackPopupWidget
/// Size: 0x0028 (0x000368 - 0x000390)
class UReportFeedbackPopupWidget : public UCoreGenericPopupWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0368   (0x0008)  MISSED
	class UClass*                                      InfoWidgetClass;                                            // 0x0370   (0x0008)  
	class UDBDTextBlock*                               BanTimestampSubtitleTB;                                     // 0x0378   (0x0008)  
	class UDBDTextBlock*                               ReasonSubtitleTB;                                           // 0x0380   (0x0008)  
	class UDBDScrollBox*                               ReportFeedbackInfoScrollBox;                                // 0x0388   (0x0008)  
};

/// Class /Script/DBDUIViewsCore.RichTextBlockImageSharedSizeDecorator
/// Size: 0x0008 (0x000038 - 0x000040)
class URichTextBlockImageSharedSizeDecorator : public URichTextBlockImageDecorator
{ 
public:
	int32_t                                            Width;                                                      // 0x0038   (0x0004)  
	int32_t                                            Height;                                                     // 0x003C   (0x0004)  
};

/// Class /Script/DBDUIViewsCore.RichTextBlockScalableImageDecorator
/// Size: 0x0030 (0x000038 - 0x000068)
class URichTextBlockScalableImageDecorator : public URichTextBlockImageDecorator
{ 
public:
	FSlateColor                                        TintColor;                                                  // 0x0038   (0x0028)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0060   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.RichTextBlockScalableImageDecorator.SetTintColor
	// void SetTintColor(FSlateColor TintColor);                                                                             // [0x4bd1cf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsCore.RichTextBlockScalableImageDecorator.ResetTintColor
	// void ResetTintColor();                                                                                                // [0x4bd19e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDUIViewsCore.RichTextHTMLDecorator
/// Size: 0x0000 (0x000030 - 0x000030)
class URichTextHTMLDecorator : public URichTextBlockDecorator
{ 
public:
};

/// Class /Script/DBDUIViewsCore.RichTextNestedTagsDecorator
/// Size: 0x0050 (0x000030 - 0x000080)
class URichTextNestedTagsDecorator : public URichTextBlockDecorator
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0030   (0x0050)  MISSED
};

/// Class /Script/DBDUIViewsCore.SeasonEndRankRewardsPopupWidget
/// Size: 0x0050 (0x000368 - 0x0003B8)
class USeasonEndRankRewardsPopupWidget : public UCoreGenericPopupWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0368   (0x0008)  MISSED
	class UDBDRichTextBlock*                           SurvivorSeasonHighRTB;                                      // 0x0370   (0x0008)  
	class UDBDRichTextBlock*                           KillerSeasonHighRTB;                                        // 0x0378   (0x0008)  
	class UDBDRichTextBlock*                           DisclaimerMessageRTB;                                       // 0x0380   (0x0008)  
	class UDBDRichTextBlock*                           SurvivorRankRTB;                                            // 0x0388   (0x0008)  
	class UDBDRichTextBlock*                           KillerRankRTB;                                              // 0x0390   (0x0008)  
	class UCorePlayerRankWidget*                       SurvivorRank;                                               // 0x0398   (0x0008)  
	class UCoreCurrencyProgressionRewardWidget*        SurvivorReward;                                             // 0x03A0   (0x0008)  
	class UCorePlayerRankWidget*                       KillerRank;                                                 // 0x03A8   (0x0008)  
	class UCoreCurrencyProgressionRewardWidget*        KillerReward;                                               // 0x03B0   (0x0008)  
};

/// Class /Script/DBDUIViewsCore.TestWidget
/// Size: 0x0010 (0x000310 - 0x000320)
class UTestWidget : public UCoreBaseUserWidget
{ 
public:
	class UPanelWidget*                                Workbench;                                                  // 0x0310   (0x0008)  
	bool                                               showWorkbench;                                              // 0x0318   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0319   (0x0007)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsCore.TestWidget.SetShowWorkbench
	// void SetShowWorkbench(bool showWorkbench);                                                                            // [0x4bd1c60] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/DBDUIViewsCore.PlayerStatusAssets
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPlayerStatusAssets
{ 
	EPlayerStatusBloodSplatterType                     BloodSplatterType;                                          // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UTexture2D*                                  BloodTexture;                                               // 0x0008   (0x0008)  
	class UTexture2D*                                  iconTexture;                                                // 0x0010   (0x0008)  
};

/// Struct /Script/DBDUIViewsCore.CoreRanksConfiguration
/// Size: 0x0030 (0x000000 - 0x000030)
struct FCoreRanksConfiguration
{ 
	class UTexture2D*                                  RankBackgroundImage;                                        // 0x0000   (0x0008)  
	FSlateColor                                        NumberColor;                                                // 0x0008   (0x0028)  
};

/// Struct /Script/DBDUIViewsCore.HtmlRichTextTag
/// Size: 0x0050 (0x000000 - 0x000050)
struct FHtmlRichTextTag
{ 
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/DBDUIViewsCore.HtmlToRichTagConvertRow
/// Size: 0x0020 (0x000008 - 0x000028)
struct FHtmlToRichTagConvertRow : FTableRowBase
{ 
	SDK_UNDEFINED(16,3434) /* FString */               __um(HtmlTag);                                              // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,3435) /* FString */               __um(RichTextTag);                                          // 0x0018   (0x0010)  
};

/// Struct /Script/DBDUIViewsCore.InputPromptDataRow
/// Size: 0x0048 (0x000008 - 0x000050)
struct FInputPromptDataRow : FTableRowBase
{ 
	SDK_UNDEFINED(24,3436) /* FText */                 __um(InputLabel);                                           // 0x0008   (0x0018)  
	FKey                                               InputKey;                                                   // 0x0020   (0x0020)  
	class UTexture2D*                                  PromptTexture;                                              // 0x0040   (0x0008)  
	bool                                               ShowLabel;                                                  // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/DBDUIViewsCore.MilestoneTrackerEventBasedSkinViewData
/// Size: 0x0060 (0x000000 - 0x000060)
struct FMilestoneTrackerEventBasedSkinViewData
{ 
	SDK_UNDEFINED(48,3437) /* TWeakObjectPtr<UMaterialInstance*> */ __um(MilestoneTrackerBackground);              // 0x0000   (0x0030)  
	SDK_UNDEFINED(48,3438) /* TWeakObjectPtr<UMaterialInstance*> */ __um(MilestoneTrackerHighlightBar);            // 0x0030   (0x0030)  
};

/// Struct /Script/DBDUIViewsCore.TooltipWidgetData
/// Size: 0x0010 (0x000008 - 0x000018)
struct FTooltipWidgetData : FDBDTableRowBase
{ 
	ETooltipType                                       TooltipType;                                                // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	class UClass*                                      WidgetClass;                                                // 0x0010   (0x0008)  
};

