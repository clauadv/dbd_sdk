
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

/// Enum /Script/ScaleformUI.GFxHitTestType
/// Size: 0x05
enum class GFxHitTestType : uint8_t
{
	GFxHitTestType__HitTest_Bounds                                                   = 0,
	GFxHitTestType__HitTest_Shapes                                                   = 1,
	GFxHitTestType__HitTest_ButtonEvents                                             = 2,
	GFxHitTestType__HitTest_ShapesNoInvisible                                        = 3,
	GFxHitTestType__HitTest_MAX                                                      = 4
};

/// Enum /Script/ScaleformUI.EGFxTimingMode
/// Size: 0x03
enum class EGFxTimingMode : uint8_t
{
	EGFxTimingMode__Game                                                             = 0,
	EGFxTimingMode__Real                                                             = 1,
	EGFxTimingMode__EGFxTimingMode_MAX                                               = 2
};

/// Enum /Script/ScaleformUI.EGFxRenderTextureMode
/// Size: 0x04
enum class EGFxRenderTextureMode : uint8_t
{
	EGFxRenderTextureMode__Opaque                                                    = 0,
	EGFxRenderTextureMode__Alpha                                                     = 1,
	EGFxRenderTextureMode__AlphaComposite                                            = 2,
	EGFxRenderTextureMode__EGFxRenderTextureMode_MAX                                 = 3
};

/// Enum /Script/ScaleformUI.EGFxScaleMode
/// Size: 0x05
enum class EGFxScaleMode : uint8_t
{
	EGFxScaleMode__NoScale                                                           = 0,
	EGFxScaleMode__ShowAll                                                           = 1,
	EGFxScaleMode__ExactFit                                                          = 2,
	EGFxScaleMode__NoBorder                                                          = 3,
	EGFxScaleMode__EGFxScaleMode_MAX                                                 = 4
};

/// Enum /Script/ScaleformUI.EGFxAlign
/// Size: 0x10
enum class EGFxAlign : uint8_t
{
	EGFxAlign__Center                                                                = 0,
	EGFxAlign__TopCenter                                                             = 1,
	EGFxAlign__BottomCenter                                                          = 2,
	EGFxAlign__CenterLeft                                                            = 3,
	EGFxAlign__CenterRight                                                           = 4,
	EGFxAlign__TopLeft                                                               = 5,
	EGFxAlign__TopRight                                                              = 6,
	EGFxAlign__BottomLeft                                                            = 7,
	EGFxAlign__BottomRight                                                           = 8,
	EGFxAlign__EGFxAlign_MAX                                                         = 9
};

/// Enum /Script/ScaleformUI.EASType
/// Size: 0x10
enum class EASType : uint8_t
{
	EASType__Undefined                                                               = 0,
	EASType__Null                                                                    = 1,
	EASType__Boolean                                                                 = 2,
	EASType__Int                                                                     = 3,
	EASType__Number                                                                  = 4,
	EASType__String                                                                  = 5,
	EASType__StringW                                                                 = 6,
	EASType__Object                                                                  = 7,
	EASType__DisplayObject                                                           = 8,
	EASType__EASType_MAX                                                             = 9
};

/// Enum /Script/ScaleformUI.FlashTextureRescale
/// Size: 0x06
enum class FlashTextureRescale : uint8_t
{
	FlashTextureScale_High                                                           = 0,
	FlashTextureScale_Low                                                            = 1,
	FlashTextureScale_NextLow                                                        = 2,
	FlashTextureScale_Mult4                                                          = 3,
	FlashTextureScale_None                                                           = 4,
	FlashTextureScale_MAX                                                            = 5
};

/// Struct /Script/ScaleformUI.GCReference
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGCReference
{ 
	class UObject*                                     Object;                                                     // 0x0000   (0x0008)  
	int32_t                                            RefCount;                                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Class /Script/ScaleformUI.GFxEngine
/// Size: 0x0018 (0x000030 - 0x000048)
class UGFxEngine : public UObject
{ 
public:
	TArray<FGCReference>                               GCReferences;                                               // 0x0030   (0x0010)  
	int32_t                                            RefCount;                                                   // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/ScaleformUI.ExternalTexture
/// Size: 0x0018 (0x000000 - 0x000018)
struct FExternalTexture
{ 
	SDK_UNDEFINED(16,1723) /* FString */               __um(Resource);                                             // 0x0000   (0x0010)  
	class UTexture*                                    Texture;                                                    // 0x0010   (0x0008)  
};

/// Struct /Script/ScaleformUI.GFxWidgetBinding
/// Size: 0x0018 (0x000000 - 0x000018)
struct FGFxWidgetBinding
{ 
	FName                                              WidgetName;                                                 // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UClass*                                      WidgetClass;                                                // 0x0010   (0x0008)  
};

/// Class /Script/ScaleformUI.GFxMoviePlayer
/// Size: 0x01B0 (0x000030 - 0x0001E0)
class UGFxMoviePlayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	SDK_UNDEFINED(16,1724) /* FString */               __um(SwfAssetName);                                         // 0x0038   (0x0010)  
	class UGFxObject*                                  Root;                                                       // 0x0048   (0x0008)  
	bool                                               bDisplayWithHudOff : 1;                                     // 0x0050:0 (0x0001)  
	bool                                               bEnableGammaCorrection : 1;                                 // 0x0050:1 (0x0001)  
	bool                                               bAllowInput : 1;                                            // 0x0050:2 (0x0001)  
	bool                                               bAllowFocus : 1;                                            // 0x0050:3 (0x0001)  
	bool                                               bCloseOnLevelChange : 1;                                    // 0x0050:4 (0x0001)  
	bool                                               bOnlyOwnerFocusable : 1;                                    // 0x0050:5 (0x0001)  
	bool                                               bDiscardNonOwnerInput : 1;                                  // 0x0050:6 (0x0001)  
	bool                                               bCaptureKeyboardInput : 1;                                  // 0x0050:7 (0x0001)  
	bool                                               bCaptureMouseInput : 1;                                     // 0x0051:0 (0x0001)  
	bool                                               bCaptureGamepadInput : 1;                                   // 0x0051:1 (0x0001)  
	bool                                               bCaptureTouchInput : 1;                                     // 0x0051:2 (0x0001)  
	bool                                               bIsSplitscreenLayoutModified : 1;                           // 0x0051:3 (0x0001)  
	bool                                               bShowDefaultMouseCursor : 1;                                // 0x0051:4 (0x0001)  
	bool                                               bBlurLesserMovies : 1;                                      // 0x0051:5 (0x0001)  
	bool                                               bHideLesserMovies : 1;                                      // 0x0051:6 (0x0001)  
	bool                                               bIsPriorityBlurred : 1;                                     // 0x0051:7 (0x0001)  
	bool                                               bIsPriorityHidden : 1;                                      // 0x0052:0 (0x0001)  
	bool                                               bIgnoreVisibilityEffect : 1;                                // 0x0052:1 (0x0001)  
	bool                                               bIgnoreBlurEffect : 1;                                      // 0x0052:2 (0x0001)  
	bool                                               bRefreshed : 1;                                             // 0x0052:3 (0x0001)  
	bool                                               bPerformHitTest : 1;                                        // 0x0052:4 (0x0001)  
	unsigned char                                      UnknownData01_4[0x1];                                       // 0x0053   (0x0001)  MISSED
	SDK_UNDEFINED(1,1725) /* TEnumAsByte<GFxHitTestType> */ __um(HitTestType);                                     // 0x0054   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0055   (0x0003)  MISSED
	class UTextureRenderTarget2D*                      RenderTexture;                                              // 0x0058   (0x0008)  
	class UObject*                                     ExternalInterface;                                          // 0x0060   (0x0008)  
	TArray<FKey>                                       CaptureKeys;                                                // 0x0068   (0x0010)  
	TArray<FKey>                                       FocusIgnoreKeys;                                            // 0x0078   (0x0010)  
	TArray<FExternalTexture>                           ExternalTextures;                                           // 0x0088   (0x0010)  
	SDK_UNDEFINED(1,1726) /* TEnumAsByte<EGFxRenderTextureMode> */ __um(RenderTextureMode);                        // 0x0098   (0x0001)  
	char                                               Priority;                                                   // 0x0099   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x009A   (0x0006)  MISSED
	TArray<FGFxWidgetBinding>                          WidgetBindings;                                             // 0x00A0   (0x0010)  
	int32_t                                            SplitscreenLayoutYAdjust;                                   // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x00B4   (0x0004)  MISSED
	SDK_UNDEFINED(16,1727) /* FMulticastInlineDelegate */ __um(OnFsCommand);                                       // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,1728) /* FMulticastInlineDelegate */ __um(OnStartCommand);                                    // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,1729) /* FMulticastInlineDelegate */ __um(OnCloseCommand);                                    // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,1730) /* FMulticastInlineDelegate */ __um(OnTickCommand);                                     // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,1731) /* FMulticastInlineDelegate */ __um(OnFocusGainedCommand);                              // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,1732) /* FMulticastInlineDelegate */ __um(OnFocusLostCommand);                                // 0x0108   (0x0010)  
	unsigned char                                      UnknownData05_5[0xB8];                                      // 0x0118   (0x00B8)  MISSED
	TArray<class UGFxObject*>                          CachedMovieClipsArray;                                      // 0x01D0   (0x0010)  


	/// Functions
	// Function /Script/ScaleformUI.GFxMoviePlayer.Start
	// bool Start(bool bRefresh);                                                                                            // [0x75c0220] Native|Public        
	// Function /Script/ScaleformUI.GFxMoviePlayer.SetVisibility
	// void SetVisibility(FString MovieClipName, bool bVisible);                                                             // [0x75c00a0] Native|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.SetViewScaleMode
	// void SetViewScaleMode(TEnumAsByte<EGFxScaleMode> ScaleMode);                                                          // [0x75bfed0] Native|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.SetViewport
	// void SetViewport(int32_t X, int32_t Y, int32_t Width, int32_t Height);                                                // [0x75bff50] Native|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.SetView3D
	// void SetView3D(FTransform& ViewTransform);                                                                            // [0x75bfdf0] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.SetVariableValueArray
	// void SetVariableValueArray(FString MovieClipName, FString MemberName, TArray<FASValue>& value);                       // [0x75bfc50] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.SetVariableValue
	// void SetVariableValue(FString MovieClipName, FString MemberName, FASValue& value);                                    // [0x75bfac0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.SetTimingMode
	// void SetTimingMode(TEnumAsByte<EGFxTimingMode> TimingMode);                                                           // [0x75bfa40] Native|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.SetScale
	// void SetScale(FString MovieClipName, float XScale, float YScale);                                                     // [0x75bf840] Native|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.SetPosition
	// void SetPosition(FString MovieClipName, float X, float Y);                                                            // [0x75bf640] Native|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.SetPerspective3D
	// void SetPerspective3D(FASPerspectiveTransform& PerspectiveTransform);                                                 // [0x75bf590] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.SetPause
	// void SetPause(bool bPausePlayback);                                                                                   // [0x75bf500] Native|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.SetMovieCanReceiveInput
	// void SetMovieCanReceiveInput(bool bCanReceiveInput);                                                                  // [0x75bf470] Native|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.SetMovieCanReceiveFocus
	// void SetMovieCanReceiveFocus(bool bCanReceiveFocus);                                                                  // [0x75bf3e0] Native|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.SetFocusIgnoreKeys
	// void SetFocusIgnoreKeys(TArray<FKey>& Keys);                                                                          // [0x75bf030] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.SetExternalTexture
	// bool SetExternalTexture(FString Resource, class UTexture* Texture);                                                   // [0x75bef30] Native|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.SetDisplayTransform
	// void SetDisplayTransform(FString MovieClipName, FTransform& DisplayTransform);                                        // [0x75bed10] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.SetDisplayInfo
	// void SetDisplayInfo(FString MovieClipName, FASDisplayInfo& Info);                                                     // [0x75beb30] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.SetColorTransform
	// void SetColorTransform(FString MovieClipName, FASColorTransform& UnrealColorTransform);                               // [0x75be990] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.SetCaptureKeys
	// void SetCaptureKeys(TArray<FKey>& Keys);                                                                              // [0x75be890] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.SetAlignment
	// void SetAlignment(TEnumAsByte<EGFxAlign> Align);                                                                      // [0x75be810] Native|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.ReceiveGFxCommand
	// void ReceiveGFxCommand(FString Command, FString Arguments);                                                           // [0x75be710] Native|Public        
	// Function /Script/ScaleformUI.GFxMoviePlayer.OpenMovie
	// class UGFxMoviePlayer* OpenMovie(class USwfMovie* SwfMovie, class UObject* ExternalScriptInterface, class UTextureRenderTarget2D* RenderToTexture, class UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool StartPaused); // [0x75be540] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.OnTick
	// void OnTick(float DeltaTime);                                                                                         // [0x75be4b0] Native|Public        
	// Function /Script/ScaleformUI.GFxMoviePlayer.OnStart
	// void OnStart();                                                                                                       // [0x75be490] Native|Public        
	// Function /Script/ScaleformUI.GFxMoviePlayer.OnFocusLost
	// void OnFocusLost(int32_t LocalPlayerIndex);                                                                           // [0x75be400] Native|Public        
	// Function /Script/ScaleformUI.GFxMoviePlayer.OnFocusGained
	// void OnFocusGained(int32_t LocalPlayerIndex);                                                                         // [0x75be370] Native|Public        
	// Function /Script/ScaleformUI.GFxMoviePlayer.OnClose
	// void OnClose();                                                                                                       // [0x75be350] Native|Public        
	// Function /Script/ScaleformUI.GFxMoviePlayer.LoadAndStart
	// bool LoadAndStart(FString InSwfAssetName, bool bRefresh);                                                             // [0x75be200] Native|Public        
	// Function /Script/ScaleformUI.GFxMoviePlayer.Invoke
	// FASValue Invoke(FString MovieClipName, FString FunctionName, TArray<FASValue>& Params);                               // [0x75bdeb0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.GotoAndStopI
	// void GotoAndStopI(FString MovieClipName, int32_t Frame);                                                              // [0x75bdd40] Native|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.GotoAndStop
	// void GotoAndStop(FString MovieClipName, FString Frame);                                                               // [0x75bdba0] Native|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.GotoAndPlayI
	// void GotoAndPlayI(FString MovieClipName, int32_t Frame);                                                              // [0x75bda30] Native|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.GotoAndPlay
	// void GotoAndPlay(FString MovieClipName, FString Frame);                                                               // [0x75bd890] Native|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.GetVisibility
	// bool GetVisibility(FString MovieClipName);                                                                            // [0x75bd7b0] Native|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.GetView3D
	// FTransform GetView3D();                                                                                               // [0x75bd740] Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.GetVariableValueArray
	// TArray<FASValue> GetVariableValueArray(FString MovieClipName, FString MemberName);                                    // [0x75bd5e0] Native|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.GetVariableValue
	// FASValue GetVariableValue(FString MovieClipName, FString MemberName);                                                 // [0x75bd4a0] Native|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.GetScale
	// bool GetScale(FString MovieClipName, float& XScale, float& YScale);                                                   // [0x75bd260] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.GetPosition
	// bool GetPosition(FString MovieClipName, float& X, float& Y);                                                          // [0x75bd020] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.GetPerspective3D
	// FASPerspectiveTransform GetPerspective3D();                                                                           // [0x75bcfd0] Native|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.GetMovieClip
	// class UGFxObject* GetMovieClip(FString MovieClipName);                                                                // [0x75bcf20] Final|Native|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.GetDisplayTransform
	// FTransform GetDisplayTransform(FString MovieClipName);                                                                // [0x75bcc00] Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.GetDisplayInfo
	// FASDisplayInfo GetDisplayInfo(FString MovieClipName);                                                                 // [0x75bcad0] Native|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.GetColorTransform
	// FASColorTransform GetColorTransform(FString MovieClipName);                                                           // [0x75bc9d0] Native|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxMoviePlayer.Close
	// void Close(bool Unload);                                                                                              // [0x75bc940] Native|Public|BlueprintCallable 
};

/// Class /Script/ScaleformUI.GFxObject
/// Size: 0x0030 (0x000030 - 0x000060)
class UGFxObject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED


	/// Functions
	// Function /Script/ScaleformUI.GFxObject.SetVisible
	// void SetVisible(bool bVisible);                                                                                       // [0x75c0190] Final|Native|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxObject.SetScale
	// void SetScale(float XScale, float YScale);                                                                            // [0x75bf970] Final|Native|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxObject.SetPosition
	// void SetPosition(float X, float Y);                                                                                   // [0x75bf770] Final|Native|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxObject.SetMemberValueArray
	// void SetMemberValueArray(class UGFxMoviePlayer* MoviePlayer, FString MemberName, TArray<FASValue>& Input);            // [0x75bf260] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxObject.SetMemberValue
	// void SetMemberValue(FString MemberName, FASValue& Input);                                                             // [0x75bf130] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxObject.SetDisplayTransform
	// void SetDisplayTransform(FTransform& DisplayTransform);                                                               // [0x75bee50] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxObject.SetDisplayInfo
	// void SetDisplayInfo(FASDisplayInfo& UnrealDisplayInfo);                                                               // [0x75bec50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxObject.SetColorTransform
	// void SetColorTransform(FASColorTransform& UnrealColorTransform);                                                      // [0x75bea90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxObject.Invoke
	// FASValue Invoke(FString FunctionName, TArray<FASValue>& Params);                                                      // [0x75be080] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxObject.GotoAndStopI
	// void GotoAndStopI(int32_t FrameNumber);                                                                               // [0x75bde20] Final|Native|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxObject.GotoAndStop
	// void GotoAndStop(FString FrameString);                                                                                // [0x75bdca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxObject.GotoAndPlayI
	// void GotoAndPlayI(int32_t FrameNumber);                                                                               // [0x75bdb10] Final|Native|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxObject.GotoAndPlay
	// void GotoAndPlay(FString FrameString);                                                                                // [0x75bd990] Final|Native|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxObject.GetVisible
	// bool GetVisible();                                                                                                    // [0x75bd860] Final|Native|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxObject.GetScale
	// bool GetScale(float& XScale, float& YScale);                                                                          // [0x75bd3b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxObject.GetPosition
	// bool GetPosition(float& X, float& Y);                                                                                 // [0x75bd170] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxObject.GetMemberValueArray
	// TArray<FASValue> GetMemberValueArray(FString MemberName);                                                             // [0x75bce20] Final|Native|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxObject.GetMemberValue
	// FASValue GetMemberValue(FString MemberName);                                                                          // [0x75bcd40] Final|Native|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxObject.GetDisplayTransform
	// FTransform GetDisplayTransform();                                                                                     // [0x75bcce0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxObject.GetDisplayInfo
	// FASDisplayInfo GetDisplayInfo();                                                                                      // [0x75bcbb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.GFxObject.GetColorTransform
	// FASColorTransform GetColorTransform();                                                                                // [0x75bca90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ScaleformUI.ScaleformBlueprintLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UScaleformBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ScaleformUI.ScaleformBlueprintLibrary.OpenMovie
	// class UGFxMoviePlayer* OpenMovie(class USwfMovie* Movie, class UObject* ExternalInterface, class UTextureRenderTarget2D* RenderTexture, class UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool StartPaused); // [0x75c0bd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.ScaleformBlueprintLibrary.InvokeNoParams
	// FASValue InvokeNoParams(class UGFxMoviePlayer* MoviePlayer, FString FunctionName);                                    // [0x75c0a60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.ScaleformBlueprintLibrary.Invoke
	// FASValue Invoke(class UGFxMoviePlayer* MoviePlayer, FString FunctionName, TArray<FASValue>& Params);                  // [0x75c0870] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ScaleformUI.ScaleformBlueprintLibrary.GetVariable
	// class UGFxObject* GetVariable(class UGFxMoviePlayer* MoviePlayer, FString VariablePath);                              // [0x75c0790] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.ScaleformBlueprintLibrary.GetMovieClip
	// class UGFxObject* GetMovieClip(class UGFxMoviePlayer* MoviePlayer, FString MovieClipName);                            // [0x75c0790] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.ScaleformBlueprintLibrary.GetMember
	// class UGFxObject* GetMember(class UGFxMoviePlayer* MoviePlayer, FString MemberName);                                  // [0x75c0790] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ScaleformUI.ScaleformBlueprintLibrary.CloseMovie
	// void CloseMovie(class UGFxMoviePlayer* MoviePlayer);                                                                  // [0x75c0710] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/ScaleformUI.SwfMovie
/// Size: 0x0188 (0x000030 - 0x0001B8)
class USwfMovie : public UObject
{ 
public:
	bool                                               bUseGFxExport : 1;                                          // 0x0030:0 (0x0001)  
	bool                                               bOptimizeForMobiles : 1;                                    // 0x0030:1 (0x0001)  
	bool                                               bSetSRGBOnImportedTextures : 1;                             // 0x0030:2 (0x0001)  
	bool                                               bPackTextures : 1;                                          // 0x0030:3 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            PackTextureSize;                                            // 0x0034   (0x0004)  
	bool                                               bForceSquarePacking : 1;                                    // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0039   (0x0003)  MISSED
	SDK_UNDEFINED(1,1733) /* TEnumAsByte<FlashTextureRescale> */ __um(TextureRescale);                             // 0x003C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x003D   (0x0003)  MISSED
	SDK_UNDEFINED(16,1734) /* FString */               __um(TextureFormat);                                        // 0x0040   (0x0010)  
	bool                                               bReplaceImages : 1;                                         // 0x0050:0 (0x0001)  
	unsigned char                                      UnknownData03_4[0x7];                                       // 0x0051   (0x0007)  MISSED
	SDK_UNDEFINED(16,1735) /* FString */               __um(SourceFile);                                           // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,1736) /* TArray<FString> */       __um(FontMappings);                                         // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,1737) /* FString */               __um(SourceFileTimestamp);                                  // 0x0078   (0x0010)  
	uint64_t                                           ImportTimeStamp;                                            // 0x0088   (0x0008)  
	TArray<char>                                       RawData;                                                    // 0x0090   (0x0010)  
	SDK_UNDEFINED(16,1738) /* TArray<FString> */       __um(ReferencedAssetNames);                                 // 0x00A0   (0x0010)  
	TArray<class UObject*>                             References;                                                 // 0x00B0   (0x0010)  
	TArray<class UObject*>                             UserReferences;                                             // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData04_6[0xE8];                                      // 0x00D0   (0x00E8)  MISSED
};

/// Struct /Script/ScaleformUI.ASPerspectiveTransform
/// Size: 0x0040 (0x000000 - 0x000040)
struct FASPerspectiveTransform
{ 
	FVector4                                           Row0;                                                       // 0x0000   (0x0010)  
	FVector4                                           Row1;                                                       // 0x0010   (0x0010)  
	FVector4                                           Row2;                                                       // 0x0020   (0x0010)  
	FVector4                                           Row3;                                                       // 0x0030   (0x0010)  
};

/// Struct /Script/ScaleformUI.ASColorTransform
/// Size: 0x0020 (0x000000 - 0x000020)
struct FASColorTransform
{ 
	FLinearColor                                       Multiply;                                                   // 0x0000   (0x0010)  
	FLinearColor                                       Add;                                                        // 0x0010   (0x0010)  
};

/// Struct /Script/ScaleformUI.ASDisplayInfo
/// Size: 0x002C (0x000000 - 0x00002C)
struct FASDisplayInfo
{ 
	FVector                                            position;                                                   // 0x0000   (0x000C)  
	FVector                                            Scale;                                                      // 0x000C   (0x000C)  
	float                                              Rotation;                                                   // 0x0018   (0x0004)  
	float                                              XRotation;                                                  // 0x001C   (0x0004)  
	float                                              YRotation;                                                  // 0x0020   (0x0004)  
	float                                              alpha;                                                      // 0x0024   (0x0004)  
	bool                                               visible;                                                    // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
};

/// Struct /Script/ScaleformUI.ASValue
/// Size: 0x0038 (0x000000 - 0x000038)
struct FASValue
{ 
	SDK_UNDEFINED(1,1739) /* TEnumAsByte<EASType> */   __um(ASType);                                               // 0x0000   (0x0001)  
	bool                                               ASBoolean;                                                  // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	int32_t                                            ASInt;                                                      // 0x0004   (0x0004)  
	float                                              ASNumber;                                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(16,1740) /* FString */               __um(ASString);                                             // 0x0010   (0x0010)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x0020   (0x0010)  MISSED
	class UGFxObject*                                  ASObject;                                                   // 0x0030   (0x0008)  
};

