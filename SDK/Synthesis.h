
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SlateCore
/// dependency: UMG

/// Enum /Script/Synthesis.ESynth1PatchDestination
/// Size: 0x16
enum class ESynth1PatchDestination : uint8_t
{
	ESynth1PatchDestination__Osc1Gain                                                = 0,
	ESynth1PatchDestination__Osc1Frequency                                           = 1,
	ESynth1PatchDestination__Osc1Pulsewidth                                          = 2,
	ESynth1PatchDestination__Osc2Gain                                                = 3,
	ESynth1PatchDestination__Osc2Frequency                                           = 4,
	ESynth1PatchDestination__Osc2Pulsewidth                                          = 5,
	ESynth1PatchDestination__FilterFrequency                                         = 6,
	ESynth1PatchDestination__FilterQ                                                 = 7,
	ESynth1PatchDestination__Gain                                                    = 8,
	ESynth1PatchDestination__Pan                                                     = 9,
	ESynth1PatchDestination__LFO1Frequency                                           = 10,
	ESynth1PatchDestination__LFO1Gain                                                = 11,
	ESynth1PatchDestination__LFO2Frequency                                           = 12,
	ESynth1PatchDestination__LFO2Gain                                                = 13,
	ESynth1PatchDestination__Count                                                   = 14,
	ESynth1PatchDestination__ESynth1PatchDestination_MAX                             = 15
};

/// Enum /Script/Synthesis.ESynth1PatchSource
/// Size: 0x06
enum class ESynth1PatchSource : uint8_t
{
	ESynth1PatchSource__LFO1                                                         = 0,
	ESynth1PatchSource__LFO2                                                         = 1,
	ESynth1PatchSource__Envelope                                                     = 2,
	ESynth1PatchSource__BiasEnvelope                                                 = 3,
	ESynth1PatchSource__Count                                                        = 4,
	ESynth1PatchSource__ESynth1PatchSource_MAX                                       = 5
};

/// Enum /Script/Synthesis.ESynthStereoDelayMode
/// Size: 0x05
enum class ESynthStereoDelayMode : uint8_t
{
	ESynthStereoDelayMode__Normal                                                    = 0,
	ESynthStereoDelayMode__Cross                                                     = 1,
	ESynthStereoDelayMode__PingPong                                                  = 2,
	ESynthStereoDelayMode__Count                                                     = 3,
	ESynthStereoDelayMode__ESynthStereoDelayMode_MAX                                 = 4
};

/// Enum /Script/Synthesis.ESynthFilterAlgorithm
/// Size: 0x05
enum class ESynthFilterAlgorithm : uint8_t
{
	ESynthFilterAlgorithm__OnePole                                                   = 0,
	ESynthFilterAlgorithm__StateVariable                                             = 1,
	ESynthFilterAlgorithm__Ladder                                                    = 2,
	ESynthFilterAlgorithm__Count                                                     = 3,
	ESynthFilterAlgorithm__ESynthFilterAlgorithm_MAX                                 = 4
};

/// Enum /Script/Synthesis.ESynthFilterType
/// Size: 0x06
enum class ESynthFilterType : uint8_t
{
	ESynthFilterType__LowPass                                                        = 0,
	ESynthFilterType__HighPass                                                       = 1,
	ESynthFilterType__BandPass                                                       = 2,
	ESynthFilterType__BandStop                                                       = 3,
	ESynthFilterType__Count                                                          = 4,
	ESynthFilterType__ESynthFilterType_MAX                                           = 5
};

/// Enum /Script/Synthesis.ESynthModEnvBiasPatch
/// Size: 0x10
enum class ESynthModEnvBiasPatch : uint8_t
{
	ESynthModEnvBiasPatch__PatchToNone                                               = 0,
	ESynthModEnvBiasPatch__PatchToOscFreq                                            = 1,
	ESynthModEnvBiasPatch__PatchToFilterFreq                                         = 2,
	ESynthModEnvBiasPatch__PatchToFilterQ                                            = 3,
	ESynthModEnvBiasPatch__PatchToLFO1Gain                                           = 4,
	ESynthModEnvBiasPatch__PatchToLFO2Gain                                           = 5,
	ESynthModEnvBiasPatch__PatchToLFO1Freq                                           = 6,
	ESynthModEnvBiasPatch__PatchToLFO2Freq                                           = 7,
	ESynthModEnvBiasPatch__Count                                                     = 8,
	ESynthModEnvBiasPatch__ESynthModEnvBiasPatch_MAX                                 = 9
};

/// Enum /Script/Synthesis.ESynthModEnvPatch
/// Size: 0x10
enum class ESynthModEnvPatch : uint8_t
{
	ESynthModEnvPatch__PatchToNone                                                   = 0,
	ESynthModEnvPatch__PatchToOscFreq                                                = 1,
	ESynthModEnvPatch__PatchToFilterFreq                                             = 2,
	ESynthModEnvPatch__PatchToFilterQ                                                = 3,
	ESynthModEnvPatch__PatchToLFO1Gain                                               = 4,
	ESynthModEnvPatch__PatchToLFO2Gain                                               = 5,
	ESynthModEnvPatch__PatchToLFO1Freq                                               = 6,
	ESynthModEnvPatch__PatchToLFO2Freq                                               = 7,
	ESynthModEnvPatch__Count                                                         = 8,
	ESynthModEnvPatch__ESynthModEnvPatch_MAX                                         = 9
};

/// Enum /Script/Synthesis.ESynthLFOPatchType
/// Size: 0x11
enum class ESynthLFOPatchType : uint8_t
{
	ESynthLFOPatchType__PatchToNone                                                  = 0,
	ESynthLFOPatchType__PatchToGain                                                  = 1,
	ESynthLFOPatchType__PatchToOscFreq                                               = 2,
	ESynthLFOPatchType__PatchToFilterFreq                                            = 3,
	ESynthLFOPatchType__PatchToFilterQ                                               = 4,
	ESynthLFOPatchType__PatchToOscPulseWidth                                         = 5,
	ESynthLFOPatchType__PatchToOscPan                                                = 6,
	ESynthLFOPatchType__PatchLFO1ToLFO2Frequency                                     = 7,
	ESynthLFOPatchType__PatchLFO1ToLFO2Gain                                          = 8,
	ESynthLFOPatchType__Count                                                        = 9,
	ESynthLFOPatchType__ESynthLFOPatchType_MAX                                       = 10
};

/// Enum /Script/Synthesis.ESynthLFOMode
/// Size: 0x05
enum class ESynthLFOMode : uint8_t
{
	ESynthLFOMode__Sync                                                              = 0,
	ESynthLFOMode__OneShot                                                           = 1,
	ESynthLFOMode__Free                                                              = 2,
	ESynthLFOMode__Count                                                             = 3,
	ESynthLFOMode__ESynthLFOMode_MAX                                                 = 4
};

/// Enum /Script/Synthesis.ESynthLFOType
/// Size: 0x09
enum class ESynthLFOType : uint8_t
{
	ESynthLFOType__Sine                                                              = 0,
	ESynthLFOType__UpSaw                                                             = 1,
	ESynthLFOType__DownSaw                                                           = 2,
	ESynthLFOType__Square                                                            = 3,
	ESynthLFOType__Triangle                                                          = 4,
	ESynthLFOType__Exponential                                                       = 5,
	ESynthLFOType__RandomSampleHold                                                  = 6,
	ESynthLFOType__Count                                                             = 7,
	ESynthLFOType__ESynthLFOType_MAX                                                 = 8
};

/// Enum /Script/Synthesis.ESynth1OscType
/// Size: 0x07
enum class ESynth1OscType : uint8_t
{
	ESynth1OscType__Sine                                                             = 0,
	ESynth1OscType__Saw                                                              = 1,
	ESynth1OscType__Triangle                                                         = 2,
	ESynth1OscType__Square                                                           = 3,
	ESynth1OscType__Noise                                                            = 4,
	ESynth1OscType__Count                                                            = 5,
	ESynth1OscType__ESynth1OscType_MAX                                               = 6
};

/// Enum /Script/Synthesis.ESourceEffectDynamicsPeakMode
/// Size: 0x05
enum class ESourceEffectDynamicsPeakMode : uint8_t
{
	ESourceEffectDynamicsPeakMode__MeanSquared                                       = 0,
	ESourceEffectDynamicsPeakMode__RootMeanSquared                                   = 1,
	ESourceEffectDynamicsPeakMode__Peak                                              = 2,
	ESourceEffectDynamicsPeakMode__Count                                             = 3,
	ESourceEffectDynamicsPeakMode__ESourceEffectDynamicsPeakMode_MAX                 = 4
};

/// Enum /Script/Synthesis.ESourceEffectDynamicsProcessorType
/// Size: 0x06
enum class ESourceEffectDynamicsProcessorType : uint8_t
{
	ESourceEffectDynamicsProcessorType__Compressor                                   = 0,
	ESourceEffectDynamicsProcessorType__Limiter                                      = 1,
	ESourceEffectDynamicsProcessorType__Expander                                     = 2,
	ESourceEffectDynamicsProcessorType__Gate                                         = 3,
	ESourceEffectDynamicsProcessorType__Count                                        = 4,
	ESourceEffectDynamicsProcessorType__ESourceEffectDynamicsProcessorType_MAX       = 5
};

/// Enum /Script/Synthesis.EEnvelopeFollowerPeakMode
/// Size: 0x05
enum class EEnvelopeFollowerPeakMode : uint8_t
{
	EEnvelopeFollowerPeakMode__MeanSquared                                           = 0,
	EEnvelopeFollowerPeakMode__RootMeanSquared                                       = 1,
	EEnvelopeFollowerPeakMode__Peak                                                  = 2,
	EEnvelopeFollowerPeakMode__Count                                                 = 3,
	EEnvelopeFollowerPeakMode__EEnvelopeFollowerPeakMode_MAX                         = 4
};

/// Enum /Script/Synthesis.ESourceEffectFilterParam
/// Size: 0x04
enum class ESourceEffectFilterParam : uint8_t
{
	ESourceEffectFilterParam__FilterFrequency                                        = 0,
	ESourceEffectFilterParam__FilterResonance                                        = 1,
	ESourceEffectFilterParam__Count                                                  = 2,
	ESourceEffectFilterParam__ESourceEffectFilterParam_MAX                           = 3
};

/// Enum /Script/Synthesis.ESourceEffectFilterType
/// Size: 0x06
enum class ESourceEffectFilterType : uint8_t
{
	ESourceEffectFilterType__LowPass                                                 = 0,
	ESourceEffectFilterType__HighPass                                                = 1,
	ESourceEffectFilterType__BandPass                                                = 2,
	ESourceEffectFilterType__BandStop                                                = 3,
	ESourceEffectFilterType__Count                                                   = 4,
	ESourceEffectFilterType__ESourceEffectFilterType_MAX                             = 5
};

/// Enum /Script/Synthesis.ESourceEffectFilterCircuit
/// Size: 0x05
enum class ESourceEffectFilterCircuit : uint8_t
{
	ESourceEffectFilterCircuit__OnePole                                              = 0,
	ESourceEffectFilterCircuit__StateVariable                                        = 1,
	ESourceEffectFilterCircuit__Ladder                                               = 2,
	ESourceEffectFilterCircuit__Count                                                = 3,
	ESourceEffectFilterCircuit__ESourceEffectFilterCircuit_MAX                       = 4
};

/// Enum /Script/Synthesis.EStereoChannelMode
/// Size: 0x04
enum class EStereoChannelMode : uint8_t
{
	EStereoChannelMode__MidSide                                                      = 0,
	EStereoChannelMode__LeftRight                                                    = 1,
	EStereoChannelMode__count                                                        = 2,
	EStereoChannelMode__EStereoChannelMode_MAX                                       = 3
};

/// Enum /Script/Synthesis.EPhaserLFOType
/// Size: 0x09
enum class EPhaserLFOType : uint8_t
{
	EPhaserLFOType__Sine                                                             = 0,
	EPhaserLFOType__UpSaw                                                            = 1,
	EPhaserLFOType__DownSaw                                                          = 2,
	EPhaserLFOType__Square                                                           = 3,
	EPhaserLFOType__Triangle                                                         = 4,
	EPhaserLFOType__Exponential                                                      = 5,
	EPhaserLFOType__RandomSampleHold                                                 = 6,
	EPhaserLFOType__Count                                                            = 7,
	EPhaserLFOType__EPhaserLFOType_MAX                                               = 8
};

/// Enum /Script/Synthesis.ERingModulatorTypeSourceEffect
/// Size: 0x06
enum class ERingModulatorTypeSourceEffect : uint8_t
{
	ERingModulatorTypeSourceEffect__Sine                                             = 0,
	ERingModulatorTypeSourceEffect__Saw                                              = 1,
	ERingModulatorTypeSourceEffect__Triangle                                         = 2,
	ERingModulatorTypeSourceEffect__Square                                           = 3,
	ERingModulatorTypeSourceEffect__Count                                            = 4,
	ERingModulatorTypeSourceEffect__ERingModulatorTypeSourceEffect_MAX               = 5
};

/// Enum /Script/Synthesis.EStereoDelayFiltertype
/// Size: 0x06
enum class EStereoDelayFiltertype : uint8_t
{
	EStereoDelayFiltertype__Lowpass                                                  = 0,
	EStereoDelayFiltertype__Highpass                                                 = 1,
	EStereoDelayFiltertype__Bandpass                                                 = 2,
	EStereoDelayFiltertype__Notch                                                    = 3,
	EStereoDelayFiltertype__Count                                                    = 4,
	EStereoDelayFiltertype__EStereoDelayFiltertype_MAX                               = 5
};

/// Enum /Script/Synthesis.EStereoDelaySourceEffect
/// Size: 0x05
enum class EStereoDelaySourceEffect : uint8_t
{
	EStereoDelaySourceEffect__Normal                                                 = 0,
	EStereoDelaySourceEffect__Cross                                                  = 1,
	EStereoDelaySourceEffect__PingPong                                               = 2,
	EStereoDelaySourceEffect__Count                                                  = 3,
	EStereoDelaySourceEffect__EStereoDelaySourceEffect_MAX                           = 4
};

/// Enum /Script/Synthesis.ESubmixEffectConvolutionReverbBlockSize
/// Size: 0x04
enum class ESubmixEffectConvolutionReverbBlockSize : uint8_t
{
	ESubmixEffectConvolutionReverbBlockSize__BlockSize256                            = 0,
	ESubmixEffectConvolutionReverbBlockSize__BlockSize512                            = 1,
	ESubmixEffectConvolutionReverbBlockSize__BlockSize1024                           = 2,
	ESubmixEffectConvolutionReverbBlockSize__ESubmixEffectConvolutionReverbBlockSize_MAX = 3
};

/// Enum /Script/Synthesis.ESubmixFilterAlgorithm
/// Size: 0x05
enum class ESubmixFilterAlgorithm : uint8_t
{
	ESubmixFilterAlgorithm__OnePole                                                  = 0,
	ESubmixFilterAlgorithm__StateVariable                                            = 1,
	ESubmixFilterAlgorithm__Ladder                                                   = 2,
	ESubmixFilterAlgorithm__Count                                                    = 3,
	ESubmixFilterAlgorithm__ESubmixFilterAlgorithm_MAX                               = 4
};

/// Enum /Script/Synthesis.ESubmixFilterType
/// Size: 0x06
enum class ESubmixFilterType : uint8_t
{
	ESubmixFilterType__LowPass                                                       = 0,
	ESubmixFilterType__HighPass                                                      = 1,
	ESubmixFilterType__BandPass                                                      = 2,
	ESubmixFilterType__BandStop                                                      = 3,
	ESubmixFilterType__Count                                                         = 4,
	ESubmixFilterType__ESubmixFilterType_MAX                                         = 5
};

/// Enum /Script/Synthesis.ETapLineMode
/// Size: 0x04
enum class ETapLineMode : uint8_t
{
	ETapLineMode__SendToChannel                                                      = 0,
	ETapLineMode__Panning                                                            = 1,
	ETapLineMode__Disabled                                                           = 2,
	ETapLineMode__ETapLineMode_MAX                                                   = 3
};

/// Enum /Script/Synthesis.EGranularSynthSeekType
/// Size: 0x04
enum class EGranularSynthSeekType : uint8_t
{
	EGranularSynthSeekType__FromBeginning                                            = 0,
	EGranularSynthSeekType__FromCurrentPosition                                      = 1,
	EGranularSynthSeekType__Count                                                    = 2,
	EGranularSynthSeekType__EGranularSynthSeekType_MAX                               = 3
};

/// Enum /Script/Synthesis.EGranularSynthEnvelopeType
/// Size: 0x16
enum class EGranularSynthEnvelopeType : uint8_t
{
	EGranularSynthEnvelopeType__Rectangular                                          = 0,
	EGranularSynthEnvelopeType__Triangle                                             = 1,
	EGranularSynthEnvelopeType__DownwardTriangle                                     = 2,
	EGranularSynthEnvelopeType__UpwardTriangle                                       = 3,
	EGranularSynthEnvelopeType__ExponentialDecay                                     = 4,
	EGranularSynthEnvelopeType__ExponentialIncrease                                  = 5,
	EGranularSynthEnvelopeType__Gaussian                                             = 6,
	EGranularSynthEnvelopeType__Hanning                                              = 7,
	EGranularSynthEnvelopeType__Lanczos                                              = 8,
	EGranularSynthEnvelopeType__Cosine                                               = 9,
	EGranularSynthEnvelopeType__CosineSquared                                        = 10,
	EGranularSynthEnvelopeType__Welch                                                = 11,
	EGranularSynthEnvelopeType__Blackman                                             = 12,
	EGranularSynthEnvelopeType__BlackmanHarris                                       = 13,
	EGranularSynthEnvelopeType__Count                                                = 14,
	EGranularSynthEnvelopeType__EGranularSynthEnvelopeType_MAX                       = 15
};

/// Enum /Script/Synthesis.CurveInterpolationType
/// Size: 0x04
enum class CurveInterpolationType : uint8_t
{
	CurveInterpolationType__AUTOINTERP                                               = 0,
	CurveInterpolationType__LINEAR                                                   = 1,
	CurveInterpolationType__CONSTANT                                                 = 2,
	CurveInterpolationType__CurveInterpolationType_MAX                               = 3
};

/// Enum /Script/Synthesis.ESamplePlayerSeekType
/// Size: 0x05
enum class ESamplePlayerSeekType : uint8_t
{
	ESamplePlayerSeekType__FromBeginning                                             = 0,
	ESamplePlayerSeekType__FromCurrentPosition                                       = 1,
	ESamplePlayerSeekType__FromEnd                                                   = 2,
	ESamplePlayerSeekType__Count                                                     = 3,
	ESamplePlayerSeekType__ESamplePlayerSeekType_MAX                                 = 4
};

/// Enum /Script/Synthesis.ESynthKnobSize
/// Size: 0x04
enum class ESynthKnobSize : uint8_t
{
	ESynthKnobSize__Medium                                                           = 0,
	ESynthKnobSize__Large                                                            = 1,
	ESynthKnobSize__Count                                                            = 2,
	ESynthKnobSize__ESynthKnobSize_MAX                                               = 3
};

/// Enum /Script/Synthesis.ESynthSlateColorStyle
/// Size: 0x04
enum class ESynthSlateColorStyle : uint8_t
{
	ESynthSlateColorStyle__Light                                                     = 0,
	ESynthSlateColorStyle__Dark                                                      = 1,
	ESynthSlateColorStyle__Count                                                     = 2,
	ESynthSlateColorStyle__ESynthSlateColorStyle_MAX                                 = 3
};

/// Enum /Script/Synthesis.ESynthSlateSizeType
/// Size: 0x05
enum class ESynthSlateSizeType : uint8_t
{
	ESynthSlateSizeType__Small                                                       = 0,
	ESynthSlateSizeType__Medium                                                      = 1,
	ESynthSlateSizeType__Large                                                       = 2,
	ESynthSlateSizeType__Count                                                       = 3,
	ESynthSlateSizeType__ESynthSlateSizeType_MAX                                     = 4
};

/// Struct /Script/Synthesis.Synth1PatchCable
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSynth1PatchCable
{ 
	float                                              Depth;                                                      // 0x0000   (0x0004)  
	ESynth1PatchDestination                            Destination;                                                // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/Synthesis.EpicSynth1Patch
/// Size: 0x0018 (0x000000 - 0x000018)
struct FEpicSynth1Patch
{ 
	ESynth1PatchSource                                 PatchSource;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FSynth1PatchCable>                          PatchCables;                                                // 0x0008   (0x0010)  
};

/// Struct /Script/Synthesis.ModularSynthPreset
/// Size: 0x00D8 (0x000008 - 0x0000E0)
struct FModularSynthPreset : FTableRowBase
{ 
	bool                                               bEnablePolyphony : 1;                                       // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0009   (0x0003)  MISSED
	ESynth1OscType                                     Osc1Type;                                                   // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              Osc1Gain;                                                   // 0x0010   (0x0004)  
	float                                              Osc1Octave;                                                 // 0x0014   (0x0004)  
	float                                              Osc1Semitones;                                              // 0x0018   (0x0004)  
	float                                              Osc1Cents;                                                  // 0x001C   (0x0004)  
	float                                              Osc1PulseWidth;                                             // 0x0020   (0x0004)  
	ESynth1OscType                                     Osc2Type;                                                   // 0x0024   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	float                                              Osc2Gain;                                                   // 0x0028   (0x0004)  
	float                                              Osc2Octave;                                                 // 0x002C   (0x0004)  
	float                                              Osc2Semitones;                                              // 0x0030   (0x0004)  
	float                                              Osc2Cents;                                                  // 0x0034   (0x0004)  
	float                                              Osc2PulseWidth;                                             // 0x0038   (0x0004)  
	float                                              Portamento;                                                 // 0x003C   (0x0004)  
	bool                                               bEnableUnison : 1;                                          // 0x0040:0 (0x0001)  
	bool                                               bEnableOscillatorSync : 1;                                  // 0x0040:1 (0x0001)  
	unsigned char                                      UnknownData03_4[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              Spread;                                                     // 0x0044   (0x0004)  
	float                                              Pan;                                                        // 0x0048   (0x0004)  
	float                                              LFO1Frequency;                                              // 0x004C   (0x0004)  
	float                                              LFO1Gain;                                                   // 0x0050   (0x0004)  
	ESynthLFOType                                      LFO1Type;                                                   // 0x0054   (0x0001)  
	ESynthLFOMode                                      LFO1Mode;                                                   // 0x0055   (0x0001)  
	ESynthLFOPatchType                                 LFO1PatchType;                                              // 0x0056   (0x0001)  
	unsigned char                                      UnknownData04_5[0x1];                                       // 0x0057   (0x0001)  MISSED
	float                                              LFO2Frequency;                                              // 0x0058   (0x0004)  
	float                                              LFO2Gain;                                                   // 0x005C   (0x0004)  
	ESynthLFOType                                      LFO2Type;                                                   // 0x0060   (0x0001)  
	ESynthLFOMode                                      LFO2Mode;                                                   // 0x0061   (0x0001)  
	ESynthLFOPatchType                                 LFO2PatchType;                                              // 0x0062   (0x0001)  
	unsigned char                                      UnknownData05_5[0x1];                                       // 0x0063   (0x0001)  MISSED
	float                                              GainDb;                                                     // 0x0064   (0x0004)  
	float                                              AttackTime;                                                 // 0x0068   (0x0004)  
	float                                              DecayTime;                                                  // 0x006C   (0x0004)  
	float                                              SustainGain;                                                // 0x0070   (0x0004)  
	float                                              ReleaseTime;                                                // 0x0074   (0x0004)  
	ESynthModEnvPatch                                  ModEnvPatchType;                                            // 0x0078   (0x0001)  
	ESynthModEnvBiasPatch                              ModEnvBiasPatchType;                                        // 0x0079   (0x0001)  
	unsigned char                                      UnknownData06_5[0x2];                                       // 0x007A   (0x0002)  MISSED
	bool                                               bInvertModulationEnvelope : 1;                              // 0x007C:0 (0x0001)  
	bool                                               bInvertModulationEnvelopeBias : 1;                          // 0x007C:1 (0x0001)  
	unsigned char                                      UnknownData07_4[0x3];                                       // 0x007D   (0x0003)  MISSED
	float                                              ModulationEnvelopeDepth;                                    // 0x0080   (0x0004)  
	float                                              ModulationEnvelopeAttackTime;                               // 0x0084   (0x0004)  
	float                                              ModulationEnvelopeDecayTime;                                // 0x0088   (0x0004)  
	float                                              ModulationEnvelopeSustainGain;                              // 0x008C   (0x0004)  
	float                                              ModulationEnvelopeReleaseTime;                              // 0x0090   (0x0004)  
	bool                                               bLegato : 1;                                                // 0x0094:0 (0x0001)  
	bool                                               bRetrigger : 1;                                             // 0x0094:1 (0x0001)  
	unsigned char                                      UnknownData08_4[0x3];                                       // 0x0095   (0x0003)  MISSED
	float                                              FilterFrequency;                                            // 0x0098   (0x0004)  
	float                                              FilterQ;                                                    // 0x009C   (0x0004)  
	ESynthFilterType                                   FilterType;                                                 // 0x00A0   (0x0001)  
	ESynthFilterAlgorithm                              FilterAlgorithm;                                            // 0x00A1   (0x0001)  
	unsigned char                                      UnknownData09_5[0x2];                                       // 0x00A2   (0x0002)  MISSED
	bool                                               bStereoDelayEnabled : 1;                                    // 0x00A4:0 (0x0001)  
	unsigned char                                      UnknownData10_4[0x3];                                       // 0x00A5   (0x0003)  MISSED
	ESynthStereoDelayMode                              StereoDelayMode;                                            // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData11_5[0x3];                                       // 0x00A9   (0x0003)  MISSED
	float                                              StereoDelayTime;                                            // 0x00AC   (0x0004)  
	float                                              StereoDelayFeedback;                                        // 0x00B0   (0x0004)  
	float                                              StereoDelayWetlevel;                                        // 0x00B4   (0x0004)  
	float                                              StereoDelayRatio;                                           // 0x00B8   (0x0004)  
	bool                                               bChorusEnabled : 1;                                         // 0x00BC:0 (0x0001)  
	unsigned char                                      UnknownData12_4[0x3];                                       // 0x00BD   (0x0003)  MISSED
	float                                              ChorusDepth;                                                // 0x00C0   (0x0004)  
	float                                              ChorusFeedback;                                             // 0x00C4   (0x0004)  
	float                                              ChorusFrequency;                                            // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData13_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	TArray<FEpicSynth1Patch>                           Patches;                                                    // 0x00D0   (0x0010)  
};

/// Struct /Script/Synthesis.ModularSynthPresetBankEntry
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FModularSynthPresetBankEntry
{ 
	SDK_UNDEFINED(16,5424) /* FString */               __um(PresetName);                                           // 0x0000   (0x0010)  
	FModularSynthPreset                                Preset;                                                     // 0x0010   (0x00E0)  
};

/// Class /Script/Synthesis.ModularSynthPresetBank
/// Size: 0x0010 (0x000030 - 0x000040)
class UModularSynthPresetBank : public UObject
{ 
public:
	TArray<FModularSynthPresetBankEntry>               Presets;                                                    // 0x0030   (0x0010)  
};

/// Class /Script/Synthesis.ModularSynthLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UModularSynthLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset
	// void AddModularSynthPresetToBankAsset(class UModularSynthPresetBank* InBank, FModularSynthPreset& Preset, FString PresetName); // [0x4d3cd60] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.ModularSynthComponent
/// Size: 0x06C0 (0x0006E0 - 0x000DA0)
class UModularSynthComponent : public USynthComponent
{ 
public:
	int32_t                                            VoiceCount;                                                 // 0x06E0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x6BC];                                     // 0x06E4   (0x06BC)  MISSED


	/// Functions
	// Function /Script/Synthesis.ModularSynthComponent.SetSynthPreset
	// void SetSynthPreset(FModularSynthPreset& SynthPreset);                                                                // [0x4d3f350] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetSustainGain
	// void SetSustainGain(float SustainGain);                                                                               // [0x4d3f2d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayWetlevel
	// void SetStereoDelayWetlevel(float DelayWetlevel);                                                                     // [0x4d3f250] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayTime
	// void SetStereoDelayTime(float DelayTimeMsec);                                                                         // [0x4d3f1d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayRatio
	// void SetStereoDelayRatio(float DelayRatio);                                                                           // [0x4d3f150] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayMode
	// void SetStereoDelayMode(ESynthStereoDelayMode StereoDelayMode);                                                       // [0x4d3f0d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled
	// void SetStereoDelayIsEnabled(bool StereoDelayEnabled);                                                                // [0x4d3f040] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayFeedback
	// void SetStereoDelayFeedback(float DelayFeedback);                                                                     // [0x4d3efc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetSpread
	// void SetSpread(float Spread);                                                                                         // [0x4d3ef40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetReleaseTime
	// void SetReleaseTime(float ReleaseTimeMsec);                                                                           // [0x4d3eec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetPortamento
	// void SetPortamento(float Portamento);                                                                                 // [0x4d3ee40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetPitchBend
	// void SetPitchBend(float PitchBend);                                                                                   // [0x4d3edc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetPan
	// void SetPan(float Pan);                                                                                               // [0x4d3ed40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscType
	// void SetOscType(int32_t OscIndex, ESynth1OscType OscType);                                                            // [0x4d3ec70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscSync
	// void SetOscSync(bool bIsSynced);                                                                                      // [0x4d3ebe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscSemitones
	// void SetOscSemitones(int32_t OscIndex, float Semitones);                                                              // [0x4d3eb10] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscPulsewidth
	// void SetOscPulsewidth(int32_t OscIndex, float Pulsewidth);                                                            // [0x4d3ea40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscOctave
	// void SetOscOctave(int32_t OscIndex, float Octave);                                                                    // [0x4d3e970] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscGainMod
	// void SetOscGainMod(int32_t OscIndex, float OscGainMod);                                                               // [0x4d3e8a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscGain
	// void SetOscGain(int32_t OscIndex, float OscGain);                                                                     // [0x4d3e7d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscFrequencyMod
	// void SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod);                                                          // [0x4d3e700] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscCents
	// void SetOscCents(int32_t OscIndex, float Cents);                                                                      // [0x4d3e630] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvSustainGain
	// void SetModEnvSustainGain(float SustainGain);                                                                         // [0x4d3e5b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvReleaseTime
	// void SetModEnvReleaseTime(float Release);                                                                             // [0x4d3e530] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvPatch
	// void SetModEnvPatch(ESynthModEnvPatch InPatchType);                                                                   // [0x4d3e4b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvInvert
	// void SetModEnvInvert(bool bInvert);                                                                                   // [0x4d3e420] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvDepth
	// void SetModEnvDepth(float Depth);                                                                                     // [0x4d3e3a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvDecayTime
	// void SetModEnvDecayTime(float DecayTimeMsec);                                                                         // [0x4d3e320] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvBiasPatch
	// void SetModEnvBiasPatch(ESynthModEnvBiasPatch InPatchType);                                                           // [0x4d3e2a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvBiasInvert
	// void SetModEnvBiasInvert(bool bInvert);                                                                               // [0x4d3e210] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvAttackTime
	// void SetModEnvAttackTime(float AttackTimeMsec);                                                                       // [0x4d3e190] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOType
	// void SetLFOType(int32_t LFOIndex, ESynthLFOType LFOType);                                                             // [0x4d3e0c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOPatch
	// void SetLFOPatch(int32_t LFOIndex, ESynthLFOPatchType LFOPatchType);                                                  // [0x4d3dff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOMode
	// void SetLFOMode(int32_t LFOIndex, ESynthLFOMode LFOMode);                                                             // [0x4d3df20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOGainMod
	// void SetLFOGainMod(int32_t LFOIndex, float GainMod);                                                                  // [0x4d3de50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOGain
	// void SetLFOGain(int32_t LFOIndex, float Gain);                                                                        // [0x4d3dd80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOFrequencyMod
	// void SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz);                                                      // [0x4d3dcb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOFrequency
	// void SetLFOFrequency(int32_t LFOIndex, float FrequencyHz);                                                            // [0x4d3dbe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetGainDb
	// void SetGainDb(float GainDb);                                                                                         // [0x4d3db60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterType
	// void SetFilterType(ESynthFilterType FilterType);                                                                      // [0x4d3dae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterQMod
	// void SetFilterQMod(float FilterQ);                                                                                    // [0x4d3da60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterQ
	// void SetFilterQ(float FilterQ);                                                                                       // [0x4d3d9e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterFrequencyMod
	// void SetFilterFrequencyMod(float FilterFrequencyHz);                                                                  // [0x4d3d960] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterFrequency
	// void SetFilterFrequency(float FilterFrequencyHz);                                                                     // [0x4d3d8e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterAlgorithm
	// void SetFilterAlgorithm(ESynthFilterAlgorithm FilterAlgorithm);                                                       // [0x4d3d860] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnableUnison
	// void SetEnableUnison(bool EnableUnison);                                                                              // [0x4d3d7d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnableRetrigger
	// void SetEnableRetrigger(bool RetriggerEnabled);                                                                       // [0x4d3d740] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnablePolyphony
	// void SetEnablePolyphony(bool bEnablePolyphony);                                                                       // [0x4d3d6b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnablePatch
	// bool SetEnablePatch(FPatchId PatchId, bool bIsEnabled);                                                               // [0x4d3d5e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnableLegato
	// void SetEnableLegato(bool LegatoEnabled);                                                                             // [0x4d3d550] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetDecayTime
	// void SetDecayTime(float DecayTimeMsec);                                                                               // [0x4d3d4d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusFrequency
	// void SetChorusFrequency(float Frequency);                                                                             // [0x4d3d450] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusFeedback
	// void SetChorusFeedback(float Feedback);                                                                               // [0x4d3d3d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusEnabled
	// void SetChorusEnabled(bool EnableChorus);                                                                             // [0x4d3d340] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusDepth
	// void SetChorusDepth(float Depth);                                                                                     // [0x4d3d2c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetAttackTime
	// void SetAttackTime(float AttackTimeMsec);                                                                             // [0x4d3d240] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.NoteOn
	// void NoteOn(float Note, int32_t Velocity, float Duration);                                                            // [0x4d3d120] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.NoteOff
	// void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes);                                                      // [0x4d3d000] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.CreatePatch
	// FPatchId CreatePatch(ESynth1PatchSource PatchSource, TArray<FSynth1PatchCable>& PatchCables, bool bEnableByDefault);  // [0x4d3ceb0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectBitCrusherSettings
/// Size: 0x0030 (0x000000 - 0x000030)
struct FSourceEffectBitCrusherSettings
{ 
	float                                              CrushedSampleRate;                                          // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FSoundModulationDestinationSettings                SampleRateModulation;                                       // 0x0008   (0x0010)  
	float                                              CrushedBits;                                                // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FSoundModulationDestinationSettings                BitModulation;                                              // 0x0020   (0x0010)  
};

/// Class /Script/Synthesis.SourceEffectBitCrusherPreset
/// Size: 0x0088 (0x000070 - 0x0000F8)
class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x58];                                      // 0x0070   (0x0058)  MISSED
	FSourceEffectBitCrusherSettings                    Settings;                                                   // 0x00C8   (0x0030)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSettings
	// void SetSettings(FSourceEffectBitCrusherBaseSettings& Settings);                                                      // [0x4d44740] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulator
	// void SetSampleRateModulator(class USoundModulatorBase* Modulator);                                                    // [0x4d446b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSampleRate
	// void SetSampleRate(float SampleRate);                                                                                 // [0x4d44630] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetModulationSettings
	// void SetModulationSettings(FSourceEffectBitCrusherSettings& ModulationSettings);                                      // [0x4d44480] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetBits
	// void SetBits(float Bits);                                                                                             // [0x4d43fc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetBitModulator
	// void SetBitModulator(class USoundModulatorBase* Modulator);                                                           // [0x4d43f30] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectChorusSettings
/// Size: 0x0078 (0x000000 - 0x000078)
struct FSourceEffectChorusSettings
{ 
	float                                              Depth;                                                      // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	float                                              WetLevel;                                                   // 0x000C   (0x0004)  
	float                                              DryLevel;                                                   // 0x0010   (0x0004)  
	float                                              Spread;                                                     // 0x0014   (0x0004)  
	FSoundModulationDestinationSettings                DepthModulation;                                            // 0x0018   (0x0010)  
	FSoundModulationDestinationSettings                FrequencyModulation;                                        // 0x0028   (0x0010)  
	FSoundModulationDestinationSettings                FeedbackModulation;                                         // 0x0038   (0x0010)  
	FSoundModulationDestinationSettings                WetModulation;                                              // 0x0048   (0x0010)  
	FSoundModulationDestinationSettings                DryModulation;                                              // 0x0058   (0x0010)  
	FSoundModulationDestinationSettings                SpreadModulation;                                           // 0x0068   (0x0010)  
};

/// Class /Script/Synthesis.SourceEffectChorusPreset
/// Size: 0x0118 (0x000070 - 0x000188)
class USourceEffectChorusPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0xA0];                                      // 0x0070   (0x00A0)  MISSED
	FSourceEffectChorusSettings                        Settings;                                                   // 0x0110   (0x0078)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetWetModulator
	// void SetWetModulator(class USoundModulatorBase* Modulator);                                                           // [0x4d45080] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetWet
	// void SetWet(float WetAmount);                                                                                         // [0x4d45000] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetSpreadModulator
	// void SetSpreadModulator(class USoundModulatorBase* Modulator);                                                        // [0x4d44f70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetSpread
	// void SetSpread(float Spread);                                                                                         // [0x4d44ef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetSettings
	// void SetSettings(FSourceEffectChorusBaseSettings& Settings);                                                          // [0x4d447f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetModulationSettings
	// void SetModulationSettings(FSourceEffectChorusSettings& ModulationSettings);                                          // [0x4d44530] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFrequencyModulator
	// void SetFrequencyModulator(class USoundModulatorBase* Modulator);                                                     // [0x4d443f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFrequency
	// void SetFrequency(float Frequency);                                                                                   // [0x4d44370] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFeedbackModulator
	// void SetFeedbackModulator(class USoundModulatorBase* Modulator);                                                      // [0x4d442e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFeedback
	// void SetFeedback(float Feedback);                                                                                     // [0x4d44260] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDryModulator
	// void SetDryModulator(class USoundModulatorBase* Modulator);                                                           // [0x4d441d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDry
	// void SetDry(float DryAmount);                                                                                         // [0x4d44150] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDepthModulator
	// void SetDepthModulator(class USoundModulatorBase* Modulator);                                                         // [0x4d440c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDepth
	// void SetDepth(float Depth);                                                                                           // [0x4d44040] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectDynamicsProcessorSettings
/// Size: 0x0028 (0x000000 - 0x000028)
struct FSourceEffectDynamicsProcessorSettings
{ 
	ESourceEffectDynamicsProcessorType                 DynamicsProcessorType;                                      // 0x0000   (0x0001)  
	ESourceEffectDynamicsPeakMode                      PeakMode;                                                   // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              LookAheadMsec;                                              // 0x0004   (0x0004)  
	float                                              AttackTimeMsec;                                             // 0x0008   (0x0004)  
	float                                              ReleaseTimeMsec;                                            // 0x000C   (0x0004)  
	float                                              ThresholdDb;                                                // 0x0010   (0x0004)  
	float                                              Ratio;                                                      // 0x0014   (0x0004)  
	float                                              KneeBandwidthDb;                                            // 0x0018   (0x0004)  
	float                                              InputGainDb;                                                // 0x001C   (0x0004)  
	float                                              OutputGainDb;                                               // 0x0020   (0x0004)  
	bool                                               bStereoLinked : 1;                                          // 0x0024:0 (0x0001)  
	bool                                               bAnalogMode : 1;                                            // 0x0024:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Class /Script/Synthesis.SourceEffectDynamicsProcessorPreset
/// Size: 0x0078 (0x000070 - 0x0000E8)
class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0070   (0x0050)  MISSED
	FSourceEffectDynamicsProcessorSettings             Settings;                                                   // 0x00C0   (0x0028)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings
	// void SetSettings(FSourceEffectDynamicsProcessorSettings& InSettings);                                                 // [0x4d448a0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.EnvelopeFollowerListener
/// Size: 0x0020 (0x0000B8 - 0x0000D8)
class UEnvelopeFollowerListener : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,5425) /* FMulticastInlineDelegate */ __um(OnEnvelopeFollowerUpdate);                          // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00C8   (0x0010)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectEnvelopeFollowerSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSourceEffectEnvelopeFollowerSettings
{ 
	float                                              AttackTime;                                                 // 0x0000   (0x0004)  
	float                                              ReleaseTime;                                                // 0x0004   (0x0004)  
	EEnvelopeFollowerPeakMode                          PeakMode;                                                   // 0x0008   (0x0001)  
	bool                                               bIsAnalogMode;                                              // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000A   (0x0002)  MISSED
};

/// Class /Script/Synthesis.SourceEffectEnvelopeFollowerPreset
/// Size: 0x0040 (0x000070 - 0x0000B0)
class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x34];                                      // 0x0070   (0x0034)  MISSED
	FSourceEffectEnvelopeFollowerSettings              Settings;                                                   // 0x00A4   (0x000C)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener
	// void UnregisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);                   // [0x4d45110] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings
	// void SetSettings(FSourceEffectEnvelopeFollowerSettings& InSettings);                                                  // [0x4d44a00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener
	// void RegisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);                     // [0x4d43ea0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectEQBand
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSourceEffectEQBand
{ 
	float                                              Frequency;                                                  // 0x0000   (0x0004)  
	float                                              Bandwidth;                                                  // 0x0004   (0x0004)  
	float                                              GainDb;                                                     // 0x0008   (0x0004)  
	bool                                               bEnabled : 1;                                               // 0x000C:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/Synthesis.SourceEffectEQSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSourceEffectEQSettings
{ 
	TArray<FSourceEffectEQBand>                        EQBands;                                                    // 0x0000   (0x0010)  
};

/// Class /Script/Synthesis.SourceEffectEQPreset
/// Size: 0x0048 (0x000070 - 0x0000B8)
class USourceEffectEQPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0070   (0x0038)  MISSED
	FSourceEffectEQSettings                            Settings;                                                   // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectEQPreset.SetSettings
	// void SetSettings(FSourceEffectEQSettings& InSettings);                                                                // [0x4d44950] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectFilterAudioBusModulationSettings
/// Size: 0x0028 (0x000000 - 0x000028)
struct FSourceEffectFilterAudioBusModulationSettings
{ 
	class UAudioBus*                                   AudioBus;                                                   // 0x0000   (0x0008)  
	int32_t                                            EnvelopeFollowerAttackTimeMsec;                             // 0x0008   (0x0004)  
	int32_t                                            EnvelopeFollowerReleaseTimeMsec;                            // 0x000C   (0x0004)  
	float                                              EnvelopeGainMultiplier;                                     // 0x0010   (0x0004)  
	ESourceEffectFilterParam                           FilterParam;                                                // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	float                                              MinFrequencyModulation;                                     // 0x0018   (0x0004)  
	float                                              MaxFrequencyModulation;                                     // 0x001C   (0x0004)  
	float                                              MinResonanceModulation;                                     // 0x0020   (0x0004)  
	float                                              MaxResonanceModulation;                                     // 0x0024   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectFilterSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSourceEffectFilterSettings
{ 
	ESourceEffectFilterCircuit                         FilterCircuit;                                              // 0x0000   (0x0001)  
	ESourceEffectFilterType                            FilterType;                                                 // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              CutoffFrequency;                                            // 0x0004   (0x0004)  
	float                                              FilterQ;                                                    // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation;                                      // 0x0010   (0x0010)  
};

/// Class /Script/Synthesis.SourceEffectFilterPreset
/// Size: 0x0068 (0x000070 - 0x0000D8)
class USourceEffectFilterPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x0070   (0x0048)  MISSED
	FSourceEffectFilterSettings                        Settings;                                                   // 0x00B8   (0x0020)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectFilterPreset.SetSettings
	// void SetSettings(FSourceEffectFilterSettings& InSettings);                                                            // [0x4d44ab0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectFoldbackDistortionSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSourceEffectFoldbackDistortionSettings
{ 
	float                                              InputGainDb;                                                // 0x0000   (0x0004)  
	float                                              ThresholdDb;                                                // 0x0004   (0x0004)  
	float                                              OutputGainDb;                                               // 0x0008   (0x0004)  
};

/// Class /Script/Synthesis.SourceEffectFoldbackDistortionPreset
/// Size: 0x0040 (0x000070 - 0x0000B0)
class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x34];                                      // 0x0070   (0x0034)  MISSED
	FSourceEffectFoldbackDistortionSettings            Settings;                                                   // 0x00A4   (0x000C)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings
	// void SetSettings(FSourceEffectFoldbackDistortionSettings& InSettings);                                                // [0x4d44b80] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectMidSideSpreaderSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSourceEffectMidSideSpreaderSettings
{ 
	float                                              SpreadAmount;                                               // 0x0000   (0x0004)  
	EStereoChannelMode                                 InputMode;                                                  // 0x0004   (0x0001)  
	EStereoChannelMode                                 OutputMode;                                                 // 0x0005   (0x0001)  
	bool                                               bEqualPower;                                                // 0x0006   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0007   (0x0001)  MISSED
};

/// Class /Script/Synthesis.SourceEffectMidSideSpreaderPreset
/// Size: 0x0038 (0x000070 - 0x0000A8)
class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0070   (0x0030)  MISSED
	FSourceEffectMidSideSpreaderSettings               Settings;                                                   // 0x00A0   (0x0008)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings
	// void SetSettings(FSourceEffectMidSideSpreaderSettings& InSettings);                                                   // [0x4d44c30] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectPannerSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSourceEffectPannerSettings
{ 
	float                                              Spread;                                                     // 0x0000   (0x0004)  
	float                                              Pan;                                                        // 0x0004   (0x0004)  
};

/// Class /Script/Synthesis.SourceEffectPannerPreset
/// Size: 0x0038 (0x000070 - 0x0000A8)
class USourceEffectPannerPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0070   (0x0030)  MISSED
	FSourceEffectPannerSettings                        Settings;                                                   // 0x00A0   (0x0008)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectPannerPreset.SetSettings
	// void SetSettings(FSourceEffectPannerSettings& InSettings);                                                            // [0x4d44ce0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectPhaserSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSourceEffectPhaserSettings
{ 
	float                                              WetLevel;                                                   // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	EPhaserLFOType                                     LFOType;                                                    // 0x000C   (0x0001)  
	bool                                               UseQuadraturePhase;                                         // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
};

/// Class /Script/Synthesis.SourceEffectPhaserPreset
/// Size: 0x0048 (0x000070 - 0x0000B8)
class USourceEffectPhaserPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0070   (0x0038)  MISSED
	FSourceEffectPhaserSettings                        Settings;                                                   // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectPhaserPreset.SetSettings
	// void SetSettings(FSourceEffectPhaserSettings& InSettings);                                                            // [0x4d44d90] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectRingModulationSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSourceEffectRingModulationSettings
{ 
	ERingModulatorTypeSourceEffect                     ModulatorType;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	float                                              Depth;                                                      // 0x0008   (0x0004)  
	float                                              DryLevel;                                                   // 0x000C   (0x0004)  
	float                                              WetLevel;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	class UAudioBus*                                   AudioBusModulator;                                          // 0x0018   (0x0008)  
};

/// Class /Script/Synthesis.SourceEffectRingModulationPreset
/// Size: 0x0068 (0x000070 - 0x0000D8)
class USourceEffectRingModulationPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x0070   (0x0048)  MISSED
	FSourceEffectRingModulationSettings                Settings;                                                   // 0x00B8   (0x0020)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectRingModulationPreset.SetSettings
	// void SetSettings(FSourceEffectRingModulationSettings& InSettings);                                                    // [0x4d44e50] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectSimpleDelaySettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSourceEffectSimpleDelaySettings
{ 
	float                                              SpeedOfSound;                                               // 0x0000   (0x0004)  
	float                                              DelayAmount;                                                // 0x0004   (0x0004)  
	float                                              DryAmount;                                                  // 0x0008   (0x0004)  
	float                                              WetAmount;                                                  // 0x000C   (0x0004)  
	float                                              Feedback;                                                   // 0x0010   (0x0004)  
	bool                                               bDelayBasedOnDistance : 1;                                  // 0x0014:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Class /Script/Synthesis.SourceEffectSimpleDelayPreset
/// Size: 0x0058 (0x000070 - 0x0000C8)
class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0070   (0x0040)  MISSED
	FSourceEffectSimpleDelaySettings                   Settings;                                                   // 0x00B0   (0x0018)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectSimpleDelayPreset.SetSettings
	// void SetSettings(FSourceEffectSimpleDelaySettings& InSettings);                                                       // [0x4d49600] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectStereoDelaySettings
/// Size: 0x0024 (0x000000 - 0x000024)
struct FSourceEffectStereoDelaySettings
{ 
	EStereoDelaySourceEffect                           DelayMode;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              DelayTimeMsec;                                              // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	float                                              DelayRatio;                                                 // 0x000C   (0x0004)  
	float                                              WetLevel;                                                   // 0x0010   (0x0004)  
	float                                              DryLevel;                                                   // 0x0014   (0x0004)  
	bool                                               bFilterEnabled;                                             // 0x0018   (0x0001)  
	EStereoDelayFiltertype                             FilterType;                                                 // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x001A   (0x0002)  MISSED
	float                                              FilterFrequency;                                            // 0x001C   (0x0004)  
	float                                              FilterQ;                                                    // 0x0020   (0x0004)  
};

/// Class /Script/Synthesis.SourceEffectStereoDelayPreset
/// Size: 0x0070 (0x000070 - 0x0000E0)
class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x4C];                                      // 0x0070   (0x004C)  MISSED
	FSourceEffectStereoDelaySettings                   Settings;                                                   // 0x00BC   (0x0024)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectStereoDelayPreset.SetSettings
	// void SetSettings(FSourceEffectStereoDelaySettings& InSettings);                                                       // [0x4d496b0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectWaveShaperSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSourceEffectWaveShaperSettings
{ 
	float                                              Amount;                                                     // 0x0000   (0x0004)  
	float                                              OutputGainDb;                                               // 0x0004   (0x0004)  
};

/// Class /Script/Synthesis.SourceEffectWaveShaperPreset
/// Size: 0x0038 (0x000070 - 0x0000A8)
class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0070   (0x0030)  MISSED
	FSourceEffectWaveShaperSettings                    Settings;                                                   // 0x00A0   (0x0008)  


	/// Functions
	// Function /Script/Synthesis.SourceEffectWaveShaperPreset.SetSettings
	// void SetSettings(FSourceEffectWaveShaperSettings& InSettings);                                                        // [0x4d44ce0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.AudioImpulseResponse
/// Size: 0x0030 (0x000030 - 0x000060)
class UAudioImpulseResponse : public UObject
{ 
public:
	TArray<float>                                      ImpulseResponse;                                            // 0x0030   (0x0010)  
	int32_t                                            NumChannels;                                                // 0x0040   (0x0004)  
	int32_t                                            SampleRate;                                                 // 0x0044   (0x0004)  
	float                                              NormalizationVolumeDb;                                      // 0x0048   (0x0004)  
	bool                                               bTrueStereo;                                                // 0x004C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	TArray<float>                                      IRData;                                                     // 0x0050   (0x0010)  
};

/// Struct /Script/Synthesis.SubmixEffectConvolutionReverbSettings
/// Size: 0x0028 (0x000000 - 0x000028)
struct FSubmixEffectConvolutionReverbSettings
{ 
	float                                              NormalizationVolumeDb;                                      // 0x0000   (0x0004)  
	bool                                               bBypass;                                                    // 0x0004   (0x0001)  
	bool                                               bMixInputChannelFormatToImpulseResponseFormat;              // 0x0005   (0x0001)  
	bool                                               bMixReverbOutputToOutputChannelFormat;                      // 0x0006   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0007   (0x0001)  MISSED
	float                                              SurroundRearChannelBleedDb;                                 // 0x0008   (0x0004)  
	bool                                               bInvertRearChannelBleedPhase;                               // 0x000C   (0x0001)  
	bool                                               bSurroundRearChannelFlip;                                   // 0x000D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x000E   (0x0002)  MISSED
	float                                              SurroundRearChannelBleedAmount;                             // 0x0010   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	class UAudioImpulseResponse*                       ImpulseResponse;                                            // 0x0018   (0x0008)  
	bool                                               AllowHArdwareAcceleration;                                  // 0x0020   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Class /Script/Synthesis.SubmixEffectConvolutionReverbPreset
/// Size: 0x0088 (0x000070 - 0x0000F8)
class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset
{ 
public:
	class UAudioImpulseResponse*                       ImpulseResponse;                                            // 0x0070   (0x0008)  
	FSubmixEffectConvolutionReverbSettings             Settings;                                                   // 0x0078   (0x0028)  
	ESubmixEffectConvolutionReverbBlockSize            BlockSize;                                                  // 0x00A0   (0x0001)  
	bool                                               bEnableHardwareAcceleration;                                // 0x00A1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x56];                                      // 0x00A2   (0x0056)  MISSED


	/// Functions
	// Function /Script/Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings
	// void SetSettings(FSubmixEffectConvolutionReverbSettings& InSettings);                                                 // [0x4d49780] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse
	// void SetImpulseResponse(class UAudioImpulseResponse* InImpulseResponse);                                              // [0x4d49350] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Synthesis.SubmixEffectDelaySettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSubmixEffectDelaySettings
{ 
	float                                              MaximumDelayLength;                                         // 0x0000   (0x0004)  
	float                                              InterpolationTime;                                          // 0x0004   (0x0004)  
	float                                              DelayLength;                                                // 0x0008   (0x0004)  
};

/// Class /Script/Synthesis.SubmixEffectDelayPreset
/// Size: 0x0050 (0x000070 - 0x0000C0)
class USubmixEffectDelayPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x34];                                      // 0x0070   (0x0034)  MISSED
	FSubmixEffectDelaySettings                         Settings;                                                   // 0x00A4   (0x000C)  
	FSubmixEffectDelaySettings                         DynamicSettings;                                            // 0x00B0   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00BC   (0x0004)  MISSED


	/// Functions
	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetSettings
	// void SetSettings(FSubmixEffectDelaySettings& InSettings);                                                             // [0x4d49820] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetInterpolationTime
	// void SetInterpolationTime(float Time);                                                                                // [0x4d49470] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetDelay
	// void SetDelay(float Length);                                                                                          // [0x4d48fd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds
	// float GetMaxDelayInMilliseconds();                                                                                    // [0x4d48d50] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Synthesis.SubmixEffectFilterSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FSubmixEffectFilterSettings
{ 
	ESubmixFilterType                                  FilterType;                                                 // 0x0000   (0x0001)  
	ESubmixFilterAlgorithm                             FilterAlgorithm;                                            // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              FilterFrequency;                                            // 0x0004   (0x0004)  
	float                                              FilterQ;                                                    // 0x0008   (0x0004)  
};

/// Class /Script/Synthesis.SubmixEffectFilterPreset
/// Size: 0x0040 (0x000070 - 0x0000B0)
class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x34];                                      // 0x0070   (0x0034)  MISSED
	FSubmixEffectFilterSettings                        Settings;                                                   // 0x00A4   (0x000C)  


	/// Functions
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetSettings
	// void SetSettings(FSubmixEffectFilterSettings& InSettings);                                                            // [0x4d498e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterType
	// void SetFilterType(ESubmixFilterType InType);                                                                         // [0x4d492d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterQMod
	// void SetFilterQMod(float InQ);                                                                                        // [0x4d49250] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterQ
	// void SetFilterQ(float InQ);                                                                                           // [0x4d491d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod
	// void SetFilterCutoffFrequencyMod(float InFrequency);                                                                  // [0x4d49150] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency
	// void SetFilterCutoffFrequency(float InFrequency);                                                                     // [0x4d490d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm
	// void SetFilterAlgorithm(ESubmixFilterAlgorithm InAlgorithm);                                                          // [0x4d49050] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Synthesis.SubmixEffectFlexiverbSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSubmixEffectFlexiverbSettings
{ 
	float                                              PreDelay;                                                   // 0x0000   (0x0004)  
	float                                              DecayTime;                                                  // 0x0004   (0x0004)  
	float                                              RoomDampening;                                              // 0x0008   (0x0004)  
	int32_t                                            Complexity;                                                 // 0x000C   (0x0004)  
};

/// Class /Script/Synthesis.SubmixEffectFlexiverbPreset
/// Size: 0x0048 (0x000070 - 0x0000B8)
class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0070   (0x0038)  MISSED
	FSubmixEffectFlexiverbSettings                     Settings;                                                   // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/Synthesis.SubmixEffectFlexiverbPreset.SetSettings
	// void SetSettings(FSubmixEffectFlexiverbSettings& InSettings);                                                         // [0x4d49990] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.DynamicsBandSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FDynamicsBandSettings
{ 
	float                                              CrossoverTopFrequency;                                      // 0x0000   (0x0004)  
	float                                              AttackTimeMsec;                                             // 0x0004   (0x0004)  
	float                                              ReleaseTimeMsec;                                            // 0x0008   (0x0004)  
	float                                              ThresholdDb;                                                // 0x000C   (0x0004)  
	float                                              Ratio;                                                      // 0x0010   (0x0004)  
	float                                              KneeBandwidthDb;                                            // 0x0014   (0x0004)  
	float                                              InputGainDb;                                                // 0x0018   (0x0004)  
	float                                              OutputGainDb;                                               // 0x001C   (0x0004)  
};

/// Struct /Script/Synthesis.SubmixEffectMultibandCompressorSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSubmixEffectMultibandCompressorSettings
{ 
	ESubmixEffectDynamicsProcessorType                 DynamicsProcessorType;                                      // 0x0000   (0x0001)  
	ESubmixEffectDynamicsPeakMode                      PeakMode;                                                   // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              LookAheadMsec;                                              // 0x0004   (0x0004)  
	bool                                               bLinkChannels;                                              // 0x0008   (0x0001)  
	bool                                               bAnalogMode;                                                // 0x0009   (0x0001)  
	bool                                               bFourPole;                                                  // 0x000A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x000B   (0x0005)  MISSED
	TArray<FDynamicsBandSettings>                      Bands;                                                      // 0x0010   (0x0010)  
};

/// Class /Script/Synthesis.SubmixEffectMultibandCompressorPreset
/// Size: 0x0068 (0x000070 - 0x0000D8)
class USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x0070   (0x0048)  MISSED
	FSubmixEffectMultibandCompressorSettings           Settings;                                                   // 0x00B8   (0x0020)  


	/// Functions
	// Function /Script/Synthesis.SubmixEffectMultibandCompressorPreset.SetSettings
	// void SetSettings(FSubmixEffectMultibandCompressorSettings& InSettings);                                               // [0x4d49a50] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SubmixEffectStereoDelaySettings
/// Size: 0x0024 (0x000000 - 0x000024)
struct FSubmixEffectStereoDelaySettings
{ 
	EStereoDelaySourceEffect                           DelayMode;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              DelayTimeMsec;                                              // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	float                                              DelayRatio;                                                 // 0x000C   (0x0004)  
	float                                              WetLevel;                                                   // 0x0010   (0x0004)  
	float                                              DryLevel;                                                   // 0x0014   (0x0004)  
	bool                                               bFilterEnabled;                                             // 0x0018   (0x0001)  
	EStereoDelayFiltertype                             FilterType;                                                 // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x001A   (0x0002)  MISSED
	float                                              FilterFrequency;                                            // 0x001C   (0x0004)  
	float                                              FilterQ;                                                    // 0x0020   (0x0004)  
};

/// Class /Script/Synthesis.SubmixEffectStereoDelayPreset
/// Size: 0x0070 (0x000070 - 0x0000E0)
class USubmixEffectStereoDelayPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x4C];                                      // 0x0070   (0x004C)  MISSED
	FSubmixEffectStereoDelaySettings                   Settings;                                                   // 0x00BC   (0x0024)  


	/// Functions
	// Function /Script/Synthesis.SubmixEffectStereoDelayPreset.SetSettings
	// void SetSettings(FSubmixEffectStereoDelaySettings& InSettings);                                                       // [0x4d496b0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.TapDelayInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FTapDelayInfo
{ 
	ETapLineMode                                       TapLineMode;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              DelayLength;                                                // 0x0004   (0x0004)  
	float                                              Gain;                                                       // 0x0008   (0x0004)  
	int32_t                                            OutputChannel;                                              // 0x000C   (0x0004)  
	float                                              PanInDegrees;                                               // 0x0010   (0x0004)  
	int32_t                                            TapId;                                                      // 0x0014   (0x0004)  
};

/// Struct /Script/Synthesis.SubmixEffectTapDelaySettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSubmixEffectTapDelaySettings
{ 
	float                                              MaximumDelayLength;                                         // 0x0000   (0x0004)  
	float                                              InterpolationTime;                                          // 0x0004   (0x0004)  
	TArray<FTapDelayInfo>                              Taps;                                                       // 0x0008   (0x0010)  
};

/// Class /Script/Synthesis.SubmixEffectTapDelayPreset
/// Size: 0x0070 (0x000070 - 0x0000E0)
class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0070   (0x0040)  MISSED
	FSubmixEffectTapDelaySettings                      Settings;                                                   // 0x00B0   (0x0018)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x00C8   (0x0018)  MISSED


	/// Functions
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetTap
	// void SetTap(int32_t TapId, FTapDelayInfo& TapInfo);                                                                   // [0x4d49ce0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetSettings
	// void SetSettings(FSubmixEffectTapDelaySettings& InSettings);                                                          // [0x4d49b10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime
	// void SetInterpolationTime(float Time);                                                                                // [0x4d494f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.RemoveTap
	// void RemoveTap(int32_t TapId);                                                                                        // [0x4d48f40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetTapIds
	// void GetTapIds(TArray<int32_t>& TapIds);                                                                              // [0x4d48e50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetTap
	// void GetTap(int32_t TapId, FTapDelayInfo& TapInfo);                                                                   // [0x4d48d70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds
	// float GetMaxDelayInMilliseconds();                                                                                    // [0x4530250] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.AddTap
	// void AddTap(int32_t& TapId);                                                                                          // [0x4d48cc0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.Synth2DSliderStyle
/// Size: 0x02D8 (0x000008 - 0x0002E0)
struct FSynth2DSliderStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        NormalThumbImage;                                           // 0x0008   (0x0090)  
	FSlateBrush                                        DisabledThumbImage;                                         // 0x0098   (0x0090)  
	FSlateBrush                                        NormalBarImage;                                             // 0x0128   (0x0090)  
	FSlateBrush                                        DisabledBarImage;                                           // 0x01B8   (0x0090)  
	FSlateBrush                                        BackgroundImage;                                            // 0x0248   (0x0090)  
	float                                              BarThickness;                                               // 0x02D8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02DC   (0x0004)  MISSED
};

/// Class /Script/Synthesis.Synth2DSlider
/// Size: 0x03A0 (0x000130 - 0x0004D0)
class USynth2DSlider : public UWidget
{ 
public:
	float                                              ValueX;                                                     // 0x0130   (0x0004)  
	float                                              ValueY;                                                     // 0x0134   (0x0004)  
	SDK_UNDEFINED(20,5426) /* FDelegateProperty */     __um(ValueXDelegate);                                       // 0x0138   (0x0014)  
	SDK_UNDEFINED(20,5427) /* FDelegateProperty */     __um(ValueYDelegate);                                       // 0x014C   (0x0014)  
	FSynth2DSliderStyle                                WidgetStyle;                                                // 0x0160   (0x02E0)  
	FLinearColor                                       SliderHandleColor;                                          // 0x0440   (0x0010)  
	bool                                               IndentHandle;                                               // 0x0450   (0x0001)  
	bool                                               locked;                                                     // 0x0451   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0452   (0x0002)  MISSED
	float                                              StepSize;                                                   // 0x0454   (0x0004)  
	bool                                               IsFocusable;                                                // 0x0458   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0459   (0x0007)  MISSED
	SDK_UNDEFINED(16,5428) /* FMulticastInlineDelegate */ __um(OnMouseCaptureBegin);                               // 0x0460   (0x0010)  
	SDK_UNDEFINED(16,5429) /* FMulticastInlineDelegate */ __um(OnMouseCaptureEnd);                                 // 0x0470   (0x0010)  
	SDK_UNDEFINED(16,5430) /* FMulticastInlineDelegate */ __um(OnControllerCaptureBegin);                          // 0x0480   (0x0010)  
	SDK_UNDEFINED(16,5431) /* FMulticastInlineDelegate */ __um(OnControllerCaptureEnd);                            // 0x0490   (0x0010)  
	SDK_UNDEFINED(16,5432) /* FMulticastInlineDelegate */ __um(OnValueChangedX);                                   // 0x04A0   (0x0010)  
	SDK_UNDEFINED(16,5433) /* FMulticastInlineDelegate */ __um(OnValueChangedY);                                   // 0x04B0   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x04C0   (0x0010)  MISSED


	/// Functions
	// Function /Script/Synthesis.Synth2DSlider.SetValue
	// void SetValue(FVector2D InValue);                                                                                     // [0x4d49dc0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.SetStepSize
	// void SetStepSize(float InValue);                                                                                      // [0x4d49c60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.SetSliderHandleColor
	// void SetSliderHandleColor(FLinearColor InValue);                                                                      // [0x4d49bd0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.SetLocked
	// void SetLocked(bool InValue);                                                                                         // [0x4d49570] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.SetIndentHandle
	// void SetIndentHandle(bool InValue);                                                                                   // [0x4d493e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.GetValue
	// FVector2D GetValue();                                                                                                 // [0x4d48f00] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Synthesis.GranularSynth
/// Size: 0x03C0 (0x0006E0 - 0x000AA0)
class UGranularSynth : public USynthComponent
{ 
public:
	class USoundWave*                                  GranulatedSoundWave;                                        // 0x06E0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x3B8];                                     // 0x06E8   (0x03B8)  MISSED


	/// Functions
	// Function /Script/Synthesis.GranularSynth.SetSustainGain
	// void SetSustainGain(float SustainGain);                                                                               // [0x4d4e2a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetSoundWave
	// void SetSoundWave(class USoundWave* InSoundWave);                                                                     // [0x4d4e180] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetScrubMode
	// void SetScrubMode(bool bScrubMode);                                                                                   // [0x4d4dfe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetReleaseTimeMsec
	// void SetReleaseTimeMsec(float ReleaseTimeMsec);                                                                       // [0x4d4df60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetPlayheadTime
	// void SetPlayheadTime(float InPositionSec, float LerpTimeSec, EGranularSynthSeekType SeekType);                        // [0x4d4d8b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetPlaybackSpeed
	// void SetPlaybackSpeed(float InPlayheadRate);                                                                          // [0x4d4d830] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainVolume
	// void SetGrainVolume(float BaseVolume, FVector2D VolumeRange);                                                         // [0x4d4d5a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainsPerSecond
	// void SetGrainsPerSecond(float InGrainsPerSecond);                                                                     // [0x4d4d660] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainProbability
	// void SetGrainProbability(float InGrainProbability);                                                                   // [0x4d4d520] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainPitch
	// void SetGrainPitch(float BasePitch, FVector2D PitchRange);                                                            // [0x4d4d460] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainPan
	// void SetGrainPan(float BasePan, FVector2D PanRange);                                                                  // [0x4d4d3a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainEnvelopeType
	// void SetGrainEnvelopeType(EGranularSynthEnvelopeType EnvelopeType);                                                   // [0x4d4d320] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainDuration
	// void SetGrainDuration(float BaseDurationMsec, FVector2D DurationRange);                                               // [0x4d4d260] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetDecayTime
	// void SetDecayTime(float DecayTimeMsec);                                                                               // [0x4d4c910] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetAttackTime
	// void SetAttackTime(float AttackTimeMsec);                                                                             // [0x4d4c910] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.NoteOn
	// void NoteOn(float Note, int32_t Velocity, float Duration);                                                            // [0x4d4c130] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.NoteOff
	// void NoteOff(float Note, bool bKill);                                                                                 // [0x4d4bfd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.IsLoaded
	// bool IsLoaded();                                                                                                      // [0x4d4bf70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.GranularSynth.GetSampleDuration
	// float GetSampleDuration();                                                                                            // [0x4d4bf10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.GranularSynth.GetCurrentPlayheadTime
	// float GetCurrentPlayheadTime();                                                                                       // [0x4d4b990] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Synthesis.MonoWaveTableSynthPreset
/// Size: 0x0148 (0x000030 - 0x000178)
class UMonoWaveTableSynthPreset : public UObject
{ 
public:
	SDK_UNDEFINED(16,5434) /* FString */               __um(PresetName);                                           // 0x0030   (0x0010)  
	bool                                               bLockKeyframesToGridBool : 1;                               // 0x0040:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0041   (0x0003)  MISSED
	int32_t                                            LockKeyframesToGrid;                                        // 0x0044   (0x0004)  
	int32_t                                            WaveTableResolution;                                        // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	TArray<FRuntimeFloatCurve>                         WaveTable;                                                  // 0x0050   (0x0010)  
	bool                                               bNormalizeWaveTables : 1;                                   // 0x0060:0 (0x0001)  
	unsigned char                                      UnknownData02_6[0x117];                                     // 0x0061   (0x0117)  MISSED
};

/// Class /Script/Synthesis.SynthComponentMonoWaveTable
/// Size: 0x0740 (0x0006E0 - 0x000E20)
class USynthComponentMonoWaveTable : public USynthComponent
{ 
public:
	SDK_UNDEFINED(16,5435) /* FMulticastInlineDelegate */ __um(OnTableAltered);                                    // 0x06E0   (0x0010)  
	SDK_UNDEFINED(16,5436) /* FMulticastInlineDelegate */ __um(OnNumTablesChanged);                                // 0x06F0   (0x0010)  
	class UMonoWaveTableSynthPreset*                   CurrentPreset;                                              // 0x0700   (0x0008)  
	unsigned char                                      UnknownData00_6[0x718];                                     // 0x0708   (0x0718)  MISSED


	/// Functions
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition
	// void SetWaveTablePosition(float InPosition);                                                                          // [0x4d4e430] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState
	// void SetSustainPedalState(bool InSustainPedalState);                                                                  // [0x4d4e320] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoType
	// void SetPosLfoType(ESynthLFOType InLfoType);                                                                          // [0x4d4dac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency
	// void SetPosLfoFrequency(float InLfoFrequency);                                                                        // [0x4d4da40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth
	// void SetPosLfoDepth(float InLfoDepth);                                                                                // [0x4d4d9c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain
	// void SetPositionEnvelopeSustainGain(float InSustainGain);                                                             // [0x4d4dee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime
	// void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec);                                                         // [0x4d4de60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert
	// void SetPositionEnvelopeInvert(bool bInInvert);                                                                       // [0x4d4ddd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth
	// void SetPositionEnvelopeDepth(float InDepth);                                                                         // [0x4d4dd50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime
	// void SetPositionEnvelopeDecayTime(float InDecayTimeMsec);                                                             // [0x4d4dcd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert
	// void SetPositionEnvelopeBiasInvert(bool bInBiasInvert);                                                               // [0x4d4dc40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth
	// void SetPositionEnvelopeBiasDepth(float InDepth);                                                                     // [0x4d4dbc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime
	// void SetPositionEnvelopeAttackTime(float InAttackTimeMsec);                                                           // [0x4d4db40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance
	// void SetLowPassFilterResonance(float InNewQ);                                                                         // [0x4d4d6e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote
	// void SetFrequencyWithMidiNote(float InMidiNote);                                                                      // [0x4d4d1e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend
	// void SetFrequencyPitchBend(float FrequencyOffsetCents);                                                               // [0x4d4d160] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequency
	// void SetFrequency(float FrequencyHz);                                                                                 // [0x4d4d060] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain
	// void SetFilterEnvelopeSustainGain(float InSustainGain);                                                               // [0x4d4cf60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime
	// void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec);                                                           // [0x4d4cee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime
	// void SetFilterEnvelopenDecayTime(float InDecayTimeMsec);                                                              // [0x4d4cfe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert
	// void SetFilterEnvelopeInvert(bool bInInvert);                                                                         // [0x4d4ce50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth
	// void SetFilterEnvelopeDepth(float InDepth);                                                                           // [0x4d4cdd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert
	// void SetFilterEnvelopeBiasInvert(bool bInBiasInvert);                                                                 // [0x4d4cd40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth
	// void SetFilterEnvelopeBiasDepth(float InDepth);                                                                       // [0x4d4ccc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime
	// void SetFilterEnvelopeAttackTime(float InAttackTimeMsec);                                                             // [0x4d4cc40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveValue
	// bool SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue);                                        // [0x4d4cb30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveTangent
	// bool SetCurveTangent(int32_t TableIndex, float InNewTangent);                                                         // [0x4d4ca60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType
	// bool SetCurveInterpolationType(CurveInterpolationType InterpolationType, int32_t TableIndex);                         // [0x4d4c990] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain
	// void SetAmpEnvelopeSustainGain(float InSustainGain);                                                                  // [0x4d4c890] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime
	// void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec);                                                              // [0x4d4c810] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert
	// void SetAmpEnvelopeInvert(bool bInInvert);                                                                            // [0x4d4c780] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth
	// void SetAmpEnvelopeDepth(float InDepth);                                                                              // [0x4d4c700] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime
	// void SetAmpEnvelopeDecayTime(float InDecayTimeMsec);                                                                  // [0x4d4c680] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert
	// void SetAmpEnvelopeBiasInvert(bool bInBiasInvert);                                                                    // [0x4d4c5f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth
	// void SetAmpEnvelopeBiasDepth(float InDepth);                                                                          // [0x4d4c570] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime
	// void SetAmpEnvelopeAttackTime(float InAttackTimeMsec);                                                                // [0x4d4c4f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable
	// void RefreshWaveTable(int32_t index);                                                                                 // [0x4d4c340] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables
	// void RefreshAllWaveTables();                                                                                          // [0x4d4c320] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.NoteOn
	// void NoteOn(float InMidiNote, float InVelocity);                                                                      // [0x4d4c250] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.NoteOff
	// void NoteOff(float InMidiNote);                                                                                       // [0x4d4c0b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries
	// int32_t GetNumTableEntries();                                                                                         // [0x4d4bee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex
	// int32_t GetMaxTableIndex();                                                                                           // [0x4d4bea0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable
	// TArray<float> GetKeyFrameValuesForTable(float TableIndex);                                                            // [0x4d4ba60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetCurveTangent
	// float GetCurveTangent(int32_t TableIndex);                                                                            // [0x4d4b9c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SynthComponentToneGenerator
/// Size: 0x0020 (0x0006E0 - 0x000700)
class USynthComponentToneGenerator : public USynthComponent
{ 
public:
	float                                              Frequency;                                                  // 0x06E0   (0x0004)  
	float                                              Volume;                                                     // 0x06E4   (0x0004)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x06E8   (0x0018)  MISSED


	/// Functions
	// Function /Script/Synthesis.SynthComponentToneGenerator.SetVolume
	// void SetVolume(float InVolume);                                                                                       // [0x4d4e3b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentToneGenerator.SetFrequency
	// void SetFrequency(float InFrequency);                                                                                 // [0x4d4d0e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SynthSamplePlayer
/// Size: 0x0130 (0x0006E0 - 0x000810)
class USynthSamplePlayer : public USynthComponent
{ 
public:
	class USoundWave*                                  SoundWave;                                                  // 0x06E0   (0x0008)  
	SDK_UNDEFINED(16,5437) /* FMulticastInlineDelegate */ __um(OnSampleLoaded);                                    // 0x06E8   (0x0010)  
	SDK_UNDEFINED(16,5438) /* FMulticastInlineDelegate */ __um(OnSamplePlaybackProgress);                          // 0x06F8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x108];                                     // 0x0708   (0x0108)  MISSED


	/// Functions
	// Function /Script/Synthesis.SynthSamplePlayer.SetSoundWave
	// void SetSoundWave(class USoundWave* InSoundWave);                                                                     // [0x4d4e210] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.SetScrubTimeWidth
	// void SetScrubTimeWidth(float InScrubTimeWidthSec);                                                                    // [0x4d4e100] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.SetScrubMode
	// void SetScrubMode(bool bScrubMode);                                                                                   // [0x4d4e070] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.SetPitch
	// void SetPitch(float InPitch, float TimeSec);                                                                          // [0x4d4d760] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.SeekToTime
	// void SeekToTime(float TimeSec, ESamplePlayerSeekType SeekType, bool bWrap);                                           // [0x4d4c3d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.IsLoaded
	// bool IsLoaded();                                                                                                      // [0x4d4bfa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthSamplePlayer.GetSampleDuration
	// float GetSampleDuration();                                                                                            // [0x4d4bf40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime
	// float GetCurrentPlaybackProgressTime();                                                                               // [0x4d4b960] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent
	// float GetCurrentPlaybackProgressPercent();                                                                            // [0x4d4b930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class USynthesisUtilitiesBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLogFrequency
	// float GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax); // [0x4d4bcf0] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLinearFrequency
	// float GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax); // [0x4d4bb40] Final|Native|Static|Private|BlueprintCallable 
};

/// Struct /Script/Synthesis.SynthKnobStyle
/// Size: 0x0250 (0x000008 - 0x000258)
struct FSynthKnobStyle : FSlateWidgetStyle
{ 
	FSlateBrush                                        LargeKnob;                                                  // 0x0008   (0x0090)  
	FSlateBrush                                        LargeKnobOverlay;                                           // 0x0098   (0x0090)  
	FSlateBrush                                        MediumKnob;                                                 // 0x0128   (0x0090)  
	FSlateBrush                                        MediumKnobOverlay;                                          // 0x01B8   (0x0090)  
	float                                              MinValueAngle;                                              // 0x0248   (0x0004)  
	float                                              MaxValueAngle;                                              // 0x024C   (0x0004)  
	ESynthKnobSize                                     KnobSize;                                                   // 0x0250   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0251   (0x0007)  MISSED
};

/// Class /Script/Synthesis.SynthKnob
/// Size: 0x0320 (0x000130 - 0x000450)
class USynthKnob : public UWidget
{ 
public:
	float                                              value;                                                      // 0x0130   (0x0004)  
	float                                              StepSize;                                                   // 0x0134   (0x0004)  
	float                                              MouseSpeed;                                                 // 0x0138   (0x0004)  
	float                                              MouseFineTuneSpeed;                                         // 0x013C   (0x0004)  
	bool                                               ShowTooltipInfo : 1;                                        // 0x0140:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0141   (0x0007)  MISSED
	SDK_UNDEFINED(24,5439) /* FText */                 __um(ParameterName);                                        // 0x0148   (0x0018)  
	SDK_UNDEFINED(24,5440) /* FText */                 __um(ParameterUnits);                                       // 0x0160   (0x0018)  
	SDK_UNDEFINED(20,5441) /* FDelegateProperty */     __um(ValueDelegate);                                        // 0x0178   (0x0014)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x018C   (0x0004)  MISSED
	FSynthKnobStyle                                    WidgetStyle;                                                // 0x0190   (0x0258)  
	bool                                               locked;                                                     // 0x03E8   (0x0001)  
	bool                                               IsFocusable;                                                // 0x03E9   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x03EA   (0x0006)  MISSED
	SDK_UNDEFINED(16,5442) /* FMulticastInlineDelegate */ __um(OnMouseCaptureBegin);                               // 0x03F0   (0x0010)  
	SDK_UNDEFINED(16,5443) /* FMulticastInlineDelegate */ __um(OnMouseCaptureEnd);                                 // 0x0400   (0x0010)  
	SDK_UNDEFINED(16,5444) /* FMulticastInlineDelegate */ __um(OnControllerCaptureBegin);                          // 0x0410   (0x0010)  
	SDK_UNDEFINED(16,5445) /* FMulticastInlineDelegate */ __um(OnControllerCaptureEnd);                            // 0x0420   (0x0010)  
	SDK_UNDEFINED(16,5446) /* FMulticastInlineDelegate */ __um(OnValueChanged);                                    // 0x0430   (0x0010)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0440   (0x0010)  MISSED


	/// Functions
	// Function /Script/Synthesis.SynthKnob.SetValue
	// void SetValue(float InValue);                                                                                         // [0x4d4ed50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthKnob.SetStepSize
	// void SetStepSize(float InValue);                                                                                      // [0x4d4ecd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthKnob.SetLocked
	// void SetLocked(bool InValue);                                                                                         // [0x4d4ec40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthKnob.GetValue
	// float GetValue();                                                                                                     // [0x4d4ec10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/Synthesis.PatchId
/// Size: 0x0004 (0x000000 - 0x000004)
struct FPatchId
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectBitCrusherBaseSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FSourceEffectBitCrusherBaseSettings
{ 
	float                                              SampleRate;                                                 // 0x0000   (0x0004)  
	float                                              BitDepth;                                                   // 0x0004   (0x0004)  
};

/// Struct /Script/Synthesis.SourceEffectChorusBaseSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FSourceEffectChorusBaseSettings
{ 
	float                                              Depth;                                                      // 0x0000   (0x0004)  
	float                                              Frequency;                                                  // 0x0004   (0x0004)  
	float                                              Feedback;                                                   // 0x0008   (0x0004)  
	float                                              WetLevel;                                                   // 0x000C   (0x0004)  
	float                                              DryLevel;                                                   // 0x0010   (0x0004)  
	float                                              Spread;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/Synthesis.SynthSlateStyle
/// Size: 0x0008 (0x000008 - 0x000010)
struct FSynthSlateStyle : FSlateWidgetStyle
{ 
	ESynthSlateSizeType                                SizeType;                                                   // 0x0008   (0x0001)  
	ESynthSlateColorStyle                              ColorStyle;                                                 // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
};

