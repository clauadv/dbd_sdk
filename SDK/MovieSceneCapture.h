
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

/// Enum /Script/MovieSceneCapture.EHDRCaptureGamut
/// Size: 0x07
enum class EHDRCaptureGamut : uint8_t
{
	HCGM_Rec709                                                                      = 0,
	HCGM_P3DCI                                                                       = 1,
	HCGM_Rec2020                                                                     = 2,
	HCGM_ACES                                                                        = 3,
	HCGM_ACEScg                                                                      = 4,
	HCGM_Linear                                                                      = 5,
	HCGM_MAX                                                                         = 6
};

/// Enum /Script/MovieSceneCapture.EMovieSceneCaptureProtocolState
/// Size: 0x05
enum class EMovieSceneCaptureProtocolState : uint8_t
{
	EMovieSceneCaptureProtocolState__Idle                                            = 0,
	EMovieSceneCaptureProtocolState__Initialized                                     = 1,
	EMovieSceneCaptureProtocolState__Capturing                                       = 2,
	EMovieSceneCaptureProtocolState__Finalizing                                      = 3,
	EMovieSceneCaptureProtocolState__EMovieSceneCaptureProtocolState_MAX             = 4
};

/// Class /Script/MovieSceneCapture.MovieSceneCaptureProtocolBase
/// Size: 0x0030 (0x000030 - 0x000060)
class UMovieSceneCaptureProtocolBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0030   (0x0028)  MISSED
	EMovieSceneCaptureProtocolState                    State;                                                      // 0x0058   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0059   (0x0007)  MISSED


	/// Functions
	// Function /Script/MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
	// bool IsCapturing();                                                                                                   // [0x784dde0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
	// EMovieSceneCaptureProtocolState GetState();                                                                           // [0x6b0b9d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
/// Size: 0x0000 (0x000060 - 0x000060)
class UMovieSceneAudioCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{ 
public:
};

/// Class /Script/MovieSceneCapture.NullAudioCaptureProtocol
/// Size: 0x0000 (0x000060 - 0x000060)
class UNullAudioCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{ 
public:
};

/// Class /Script/MovieSceneCapture.MasterAudioSubmixCaptureProtocol
/// Size: 0x0038 (0x000060 - 0x000098)
class UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{ 
public:
	SDK_UNDEFINED(16,5275) /* FString */               __um(Filename);                                             // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0070   (0x0028)  MISSED
};

/// Class /Script/MovieSceneCapture.MovieSceneImageCaptureProtocolBase
/// Size: 0x0000 (0x000060 - 0x000060)
class UMovieSceneImageCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{ 
public:
};

/// Struct /Script/MovieSceneCapture.CompositionGraphCapturePasses
/// Size: 0x0010 (0x000000 - 0x000010)
struct FCompositionGraphCapturePasses
{ 
	SDK_UNDEFINED(16,5276) /* TArray<FString> */       __um(value);                                                // 0x0000   (0x0010)  
};

/// Class /Script/MovieSceneCapture.CompositionGraphCaptureProtocol
/// Size: 0x0070 (0x000060 - 0x0000D0)
class UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{ 
public:
	FCompositionGraphCapturePasses                     IncludeRenderPasses;                                        // 0x0060   (0x0010)  
	bool                                               bCaptureFramesInHDR;                                        // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0071   (0x0003)  MISSED
	int32_t                                            HDRCompressionQuality;                                      // 0x0074   (0x0004)  
	SDK_UNDEFINED(1,5277) /* TEnumAsByte<EHDRCaptureGamut> */ __um(CaptureGamut);                                  // 0x0078   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0079   (0x0007)  MISSED
	FSoftObjectPath                                    PostProcessingMaterial;                                     // 0x0080   (0x0020)  
	bool                                               bDisableScreenPercentage;                                   // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00A1   (0x0007)  MISSED
	class UMaterialInterface*                          PostProcessingMaterialPtr;                                  // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData03_6[0x20];                                      // 0x00B0   (0x0020)  MISSED
};

/// Class /Script/MovieSceneCapture.FrameGrabberProtocol
/// Size: 0x0010 (0x000060 - 0x000070)
class UFrameGrabberProtocol : public UMovieSceneImageCaptureProtocolBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0060   (0x0010)  MISSED
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol
/// Size: 0x0070 (0x000070 - 0x0000E0)
class UImageSequenceProtocol : public UFrameGrabberProtocol
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0070   (0x0070)  MISSED
};

/// Class /Script/MovieSceneCapture.CompressedImageSequenceProtocol
/// Size: 0x0008 (0x0000E0 - 0x0000E8)
class UCompressedImageSequenceProtocol : public UImageSequenceProtocol
{ 
public:
	int32_t                                            CompressionQuality;                                         // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00E4   (0x0004)  MISSED
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol_BMP
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UImageSequenceProtocol_BMP : public UImageSequenceProtocol
{ 
public:
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol_PNG
/// Size: 0x0000 (0x0000E8 - 0x0000E8)
class UImageSequenceProtocol_PNG : public UCompressedImageSequenceProtocol
{ 
public:
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol_JPG
/// Size: 0x0000 (0x0000E8 - 0x0000E8)
class UImageSequenceProtocol_JPG : public UCompressedImageSequenceProtocol
{ 
public:
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol_EXR
/// Size: 0x0010 (0x0000E0 - 0x0000F0)
class UImageSequenceProtocol_EXR : public UImageSequenceProtocol
{ 
public:
	bool                                               bCompressed;                                                // 0x00E0   (0x0001)  
	SDK_UNDEFINED(1,5278) /* TEnumAsByte<EHDRCaptureGamut> */ __um(CaptureGamut);                                  // 0x00E1   (0x0001)  
	unsigned char                                      UnknownData00_6[0xE];                                       // 0x00E2   (0x000E)  MISSED
};

/// Class /Script/MovieSceneCapture.MovieSceneCaptureInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UMovieSceneCaptureInterface : public UInterface
{ 
public:
};

/// Struct /Script/MovieSceneCapture.CaptureResolution
/// Size: 0x0008 (0x000000 - 0x000008)
struct FCaptureResolution
{ 
	int32_t                                            ResX;                                                       // 0x0000   (0x0004)  
	int32_t                                            ResY;                                                       // 0x0004   (0x0004)  
};

/// Struct /Script/MovieSceneCapture.MovieSceneCaptureSettings
/// Size: 0x0070 (0x000000 - 0x000070)
struct FMovieSceneCaptureSettings
{ 
	FDirectoryPath                                     OutputDirectory;                                            // 0x0000   (0x0010)  
	class UClass*                                      GameModeOverride;                                           // 0x0010   (0x0008)  
	SDK_UNDEFINED(16,5279) /* FString */               __um(OutputFormat);                                         // 0x0018   (0x0010)  
	bool                                               bOverwriteExisting;                                         // 0x0028   (0x0001)  
	bool                                               bUseRelativeFrameNumbers;                                   // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x002A   (0x0002)  MISSED
	int32_t                                            HandleFrames;                                               // 0x002C   (0x0004)  
	SDK_UNDEFINED(16,5280) /* FString */               __um(MovieExtension);                                       // 0x0030   (0x0010)  
	char                                               ZeroPadFrameNumbers;                                        // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	FFrameRate                                         FrameRate;                                                  // 0x0044   (0x0008)  
	bool                                               bUseCustomFrameRate;                                        // 0x004C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	FFrameRate                                         CustomFrameRate;                                            // 0x0050   (0x0008)  
	FCaptureResolution                                 Resolution;                                                 // 0x0058   (0x0008)  
	bool                                               bEnableTextureStreaming;                                    // 0x0060   (0x0001)  
	bool                                               bCinematicEngineScalability;                                // 0x0061   (0x0001)  
	bool                                               bCinematicMode;                                             // 0x0062   (0x0001)  
	bool                                               bAllowMovement;                                             // 0x0063   (0x0001)  
	bool                                               bAllowTurning;                                              // 0x0064   (0x0001)  
	bool                                               bShowPlayer;                                                // 0x0065   (0x0001)  
	bool                                               bShowHUD;                                                   // 0x0066   (0x0001)  
	bool                                               bUsePathTracer;                                             // 0x0067   (0x0001)  
	int32_t                                            PathTracerSamplePerPixel;                                   // 0x0068   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Class /Script/MovieSceneCapture.MovieSceneCapture
/// Size: 0x0208 (0x000030 - 0x000238)
class UMovieSceneCapture : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0030   (0x0010)  MISSED
	FSoftClassPath                                     ImageCaptureProtocolType;                                   // 0x0040   (0x0020)  
	FSoftClassPath                                     AudioCaptureProtocolType;                                   // 0x0060   (0x0020)  
	class UMovieSceneImageCaptureProtocolBase*         ImageCaptureProtocol;                                       // 0x0080   (0x0008)  
	class UMovieSceneAudioCaptureProtocolBase*         AudioCaptureProtocol;                                       // 0x0088   (0x0008)  
	FMovieSceneCaptureSettings                         Settings;                                                   // 0x0090   (0x0070)  
	bool                                               bUseSeparateProcess;                                        // 0x0100   (0x0001)  
	bool                                               bCloseEditorWhenCaptureStarts;                              // 0x0101   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0102   (0x0006)  MISSED
	SDK_UNDEFINED(16,5281) /* FString */               __um(AdditionalCommandLineArguments);                       // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,5282) /* FString */               __um(InheritedCommandLineArguments);                        // 0x0118   (0x0010)  
	unsigned char                                      UnknownData02_6[0x110];                                     // 0x0128   (0x0110)  MISSED


	/// Functions
	// Function /Script/MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType
	// void SetImageCaptureProtocolType(class UClass* ProtocolType);                                                         // [0x784e090] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType
	// void SetAudioCaptureProtocolType(class UClass* ProtocolType);                                                         // [0x784e000] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol
	// class UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol();                                                      // [0x784dd90] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol
	// class UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol();                                                      // [0x784dcf0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MovieSceneCapture.LevelCapture
/// Size: 0x0020 (0x000238 - 0x000258)
class ULevelCapture : public UMovieSceneCapture
{ 
public:
	bool                                               bAutoStartCapture;                                          // 0x0238   (0x0001)  
	unsigned char                                      UnknownData00_5[0xB];                                       // 0x0239   (0x000B)  MISSED
	FGuid                                              PrerequisiteActorId;                                        // 0x0244   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0254   (0x0004)  MISSED
};

/// Class /Script/MovieSceneCapture.MovieSceneCaptureEnvironment
/// Size: 0x0000 (0x000030 - 0x000030)
class UMovieSceneCaptureEnvironment : public UObject
{ 
public:


	/// Functions
	// Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress
	// bool IsCaptureInProgress();                                                                                           // [0x784ddb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
	// int32_t GetCaptureFrameNumber();                                                                                      // [0x784dd40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
	// float GetCaptureElapsedTime();                                                                                        // [0x784dd10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol
	// class UMovieSceneImageCaptureProtocolBase* FindImageCaptureProtocol();                                                // [0x784d990] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol
	// class UMovieSceneAudioCaptureProtocolBase* FindAudioCaptureProtocol();                                                // [0x784d960] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MovieSceneCapture.UserDefinedCaptureProtocol
/// Size: 0x0080 (0x000060 - 0x0000E0)
class UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{ 
public:
	class UWorld*                                      World;                                                      // 0x0060   (0x0008)  
	unsigned char                                      UnknownData00_6[0x78];                                      // 0x0068   (0x0078)  MISSED


	/// Functions
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels
	// void StopCapturingFinalPixels();                                                                                      // [0x784e260] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
	// void StartCapturingFinalPixels(FCapturedPixelsID& StreamID);                                                          // [0x784e120] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
	// void ResolveBuffer(class UTexture* Buffer, FCapturedPixelsID& BufferID);                                              // [0x784de80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp
	// void OnWarmUp();                                                                                                      // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnTick
	// void OnTick();                                                                                                        // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture
	// void OnStartCapture();                                                                                                // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
	// bool OnSetup();                                                                                                       // [0x784de50] Native|Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick
	// void OnPreTick();                                                                                                     // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived
	// void OnPixelsReceived(FCapturedPixels& Pixels, FCapturedPixelsID& ID, FFrameMetrics FrameMetrics);                    // [0x61d2f50] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture
	// void OnPauseCapture();                                                                                                // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize
	// void OnFinalize();                                                                                                    // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame
	// void OnCaptureFrame();                                                                                                // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
	// bool OnCanFinalize();                                                                                                 // [0x784de20] Native|Event|Protected|BlueprintEvent|Const 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize
	// void OnBeginFinalize();                                                                                               // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
	// FFrameMetrics GetCurrentFrameMetrics();                                                                               // [0x784dd70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
	// FString GenerateFilename(FFrameMetrics& InFrameMetrics);                                                              // [0x784d9c0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol
/// Size: 0x0008 (0x0000E0 - 0x0000E8)
class UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol
{ 
public:
	EDesiredImageFormat                                Format;                                                     // 0x00E0   (0x0001)  
	bool                                               bEnableCompression;                                         // 0x00E1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00E2   (0x0002)  MISSED
	int32_t                                            CompressionQuality;                                         // 0x00E4   (0x0004)  


	/// Functions
	// Function /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk
	// void WriteImageToDisk(FCapturedPixels& PixelData, FCapturedPixelsID& StreamID, FFrameMetrics& FrameMetrics, bool bCopyImageData); // [0x784e280] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame
	// FString GenerateFilenameForCurrentFrame();                                                                            // [0x784dc70] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer
	// FString GenerateFilenameForBuffer(class UTexture* Buffer, FCapturedPixelsID& StreamID);                               // [0x784dab0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MovieSceneCapture.VideoCaptureProtocol
/// Size: 0x0018 (0x000070 - 0x000088)
class UVideoCaptureProtocol : public UFrameGrabberProtocol
{ 
public:
	bool                                               bUseCompression;                                            // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0071   (0x0003)  MISSED
	float                                              CompressionQuality;                                         // 0x0074   (0x0004)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0078   (0x0010)  MISSED
};

/// Struct /Script/MovieSceneCapture.FrameMetrics
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFrameMetrics
{ 
	float                                              TotalElapsedTime;                                           // 0x0000   (0x0004)  
	float                                              FrameDelta;                                                 // 0x0004   (0x0004)  
	int32_t                                            FrameNumber;                                                // 0x0008   (0x0004)  
	int32_t                                            NumDroppedFrames;                                           // 0x000C   (0x0004)  
};

/// Struct /Script/MovieSceneCapture.CapturedPixels
/// Size: 0x0010 (0x000000 - 0x000010)
struct FCapturedPixels
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/MovieSceneCapture.CapturedPixelsID
/// Size: 0x0050 (0x000000 - 0x000050)
struct FCapturedPixelsID
{ 
	SDK_UNDEFINED(80,5283) /* TMap<FName, FName> */    __um(Identifiers);                                          // 0x0000   (0x0050)  
};

