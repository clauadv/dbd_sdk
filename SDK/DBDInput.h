
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: Engine
/// dependency: InputUtilities

/// Enum /Script/DBDInput.EAnalogCursorDataType
/// Size: 0x13
enum class EAnalogCursorDataType : uint8_t
{
	EAnalogCursorDataType__MaxSpeedDefault                                           = 0,
	EAnalogCursorDataType__MaxSpeedDefaultSlow                                       = 1,
	EAnalogCursorDataType__MaxSpeedStickyDefault                                     = 2,
	EAnalogCursorDataType__MaxSpeedStickySlow                                        = 3,
	EAnalogCursorDataType__MaxSpeedStickyButtonMedium                                = 4,
	EAnalogCursorDataType__MaxSpeedStickyButtonLarge                                 = 5,
	EAnalogCursorDataType__MaxSpeedDefaultBloodweb                                   = 6,
	EAnalogCursorDataType__MaxSpeedStickyBloodweb                                    = 7,
	EAnalogCursorDataType__CustomAcceleration                                        = 8,
	EAnalogCursorDataType__DeadZone                                                  = 9,
	EAnalogCursorDataType__HandheldSpeedBoostFactor                                  = 10,
	EAnalogCursorDataType__DragZoneMaxDelta                                          = 11,
	EAnalogCursorDataType__EAnalogCursorDataType_MAX                                 = 12
};

/// Enum /Script/DBDInput.EDBDInputMode
/// Size: 0x05
enum class EDBDInputMode : uint8_t
{
	EDBDInputMode__None                                                              = 0,
	EDBDInputMode__Scaleform                                                         = 1,
	EDBDInputMode__UMG                                                               = 2,
	EDBDInputMode__Game                                                              = 3,
	EDBDInputMode__EDBDInputMode_MAX                                                 = 4
};

/// Enum /Script/DBDInput.EUIActionType
/// Size: 0x20
enum class EUIActionType : uint8_t
{
	EUIActionType__None                                                              = 0,
	EUIActionType__Accept                                                            = 1,
	EUIActionType__Cancel                                                            = 2,
	EUIActionType__Previous                                                          = 3,
	EUIActionType__Next                                                              = 4,
	EUIActionType__PreviousSecondary                                                 = 5,
	EUIActionType__NextSecondary                                                     = 6,
	EUIActionType__ArchivesSurvivorSlot                                              = 7,
	EUIActionType__ArchivesKillerAndSurvivorSlot                                     = 8,
	EUIActionType__ArchivesKillerSlot                                                = 9,
	EUIActionType__FaceButtonLeft                                                    = 10,
	EUIActionType__FaceButtonTop                                                     = 11,
	EUIActionType__Scroll                                                            = 12,
	EUIActionType__Options                                                           = 13,
	EUIActionType__Extra1                                                            = 14,
	EUIActionType__Extra2                                                            = 15,
	EUIActionType__Extra3                                                            = 16,
	EUIActionType__Extra4                                                            = 17,
	EUIActionType__Select                                                            = 18,
	EUIActionType__EUIActionType_MAX                                                 = 19
};

/// Class /Script/DBDInput.ControlModeManager
/// Size: 0x0058 (0x000030 - 0x000088)
class UControlModeManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0030   (0x0050)  MISSED
	class UGameInstance*                               _gameInstance;                                              // 0x0080   (0x0008)  
};

/// Class /Script/DBDInput.DBDInputManager
/// Size: 0x00E0 (0x000038 - 0x000118)
class UDBDInputManager : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0038   (0x0020)  MISSED
	class UControlModeManager*                         _controlModeManager;                                        // 0x0058   (0x0008)  
	class USwitchDockStateManager*                     _switchDockStateManager;                                    // 0x0060   (0x0008)  
	class UVirtualKeyboardManager*                     _virtualKeyboardManager;                                    // 0x0068   (0x0008)  
	class UDataTable*                                  _analogCursorDb;                                            // 0x0070   (0x0008)  
	unsigned char                                      UnknownData01_6[0xA0];                                      // 0x0078   (0x00A0)  MISSED


	/// Functions
	// Function /Script/DBDInput.DBDInputManager.RemovePresenterRootWidget
	// void RemovePresenterRootWidget(class UUserWidget* presenterRootWidget);                                               // [0x8592800] Final|Native|Public|BlueprintCallable 
	// Function /Script/DBDInput.DBDInputManager.AddPresenterRootWidget
	// void AddPresenterRootWidget(class UUserWidget* presenterRootWidget);                                                  // [0x8592770] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDInput.InteractiveWidgetInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UInteractiveWidgetInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/DBDInput.InteractiveWidgetInterface.HandleKeyUpEvent
	// void HandleKeyUpEvent(FKeyEvent& InKeyEvent);                                                                         // [0x85932e0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/DBDInput.InteractiveWidgetInterface.HandleKeyHoldEvent
	// void HandleKeyHoldEvent(FKeyEvent& InKeyEvent);                                                                       // [0x85931e0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/DBDInput.InteractiveWidgetInterface.HandleKeyDownEvent
	// void HandleKeyDownEvent(FKeyEvent& InKeyEvent);                                                                       // [0x85930e0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/DBDInput.InteractiveWidgetInterface.HandleAnalogInputEvent
	// void HandleAnalogInputEvent(FAnalogInputEvent& InAnalogInputEvent);                                                   // [0x8592fc0] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/DBDInput.MultipleGamepadsControlModeInfo
/// Size: 0x0018 (0x000038 - 0x000050)
class UMultipleGamepadsControlModeInfo : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0038   (0x0018)  MISSED
};

/// Class /Script/DBDInput.SwitchDockStateManager
/// Size: 0x0020 (0x000030 - 0x000050)
class USwitchDockStateManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0030   (0x0020)  MISSED
};

/// Class /Script/DBDInput.UIInputUtilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UUIInputUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DBDInput.UIInputUtilities.ShouldUseAtlantaControls
	// bool ShouldUseAtlantaControls(class UObject* WorldContextObject);                                                     // [0x8593b80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DBDInput.UIInputUtilities.IsInputKeyControlModePairValid
	// bool IsInputKeyControlModePairValid(FKey InputKey, EControlMode controlMode);                                         // [0x8593a40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DBDInput.UIInputUtilities.GetKeyFromUIAction
	// FKey GetKeyFromUIAction(EUIActionType ActionType, bool isUsingGamepad);                                               // [0x85938e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DBDInput.UIInputUtilities.AreGamepadButtonsXOSwitched
	// bool AreGamepadButtonsXOSwitched();                                                                                   // [0x85938b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/DBDInput.VirtualKeyboardManager
/// Size: 0x0028 (0x000030 - 0x000058)
class UVirtualKeyboardManager : public UObject
{ 
public:
	class UVirtualKeyboard*                            _virtualKeyboard;                                           // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0038   (0x0020)  MISSED
};

/// Struct /Script/DBDInput.AnalogCursorData
/// Size: 0x0010 (0x000008 - 0x000018)
struct FAnalogCursorData : FDBDTableRowBase
{ 
	EAnalogCursorDataType                              Type;                                                       // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              value;                                                      // 0x000C   (0x0004)  
	bool                                               ScalesWithDPI;                                              // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

