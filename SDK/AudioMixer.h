
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/AudioMixer.EMusicalNoteName
/// Size: 0x13
enum class EMusicalNoteName : uint8_t
{
	EMusicalNoteName__C                                                              = 0,
	EMusicalNoteName__Db                                                             = 1,
	EMusicalNoteName__D                                                              = 2,
	EMusicalNoteName__Eb                                                             = 3,
	EMusicalNoteName__E                                                              = 4,
	EMusicalNoteName__F                                                              = 5,
	EMusicalNoteName__Gb                                                             = 6,
	EMusicalNoteName__G                                                              = 7,
	EMusicalNoteName__Ab                                                             = 8,
	EMusicalNoteName__A                                                              = 9,
	EMusicalNoteName__Bb                                                             = 10,
	EMusicalNoteName__B                                                              = 11,
	EMusicalNoteName__EMusicalNoteName_MAX                                           = 12
};

/// Enum /Script/AudioMixer.ESubmixEffectDynamicsKeySource
/// Size: 0x05
enum class ESubmixEffectDynamicsKeySource : uint8_t
{
	ESubmixEffectDynamicsKeySource__Default                                          = 0,
	ESubmixEffectDynamicsKeySource__AudioBus                                         = 1,
	ESubmixEffectDynamicsKeySource__Submix                                           = 2,
	ESubmixEffectDynamicsKeySource__Count                                            = 3,
	ESubmixEffectDynamicsKeySource__ESubmixEffectDynamicsKeySource_MAX               = 4
};

/// Enum /Script/AudioMixer.ESubmixEffectDynamicsChannelLinkMode
/// Size: 0x05
enum class ESubmixEffectDynamicsChannelLinkMode : uint8_t
{
	ESubmixEffectDynamicsChannelLinkMode__Disabled                                   = 0,
	ESubmixEffectDynamicsChannelLinkMode__Average                                    = 1,
	ESubmixEffectDynamicsChannelLinkMode__Peak                                       = 2,
	ESubmixEffectDynamicsChannelLinkMode__Count                                      = 3,
	ESubmixEffectDynamicsChannelLinkMode__ESubmixEffectDynamicsChannelLinkMode_MAX   = 4
};

/// Enum /Script/AudioMixer.ESubmixEffectDynamicsPeakMode
/// Size: 0x05
enum class ESubmixEffectDynamicsPeakMode : uint8_t
{
	ESubmixEffectDynamicsPeakMode__MeanSquared                                       = 0,
	ESubmixEffectDynamicsPeakMode__RootMeanSquared                                   = 1,
	ESubmixEffectDynamicsPeakMode__Peak                                              = 2,
	ESubmixEffectDynamicsPeakMode__Count                                             = 3,
	ESubmixEffectDynamicsPeakMode__ESubmixEffectDynamicsPeakMode_MAX                 = 4
};

/// Enum /Script/AudioMixer.ESubmixEffectDynamicsProcessorType
/// Size: 0x06
enum class ESubmixEffectDynamicsProcessorType : uint8_t
{
	ESubmixEffectDynamicsProcessorType__Compressor                                   = 0,
	ESubmixEffectDynamicsProcessorType__Limiter                                      = 1,
	ESubmixEffectDynamicsProcessorType__Expander                                     = 2,
	ESubmixEffectDynamicsProcessorType__Gate                                         = 3,
	ESubmixEffectDynamicsProcessorType__Count                                        = 4,
	ESubmixEffectDynamicsProcessorType__ESubmixEffectDynamicsProcessorType_MAX       = 5
};

/// Enum /Script/AudioMixer.EQuarztClockManagerType
/// Size: 0x04
enum class EQuarztClockManagerType : uint8_t
{
	EQuarztClockManagerType__AudioEngine                                             = 0,
	EQuarztClockManagerType__QuartzSubsystem                                         = 1,
	EQuarztClockManagerType__Count                                                   = 2,
	EQuarztClockManagerType__EQuarztClockManagerType_MAX                             = 3
};

/// Class /Script/AudioMixer.SynthComponent
/// Size: 0x04C0 (0x000220 - 0x0006E0)
class USynthComponent : public USceneComponent
{ 
public:
	bool                                               bAutoDestroy : 1;                                           // 0x0218:0 (0x0001)  
	bool                                               bStopWhenOwnerDestroyed : 1;                                // 0x0218:1 (0x0001)  
	bool                                               bAllowSpatialization : 1;                                   // 0x0218:2 (0x0001)  
	bool                                               bOverrideAttenuation : 1;                                   // 0x0218:3 (0x0001)  
	unsigned char                                      UnknownData00_3[0x3];                                       // 0x0219   (0x0003)  MISSED
	bool                                               bEnableBusSends : 1;                                        // 0x021C:0 (0x0001)  
	bool                                               bEnableBaseSubmix : 1;                                      // 0x021C:1 (0x0001)  
	bool                                               bEnableSubmixSends : 1;                                     // 0x021C:2 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x021D   (0x0003)  MISSED
	class USoundAttenuation*                           AttenuationSettings;                                        // 0x0220   (0x0008)  
	FSoundAttenuationSettings                          AttenuationOverrides;                                       // 0x0228   (0x03A0)  
	class USoundConcurrency*                           ConcurrencySettings;                                        // 0x05C8   (0x0008)  
	SDK_UNDEFINED(80,1581) /* TSet<USoundConcurrency*> */ __um(ConcurrencySet);                                    // 0x05D0   (0x0050)  
	class USoundClass*                                 SoundClass;                                                 // 0x0620   (0x0008)  
	class USoundEffectSourcePresetChain*               SourceEffectChain;                                          // 0x0628   (0x0008)  
	class USoundSubmixBase*                            SoundSubmix;                                                // 0x0630   (0x0008)  
	TArray<FSoundSubmixSendInfo>                       SoundSubmixSends;                                           // 0x0638   (0x0010)  
	TArray<FSoundSourceBusSendInfo>                    BusSends;                                                   // 0x0648   (0x0010)  
	TArray<FSoundSourceBusSendInfo>                    PreEffectBusSends;                                          // 0x0658   (0x0010)  
	bool                                               bIsUISound : 1;                                             // 0x0668:0 (0x0001)  
	bool                                               bIsPreviewSound : 1;                                        // 0x0668:1 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0669   (0x0003)  MISSED
	int32_t                                            EnvelopeFollowerAttackTime;                                 // 0x066C   (0x0004)  
	int32_t                                            EnvelopeFollowerReleaseTime;                                // 0x0670   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0674   (0x0004)  MISSED
	SDK_UNDEFINED(16,1582) /* FMulticastInlineDelegate */ __um(OnAudioEnvelopeValue);                              // 0x0678   (0x0010)  
	unsigned char                                      UnknownData04_5[0x20];                                      // 0x0688   (0x0020)  MISSED
	class USynthSound*                                 Synth;                                                      // 0x06A8   (0x0008)  
	class UAudioComponent*                             AudioComponent;                                             // 0x06B0   (0x0008)  
	unsigned char                                      UnknownData05_6[0x28];                                      // 0x06B8   (0x0028)  MISSED


	/// Functions
	// Function /Script/AudioMixer.SynthComponent.Stop
	// void Stop();                                                                                                          // [0x773a000] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.Start
	// void Start();                                                                                                         // [0x7739fe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetVolumeMultiplier
	// void SetVolumeMultiplier(float VolumeMultiplier);                                                                     // [0x7739f60] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetSubmixSend
	// void SetSubmixSend(class USoundSubmixBase* Submix, float SendLevel);                                                  // [0x7739e90] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetOutputToBusOnly
	// void SetOutputToBusOnly(bool bInOutputToBusOnly);                                                                     // [0x7739ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetLowPassFilterFrequency
	// void SetLowPassFilterFrequency(float InLowPassFilterFrequency);                                                       // [0x7739a30] Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetLowPassFilterEnabled
	// void SetLowPassFilterEnabled(bool InLowPassFilterEnabled);                                                            // [0x77399a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.IsPlaying
	// bool IsPlaying();                                                                                                     // [0x7739830] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AudioMixer.AudioGenerator
/// Size: 0x0080 (0x000030 - 0x0000B0)
class UAudioGenerator : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x80];                                      // 0x0030   (0x0080)  MISSED
};

/// Class /Script/AudioMixer.AudioMixerBlueprintLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache
	// float TrimAudioCache(float InMegabytesToFree);                                                                        // [0x77369f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput
	// class USoundWave* StopRecordingOutput(class UObject* WorldContextObject, EAudioRecordingExportType ExportType, FString Name, FString Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite); // [0x77364c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StopAudioBus
	// void StopAudioBus(class UObject* WorldContextObject, class UAudioBus* AudioBus);                                      // [0x77362e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput
	// void StopAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing);               // [0x7736220] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput
	// void StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord); // [0x7736110] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StartAudioBus
	// void StartAudioBus(class UObject* WorldContextObject, class UAudioBus* AudioBus);                                     // [0x7735e90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput
	// void StartAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize, EAudioSpectrumType SpectrumType); // [0x7735c70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.SetSubmixEffectChainOverride
	// void SetSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, TArray<USoundEffectSubmixPreset*> SubmixEffectPresetChain, float FadeTimeSec); // [0x77356e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
	// void SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32_t entryIndex, bool bBypassed); // [0x7735190] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput
	// void ResumeRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);                     // [0x7734ed0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ReplaceSubmixEffect
	// void ReplaceSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset); // [0x7734a00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix
	// void ReplaceSoundEffectSubmix(class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset); // [0x7734a00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex
	// void RemoveSubmixEffectPresetAtIndex(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32_t SubmixChainIndex); // [0x7734900] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset
	// void RemoveSubmixEffectPreset(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset); // [0x7734800] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectAtIndex
	// void RemoveSubmixEffectAtIndex(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32_t SubmixChainIndex); // [0x7734900] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffect
	// void RemoveSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset); // [0x7734800] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
	// void RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32_t entryIndex); // [0x7734700] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
	// void RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset); // [0x7734640] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback
	// void PrimeSoundForPlayback(class USoundWave* SoundWave, FDelegateProperty OnLoadCompletion);                          // [0x7734560] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback
	// void PrimeSoundCueForPlayback(class USoundCue* SoundCue);                                                             // [0x77344e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput
	// void PauseRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);                      // [0x7734420] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.MakePresetSpectralAnalysisBandSettings
	// TArray<FSoundSubmixSpectralAnalysisBandSettings> MakePresetSpectralAnalysisBandSettings(EAudioSpectrumBandPresetType InBandPresetType, int32_t InNumBands, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec); // [0x77341a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.MakeMusicalSpectralAnalysisBandSettings
	// TArray<FSoundSubmixSpectralAnalysisBandSettings> MakeMusicalSpectralAnalysisBandSettings(int32_t InNumSemitones, EMusicalNoteName InStartingMusicalNote, int32_t InStartingOctave, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec); // [0x7733fb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.MakeFullSpectrumSpectralAnalysisBandSettings
	// TArray<FSoundSubmixSpectralAnalysisBandSettings> MakeFullSpectrumSpectralAnalysisBandSettings(int32_t InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec); // [0x7733dc0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.IsAudioBusActive
	// bool IsAudioBusActive(class UObject* WorldContextObject, class UAudioBus* AudioBus);                                  // [0x7733c50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies
	// void GetPhaseForFrequencies(class UObject* WorldContextObject, TArray<float>& Frequencies, TArray<float>& Phases, class USoundSubmix* SubmixToAnalyze); // [0x77338e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
	// int32_t GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain); // [0x7733810] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies
	// void GetMagnitudeForFrequencies(class UObject* WorldContextObject, TArray<float>& Frequencies, TArray<float>& Magnitudes, class USoundSubmix* SubmixToAnalyze); // [0x77335e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects
	// void ClearSubmixEffects(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix);                          // [0x7733220] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride
	// void ClearSubmixEffectChainOverride(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, float FadeTimeSec); // [0x7733110] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
	// void ClearMasterSubmixEffects(class UObject* WorldContextObject);                                                     // [0x7733090] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect
	// int32_t AddSubmixEffect(class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset); // [0x7732f90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
	// void AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, FSourceEffectChainEntry Entry); // [0x7732e80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
	// void AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);    // [0x7732dc0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AudioMixer.QuartzClockHandle
/// Size: 0x0170 (0x000030 - 0x0001A0)
class UQuartzClockHandle : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x140];                                     // 0x0030   (0x0140)  MISSED
	class UQuartzSubsystem*                            QuartzSubsystem;                                            // 0x0170   (0x0008)  
	unsigned char                                      UnknownData01_5[0x20];                                      // 0x0178   (0x0020)  MISSED
	class UWorld*                                      WorldPtr;                                                   // 0x0198   (0x0008)  


	/// Functions
	// Function /Script/AudioMixer.QuartzClockHandle.UnsubscribeFromTimeDivision
	// void UnsubscribeFromTimeDivision(class UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, class UQuartzClockHandle*& ClockHandle); // [0x7736b60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.UnsubscribeFromAllTimeDivisions
	// void UnsubscribeFromAllTimeDivisions(class UObject* WorldContextObject, class UQuartzClockHandle*& ClockHandle);      // [0x7736a80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.SubscribeToQuantizationEvent
	// void SubscribeToQuantizationEvent(class UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, FDelegateProperty& OnQuantizationEvent, class UQuartzClockHandle*& ClockHandle); // [0x7736840] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.SubscribeToAllQuantizationEvents
	// void SubscribeToAllQuantizationEvents(class UObject* WorldContextObject, FDelegateProperty& OnQuantizationEvent, class UQuartzClockHandle*& ClockHandle); // [0x77366f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.StopClock
	// void StopClock(class UObject* WorldContextObject, bool CancelPendingEvents, class UQuartzClockHandle*& ClockHandle);  // [0x77363a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.StartOtherClock
	// void StartOtherClock(class UObject* WorldContextObject, FName OtherClockName, FQuartzQuantizationBoundary InQuantizationBoundary, FDelegateProperty& InDelegate); // [0x7735f50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.StartClock
	// void StartClock(class UObject* WorldContextObject, class UQuartzClockHandle*& ClockHandle);                           // [0x7734df0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.SetTicksPerSecond
	// void SetTicksPerSecond(class UObject* WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty& Delegate, class UQuartzClockHandle*& ClockHandle, float TicksPerSecond); // [0x7735a70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.SetThirtySecondNotesPerMinute
	// void SetThirtySecondNotesPerMinute(class UObject* WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty& Delegate, class UQuartzClockHandle*& ClockHandle, float ThirtySecondsNotesPerMinute); // [0x7735870] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.SetSecondsPerTick
	// void SetSecondsPerTick(class UObject* WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty& Delegate, class UQuartzClockHandle*& ClockHandle, float SecondsPerTick); // [0x77354e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.SetMillisecondsPerTick
	// void SetMillisecondsPerTick(class UObject* WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty& Delegate, class UQuartzClockHandle*& ClockHandle, float MillisecondsPerTick); // [0x77352e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.SetBeatsPerMinute
	// void SetBeatsPerMinute(class UObject* WorldContextObject, FQuartzQuantizationBoundary& QuantizationBoundary, FDelegateProperty& Delegate, class UQuartzClockHandle*& ClockHandle, float BeatsPerMinute); // [0x7734f90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.ResumeClock
	// void ResumeClock(class UObject* WorldContextObject, class UQuartzClockHandle*& ClockHandle);                          // [0x7734df0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.ResetTransportQuantized
	// void ResetTransportQuantized(class UObject* WorldContextObject, FQuartzQuantizationBoundary InQuantizationBoundary, FDelegateProperty& InDelegate, class UQuartzClockHandle*& ClockHandle); // [0x7734c40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.ResetTransport
	// void ResetTransport(class UObject* WorldContextObject, FDelegateProperty& InDelegate);                                // [0x7734b40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.PauseClock
	// void PauseClock(class UObject* WorldContextObject, class UQuartzClockHandle*& ClockHandle);                           // [0x7734340] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.IsClockRunning
	// bool IsClockRunning(class UObject* WorldContextObject);                                                               // [0x7733d20] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.GetTicksPerSecond
	// float GetTicksPerSecond(class UObject* WorldContextObject);                                                           // [0x7733bb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioMixer.QuartzClockHandle.GetThirtySecondNotesPerMinute
	// float GetThirtySecondNotesPerMinute(class UObject* WorldContextObject);                                               // [0x7733b10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioMixer.QuartzClockHandle.GetSecondsPerTick
	// float GetSecondsPerTick(class UObject* WorldContextObject);                                                           // [0x7733a70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioMixer.QuartzClockHandle.GetMillisecondsPerTick
	// float GetMillisecondsPerTick(class UObject* WorldContextObject);                                                      // [0x7733770] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioMixer.QuartzClockHandle.GetEstimatedRunTime
	// float GetEstimatedRunTime(class UObject* WorldContextObject);                                                         // [0x7733540] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.GetDurationOfQuantizationTypeInSeconds
	// float GetDurationOfQuantizationTypeInSeconds(class UObject* WorldContextObject, EQuartzCommandQuantization& QuantizationType, float Multiplier); // [0x7733420] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.GetCurrentTimestamp
	// FQuartzTransportTimeStamp GetCurrentTimestamp(class UObject* WorldContextObject);                                     // [0x7733380] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzClockHandle.GetBeatsPerMinute
	// float GetBeatsPerMinute(class UObject* WorldContextObject);                                                           // [0x77332e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/AudioMixer.SubmixEffectDynamicProcessorFilterSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSubmixEffectDynamicProcessorFilterSettings
{ 
	bool                                               bEnabled : 1;                                               // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Cutoff;                                                     // 0x0004   (0x0004)  
	float                                              GainDb;                                                     // 0x0008   (0x0004)  
};

/// Struct /Script/AudioMixer.SubmixEffectDynamicsProcessorSettings
/// Size: 0x0060 (0x000000 - 0x000060)
struct FSubmixEffectDynamicsProcessorSettings
{ 
	ESubmixEffectDynamicsProcessorType                 DynamicsProcessorType;                                      // 0x0000   (0x0001)  
	ESubmixEffectDynamicsPeakMode                      PeakMode;                                                   // 0x0001   (0x0001)  
	ESubmixEffectDynamicsChannelLinkMode               LinkMode;                                                   // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0003   (0x0001)  MISSED
	float                                              InputGainDb;                                                // 0x0004   (0x0004)  
	float                                              ThresholdDb;                                                // 0x0008   (0x0004)  
	float                                              Ratio;                                                      // 0x000C   (0x0004)  
	float                                              KneeBandwidthDb;                                            // 0x0010   (0x0004)  
	float                                              LookAheadMsec;                                              // 0x0014   (0x0004)  
	float                                              AttackTimeMsec;                                             // 0x0018   (0x0004)  
	float                                              ReleaseTimeMsec;                                            // 0x001C   (0x0004)  
	ESubmixEffectDynamicsKeySource                     KeySource;                                                  // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	class UAudioBus*                                   ExternalAudioBus;                                           // 0x0028   (0x0008)  
	class USoundSubmix*                                ExternalSubmix;                                             // 0x0030   (0x0008)  
	bool                                               bChannelLinked : 1;                                         // 0x0038:0 (0x0001)  
	bool                                               bAnalogMode : 1;                                            // 0x0038:1 (0x0001)  
	bool                                               bBypass : 1;                                                // 0x0038:2 (0x0001)  
	bool                                               bKeyAudition : 1;                                           // 0x0038:3 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              KeyGainDb;                                                  // 0x003C   (0x0004)  
	float                                              OutputGainDb;                                               // 0x0040   (0x0004)  
	FSubmixEffectDynamicProcessorFilterSettings        KeyHighshelf;                                               // 0x0044   (0x000C)  
	FSubmixEffectDynamicProcessorFilterSettings        KeyLowshelf;                                                // 0x0050   (0x000C)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Class /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset
/// Size: 0x00E8 (0x000070 - 0x000158)
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x88];                                      // 0x0070   (0x0088)  MISSED
	FSubmixEffectDynamicsProcessorSettings             Settings;                                                   // 0x00F8   (0x0060)  


	/// Functions
	// Function /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
	// void SetSettings(FSubmixEffectDynamicsProcessorSettings& Settings);                                                   // [0x7739b50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix
	// void SetExternalSubmix(class USoundSubmix* Submix);                                                                   // [0x7739910] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset.SetAudioBus
	// void SetAudioBus(class UAudioBus* AudioBus);                                                                          // [0x7739880] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset.ResetKey
	// void ResetKey();                                                                                                      // [0x7739860] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/AudioMixer.SubmixEffectEQBand
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSubmixEffectEQBand
{ 
	float                                              Frequency;                                                  // 0x0000   (0x0004)  
	float                                              Bandwidth;                                                  // 0x0004   (0x0004)  
	float                                              GainDb;                                                     // 0x0008   (0x0004)  
	bool                                               bEnabled : 1;                                               // 0x000C:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/AudioMixer.SubmixEffectSubmixEQSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSubmixEffectSubmixEQSettings
{ 
	TArray<FSubmixEffectEQBand>                        EQBands;                                                    // 0x0000   (0x0010)  
};

/// Class /Script/AudioMixer.SubmixEffectSubmixEQPreset
/// Size: 0x0048 (0x000070 - 0x0000B8)
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0070   (0x0038)  MISSED
	FSubmixEffectSubmixEQSettings                      Settings;                                                   // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
	// void SetSettings(FSubmixEffectSubmixEQSettings& InSettings);                                                          // [0x4d44950] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/AudioMixer.SubmixEffectReverbSettings
/// Size: 0x0040 (0x000000 - 0x000040)
struct FSubmixEffectReverbSettings
{ 
	bool                                               bBypassEarlyReflections;                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              ReflectionsDelay;                                           // 0x0004   (0x0004)  
	float                                              GainHF;                                                     // 0x0008   (0x0004)  
	float                                              ReflectionsGain;                                            // 0x000C   (0x0004)  
	bool                                               bBypassLateReflections;                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LateDelay;                                                  // 0x0014   (0x0004)  
	float                                              DecayTime;                                                  // 0x0018   (0x0004)  
	float                                              Density;                                                    // 0x001C   (0x0004)  
	float                                              Diffusion;                                                  // 0x0020   (0x0004)  
	float                                              AirAbsorptionGainHF;                                        // 0x0024   (0x0004)  
	float                                              DecayHFRatio;                                               // 0x0028   (0x0004)  
	float                                              LateGain;                                                   // 0x002C   (0x0004)  
	float                                              Gain;                                                       // 0x0030   (0x0004)  
	float                                              WetLevel;                                                   // 0x0034   (0x0004)  
	float                                              DryLevel;                                                   // 0x0038   (0x0004)  
	bool                                               bBypass;                                                    // 0x003C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Class /Script/AudioMixer.SubmixEffectReverbPreset
/// Size: 0x00A8 (0x000070 - 0x000118)
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x68];                                      // 0x0070   (0x0068)  MISSED
	FSubmixEffectReverbSettings                        Settings;                                                   // 0x00D8   (0x0040)  


	/// Functions
	// Function /Script/AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
	// void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);                // [0x7739d80] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SubmixEffectReverbPreset.SetSettings
	// void SetSettings(FSubmixEffectReverbSettings& InSettings);                                                            // [0x7739c70] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AudioMixer.QuartzSubsystem
/// Size: 0x0118 (0x000048 - 0x000160)
class UQuartzSubsystem : public UTickableWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x118];                                     // 0x0048   (0x0118)  MISSED


	/// Functions
	// Function /Script/AudioMixer.QuartzSubsystem.IsQuartzEnabled
	// bool IsQuartzEnabled();                                                                                               // [0x49dc320] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.IsClockRunning
	// bool IsClockRunning(class UObject* WorldContextObject, FName ClockName);                                              // [0x7739740] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetRoundTripMinLatency
	// float GetRoundTripMinLatency(class UObject* WorldContextObject);                                                      // [0x77396a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetRoundTripMaxLatency
	// float GetRoundTripMaxLatency(class UObject* WorldContextObject);                                                      // [0x7739600] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetRoundTripAverageLatency
	// float GetRoundTripAverageLatency(class UObject* WorldContextObject);                                                  // [0x7739560] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetHandleForClock
	// class UQuartzClockHandle* GetHandleForClock(class UObject* WorldContextObject, FName ClockName);                      // [0x7739460] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMinLatency
	// float GetGameThreadToAudioRenderThreadMinLatency(class UObject* WorldContextObject);                                  // [0x77393c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMaxLatency
	// float GetGameThreadToAudioRenderThreadMaxLatency(class UObject* WorldContextObject);                                  // [0x77393c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadAverageLatency
	// float GetGameThreadToAudioRenderThreadAverageLatency(class UObject* WorldContextObject);                              // [0x7739320] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetEstimatedClockRunTime
	// float GetEstimatedClockRunTime(class UObject* WorldContextObject, FName& InClockName);                                // [0x7739230] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetDurationOfQuantizationTypeInSeconds
	// float GetDurationOfQuantizationTypeInSeconds(class UObject* WorldContextObject, FName ClockName, EQuartzCommandQuantization& QuantizationType, float Multiplier); // [0x7739080] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetCurrentClockTimestamp
	// FQuartzTransportTimeStamp GetCurrentClockTimestamp(class UObject* WorldContextObject, FName& InClockName);            // [0x7738f90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMinLatency
	// float GetAudioRenderThreadToGameThreadMinLatency();                                                                   // [0x7738f60] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMaxLatency
	// float GetAudioRenderThreadToGameThreadMaxLatency();                                                                   // [0x7738f30] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadAverageLatency
	// float GetAudioRenderThreadToGameThreadAverageLatency();                                                               // [0x7738f00] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.DoesClockExist
	// bool DoesClockExist(class UObject* WorldContextObject, FName ClockName);                                              // [0x7738e10] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.DeleteClockByName
	// void DeleteClockByName(class UObject* WorldContextObject, FName ClockName);                                           // [0x7738d20] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.DeleteClockByHandle
	// void DeleteClockByHandle(class UObject* WorldContextObject, class UQuartzClockHandle*& InClockHandle);                // [0x7738c40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioMixer.QuartzSubsystem.CreateNewClock
	// class UQuartzClockHandle* CreateNewClock(class UObject* WorldContextObject, FName ClockName, FQuartzClockSettings InSettings, bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager); // [0x7738a50] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioMixer.SynthSound
/// Size: 0x0020 (0x0003D0 - 0x0003F0)
class USynthSound : public USoundWaveProcedural
{ 
public:
	class USynthComponent*                             OwningSynthComponent;                                       // 0x03D0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x03D8   (0x0018)  MISSED
};

