
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene
/// dependency: SlateCore
/// dependency: UMG

/// Enum /Script/AkAudio.EAkCallbackType
/// Size: 0x14
enum class EAkCallbackType : uint8_t
{
	EAkCallbackType__EndOfEvent                                                      = 0,
	EAkCallbackType__Marker                                                          = 2,
	EAkCallbackType__Duration                                                        = 3,
	EAkCallbackType__Starvation                                                      = 5,
	EAkCallbackType__MusicPlayStarted                                                = 7,
	EAkCallbackType__MusicSyncBeat                                                   = 8,
	EAkCallbackType__MusicSyncBar                                                    = 9,
	EAkCallbackType__MusicSyncEntry                                                  = 10,
	EAkCallbackType__MusicSyncExit                                                   = 11,
	EAkCallbackType__MusicSyncGrid                                                   = 12,
	EAkCallbackType__MusicSyncUserCue                                                = 13,
	EAkCallbackType__MusicSyncPoint                                                  = 14,
	EAkCallbackType__MIDIEvent                                                       = 16,
	EAkCallbackType__EAkCallbackType_MAX                                             = 17
};

/// Enum /Script/AkAudio.EAkResult
/// Size: 0x59
enum class EAkResult : uint8_t
{
	EAkResult__NotImplemented                                                        = 0,
	EAkResult__Success                                                               = 1,
	EAkResult__Fail                                                                  = 2,
	EAkResult__PartialSuccess                                                        = 3,
	EAkResult__NotCompatible                                                         = 4,
	EAkResult__AlreadyConnected                                                      = 5,
	EAkResult__InvalidFile                                                           = 7,
	EAkResult__AudioFileHeaderTooLarge                                               = 8,
	EAkResult__MaxReached                                                            = 9,
	EAkResult__InvalidID                                                             = 14,
	EAkResult__IDNotFound                                                            = 15,
	EAkResult__InvalidInstanceID                                                     = 16,
	EAkResult__NoMoreData                                                            = 17,
	EAkResult__InvalidStateGroup                                                     = 20,
	EAkResult__ChildAlreadyHasAParent                                                = 21,
	EAkResult__InvalidLanguage                                                       = 22,
	EAkResult__CannotAddItseflAsAChild                                               = 23,
	EAkResult__InvalidParameter                                                      = 31,
	EAkResult__ElementAlreadyInList                                                  = 35,
	EAkResult__PathNotFound                                                          = 36,
	EAkResult__PathNoVertices                                                        = 37,
	EAkResult__PathNotRunning                                                        = 38,
	EAkResult__PathNotPaused                                                         = 39,
	EAkResult__PathNodeAlreadyInList                                                 = 40,
	EAkResult__PathNodeNotInList                                                     = 41,
	EAkResult__DataNeeded                                                            = 43,
	EAkResult__NoDataNeeded                                                          = 44,
	EAkResult__DataReady                                                             = 45,
	EAkResult__NoDataReady                                                           = 46,
	EAkResult__InsufficientMemory                                                    = 52,
	EAkResult__Cancelled                                                             = 53,
	EAkResult__UnknownBankID                                                         = 54,
	EAkResult__BankReadError                                                         = 56,
	EAkResult__InvalidSwitchType                                                     = 57,
	EAkResult__FormatNotReady                                                        = 63,
	EAkResult__WrongBankVersion                                                      = 64,
	EAkResult__FileNotFound                                                          = 66,
	EAkResult__DeviceNotReady                                                        = 67,
	EAkResult__BankAlreadyLoaded                                                     = 69,
	EAkResult__RenderedFX                                                            = 71,
	EAkResult__ProcessNeeded                                                         = 72,
	EAkResult__ProcessDone                                                           = 73,
	EAkResult__MemManagerNotInitialized                                              = 74,
	EAkResult__StreamMgrNotInitialized                                               = 75,
	EAkResult__SSEInstructionsNotSupported                                           = 76,
	EAkResult__Busy                                                                  = 77,
	EAkResult__UnsupportedChannelConfig                                              = 78,
	EAkResult__PluginMediaNotAvailable                                               = 79,
	EAkResult__MustBeVirtualized                                                     = 80,
	EAkResult__CommandTooLarge                                                       = 81,
	EAkResult__RejectedByFilter                                                      = 82,
	EAkResult__InvalidCustomPlatformName                                             = 83,
	EAkResult__DLLCannotLoad                                                         = 84,
	EAkResult__DLLPathNotFound                                                       = 85,
	EAkResult__NoJavaVM                                                              = 86,
	EAkResult__OpenSLError                                                           = 87,
	EAkResult__PluginNotRegistered                                                   = 88,
	EAkResult__DataAlignmentError                                                    = 89,
	EAkResult__EAkResult_MAX                                                         = 90
};

/// Enum /Script/AkAudio.EAkAndroidAudioAPI
/// Size: 0x03
enum class EAkAndroidAudioAPI : uint8_t
{
	EAkAndroidAudioAPI__AAudio                                                       = 0,
	EAkAndroidAudioAPI__OpenSL_ES                                                    = 1,
	EAkAndroidAudioAPI__EAkAndroidAudioAPI_MAX                                       = 2
};

/// Enum /Script/AkAudio.EAkAudioSessionMode
/// Size: 0x08
enum class EAkAudioSessionMode : uint32_t
{
	EAkAudioSessionMode__Default                                                     = 0,
	EAkAudioSessionMode__VoiceChat                                                   = 1,
	EAkAudioSessionMode__GameChat                                                    = 2,
	EAkAudioSessionMode__VideoRecording                                              = 3,
	EAkAudioSessionMode__Measurement                                                 = 4,
	EAkAudioSessionMode__MoviePlayback                                               = 5,
	EAkAudioSessionMode__VideoChat                                                   = 6,
	EAkAudioSessionMode__EAkAudioSessionMode_MAX                                     = 7
};

/// Enum /Script/AkAudio.EAkAudioSessionCategoryOptions
/// Size: 0x05
enum class EAkAudioSessionCategoryOptions : uint8_t
{
	EAkAudioSessionCategoryOptions__MixWithOthers                                    = 0,
	EAkAudioSessionCategoryOptions__DuckOthers                                       = 1,
	EAkAudioSessionCategoryOptions__AllowBluetooth                                   = 2,
	EAkAudioSessionCategoryOptions__DefaultToSpeaker                                 = 3,
	EAkAudioSessionCategoryOptions__EAkAudioSessionCategoryOptions_MAX               = 4
};

/// Enum /Script/AkAudio.EAkAudioSessionCategory
/// Size: 0x04
enum class EAkAudioSessionCategory : uint32_t
{
	EAkAudioSessionCategory__Ambient                                                 = 0,
	EAkAudioSessionCategory__SoloAmbient                                             = 1,
	EAkAudioSessionCategory__PlayAndRecord                                           = 2,
	EAkAudioSessionCategory__EAkAudioSessionCategory_MAX                             = 3
};

/// Enum /Script/AkAudio.EReflectionFilterBits
/// Size: 0x04
enum class EReflectionFilterBits : uint8_t
{
	EReflectionFilterBits__Wall                                                      = 0,
	EReflectionFilterBits__Ceiling                                                   = 1,
	EReflectionFilterBits__Floor                                                     = 2,
	EReflectionFilterBits__EReflectionFilterBits_MAX                                 = 3
};

/// Enum /Script/AkAudio.AkCodecId
/// Size: 0x11
enum class AkCodecId : uint8_t
{
	AkCodecId__None                                                                  = 0,
	AkCodecId__PCM                                                                   = 1,
	AkCodecId__ADPCM                                                                 = 2,
	AkCodecId__XMA                                                                   = 3,
	AkCodecId__Vorbis                                                                = 4,
	AkCodecId__AAC                                                                   = 10,
	AkCodecId__ATRAC9                                                                = 12,
	AkCodecId__OpusNX                                                                = 17,
	AkCodecId__AkOpus                                                                = 19,
	AkCodecId__AkOpusWEM                                                             = 20,
	AkCodecId__AkCodecId_MAX                                                         = 21
};

/// Enum /Script/AkAudio.EAkMidiCcValues
/// Size: 0x98
enum class EAkMidiCcValues : uint8_t
{
	EAkMidiCcValues__AkMidiCcBankSelectCoarse                                        = 0,
	EAkMidiCcValues__AkMidiCcModWheelCoarse                                          = 1,
	EAkMidiCcValues__AkMidiCcBreathCtrlCoarse                                        = 2,
	EAkMidiCcValues__AkMidiCcCtrl3Coarse                                             = 3,
	EAkMidiCcValues__AkMidiCcFootPedalCoarse                                         = 4,
	EAkMidiCcValues__AkMidiCcPortamentoCoarse                                        = 5,
	EAkMidiCcValues__AkMidiCcDataEntryCoarse                                         = 6,
	EAkMidiCcValues__AkMidiCcVolumeCoarse                                            = 7,
	EAkMidiCcValues__AkMidiCcBalanceCoarse                                           = 8,
	EAkMidiCcValues__AkMidiCcCtrl9Coarse                                             = 9,
	EAkMidiCcValues__AkMidiCcPanPositionCoarse                                       = 10,
	EAkMidiCcValues__AkMidiCcExpressionCoarse                                        = 11,
	EAkMidiCcValues__AkMidiCcEffectCtrl1Coarse                                       = 12,
	EAkMidiCcValues__AkMidiCcEffectCtrl2Coarse                                       = 13,
	EAkMidiCcValues__AkMidiCcCtrl14Coarse                                            = 14,
	EAkMidiCcValues__AkMidiCcCtrl15Coarse                                            = 15,
	EAkMidiCcValues__AkMidiCcGenSlider1                                              = 16,
	EAkMidiCcValues__AkMidiCcGenSlider2                                              = 17,
	EAkMidiCcValues__AkMidiCcGenSlider3                                              = 18,
	EAkMidiCcValues__AkMidiCcGenSlider4                                              = 19,
	EAkMidiCcValues__AkMidiCcCtrl20Coarse                                            = 20,
	EAkMidiCcValues__AkMidiCcCtrl21Coarse                                            = 21,
	EAkMidiCcValues__AkMidiCcCtrl22Coarse                                            = 22,
	EAkMidiCcValues__AkMidiCcCtrl23Coarse                                            = 23,
	EAkMidiCcValues__AkMidiCcCtrl24Coarse                                            = 24,
	EAkMidiCcValues__AkMidiCcCtrl25Coarse                                            = 25,
	EAkMidiCcValues__AkMidiCcCtrl26Coarse                                            = 26,
	EAkMidiCcValues__AkMidiCcCtrl27Coarse                                            = 27,
	EAkMidiCcValues__AkMidiCcCtrl28Coarse                                            = 28,
	EAkMidiCcValues__AkMidiCcCtrl29Coarse                                            = 29,
	EAkMidiCcValues__AkMidiCcCtrl30Coarse                                            = 30,
	EAkMidiCcValues__AkMidiCcCtrl31Coarse                                            = 31,
	EAkMidiCcValues__AkMidiCcBankSelectFine                                          = 32,
	EAkMidiCcValues__AkMidiCcModWheelFine                                            = 33,
	EAkMidiCcValues__AkMidiCcBreathCtrlFine                                          = 34,
	EAkMidiCcValues__AkMidiCcCtrl3Fine                                               = 35,
	EAkMidiCcValues__AkMidiCcFootPedalFine                                           = 36,
	EAkMidiCcValues__AkMidiCcPortamentoFine                                          = 37,
	EAkMidiCcValues__AkMidiCcDataEntryFine                                           = 38,
	EAkMidiCcValues__AkMidiCcVolumeFine                                              = 39,
	EAkMidiCcValues__AkMidiCcBalanceFine                                             = 40,
	EAkMidiCcValues__AkMidiCcCtrl9Fine                                               = 41,
	EAkMidiCcValues__AkMidiCcPanPositionFine                                         = 42,
	EAkMidiCcValues__AkMidiCcExpressionFine                                          = 43,
	EAkMidiCcValues__AkMidiCcEffectCtrl1Fine                                         = 44,
	EAkMidiCcValues__AkMidiCcEffectCtrl2Fine                                         = 45,
	EAkMidiCcValues__AkMidiCcCtrl14Fine                                              = 46,
	EAkMidiCcValues__AkMidiCcCtrl15Fine                                              = 47,
	EAkMidiCcValues__AkMidiCcCtrl20Fine                                              = 52,
	EAkMidiCcValues__AkMidiCcCtrl21Fine                                              = 53,
	EAkMidiCcValues__AkMidiCcCtrl22Fine                                              = 54,
	EAkMidiCcValues__AkMidiCcCtrl23Fine                                              = 55,
	EAkMidiCcValues__AkMidiCcCtrl24Fine                                              = 56,
	EAkMidiCcValues__AkMidiCcCtrl25Fine                                              = 57,
	EAkMidiCcValues__AkMidiCcCtrl26Fine                                              = 58,
	EAkMidiCcValues__AkMidiCcCtrl27Fine                                              = 59,
	EAkMidiCcValues__AkMidiCcCtrl28Fine                                              = 60,
	EAkMidiCcValues__AkMidiCcCtrl29Fine                                              = 61,
	EAkMidiCcValues__AkMidiCcCtrl30Fine                                              = 62,
	EAkMidiCcValues__AkMidiCcCtrl31Fine                                              = 63,
	EAkMidiCcValues__AkMidiCcHoldPedal                                               = 64,
	EAkMidiCcValues__AkMidiCcPortamentoOnOff                                         = 65,
	EAkMidiCcValues__AkMidiCcSustenutoPedal                                          = 66,
	EAkMidiCcValues__AkMidiCcSoftPedal                                               = 67,
	EAkMidiCcValues__AkMidiCcLegatoPedal                                             = 68,
	EAkMidiCcValues__AkMidiCcHoldPedal2                                              = 69,
	EAkMidiCcValues__AkMidiCcSoundVariation                                          = 70,
	EAkMidiCcValues__AkMidiCcSoundTimbre                                             = 71,
	EAkMidiCcValues__AkMidiCcSoundReleaseTime                                        = 72,
	EAkMidiCcValues__AkMidiCcSoundAttackTime                                         = 73,
	EAkMidiCcValues__AkMidiCcSoundBrightness                                         = 74,
	EAkMidiCcValues__AkMidiCcSoundCtrl6                                              = 75,
	EAkMidiCcValues__AkMidiCcSoundCtrl7                                              = 76,
	EAkMidiCcValues__AkMidiCcSoundCtrl8                                              = 77,
	EAkMidiCcValues__AkMidiCcSoundCtrl9                                              = 78,
	EAkMidiCcValues__AkMidiCcSoundCtrl10                                             = 79,
	EAkMidiCcValues__AkMidiCcGeneralButton1                                          = 80,
	EAkMidiCcValues__AkMidiCcGeneralButton2                                          = 81,
	EAkMidiCcValues__AkMidiCcGeneralButton3                                          = 82,
	EAkMidiCcValues__AkMidiCcGeneralButton4                                          = 83,
	EAkMidiCcValues__AkMidiCcReverbLevel                                             = 91,
	EAkMidiCcValues__AkMidiCcTremoloLevel                                            = 92,
	EAkMidiCcValues__AkMidiCcChorusLevel                                             = 93,
	EAkMidiCcValues__AkMidiCcCelesteLevel                                            = 94,
	EAkMidiCcValues__AkMidiCcPhaserLevel                                             = 95,
	EAkMidiCcValues__AkMidiCcDataButtonP1                                            = 96,
	EAkMidiCcValues__AkMidiCcDataButtonM1                                            = 97,
	EAkMidiCcValues__AkMidiCcNonRegisterCoarse                                       = 98,
	EAkMidiCcValues__AkMidiCcNonRegisterFine                                         = 99,
	EAkMidiCcValues__AkMidiCcAllSoundOff                                             = 120,
	EAkMidiCcValues__AkMidiCcAllControllersOff                                       = 121,
	EAkMidiCcValues__AkMidiCcLocalKeyboard                                           = 122,
	EAkMidiCcValues__AkMidiCcAllNotesOff                                             = 123,
	EAkMidiCcValues__AkMidiCcOmniModeOff                                             = 124,
	EAkMidiCcValues__AkMidiCcOmniModeOn                                              = 125,
	EAkMidiCcValues__AkMidiCcOmniMonophonicOn                                        = 126,
	EAkMidiCcValues__AkMidiCcOmniPolyphonicOn                                        = 127,
	EAkMidiCcValues__EAkMidiCcValues_MAX                                             = 128
};

/// Enum /Script/AkAudio.EAkMidiEventType
/// Size: 0x12
enum class EAkMidiEventType : uint8_t
{
	EAkMidiEventType__AkMidiEventTypeInvalid                                         = 0,
	EAkMidiEventType__AkMidiEventTypeNoteOff                                         = 128,
	EAkMidiEventType__AkMidiEventTypeNoteOn                                          = 144,
	EAkMidiEventType__AkMidiEventTypeNoteAftertouch                                  = 160,
	EAkMidiEventType__AkMidiEventTypeController                                      = 176,
	EAkMidiEventType__AkMidiEventTypeProgramChange                                   = 192,
	EAkMidiEventType__AkMidiEventTypeChannelAftertouch                               = 208,
	EAkMidiEventType__AkMidiEventTypePitchBend                                       = 224,
	EAkMidiEventType__AkMidiEventTypeSysex                                           = 240,
	EAkMidiEventType__AkMidiEventTypeEscape                                          = 247,
	EAkMidiEventType__AkMidiEventTypeMeta                                            = 255,
	EAkMidiEventType__EAkMidiEventType_MAX                                           = 256
};

/// Enum /Script/AkAudio.ERTPCValueType
/// Size: 0x06
enum class ERTPCValueType : uint8_t
{
	ERTPCValueType__Default                                                          = 0,
	ERTPCValueType__Global                                                           = 1,
	ERTPCValueType__GameObject                                                       = 2,
	ERTPCValueType__PlayingID                                                        = 3,
	ERTPCValueType__Unavailable                                                      = 4,
	ERTPCValueType__ERTPCValueType_MAX                                               = 5
};

/// Enum /Script/AkAudio.EAkCurveInterpolation
/// Size: 0x12
enum class EAkCurveInterpolation : uint8_t
{
	EAkCurveInterpolation__Log3                                                      = 0,
	EAkCurveInterpolation__Sine                                                      = 1,
	EAkCurveInterpolation__Log1                                                      = 2,
	EAkCurveInterpolation__InvSCurve                                                 = 3,
	EAkCurveInterpolation__Linear                                                    = 4,
	EAkCurveInterpolation__SCurve                                                    = 5,
	EAkCurveInterpolation__Exp1                                                      = 6,
	EAkCurveInterpolation__SineRecip                                                 = 7,
	EAkCurveInterpolation__Exp3                                                      = 8,
	EAkCurveInterpolation__LastFadeCurve                                             = 8,
	EAkCurveInterpolation__Constant                                                  = 9,
	EAkCurveInterpolation__EAkCurveInterpolation_MAX                                 = 10
};

/// Enum /Script/AkAudio.AkActionOnEventType
/// Size: 0x06
enum class AkActionOnEventType : uint8_t
{
	AkActionOnEventType__Stop                                                        = 0,
	AkActionOnEventType__Pause                                                       = 1,
	AkActionOnEventType__Resume                                                      = 2,
	AkActionOnEventType__Break                                                       = 3,
	AkActionOnEventType__ReleaseEnvelope                                             = 4,
	AkActionOnEventType__AkActionOnEventType_MAX                                     = 5
};

/// Enum /Script/AkAudio.AkMultiPositionType
/// Size: 0x04
enum class AkMultiPositionType : uint8_t
{
	AkMultiPositionType__SingleSource                                                = 0,
	AkMultiPositionType__MultiSources                                                = 1,
	AkMultiPositionType__MultiDirections                                             = 2,
	AkMultiPositionType__AkMultiPositionType_MAX                                     = 3
};

/// Enum /Script/AkAudio.AkSpeakerConfiguration
/// Size: 0x17
enum class AkSpeakerConfiguration : uint32_t
{
	AkSpeakerConfiguration__Ak_Speaker_Front_Left                                    = 1,
	AkSpeakerConfiguration__Ak_Speaker_Front_Right                                   = 2,
	AkSpeakerConfiguration__Ak_Speaker_Front_Center                                  = 4,
	AkSpeakerConfiguration__Ak_Speaker_Low_Frequency                                 = 8,
	AkSpeakerConfiguration__Ak_Speaker_Back_Left                                     = 16,
	AkSpeakerConfiguration__Ak_Speaker_Back_Right                                    = 32,
	AkSpeakerConfiguration__Ak_Speaker_Back_Center                                   = 256,
	AkSpeakerConfiguration__Ak_Speaker_Side_Left                                     = 512,
	AkSpeakerConfiguration__Ak_Speaker_Side_Right                                    = 1024,
	AkSpeakerConfiguration__Ak_Speaker_Top                                           = 2048,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Left                             = 4096,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Center                           = 8192,
	AkSpeakerConfiguration__Ak_Speaker_Height_Front_Right                            = 16384,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Left                              = 32768,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Center                            = 65536,
	AkSpeakerConfiguration__Ak_Speaker_Height_Back_Right                             = 131072,
	AkSpeakerConfiguration__Ak_Speaker_MAX                                           = 131073
};

/// Enum /Script/AkAudio.AkChannelConfiguration
/// Size: 0x28
enum class AkChannelConfiguration : uint8_t
{
	AkChannelConfiguration__Ak_Parent                                                = 0,
	AkChannelConfiguration__Ak_MainMix                                               = 1,
	AkChannelConfiguration__Ak_Passthrough                                           = 2,
	AkChannelConfiguration__Ak_LFE                                                   = 3,
	AkChannelConfiguration__AK_Audio_Objects                                         = 4,
	AkChannelConfiguration__Ak_1                                                     = 5,
	AkChannelConfiguration__Ak_2                                                     = 6,
	AkChannelConfiguration__Ak_28                                                    = 7,
	AkChannelConfiguration__Ak_3                                                     = 8,
	AkChannelConfiguration__Ak_310                                                   = 9,
	AkChannelConfiguration__Ak_4                                                     = 10,
	AkChannelConfiguration__Ak_412                                                   = 11,
	AkChannelConfiguration__Ak_5                                                     = 12,
	AkChannelConfiguration__Ak_514                                                   = 13,
	AkChannelConfiguration__Ak_7                                                     = 14,
	AkChannelConfiguration__Ak_5_1                                                   = 15,
	AkChannelConfiguration__Ak_7_1                                                   = 16,
	AkChannelConfiguration__Ak_7_118                                                 = 17,
	AkChannelConfiguration__Ak_Auro_9                                                = 18,
	AkChannelConfiguration__Ak_Auro_10                                               = 19,
	AkChannelConfiguration__Ak_Auro_11                                               = 20,
	AkChannelConfiguration__Ak_Auro_13                                               = 21,
	AkChannelConfiguration__Ak_Ambisonics_1st_order                                  = 22,
	AkChannelConfiguration__Ak_Ambisonics_2nd_order                                  = 23,
	AkChannelConfiguration__Ak_Ambisonics_3rd_order                                  = 24,
	AkChannelConfiguration__Ak_Ambisonics_4th_order                                  = 25,
	AkChannelConfiguration__Ak_Ambisonics_5th_order                                  = 26,
	AkChannelConfiguration__AkChannelConfiguration_MAX                               = 27
};

/// Enum /Script/AkAudio.AkAcousticPortalState
/// Size: 0x03
enum class AkAcousticPortalState : uint8_t
{
	AkAcousticPortalState__Closed                                                    = 0,
	AkAcousticPortalState__Open                                                      = 1,
	AkAcousticPortalState__AkAcousticPortalState_MAX                                 = 2
};

/// Enum /Script/AkAudio.PanningRule
/// Size: 0x03
enum class PanningRule : uint8_t
{
	PanningRule__PanningRule_Speakers                                                = 0,
	PanningRule__PanningRule_Headphones                                              = 1,
	PanningRule__PanningRule_MAX                                                     = 2
};

/// Enum /Script/AkAudio.EAkAudioContext
/// Size: 0x05
enum class EAkAudioContext : uint8_t
{
	EAkAudioContext__Foreign                                                         = 0,
	EAkAudioContext__GameplayAudio                                                   = 1,
	EAkAudioContext__EditorAudio                                                     = 2,
	EAkAudioContext__AlwaysActive                                                    = 3,
	EAkAudioContext__EAkAudioContext_MAX                                             = 4
};

/// Enum /Script/AkAudio.AkMeshType
/// Size: 0x03
enum class AkMeshType : uint8_t
{
	AkMeshType__StaticMesh                                                           = 0,
	AkMeshType__CollisionMesh                                                        = 1,
	AkMeshType__AkMeshType_MAX                                                       = 2
};

/// Enum /Script/AkAudio.EAkCommSystem
/// Size: 0x03
enum class EAkCommSystem : uint32_t
{
	EAkCommSystem__Socket                                                            = 0,
	EAkCommSystem__HTCS                                                              = 1,
	EAkCommSystem__EAkCommSystem_MAX                                                 = 2
};

/// Enum /Script/AkAudio.EAkChannelMask
/// Size: 0x17
enum class EAkChannelMask : uint8_t
{
	EAkChannelMask__FrontLeft                                                        = 0,
	EAkChannelMask__FrontRight                                                       = 1,
	EAkChannelMask__FrontCenter                                                      = 2,
	EAkChannelMask__LowFrequency                                                     = 3,
	EAkChannelMask__BackLeft                                                         = 4,
	EAkChannelMask__BackRight                                                        = 5,
	EAkChannelMask__BackCenter                                                       = 8,
	EAkChannelMask__SideLeft                                                         = 9,
	EAkChannelMask__SideRight                                                        = 10,
	EAkChannelMask__Top                                                              = 11,
	EAkChannelMask__HeightFrontLeft                                                  = 12,
	EAkChannelMask__HeightFrontCenter                                                = 13,
	EAkChannelMask__HeightFrontRight                                                 = 14,
	EAkChannelMask__HeightBackLeft                                                   = 15,
	EAkChannelMask__HeightBackCenter                                                 = 16,
	EAkChannelMask__HeightBackRight                                                  = 17,
	EAkChannelMask__EAkChannelMask_MAX                                               = 18
};

/// Enum /Script/AkAudio.EAkChannelConfigType
/// Size: 0x04
enum class EAkChannelConfigType : uint32_t
{
	EAkChannelConfigType__Anonymous                                                  = 0,
	EAkChannelConfigType__Standard                                                   = 1,
	EAkChannelConfigType__Ambisonic                                                  = 2,
	EAkChannelConfigType__EAkChannelConfigType_MAX                                   = 3
};

/// Enum /Script/AkAudio.EAkPanningRule
/// Size: 0x03
enum class EAkPanningRule : uint32_t
{
	EAkPanningRule__Speakers                                                         = 0,
	EAkPanningRule__Headphones                                                       = 1,
	EAkPanningRule__EAkPanningRule_MAX                                               = 2
};

/// Enum /Script/AkAudio.EAkFitToGeometryMode
/// Size: 0x04
enum class EAkFitToGeometryMode : uint8_t
{
	EAkFitToGeometryMode__OrientedBox                                                = 0,
	EAkFitToGeometryMode__AlignedBox                                                 = 1,
	EAkFitToGeometryMode__ConvexPolyhedron                                           = 2,
	EAkFitToGeometryMode__EAkFitToGeometryMode_MAX                                   = 3
};

/// Class /Script/AkAudio.AkPortalComponent
/// Size: 0x00C0 (0x000220 - 0x0002E0)
class UAkPortalComponent : public USceneComponent
{ 
public:
	bool                                               bDynamic;                                                   // 0x0218   (0x0001)  
	AkAcousticPortalState                              InitialState;                                               // 0x0219   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x021A   (0x0002)  MISSED
	float                                              ObstructionRefreshInterval;                                 // 0x021C   (0x0004)  
	SDK_UNDEFINED(1,1155) /* TEnumAsByte<ECollisionChannel> */ __um(ObstructionCollisionChannel);                  // 0x0220   (0x0001)  
	unsigned char                                      UnknownData01_6[0xBF];                                      // 0x0221   (0x00BF)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkPortalComponent.PortalPlacementValid
	// bool PortalPlacementValid();                                                                                          // [0x4a9d4d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkPortalComponent.OpenPortal
	// void OpenPortal();                                                                                                    // [0x4a9d4b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkPortalComponent.GetPrimitiveParent
	// class UPrimitiveComponent* GetPrimitiveParent();                                                                      // [0x4a9d370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkPortalComponent.GetCurrentState
	// AkAcousticPortalState GetCurrentState();                                                                              // [0x4a9d280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkPortalComponent.ClosePortal
	// void ClosePortal();                                                                                                   // [0x4a9d140] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkAcousticPortal
/// Size: 0x0010 (0x000268 - 0x000278)
class AAkAcousticPortal : public AVolume
{ 
public:
	class UAkPortalComponent*                          Portal;                                                     // 0x0268   (0x0008)  
	AkAcousticPortalState                              InitialState;                                               // 0x0270   (0x0001)  
	bool                                               bRequiresStateMigration;                                    // 0x0271   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0272   (0x0006)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkAcousticPortal.OpenPortal
	// void OpenPortal();                                                                                                    // [0x4a9d490] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkAcousticPortal.GetCurrentState
	// AkAcousticPortalState GetCurrentState();                                                                              // [0x4a9d250] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkAcousticPortal.ClosePortal
	// void ClosePortal();                                                                                                   // [0x4a9d120] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkAudioType
/// Size: 0x0018 (0x000030 - 0x000048)
class UAkAudioType : public UObject
{ 
public:
	uint32_t                                           ShortID;                                                    // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<class UObject*>                             UserData;                                                   // 0x0038   (0x0010)  
};

/// Class /Script/AkAudio.AkAcousticTexture
/// Size: 0x0000 (0x000048 - 0x000048)
class UAkAcousticTexture : public UAkAudioType
{ 
public:
};

/// Class /Script/AkAudio.AkAcousticTextureSetComponent
/// Size: 0x0010 (0x000220 - 0x000230)
class UAkAcousticTextureSetComponent : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0220   (0x0010)  MISSED
};

/// Class /Script/AkAudio.AkAmbientSound
/// Size: 0x0040 (0x000230 - 0x000270)
class AAkAmbientSound : public AActor
{ 
public:
	class UAkAudioEvent*                               AkAudioEvent;                                               // 0x0230   (0x0008)  
	class UAkComponent*                                AkComponent;                                                // 0x0238   (0x0008)  
	bool                                               StopWhenOwnerIsDestroyed;                                   // 0x0240   (0x0001)  
	bool                                               AutoPost;                                                   // 0x0241   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2E];                                      // 0x0242   (0x002E)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkAmbientSound.StopAmbientSound
	// void StopAmbientSound();                                                                                              // [0x4a9e5a0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkAmbientSound.StartAmbientSound
	// void StartAmbientSound();                                                                                             // [0x4a9e580] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Struct /Script/AkAudio.AkMainOutputSettings
/// Size: 0x0028 (0x000000 - 0x000028)
struct FAkMainOutputSettings
{ 
	SDK_UNDEFINED(16,1156) /* FString */               __um(AudioDeviceShareset);                                  // 0x0000   (0x0010)  
	uint32_t                                           DeviceID;                                                   // 0x0010   (0x0004)  
	EAkPanningRule                                     PanningRule;                                                // 0x0014   (0x0004)  
	EAkChannelConfigType                               ChannelConfigType;                                          // 0x0018   (0x0004)  
	uint32_t                                           ChannelMask;                                                // 0x001C   (0x0004)  
	uint32_t                                           NumberOfChannels;                                           // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/AkAudio.AkSpatialAudioSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FAkSpatialAudioSettings
{ 
	uint32_t                                           MaxSoundPropagationDepth;                                   // 0x0000   (0x0004)  
	float                                              MovementThreshold;                                          // 0x0004   (0x0004)  
	uint32_t                                           NumberOfPrimaryRays;                                        // 0x0008   (0x0004)  
	uint32_t                                           ReflectionOrder;                                            // 0x000C   (0x0004)  
	float                                              MaximumPathLength;                                          // 0x0010   (0x0004)  
	float                                              CPULimitPercentage;                                         // 0x0014   (0x0004)  
	bool                                               EnableDiffractionOnReflections;                             // 0x0018   (0x0001)  
	bool                                               EnableGeometricDiffractionAndTransmission;                  // 0x0019   (0x0001)  
	bool                                               CalcEmitterVirtualPosition;                                 // 0x001A   (0x0001)  
	bool                                               UseObstruction;                                             // 0x001B   (0x0001)  
	bool                                               UseOcclusion;                                               // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Struct /Script/AkAudio.AkCommonInitializationSettings
/// Size: 0x0060 (0x000000 - 0x000060)
struct FAkCommonInitializationSettings
{ 
	uint32_t                                           MaximumNumberOfMemoryPools;                                 // 0x0000   (0x0004)  
	uint32_t                                           MaximumNumberOfPositioningPaths;                            // 0x0004   (0x0004)  
	uint32_t                                           CommandQueueSize;                                           // 0x0008   (0x0004)  
	uint32_t                                           SamplesPerFrame;                                            // 0x000C   (0x0004)  
	FAkMainOutputSettings                              MainOutputSettings;                                         // 0x0010   (0x0028)  
	float                                              StreamingLookAheadRatio;                                    // 0x0038   (0x0004)  
	uint16_t                                           NumberOfRefillsInVoice;                                     // 0x003C   (0x0002)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x003E   (0x0002)  MISSED
	FAkSpatialAudioSettings                            SpatialAudioSettings;                                       // 0x0040   (0x0020)  
};

/// Struct /Script/AkAudio.AkCommonInitializationSettingsWithSampleRate
/// Size: 0x0008 (0x000060 - 0x000068)
struct FAkCommonInitializationSettingsWithSampleRate : FAkCommonInitializationSettings
{ 
	uint32_t                                           SampleRate;                                                 // 0x0060   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Struct /Script/AkAudio.AkCommunicationSettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FAkCommunicationSettings
{ 
	uint32_t                                           PoolSize;                                                   // 0x0000   (0x0004)  
	uint16_t                                           DiscoveryBroadcastPort;                                     // 0x0004   (0x0002)  
	uint16_t                                           CommandPort;                                                // 0x0006   (0x0002)  
	uint16_t                                           NotificationPort;                                           // 0x0008   (0x0002)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x000A   (0x0006)  MISSED
	SDK_UNDEFINED(16,1157) /* FString */               __um(NetworkName);                                          // 0x0010   (0x0010)  
};

/// Struct /Script/AkAudio.AkCommunicationSettingsWithSystemInitialization
/// Size: 0x0008 (0x000020 - 0x000028)
struct FAkCommunicationSettingsWithSystemInitialization : FAkCommunicationSettings
{ 
	bool                                               InitializeSystemComms;                                      // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/AkAudio.AkAdvancedInitializationSettings
/// Size: 0x002C (0x000000 - 0x00002C)
struct FAkAdvancedInitializationSettings
{ 
	uint32_t                                           IO_MemorySize;                                              // 0x0000   (0x0004)  
	uint32_t                                           IO_Granularity;                                             // 0x0004   (0x0004)  
	float                                              TargetAutoStreamBufferLength;                               // 0x0008   (0x0004)  
	bool                                               UseStreamCache;                                             // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	uint32_t                                           MaximumPinnedBytesInCache;                                  // 0x0010   (0x0004)  
	bool                                               EnableGameSyncPreparation;                                  // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	uint32_t                                           ContinuousPlaybackLookAhead;                                // 0x0018   (0x0004)  
	uint32_t                                           MonitorQueuePoolSize;                                       // 0x001C   (0x0004)  
	uint32_t                                           MaximumHardwareTimeoutMs;                                   // 0x0020   (0x0004)  
	bool                                               DebugOutOfRangeCheckEnabled;                                // 0x0024   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	float                                              DebugOutOfRangeLimit;                                       // 0x0028   (0x0004)  
};

/// Struct /Script/AkAudio.AkAdvancedInitializationSettingsWithMultiCoreRendering
/// Size: 0x0004 (0x00002C - 0x000030)
struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : FAkAdvancedInitializationSettings
{ 
	bool                                               EnableMultiCoreRendering;                                   // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Struct /Script/AkAudio.AkAndroidAdvancedInitializationSettings
/// Size: 0x0008 (0x000030 - 0x000038)
struct FAkAndroidAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	uint32_t                                           AudioAPI;                                                   // 0x0030   (0x0004)  
	bool                                               RoundFrameSizeToHardwareSize;                               // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0035   (0x0003)  MISSED
};

/// Class /Script/AkAudio.AkAndroidInitializationSettings
/// Size: 0x00D0 (0x000030 - 0x000100)
class UAkAndroidInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0068)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A0   (0x0028)  
	FAkAndroidAdvancedInitializationSettings           AdvancedSettings;                                           // 0x00C8   (0x0038)  


	/// Functions
	// Function /Script/AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                        // [0x4a9d400] Final|Native|Public  
};

/// Class /Script/AkAudio.AkPlatformInfo
/// Size: 0x0048 (0x000030 - 0x000078)
class UAkPlatformInfo : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0030   (0x0048)  MISSED
};

/// Class /Script/AkAudio.AkAndroidPlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkAndroidPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkAssetBase
/// Size: 0x0010 (0x000048 - 0x000058)
class UAkAssetBase : public UAkAudioType
{ 
public:
	class UAkAssetPlatformData*                        PlatformAssetData;                                          // 0x0048   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0050   (0x0008)  MISSED
};

/// Class /Script/AkAudio.AkAssetData
/// Size: 0x0050 (0x000030 - 0x000080)
class UAkAssetData : public UObject
{ 
public:
	uint32_t                                           CachedHash;                                                 // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	SDK_UNDEFINED(16,1158) /* FString */               __um(BankLanguage);                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_6[0x38];                                      // 0x0048   (0x0038)  MISSED
};

/// Class /Script/AkAudio.AkAssetDataWithMedia
/// Size: 0x0010 (0x000080 - 0x000090)
class UAkAssetDataWithMedia : public UAkAssetData
{ 
public:
	TArray<class UAkMediaAsset*>                       MediaList;                                                  // 0x0080   (0x0010)  
};

/// Class /Script/AkAudio.AkAssetPlatformData
/// Size: 0x0008 (0x000030 - 0x000038)
class UAkAssetPlatformData : public UObject
{ 
public:
	class UAkAssetData*                                CurrentAssetData;                                           // 0x0030   (0x0008)  
};

/// Class /Script/AkAudio.AkAssetDataSwitchContainerData
/// Size: 0x0058 (0x000030 - 0x000088)
class UAkAssetDataSwitchContainerData : public UObject
{ 
public:
	SDK_UNDEFINED(48,1159) /* TWeakObjectPtr<UAkGroupValue*> */ __um(GroupValue);                                  // 0x0030   (0x0030)  
	class UAkGroupValue*                               DefaultGroupValue;                                          // 0x0060   (0x0008)  
	TArray<class UAkMediaAsset*>                       MediaList;                                                  // 0x0068   (0x0010)  
	TArray<class UAkAssetDataSwitchContainerData*>     Children;                                                   // 0x0078   (0x0010)  
};

/// Class /Script/AkAudio.AkAssetDataSwitchContainer
/// Size: 0x0068 (0x000090 - 0x0000F8)
class UAkAssetDataSwitchContainer : public UAkAssetDataWithMedia
{ 
public:
	TArray<class UAkAssetDataSwitchContainerData*>     SwitchContainers;                                           // 0x0090   (0x0010)  
	class UAkGroupValue*                               DefaultGroupValue;                                          // 0x00A0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x00A8   (0x0050)  MISSED
};

/// Class /Script/AkAudio.AkAudioEventData
/// Size: 0x01A0 (0x0000F8 - 0x000298)
class UAkAudioEventData : public UAkAssetDataSwitchContainer
{ 
public:
	float                                              MaxAttenuationRadius;                                       // 0x00F8   (0x0004)  
	bool                                               IsInfinite;                                                 // 0x00FC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00FD   (0x0003)  MISSED
	float                                              MinimumDuration;                                            // 0x0100   (0x0004)  
	float                                              MaximumDuration;                                            // 0x0104   (0x0004)  
	SDK_UNDEFINED(80,1160) /* TMap<FString, UAkAssetDataSwitchContainer*> */ __um(LocalizedMedia);                 // 0x0108   (0x0050)  
	SDK_UNDEFINED(80,1161) /* TSet<UAkAudioEvent*> */  __um(PostedEvents);                                         // 0x0158   (0x0050)  
	SDK_UNDEFINED(80,1162) /* TSet<UAkAuxBus*> */      __um(UserDefinedSends);                                     // 0x01A8   (0x0050)  
	SDK_UNDEFINED(80,1163) /* TSet<UAkTrigger*> */     __um(PostedTriggers);                                       // 0x01F8   (0x0050)  
	SDK_UNDEFINED(80,1164) /* TSet<UAkGroupValue*> */  __um(GroupValues);                                          // 0x0248   (0x0050)  
};

/// Class /Script/AkAudio.AkAudioBank
/// Size: 0x00C8 (0x000058 - 0x000120)
class UAkAudioBank : public UAkAssetBase
{ 
public:
	bool                                               AutoLoad;                                                   // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0059   (0x0007)  MISSED
	SDK_UNDEFINED(80,1165) /* TMap<FString, UAkAssetPlatformData*> */ __um(LocalizedPlatformAssetDataMap);         // 0x0060   (0x0050)  
	SDK_UNDEFINED(80,1166) /* TSet<TWeakObjectPtr<UAkAudioEvent*>> */ __um(LinkedAkEvents);                        // 0x00B0   (0x0050)  
	class UAkAssetPlatformData*                        CurrentLocalizedPlatformAssetData;                          // 0x0100   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0108   (0x0018)  MISSED
};

/// Class /Script/AkAudio.AkAudioEvent
/// Size: 0x0080 (0x000058 - 0x0000D8)
class UAkAudioEvent : public UAkAssetBase
{ 
public:
	SDK_UNDEFINED(80,1167) /* TMap<FString, UAkAssetPlatformData*> */ __um(LocalizedPlatformAssetDataMap);         // 0x0058   (0x0050)  
	class UAkAudioBank*                                RequiredBank;                                               // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x00B0   (0x0008)  MISSED
	class UAkAssetPlatformData*                        CurrentLocalizedPlatformData;                               // 0x00B8   (0x0008)  
	float                                              MaxAttenuationRadius;                                       // 0x00C0   (0x0004)  
	bool                                               IsInfinite;                                                 // 0x00C4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00C5   (0x0003)  MISSED
	float                                              MinimumDuration;                                            // 0x00C8   (0x0004)  
	float                                              MaximumDuration;                                            // 0x00CC   (0x0004)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x00D0   (0x0008)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkAudioEvent.GetMinimumDuration
	// float GetMinimumDuration();                                                                                           // [0x4a9d340] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkAudioEvent.GetMaximumDuration
	// float GetMaximumDuration();                                                                                           // [0x4a9d310] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkAudioEvent.GetMaxAttenuationRadius
	// float GetMaxAttenuationRadius();                                                                                      // [0x4a9d2e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkAudioEvent.GetIsInfinite
	// bool GetIsInfinite();                                                                                                 // [0x4a9d2b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkGameObject
/// Size: 0x0020 (0x000220 - 0x000240)
class UAkGameObject : public USceneComponent
{ 
public:
	class UAkAudioEvent*                               AkAudioEvent;                                               // 0x0218   (0x0008)  
	SDK_UNDEFINED(16,1168) /* FString */               __um(EventName);                                            // 0x0220   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0230   (0x0010)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkGameObject.Stop
	// void Stop();                                                                                                          // [0x4aa44a0] BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.SetRTPCValue
	// void SetRTPCValue(class UAkRtpc* RTPCValue, float value, int32_t InterpolationTimeMs, FString RTPC);                  // [0x4aa38c0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|Const 
	// Function /Script/AkAudio.AkGameObject.PostAssociatedAkEventAsync
	// void PostAssociatedAkEventAsync(class UObject* WorldContextObject, int32_t CallbackMask, FDelegateProperty& PostEventCallback, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo, int32_t& PlayingID); // [0x4aa1c00] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.PostAssociatedAkEvent
	// int32_t PostAssociatedAkEvent(int32_t CallbackMask, FDelegateProperty& PostEventCallback, TArray<FAkExternalSourceInfo>& ExternalSources); // [0x4aa1a50] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.PostAkEventAsync
	// void PostAkEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, int32_t& PlayingID, int32_t CallbackMask, FDelegateProperty& PostEventCallback, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo); // [0x4aa1280] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.PostAkEvent
	// int32_t PostAkEvent(class UAkAudioEvent* AkEvent, int32_t CallbackMask, FDelegateProperty& PostEventCallback, TArray<FAkExternalSourceInfo>& ExternalSources, FString in_EventName); // [0x4aa1040] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameObject.GetRTPCValue
	// void GetRTPCValue(class UAkRtpc* RTPCValue, ERTPCValueType InputValueType, float& value, ERTPCValueType& OutputValueType, FString RTPC, int32_t PlayingID); // [0x4aa0570] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkComponent
/// Size: 0x0240 (0x000240 - 0x000480)
class UAkComponent : public UAkGameObject
{ 
public:
	bool                                               bUseSpatialAudio;                                           // 0x0238   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0239   (0x0007)  MISSED
	SDK_UNDEFINED(1,1169) /* TEnumAsByte<ECollisionChannel> */ __um(OcclusionCollisionChannel);                    // 0x0240   (0x0001)  
	bool                                               EnableSpotReflectors;                                       // 0x0241   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0242   (0x0002)  MISSED
	float                                              OuterRadius;                                                // 0x0244   (0x0004)  
	float                                              InnerRadius;                                                // 0x0248   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x024C   (0x0004)  MISSED
	class UAkAuxBus*                                   EarlyReflectionAuxBus;                                      // 0x0250   (0x0008)  
	SDK_UNDEFINED(16,1170) /* FString */               __um(EarlyReflectionAuxBusName);                            // 0x0258   (0x0010)  
	int32_t                                            EarlyReflectionOrder;                                       // 0x0268   (0x0004)  
	float                                              EarlyReflectionBusSendGain;                                 // 0x026C   (0x0004)  
	float                                              EarlyReflectionMaxPathLength;                               // 0x0270   (0x0004)  
	float                                              roomReverbAuxBusGain;                                       // 0x0274   (0x0004)  
	int32_t                                            diffractionMaxEdges;                                        // 0x0278   (0x0004)  
	int32_t                                            diffractionMaxPaths;                                        // 0x027C   (0x0004)  
	float                                              diffractionMaxPathLength;                                   // 0x0280   (0x0004)  
	bool                                               DrawFirstOrderReflections;                                  // 0x0284   (0x0001)  
	bool                                               DrawSecondOrderReflections;                                 // 0x0285   (0x0001)  
	bool                                               DrawHigherOrderReflections;                                 // 0x0286   (0x0001)  
	bool                                               DrawDiffraction;                                            // 0x0287   (0x0001)  
	bool                                               StopWhenOwnerDestroyed;                                     // 0x0288   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0289   (0x0003)  MISSED
	float                                              AttenuationScalingFactor;                                   // 0x028C   (0x0004)  
	float                                              OcclusionRefreshInterval;                                   // 0x0290   (0x0004)  
	bool                                               bUseReverbVolumes;                                          // 0x0294   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0295   (0x0003)  MISSED
	float                                              OcclusionAffect;                                            // 0x0298   (0x0004)  
	float                                              MaxDistance;                                                // 0x029C   (0x0004)  
	bool                                               AutoPostOnBeginPlay;                                        // 0x02A0   (0x0001)  
	unsigned char                                      UnknownData05_5[0x16F];                                     // 0x02A1   (0x016F)  MISSED
	bool                                               StaticAmbientEmitter;                                       // 0x0410   (0x0001)  
	unsigned char                                      UnknownData06_5[0x3];                                       // 0x0411   (0x0003)  MISSED
	float                                              StaticAmbientEmitterFadeDuration;                           // 0x0414   (0x0004)  
	EAkCurveInterpolation                              StaticAmbientEmitterInterpolationCurve;                     // 0x0418   (0x0001)  
	unsigned char                                      UnknownData07_5[0xF];                                       // 0x0419   (0x000F)  MISSED
	SDK_UNDEFINED(80,1171) /* TSet<UAkComponent*> */   __um(ListenersInRange);                                     // 0x0428   (0x0050)  
	unsigned char                                      UnknownData08_6[0x8];                                       // 0x0478   (0x0008)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkComponent.UseReverbVolumes
	// void UseReverbVolumes(bool inUseReverbVolumes);                                                                       // [0x4a9e7b0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.UseEarlyReflections
	// void UseEarlyReflections(class UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, FString AuxBusName); // [0x4a9e5c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetSwitch
	// void SetSwitch(class UAkSwitchValue* SwitchValue, FString SwitchGroup, FString switchState);                          // [0x4a9e440] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetStopWhenOwnerDestroyed
	// void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);                                                         // [0x4a9e3b0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetOutputBusVolume
	// void SetOutputBusVolume(float BusVolume);                                                                             // [0x4a9e330] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetListeners
	// void SetListeners(TArray<UAkComponent*>& Listeners);                                                                  // [0x4a9e280] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetGameObjectRadius
	// void SetGameObjectRadius(float in_outerRadius, float in_innerRadius);                                                 // [0x4a9e120] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetEarlyReflectionsVolume
	// void SetEarlyReflectionsVolume(float SendVolume);                                                                     // [0x4a9e0a0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetEarlyReflectionsAuxBus
	// void SetEarlyReflectionsAuxBus(FString AuxBusName);                                                                   // [0x4a9e000] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.SetAttenuationScalingFactor
	// void SetAttenuationScalingFactor(float value);                                                                        // [0x4a9df00] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostTrigger
	// void PostTrigger(class UAkTrigger* TriggerValue, FString Trigger);                                                    // [0x4a9dce0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync
	// void PostAssociatedAkEventAndWaitForEndAsync(int32_t& PlayingID, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo); // [0x4a9db10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd
	// int32_t PostAssociatedAkEventAndWaitForEnd(TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo); // [0x4a9d9a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAkEventByName
	// int32_t PostAkEventByName(FString in_EventName);                                                                      // [0x4a9d8f0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAkEventAndWaitForEndAsync
	// void PostAkEventAndWaitForEndAsync(class UAkAudioEvent* AkEvent, int32_t& PlayingID, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo); // [0x4a9d720] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.PostAkEventAndWaitForEnd
	// int32_t PostAkEventAndWaitForEnd(class UAkAudioEvent* AkEvent, FString in_EventName, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo); // [0x4a9d530] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkComponent.GetAttenuationRadius
	// float GetAttenuationRadius();                                                                                         // [0x4a9d1f0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkAudioInputComponent
/// Size: 0x0030 (0x000480 - 0x0004B0)
class UAkAudioInputComponent : public UAkComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0480   (0x0030)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent
	// int32_t PostAssociatedAudioInputEvent();                                                                              // [0x4a9dcb0] BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkAuxBus
/// Size: 0x0008 (0x000058 - 0x000060)
class UAkAuxBus : public UAkAssetBase
{ 
public:
	class UAkAudioBank*                                RequiredBank;                                               // 0x0058   (0x0008)  
};

/// Struct /Script/AkAudio.AkBoolPropertyToControl
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAkBoolPropertyToControl
{ 
	SDK_UNDEFINED(16,1172) /* FString */               __um(ItemProperty);                                         // 0x0000   (0x0010)  
};

/// Struct /Script/AkAudio.AkWwiseObjectDetails
/// Size: 0x0030 (0x000000 - 0x000030)
struct FAkWwiseObjectDetails
{ 
	SDK_UNDEFINED(16,1173) /* FString */               __um(ItemName);                                             // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1174) /* FString */               __um(ItemPath);                                             // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,1175) /* FString */               __um(ItemId);                                               // 0x0020   (0x0010)  
};

/// Struct /Script/AkAudio.AkWwiseItemToControl
/// Size: 0x0040 (0x000000 - 0x000040)
struct FAkWwiseItemToControl
{ 
	FAkWwiseObjectDetails                              ItemPicked;                                                 // 0x0000   (0x0030)  
	SDK_UNDEFINED(16,1176) /* FString */               __um(ItemPath);                                             // 0x0030   (0x0010)  
};

/// Class /Script/AkAudio.AkCheckBox
/// Size: 0x0A18 (0x000148 - 0x000B60)
class UAkCheckBox : public UContentWidget
{ 
public:
	unsigned char                                      UnknownData00_2[0x348];                                     // 0x0148   (0x0348)  MISSED
	ECheckBoxState                                     CheckedState;                                               // 0x0490   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0491   (0x0003)  MISSED
	SDK_UNDEFINED(20,1177) /* FDelegateProperty */     __um(CheckedStateDelegate);                                 // 0x0494   (0x0014)  
	FCheckBoxStyle                                     WidgetStyle;                                                // 0x04A8   (0x05E0)  
	SDK_UNDEFINED(1,1178) /* TEnumAsByte<EHorizontalAlignment> */ __um(HorizontalAlignment);                       // 0x0A88   (0x0001)  
	bool                                               IsFocusable;                                                // 0x0A89   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x0A8A   (0x0006)  MISSED
	FAkBoolPropertyToControl                           ThePropertyToControl;                                       // 0x0A90   (0x0010)  
	FAkWwiseItemToControl                              ItemToControl;                                              // 0x0AA0   (0x0040)  
	SDK_UNDEFINED(16,1179) /* FMulticastInlineDelegate */ __um(AkOnCheckStateChanged);                             // 0x0AE0   (0x0010)  
	SDK_UNDEFINED(16,1180) /* FMulticastInlineDelegate */ __um(OnItemDropped);                                     // 0x0AF0   (0x0010)  
	SDK_UNDEFINED(16,1181) /* FMulticastInlineDelegate */ __um(OnPropertyDropped);                                 // 0x0B00   (0x0010)  
	unsigned char                                      UnknownData03_6[0x50];                                      // 0x0B10   (0x0050)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkCheckBox.SetIsChecked
	// void SetIsChecked(bool InIsChecked);                                                                                  // [0x4a9e1f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkCheckBox.SetCheckedState
	// void SetCheckedState(ECheckBoxState InCheckedState);                                                                  // [0x4a9df80] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkCheckBox.SetAkItemId
	// void SetAkItemId(FGuid& ItemId);                                                                                      // [0x4a9de60] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkCheckBox.SetAkBoolProperty
	// void SetAkBoolProperty(FString ItemProperty);                                                                         // [0x4a9ddc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkCheckBox.IsPressed
	// bool IsPressed();                                                                                                     // [0x4a9d3d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkCheckBox.IsChecked
	// bool IsChecked();                                                                                                     // [0x4a9d3a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkCheckBox.GetCheckedState
	// ECheckBoxState GetCheckedState();                                                                                     // [0x4a9d220] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkCheckBox.GetAkProperty
	// FString GetAkProperty();                                                                                              // [0x4a9d1a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkCheckBox.GetAkItemId
	// FGuid GetAkItemId();                                                                                                  // [0x4a9d160] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.DrawPortalComponent
/// Size: 0x0000 (0x000480 - 0x000480)
class UDrawPortalComponent : public UPrimitiveComponent
{ 
public:
};

/// Class /Script/AkAudio.DrawRoomComponent
/// Size: 0x0000 (0x000480 - 0x000480)
class UDrawRoomComponent : public UPrimitiveComponent
{ 
public:
};

/// Class /Script/AkAudio.AkFolder
/// Size: 0x0078 (0x000048 - 0x0000C0)
class UAkFolder : public UAkAudioType
{ 
public:
	SDK_UNDEFINED(16,1182) /* FString */               __um(UnrealFolderPath);                                     // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,1183) /* FString */               __um(WwiseFolderPath);                                      // 0x0058   (0x0010)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x0068   (0x0058)  MISSED
};

/// Class /Script/AkAudio.AkGameplayStatics
/// Size: 0x0000 (0x000030 - 0x000030)
class UAkGameplayStatics : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AkAudio.AkGameplayStatics.UseReverbVolumes
	// void UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor);                                                  // [0x4aa4b40] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.UseEarlyReflections
	// void UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, FString AuxBusName); // [0x4aa4920] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.UnloadBankByName
	// void UnloadBankByName(FString BankName);                                                                              // [0x4aa4890] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.UnloadBankAsync
	// void UnloadBankAsync(class UAkAudioBank* Bank, FDelegateProperty& BankUnloadedCallback);                              // [0x4aa47a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.UnloadBank
	// void UnloadBank(class UAkAudioBank* Bank, FString BankName, FLatentActionInfo LatentInfo, class UObject* WorldContextObject); // [0x4aa4620] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StopProfilerCapture
	// void StopProfilerCapture();                                                                                           // [0x4aa4600] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StopOutputCapture
	// void StopOutputCapture();                                                                                             // [0x4aa45e0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StopAllAmbientSounds
	// void StopAllAmbientSounds(class UObject* WorldContextObject);                                                         // [0x4aa4560] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StopAll
	// void StopAll();                                                                                                       // [0x4aa4540] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StopActor
	// void StopActor(class AActor* Actor);                                                                                  // [0x4aa44c0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StartProfilerCapture
	// void StartProfilerCapture(FString Filename);                                                                          // [0x4aa4410] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StartOutputCapture
	// void StartOutputCapture(FString Filename);                                                                            // [0x4aa4380] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.StartAllAmbientSounds
	// void StartAllAmbientSounds(class UObject* WorldContextObject);                                                        // [0x4aa4300] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation
	// class UAkComponent* SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, bool AutoPost, FString EventName, bool AutoDestroy); // [0x4aa40c0] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetSwitch
	// void SetSwitch(class UAkSwitchValue* SwitchValue, class AActor* Actor, FName SwitchGroup, FName switchState);         // [0x4aa3f50] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetState
	// void SetState(class UAkStateValue* StateValue, FName StateGroup, FName State);                                        // [0x4aa3e20] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetSpeakerAngles
	// void SetSpeakerAngles(TArray<float>& SpeakerAngles, float HeightAngle, FString DeviceShareset);                       // [0x4aa3cd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetRTPCValue
	// void SetRTPCValue(class UAkRtpc* RTPCValue, float value, int32_t InterpolationTimeMs, class AActor* Actor, FName RTPC); // [0x4aa3a70] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetReflectionsOrder
	// void SetReflectionsOrder(int32_t Order, bool RefreshPaths);                                                           // [0x4aa3c10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetPortalToPortalObstruction
	// void SetPortalToPortalObstruction(class UAkPortalComponent* PortalComponent0, class UAkPortalComponent* PortalComponent1, float ObstructionValue); // [0x4aa37b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetPortalObstructionAndOcclusion
	// void SetPortalObstructionAndOcclusion(class UAkPortalComponent* PortalComponent, float ObstructionValue, float OcclusionValue); // [0x4aa36b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetPanningRule
	// void SetPanningRule(PanningRule PanRule);                                                                             // [0x4aa3640] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetOutputBusVolume
	// void SetOutputBusVolume(float BusVolume, class AActor* Actor);                                                        // [0x4aa3580] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetOcclusionScalingFactor
	// void SetOcclusionScalingFactor(float ScalingFactor);                                                                  // [0x4aa3500] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval
	// void SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor);                                         // [0x4aa3440] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetMultiplePositions
	// void SetMultiplePositions(class UAkComponent* GameObjectAkComponent, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType); // [0x4aa32e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions
	// void SetMultipleChannelMaskEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<FAkChannelMask> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType); // [0x4aa3100] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions
	// void SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<AkChannelConfiguration> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType); // [0x4aa2f20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetGameObjectToPortalObstruction
	// void SetGameObjectToPortalObstruction(class UAkComponent* GameObjectAkComponent, class UAkPortalComponent* PortalComponent, float ObstructionValue); // [0x4aa2e10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync
	// void SetCurrentAudioCultureAsync(FString AudioCulture, FDelegateProperty& COMPLETED);                                 // [0x4aa2d10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetCurrentAudioCulture
	// void SetCurrentAudioCulture(FString AudioCulture, FLatentActionInfo LatentInfo, class UObject* WorldContextObject);   // [0x4aa2bd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.SetBusConfig
	// void SetBusConfig(FString BusName, AkChannelConfiguration ChannelConfiguration);                                      // [0x4aa2b00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.ResetRTPCValue
	// void ResetRTPCValue(class UAkRtpc* RTPCValue, int32_t InterpolationTimeMs, class AActor* Actor, FName RTPC);          // [0x4aa29a0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.ReplaceMainOutput
	// void ReplaceMainOutput(FAkOutputSettings& MainOutputSettings);                                                        // [0x4aa2900] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostTrigger
	// void PostTrigger(class UAkTrigger* TriggerValue, class AActor* Actor, FName Trigger);                                 // [0x4aa27e0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostEventByName
	// void PostEventByName(FString EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed);                      // [0x4aa26c0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostEventAttached
	// int32_t PostEventAttached(class UAkAudioEvent* AkEvent, class AActor* Actor, FName attachPointName, bool bStopWhenAttachedToDestroyed, FString EventName); // [0x4aa24c0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostEventAtLocationByName
	// void PostEventAtLocationByName(FString EventName, FVector Location, FRotator Orientation, class UObject* WorldContextObject); // [0x4aa2350] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostEventAtLocation
	// int32_t PostEventAtLocation(class UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, FString EventName, class UObject* WorldContextObject); // [0x4aa2190] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostEvent
	// int32_t PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t CallbackMask, FDelegateProperty& PostEventCallback, TArray<FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed, FString EventName); // [0x4aa1e90] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync
	// void PostAndWaitForEndOfEventAsync(class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t& PlayingID, bool bStopWhenAttachedToDestroyed, TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo); // [0x4aa17f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent
	// int32_t PostAndWaitForEndOfEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, TArray<FAkExternalSourceInfo>& ExternalSources, FString EventName, FLatentActionInfo LatentInfo); // [0x4aa1550] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.LoadInitBank
	// void LoadInitBank();                                                                                                  // [0x4aa1020] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.LoadBanks
	// void LoadBanks(TArray<UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks);                                        // [0x4aa0f30] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.LoadBankByName
	// void LoadBankByName(FString BankName);                                                                                // [0x4aa0ea0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.LoadBankAsync
	// void LoadBankAsync(class UAkAudioBank* Bank, FDelegateProperty& BankLoadedCallback);                                  // [0x4aa0db0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.LoadBank
	// void LoadBank(class UAkAudioBank* Bank, FString BankName, FLatentActionInfo LatentInfo, class UObject* WorldContextObject); // [0x4aa0c30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.IsGame
	// bool IsGame(class UObject* WorldContextObject);                                                                       // [0x4aa0ba0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.IsEditor
	// bool IsEditor();                                                                                                      // [0x4aa0b70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetSpeakerAngles
	// void GetSpeakerAngles(TArray<float>& SpeakerAngles, float& HeightAngle, FString DeviceShareset);                      // [0x4aa0a10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetRTPCValue
	// void GetRTPCValue(class UAkRtpc* RTPCValue, int32_t PlayingID, ERTPCValueType InputValueType, float& value, ERTPCValueType& OutputValueType, class AActor* Actor, FName RTPC); // [0x4aa07c0] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetOcclusionScalingFactor
	// float GetOcclusionScalingFactor();                                                                                    // [0x4aa0540] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetCurrentAudioCulture
	// FString GetCurrentAudioCulture();                                                                                     // [0x4aa04c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetAvailableAudioCultures
	// TArray<FString> GetAvailableAudioCultures();                                                                          // [0x4aa03e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetAkMediaAssetUserData
	// class UObject* GetAkMediaAssetUserData(class UAkMediaAsset* Instance, class UClass* Type);                            // [0x4aa0310] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetAkComponent
	// class UAkComponent* GetAkComponent(class USceneComponent* AttachToComponent, bool& ComponentCreated, FName attachPointName, FVector Location, TEnumAsByte<EAttachLocation> LocationType); // [0x4aa0160] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.GetAkAudioTypeUserData
	// class UObject* GetAkAudioTypeUserData(class UAkAudioType* Instance, class UClass* Type);                              // [0x4aa0090] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID
	// void ExecuteActionOnPlayingID(AkActionOnEventType ActionType, int32_t PlayingID, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve); // [0x4a9ff50] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.ExecuteActionOnEvent
	// void ExecuteActionOnEvent(class UAkAudioEvent* AkEvent, AkActionOnEventType ActionType, class AActor* Actor, int32_t TransitionDuration, EAkCurveInterpolation FadeCurve, int32_t PlayingID); // [0x4a9fd80] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.ClearBanks
	// void ClearBanks();                                                                                                    // [0x4a9fd60] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.CancelEventCallback
	// void CancelEventCallback(FDelegateProperty& PostEventCallback);                                                       // [0x4a9fcb0] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkGameplayStatics.AddOutputCaptureMarker
	// void AddOutputCaptureMarker(FString MarkerText);                                                                      // [0x4a9fc20] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkCallbackInfo
/// Size: 0x0008 (0x000030 - 0x000038)
class UAkCallbackInfo : public UObject
{ 
public:
	class UAkComponent*                                AkComponent;                                                // 0x0030   (0x0008)  
};

/// Class /Script/AkAudio.AkEventCallbackInfo
/// Size: 0x0008 (0x000038 - 0x000040)
class UAkEventCallbackInfo : public UAkCallbackInfo
{ 
public:
	int32_t                                            PlayingID;                                                  // 0x0038   (0x0004)  
	int32_t                                            eventID;                                                    // 0x003C   (0x0004)  
};

/// Class /Script/AkAudio.AkMIDIEventCallbackInfo
/// Size: 0x0010 (0x000040 - 0x000050)
class UAkMIDIEventCallbackInfo : public UAkEventCallbackInfo
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0040   (0x0010)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetType
	// EAkMidiEventType GetType();                                                                                           // [0x4aa93c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetProgramChange
	// bool GetProgramChange(FAkMidiProgramChange& AsProgramChange);                                                         // [0x4aa9310] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetPitchBend
	// bool GetPitchBend(FAkMidiPitchBend& AsPitchBend);                                                                     // [0x4aa9260] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetNoteOn
	// bool GetNoteOn(FAkMidiNoteOnOff& AsNoteOn);                                                                           // [0x4aa91b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetNoteOff
	// bool GetNoteOff(FAkMidiNoteOnOff& AsNoteOff);                                                                         // [0x4aa9100] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch
	// bool GetNoteAftertouch(FAkMidiNoteAftertouch& AsNoteAftertouch);                                                      // [0x4aa9050] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetGeneric
	// bool GetGeneric(FAkMidiGeneric& AsGeneric);                                                                           // [0x4aa8fa0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch
	// bool GetChannelAftertouch(FAkMidiChannelAftertouch& AsChannelAftertouch);                                             // [0x4aa8ef0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetChannel
	// char GetChannel();                                                                                                    // [0x4aa8ec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkMIDIEventCallbackInfo.GetCc
	// bool GetCc(FAkMidiCc& AsCc);                                                                                          // [0x4aa8e10] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AkAudio.AkMarkerCallbackInfo
/// Size: 0x0018 (0x000040 - 0x000058)
class UAkMarkerCallbackInfo : public UAkEventCallbackInfo
{ 
public:
	int32_t                                            Identifier;                                                 // 0x0040   (0x0004)  
	int32_t                                            position;                                                   // 0x0044   (0x0004)  
	SDK_UNDEFINED(16,1184) /* FString */               __um(label);                                                // 0x0048   (0x0010)  
};

/// Class /Script/AkAudio.AkDurationCallbackInfo
/// Size: 0x0018 (0x000040 - 0x000058)
class UAkDurationCallbackInfo : public UAkEventCallbackInfo
{ 
public:
	float                                              Duration;                                                   // 0x0040   (0x0004)  
	float                                              EstimatedDuration;                                          // 0x0044   (0x0004)  
	int32_t                                            AudioNodeID;                                                // 0x0048   (0x0004)  
	int32_t                                            MediaID;                                                    // 0x004C   (0x0004)  
	bool                                               bStreaming;                                                 // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Struct /Script/AkAudio.AkSegmentInfo
/// Size: 0x0024 (0x000000 - 0x000024)
struct FAkSegmentInfo
{ 
	int32_t                                            CurrentPosition;                                            // 0x0000   (0x0004)  
	int32_t                                            PreEntryDuration;                                           // 0x0004   (0x0004)  
	int32_t                                            ActiveDuration;                                             // 0x0008   (0x0004)  
	int32_t                                            PostExitDuration;                                           // 0x000C   (0x0004)  
	int32_t                                            RemainingLookAheadTime;                                     // 0x0010   (0x0004)  
	float                                              BeatDuration;                                               // 0x0014   (0x0004)  
	float                                              BarDuration;                                                // 0x0018   (0x0004)  
	float                                              GridDuration;                                               // 0x001C   (0x0004)  
	float                                              GridOffset;                                                 // 0x0020   (0x0004)  
};

/// Class /Script/AkAudio.AkMusicSyncCallbackInfo
/// Size: 0x0040 (0x000038 - 0x000078)
class UAkMusicSyncCallbackInfo : public UAkCallbackInfo
{ 
public:
	int32_t                                            PlayingID;                                                  // 0x0038   (0x0004)  
	FAkSegmentInfo                                     SegmentInfo;                                                // 0x003C   (0x0024)  
	EAkCallbackType                                    MusicSyncType;                                              // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0061   (0x0007)  MISSED
	SDK_UNDEFINED(16,1185) /* FString */               __um(UserCueName);                                          // 0x0068   (0x0010)  
};

/// Struct /Script/AkAudio.AkGeometrySurfaceOverride
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAkGeometrySurfaceOverride
{ 
	class UAkAcousticTexture*                          AcousticTexture;                                            // 0x0000   (0x0008)  
	bool                                               bEnableOcclusionOverride;                                   // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              OcclusionValue;                                             // 0x000C   (0x0004)  
	float                                              SurfaceArea;                                                // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/AkAudio.AkAcousticSurface
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAkAcousticSurface
{ 
	uint32_t                                           Texture;                                                    // 0x0000   (0x0004)  
	float                                              Occlusion;                                                  // 0x0004   (0x0004)  
	SDK_UNDEFINED(16,1186) /* FString */               __um(Name);                                                 // 0x0008   (0x0010)  
};

/// Struct /Script/AkAudio.AkTriangle
/// Size: 0x0008 (0x000000 - 0x000008)
struct FAkTriangle
{ 
	uint16_t                                           Point0;                                                     // 0x0000   (0x0002)  
	uint16_t                                           Point1;                                                     // 0x0002   (0x0002)  
	uint16_t                                           Point2;                                                     // 0x0004   (0x0002)  
	uint16_t                                           Surface;                                                    // 0x0006   (0x0002)  
};

/// Struct /Script/AkAudio.AkGeometryData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FAkGeometryData
{ 
	TArray<FVector>                                    Vertices;                                                   // 0x0000   (0x0010)  
	TArray<FAkAcousticSurface>                         Surfaces;                                                   // 0x0010   (0x0010)  
	TArray<FAkTriangle>                                Triangles;                                                  // 0x0020   (0x0010)  
	TArray<class UPhysicalMaterial*>                   ToOverrideAcousticTexture;                                  // 0x0030   (0x0010)  
	TArray<class UPhysicalMaterial*>                   ToOverrideOcclusion;                                        // 0x0040   (0x0010)  
};

/// Class /Script/AkAudio.AkGeometryComponent
/// Size: 0x0190 (0x000230 - 0x0003C0)
class UAkGeometryComponent : public UAkAcousticTextureSetComponent
{ 
public:
	AkMeshType                                         MeshType;                                                   // 0x0230   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0231   (0x0003)  MISSED
	int32_t                                            LOD;                                                        // 0x0234   (0x0004)  
	float                                              WeldingThreshold;                                           // 0x0238   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x023C   (0x0004)  MISSED
	SDK_UNDEFINED(80,1187) /* TMap<UMaterialInterface*, FAkGeometrySurfaceOverride> */ __um(StaticMeshSurfaceOverride); // 0x0240   (0x0050)  
	FAkGeometrySurfaceOverride                         CollisionMeshSurfaceOverride;                               // 0x0290   (0x0018)  
	bool                                               bEnableDiffraction;                                         // 0x02A8   (0x0001)  
	bool                                               bEnableDiffractionOnBoundaryEdges;                          // 0x02A9   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x02AA   (0x0006)  MISSED
	class AActor*                                      AssociatedRoom;                                             // 0x02B0   (0x0008)  
	unsigned char                                      UnknownData03_5[0x10];                                      // 0x02B8   (0x0010)  MISSED
	FAkGeometryData                                    GeometryData;                                               // 0x02C8   (0x0050)  
	SDK_UNDEFINED(80,1188) /* TMap<int32_t, double> */ __um(SurfaceAreas);                                         // 0x0318   (0x0050)  
	unsigned char                                      UnknownData04_6[0x58];                                      // 0x0368   (0x0058)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkGeometryComponent.UpdateGeometry
	// void UpdateGeometry();                                                                                                // [0x4aa9430] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGeometryComponent.SendGeometry
	// void SendGeometry();                                                                                                  // [0x4aa9410] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGeometryComponent.RemoveGeometry
	// void RemoveGeometry();                                                                                                // [0x4aa93f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkGeometryComponent.ConvertMesh
	// void ConvertMesh();                                                                                                   // [0x4aa8df0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkGroupValue
/// Size: 0x0028 (0x000048 - 0x000070)
class UAkGroupValue : public UAkAudioType
{ 
public:
	SDK_UNDEFINED(16,1189) /* TArray<TWeakObjectPtr<UAkMediaAsset*>> */ __um(MediaDependencies);                   // 0x0048   (0x0010)  
	uint32_t                                           GroupShortID;                                               // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x005C   (0x0014)  MISSED
};

/// Struct /Script/AkAudio.AkHololensAdvancedInitializationSettings
/// Size: 0x0004 (0x000030 - 0x000034)
struct FAkHololensAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	bool                                               UseHeadMountedDisplayAudioDevice;                           // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
};

/// Class /Script/AkAudio.AkHololensInitializationSettings
/// Size: 0x00D0 (0x000030 - 0x000100)
class UAkHololensInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0068)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A0   (0x0028)  
	FAkHololensAdvancedInitializationSettings          AdvancedSettings;                                           // 0x00C8   (0x0034)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00FC   (0x0004)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                        // [0x4a9d400] Final|Native|Public  
};

/// Class /Script/AkAudio.AkHololensPlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkHololensPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Struct /Script/AkAudio.AkPluginInfo
/// Size: 0x0028 (0x000000 - 0x000028)
struct FAkPluginInfo
{ 
	SDK_UNDEFINED(16,1190) /* FString */               __um(Name);                                                 // 0x0000   (0x0010)  
	uint32_t                                           PluginID;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	SDK_UNDEFINED(16,1191) /* FString */               __um(dll);                                                  // 0x0018   (0x0010)  
};

/// Class /Script/AkAudio.AkInitBankAssetData
/// Size: 0x0010 (0x000090 - 0x0000A0)
class UAkInitBankAssetData : public UAkAssetDataWithMedia
{ 
public:
	TArray<FAkPluginInfo>                              PluginInfos;                                                // 0x0090   (0x0010)  
};

/// Class /Script/AkAudio.AkInitBank
/// Size: 0x0020 (0x000058 - 0x000078)
class UAkInitBank : public UAkAssetBase
{ 
public:
	SDK_UNDEFINED(16,1192) /* TArray<FString> */       __um(AvailableAudioCultures);                               // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,1193) /* FString */               __um(DefaultLanguage);                                      // 0x0068   (0x0010)  
};

/// Struct /Script/AkAudio.AkAudioSession
/// Size: 0x000C (0x000000 - 0x00000C)
struct FAkAudioSession
{ 
	EAkAudioSessionCategory                            AudioSessionCategory;                                       // 0x0000   (0x0004)  
	uint32_t                                           AudioSessionCategoryOptions;                                // 0x0004   (0x0004)  
	EAkAudioSessionMode                                AudioSessionMode;                                           // 0x0008   (0x0004)  
};

/// Class /Script/AkAudio.AkIOSInitializationSettings
/// Size: 0x00D8 (0x000030 - 0x000108)
class UAkIOSInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0068)  
	FAkAudioSession                                    AudioSession;                                               // 0x00A0   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00B0   (0x0028)  
	FAkAdvancedInitializationSettings                  AdvancedSettings;                                           // 0x00D8   (0x002C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0104   (0x0004)  MISSED
};

/// Class /Script/AkAudio.AkIOSPlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkIOSPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkItemBoolPropertiesConv
/// Size: 0x0000 (0x000030 - 0x000030)
class UAkItemBoolPropertiesConv : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText
	// FText Conv_FAkBoolPropertyToControlToText(FAkBoolPropertyToControl& INAkBoolPropertyToControl);                       // [0x4aad6d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString
	// FString Conv_FAkBoolPropertyToControlToString(FAkBoolPropertyToControl& INAkBoolPropertyToControl);                   // [0x4aad5e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AkAudio.AkItemBoolProperties
/// Size: 0x0040 (0x000130 - 0x000170)
class UAkItemBoolProperties : public UWidget
{ 
public:
	SDK_UNDEFINED(16,1194) /* FMulticastInlineDelegate */ __um(OnSelectionChanged);                                // 0x0130   (0x0010)  
	SDK_UNDEFINED(16,1195) /* FMulticastInlineDelegate */ __um(OnPropertyDragged);                                 // 0x0140   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0150   (0x0020)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkItemBoolProperties.SetSearchText
	// void SetSearchText(FString newText);                                                                                  // [0x4aaddc0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkItemBoolProperties.GetSelectedProperty
	// FString GetSelectedProperty();                                                                                        // [0x4aad910] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkItemBoolProperties.GetSearchText
	// FString GetSearchText();                                                                                              // [0x4aad890] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkItemPropertiesConv
/// Size: 0x0000 (0x000030 - 0x000030)
class UAkItemPropertiesConv : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText
	// FText Conv_FAkPropertyToControlToText(FAkPropertyToControl& INAkPropertyToControl);                                   // [0x4aad6d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString
	// FString Conv_FAkPropertyToControlToString(FAkPropertyToControl& INAkPropertyToControl);                               // [0x4aad5e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AkAudio.AkItemProperties
/// Size: 0x0040 (0x000130 - 0x000170)
class UAkItemProperties : public UWidget
{ 
public:
	SDK_UNDEFINED(16,1196) /* FMulticastInlineDelegate */ __um(OnSelectionChanged);                                // 0x0130   (0x0010)  
	SDK_UNDEFINED(16,1197) /* FMulticastInlineDelegate */ __um(OnPropertyDragged);                                 // 0x0140   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0150   (0x0020)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkItemProperties.SetSearchText
	// void SetSearchText(FString newText);                                                                                  // [0x4aaddc0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkItemProperties.GetSelectedProperty
	// FString GetSelectedProperty();                                                                                        // [0x4aad990] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkItemProperties.GetSearchText
	// FString GetSearchText();                                                                                              // [0x4aad890] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkLateReverbComponent
/// Size: 0x0080 (0x000220 - 0x0002A0)
class UAkLateReverbComponent : public USceneComponent
{ 
public:
	bool                                               bEnable;                                                    // 0x0218   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0219   (0x0003)  MISSED
	float                                              SendLevel;                                                  // 0x021C   (0x0004)  
	float                                              FadeRate;                                                   // 0x0220   (0x0004)  
	float                                              Priority;                                                   // 0x0224   (0x0004)  
	bool                                               AutoAssignAuxBus;                                           // 0x0228   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0229   (0x0007)  MISSED
	class UAkAuxBus*                                   AuxBus;                                                     // 0x0230   (0x0008)  
	SDK_UNDEFINED(16,1198) /* FString */               __um(AuxBusName);                                           // 0x0238   (0x0010)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0248   (0x0008)  MISSED
	class UAkAuxBus*                                   AuxBusManual;                                               // 0x0250   (0x0008)  
	unsigned char                                      UnknownData03_6[0x48];                                      // 0x0258   (0x0048)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkLateReverbComponent.AssociateAkTextureSetComponent
	// void AssociateAkTextureSetComponent(class UAkAcousticTextureSetComponent* textureSetComponent);                       // [0x4aad550] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AkAudio.AkLinuxInitializationSettings
/// Size: 0x00C8 (0x000030 - 0x0000F8)
class UAkLinuxInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0068)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A0   (0x0028)  
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                      // 0x00C8   (0x0030)  


	/// Functions
	// Function /Script/AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                        // [0x4a9d400] Final|Native|Public  
};

/// Class /Script/AkAudio.AkLinuxPlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkLinuxPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkMacInitializationSettings
/// Size: 0x00C8 (0x000030 - 0x0000F8)
class UAkMacInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0068)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A0   (0x0028)  
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                      // 0x00C8   (0x0030)  


	/// Functions
	// Function /Script/AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                        // [0x4a9d400] Final|Native|Public  
};

/// Class /Script/AkAudio.AkMacPlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkMacPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkMediaAssetData
/// Size: 0x0050 (0x000030 - 0x000080)
class UAkMediaAssetData : public UObject
{ 
public:
	bool                                               IsStreamed;                                                 // 0x0030   (0x0001)  
	bool                                               UseDeviceMemory;                                            // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0032   (0x0006)  MISSED
	SDK_UNDEFINED(16,1199) /* FString */               __um(Language);                                             // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,1200) /* FString */               __um(AssetPlatform);                                        // 0x0048   (0x0010)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0058   (0x0028)  MISSED
};

/// Class /Script/AkAudio.AkMediaAsset
/// Size: 0x0050 (0x000030 - 0x000080)
class UAkMediaAsset : public UObject
{ 
public:
	uint32_t                                           ID;                                                         // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	SDK_UNDEFINED(16,1201) /* FString */               __um(MediaName);                                            // 0x0038   (0x0010)  
	bool                                               AutoLoad;                                                   // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	TArray<class UObject*>                             UserData;                                                   // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,1202) /* FString */               __um(Language);                                             // 0x0060   (0x0010)  
	class UAkMediaAssetData*                           CurrentMediaAssetData;                                      // 0x0070   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Class /Script/AkAudio.AkLocalizedMediaAsset
/// Size: 0x0000 (0x000080 - 0x000080)
class UAkLocalizedMediaAsset : public UAkMediaAsset
{ 
public:
};

/// Class /Script/AkAudio.AkExternalMediaAsset
/// Size: 0x0060 (0x000080 - 0x0000E0)
class UAkExternalMediaAsset : public UAkMediaAsset
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0080   (0x0060)  MISSED
};

/// Class /Script/AkAudio.AkPlatformInitialisationSettingsBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UAkPlatformInitialisationSettingsBase : public UInterface
{ 
public:
};

/// Struct /Script/AkAudio.AkPS4AdvancedInitializationSettings
/// Size: 0x0008 (0x000030 - 0x000038)
struct FAkPS4AdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	uint32_t                                           ACPBatchBufferSize;                                         // 0x0030   (0x0004)  
	bool                                               UseHardwareCodecLowLatencyMode;                             // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0035   (0x0003)  MISSED
};

/// Class /Script/AkAudio.AkPS4InitializationSettings
/// Size: 0x00C8 (0x000030 - 0x0000F8)
class UAkPS4InitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettings                    CommonSettings;                                             // 0x0038   (0x0060)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x0098   (0x0028)  
	FAkPS4AdvancedInitializationSettings               AdvancedSettings;                                           // 0x00C0   (0x0038)  


	/// Functions
	// Function /Script/AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                        // [0x4aada40] Final|Native|Public  
};

/// Class /Script/AkAudio.AkPS4PlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkPS4PlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Struct /Script/AkAudio.AkPS5AdvancedInitializationSettings
/// Size: 0x0004 (0x000030 - 0x000034)
struct FAkPS5AdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	bool                                               UseHardwareCodecLowLatencyMode;                             // 0x0030   (0x0001)  
	bool                                               bVorbisHwAcceleration;                                      // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0032   (0x0002)  MISSED
};

/// Class /Script/AkAudio.AkPS5InitializationSettings
/// Size: 0x00C8 (0x000030 - 0x0000F8)
class UAkPS5InitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettings                    CommonSettings;                                             // 0x0038   (0x0060)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x0098   (0x0028)  
	FAkPS5AdvancedInitializationSettings               AdvancedSettings;                                           // 0x00C0   (0x0034)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00F4   (0x0004)  MISSED
};

/// Class /Script/AkAudio.AkDPXInitializationSettings
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UAkDPXInitializationSettings : public UAkPS5InitializationSettings
{ 
public:
};

/// Class /Script/AkAudio.AkPS5PlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkPS5PlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkReverbVolume
/// Size: 0x0038 (0x000268 - 0x0002A0)
class AAkReverbVolume : public AVolume
{ 
public:
	bool                                               bEnabled;                                                   // 0x0268   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0269   (0x0007)  MISSED
	class UAkAuxBus*                                   AuxBus;                                                     // 0x0270   (0x0008)  
	SDK_UNDEFINED(16,1203) /* FString */               __um(AuxBusName);                                           // 0x0278   (0x0010)  
	float                                              SendLevel;                                                  // 0x0288   (0x0004)  
	float                                              FadeRate;                                                   // 0x028C   (0x0004)  
	float                                              Priority;                                                   // 0x0290   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0294   (0x0004)  MISSED
	class UAkLateReverbComponent*                      LateReverbComponent;                                        // 0x0298   (0x0008)  
};

/// Class /Script/AkAudio.AkRoomComponent
/// Size: 0x0030 (0x000240 - 0x000270)
class UAkRoomComponent : public UAkGameObject
{ 
public:
	bool                                               bEnable;                                                    // 0x0238   (0x0001)  
	bool                                               bDynamic;                                                   // 0x0239   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x023A   (0x0002)  MISSED
	float                                              Priority;                                                   // 0x023C   (0x0004)  
	float                                              WallOcclusion;                                              // 0x0240   (0x0004)  
	float                                              AuxSendLevel;                                               // 0x0244   (0x0004)  
	bool                                               AutoPost;                                                   // 0x0248   (0x0001)  
	unsigned char                                      UnknownData01_5[0xF];                                       // 0x0249   (0x000F)  MISSED
	class UAkAcousticTextureSetComponent*              GeometryComponent;                                          // 0x0258   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0260   (0x0010)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkRoomComponent.SetGeometryComponent
	// void SetGeometryComponent(class UAkAcousticTextureSetComponent* textureSetComponent);                                 // [0x4aadc10] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkRoomComponent.GetPrimitiveParent
	// class UPrimitiveComponent* GetPrimitiveParent();                                                                      // [0x4aad860] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkRtpc
/// Size: 0x0000 (0x000048 - 0x000048)
class UAkRtpc : public UAkAudioType
{ 
public:
};

/// Class /Script/AkAudio.AkSettings
/// Size: 0x02E0 (0x000030 - 0x000310)
class UAkSettings : public UObject
{ 
public:
	char                                               MaxSimultaneousReverbVolumes;                               // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	FFilePath                                          WwiseProjectPath;                                           // 0x0038   (0x0010)  
	FDirectoryPath                                     WwiseSoundDataFolder;                                       // 0x0048   (0x0010)  
	bool                                               bAutoConnectToWAAPI;                                        // 0x0058   (0x0001)  
	SDK_UNDEFINED(1,1204) /* TEnumAsByte<ECollisionChannel> */ __um(DefaultOcclusionCollisionChannel);             // 0x0059   (0x0001)  
	SDK_UNDEFINED(1,1205) /* TEnumAsByte<ECollisionChannel> */ __um(DefaultFitToGeometryCollisionChannel);         // 0x005A   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x005B   (0x0005)  MISSED
	SDK_UNDEFINED(80,1206) /* TMap<TWeakObjectPtr<UPhysicalMaterial*>, FAkGeometrySurfacePropertiesToMap> */ __um(AkGeometryMap); // 0x0060   (0x0050)  
	float                                              GlobalDecayAbsorption;                                      // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x00B4   (0x0004)  MISSED
	SDK_UNDEFINED(48,1207) /* TWeakObjectPtr<UAkAuxBus*> */ __um(DefaultReverbAuxBus);                             // 0x00B8   (0x0030)  
	SDK_UNDEFINED(80,1208) /* TMap<float, TWeakObjectPtr<UAkAuxBus*>> */ __um(EnvironmentDecayAuxBusMap);          // 0x00E8   (0x0050)  
	SDK_UNDEFINED(16,1209) /* FString */               __um(HFDampingName);                                        // 0x0138   (0x0010)  
	SDK_UNDEFINED(16,1210) /* FString */               __um(DecayEstimateName);                                    // 0x0148   (0x0010)  
	SDK_UNDEFINED(16,1211) /* FString */               __um(TimeToFirstReflectionName);                            // 0x0158   (0x0010)  
	SDK_UNDEFINED(48,1212) /* TWeakObjectPtr<UAkRtpc*> */ __um(HFDampingRTPC);                                     // 0x0168   (0x0030)  
	SDK_UNDEFINED(48,1213) /* TWeakObjectPtr<UAkRtpc*> */ __um(DecayEstimateRTPC);                                 // 0x0198   (0x0030)  
	SDK_UNDEFINED(48,1214) /* TWeakObjectPtr<UAkRtpc*> */ __um(TimeToFirstReflectionRTPC);                         // 0x01C8   (0x0030)  
	SDK_UNDEFINED(48,1215) /* TWeakObjectPtr<UAkAudioEvent*> */ __um(AudioInputEvent);                             // 0x01F8   (0x0030)  
	SDK_UNDEFINED(80,1216) /* TMap<FGuid, FAkAcousticTextureParams> */ __um(AcousticTextureParamsMap);             // 0x0228   (0x0050)  
	bool                                               SplitSwitchContainerMedia;                                  // 0x0278   (0x0001)  
	bool                                               SplitMediaPerFolder;                                        // 0x0279   (0x0001)  
	bool                                               UseEventBasedPackaging;                                     // 0x027A   (0x0001)  
	bool                                               EnableAutomaticAssetSynchronization;                        // 0x027B   (0x0001)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x027C   (0x0004)  MISSED
	SDK_UNDEFINED(16,1217) /* FString */               __um(CommandletCommitMessage);                              // 0x0280   (0x0010)  
	SDK_UNDEFINED(80,1218) /* TMap<FString, FString> */ __um(UnrealCultureToWwiseCulture);                         // 0x0290   (0x0050)  
	bool                                               AskedToUseNewAssetManagement;                               // 0x02E0   (0x0001)  
	bool                                               bEnableMultiCoreRendering;                                  // 0x02E1   (0x0001)  
	bool                                               MigratedEnableMultiCoreRendering;                           // 0x02E2   (0x0001)  
	bool                                               FixupRedirectorsDuringMigration;                            // 0x02E3   (0x0001)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x02E4   (0x0004)  MISSED
	FDirectoryPath                                     WwiseWindowsInstallationPath;                               // 0x02E8   (0x0010)  
	FFilePath                                          WwiseMacInstallationPath;                                   // 0x02F8   (0x0010)  
	unsigned char                                      UnknownData05_6[0x8];                                       // 0x0308   (0x0008)  MISSED
};

/// Class /Script/AkAudio.AkSettingsPerUser
/// Size: 0x0058 (0x000030 - 0x000088)
class UAkSettingsPerUser : public UObject
{ 
public:
	FDirectoryPath                                     WwiseWindowsInstallationPath;                               // 0x0030   (0x0010)  
	FFilePath                                          WwiseMacInstallationPath;                                   // 0x0040   (0x0010)  
	bool                                               EnableAutomaticAssetSynchronization;                        // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0051   (0x0007)  MISSED
	SDK_UNDEFINED(16,1219) /* FString */               __um(WaapiIPAddress);                                       // 0x0058   (0x0010)  
	uint32_t                                           WaapiPort;                                                  // 0x0068   (0x0004)  
	bool                                               bAutoConnectToWAAPI;                                        // 0x006C   (0x0001)  
	bool                                               AutoSyncSelection;                                          // 0x006D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x006E   (0x0001)  MISSED
	bool                                               SoundDataGenerationSkipLanguage;                            // 0x006F   (0x0001)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0070   (0x0018)  MISSED
};

/// Struct /Script/AkAudio.AkPropertyToControl
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAkPropertyToControl
{ 
	SDK_UNDEFINED(16,1220) /* FString */               __um(ItemProperty);                                         // 0x0000   (0x0010)  
};

/// Class /Script/AkAudio.AkSlider
/// Size: 0x0458 (0x000130 - 0x000588)
class UAkSlider : public UWidget
{ 
public:
	float                                              value;                                                      // 0x0130   (0x0004)  
	SDK_UNDEFINED(20,1221) /* FDelegateProperty */     __um(ValueDelegate);                                        // 0x0134   (0x0014)  
	FSliderStyle                                       WidgetStyle;                                                // 0x0148   (0x0370)  
	SDK_UNDEFINED(1,1222) /* TEnumAsByte<EOrientation> */ __um(Orientation);                                       // 0x04B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x04B9   (0x0003)  MISSED
	FLinearColor                                       SliderBarColor;                                             // 0x04BC   (0x0010)  
	FLinearColor                                       SliderHandleColor;                                          // 0x04CC   (0x0010)  
	bool                                               IndentHandle;                                               // 0x04DC   (0x0001)  
	bool                                               locked;                                                     // 0x04DD   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x04DE   (0x0002)  MISSED
	float                                              StepSize;                                                   // 0x04E0   (0x0004)  
	bool                                               IsFocusable;                                                // 0x04E4   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x04E5   (0x0003)  MISSED
	FAkPropertyToControl                               ThePropertyToControl;                                       // 0x04E8   (0x0010)  
	FAkWwiseItemToControl                              ItemToControl;                                              // 0x04F8   (0x0040)  
	SDK_UNDEFINED(16,1223) /* FMulticastInlineDelegate */ __um(OnValueChanged);                                    // 0x0538   (0x0010)  
	SDK_UNDEFINED(16,1224) /* FMulticastInlineDelegate */ __um(OnItemDropped);                                     // 0x0548   (0x0010)  
	SDK_UNDEFINED(16,1225) /* FMulticastInlineDelegate */ __um(OnPropertyDropped);                                 // 0x0558   (0x0010)  
	unsigned char                                      UnknownData03_6[0x20];                                      // 0x0568   (0x0020)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkSlider.SetValue
	// void SetValue(float InValue);                                                                                         // [0x4aae000] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetStepSize
	// void SetStepSize(float InValue);                                                                                      // [0x4aadf80] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetSliderHandleColor
	// void SetSliderHandleColor(FLinearColor InValue);                                                                      // [0x4aadef0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                         // [0x4aade60] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetLocked
	// void SetLocked(bool InValue);                                                                                         // [0x4aadd30] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetIndentHandle
	// void SetIndentHandle(bool InValue);                                                                                   // [0x4aadca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetAkSliderItemProperty
	// void SetAkSliderItemProperty(FString ItemProperty);                                                                   // [0x4aadb70] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.SetAkSliderItemId
	// void SetAkSliderItemId(FGuid& ItemId);                                                                                // [0x4aadad0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.AkSlider.GetValue
	// float GetValue();                                                                                                     // [0x4aada10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkSlider.GetAkSliderItemProperty
	// FString GetAkSliderItemProperty();                                                                                    // [0x4aad810] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkSlider.GetAkSliderItemId
	// FGuid GetAkSliderItemId();                                                                                            // [0x4aad7d0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkSpatialAudioVolume
/// Size: 0x0018 (0x000268 - 0x000280)
class AAkSpatialAudioVolume : public AVolume
{ 
public:
	class UAkSurfaceReflectorSetComponent*             SurfaceReflectorSet;                                        // 0x0268   (0x0008)  
	class UAkLateReverbComponent*                      LateReverb;                                                 // 0x0270   (0x0008)  
	class UAkRoomComponent*                            Room;                                                       // 0x0278   (0x0008)  
};

/// Class /Script/AkAudio.AkSpotReflector
/// Size: 0x0028 (0x000230 - 0x000258)
class AAkSpotReflector : public AActor
{ 
public:
	class UAkAuxBus*                                   EarlyReflectionAuxBus;                                      // 0x0230   (0x0008)  
	SDK_UNDEFINED(16,1226) /* FString */               __um(EarlyReflectionAuxBusName);                            // 0x0238   (0x0010)  
	class UAkAcousticTexture*                          AcousticTexture;                                            // 0x0248   (0x0008)  
	float                                              DistanceScalingFactor;                                      // 0x0250   (0x0004)  
	float                                              Level;                                                      // 0x0254   (0x0004)  
};

/// Class /Script/AkAudio.AkStateValue
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkStateValue : public UAkGroupValue
{ 
public:
};

/// Class /Script/AkAudio.AkSubmixInputComponent
/// Size: 0x0050 (0x0004B0 - 0x000500)
class UAkSubmixInputComponent : public UAkAudioInputComponent
{ 
public:
	class USoundSubmix*                                SubmixToRecord;                                             // 0x04B0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x04B8   (0x0048)  MISSED
};

/// Struct /Script/AkAudio.AkSurfacePoly
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAkSurfacePoly
{ 
	class UAkAcousticTexture*                          Texture;                                                    // 0x0000   (0x0008)  
	float                                              Occlusion;                                                  // 0x0008   (0x0004)  
	bool                                               EnableSurface;                                              // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              SurfaceArea;                                                // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/AkAudio.AkSurfaceReflectorSetComponent
/// Size: 0x0030 (0x000230 - 0x000260)
class UAkSurfaceReflectorSetComponent : public UAkAcousticTextureSetComponent
{ 
public:
	bool                                               bEnableSurfaceReflectors;                                   // 0x0230   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0231   (0x0007)  MISSED
	TArray<FAkSurfacePoly>                             AcousticPolys;                                              // 0x0238   (0x0010)  
	bool                                               bEnableDiffraction;                                         // 0x0248   (0x0001)  
	bool                                               bEnableDiffractionOnBoundaryEdges;                          // 0x0249   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x024A   (0x0006)  MISSED
	class AActor*                                      AssociatedRoom;                                             // 0x0250   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0258   (0x0008)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet
	// void UpdateSurfaceReflectorSet();                                                                                     // [0x4ab3ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet
	// void SendSurfaceReflectorSet();                                                                                       // [0x4ab2c90] Final|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet
	// void RemoveSurfaceReflectorSet();                                                                                     // [0x4aa93f0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/AkAudio.AkCommunicationSettingsWithCommSelection
/// Size: 0x0008 (0x000020 - 0x000028)
struct FAkCommunicationSettingsWithCommSelection : FAkCommunicationSettings
{ 
	EAkCommSystem                                      CommunicationSystem;                                        // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Class /Script/AkAudio.AkSwitchInitializationSettings
/// Size: 0x00C8 (0x000030 - 0x0000F8)
class UAkSwitchInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0068)  
	FAkCommunicationSettingsWithCommSelection          CommunicationSettings;                                      // 0x00A0   (0x0028)  
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                      // 0x00C8   (0x0030)  


	/// Functions
	// Function /Script/AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                        // [0x4a9d400] Final|Native|Public  
};

/// Class /Script/AkAudio.AkSwitchPlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkSwitchPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkSwitchValue
/// Size: 0x0000 (0x000070 - 0x000070)
class UAkSwitchValue : public UAkGroupValue
{ 
public:
};

/// Class /Script/AkAudio.AkTrigger
/// Size: 0x0000 (0x000048 - 0x000048)
class UAkTrigger : public UAkAudioType
{ 
public:
};

/// Class /Script/AkAudio.AkTVOSInitializationSettings
/// Size: 0x00D8 (0x000030 - 0x000108)
class UAkTVOSInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0068)  
	FAkAudioSession                                    AudioSession;                                               // 0x00A0   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00B0   (0x0028)  
	FAkAdvancedInitializationSettings                  AdvancedSettings;                                           // 0x00D8   (0x002C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0104   (0x0004)  MISSED
};

/// Class /Script/AkAudio.AkTVOSPlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkTVOSPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkWaapiCalls
/// Size: 0x0000 (0x000030 - 0x000030)
class UAkWaapiCalls : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AkAudio.AkWaapiCalls.Unsubscribe
	// FAKWaapiJsonObject Unsubscribe(FAkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone);                     // [0x4ab3bc0] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.SubscribeToWaapi
	// FAKWaapiJsonObject SubscribeToWaapi(FAkWaapiUri& WaapiUri, FAKWaapiJsonObject& WaapiOptions, FDelegateProperty& Callback, FAkWaapiSubscriptionId& SubscriptionId, bool& SubscriptionDone); // [0x4ab3940] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.SetSubscriptionID
	// void SetSubscriptionID(FAkWaapiSubscriptionId& Subscription, int32_t ID);                                             // [0x4ab3870] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback
	// bool RegisterWaapiProjectLoadedCallback(FDelegateProperty& Callback);                                                 // [0x4ab2bd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback
	// bool RegisterWaapiConnectionLostCallback(FDelegateProperty& Callback);                                                // [0x4ab2b10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.GetSubscriptionID
	// int32_t GetSubscriptionID(FAkWaapiSubscriptionId& Subscription);                                                      // [0x4ab2a80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText
	// FText Conv_FAkWaapiSubscriptionIdToText(FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);                             // [0x4ab1f20] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString
	// FString Conv_FAkWaapiSubscriptionIdToString(FAkWaapiSubscriptionId& INAkWaapiSubscriptionId);                         // [0x4ab1e50] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkWaapiCalls.CallWaapi
	// FAKWaapiJsonObject CallWaapi(FAkWaapiUri& WaapiUri, FAKWaapiJsonObject& WaapiArgs, FAKWaapiJsonObject& WaapiOptions); // [0x4ab1a10] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AkAudio.SAkWaapiFieldNamesConv
/// Size: 0x0000 (0x000030 - 0x000030)
class USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText
	// FText Conv_FAkWaapiFieldNamesToText(FAkWaapiFieldNames& INAkWaapiFieldNames);                                         // [0x4aad6d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString
	// FString Conv_FAkWaapiFieldNamesToString(FAkWaapiFieldNames& INAkWaapiFieldNames);                                     // [0x4aad5e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AkAudio.AkWaapiJsonManager
/// Size: 0x0000 (0x000030 - 0x000030)
class UAkWaapiJsonManager : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AkAudio.AkWaapiJsonManager.SetStringField
	// FAKWaapiJsonObject SetStringField(FAkWaapiFieldNames& FieldName, FString FieldValue, FAKWaapiJsonObject Target);      // [0x4ab3690] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.SetObjectField
	// FAKWaapiJsonObject SetObjectField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject FieldValue, FAKWaapiJsonObject Target); // [0x4ab3470] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.SetNumberField
	// FAKWaapiJsonObject SetNumberField(FAkWaapiFieldNames& FieldName, float FieldValue, FAKWaapiJsonObject Target);        // [0x4ab32a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.SetBoolField
	// FAKWaapiJsonObject SetBoolField(FAkWaapiFieldNames& FieldName, bool FieldValue, FAKWaapiJsonObject Target);           // [0x4ab30d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.SetArrayStringFields
	// FAKWaapiJsonObject SetArrayStringFields(FAkWaapiFieldNames& FieldName, TArray<FString>& FieldStringValues, FAKWaapiJsonObject Target); // [0x4ab2ed0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.SetArrayObjectFields
	// FAKWaapiJsonObject SetArrayObjectFields(FAkWaapiFieldNames& FieldName, TArray<FAKWaapiJsonObject>& FieldObjectValues, FAKWaapiJsonObject Target); // [0x4ab2cb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetStringField
	// FString GetStringField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                                     // [0x4ab28f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetObjectField
	// FAKWaapiJsonObject GetObjectField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                          // [0x4ab2650] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetNumberField
	// float GetNumberField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                                       // [0x4ab2500] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetIntegerField
	// int32_t GetIntegerField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                                    // [0x4ab23b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetBoolField
	// bool GetBoolField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                                          // [0x4ab2260] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.GetArrayField
	// TArray<FAKWaapiJsonObject> GetArrayField(FAkWaapiFieldNames& FieldName, FAKWaapiJsonObject Target);                   // [0x4ab2010] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText
	// FText Conv_FAKWaapiJsonObjectToText(FAKWaapiJsonObject INAKWaapiJsonObject);                                          // [0x4ab1d20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString
	// FString Conv_FAKWaapiJsonObjectToString(FAKWaapiJsonObject INAKWaapiJsonObject);                                      // [0x4ab1c10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AkAudio.AkWaapiUriConv
/// Size: 0x0000 (0x000030 - 0x000030)
class UAkWaapiUriConv : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText
	// FText Conv_FAkWaapiUriToText(FAkWaapiUri& INAkWaapiUri);                                                              // [0x4aad6d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString
	// FString Conv_FAkWaapiUriToString(FAkWaapiUri& INAkWaapiUri);                                                          // [0x4aad5e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/AkAudio.AkWindowsAdvancedInitializationSettings
/// Size: 0x0008 (0x000030 - 0x000038)
struct FAkWindowsAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	bool                                               UseHeadMountedDisplayAudioDevice;                           // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	uint32_t                                           MaxSystemAudioObjects;                                      // 0x0034   (0x0004)  
};

/// Class /Script/AkAudio.AkWindowsInitializationSettings
/// Size: 0x00D0 (0x000030 - 0x000100)
class UAkWindowsInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0068)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A0   (0x0028)  
	FAkWindowsAdvancedInitializationSettings           AdvancedSettings;                                           // 0x00C8   (0x0038)  


	/// Functions
	// Function /Script/AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                        // [0x4a9d400] Final|Native|Public  
};

/// Class /Script/AkAudio.AkWin32PlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkWin32PlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkWin64PlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkWin64PlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkWindowsPlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkWindowsPlatformInfo : public UAkWin64PlatformInfo
{ 
public:
};

/// Struct /Script/AkAudio.AkWinGDKAdvancedInitializationSettings
/// Size: 0x0008 (0x000030 - 0x000038)
struct FAkWinGDKAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	bool                                               UseHeadMountedDisplayAudioDevice;                           // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	uint32_t                                           uMaxSystemAudioObjects;                                     // 0x0034   (0x0004)  
};

/// Class /Script/AkAudio.AkWinGDKInitializationSettings
/// Size: 0x00D0 (0x000030 - 0x000100)
class UAkWinGDKInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettingsWithSampleRate      CommonSettings;                                             // 0x0038   (0x0068)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A0   (0x0028)  
	FAkWinGDKAdvancedInitializationSettings            AdvancedSettings;                                           // 0x00C8   (0x0038)  


	/// Functions
	// Function /Script/AkAudio.AkWinGDKInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                        // [0x4a9d400] Final|Native|Public  
};

/// Class /Script/AkAudio.AkWinAnvilInitializationSettings
/// Size: 0x0000 (0x000100 - 0x000100)
class UAkWinAnvilInitializationSettings : public UAkWinGDKInitializationSettings
{ 
public:
};

/// Class /Script/AkAudio.AkWinGDKPlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkWinGDKPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkWinAnvilPlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkWinAnvilPlatformInfo : public UAkWinGDKPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkWwiseTree
/// Size: 0x0040 (0x000130 - 0x000170)
class UAkWwiseTree : public UWidget
{ 
public:
	SDK_UNDEFINED(16,1227) /* FMulticastInlineDelegate */ __um(OnSelectionChanged);                                // 0x0130   (0x0010)  
	SDK_UNDEFINED(16,1228) /* FMulticastInlineDelegate */ __um(OnItemDragged);                                     // 0x0140   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0150   (0x0020)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkWwiseTree.SetSearchText
	// void SetSearchText(FString newText);                                                                                  // [0x4aaddc0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AkAudio.AkWwiseTree.GetSelectedItem
	// FAkWwiseObjectDetails GetSelectedItem();                                                                              // [0x4ab27d0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AkAudio.AkWwiseTree.GetSearchText
	// FString GetSearchText();                                                                                              // [0x4aad890] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AkAudio.AkWwiseTreeSelector
/// Size: 0x0060 (0x000130 - 0x000190)
class UAkWwiseTreeSelector : public UWidget
{ 
public:
	SDK_UNDEFINED(16,1229) /* FMulticastInlineDelegate */ __um(OnSelectionChanged);                                // 0x0130   (0x0010)  
	SDK_UNDEFINED(16,1230) /* FMulticastInlineDelegate */ __um(OnItemDragged);                                     // 0x0140   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0150   (0x0040)  MISSED
};

/// Struct /Script/AkAudio.AkXboxOneGDKApuHeapInitializationSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FAkXboxOneGDKApuHeapInitializationSettings
{ 
	uint32_t                                           CachedSize;                                                 // 0x0000   (0x0004)  
	uint32_t                                           NonCachedSize;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/AkAudio.AkXboxOneGDKAdvancedInitializationSettings
/// Size: 0x0004 (0x000030 - 0x000034)
struct FAkXboxOneGDKAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	uint16_t                                           MaximumNumberOfXMAVoices;                                   // 0x0030   (0x0002)  
	bool                                               UseHardwareCodecLowLatencyMode;                             // 0x0032   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0033   (0x0001)  MISSED
};

/// Class /Script/AkAudio.AkXboxOneGDKInitializationSettings
/// Size: 0x00D0 (0x000030 - 0x000100)
class UAkXboxOneGDKInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettings                    CommonSettings;                                             // 0x0038   (0x0060)  
	FAkXboxOneGDKApuHeapInitializationSettings         ApuHeapSettings;                                            // 0x0098   (0x0008)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A0   (0x0028)  
	FAkXboxOneGDKAdvancedInitializationSettings        AdvancedSettings;                                           // 0x00C8   (0x0034)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00FC   (0x0004)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkXboxOneGDKInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                        // [0x4a9d400] Final|Native|Public  
};

/// Class /Script/AkAudio.AkXboxOneAnvilInitializationSettings
/// Size: 0x0000 (0x000100 - 0x000100)
class UAkXboxOneAnvilInitializationSettings : public UAkXboxOneGDKInitializationSettings
{ 
public:
};

/// Class /Script/AkAudio.AkXB1InitializationSettings
/// Size: 0x0000 (0x000100 - 0x000100)
class UAkXB1InitializationSettings : public UAkXboxOneGDKInitializationSettings
{ 
public:
};

/// Class /Script/AkAudio.AkXboxOneGDKPlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkXboxOneGDKPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkXboxOneAnvilPlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkXboxOneAnvilPlatformInfo : public UAkXboxOneGDKPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.AkXB1PlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkXB1PlatformInfo : public UAkXboxOneGDKPlatformInfo
{ 
public:
};

/// Struct /Script/AkAudio.AkXboxOneApuHeapInitializationSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FAkXboxOneApuHeapInitializationSettings
{ 
	uint32_t                                           CachedSize;                                                 // 0x0000   (0x0004)  
	uint32_t                                           NonCachedSize;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/AkAudio.AkXboxOneAdvancedInitializationSettings
/// Size: 0x0004 (0x000030 - 0x000034)
struct FAkXboxOneAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	uint16_t                                           MaximumNumberOfXMAVoices;                                   // 0x0030   (0x0002)  
	bool                                               UseHardwareCodecLowLatencyMode;                             // 0x0032   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0033   (0x0001)  MISSED
};

/// Class /Script/AkAudio.AkXboxOneInitializationSettings
/// Size: 0x00D0 (0x000030 - 0x000100)
class UAkXboxOneInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettings                    CommonSettings;                                             // 0x0038   (0x0060)  
	FAkXboxOneApuHeapInitializationSettings            ApuHeapSettings;                                            // 0x0098   (0x0008)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A0   (0x0028)  
	FAkXboxOneAdvancedInitializationSettings           AdvancedSettings;                                           // 0x00C8   (0x0034)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00FC   (0x0004)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                        // [0x4a9d400] Final|Native|Public  
};

/// Class /Script/AkAudio.AkXboxOnePlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkXboxOnePlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Struct /Script/AkAudio.AkXSXApuHeapInitializationSettings
/// Size: 0x0008 (0x000000 - 0x000008)
struct FAkXSXApuHeapInitializationSettings
{ 
	uint32_t                                           CachedSize;                                                 // 0x0000   (0x0004)  
	uint32_t                                           NonCachedSize;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/AkAudio.AkXSXAdvancedInitializationSettings
/// Size: 0x000C (0x000030 - 0x00003C)
struct FAkXSXAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering
{ 
	uint16_t                                           MaximumNumberOfXMAVoices;                                   // 0x0030   (0x0002)  
	bool                                               UseHardwareCodecLowLatencyMode;                             // 0x0032   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0033   (0x0001)  MISSED
	uint16_t                                           MaximumNumberOfOpusVoices;                                  // 0x0034   (0x0002)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0036   (0x0002)  MISSED
	uint32_t                                           uMaxSystemAudioObjects;                                     // 0x0038   (0x0004)  
};

/// Class /Script/AkAudio.AkXSXInitializationSettings
/// Size: 0x00D8 (0x000030 - 0x000108)
class UAkXSXInitializationSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	FAkCommonInitializationSettings                    CommonSettings;                                             // 0x0038   (0x0060)  
	FAkXSXApuHeapInitializationSettings                ApuHeapSettings;                                            // 0x0098   (0x0008)  
	FAkCommunicationSettingsWithSystemInitialization   CommunicationSettings;                                      // 0x00A0   (0x0028)  
	FAkXSXAdvancedInitializationSettings               AdvancedSettings;                                           // 0x00C8   (0x003C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0104   (0x0004)  MISSED


	/// Functions
	// Function /Script/AkAudio.AkXSXInitializationSettings.MigrateMultiCoreRendering
	// void MigrateMultiCoreRendering(bool NewValue);                                                                        // [0x4a9d400] Final|Native|Public  
};

/// Class /Script/AkAudio.AkMPXInitializationSettings
/// Size: 0x0000 (0x000108 - 0x000108)
class UAkMPXInitializationSettings : public UAkXSXInitializationSettings
{ 
public:
};

/// Class /Script/AkAudio.AkXSXPlatformInfo
/// Size: 0x0000 (0x000078 - 0x000078)
class UAkXSXPlatformInfo : public UAkPlatformInfo
{ 
public:
};

/// Class /Script/AkAudio.MovieSceneAkAudioEventSection
/// Size: 0x00E8 (0x0000F0 - 0x0001D8)
class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x00F0   (0x0040)  MISSED
	class UAkAudioEvent*                               Event;                                                      // 0x0130   (0x0008)  
	bool                                               RetriggerEvent;                                             // 0x0138   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0139   (0x0003)  MISSED
	int32_t                                            ScrubTailLengthMs;                                          // 0x013C   (0x0004)  
	bool                                               StopAtSectionEnd;                                           // 0x0140   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0141   (0x0007)  MISSED
	SDK_UNDEFINED(16,1231) /* FString */               __um(EventName);                                            // 0x0148   (0x0010)  
	unsigned char                                      UnknownData03_5[0x20];                                      // 0x0158   (0x0020)  MISSED
	float                                              MaxSourceDuration;                                          // 0x0178   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x017C   (0x0004)  MISSED
	SDK_UNDEFINED(16,1232) /* FString */               __um(MaxDurationSourceID);                                  // 0x0180   (0x0010)  
	unsigned char                                      UnknownData05_6[0x48];                                      // 0x0190   (0x0048)  MISSED
};

/// Class /Script/AkAudio.MovieSceneAkTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneAkTrack : public UMovieSceneTrack
{ 
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x0098   (0x0010)  
	bool                                               bIsAMasterTrack;                                            // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Class /Script/AkAudio.MovieSceneAkAudioEventTrack
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B0   (0x0008)  MISSED
};

/// Struct /Script/AkAudio.MovieSceneTangentDataSerializationHelper
/// Size: 0x0014 (0x000000 - 0x000014)
struct FMovieSceneTangentDataSerializationHelper
{ 
	float                                              ArriveTangent;                                              // 0x0000   (0x0004)  
	float                                              LeaveTangent;                                               // 0x0004   (0x0004)  
	SDK_UNDEFINED(1,1233) /* TEnumAsByte<ERichCurveTangentWeightMode> */ __um(TangentWeightMode);                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              ArriveTangentWeight;                                        // 0x000C   (0x0004)  
	float                                              LeaveTangentWeight;                                         // 0x0010   (0x0004)  
};

/// Struct /Script/AkAudio.MovieSceneFloatValueSerializationHelper
/// Size: 0x001C (0x000000 - 0x00001C)
struct FMovieSceneFloatValueSerializationHelper
{ 
	float                                              value;                                                      // 0x0000   (0x0004)  
	SDK_UNDEFINED(1,1234) /* TEnumAsByte<ERichCurveInterpMode> */ __um(InterpMode);                                // 0x0004   (0x0001)  
	SDK_UNDEFINED(1,1235) /* TEnumAsByte<ERichCurveTangentMode> */ __um(TangentMode);                              // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0006   (0x0002)  MISSED
	FMovieSceneTangentDataSerializationHelper          Tangent;                                                    // 0x0008   (0x0014)  
};

/// Struct /Script/AkAudio.MovieSceneFloatChannelSerializationHelper
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMovieSceneFloatChannelSerializationHelper
{ 
	SDK_UNDEFINED(1,1236) /* TEnumAsByte<ERichCurveExtrapolation> */ __um(PreInfinityExtrap);                      // 0x0000   (0x0001)  
	SDK_UNDEFINED(1,1237) /* TEnumAsByte<ERichCurveExtrapolation> */ __um(PostInfinityExtrap);                     // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	TArray<int32_t>                                    Times;                                                      // 0x0008   (0x0010)  
	TArray<FMovieSceneFloatValueSerializationHelper>   Values;                                                     // 0x0018   (0x0010)  
	float                                              defaultValue;                                               // 0x0028   (0x0004)  
	bool                                               bHasDefaultValue;                                           // 0x002C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Class /Script/AkAudio.MovieSceneAkAudioRTPCSection
/// Size: 0x0168 (0x0000F0 - 0x000258)
class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{ 
public:
	class UAkRtpc*                                     RTPC;                                                       // 0x00F0   (0x0008)  
	SDK_UNDEFINED(16,1238) /* FString */               __um(Name);                                                 // 0x00F8   (0x0010)  
	FRichCurve                                         FloatCurve;                                                 // 0x0108   (0x0080)  
	FMovieSceneFloatChannelSerializationHelper         FloatChannelSerializationHelper;                            // 0x0188   (0x0030)  
	FMovieSceneFloatChannel                            RTPCChannel;                                                // 0x01B8   (0x00A0)  
};

/// Class /Script/AkAudio.MovieSceneAkAudioRTPCTrack
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B0   (0x0008)  MISSED
};

/// Class /Script/AkAudio.PostEventAsync
/// Size: 0x0070 (0x000038 - 0x0000A8)
class UPostEventAsync : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1239) /* FMulticastInlineDelegate */ __um(COMPLETED);                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0048   (0x0060)  MISSED


	/// Functions
	// Function /Script/AkAudio.PostEventAsync.PostEventAsync
	// class UPostEventAsync* PostEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class AActor* Actor, int32_t CallbackMask, FDelegateProperty& PostEventCallback, TArray<FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed); // [0x4ab71e0] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AkAudio.PostEventAsync.PollPostEventFuture
	// void PollPostEventFuture();                                                                                           // [0x4ab71a0] Final|Native|Private 
};

/// Class /Script/AkAudio.PostEventAtLocationAsync
/// Size: 0x0050 (0x000038 - 0x000088)
class UPostEventAtLocationAsync : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1240) /* FMulticastInlineDelegate */ __um(COMPLETED);                                         // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x0048   (0x0040)  MISSED


	/// Functions
	// Function /Script/AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync
	// class UPostEventAtLocationAsync* PostEventAtLocationAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation); // [0x4ab7480] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AkAudio.PostEventAtLocationAsync.PollPostEventFuture
	// void PollPostEventFuture();                                                                                           // [0x4ab71c0] Final|Native|Private 
};

/// Struct /Script/AkAudio.AKWaapiJsonObject
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAKWaapiJsonObject
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/AkAudio.AkWaapiSubscriptionId
/// Size: 0x0008 (0x000000 - 0x000008)
struct FAkWaapiSubscriptionId
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/AkAudio.AkExternalSourceInfo
/// Size: 0x0038 (0x000000 - 0x000038)
struct FAkExternalSourceInfo
{ 
	SDK_UNDEFINED(16,1241) /* FString */               __um(ExternalSrcName);                                      // 0x0000   (0x0010)  
	AkCodecId                                          CodecID;                                                    // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	SDK_UNDEFINED(16,1242) /* FString */               __um(Filename);                                             // 0x0018   (0x0010)  
	class UAkExternalMediaAsset*                       ExternalSourceAsset;                                        // 0x0028   (0x0008)  
	bool                                               IsStreamed;                                                 // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/AkAudio.AkMidiEventBase
/// Size: 0x0002 (0x000000 - 0x000002)
struct FAkMidiEventBase
{ 
	EAkMidiEventType                                   Type;                                                       // 0x0000   (0x0001)  
	char                                               Chan;                                                       // 0x0001   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiProgramChange
/// Size: 0x0001 (0x000002 - 0x000003)
struct FAkMidiProgramChange : FAkMidiEventBase
{ 
	char                                               ProgramNum;                                                 // 0x0002   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiChannelAftertouch
/// Size: 0x0001 (0x000002 - 0x000003)
struct FAkMidiChannelAftertouch : FAkMidiEventBase
{ 
	char                                               value;                                                      // 0x0002   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiNoteAftertouch
/// Size: 0x0002 (0x000002 - 0x000004)
struct FAkMidiNoteAftertouch : FAkMidiEventBase
{ 
	char                                               Note;                                                       // 0x0002   (0x0001)  
	char                                               value;                                                      // 0x0003   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiPitchBend
/// Size: 0x0006 (0x000002 - 0x000008)
struct FAkMidiPitchBend : FAkMidiEventBase
{ 
	char                                               ValueLsb;                                                   // 0x0002   (0x0001)  
	char                                               ValueMsb;                                                   // 0x0003   (0x0001)  
	int32_t                                            FullValue;                                                  // 0x0004   (0x0004)  
};

/// Struct /Script/AkAudio.AkMidiCc
/// Size: 0x0002 (0x000002 - 0x000004)
struct FAkMidiCc : FAkMidiEventBase
{ 
	EAkMidiCcValues                                    Cc;                                                         // 0x0002   (0x0001)  
	char                                               value;                                                      // 0x0003   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiNoteOnOff
/// Size: 0x0002 (0x000002 - 0x000004)
struct FAkMidiNoteOnOff : FAkMidiEventBase
{ 
	char                                               Note;                                                       // 0x0002   (0x0001)  
	char                                               Velocity;                                                   // 0x0003   (0x0001)  
};

/// Struct /Script/AkAudio.AkMidiGeneric
/// Size: 0x0002 (0x000002 - 0x000004)
struct FAkMidiGeneric : FAkMidiEventBase
{ 
	char                                               param1;                                                     // 0x0002   (0x0001)  
	char                                               param2;                                                     // 0x0003   (0x0001)  
};

/// Struct /Script/AkAudio.AkOutputSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAkOutputSettings
{ 
	SDK_UNDEFINED(16,1243) /* FString */               __um(AudioDeviceSharesetName);                              // 0x0000   (0x0010)  
	int32_t                                            IdDevice;                                                   // 0x0010   (0x0004)  
	PanningRule                                        PanRule;                                                    // 0x0014   (0x0001)  
	AkChannelConfiguration                             ChannelConfig;                                              // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0016   (0x0002)  MISSED
};

/// Struct /Script/AkAudio.AkChannelMask
/// Size: 0x0004 (0x000000 - 0x000004)
struct FAkChannelMask
{ 
	int32_t                                            ChannelMask;                                                // 0x0000   (0x0004)  
};

/// Struct /Script/AkAudio.AkReverbDescriptor
/// Size: 0x0028 (0x000000 - 0x000028)
struct FAkReverbDescriptor
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/AkAudio.AkAcousticTextureParams
/// Size: 0x0020 (0x000000 - 0x000020)
struct FAkAcousticTextureParams
{ 
	FVector4                                           AbsorptionValues;                                           // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0010   (0x0010)  MISSED
};

/// Struct /Script/AkAudio.AkGeometrySurfacePropertiesToMap
/// Size: 0x0038 (0x000000 - 0x000038)
struct FAkGeometrySurfacePropertiesToMap
{ 
	SDK_UNDEFINED(48,1244) /* TWeakObjectPtr<UAkAcousticTexture*> */ __um(AcousticTexture);                        // 0x0000   (0x0030)  
	float                                              OcclusionValue;                                             // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/AkAudio.AkSurfaceEdgeInfo
/// Size: 0x0028 (0x000000 - 0x000028)
struct FAkSurfaceEdgeInfo
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/AkAudio.AkSurfaceEdgeVerts
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAkSurfaceEdgeVerts
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/AkAudio.AkWaapiFieldNames
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAkWaapiFieldNames
{ 
	SDK_UNDEFINED(16,1245) /* FString */               __um(FieldName);                                            // 0x0000   (0x0010)  
};

/// Struct /Script/AkAudio.AkWaapiUri
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAkWaapiUri
{ 
	SDK_UNDEFINED(16,1246) /* FString */               __um(Uri);                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/AkAudio.MovieSceneAkAudioEventTemplate
/// Size: 0x0008 (0x000020 - 0x000028)
struct FMovieSceneAkAudioEventTemplate : FMovieSceneEvalTemplate
{ 
	class UMovieSceneAkAudioEventSection*              Section;                                                    // 0x0020   (0x0008)  
};

/// Struct /Script/AkAudio.MovieSceneAkAudioRTPCTemplate
/// Size: 0x0008 (0x000020 - 0x000028)
struct FMovieSceneAkAudioRTPCTemplate : FMovieSceneEvalTemplate
{ 
	class UMovieSceneAkAudioRTPCSection*               Section;                                                    // 0x0020   (0x0008)  
};

