
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: InputCore

/// Enum /Script/HeadMountedDisplay.EXRVisualType
/// Size: 0x03
enum class EXRVisualType : uint8_t
{
	EXRVisualType__Controller                                                        = 0,
	EXRVisualType__Hand                                                              = 1,
	EXRVisualType__EXRVisualType_MAX                                                 = 2
};

/// Enum /Script/HeadMountedDisplay.EHandKeypoint
/// Size: 0x27
enum class EHandKeypoint : uint8_t
{
	EHandKeypoint__Palm                                                              = 0,
	EHandKeypoint__Wrist                                                             = 1,
	EHandKeypoint__ThumbMetacarpal                                                   = 2,
	EHandKeypoint__ThumbProximal                                                     = 3,
	EHandKeypoint__ThumbDistal                                                       = 4,
	EHandKeypoint__ThumbTip                                                          = 5,
	EHandKeypoint__IndexMetacarpal                                                   = 6,
	EHandKeypoint__IndexProximal                                                     = 7,
	EHandKeypoint__IndexIntermediate                                                 = 8,
	EHandKeypoint__IndexDistal                                                       = 9,
	EHandKeypoint__IndexTip                                                          = 10,
	EHandKeypoint__MiddleMetacarpal                                                  = 11,
	EHandKeypoint__MiddleProximal                                                    = 12,
	EHandKeypoint__MiddleIntermediate                                                = 13,
	EHandKeypoint__MiddleDistal                                                      = 14,
	EHandKeypoint__MiddleTip                                                         = 15,
	EHandKeypoint__RingMetacarpal                                                    = 16,
	EHandKeypoint__RingProximal                                                      = 17,
	EHandKeypoint__RingIntermediate                                                  = 18,
	EHandKeypoint__RingDistal                                                        = 19,
	EHandKeypoint__RingTip                                                           = 20,
	EHandKeypoint__LittleMetacarpal                                                  = 21,
	EHandKeypoint__LittleProximal                                                    = 22,
	EHandKeypoint__LittleIntermediate                                                = 23,
	EHandKeypoint__LittleDistal                                                      = 24,
	EHandKeypoint__LittleTip                                                         = 25,
	EHandKeypoint__EHandKeypoint_MAX                                                 = 26
};

/// Enum /Script/HeadMountedDisplay.EXRTrackedDeviceType
/// Size: 0x07
enum class EXRTrackedDeviceType : uint8_t
{
	EXRTrackedDeviceType__HeadMountedDisplay                                         = 0,
	EXRTrackedDeviceType__Controller                                                 = 1,
	EXRTrackedDeviceType__TrackingReference                                          = 2,
	EXRTrackedDeviceType__Other                                                      = 3,
	EXRTrackedDeviceType__Invalid                                                    = 254,
	EXRTrackedDeviceType__Any                                                        = 255,
	EXRTrackedDeviceType__EXRTrackedDeviceType_MAX                                   = 256
};

/// Enum /Script/HeadMountedDisplay.ESpectatorScreenMode
/// Size: 0x09
enum class ESpectatorScreenMode : uint8_t
{
	ESpectatorScreenMode__Disabled                                                   = 0,
	ESpectatorScreenMode__SingleEyeLetterboxed                                       = 1,
	ESpectatorScreenMode__Undistorted                                                = 2,
	ESpectatorScreenMode__Distorted                                                  = 3,
	ESpectatorScreenMode__SingleEye                                                  = 4,
	ESpectatorScreenMode__SingleEyeCroppedToFill                                     = 5,
	ESpectatorScreenMode__Texture                                                    = 6,
	ESpectatorScreenMode__TexturePlusEye                                             = 7,
	ESpectatorScreenMode__ESpectatorScreenMode_MAX                                   = 8
};

/// Enum /Script/HeadMountedDisplay.EXRSystemFlags
/// Size: 0x06
enum class EXRSystemFlags : uint8_t
{
	EXRSystemFlags__NoFlags                                                          = 0,
	EXRSystemFlags__IsAR                                                             = 1,
	EXRSystemFlags__IsTablet                                                         = 2,
	EXRSystemFlags__IsHeadMounted                                                    = 4,
	EXRSystemFlags__SupportsHandTracking                                             = 8,
	EXRSystemFlags__EXRSystemFlags_MAX                                               = 9
};

/// Enum /Script/HeadMountedDisplay.EXRDeviceConnectionResult
/// Size: 0x06
enum class EXRDeviceConnectionResult : uint8_t
{
	EXRDeviceConnectionResult__NoTrackingSystem                                      = 0,
	EXRDeviceConnectionResult__FeatureNotSupported                                   = 1,
	EXRDeviceConnectionResult__NoValidViewport                                       = 2,
	EXRDeviceConnectionResult__MiscFailure                                           = 3,
	EXRDeviceConnectionResult__Success                                               = 4,
	EXRDeviceConnectionResult__EXRDeviceConnectionResult_MAX                         = 5
};

/// Enum /Script/HeadMountedDisplay.EHMDWornState
/// Size: 0x04
enum class EHMDWornState : uint8_t
{
	EHMDWornState__Unknown                                                           = 0,
	EHMDWornState__Worn                                                              = 1,
	EHMDWornState__NotWorn                                                           = 2,
	EHMDWornState__EHMDWornState_MAX                                                 = 3
};

/// Enum /Script/HeadMountedDisplay.EHMDTrackingOrigin
/// Size: 0x04
enum class EHMDTrackingOrigin : uint8_t
{
	EHMDTrackingOrigin__Floor                                                        = 0,
	EHMDTrackingOrigin__Eye                                                          = 1,
	EHMDTrackingOrigin__Stage                                                        = 2,
	EHMDTrackingOrigin__EHMDTrackingOrigin_MAX                                       = 3
};

/// Enum /Script/HeadMountedDisplay.EOrientPositionSelector
/// Size: 0x04
enum class EOrientPositionSelector : uint8_t
{
	EOrientPositionSelector__Orientation                                             = 0,
	EOrientPositionSelector__Position                                                = 1,
	EOrientPositionSelector__OrientationAndPosition                                  = 2,
	EOrientPositionSelector__EOrientPositionSelector_MAX                             = 3
};

/// Enum /Script/HeadMountedDisplay.ETrackingStatus
/// Size: 0x04
enum class ETrackingStatus : uint8_t
{
	ETrackingStatus__NotTracked                                                      = 0,
	ETrackingStatus__InertialOnly                                                    = 1,
	ETrackingStatus__Tracked                                                         = 2,
	ETrackingStatus__ETrackingStatus_MAX                                             = 3
};

/// Enum /Script/HeadMountedDisplay.ESpatialInputGestureAxis
/// Size: 0x05
enum class ESpatialInputGestureAxis : uint8_t
{
	ESpatialInputGestureAxis__None                                                   = 0,
	ESpatialInputGestureAxis__Manipulation                                           = 1,
	ESpatialInputGestureAxis__Navigation                                             = 2,
	ESpatialInputGestureAxis__NavigationRails                                        = 3,
	ESpatialInputGestureAxis__ESpatialInputGestureAxis_MAX                           = 4
};

/// Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition
	// void UpdateExternalTrackingHMDPosition(FTransform& ExternalTrackingTransform);                                        // [0x6b244f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRTimedInputActionDelegate
	// void SetXRTimedInputActionDelegate(FName& ActionName, FDelegateProperty& InDelegate);                                 // [0x6b243e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetXRDisconnectDelegate
	// void SetXRDisconnectDelegate(FDelegateProperty& InDisconnectedDelegate);                                              // [0x6b24330] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale
	// void SetWorldToMetersScale(class UObject* WorldContext, float NewScale);                                              // [0x6b24270] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin
	// void SetTrackingOrigin(TEnumAsByte<EHMDTrackingOrigin> Origin);                                                       // [0x6b24180] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture
	// void SetSpectatorScreenTexture(class UTexture* InTexture);                                                            // [0x6b24060] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout
	// void SetSpectatorScreenModeTexturePlusEyeLayout(FVector2D EyeRectMin, FVector2D EyeRectMax, FVector2D TextureRectMin, FVector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha); // [0x6b23e50] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode
	// void SetSpectatorScreenMode(ESpectatorScreenMode Mode);                                                               // [0x6b23de0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes
	// void SetClippingPlanes(float Near, float Far);                                                                        // [0x6b23b60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition
	// void ResetOrientationAndPosition(float Yaw, TEnumAsByte<EOrientPositionSelector> Options);                            // [0x6b23a10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable
	// bool IsSpectatorScreenModeControllable();                                                                             // [0x6b239c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode
	// bool IsInLowPersistenceMode();                                                                                        // [0x48783e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled
	// bool IsHeadMountedDisplayEnabled();                                                                                   // [0x6b23990] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected
	// bool IsHeadMountedDisplayConnected();                                                                                 // [0x6b23960] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking
	// bool IsDeviceTracking(FXRDeviceId& XRDeviceId);                                                                       // [0x6b238c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition
	// bool HasValidTrackingPosition();                                                                                      // [0x6b23890] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetXRSystemFlags
	// int32_t GetXRSystemFlags();                                                                                           // [0x6b23860] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale
	// float GetWorldToMetersScale(class UObject* WorldContext);                                                             // [0x6b237d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState
	// void GetVRFocusState(bool& bUseFocus, bool& bHasFocus);                                                               // [0x6b23670] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVersionString
	// FString GetVersionString();                                                                                           // [0x6b23750] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform
	// FTransform GetTrackingToWorldTransform(class UObject* WorldContext);                                                  // [0x6b235b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters
	// void GetTrackingSensorParameters(FVector& Origin, FRotator& Rotation, float& LeftFOV, float& RightFOV, float& TopFOV, float& BottomFOV, float& distance, float& NearPlane, float& FarPlane, bool& IsActive, int32_t index); // [0x6b231d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOriginTransform
	// bool GetTrackingOriginTransform(TEnumAsByte<EHMDTrackingOrigin> Origin, FTransform& OutTransform);                    // [0x6b230b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin
	// TEnumAsByte<EHMDTrackingOrigin> GetTrackingOrigin();                                                                  // [0x6b23070] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage
	// float GetScreenPercentage();                                                                                          // [0x6b23040] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters
	// void GetPositionalTrackingCameraParameters(FVector& CameraOrigin, FRotator& CameraRotation, float& HFOV, float& VFOV, float& CameraDistance, float& NearPlane, float& FarPlane); // [0x6b22dd0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPlayAreaRect
	// bool GetPlayAreaRect(FTransform& OutTransform, FVector2D& OutRect);                                                   // [0x6b22cb0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPlayAreaBounds
	// FVector2D GetPlayAreaBounds(TEnumAsByte<EHMDTrackingOrigin> Origin);                                                  // [0x6b22c20] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity
	// float GetPixelDensity();                                                                                              // [0x6b22bf0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition
	// void GetOrientationAndPosition(FRotator& DeviceRotation, FVector& DevicePosition);                                    // [0x6b22a20] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors
	// int32_t GetNumOfTrackingSensors();                                                                                    // [0x6b229f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetMotionControllerData
	// void GetMotionControllerData(class UObject* WorldContext, EControllerHand Hand, FXRMotionControllerData& MotionControllerData); // [0x6b22860] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState
	// TEnumAsByte<EHMDWornState> GetHMDWornState();                                                                         // [0x6b22740] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName
	// FName GetHMDDeviceName();                                                                                             // [0x6b22700] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDData
	// void GetHMDData(class UObject* WorldContext, FXRHMDData& HMDData);                                                    // [0x6b22610] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose
	// void GetDeviceWorldPose(class UObject* WorldContext, FXRDeviceId& XRDeviceId, bool& bIsTracked, FRotator& Orientation, bool& bHasPositionalTracking, FVector& position); // [0x6b223e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose
	// void GetDevicePose(FXRDeviceId& XRDeviceId, bool& bIsTracked, FRotator& Orientation, bool& bHasPositionalTracking, FVector& position); // [0x6b221f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetControllerTransformForTime
	// bool GetControllerTransformForTime(class UObject* WorldContext, int32_t ControllerIndex, FName MotionSource, FTimespan Time, bool& bTimeWasUsed, FRotator& Orientation, FVector& position, bool& bProvidedLinearVelocity, FVector& LinearVelocity, bool& bProvidedAngularVelocity, FVector& AngularVelocityRadPerSec, bool& bProvidedLinearAcceleration, FVector& LinearAcceleration); // [0x6b21da0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices
	// TArray<FXRDeviceId> EnumerateTrackedDevices(FName SystemId, EXRTrackedDeviceType DeviceType);                         // [0x6b21c70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode
	// void EnableLowPersistenceMode(bool bEnable);                                                                          // [0x58c6b60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD
	// bool EnableHMD(bool bEnable);                                                                                         // [0x6b21be0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.DisconnectRemoteXRDevice
	// void DisconnectRemoteXRDevice();                                                                                      // [0x6b21bc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConnectRemoteXRDevice
	// TEnumAsByte<EXRDeviceConnectionResult> ConnectRemoteXRDevice(FString IpAddress, int32_t BitRate);                     // [0x6b21a60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ConfigureGestures
	// bool ConfigureGestures(FXRGestureConfig& GestureConfig);                                                              // [0x6b219c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ClearXRTimedInputActionDelegate
	// void ClearXRTimedInputActionDelegate(FName& ActionPath);                                                              // [0x6b21930] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD
	// void CalibrateExternalTrackingToHMD(FTransform& ExternalTrackingTransform);                                           // [0x6b21860] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.BreakKey
	// void BreakKey(FKey InKey, FString& InteractionProfile, EControllerHand& Hand, FName& MotionSource, FString& Indentifier, FString& Component); // [0x6b215a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/HeadMountedDisplay.HandKeypointConversion
/// Size: 0x0000 (0x000030 - 0x000030)
class UHandKeypointConversion : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HeadMountedDisplay.HandKeypointConversion.Conv_HandKeypointToInt32
	// int32_t Conv_HandKeypointToInt32(EHandKeypoint Input);                                                                // [0x6b21b40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/HeadMountedDisplay.MotionControllerComponent
/// Size: 0x00C0 (0x000480 - 0x000540)
class UMotionControllerComponent : public UPrimitiveComponent
{ 
public:
	int32_t                                            PlayerIndex;                                                // 0x0480   (0x0004)  
	EControllerHand                                    Hand;                                                       // 0x0484   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0485   (0x0003)  MISSED
	FName                                              MotionSource;                                               // 0x0488   (0x000C)  
	bool                                               bDisableLowLatencyUpdate : 1;                               // 0x0494:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0495   (0x0003)  MISSED
	ETrackingStatus                                    CurrentTrackingStatus;                                      // 0x0498   (0x0001)  
	bool                                               bDisplayDeviceModel;                                        // 0x0499   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x049A   (0x0002)  MISSED
	FName                                              DisplayModelSource;                                         // 0x049C   (0x000C)  
	class UStaticMesh*                                 CustomDisplayMesh;                                          // 0x04A8   (0x0008)  
	TArray<class UMaterialInterface*>                  DisplayMeshMaterialOverrides;                               // 0x04B0   (0x0010)  
	unsigned char                                      UnknownData03_5[0x60];                                      // 0x04C0   (0x0060)  MISSED
	class UPrimitiveComponent*                         DisplayComponent;                                           // 0x0520   (0x0008)  
	unsigned char                                      UnknownData04_6[0x18];                                      // 0x0528   (0x0018)  MISSED


	/// Functions
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
	// void SetTrackingSource(EControllerHand NewSource);                                                                    // [0x6b241f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
	// void SetTrackingMotionSource(FName NewSource);                                                                        // [0x6b240e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel
	// void SetShowDeviceModel(bool bShowControllerModel);                                                                   // [0x6b23d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource
	// void SetDisplayModelSource(FName NewDisplayModelSource);                                                              // [0x6b23cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh
	// void SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh);                                                         // [0x6b23c20] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
	// void SetAssociatedPlayerIndex(int32_t NewPlayer);                                                                     // [0x6b23ad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated
	// void OnMotionControllerUpdated();                                                                                     // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.IsTracked
	// bool IsTracked();                                                                                                     // [0x6b239f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
	// EControllerHand GetTrackingSource();                                                                                  // [0x6b23580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetParameterValue
	// float GetParameterValue(FName InName, bool& bValueFound);                                                             // [0x6b22af0] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
	// FVector GetHandJointPosition(int32_t jointIndex, bool& bValueFound);                                                  // [0x6b22770] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault
	// void SetIsControllerMotionTrackingEnabledByDefault(bool enable);                                                      // [0x6b26750] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource
	// bool IsMotionTrackingEnabledForSource(int32_t PlayerIndex, FName SourceName);                                         // [0x6b26670] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice
	// bool IsMotionTrackingEnabledForDevice(int32_t PlayerIndex, EControllerHand Hand);                                     // [0x6b265a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent
	// bool IsMotionTrackingEnabledForComponent(class UMotionControllerComponent* MotionControllerComponent);                // [0x6b26510] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary
	// bool IsMotionTrackedDeviceCountManagementNecessary();                                                                 // [0x6b264e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking
	// bool IsMotionSourceTracking(int32_t PlayerIndex, FName SourceName);                                                   // [0x6b26400] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount
	// int32_t GetMotionTrackingEnabledControllerCount();                                                                    // [0x6b263b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount
	// int32_t GetMaximumMotionTrackedControllerCount();                                                                     // [0x6b26380] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName
	// FName GetActiveTrackingSystemName();                                                                                  // [0x6b26340] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources
	// TArray<FName> EnumerateMotionSources();                                                                               // [0x6b262c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource
	// bool EnableMotionTrackingOfSource(int32_t PlayerIndex, FName SourceName);                                             // [0x6b261e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice
	// bool EnableMotionTrackingOfDevice(int32_t PlayerIndex, EControllerHand Hand);                                         // [0x6b26110] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent
	// bool EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);                   // [0x6b26080] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource
	// void DisableMotionTrackingOfSource(int32_t PlayerIndex, FName SourceName);                                            // [0x6b25fb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice
	// void DisableMotionTrackingOfDevice(int32_t PlayerIndex, EControllerHand Hand);                                        // [0x6b25ef0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer
	// void DisableMotionTrackingOfControllersForPlayer(int32_t PlayerIndex);                                                // [0x6b25e70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers
	// void DisableMotionTrackingOfAllControllers();                                                                         // [0x6b25e50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent
	// void DisableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);                  // [0x6b25dd0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/HeadMountedDisplay.VRNotificationsComponent
/// Size: 0x00B0 (0x0000B8 - 0x000168)
class UVRNotificationsComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,5080) /* FMulticastInlineDelegate */ __um(HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate); // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,5081) /* FMulticastInlineDelegate */ __um(HMDTrackingInitializedDelegate);                    // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,5082) /* FMulticastInlineDelegate */ __um(HMDRecenteredDelegate);                             // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,5083) /* FMulticastInlineDelegate */ __um(HMDLostDelegate);                                   // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,5084) /* FMulticastInlineDelegate */ __um(HMDReconnectedDelegate);                            // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,5085) /* FMulticastInlineDelegate */ __um(HMDConnectCanceledDelegate);                        // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,5086) /* FMulticastInlineDelegate */ __um(HMDPutOnHeadDelegate);                              // 0x0118   (0x0010)  
	SDK_UNDEFINED(16,5087) /* FMulticastInlineDelegate */ __um(HMDRemovedFromHeadDelegate);                        // 0x0128   (0x0010)  
	SDK_UNDEFINED(16,5088) /* FMulticastInlineDelegate */ __um(VRControllerRecenteredDelegate);                    // 0x0138   (0x0010)  
	SDK_UNDEFINED(16,5089) /* FMulticastInlineDelegate */ __um(XRTrackingOriginChangedDelegate);                   // 0x0148   (0x0010)  
	SDK_UNDEFINED(16,5090) /* FMulticastInlineDelegate */ __um(XRPlayAreaChangedDelegate);                         // 0x0158   (0x0010)  
};

/// Class /Script/HeadMountedDisplay.XRAssetFunctionLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking
	// class UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(class AActor* Target, FName SystemName, FName DeviceName, bool bManualAttachment, FTransform& RelativeTransform, FXRDeviceId& XRDeviceId); // [0x6b25b50] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking
	// class UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(class AActor* Target, FXRDeviceId& XRDeviceId, bool bManualAttachment, FTransform& RelativeTransform); // [0x6b254c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
/// Size: 0x0030 (0x000038 - 0x000068)
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,5091) /* FMulticastInlineDelegate */ __um(OnModelLoaded);                                     // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,5092) /* FMulticastInlineDelegate */ __um(OnLoadFailure);                                     // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0058   (0x0008)  MISSED
	class UPrimitiveComponent*                         SpawnedComponent;                                           // 0x0060   (0x0008)  


	/// Functions
	// Function /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync
	// class UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(class AActor* Target, FName SystemName, FName DeviceName, bool bManualAttachment, FTransform& RelativeTransform, FXRDeviceId& XRDeviceId, class UPrimitiveComponent*& NewComponent); // [0x6b25890] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync
	// class UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(class AActor* Target, FXRDeviceId& XRDeviceId, bool bManualAttachment, FTransform& RelativeTransform, class UPrimitiveComponent*& NewComponent); // [0x6b25290] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UXRLoadingScreenFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ShowLoadingScreen
	// void ShowLoadingScreen();                                                                                             // [0x6b26990] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen
	// void SetLoadingScreen(class UTexture* Texture, FVector2D Scale, FVector Offset, bool bShowLoadingMovie, bool bShowOnSet); // [0x6b267d0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.HideLoadingScreen
	// void HideLoadingScreen();                                                                                             // [0x6b263e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ClearLoadingScreenSplashes
	// void ClearLoadingScreenSplashes();                                                                                    // [0x6b25db0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash
	// void AddLoadingScreenSplash(class UTexture* Texture, FVector Translation, FRotator Rotation, FVector2D Size, FRotator DeltaRotation, bool bClearBeforeAdd); // [0x6b25690] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/HeadMountedDisplay.XRMotionControllerData
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FXRMotionControllerData
{ 
	bool                                               bValid;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              DeviceName;                                                 // 0x0004   (0x000C)  
	FGuid                                              ApplicationInstanceID;                                      // 0x0010   (0x0010)  
	EXRVisualType                                      DeviceVisualType;                                           // 0x0020   (0x0001)  
	EControllerHand                                    HandIndex;                                                  // 0x0021   (0x0001)  
	ETrackingStatus                                    TrackingStatus;                                             // 0x0022   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x0023   (0x0001)  MISSED
	FVector                                            GripPosition;                                               // 0x0024   (0x000C)  
	FQuat                                              GripRotation;                                               // 0x0030   (0x0010)  
	FVector                                            AimPosition;                                                // 0x0040   (0x000C)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FQuat                                              AimRotation;                                                // 0x0050   (0x0010)  
	TArray<FVector>                                    HandKeyPositions;                                           // 0x0060   (0x0010)  
	TArray<FQuat>                                      HandKeyRotations;                                           // 0x0070   (0x0010)  
	TArray<float>                                      HandKeyRadii;                                               // 0x0080   (0x0010)  
	bool                                               bIsGrasped;                                                 // 0x0090   (0x0001)  
	unsigned char                                      UnknownData03_6[0xF];                                       // 0x0091   (0x000F)  MISSED
};

/// Struct /Script/HeadMountedDisplay.XRHMDData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FXRHMDData
{ 
	bool                                               bValid;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              DeviceName;                                                 // 0x0004   (0x000C)  
	FGuid                                              ApplicationInstanceID;                                      // 0x0010   (0x0010)  
	ETrackingStatus                                    TrackingStatus;                                             // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	FVector                                            position;                                                   // 0x0024   (0x000C)  
	FQuat                                              Rotation;                                                   // 0x0030   (0x0010)  
};

/// Struct /Script/HeadMountedDisplay.XRDeviceId
/// Size: 0x0010 (0x000000 - 0x000010)
struct FXRDeviceId
{ 
	FName                                              SystemName;                                                 // 0x0000   (0x000C)  
	int32_t                                            DeviceID;                                                   // 0x000C   (0x0004)  
};

/// Struct /Script/HeadMountedDisplay.XRGestureConfig
/// Size: 0x0006 (0x000000 - 0x000006)
struct FXRGestureConfig
{ 
	bool                                               bTap;                                                       // 0x0000   (0x0001)  
	bool                                               bHold;                                                      // 0x0001   (0x0001)  
	ESpatialInputGestureAxis                           AxisGesture;                                                // 0x0002   (0x0001)  
	bool                                               bNavigationAxisX;                                           // 0x0003   (0x0001)  
	bool                                               bNavigationAxisY;                                           // 0x0004   (0x0001)  
	bool                                               bNavigationAxisZ;                                           // 0x0005   (0x0001)  
};

