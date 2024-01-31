
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AkAudio
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: Engine
/// dependency: SlateCore
/// dependency: UMG

/// Enum /Script/DBDUIViewsMobile.EActionOnFriendType
/// Size: 0x17
enum class EActionOnFriendType : uint8_t
{
	EActionOnFriendType__None                                                        = 0,
	EActionOnFriendType__SendFriendRequest                                           = 1,
	EActionOnFriendType__ConfirmFriendRequest                                        = 2,
	EActionOnFriendType__DeclineFriendRequest                                        = 3,
	EActionOnFriendType__RemoveFriend                                                = 4,
	EActionOnFriendType__AddToFavorite                                               = 5,
	EActionOnFriendType__RemoveToFavorite                                            = 6,
	EActionOnFriendType__Mute                                                        = 7,
	EActionOnFriendType__Unmute                                                      = 8,
	EActionOnFriendType__InviteToParty                                               = 9,
	EActionOnFriendType__CancelInviteToParty                                         = 10,
	EActionOnFriendType__Select                                                      = 11,
	EActionOnFriendType__ConfirmAction                                               = 12,
	EActionOnFriendType__DeclineAction                                               = 13,
	EActionOnFriendType__RemovePlayerFromParty                                       = 14,
	EActionOnFriendType__Count                                                       = 15,
	EActionOnFriendType__EActionOnFriendType_MAX                                     = 16
};

/// Enum /Script/DBDUIViewsMobile.EAtlantaFriendUIStatus
/// Size: 0x09
enum class EAtlantaFriendUIStatus : uint8_t
{
	EAtlantaFriendUIStatus__Undefined                                                = 0,
	EAtlantaFriendUIStatus__FriendSuggestion                                         = 1,
	EAtlantaFriendUIStatus__FriendRequestSent                                        = 2,
	EAtlantaFriendUIStatus__FriendRequestReceived                                    = 3,
	EAtlantaFriendUIStatus__Available                                                = 4,
	EAtlantaFriendUIStatus__InAMatch                                                 = 5,
	EAtlantaFriendUIStatus__Offline                                                  = 6,
	EAtlantaFriendUIStatus__AddFriendToSeeStatus                                     = 7,
	EAtlantaFriendUIStatus__EAtlantaFriendUIStatus_MAX                               = 8
};

/// Enum /Script/DBDUIViewsMobile.ECustomMatchDifficulty
/// Size: 0x08
enum class ECustomMatchDifficulty : uint8_t
{
	ECustomMatchDifficulty__Easy                                                     = 0,
	ECustomMatchDifficulty__Medium                                                   = 1,
	ECustomMatchDifficulty__Hard                                                     = 2,
	ECustomMatchDifficulty__Suggested                                                = 3,
	ECustomMatchDifficulty__Random                                                   = 4,
	ECustomMatchDifficulty__None                                                     = 5,
	ECustomMatchDifficulty__Max                                                      = 6,
	ECustomMatchDifficulty__ECustomMatchDifficulty_MAX                               = 7
};

/// Enum /Script/DBDUIViewsMobile.ECustomMatchOptions
/// Size: 0x07
enum class ECustomMatchOptions : uint8_t
{
	ECustomMatchOptions__All                                                         = 0,
	ECustomMatchOptions__None                                                        = 1,
	ECustomMatchOptions__Owned                                                       = 2,
	ECustomMatchOptions__Random                                                      = 3,
	ECustomMatchOptions__Special                                                     = 4,
	ECustomMatchOptions__Count                                                       = 5,
	ECustomMatchOptions__ECustomMatchOptions_MAX                                     = 6
};

/// Enum /Script/DBDUIViewsMobile.ECustomMatchTab
/// Size: 0x08
enum class ECustomMatchTab : uint8_t
{
	ECustomMatchTab__Perks                                                           = 0,
	ECustomMatchTab__ItemsAndAddons                                                  = 1,
	ECustomMatchTab__Offerings                                                       = 2,
	ECustomMatchTab__Maps                                                            = 3,
	ECustomMatchTab__BotDifficulty                                                   = 4,
	ECustomMatchTab__BotCharacter                                                    = 5,
	ECustomMatchTab__Count                                                           = 6,
	ECustomMatchTab__ECustomMatchTab_MAX                                             = 7
};

/// Enum /Script/DBDUIViewsMobile.EFriendTypeButton
/// Size: 0x03
enum class EFriendTypeButton : uint8_t
{
	EFriendTypeButton__InvitePlayerToParty                                           = 0,
	EFriendTypeButton__RemovePlayerFromParty                                         = 1,
	EFriendTypeButton__EFriendTypeButton_MAX                                         = 2
};

/// Class /Script/DBDUIViewsMobile.FriendsMenuUtilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UFriendsMenuUtilities : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/DBDUIViewsMobile.MatchConfigDifficultyDataAsset
/// Size: 0x0050 (0x000038 - 0x000088)
class UMatchConfigDifficultyDataAsset : public UPrimaryDataAsset
{ 
public:
	SDK_UNDEFINED(80,1473) /* TMap<ECustomMatchDifficulty, FMatchConfigDifficultyData> */ __um(DifficultiesData);  // 0x0038   (0x0050)  
};

/// Class /Script/DBDUIViewsMobile.MatchConfigOptionsDataAsset
/// Size: 0x0050 (0x000038 - 0x000088)
class UMatchConfigOptionsDataAsset : public UPrimaryDataAsset
{ 
public:
	SDK_UNDEFINED(80,1474) /* TMap<ECustomMatchOptions, FMatchOptionAssetData> */ __um(OptionsData);               // 0x0038   (0x0050)  
};

/// Class /Script/DBDUIViewsMobile.MatchConfigTabsDataAsset
/// Size: 0x0050 (0x000038 - 0x000088)
class UMatchConfigTabsDataAsset : public UPrimaryDataAsset
{ 
public:
	SDK_UNDEFINED(80,1475) /* TMap<ECustomMatchTab, FMatchConfigTabData> */ __um(Data);                            // 0x0038   (0x0050)  
};

/// Class /Script/DBDUIViewsMobile.MobileBaseUserWidget
/// Size: 0x00A0 (0x000298 - 0x000338)
class UMobileBaseUserWidget : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0298   (0x0010)  MISSED
	class UWidget*                                     HighlightWidget;                                            // 0x02A8   (0x0008)  
	FName                                              _tutorialAnimationName;                                     // 0x02B0   (0x000C)  
	int32_t                                            _tutorialNumberOfLoops;                                     // 0x02BC   (0x0004)  
	unsigned char                                      UnknownData01_6[0x78];                                      // 0x02C0   (0x0078)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsMobile.MobileBaseUserWidget.TutorialAnimationFinished
	// void TutorialAnimationFinished();                                                                                     // [0x4bb2980] Final|Native|Private 
	// Function /Script/DBDUIViewsMobile.MobileBaseUserWidget.TryBroadcastOnHighlightWidgetClicked
	// void TryBroadcastOnHighlightWidgetClicked();                                                                          // [0x4bb2960] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DBDUIViewsMobile.MobileBaseUserWidget.TriggerTutorialVisuals
	// void TriggerTutorialVisuals();                                                                                        // [0x4bb2940] Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsMobile.MobileBaseUserWidget.PropagateOnHighlightWidgetClicked
	// void PropagateOnHighlightWidgetClicked(FName onBoardingID);                                                           // [0x4bb2770] Final|Native|Public  
	// Function /Script/DBDUIViewsMobile.MobileBaseUserWidget.OnSynchronizeProperties
	// void OnSynchronizeProperties();                                                                                       // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Script/DBDUIViewsMobile.MobileBaseUserWidget.IsInTutorialState
	// bool IsInTutorialState();                                                                                             // [0x4bb2740] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsMobile.MobileBaseUserWidget.FinishTutorialVisuals
	// void FinishTutorialVisuals();                                                                                         // [0x4b5ea00] Native|Public|BlueprintCallable 
};

/// Class /Script/DBDUIViewsMobile.UMGAtlantaCustomMatchLobbyRule
/// Size: 0x0018 (0x000338 - 0x000350)
class UUMGAtlantaCustomMatchLobbyRule : public UMobileBaseUserWidget
{ 
public:
	class UTextBlock*                                  RuleName;                                                   // 0x0338   (0x0008)  
	class UTextBlock*                                  OptionName;                                                 // 0x0340   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0348   (0x0008)  MISSED
};

/// Class /Script/DBDUIViewsMobile.UMGAtlantaCustomMatchLobbyScreen
/// Size: 0x0038 (0x000338 - 0x000370)
class UUMGAtlantaCustomMatchLobbyScreen : public UMobileBaseUserWidget
{ 
public:
	class UUMGBaseButtonWidget*                        EditButton;                                                 // 0x0338   (0x0008)  
	class UVerticalBox*                                RulesBox;                                                   // 0x0340   (0x0008)  
	class UTextBlock*                                  CustomMatchTitle;                                           // 0x0348   (0x0008)  
	class UTextBlock*                                  MatchRulesTitle;                                            // 0x0350   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0358   (0x0018)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsMobile.UMGAtlantaCustomMatchLobbyScreen.HandleEditConfigButtonClicked
	// void HandleEditConfigButtonClicked();                                                                                 // [0x4bb26e0] Final|Native|Protected 
};

/// Class /Script/DBDUIViewsMobile.UMGPageScrollWidget
/// Size: 0x0130 (0x000338 - 0x000468)
class UUMGPageScrollWidget : public UMobileBaseUserWidget
{ 
public:
	float                                              ItemWidth;                                                  // 0x0338   (0x0004)  
	float                                              ItemHeight;                                                 // 0x033C   (0x0004)  
	int32_t                                            RowCount;                                                   // 0x0340   (0x0004)  
	int32_t                                            ColumnCount;                                                // 0x0344   (0x0004)  
	int32_t                                            ItemGapDistance;                                            // 0x0348   (0x0004)  
	int32_t                                            TotalPageCount;                                             // 0x034C   (0x0004)  
	float                                              ButtonWidth;                                                // 0x0350   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0354   (0x0004)  MISSED
	class UAkAudioEvent*                               OnPageChangeSound;                                          // 0x0358   (0x0008)  
	class UCanvasPanel*                                ContainerPanel;                                             // 0x0360   (0x0008)  
	class UHorizontalBox*                              ButtonsPanel;                                               // 0x0368   (0x0008)  
	SDK_UNDEFINED(48,1476) /* TWeakObjectPtr<UClass*> */ __um(_pageButtonWidgetClass);                             // 0x0370   (0x0030)  
	TArray<class UCanvasPanel*>                        _itemArray;                                                 // 0x03A0   (0x0010)  
	int32_t                                            _currentPageIndex;                                          // 0x03B0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x03B4   (0x0004)  MISSED
	TArray<class UMobileBaseUserWidget*>               _activeWidgets;                                             // 0x03B8   (0x0010)  
	unsigned char                                      UnknownData02_6[0xA0];                                      // 0x03C8   (0x00A0)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsMobile.UMGPageScrollWidget.HandlePageButtonClicked
	// void HandlePageButtonClicked(int32_t pageIndex);                                                                      // [0x4bb3a70] Final|Native|Public  
};

/// Class /Script/DBDUIViewsMobile.UMGGridPageScrollWidget
/// Size: 0x0008 (0x000468 - 0x000470)
class UUMGGridPageScrollWidget : public UUMGPageScrollWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0468   (0x0008)  MISSED
};

/// Struct /Script/DBDUIViewsMobile.CustomMatchTabConfig
/// Size: 0x0040 (0x000000 - 0x000040)
struct FCustomMatchTabConfig
{ 
	int32_t                                            ItemWidth;                                                  // 0x0000   (0x0004)  
	int32_t                                            ItemHeight;                                                 // 0x0004   (0x0004)  
	int32_t                                            row;                                                        // 0x0008   (0x0004)  
	int32_t                                            Column;                                                     // 0x000C   (0x0004)  
	SDK_UNDEFINED(48,1477) /* TWeakObjectPtr<UClass*> */ __um(OptionButtonClass);                                  // 0x0010   (0x0030)  
};

/// Class /Script/DBDUIViewsMobile.UMGAtlantaMatchConfigPageScroll
/// Size: 0x0160 (0x000470 - 0x0005D0)
class UUMGAtlantaMatchConfigPageScroll : public UUMGGridPageScrollWidget
{ 
public:
	FCustomMatchTabConfig                              CharactersTabConfig;                                        // 0x0470   (0x0040)  
	FCustomMatchTabConfig                              InventoryTabConfig;                                         // 0x04B0   (0x0040)  
	FCustomMatchTabConfig                              MapTabConfig;                                               // 0x04F0   (0x0040)  
	unsigned char                                      UnknownData00_6[0xA0];                                      // 0x0530   (0x00A0)  MISSED
};

/// Class /Script/DBDUIViewsMobile.UMGBaseButtonWidget
/// Size: 0x0130 (0x000338 - 0x000468)
class UUMGBaseButtonWidget : public UMobileBaseUserWidget
{ 
public:
	SDK_UNDEFINED(16,1478) /* FMulticastInlineDelegate */ __um(OnBaseButtonClickedEvent);                          // 0x0338   (0x0010)  
	SDK_UNDEFINED(16,1479) /* FMulticastInlineDelegate */ __um(OnBaseButtonPressedEvent);                          // 0x0348   (0x0010)  
	SDK_UNDEFINED(16,1480) /* FMulticastInlineDelegate */ __um(OnBaseButtonReleasedEvent);                         // 0x0358   (0x0010)  
	SDK_UNDEFINED(16,1481) /* FMulticastInlineDelegate */ __um(OnBaseButtonLongPressEvent);                        // 0x0368   (0x0010)  
	class UButton*                                     Button;                                                     // 0x0378   (0x0008)  
	class UImage*                                      IconPicture;                                                // 0x0380   (0x0008)  
	class UTextBlock*                                  ButtonLabel;                                                // 0x0388   (0x0008)  
	FSlateBrush                                        ButtonPictureBrush;                                         // 0x0390   (0x0090)  
	SDK_UNDEFINED(24,1482) /* FText */                 __um(ButtonText);                                           // 0x0420   (0x0018)  
	class UAkAudioEvent*                               OnPressSound;                                               // 0x0438   (0x0008)  
	class UAkAudioEvent*                               OnClickSound;                                               // 0x0440   (0x0008)  
	class UAkAudioEvent*                               OnLongPressSound;                                           // 0x0448   (0x0008)  
	class UAkAudioEvent*                               OnReleaseSound;                                             // 0x0450   (0x0008)  
	class UAkAudioEvent*                               OnHoveredSound;                                             // 0x0458   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0460   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonReleased__DelegateSignature
	// void OnBaseButtonReleased__DelegateSignature();                                                                       // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonPressed__DelegateSignature
	// void OnBaseButtonPressed__DelegateSignature();                                                                        // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonLongPress__DelegateSignature
	// void OnBaseButtonLongPress__DelegateSignature();                                                                      // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/DBDUIViewsMobile.UMGBaseButtonWidget.OnBaseButtonClicked__DelegateSignature
	// void OnBaseButtonClicked__DelegateSignature();                                                                        // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonReleasedEvent
	// void HandleButtonReleasedEvent();                                                                                     // [0x4b5ea60] Native|Protected|BlueprintCallable 
	// Function /Script/DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonPressedEvent
	// void HandleButtonPressedEvent();                                                                                      // [0x4b5ea40] Native|Protected|BlueprintCallable 
	// Function /Script/DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonLongPressEvent
	// void HandleButtonLongPressEvent();                                                                                    // [0x4b5e9e0] Native|Protected|BlueprintCallable 
	// Function /Script/DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonHoveredEvent
	// void HandleButtonHoveredEvent();                                                                                      // [0x4b5ea20] Native|Protected|BlueprintCallable 
	// Function /Script/DBDUIViewsMobile.UMGBaseButtonWidget.HandleButtonClickedEvent
	// void HandleButtonClickedEvent();                                                                                      // [0x4b5ea80] Native|Protected|BlueprintCallable 
};

/// Class /Script/DBDUIViewsMobile.UMGAtlantaMatchConfigPageScrollItem
/// Size: 0x0040 (0x000468 - 0x0004A8)
class UUMGAtlantaMatchConfigPageScrollItem : public UUMGBaseButtonWidget
{ 
public:
	class UCanvasPanel*                                ImagePanel;                                                 // 0x0468   (0x0008)  
	class UCanvasPanel*                                DefaultPanel;                                               // 0x0470   (0x0008)  
	class UImage*                                      DefaultImage;                                               // 0x0478   (0x0008)  
	float                                              _unselectedOpacity;                                         // 0x0480   (0x0004)  
	float                                              _selectedOpacity;                                           // 0x0484   (0x0004)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0488   (0x0020)  MISSED
};

/// Class /Script/DBDUIViewsMobile.UMGAtlantaMatchConfigScreen
/// Size: 0x01D8 (0x000338 - 0x000510)
class UUMGAtlantaMatchConfigScreen : public UMobileBaseUserWidget
{ 
public:
	class UUMGAtlantaMatchConfigPageScroll*            MatchConfigPageScroll;                                      // 0x0338   (0x0008)  
	class UHorizontalBox*                              TabsBox;                                                    // 0x0340   (0x0008)  
	class UVerticalBox*                                BotsTabsBox;                                                // 0x0348   (0x0008)  
	class UUMGBaseButtonWidget*                        BackButton;                                                 // 0x0350   (0x0008)  
	class UTextBlock*                                  MatchConfigTitle;                                           // 0x0358   (0x0008)  
	class UTextBlock*                                  InventoryTitle;                                             // 0x0360   (0x0008)  
	class UTextBlock*                                  SelectedTabTitle;                                           // 0x0368   (0x0008)  
	class UMatchConfigTabsDataAsset*                   TabsDataAsset;                                              // 0x0370   (0x0008)  
	FSlateBrush                                        SmallTabSeparation;                                         // 0x0378   (0x0090)  
	FSlateBrush                                        BigTabSeparation;                                           // 0x0408   (0x0090)  
	float                                              TabsVerticalPadding;                                        // 0x0498   (0x0004)  
	float                                              TabsHorizontalPadding;                                      // 0x049C   (0x0004)  
	unsigned char                                      UnknownData00_6[0x70];                                      // 0x04A0   (0x0070)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsMobile.UMGAtlantaMatchConfigScreen.HandleBackButtonClicked
	// void HandleBackButtonClicked();                                                                                       // [0x4bb26a0] Final|Native|Protected 
};

/// Class /Script/DBDUIViewsMobile.UMGAtlantaMatchConfigTab
/// Size: 0x0030 (0x000468 - 0x000498)
class UUMGAtlantaMatchConfigTab : public UUMGBaseButtonWidget
{ 
public:
	class USizeBox*                                    IconSizeBox;                                                // 0x0468   (0x0008)  
	class UTextBlock*                                  TabName;                                                    // 0x0470   (0x0008)  
	class UCanvasPanel*                                RandomPanel;                                                // 0x0478   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0480   (0x0018)  MISSED
};

/// Class /Script/DBDUIViewsMobile.UMGAtlantaRequestRoleButton
/// Size: 0x0010 (0x000468 - 0x000478)
class UUMGAtlantaRequestRoleButton : public UUMGBaseButtonWidget
{ 
public:
	class UWidgetSwitcher*                             IconSwitcher;                                               // 0x0468   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0470   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsMobile.UMGAtlantaRequestRoleButton.SetIsActive
	// void SetIsActive(bool IsActive);                                                                                      // [0x4bb2810] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DBDUIViewsMobile.UMGAtlantaRequestRoleButton.OnToggleActiveState
	// void OnToggleActiveState(bool IsActive);                                                                              // [0x61d2f50] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/DBDUIViewsMobile.UMGAtlantaRequestRoleButton.GetIsActive
	// bool GetIsActive();                                                                                                   // [0x4bb2600] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDUIViewsMobile.UMGBaseFriendListContextualMenuWidget
/// Size: 0x0058 (0x000338 - 0x000390)
class UUMGBaseFriendListContextualMenuWidget : public UMobileBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0338   (0x0018)  MISSED
	class UUMGFriendButtonWidget*                      InviteToPartyButton;                                        // 0x0350   (0x0008)  
	class UUMGFriendButtonWidget*                      MuteButton;                                                 // 0x0358   (0x0008)  
	class UUMGFriendButtonWidget*                      UnmuteButton;                                               // 0x0360   (0x0008)  
	class UUMGFriendButtonWidget*                      RemoveFriendButton;                                         // 0x0368   (0x0008)  
	class UUMGFriendButtonWidget*                      RemovePlayerFromPartyButton;                                // 0x0370   (0x0008)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0378   (0x0010)  MISSED
	class UAkAudioEvent*                               TransitionOutAnimationSound;                                // 0x0388   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsMobile.UMGBaseFriendListContextualMenuWidget.HandleActionTriggered
	// void HandleActionTriggered(EActionOnFriendType ActionType);                                                           // [0x4bb2620] Final|Native|Protected|BlueprintCallable 
};

/// Struct /Script/DBDUIViewsMobile.AtlantaFriendUIData
/// Size: 0x0068 (0x000000 - 0x000068)
struct FAtlantaFriendUIData
{ 
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0000   (0x0068)  MISSED
};

/// Class /Script/DBDUIViewsMobile.UMGBaseFriendListElement
/// Size: 0x00C0 (0x000338 - 0x0003F8)
class UUMGBaseFriendListElement : public UMobileBaseUserWidget
{ 
public:
	class UImage*                                      StatusPicture;                                              // 0x0338   (0x0008)  
	class UTextBlock*                                  FriendName;                                                 // 0x0340   (0x0008)  
	class UTextBlock*                                  FriendStatus;                                               // 0x0348   (0x0008)  
	class UCanvasPanel*                                SelectionHighlight;                                         // 0x0350   (0x0008)  
	class UUMGBaseButtonWidget*                        ItemSelectionBaseButton;                                    // 0x0358   (0x0008)  
	class UNamedSlot*                                  ContextualMenuPosition;                                     // 0x0360   (0x0008)  
	FAtlantaFriendUIData                               _cachedFriendData;                                          // 0x0368   (0x0068)  
	class UDataTable*                                  FriendUIStatusDataTable;                                    // 0x03D0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x03D8   (0x0020)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsMobile.UMGBaseFriendListElement.TriggerActionOnThisFriend
	// void TriggerActionOnThisFriend(EActionOnFriendType ActionType);                                                       // [0x4bb28c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDUIViewsMobile.UMGBaseTabButtonWidget
/// Size: 0x0070 (0x000468 - 0x0004D8)
class UUMGBaseTabButtonWidget : public UUMGBaseButtonWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0468   (0x0018)  MISSED
	class URichTextBlock*                              TabText;                                                    // 0x0480   (0x0008)  
	class UTextBlock*                                  NotificationCountText;                                      // 0x0488   (0x0008)  
	class UCanvasPanel*                                NotificationPanel;                                          // 0x0490   (0x0008)  
	class UImage*                                      TabButtonSelected;                                          // 0x0498   (0x0008)  
	char                                               tabIndex;                                                   // 0x04A0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x04A1   (0x0007)  MISSED
	SDK_UNDEFINED(24,1483) /* FText */                 __um(TitleOfTab);                                           // 0x04A8   (0x0018)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x04C0   (0x0008)  MISSED
	SDK_UNDEFINED(16,1484) /* FString */               __um(_tabTextParameter);                                    // 0x04C8   (0x0010)  
};

/// Class /Script/DBDUIViewsMobile.UMGBaseTabListWidget
/// Size: 0x0000 (0x000338 - 0x000338)
class UUMGBaseTabListWidget : public UMobileBaseUserWidget
{ 
public:
};

/// Class /Script/DBDUIViewsMobile.UMGExpandableListWidget
/// Size: 0x00A8 (0x000338 - 0x0003E0)
class UUMGExpandableListWidget : public UMobileBaseUserWidget
{ 
public:
	bool                                               ShouldHideExpandableListIfEmpty;                            // 0x0338   (0x0001)  
	bool                                               IsExtendedAtStart;                                          // 0x0339   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x033A   (0x0006)  MISSED
	class UUMGBaseButtonWidget*                        ExpansionButton;                                            // 0x0340   (0x0008)  
	class UVerticalBox*                                ItemContainer;                                              // 0x0348   (0x0008)  
	class UTextBlock*                                  CategorieName;                                              // 0x0350   (0x0008)  
	class UTextBlock*                                  itemCount;                                                  // 0x0358   (0x0008)  
	class UExpandableArea*                             ExpandableArea;                                             // 0x0360   (0x0008)  
	SDK_UNDEFINED(24,1485) /* FText */                 __um(HeaderTitle);                                          // 0x0368   (0x0018)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0380   (0x0008)  MISSED
	TArray<class UUserWidget*>                         _childWidgets;                                              // 0x0388   (0x0010)  
	unsigned char                                      UnknownData02_6[0x48];                                      // 0x0398   (0x0048)  MISSED


	/// Functions
	// Function /Script/DBDUIViewsMobile.UMGExpandableListWidget.ToggleExpansion
	// void ToggleExpansion();                                                                                               // [0x4bb28a0] Final|Native|Protected 
};

/// Class /Script/DBDUIViewsMobile.UMGFriendBaseTabListWidget
/// Size: 0x0000 (0x000338 - 0x000338)
class UUMGFriendBaseTabListWidget : public UUMGBaseTabListWidget
{ 
public:
};

/// Class /Script/DBDUIViewsMobile.UMGFriendButtonWidget
/// Size: 0x0080 (0x000468 - 0x0004E8)
class UUMGFriendButtonWidget : public UUMGBaseButtonWidget
{ 
public:
	class UCanvasPanel*                                InteractableButtonStatePanel;                               // 0x0468   (0x0008)  
	class UCanvasPanel*                                NonInteractableButtonStatePanel;                            // 0x0470   (0x0008)  
	class UTextBlock*                                  NonInteractableExplanationText;                             // 0x0478   (0x0008)  
	class UTextBlock*                                  NonInteractableActionText;                                  // 0x0480   (0x0008)  
	bool                                               _isInteractable;                                            // 0x0488   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0489   (0x0007)  MISSED
	class UImage*                                      NonInteractableImage;                                       // 0x0490   (0x0008)  
	SDK_UNDEFINED(80,1486) /* TMap<EFriendTypeButton, FSlateBrush> */ __um(_nonInteractableImages);                // 0x0498   (0x0050)  
};

/// Class /Script/DBDUIViewsMobile.UMGFriendContextualMenuWidget
/// Size: 0x0000 (0x000390 - 0x000390)
class UUMGFriendContextualMenuWidget : public UUMGBaseFriendListContextualMenuWidget
{ 
public:
};

/// Class /Script/DBDUIViewsMobile.UMGFriendElementWidget
/// Size: 0x01D8 (0x0003F8 - 0x0005D0)
class UUMGFriendElementWidget : public UUMGBaseFriendListElement
{ 
public:
	class UImage*                                      FavoriteSlot;                                               // 0x03F8   (0x0008)  
	class UButton*                                     FavoriteButton;                                             // 0x0400   (0x0008)  
	class UImage*                                      SelectionImage;                                             // 0x0408   (0x0008)  
	class UImage*                                      SelectedPicture;                                            // 0x0410   (0x0008)  
	class UImage*                                      FriendIcon;                                                 // 0x0418   (0x0008)  
	FSlateBrush                                        UnFavoriteBrush;                                            // 0x0420   (0x0090)  
	FSlateBrush                                        FavoriteBrush;                                              // 0x04B0   (0x0090)  
	FSlateBrush                                        MutedBrush;                                                 // 0x0540   (0x0090)  


	/// Functions
	// Function /Script/DBDUIViewsMobile.UMGFriendElementWidget.HandleSelectionButton
	// void HandleSelectionButton();                                                                                         // [0x4bb2720] Final|Native|Protected 
	// Function /Script/DBDUIViewsMobile.UMGFriendElementWidget.HandleFavoriteButtonClicked
	// void HandleFavoriteButtonClicked();                                                                                   // [0x4bb2700] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/DBDUIViewsMobile.UMGFriendListTabWidget
/// Size: 0x0018 (0x000338 - 0x000350)
class UUMGFriendListTabWidget : public UUMGFriendBaseTabListWidget
{ 
public:
	class UUMGExpandableListWidget*                    SentInviteToParty;                                          // 0x0338   (0x0008)  
	class UUMGExpandableListWidget*                    ConnectedFriendsExpandableList;                             // 0x0340   (0x0008)  
	class UUMGExpandableListWidget*                    DisconnectedFriendsExpandableList;                          // 0x0348   (0x0008)  
};

/// Class /Script/DBDUIViewsMobile.UMGFriendPartyListElementWidget
/// Size: 0x0138 (0x0005D0 - 0x000708)
class UUMGFriendPartyListElementWidget : public UUMGFriendElementWidget
{ 
public:
	class UWidgetSwitcher*                             ButtonOrStatusSwitcher;                                     // 0x05D0   (0x0008)  
	class UButton*                                     CancelInviteButton;                                         // 0x05D8   (0x0008)  
	class UImage*                                      PartyStatusImage;                                           // 0x05E0   (0x0008)  
	FSlateBrush                                        IconNotReady;                                               // 0x05E8   (0x0090)  
	FSlateBrush                                        IconReady;                                                  // 0x0678   (0x0090)  


	/// Functions
	// Function /Script/DBDUIViewsMobile.UMGFriendPartyListElementWidget.HandleCancelInviteButtonClicked
	// void HandleCancelInviteButtonClicked();                                                                               // [0x4bb26c0] Final|Native|Protected 
};

/// Class /Script/DBDUIViewsMobile.UMGFriendSearchBarWidget
/// Size: 0x0040 (0x000338 - 0x000378)
class UUMGFriendSearchBarWidget : public UMobileBaseUserWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0338   (0x0030)  MISSED
	class UEditableTextBox*                            InputTextField;                                             // 0x0368   (0x0008)  
	class UUMGBaseButtonWidget*                        SearchButton;                                               // 0x0370   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsMobile.UMGFriendSearchBarWidget.HandleTextInputChanged
	// void HandleTextInputChanged(FText& textInput);                                                                        // [0x4bb3b20] Final|Native|Private|HasOutParms 
	// Function /Script/DBDUIViewsMobile.UMGFriendSearchBarWidget.HandleSearchButtonClicked
	// void HandleSearchButtonClicked();                                                                                     // [0x4bb3b00] Final|Native|Private 
};

/// Class /Script/DBDUIViewsMobile.UMGFriendTabButtonWidget
/// Size: 0x0050 (0x0004D8 - 0x000528)
class UUMGFriendTabButtonWidget : public UUMGBaseTabButtonWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x04D8   (0x0050)  MISSED
};

/// Class /Script/DBDUIViewsMobile.UMGRequestsListTabWidget
/// Size: 0x0010 (0x000338 - 0x000348)
class UUMGRequestsListTabWidget : public UUMGFriendBaseTabListWidget
{ 
public:
	class UUMGExpandableListWidget*                    FriendRequestExpandableList;                                // 0x0338   (0x0008)  
	class UUMGExpandableListWidget*                    PendingExpandableList;                                      // 0x0340   (0x0008)  
};

/// Class /Script/DBDUIViewsMobile.UMGScrollListPageButton
/// Size: 0x0028 (0x000338 - 0x000360)
class UUMGScrollListPageButton : public UMobileBaseUserWidget
{ 
public:
	SDK_UNDEFINED(16,1487) /* FMulticastInlineDelegate */ __um(OnClicked);                                         // 0x0338   (0x0010)  
	int32_t                                            pageIndex;                                                  // 0x0348   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x034C   (0x0004)  MISSED
	class UButton*                                     ActionButton;                                               // 0x0350   (0x0008)  
	class UImage*                                      SelectedImage;                                              // 0x0358   (0x0008)  


	/// Functions
	// Function /Script/DBDUIViewsMobile.UMGScrollListPageButton.SetIsSelected
	// void SetIsSelected(bool Selected);                                                                                    // [0x4bb3bf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDUIViewsMobile.UMGScrollListPageButton.HandleActionButtonClick
	// void HandleActionButtonClick();                                                                                       // [0x4bb3a50] Final|Native|Public  
};

/// Class /Script/DBDUIViewsMobile.UMGSuggestionsListTabWidget
/// Size: 0x0010 (0x000338 - 0x000348)
class UUMGSuggestionsListTabWidget : public UUMGFriendBaseTabListWidget
{ 
public:
	class UUMGExpandableListWidget*                    PlayedWithFriendsExpandableList;                            // 0x0338   (0x0008)  
	class UUMGExpandableListWidget*                    SocialFriendsExpandableList;                                // 0x0340   (0x0008)  
};

/// Struct /Script/DBDUIViewsMobile.ActionOnFriend
/// Size: 0x0078 (0x000000 - 0x000078)
struct FActionOnFriend
{ 
	EActionOnFriendType                                ActionToProceed;                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FAtlantaFriendUIData                               AtlantaFriendDataToUpdate;                                  // 0x0008   (0x0068)  
	class UUMGBaseFriendListElement*                   ActionOwner;                                                // 0x0070   (0x0008)  
};

/// Struct /Script/DBDUIViewsMobile.FriendStatusUIData
/// Size: 0x0050 (0x000008 - 0x000058)
struct FFriendStatusUIData : FDBDTableRowBase
{ 
	EAtlantaFriendUIStatus                             FriendStatus;                                               // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	SDK_UNDEFINED(48,1488) /* TWeakObjectPtr<UTexture2D*> */ __um(StatusIcon);                                     // 0x0010   (0x0030)  
	SDK_UNDEFINED(24,1489) /* FText */                 __um(StatusText);                                           // 0x0040   (0x0018)  
};

/// Struct /Script/DBDUIViewsMobile.MatchConfigDifficultyData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMatchConfigDifficultyData
{ 
	SDK_UNDEFINED(48,1490) /* TWeakObjectPtr<UPaperSprite*> */ __um(DifficultyIcon);                               // 0x0000   (0x0030)  
};

/// Struct /Script/DBDUIViewsMobile.MatchOptionAssetData
/// Size: 0x0048 (0x000000 - 0x000048)
struct FMatchOptionAssetData
{ 
	SDK_UNDEFINED(24,1491) /* FText */                 __um(TextName);                                             // 0x0000   (0x0018)  
	SDK_UNDEFINED(48,1492) /* TWeakObjectPtr<UPaperSprite*> */ __um(Icon);                                         // 0x0018   (0x0030)  
};

/// Struct /Script/DBDUIViewsMobile.MatchConfigOptionUIData
/// Size: 0x0068 (0x000000 - 0x000068)
struct FMatchConfigOptionUIData
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	SDK_UNDEFINED(16,1493) /* FString */               __um(StringId);                                             // 0x0008   (0x0010)  
	SDK_UNDEFINED(24,1494) /* FText */                 __um(OptionName);                                           // 0x0018   (0x0018)  
	SDK_UNDEFINED(48,1495) /* TWeakObjectPtr<UPaperSprite*> */ __um(OptionIcon);                                   // 0x0030   (0x0030)  
	ECustomMatchOptions                                OptionType;                                                 // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Struct /Script/DBDUIViewsMobile.MatchConfigTabData
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FMatchConfigTabData
{ 
	SDK_UNDEFINED(48,1496) /* TWeakObjectPtr<UClass*> */ __um(Widget);                                             // 0x0000   (0x0030)  
	SDK_UNDEFINED(48,1497) /* TWeakObjectPtr<UPaperSprite*> */ __um(TabIcon);                                      // 0x0030   (0x0030)  
	SDK_UNDEFINED(80,1498) /* TMap<ECustomMatchOptions, int32_t> */ __um(DefaultOptionsID);                        // 0x0060   (0x0050)  
};

