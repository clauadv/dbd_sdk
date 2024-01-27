
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ImageWriteQueue

/// Enum /Script/MediaIOCore.EFileMediaOutputPixelFormat
/// Size: 0x03
enum class EFileMediaOutputPixelFormat : uint32_t
{
	EFileMediaOutputPixelFormat__B8G8R8A8                                            = 0,
	EFileMediaOutputPixelFormat__FloatRGBA                                           = 1,
	EFileMediaOutputPixelFormat__EFileMediaOutputPixelFormat_MAX                     = 2
};

/// Enum /Script/MediaIOCore.EMediaCaptureCroppingType
/// Size: 0x05
enum class EMediaCaptureCroppingType : uint8_t
{
	EMediaCaptureCroppingType__None                                                  = 0,
	EMediaCaptureCroppingType__Center                                                = 1,
	EMediaCaptureCroppingType__TopLeft                                               = 2,
	EMediaCaptureCroppingType__Custom                                                = 3,
	EMediaCaptureCroppingType__EMediaCaptureCroppingType_MAX                         = 4
};

/// Enum /Script/MediaIOCore.EMediaCaptureState
/// Size: 0x06
enum class EMediaCaptureState : uint8_t
{
	EMediaCaptureState__Error                                                        = 0,
	EMediaCaptureState__Capturing                                                    = 1,
	EMediaCaptureState__Preparing                                                    = 2,
	EMediaCaptureState__StopRequested                                                = 3,
	EMediaCaptureState__Stopped                                                      = 4,
	EMediaCaptureState__EMediaCaptureState_MAX                                       = 5
};

/// Enum /Script/MediaIOCore.EMediaIOReferenceType
/// Size: 0x04
enum class EMediaIOReferenceType : uint32_t
{
	EMediaIOReferenceType__FreeRun                                                   = 0,
	EMediaIOReferenceType__External                                                  = 1,
	EMediaIOReferenceType__Input                                                     = 2,
	EMediaIOReferenceType__EMediaIOReferenceType_MAX                                 = 3
};

/// Enum /Script/MediaIOCore.EMediaIOOutputType
/// Size: 0x03
enum class EMediaIOOutputType : uint32_t
{
	EMediaIOOutputType__Fill                                                         = 0,
	EMediaIOOutputType__FillAndKey                                                   = 1,
	EMediaIOOutputType__EMediaIOOutputType_MAX                                       = 2
};

/// Enum /Script/MediaIOCore.EMediaIOInputType
/// Size: 0x03
enum class EMediaIOInputType : uint32_t
{
	EMediaIOInputType__Fill                                                          = 0,
	EMediaIOInputType__FillAndKey                                                    = 1,
	EMediaIOInputType__EMediaIOInputType_MAX                                         = 2
};

/// Enum /Script/MediaIOCore.EMediaIOTimecodeFormat
/// Size: 0x04
enum class EMediaIOTimecodeFormat : uint8_t
{
	EMediaIOTimecodeFormat__None                                                     = 0,
	EMediaIOTimecodeFormat__LTC                                                      = 1,
	EMediaIOTimecodeFormat__VITC                                                     = 2,
	EMediaIOTimecodeFormat__EMediaIOTimecodeFormat_MAX                               = 3
};

/// Enum /Script/MediaIOCore.EMediaIOStandardType
/// Size: 0x04
enum class EMediaIOStandardType : uint32_t
{
	EMediaIOStandardType__Progressive                                                = 0,
	EMediaIOStandardType__Interlaced                                                 = 1,
	EMediaIOStandardType__ProgressiveSegmentedFrame                                  = 2,
	EMediaIOStandardType__EMediaIOStandardType_MAX                                   = 3
};

/// Enum /Script/MediaIOCore.EMediaIOQuadLinkTransportType
/// Size: 0x03
enum class EMediaIOQuadLinkTransportType : uint32_t
{
	EMediaIOQuadLinkTransportType__SquareDivision                                    = 0,
	EMediaIOQuadLinkTransportType__TwoSampleInterleave                               = 1,
	EMediaIOQuadLinkTransportType__EMediaIOQuadLinkTransportType_MAX                 = 2
};

/// Enum /Script/MediaIOCore.EMediaIOTransportType
/// Size: 0x05
enum class EMediaIOTransportType : uint32_t
{
	EMediaIOTransportType__SingleLink                                                = 0,
	EMediaIOTransportType__DualLink                                                  = 1,
	EMediaIOTransportType__QuadLink                                                  = 2,
	EMediaIOTransportType__HDMI                                                      = 3,
	EMediaIOTransportType__EMediaIOTransportType_MAX                                 = 4
};

/// Class /Script/MediaIOCore.MediaOutput
/// Size: 0x0008 (0x000030 - 0x000038)
class UMediaOutput : public UObject
{ 
public:
	int32_t                                            NumberOfTextureBuffers;                                     // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED


	/// Functions
	// Function /Script/MediaIOCore.MediaOutput.Validate
	// bool Validate(FString& OutFailureReason);                                                                             // [0x454cd00] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaIOCore.MediaOutput.CreateMediaCapture
	// class UMediaCapture* CreateMediaCapture();                                                                            // [0x454ca90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MediaIOCore.MediaCapture
/// Size: 0x00E0 (0x000030 - 0x000110)
class UMediaCapture : public UObject
{ 
public:
	SDK_UNDEFINED(16,4880) /* FMulticastInlineDelegate */ __um(OnStateChanged);                                    // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0040   (0x0018)  MISSED
	class UMediaOutput*                                MediaOutput;                                                // 0x0058   (0x0008)  
	unsigned char                                      UnknownData01_5[0x20];                                      // 0x0060   (0x0020)  MISSED
	class UTextureRenderTarget2D*                      CapturingRenderTarget;                                      // 0x0080   (0x0008)  
	unsigned char                                      UnknownData02_6[0x88];                                      // 0x0088   (0x0088)  MISSED


	/// Functions
	// Function /Script/MediaIOCore.MediaCapture.UpdateTextureRenderTarget2D
	// bool UpdateTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget);                                         // [0x454cc60] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaIOCore.MediaCapture.StopCapture
	// void StopCapture(bool bAllowPendingFrameToBeProcess);                                                                 // [0x454cbd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaIOCore.MediaCapture.SetMediaOutput
	// void SetMediaOutput(class UMediaOutput* InMediaOutput);                                                               // [0x454cb40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaIOCore.MediaCapture.GetState
	// EMediaCaptureState GetState();                                                                                        // [0x454cb10] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaIOCore.MediaCapture.GetDesiredSize
	// FIntPoint GetDesiredSize();                                                                                           // [0x454cae0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaIOCore.MediaCapture.GetDesiredPixelFormat
	// TEnumAsByte<EPixelFormat> GetDesiredPixelFormat();                                                                    // [0x454cac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaIOCore.MediaCapture.CaptureTextureRenderTarget2D
	// bool CaptureTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget, FMediaCaptureOptions CaptureOptions);   // [0x454c9a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaIOCore.MediaCapture.CaptureActiveSceneViewport
	// bool CaptureActiveSceneViewport(FMediaCaptureOptions CaptureOptions);                                                 // [0x454c900] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MediaIOCore.FileMediaCapture
/// Size: 0x0070 (0x000110 - 0x000180)
class UFileMediaCapture : public UMediaCapture
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0110   (0x0070)  MISSED
};

/// Class /Script/MediaIOCore.FileMediaOutput
/// Size: 0x00A8 (0x000038 - 0x0000E0)
class UFileMediaOutput : public UMediaOutput
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0038   (0x0008)  MISSED
	FImageWriteOptions                                 WriteOptions;                                               // 0x0040   (0x0060)  
	FDirectoryPath                                     FilePath;                                                   // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,4881) /* FString */               __um(BaseFileName);                                         // 0x00B0   (0x0010)  
	bool                                               bOverrideDesiredSize;                                       // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00C1   (0x0003)  MISSED
	FIntPoint                                          DesiredSize;                                                // 0x00C4   (0x0008)  
	bool                                               bOverridePixelFormat;                                       // 0x00CC   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00CD   (0x0003)  MISSED
	EFileMediaOutputPixelFormat                        DesiredPixelFormat;                                         // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData03_6[0xC];                                       // 0x00D4   (0x000C)  MISSED
};

/// Struct /Script/MediaIOCore.MediaCaptureOptions
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMediaCaptureOptions
{ 
	EMediaCaptureCroppingType                          Crop;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FIntPoint                                          CustomCapturePoint;                                         // 0x0004   (0x0008)  
	bool                                               bResizeSourceBuffer;                                        // 0x000C   (0x0001)  
	bool                                               bSkipFrameWhenRunningExpensiveTasks;                        // 0x000D   (0x0001)  
	bool                                               bConvertToDesiredPixelFormat;                               // 0x000E   (0x0001)  
	bool                                               bForceAlphaToOneOnConversion;                               // 0x000F   (0x0001)  
};

/// Struct /Script/MediaIOCore.MediaIODevice
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMediaIODevice
{ 
	FName                                              DeviceName;                                                 // 0x0000   (0x000C)  
	int32_t                                            DeviceIdentifier;                                           // 0x000C   (0x0004)  
};

/// Struct /Script/MediaIOCore.MediaIOConnection
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMediaIOConnection
{ 
	FMediaIODevice                                     Device;                                                     // 0x0000   (0x0010)  
	FName                                              protocol;                                                   // 0x0010   (0x000C)  
	EMediaIOTransportType                              TransportType;                                              // 0x001C   (0x0004)  
	EMediaIOQuadLinkTransportType                      QuadTransportType;                                          // 0x0020   (0x0004)  
	int32_t                                            PortIdentifier;                                             // 0x0024   (0x0004)  
};

/// Struct /Script/MediaIOCore.MediaIOMode
/// Size: 0x0018 (0x000000 - 0x000018)
struct FMediaIOMode
{ 
	FFrameRate                                         FrameRate;                                                  // 0x0000   (0x0008)  
	FIntPoint                                          Resolution;                                                 // 0x0008   (0x0008)  
	EMediaIOStandardType                               Standard;                                                   // 0x0010   (0x0004)  
	int32_t                                            DeviceModeIdentifier;                                       // 0x0014   (0x0004)  
};

/// Struct /Script/MediaIOCore.MediaIOConfiguration
/// Size: 0x0044 (0x000000 - 0x000044)
struct FMediaIOConfiguration
{ 
	bool                                               bIsInput;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FMediaIOConnection                                 MediaConnection;                                            // 0x0004   (0x0028)  
	FMediaIOMode                                       MediaMode;                                                  // 0x002C   (0x0018)  
};

/// Struct /Script/MediaIOCore.MediaIOOutputConfiguration
/// Size: 0x0054 (0x000000 - 0x000054)
struct FMediaIOOutputConfiguration
{ 
	FMediaIOConfiguration                              MediaConfiguration;                                         // 0x0000   (0x0044)  
	EMediaIOOutputType                                 OutputType;                                                 // 0x0044   (0x0004)  
	int32_t                                            KeyPortIdentifier;                                          // 0x0048   (0x0004)  
	EMediaIOReferenceType                              OutputReference;                                            // 0x004C   (0x0004)  
	int32_t                                            ReferencePortIdentifier;                                    // 0x0050   (0x0004)  
};

/// Struct /Script/MediaIOCore.MediaIOInputConfiguration
/// Size: 0x004C (0x000000 - 0x00004C)
struct FMediaIOInputConfiguration
{ 
	FMediaIOConfiguration                              MediaConfiguration;                                         // 0x0000   (0x0044)  
	EMediaIOInputType                                  inputType;                                                  // 0x0044   (0x0004)  
	int32_t                                            KeyPortIdentifier;                                          // 0x0048   (0x0004)  
};

