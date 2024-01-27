
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: MovieScene
/// dependency: NiagaraCore
/// dependency: NiagaraShader

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionEndBehavior
/// Size: 0x04
enum class ENiagaraSystemSpawnSectionEndBehavior : uint32_t
{
	ENiagaraSystemSpawnSectionEndBehavior__SetSystemInactive                         = 0,
	ENiagaraSystemSpawnSectionEndBehavior__Deactivate                                = 1,
	ENiagaraSystemSpawnSectionEndBehavior__None                                      = 2,
	ENiagaraSystemSpawnSectionEndBehavior__ENiagaraSystemSpawnSectionEndBehavior_MAX = 3
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
/// Size: 0x03
enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint32_t
{
	ENiagaraSystemSpawnSectionEvaluateBehavior__ActivateIfInactive                   = 0,
	ENiagaraSystemSpawnSectionEvaluateBehavior__None                                 = 1,
	ENiagaraSystemSpawnSectionEvaluateBehavior__ENiagaraSystemSpawnSectionEvaluateBehavior_MAX = 2
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionStartBehavior
/// Size: 0x02
enum class ENiagaraSystemSpawnSectionStartBehavior : uint32_t
{
	ENiagaraSystemSpawnSectionStartBehavior__Activate                                = 0,
	ENiagaraSystemSpawnSectionStartBehavior__ENiagaraSystemSpawnSectionStartBehavior_MAX = 1
};

/// Enum /Script/Niagara.ENiagaraBakerViewMode
/// Size: 0x09
enum class ENiagaraBakerViewMode : uint32_t
{
	ENiagaraBakerViewMode__Perspective                                               = 0,
	ENiagaraBakerViewMode__OrthoFront                                                = 1,
	ENiagaraBakerViewMode__OrthoBack                                                 = 2,
	ENiagaraBakerViewMode__OrthoLeft                                                 = 3,
	ENiagaraBakerViewMode__OrthoRight                                                = 4,
	ENiagaraBakerViewMode__OrthoTop                                                  = 5,
	ENiagaraBakerViewMode__OrthoBottom                                               = 6,
	ENiagaraBakerViewMode__Num                                                       = 7,
	ENiagaraBakerViewMode__ENiagaraBakerViewMode_MAX                                 = 8
};

/// Enum /Script/Niagara.ENiagaraCollisionMode
/// Size: 0x05
enum class ENiagaraCollisionMode : uint8_t
{
	ENiagaraCollisionMode__None                                                      = 0,
	ENiagaraCollisionMode__SceneGeometry                                             = 1,
	ENiagaraCollisionMode__DepthBuffer                                               = 2,
	ENiagaraCollisionMode__DistanceField                                             = 3,
	ENiagaraCollisionMode__ENiagaraCollisionMode_MAX                                 = 4
};

/// Enum /Script/Niagara.ENiagaraFunctionDebugState
/// Size: 0x03
enum class ENiagaraFunctionDebugState : uint8_t
{
	ENiagaraFunctionDebugState__NoDebug                                              = 0,
	ENiagaraFunctionDebugState__Basic                                                = 1,
	ENiagaraFunctionDebugState__ENiagaraFunctionDebugState_MAX                       = 2
};

/// Enum /Script/Niagara.ENiagaraSystemInstanceState
/// Size: 0x08
enum class ENiagaraSystemInstanceState : uint8_t
{
	ENiagaraSystemInstanceState__None                                                = 0,
	ENiagaraSystemInstanceState__PendingSpawn                                        = 1,
	ENiagaraSystemInstanceState__PendingSpawnPaused                                  = 2,
	ENiagaraSystemInstanceState__Spawning                                            = 3,
	ENiagaraSystemInstanceState__Running                                             = 4,
	ENiagaraSystemInstanceState__Paused                                              = 5,
	ENiagaraSystemInstanceState__Num                                                 = 6,
	ENiagaraSystemInstanceState__ENiagaraSystemInstanceState_MAX                     = 7
};

/// Enum /Script/Niagara.ENCPoolMethod
/// Size: 0x06
enum class ENCPoolMethod : uint8_t
{
	ENCPoolMethod__None                                                              = 0,
	ENCPoolMethod__AutoRelease                                                       = 1,
	ENCPoolMethod__ManualRelease                                                     = 2,
	ENCPoolMethod__ManualRelease_OnComplete                                          = 3,
	ENCPoolMethod__FreeInPool                                                        = 4,
	ENCPoolMethod__ENCPoolMethod_MAX                                                 = 5
};

/// Enum /Script/Niagara.ENiagaraLegacyTrailWidthMode
/// Size: 0x04
enum class ENiagaraLegacyTrailWidthMode : uint8_t
{
	ENiagaraLegacyTrailWidthMode__FromCentre                                         = 0,
	ENiagaraLegacyTrailWidthMode__FromFirst                                          = 1,
	ENiagaraLegacyTrailWidthMode__FromSecond                                         = 2,
	ENiagaraLegacyTrailWidthMode__ENiagaraLegacyTrailWidthMode_MAX                   = 3
};

/// Enum /Script/Niagara.ENiagaraRendererSourceDataMode
/// Size: 0x03
enum class ENiagaraRendererSourceDataMode : uint8_t
{
	ENiagaraRendererSourceDataMode__Particles                                        = 0,
	ENiagaraRendererSourceDataMode__Emitter                                          = 1,
	ENiagaraRendererSourceDataMode__ENiagaraRendererSourceDataMode_MAX               = 2
};

/// Enum /Script/Niagara.ENiagaraBindingSource
/// Size: 0x07
enum class ENiagaraBindingSource : uint8_t
{
	ImplicitFromSource                                                               = 0,
	ExplicitParticles                                                                = 1,
	ExplicitEmitter                                                                  = 2,
	ExplicitSystem                                                                   = 3,
	ExplicitUser                                                                     = 4,
	MaxBindingSource                                                                 = 5,
	ENiagaraBindingSource_MAX                                                        = 6
};

/// Enum /Script/Niagara.ENiagaraIterationSource
/// Size: 0x03
enum class ENiagaraIterationSource : uint8_t
{
	ENiagaraIterationSource__Particles                                               = 0,
	ENiagaraIterationSource__DataInterface                                           = 1,
	ENiagaraIterationSource__ENiagaraIterationSource_MAX                             = 2
};

/// Enum /Script/Niagara.ENiagaraScriptGroup
/// Size: 0x05
enum class ENiagaraScriptGroup : uint8_t
{
	ENiagaraScriptGroup__Particle                                                    = 0,
	ENiagaraScriptGroup__Emitter                                                     = 1,
	ENiagaraScriptGroup__System                                                      = 2,
	ENiagaraScriptGroup__Max                                                         = 3,
	ENiagaraScriptGroup__ENiagaraScriptGroup_MAX                                     = 4
};

/// Enum /Script/Niagara.ENiagaraScriptContextStaticSwitch
/// Size: 0x04
enum class ENiagaraScriptContextStaticSwitch : uint8_t
{
	ENiagaraScriptContextStaticSwitch__System                                        = 0,
	ENiagaraScriptContextStaticSwitch__Emitter                                       = 1,
	ENiagaraScriptContextStaticSwitch__Particle                                      = 2,
	ENiagaraScriptContextStaticSwitch__ENiagaraScriptContextStaticSwitch_MAX         = 3
};

/// Enum /Script/Niagara.ENiagaraCompileUsageStaticSwitch
/// Size: 0x06
enum class ENiagaraCompileUsageStaticSwitch : uint8_t
{
	ENiagaraCompileUsageStaticSwitch__Spawn                                          = 0,
	ENiagaraCompileUsageStaticSwitch__Update                                         = 1,
	ENiagaraCompileUsageStaticSwitch__Event                                          = 2,
	ENiagaraCompileUsageStaticSwitch__SimulationStage                                = 3,
	ENiagaraCompileUsageStaticSwitch__Default                                        = 4,
	ENiagaraCompileUsageStaticSwitch__ENiagaraCompileUsageStaticSwitch_MAX           = 5
};

/// Enum /Script/Niagara.ENiagaraScriptUsage
/// Size: 0x14
enum class ENiagaraScriptUsage : uint8_t
{
	ENiagaraScriptUsage__Function                                                    = 0,
	ENiagaraScriptUsage__Module                                                      = 1,
	ENiagaraScriptUsage__DynamicInput                                                = 2,
	ENiagaraScriptUsage__ParticleSpawnScript                                         = 3,
	ENiagaraScriptUsage__ParticleSpawnScriptInterpolated                             = 4,
	ENiagaraScriptUsage__ParticleUpdateScript                                        = 5,
	ENiagaraScriptUsage__ParticleEventScript                                         = 6,
	ENiagaraScriptUsage__ParticleSimulationStageScript                               = 7,
	ENiagaraScriptUsage__ParticleGPUComputeScript                                    = 8,
	ENiagaraScriptUsage__EmitterSpawnScript                                          = 9,
	ENiagaraScriptUsage__EmitterUpdateScript                                         = 10,
	ENiagaraScriptUsage__SystemSpawnScript                                           = 11,
	ENiagaraScriptUsage__SystemUpdateScript                                          = 12,
	ENiagaraScriptUsage__ENiagaraScriptUsage_MAX                                     = 13
};

/// Enum /Script/Niagara.ENiagaraScriptCompileStatus
/// Size: 0x08
enum class ENiagaraScriptCompileStatus : uint8_t
{
	ENiagaraScriptCompileStatus__NCS_Unknown                                         = 0,
	ENiagaraScriptCompileStatus__NCS_Dirty                                           = 1,
	ENiagaraScriptCompileStatus__NCS_Error                                           = 2,
	ENiagaraScriptCompileStatus__NCS_UpToDate                                        = 3,
	ENiagaraScriptCompileStatus__NCS_BeingCreated                                    = 4,
	ENiagaraScriptCompileStatus__NCS_UpToDateWithWarnings                            = 5,
	ENiagaraScriptCompileStatus__NCS_ComputeUpToDateWithWarnings                     = 6,
	ENiagaraScriptCompileStatus__NCS_MAX                                             = 7
};

/// Enum /Script/Niagara.ENiagaraInputNodeUsage
/// Size: 0x07
enum class ENiagaraInputNodeUsage : uint8_t
{
	ENiagaraInputNodeUsage__Undefined                                                = 0,
	ENiagaraInputNodeUsage__Parameter                                                = 1,
	ENiagaraInputNodeUsage__Attribute                                                = 2,
	ENiagaraInputNodeUsage__SystemConstant                                           = 3,
	ENiagaraInputNodeUsage__TranslatorConstant                                       = 4,
	ENiagaraInputNodeUsage__RapidIterationParameter                                  = 5,
	ENiagaraInputNodeUsage__ENiagaraInputNodeUsage_MAX                               = 6
};

/// Enum /Script/Niagara.ENiagaraDataSetType
/// Size: 0x04
enum class ENiagaraDataSetType : uint8_t
{
	ENiagaraDataSetType__ParticleData                                                = 0,
	ENiagaraDataSetType__Shared                                                      = 1,
	ENiagaraDataSetType__Event                                                       = 2,
	ENiagaraDataSetType__ENiagaraDataSetType_MAX                                     = 3
};

/// Enum /Script/Niagara.ENiagaraStatDisplayMode
/// Size: 0x03
enum class ENiagaraStatDisplayMode : uint8_t
{
	ENiagaraStatDisplayMode__Percent                                                 = 0,
	ENiagaraStatDisplayMode__Absolute                                                = 1,
	ENiagaraStatDisplayMode__ENiagaraStatDisplayMode_MAX                             = 2
};

/// Enum /Script/Niagara.ENiagaraStatEvaluationType
/// Size: 0x03
enum class ENiagaraStatEvaluationType : uint8_t
{
	ENiagaraStatEvaluationType__Average                                              = 0,
	ENiagaraStatEvaluationType__Maximum                                              = 1,
	ENiagaraStatEvaluationType__ENiagaraStatEvaluationType_MAX                       = 2
};

/// Enum /Script/Niagara.ENiagaraAgeUpdateMode
/// Size: 0x04
enum class ENiagaraAgeUpdateMode : uint8_t
{
	ENiagaraAgeUpdateMode__TickDeltaTime                                             = 0,
	ENiagaraAgeUpdateMode__DesiredAge                                                = 1,
	ENiagaraAgeUpdateMode__DesiredAgeNoSeek                                          = 2,
	ENiagaraAgeUpdateMode__ENiagaraAgeUpdateMode_MAX                                 = 3
};

/// Enum /Script/Niagara.ENiagaraSimTarget
/// Size: 0x03
enum class ENiagaraSimTarget : uint8_t
{
	ENiagaraSimTarget__CPUSim                                                        = 0,
	ENiagaraSimTarget__GPUComputeSim                                                 = 1,
	ENiagaraSimTarget__ENiagaraSimTarget_MAX                                         = 2
};

/// Enum /Script/Niagara.ENiagaraRendererMotionVectorSetting
/// Size: 0x05
enum class ENiagaraRendererMotionVectorSetting : uint32_t
{
	ENiagaraRendererMotionVectorSetting__AutoDetect                                  = 0,
	ENiagaraRendererMotionVectorSetting__Precise                                     = 1,
	ENiagaraRendererMotionVectorSetting__Approximate                                 = 2,
	ENiagaraRendererMotionVectorSetting__Disable                                     = 3,
	ENiagaraRendererMotionVectorSetting__ENiagaraRendererMotionVectorSetting_MAX     = 4
};

/// Enum /Script/Niagara.ENiagaraDefaultRendererMotionVectorSetting
/// Size: 0x03
enum class ENiagaraDefaultRendererMotionVectorSetting : uint32_t
{
	ENiagaraDefaultRendererMotionVectorSetting__Precise                              = 0,
	ENiagaraDefaultRendererMotionVectorSetting__Approximate                          = 1,
	ENiagaraDefaultRendererMotionVectorSetting__ENiagaraDefaultRendererMotionVectorSetting_MAX = 2
};

/// Enum /Script/Niagara.ENiagaraDefaultMode
/// Size: 0x05
enum class ENiagaraDefaultMode : uint8_t
{
	ENiagaraDefaultMode__Value                                                       = 0,
	ENiagaraDefaultMode__Binding                                                     = 1,
	ENiagaraDefaultMode__Custom                                                      = 2,
	ENiagaraDefaultMode__FailIfPreviouslyNotSet                                      = 3,
	ENiagaraDefaultMode__ENiagaraDefaultMode_MAX                                     = 4
};

/// Enum /Script/Niagara.ENiagaraMipMapGeneration
/// Size: 0x04
enum class ENiagaraMipMapGeneration : uint8_t
{
	ENiagaraMipMapGeneration__Disabled                                               = 0,
	ENiagaraMipMapGeneration__PostStage                                              = 1,
	ENiagaraMipMapGeneration__PostSimulate                                           = 2,
	ENiagaraMipMapGeneration__ENiagaraMipMapGeneration_MAX                           = 3
};

/// Enum /Script/Niagara.ENiagaraGpuBufferFormat
/// Size: 0x05
enum class ENiagaraGpuBufferFormat : uint8_t
{
	ENiagaraGpuBufferFormat__Float                                                   = 0,
	ENiagaraGpuBufferFormat__HalfFloat                                               = 1,
	ENiagaraGpuBufferFormat__UnsignedNormalizedByte                                  = 2,
	ENiagaraGpuBufferFormat__Max                                                     = 3,
	ENiagaraGpuBufferFormat__ENiagaraGpuBufferFormat_MAX                             = 4
};

/// Enum /Script/Niagara.ENiagaraTickBehavior
/// Size: 0x05
enum class ENiagaraTickBehavior : uint8_t
{
	ENiagaraTickBehavior__UsePrereqs                                                 = 0,
	ENiagaraTickBehavior__UseComponentTickGroup                                      = 1,
	ENiagaraTickBehavior__ForceTickFirst                                             = 2,
	ENiagaraTickBehavior__ForceTickLast                                              = 3,
	ENiagaraTickBehavior__ENiagaraTickBehavior_MAX                                   = 4
};

/// Enum /Script/Niagara.ENDIExport_GPUAllocationMode
/// Size: 0x03
enum class ENDIExport_GPUAllocationMode : uint8_t
{
	ENDIExport_GPUAllocationMode__FixedSize                                          = 0,
	ENDIExport_GPUAllocationMode__PerParticle                                        = 1,
	ENDIExport_GPUAllocationMode__ENDIExport_MAX                                     = 2
};

/// Enum /Script/Niagara.ENDILandscape_SourceMode
/// Size: 0x04
enum class ENDILandscape_SourceMode : uint8_t
{
	ENDILandscape_SourceMode__Default                                                = 0,
	ENDILandscape_SourceMode__Source                                                 = 1,
	ENDILandscape_SourceMode__AttachParent                                           = 2,
	ENDILandscape_SourceMode__ENDILandscape_MAX                                      = 3
};

/// Enum /Script/Niagara.ESetResolutionMethod
/// Size: 0x04
enum class ESetResolutionMethod : uint32_t
{
	ESetResolutionMethod__Independent                                                = 0,
	ESetResolutionMethod__MaxAxis                                                    = 1,
	ESetResolutionMethod__CellSize                                                   = 2,
	ESetResolutionMethod__ESetResolutionMethod_MAX                                   = 3
};

/// Enum /Script/Niagara.ENDISkeletalMesh_SkinningMode
/// Size: 0x05
enum class ENDISkeletalMesh_SkinningMode : uint8_t
{
	ENDISkeletalMesh_SkinningMode__Invalid                                           = 255,
	ENDISkeletalMesh_SkinningMode__None                                              = 0,
	ENDISkeletalMesh_SkinningMode__SkinOnTheFly                                      = 1,
	ENDISkeletalMesh_SkinningMode__PreSkin                                           = 2,
	ENDISkeletalMesh_SkinningMode__ENDISkeletalMesh_MAX                              = 256
};

/// Enum /Script/Niagara.ENDISkeletalMesh_SourceMode
/// Size: 0x04
enum class ENDISkeletalMesh_SourceMode : uint8_t
{
	ENDISkeletalMesh_SourceMode__Default                                             = 0,
	ENDISkeletalMesh_SourceMode__Source                                              = 1,
	ENDISkeletalMesh_SourceMode__AttachParent                                        = 2,
	ENDISkeletalMesh_SourceMode__ENDISkeletalMesh_MAX                                = 3
};

/// Enum /Script/Niagara.ENDIStaticMesh_SourceMode
/// Size: 0x05
enum class ENDIStaticMesh_SourceMode : uint8_t
{
	ENDIStaticMesh_SourceMode__Default                                               = 0,
	ENDIStaticMesh_SourceMode__Source                                                = 1,
	ENDIStaticMesh_SourceMode__AttachParent                                          = 2,
	ENDIStaticMesh_SourceMode__DefaultMeshOnly                                       = 3,
	ENDIStaticMesh_SourceMode__ENDIStaticMesh_MAX                                    = 4
};

/// Enum /Script/Niagara.ENiagaraDebugHudVerbosity
/// Size: 0x04
enum class ENiagaraDebugHudVerbosity : uint32_t
{
	ENiagaraDebugHudVerbosity__None                                                  = 0,
	ENiagaraDebugHudVerbosity__Basic                                                 = 1,
	ENiagaraDebugHudVerbosity__Verbose                                               = 2,
	ENiagaraDebugHudVerbosity__ENiagaraDebugHudVerbosity_MAX                         = 3
};

/// Enum /Script/Niagara.ENiagaraDebugHudFont
/// Size: 0x03
enum class ENiagaraDebugHudFont : uint32_t
{
	ENiagaraDebugHudFont__Small                                                      = 0,
	ENiagaraDebugHudFont__Normal                                                     = 1,
	ENiagaraDebugHudFont__ENiagaraDebugHudFont_MAX                                   = 2
};

/// Enum /Script/Niagara.ENiagaraDebugHudVAlign
/// Size: 0x04
enum class ENiagaraDebugHudVAlign : uint8_t
{
	ENiagaraDebugHudVAlign__Top                                                      = 0,
	ENiagaraDebugHudVAlign__Center                                                   = 1,
	ENiagaraDebugHudVAlign__Bottom                                                   = 2,
	ENiagaraDebugHudVAlign__ENiagaraDebugHudVAlign_MAX                               = 3
};

/// Enum /Script/Niagara.ENiagaraDebugHudHAlign
/// Size: 0x04
enum class ENiagaraDebugHudHAlign : uint8_t
{
	ENiagaraDebugHudHAlign__Left                                                     = 0,
	ENiagaraDebugHudHAlign__Center                                                   = 1,
	ENiagaraDebugHudHAlign__Right                                                    = 2,
	ENiagaraDebugHudHAlign__ENiagaraDebugHudHAlign_MAX                               = 3
};

/// Enum /Script/Niagara.ENiagaraDebugPlaybackMode
/// Size: 0x05
enum class ENiagaraDebugPlaybackMode : uint8_t
{
	ENiagaraDebugPlaybackMode__Play                                                  = 0,
	ENiagaraDebugPlaybackMode__Loop                                                  = 1,
	ENiagaraDebugPlaybackMode__Paused                                                = 2,
	ENiagaraDebugPlaybackMode__Step                                                  = 3,
	ENiagaraDebugPlaybackMode__ENiagaraDebugPlaybackMode_MAX                         = 4
};

/// Enum /Script/Niagara.ENiagaraScalabilityUpdateFrequency
/// Size: 0x06
enum class ENiagaraScalabilityUpdateFrequency : uint32_t
{
	ENiagaraScalabilityUpdateFrequency__SpawnOnly                                    = 0,
	ENiagaraScalabilityUpdateFrequency__Low                                          = 1,
	ENiagaraScalabilityUpdateFrequency__Medium                                       = 2,
	ENiagaraScalabilityUpdateFrequency__High                                         = 3,
	ENiagaraScalabilityUpdateFrequency__Continuous                                   = 4,
	ENiagaraScalabilityUpdateFrequency__ENiagaraScalabilityUpdateFrequency_MAX       = 5
};

/// Enum /Script/Niagara.ENiagaraCullReaction
/// Size: 0x05
enum class ENiagaraCullReaction : uint32_t
{
	ENiagaraCullReaction__Deactivate                                                 = 0,
	ENiagaraCullReaction__DeactivateImmediate                                        = 1,
	ENiagaraCullReaction__DeactivateResume                                           = 2,
	ENiagaraCullReaction__DeactivateImmediateResume                                  = 3,
	ENiagaraCullReaction__ENiagaraCullReaction_MAX                                   = 4
};

/// Enum /Script/Niagara.EParticleAllocationMode
/// Size: 0x03
enum class EParticleAllocationMode : uint8_t
{
	EParticleAllocationMode__AutomaticEstimate                                       = 0,
	EParticleAllocationMode__ManualEstimate                                          = 1,
	EParticleAllocationMode__EParticleAllocationMode_MAX                             = 2
};

/// Enum /Script/Niagara.EScriptExecutionMode
/// Size: 0x04
enum class EScriptExecutionMode : uint8_t
{
	EScriptExecutionMode__EveryParticle                                              = 0,
	EScriptExecutionMode__SpawnedParticles                                           = 1,
	EScriptExecutionMode__SingleParticle                                             = 2,
	EScriptExecutionMode__EScriptExecutionMode_MAX                                   = 3
};

/// Enum /Script/Niagara.ENiagaraSortMode
/// Size: 0x06
enum class ENiagaraSortMode : uint8_t
{
	ENiagaraSortMode__None                                                           = 0,
	ENiagaraSortMode__ViewDepth                                                      = 1,
	ENiagaraSortMode__ViewDistance                                                   = 2,
	ENiagaraSortMode__CustomAscending                                                = 3,
	ENiagaraSortMode__CustomDecending                                                = 4,
	ENiagaraSortMode__ENiagaraSortMode_MAX                                           = 5
};

/// Enum /Script/Niagara.ENiagaraMeshLockedAxisSpace
/// Size: 0x04
enum class ENiagaraMeshLockedAxisSpace : uint8_t
{
	ENiagaraMeshLockedAxisSpace__Simulation                                          = 0,
	ENiagaraMeshLockedAxisSpace__World                                               = 1,
	ENiagaraMeshLockedAxisSpace__Local                                               = 2,
	ENiagaraMeshLockedAxisSpace__ENiagaraMeshLockedAxisSpace_MAX                     = 3
};

/// Enum /Script/Niagara.ENiagaraMeshPivotOffsetSpace
/// Size: 0x05
enum class ENiagaraMeshPivotOffsetSpace : uint8_t
{
	ENiagaraMeshPivotOffsetSpace__Mesh                                               = 0,
	ENiagaraMeshPivotOffsetSpace__Simulation                                         = 1,
	ENiagaraMeshPivotOffsetSpace__World                                              = 2,
	ENiagaraMeshPivotOffsetSpace__Local                                              = 3,
	ENiagaraMeshPivotOffsetSpace__ENiagaraMeshPivotOffsetSpace_MAX                   = 4
};

/// Enum /Script/Niagara.ENiagaraMeshFacingMode
/// Size: 0x05
enum class ENiagaraMeshFacingMode : uint8_t
{
	ENiagaraMeshFacingMode__Default                                                  = 0,
	ENiagaraMeshFacingMode__Velocity                                                 = 1,
	ENiagaraMeshFacingMode__CameraPosition                                           = 2,
	ENiagaraMeshFacingMode__CameraPlane                                              = 3,
	ENiagaraMeshFacingMode__ENiagaraMeshFacingMode_MAX                               = 4
};

/// Enum /Script/Niagara.ENiagaraPlatformSetState
/// Size: 0x05
enum class ENiagaraPlatformSetState : uint8_t
{
	ENiagaraPlatformSetState__Disabled                                               = 0,
	ENiagaraPlatformSetState__Enabled                                                = 1,
	ENiagaraPlatformSetState__Active                                                 = 2,
	ENiagaraPlatformSetState__Unknown                                                = 3,
	ENiagaraPlatformSetState__ENiagaraPlatformSetState_MAX                           = 4
};

/// Enum /Script/Niagara.ENiagaraPlatformSelectionState
/// Size: 0x04
enum class ENiagaraPlatformSelectionState : uint8_t
{
	ENiagaraPlatformSelectionState__Default                                          = 0,
	ENiagaraPlatformSelectionState__Enabled                                          = 1,
	ENiagaraPlatformSelectionState__Disabled                                         = 2,
	ENiagaraPlatformSelectionState__ENiagaraPlatformSelectionState_MAX               = 3
};

/// Enum /Script/Niagara.ENiagaraPreviewGridResetMode
/// Size: 0x04
enum class ENiagaraPreviewGridResetMode : uint8_t
{
	ENiagaraPreviewGridResetMode__Never                                              = 0,
	ENiagaraPreviewGridResetMode__Individual                                         = 1,
	ENiagaraPreviewGridResetMode__All                                                = 2,
	ENiagaraPreviewGridResetMode__ENiagaraPreviewGridResetMode_MAX                   = 3
};

/// Enum /Script/Niagara.ENiagaraRibbonUVDistributionMode
/// Size: 0x05
enum class ENiagaraRibbonUVDistributionMode : uint32_t
{
	ENiagaraRibbonUVDistributionMode__ScaledUniformly                                = 0,
	ENiagaraRibbonUVDistributionMode__ScaledUsingRibbonSegmentLength                 = 1,
	ENiagaraRibbonUVDistributionMode__TiledOverRibbonLength                          = 2,
	ENiagaraRibbonUVDistributionMode__TiledFromStartOverRibbonLength                 = 3,
	ENiagaraRibbonUVDistributionMode__ENiagaraRibbonUVDistributionMode_MAX           = 4
};

/// Enum /Script/Niagara.ENiagaraRibbonUVEdgeMode
/// Size: 0x03
enum class ENiagaraRibbonUVEdgeMode : uint32_t
{
	ENiagaraRibbonUVEdgeMode__SmoothTransition                                       = 0,
	ENiagaraRibbonUVEdgeMode__Locked                                                 = 1,
	ENiagaraRibbonUVEdgeMode__ENiagaraRibbonUVEdgeMode_MAX                           = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonTessellationMode
/// Size: 0x04
enum class ENiagaraRibbonTessellationMode : uint8_t
{
	ENiagaraRibbonTessellationMode__Automatic                                        = 0,
	ENiagaraRibbonTessellationMode__Custom                                           = 1,
	ENiagaraRibbonTessellationMode__Disabled                                         = 2,
	ENiagaraRibbonTessellationMode__ENiagaraRibbonTessellationMode_MAX               = 3
};

/// Enum /Script/Niagara.ENiagaraRibbonShapeMode
/// Size: 0x05
enum class ENiagaraRibbonShapeMode : uint8_t
{
	ENiagaraRibbonShapeMode__Plane                                                   = 0,
	ENiagaraRibbonShapeMode__MultiPlane                                              = 1,
	ENiagaraRibbonShapeMode__Tube                                                    = 2,
	ENiagaraRibbonShapeMode__Custom                                                  = 3,
	ENiagaraRibbonShapeMode__ENiagaraRibbonShapeMode_MAX                             = 4
};

/// Enum /Script/Niagara.ENiagaraRibbonDrawDirection
/// Size: 0x03
enum class ENiagaraRibbonDrawDirection : uint8_t
{
	ENiagaraRibbonDrawDirection__FrontToBack                                         = 0,
	ENiagaraRibbonDrawDirection__BackToFront                                         = 1,
	ENiagaraRibbonDrawDirection__ENiagaraRibbonDrawDirection_MAX                     = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonAgeOffsetMode
/// Size: 0x03
enum class ENiagaraRibbonAgeOffsetMode : uint8_t
{
	ENiagaraRibbonAgeOffsetMode__Scale                                               = 0,
	ENiagaraRibbonAgeOffsetMode__Clip                                                = 1,
	ENiagaraRibbonAgeOffsetMode__ENiagaraRibbonAgeOffsetMode_MAX                     = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonFacingMode
/// Size: 0x04
enum class ENiagaraRibbonFacingMode : uint8_t
{
	ENiagaraRibbonFacingMode__Screen                                                 = 0,
	ENiagaraRibbonFacingMode__Custom                                                 = 1,
	ENiagaraRibbonFacingMode__CustomSideVector                                       = 2,
	ENiagaraRibbonFacingMode__ENiagaraRibbonFacingMode_MAX                           = 3
};

/// Enum /Script/Niagara.ENiagaraScriptTemplateSpecification
/// Size: 0x04
enum class ENiagaraScriptTemplateSpecification : uint8_t
{
	ENiagaraScriptTemplateSpecification__None                                        = 0,
	ENiagaraScriptTemplateSpecification__Template                                    = 1,
	ENiagaraScriptTemplateSpecification__Behavior                                    = 2,
	ENiagaraScriptTemplateSpecification__ENiagaraScriptTemplateSpecification_MAX     = 3
};

/// Enum /Script/Niagara.ENiagaraScriptLibraryVisibility
/// Size: 0x05
enum class ENiagaraScriptLibraryVisibility : uint8_t
{
	ENiagaraScriptLibraryVisibility__Invalid                                         = 0,
	ENiagaraScriptLibraryVisibility__Unexposed                                       = 1,
	ENiagaraScriptLibraryVisibility__Library                                         = 2,
	ENiagaraScriptLibraryVisibility__Hidden                                          = 3,
	ENiagaraScriptLibraryVisibility__ENiagaraScriptLibraryVisibility_MAX             = 4
};

/// Enum /Script/Niagara.ENiagaraModuleDependencyScriptConstraint
/// Size: 0x03
enum class ENiagaraModuleDependencyScriptConstraint : uint8_t
{
	ENiagaraModuleDependencyScriptConstraint__SameScript                             = 0,
	ENiagaraModuleDependencyScriptConstraint__AllScripts                             = 1,
	ENiagaraModuleDependencyScriptConstraint__ENiagaraModuleDependencyScriptConstraint_MAX = 2
};

/// Enum /Script/Niagara.ENiagaraModuleDependencyType
/// Size: 0x03
enum class ENiagaraModuleDependencyType : uint8_t
{
	ENiagaraModuleDependencyType__PreDependency                                      = 0,
	ENiagaraModuleDependencyType__PostDependency                                     = 1,
	ENiagaraModuleDependencyType__ENiagaraModuleDependencyType_MAX                   = 2
};

/// Enum /Script/Niagara.EUnusedAttributeBehaviour
/// Size: 0x06
enum class EUnusedAttributeBehaviour : uint8_t
{
	EUnusedAttributeBehaviour__Copy                                                  = 0,
	EUnusedAttributeBehaviour__Zero                                                  = 1,
	EUnusedAttributeBehaviour__None                                                  = 2,
	EUnusedAttributeBehaviour__MarkInvalid                                           = 3,
	EUnusedAttributeBehaviour__PassThrough                                           = 4,
	EUnusedAttributeBehaviour__EUnusedAttributeBehaviour_MAX                         = 5
};

/// Enum /Script/Niagara.ENDISkelMesh_AdjacencyTriangleIndexFormat
/// Size: 0x03
enum class ENDISkelMesh_AdjacencyTriangleIndexFormat : uint8_t
{
	ENDISkelMesh_AdjacencyTriangleIndexFormat__Full                                  = 0,
	ENDISkelMesh_AdjacencyTriangleIndexFormat__Half                                  = 1,
	ENDISkelMesh_AdjacencyTriangleIndexFormat__ENDISkelMesh_MAX                      = 2
};

/// Enum /Script/Niagara.ENDISkelMesh_GpuUniformSamplingFormat
/// Size: 0x04
enum class ENDISkelMesh_GpuUniformSamplingFormat : uint8_t
{
	ENDISkelMesh_GpuUniformSamplingFormat__Full                                      = 0,
	ENDISkelMesh_GpuUniformSamplingFormat__Limited_24                                = 1,
	ENDISkelMesh_GpuUniformSamplingFormat__Limited_23                                = 2,
	ENDISkelMesh_GpuUniformSamplingFormat__ENDISkelMesh_MAX                          = 3
};

/// Enum /Script/Niagara.ENDISkelMesh_GpuMaxInfluences
/// Size: 0x04
enum class ENDISkelMesh_GpuMaxInfluences : uint8_t
{
	ENDISkelMesh_GpuMaxInfluences__AllowMax4                                         = 0,
	ENDISkelMesh_GpuMaxInfluences__AllowMax8                                         = 1,
	ENDISkelMesh_GpuMaxInfluences__Unlimited                                         = 2,
	ENDISkelMesh_GpuMaxInfluences__ENDISkelMesh_MAX                                  = 3
};

/// Enum /Script/Niagara.ENiagaraSpriteFacingMode
/// Size: 0x06
enum class ENiagaraSpriteFacingMode : uint8_t
{
	ENiagaraSpriteFacingMode__FaceCamera                                             = 0,
	ENiagaraSpriteFacingMode__FaceCameraPlane                                        = 1,
	ENiagaraSpriteFacingMode__CustomFacingVector                                     = 2,
	ENiagaraSpriteFacingMode__FaceCameraPosition                                     = 3,
	ENiagaraSpriteFacingMode__FaceCameraDistanceBlend                                = 4,
	ENiagaraSpriteFacingMode__ENiagaraSpriteFacingMode_MAX                           = 5
};

/// Enum /Script/Niagara.ENiagaraSpriteAlignment
/// Size: 0x04
enum class ENiagaraSpriteAlignment : uint8_t
{
	ENiagaraSpriteAlignment__Unaligned                                               = 0,
	ENiagaraSpriteAlignment__VelocityAligned                                         = 1,
	ENiagaraSpriteAlignment__CustomAlignment                                         = 2,
	ENiagaraSpriteAlignment__ENiagaraSpriteAlignment_MAX                             = 3
};

/// Enum /Script/Niagara.ENiagaraOrientationAxis
/// Size: 0x04
enum class ENiagaraOrientationAxis : uint8_t
{
	ENiagaraOrientationAxis__XAxis                                                   = 0,
	ENiagaraOrientationAxis__YAxis                                                   = 1,
	ENiagaraOrientationAxis__ZAxis                                                   = 2,
	ENiagaraOrientationAxis__ENiagaraOrientationAxis_MAX                             = 3
};

/// Enum /Script/Niagara.ENiagaraPythonUpdateScriptReference
/// Size: 0x04
enum class ENiagaraPythonUpdateScriptReference : uint8_t
{
	ENiagaraPythonUpdateScriptReference__None                                        = 0,
	ENiagaraPythonUpdateScriptReference__ScriptAsset                                 = 1,
	ENiagaraPythonUpdateScriptReference__DirectTextEntry                             = 2,
	ENiagaraPythonUpdateScriptReference__ENiagaraPythonUpdateScriptReference_MAX     = 3
};

/// Enum /Script/Niagara.ENiagaraCoordinateSpace
/// Size: 0x04
enum class ENiagaraCoordinateSpace : uint8_t
{
	ENiagaraCoordinateSpace__Simulation                                              = 0,
	ENiagaraCoordinateSpace__World                                                   = 1,
	ENiagaraCoordinateSpace__Local                                                   = 2,
	ENiagaraCoordinateSpace__ENiagaraCoordinateSpace_MAX                             = 3
};

/// Enum /Script/Niagara.ENiagaraExecutionState
/// Size: 0x07
enum class ENiagaraExecutionState : uint32_t
{
	ENiagaraExecutionState__Active                                                   = 0,
	ENiagaraExecutionState__Inactive                                                 = 1,
	ENiagaraExecutionState__InactiveClear                                            = 2,
	ENiagaraExecutionState__Complete                                                 = 3,
	ENiagaraExecutionState__Disabled                                                 = 4,
	ENiagaraExecutionState__Num                                                      = 5,
	ENiagaraExecutionState__ENiagaraExecutionState_MAX                               = 6
};

/// Enum /Script/Niagara.ENiagaraExecutionStateSource
/// Size: 0x05
enum class ENiagaraExecutionStateSource : uint8_t
{
	ENiagaraExecutionStateSource__Scalability                                        = 0,
	ENiagaraExecutionStateSource__Internal                                           = 1,
	ENiagaraExecutionStateSource__Owner                                              = 2,
	ENiagaraExecutionStateSource__InternalCompletion                                 = 3,
	ENiagaraExecutionStateSource__ENiagaraExecutionStateSource_MAX                   = 4
};

/// Enum /Script/Niagara.ENiagaraNumericOutputTypeSelectionMode
/// Size: 0x05
enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
	ENiagaraNumericOutputTypeSelectionMode__None                                     = 0,
	ENiagaraNumericOutputTypeSelectionMode__Largest                                  = 1,
	ENiagaraNumericOutputTypeSelectionMode__Smallest                                 = 2,
	ENiagaraNumericOutputTypeSelectionMode__Scalar                                   = 3,
	ENiagaraNumericOutputTypeSelectionMode__ENiagaraNumericOutputTypeSelectionMode_MAX = 4
};

/// Enum /Script/Niagara.ENiagaraVariantMode
/// Size: 0x05
enum class ENiagaraVariantMode : uint32_t
{
	ENiagaraVariantMode__None                                                        = 0,
	ENiagaraVariantMode__Object                                                      = 1,
	ENiagaraVariantMode__DataInterface                                               = 2,
	ENiagaraVariantMode__Bytes                                                       = 3,
	ENiagaraVariantMode__ENiagaraVariantMode_MAX                                     = 4
};

/// Class /Script/Niagara.NiagaraDataInterface
/// Size: 0x0010 (0x000030 - 0x000040)
class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceRWBase
/// Size: 0x00A0 (0x000040 - 0x0000E0)
class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{ 
public:
	SDK_UNDEFINED(80,1489) /* TSet<int32_t> */         __um(OutputShaderStages);                                   // 0x0040   (0x0050)  
	SDK_UNDEFINED(80,1490) /* TSet<int32_t> */         __um(IterationShaderStages);                                // 0x0090   (0x0050)  
};

/// Class /Script/Niagara.MovieSceneNiagaraTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{ 
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x0098   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraTypeDefinitionHandle
/// Size: 0x0004 (0x000000 - 0x000004)
struct FNiagaraTypeDefinitionHandle
{ 
	int32_t                                            RegisteredTypeIndex;                                        // 0x0000   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraVariableBase
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraVariableBase
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	FNiagaraTypeDefinitionHandle                       TypeDefHandle;                                              // 0x000C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraVariable
/// Size: 0x0010 (0x000010 - 0x000020)
struct FNiagaraVariable : FNiagaraVariableBase
{ 
	TArray<char>                                       VarData;                                                    // 0x0010   (0x0010)  
};

/// Class /Script/Niagara.MovieSceneNiagaraParameterTrack
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{ 
public:
	FNiagaraVariable                                   Parameter;                                                  // 0x00A8   (0x0020)  
};

/// Class /Script/Niagara.MovieSceneNiagaraBoolParameterTrack
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraColorParameterTrack
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraFloatParameterTrack
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraIntegerParameterTrack
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraSystemSpawnSection
/// Size: 0x0010 (0x0000F0 - 0x000100)
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{ 
public:
	ENiagaraSystemSpawnSectionStartBehavior            SectionStartBehavior;                                       // 0x00F0   (0x0004)  
	ENiagaraSystemSpawnSectionEvaluateBehavior         SectionEvaluateBehavior;                                    // 0x00F4   (0x0004)  
	ENiagaraSystemSpawnSectionEndBehavior              SectionEndBehavior;                                         // 0x00F8   (0x0004)  
	ENiagaraAgeUpdateMode                              AgeUpdateMode;                                              // 0x00FC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00FD   (0x0003)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraSystemTrack
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraVectorParameterTrack
/// Size: 0x0010 (0x0000C8 - 0x0000D8)
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00C8   (0x0008)  MISSED
	int32_t                                            ChannelsUsed;                                               // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00D4   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraActor
/// Size: 0x0010 (0x000230 - 0x000240)
class ANiagaraActor : public AActor
{ 
public:
	class UNiagaraComponent*                           NiagaraComponent;                                           // 0x0230   (0x0008)  
	bool                                               bDestroyOnSystemFinish : 1;                                 // 0x0238:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0239   (0x0007)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraActor.SetDestroyOnSystemFinish
	// void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);                                                     // [0x48e09c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraActor.OnNiagaraSystemFinished
	// void OnNiagaraSystemFinished(class UNiagaraComponent* FinishedComponent);                                             // [0x48e0930] Final|Native|Private 
};

/// Struct /Script/Niagara.NiagaraBakerTextureSource
/// Size: 0x000C (0x000000 - 0x00000C)
struct FNiagaraBakerTextureSource
{ 
	FName                                              SourceName;                                                 // 0x0000   (0x000C)  
};

/// Struct /Script/Niagara.NiagaraBakerTextureSettings
/// Size: 0x0038 (0x000000 - 0x000038)
struct FNiagaraBakerTextureSettings
{ 
	FName                                              OutputName;                                                 // 0x0000   (0x000C)  
	FNiagaraBakerTextureSource                         SourceBinding;                                              // 0x000C   (0x000C)  
	bool                                               bUseFrameSize : 1;                                          // 0x0018:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0019   (0x0003)  MISSED
	FIntPoint                                          FrameSize;                                                  // 0x001C   (0x0008)  
	FIntPoint                                          TextureSize;                                                // 0x0024   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	class UTexture2D*                                  GeneratedTexture;                                           // 0x0030   (0x0008)  
};

/// Class /Script/Niagara.NiagaraBakerSettings
/// Size: 0x00F0 (0x000030 - 0x000120)
class UNiagaraBakerSettings : public UObject
{ 
public:
	float                                              StartSeconds;                                               // 0x0030   (0x0004)  
	float                                              DurationSeconds;                                            // 0x0034   (0x0004)  
	int32_t                                            FramesPerSecond;                                            // 0x0038   (0x0004)  
	bool                                               bPreviewLooping : 1;                                        // 0x003C:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x003D   (0x0003)  MISSED
	FIntPoint                                          FramesPerDimension;                                         // 0x0040   (0x0008)  
	TArray<FNiagaraBakerTextureSettings>               OutputTextures;                                             // 0x0048   (0x0010)  
	ENiagaraBakerViewMode                              CameraViewportMode;                                         // 0x0058   (0x0004)  
	FVector                                            CameraViewportLocation;                                     // 0x005C   (0x0054)  
	FRotator                                           CameraViewportRotation;                                     // 0x00B0   (0x0054)  
	float                                              CameraOrbitDistance;                                        // 0x0104   (0x0004)  
	float                                              CameraFOV;                                                  // 0x0108   (0x0004)  
	float                                              CameraOrthoWidth;                                           // 0x010C   (0x0004)  
	bool                                               bUseCameraAspectRatio : 1;                                  // 0x0110:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0111   (0x0003)  MISSED
	float                                              CameraAspectRatio;                                          // 0x0114   (0x0004)  
	bool                                               bRenderComponentOnly : 1;                                   // 0x0118:0 (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0119   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraVariableWithOffset
/// Size: 0x0004 (0x000010 - 0x000014)
struct FNiagaraVariableWithOffset : FNiagaraVariableBase
{ 
	int32_t                                            Offset;                                                     // 0x0010   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraParameterStore
/// Size: 0x0078 (0x000000 - 0x000078)
struct FNiagaraParameterStore
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	class UObject*                                     Owner;                                                      // 0x0008   (0x0008)  
	TArray<FNiagaraVariableWithOffset>                 SortedParameterOffsets;                                     // 0x0010   (0x0010)  
	TArray<char>                                       ParameterData;                                              // 0x0020   (0x0010)  
	TArray<class UNiagaraDataInterface*>               DataInterfaces;                                             // 0x0030   (0x0010)  
	TArray<class UObject*>                             UObjects;                                                   // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0050   (0x0028)  MISSED
};

/// Struct /Script/Niagara.NiagaraUserRedirectionParameterStore
/// Size: 0x0050 (0x000078 - 0x0000C8)
struct FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore
{ 
	SDK_UNDEFINED(80,1491) /* TMap<FNiagaraVariable, FNiagaraVariable> */ __um(UserParameterRedirects);            // 0x0078   (0x0050)  
};

/// Struct /Script/Niagara.NiagaraMaterialOverride
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNiagaraMaterialOverride
{ 
	class UMaterialInterface*                          Material;                                                   // 0x0000   (0x0008)  
	uint32_t                                           MaterialSubIndex;                                           // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UNiagaraRendererProperties*                  EmitterRendererProperty;                                    // 0x0010   (0x0008)  
};

/// Class /Script/Niagara.NiagaraComponent
/// Size: 0x01B0 (0x000480 - 0x000630)
class UNiagaraComponent : public UFXSystemComponent
{ 
public:
	class UNiagaraSystem*                              Asset;                                                      // 0x0480   (0x0008)  
	ENiagaraTickBehavior                               TickBehavior;                                               // 0x0488   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0489   (0x0003)  MISSED
	int32_t                                            RandomSeedOffset;                                           // 0x048C   (0x0004)  
	FNiagaraUserRedirectionParameterStore              OverrideParameters;                                         // 0x0490   (0x00C8)  
	bool                                               bForceSolo : 1;                                             // 0x0558:0 (0x0001)  
	bool                                               bEnableGpuComputeDebug : 1;                                 // 0x0558:1 (0x0001)  
	unsigned char                                      UnknownData01_3[0x2F];                                      // 0x0559   (0x002F)  MISSED
	bool                                               bAutoDestroy : 1;                                           // 0x0588:0 (0x0001)  
	bool                                               bRenderingEnabled : 1;                                      // 0x0588:1 (0x0001)  
	bool                                               bAutoManageAttachment : 1;                                  // 0x0588:2 (0x0001)  
	bool                                               bAutoAttachWeldSimulatedBodies : 1;                         // 0x0588:3 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x0589   (0x0003)  MISSED
	float                                              MaxTimeBeforeForceUpdateTransform;                          // 0x058C   (0x0004)  
	TArray<FNiagaraMaterialOverride>                   EmitterMaterials;                                           // 0x0590   (0x0010)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x05A0   (0x0008)  MISSED
	SDK_UNDEFINED(16,1492) /* FMulticastInlineDelegate */ __um(OnSystemFinished);                                  // 0x05A8   (0x0010)  
	SDK_UNDEFINED(8,1493) /* TWeakObjectPtr<USceneComponent*> */ __um(AutoAttachParent);                           // 0x05B8   (0x0008)  
	FName                                              AutoAttachSocketName;                                       // 0x05C0   (0x000C)  
	EAttachmentRule                                    AutoAttachLocationRule;                                     // 0x05CC   (0x0001)  
	EAttachmentRule                                    AutoAttachRotationRule;                                     // 0x05CD   (0x0001)  
	EAttachmentRule                                    AutoAttachScaleRule;                                        // 0x05CE   (0x0001)  
	unsigned char                                      UnknownData04_6[0x61];                                      // 0x05CF   (0x0061)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraComponent.SetVariableVec4
	// void SetVariableVec4(FName InVariableName, FVector4& InValue);                                                        // [0x48e5240] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableVec3
	// void SetVariableVec3(FName InVariableName, FVector InValue);                                                          // [0x48e5150] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableVec2
	// void SetVariableVec2(FName InVariableName, FVector2D InValue);                                                        // [0x48e5070] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableTextureRenderTarget
	// void SetVariableTextureRenderTarget(FName InVariableName, class UTextureRenderTarget* TextureRenderTarget);           // [0x48e4f80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableQuat
	// void SetVariableQuat(FName InVariableName, FQuat& InValue);                                                           // [0x48e4e90] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableObject
	// void SetVariableObject(FName InVariableName, class UObject* Object);                                                  // [0x48e4900] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableMaterial
	// void SetVariableMaterial(FName InVariableName, class UMaterialInterface* Object);                                     // [0x48e4da0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableLinearColor
	// void SetVariableLinearColor(FName InVariableName, FLinearColor& InValue);                                             // [0x48e4cb0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableInt
	// void SetVariableInt(FName InVariableName, int32_t InValue);                                                           // [0x48e4bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableFloat
	// void SetVariableFloat(FName InVariableName, float InValue);                                                           // [0x48e4ae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableBool
	// void SetVariableBool(FName InVariableName, bool InValue);                                                             // [0x48e49f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableActor
	// void SetVariableActor(FName InVariableName, class AActor* Actor);                                                     // [0x48e4900] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetTickBehavior
	// void SetTickBehavior(ENiagaraTickBehavior NewTickBehavior);                                                           // [0x48e4880] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetSeekDelta
	// void SetSeekDelta(float InSeekDelta);                                                                                 // [0x48e4800] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetRenderingEnabled
	// void SetRenderingEnabled(bool bInRenderingEnabled);                                                                   // [0x48e4770] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetRandomSeedOffset
	// void SetRandomSeedOffset(int32_t NewRandomSeedOffset);                                                                // [0x48e46e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetPreviewLODDistance
	// void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance);                                 // [0x48e4610] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetPaused
	// void SetPaused(bool bInPaused);                                                                                       // [0x48e4580] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec4
	// void SetNiagaraVariableVec4(FString InVariableName, FVector4& InValue);                                               // [0x48e4490] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec3
	// void SetNiagaraVariableVec3(FString InVariableName, FVector InValue);                                                 // [0x48e43a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec2
	// void SetNiagaraVariableVec2(FString InVariableName, FVector2D InValue);                                               // [0x48e42c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableQuat
	// void SetNiagaraVariableQuat(FString InVariableName, FQuat& InValue);                                                  // [0x48e41d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableObject
	// void SetNiagaraVariableObject(FString InVariableName, class UObject* Object);                                         // [0x48e3d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
	// void SetNiagaraVariableLinearColor(FString InVariableName, FLinearColor& InValue);                                    // [0x48e40e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableInt
	// void SetNiagaraVariableInt(FString InVariableName, int32_t InValue);                                                  // [0x48e4000] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableFloat
	// void SetNiagaraVariableFloat(FString InVariableName, float InValue);                                                  // [0x48e3f10] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableBool
	// void SetNiagaraVariableBool(FString InVariableName, bool InValue);                                                    // [0x48e3e30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableActor
	// void SetNiagaraVariableActor(FString InVariableName, class AActor* Actor);                                            // [0x48e3d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetMaxSimTime
	// void SetMaxSimTime(float InMaxTime);                                                                                  // [0x48e3cd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetLockDesiredAgeDeltaTimeToSeekDelta
	// void SetLockDesiredAgeDeltaTimeToSeekDelta(bool bLock);                                                               // [0x48e3c40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetGpuComputeDebug
	// void SetGpuComputeDebug(bool bEnableDebug);                                                                           // [0x48e3bb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetForceSolo
	// void SetForceSolo(bool bInForceSolo);                                                                                 // [0x48e3b20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetDesiredAge
	// void SetDesiredAge(float InDesiredAge);                                                                               // [0x48e3aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetCanRenderWhileSeeking
	// void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);                                                         // [0x48e3a10] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAutoDestroy
	// void SetAutoDestroy(bool bInAutoDestroy);                                                                             // [0x48e3980] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAsset
	// void SetAsset(class UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters);                                  // [0x48e38b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAllowScalability
	// void SetAllowScalability(bool bAllow);                                                                                // [0x48e3820] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAgeUpdateMode
	// void SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode);                                                         // [0x48e37a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SeekToDesiredAge
	// void SeekToDesiredAge(float InDesiredAge);                                                                            // [0x48e3720] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.ResetSystem
	// void ResetSystem();                                                                                                   // [0x48e3700] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.ReinitializeSystem
	// void ReinitializeSystem();                                                                                            // [0x48e36e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.IsPaused
	// bool IsPaused();                                                                                                      // [0x48e36b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.InitForPerformanceBaseline
	// void InitForPerformanceBaseline();                                                                                    // [0x48e3690] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetTickBehavior
	// ENiagaraTickBehavior GetTickBehavior();                                                                               // [0x48e3670] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetSeekDelta
	// float GetSeekDelta();                                                                                                 // [0x48e3640] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetRandomSeedOffset
	// int32_t GetRandomSeedOffset();                                                                                        // [0x48e3620] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled
	// bool GetPreviewLODDistanceEnabled();                                                                                  // [0x48e3600] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetPreviewLODDistance
	// float GetPreviewLODDistance();                                                                                        // [0x48e35e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
	// TArray<FVector> GetNiagaraParticleValueVec3_DebugOnly(FString InEmitterName, FString InValueName);                    // [0x48e3340] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
	// TArray<float> GetNiagaraParticleValues_DebugOnly(FString InEmitterName, FString InValueName);                         // [0x48e3490] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
	// TArray<FVector> GetNiagaraParticlePositions_DebugOnly(FString InEmitterName);                                         // [0x48e3250] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetMaxSimTime
	// float GetMaxSimTime();                                                                                                // [0x48e3220] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetLockDesiredAgeDeltaTimeToSeekDelta
	// bool GetLockDesiredAgeDeltaTimeToSeekDelta();                                                                         // [0x48e31f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetForceSolo
	// bool GetForceSolo();                                                                                                  // [0x48e31c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetDesiredAge
	// float GetDesiredAge();                                                                                                // [0x48e3190] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetDataInterface
	// class UNiagaraDataInterface* GetDataInterface(FString Name);                                                          // [0x48e30e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetAsset
	// class UNiagaraSystem* GetAsset();                                                                                     // [0x48e30c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetAgeUpdateMode
	// ENiagaraAgeUpdateMode GetAgeUpdateMode();                                                                             // [0x48e3090] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.AdvanceSimulationByTime
	// void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);                                             // [0x48e2fc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.AdvanceSimulation
	// void AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds);                                                    // [0x48e2ef0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraComponentPool
/// Size: 0x0058 (0x000030 - 0x000088)
class UNiagaraComponentPool : public UObject
{ 
public:
	SDK_UNDEFINED(80,1494) /* TMap<UNiagaraSystem*, FNCPool> */ __um(WorldParticleSystemPools);                    // 0x0030   (0x0050)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0080   (0x0008)  MISSED
};

/// Struct /Script/Niagara.NiagaraDeviceProfileStateEntry
/// Size: 0x0014 (0x000000 - 0x000014)
struct FNiagaraDeviceProfileStateEntry
{ 
	FName                                              ProfileName;                                                // 0x0000   (0x000C)  
	uint32_t                                           QualityLevelMask;                                           // 0x000C   (0x0004)  
	uint32_t                                           SetQualityLevelMask;                                        // 0x0010   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraPlatformSetCVarCondition
/// Size: 0x0030 (0x000000 - 0x000030)
struct FNiagaraPlatformSetCVarCondition
{ 
	FName                                              CVarName;                                                   // 0x0000   (0x000C)  
	bool                                               value;                                                      // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	int32_t                                            MinInt;                                                     // 0x0010   (0x0004)  
	int32_t                                            MaxInt;                                                     // 0x0014   (0x0004)  
	float                                              MinFloat;                                                   // 0x0018   (0x0004)  
	float                                              MaxFloat;                                                   // 0x001C   (0x0004)  
	bool                                               bUseMinInt : 1;                                             // 0x0020:0 (0x0001)  
	bool                                               bUseMaxInt : 1;                                             // 0x0020:1 (0x0001)  
	bool                                               bUseMinFloat : 1;                                           // 0x0020:2 (0x0001)  
	bool                                               bUseMaxFloat : 1;                                           // 0x0020:3 (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0021   (0x000F)  MISSED
};

/// Struct /Script/Niagara.NiagaraPlatformSet
/// Size: 0x0030 (0x000000 - 0x000030)
struct FNiagaraPlatformSet
{ 
	int32_t                                            QualityLevelMask;                                           // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FNiagaraDeviceProfileStateEntry>            DeviceProfileStates;                                        // 0x0008   (0x0010)  
	TArray<FNiagaraPlatformSetCVarCondition>           CVarConditions;                                             // 0x0018   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/Niagara.NiagaraRendererProperties
/// Size: 0x0050 (0x000030 - 0x000080)
class UNiagaraRendererProperties : public UNiagaraMergeable
{ 
public:
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0030   (0x0030)  
	int32_t                                            SortOrderHint;                                              // 0x0060   (0x0004)  
	ENiagaraRendererMotionVectorSetting                MotionVectorSetting;                                        // 0x0064   (0x0004)  
	bool                                               bIsEnabled;                                                 // 0x0068   (0x0001)  
	bool                                               bMotionBlurEnabled;                                         // 0x0069   (0x0001)  
	unsigned char                                      UnknownData00_6[0x16];                                      // 0x006A   (0x0016)  MISSED
};

/// Struct /Script/Niagara.NiagaraVariableAttributeBinding
/// Size: 0x0058 (0x000000 - 0x000058)
struct FNiagaraVariableAttributeBinding
{ 
	FNiagaraVariableBase                               ParamMapVariable;                                           // 0x0000   (0x0010)  
	FNiagaraVariable                                   DataSetVariable;                                            // 0x0010   (0x0020)  
	FNiagaraVariable                                   RootVariable;                                               // 0x0030   (0x0020)  
	SDK_UNDEFINED(1,1495) /* TEnumAsByte<ENiagaraBindingSource> */ __um(BindingSourceMode);                        // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0051   (0x0003)  MISSED
	bool                                               bBindingExistsOnSource : 1;                                 // 0x0054:0 (0x0001)  
	bool                                               bIsCachedParticleValue : 1;                                 // 0x0054:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0055   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraTypeDefinition
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraTypeDefinition
{ 
	class UObject*                                     ClassStructOrEnum;                                          // 0x0000   (0x0008)  
	uint16_t                                           UnderlyingType;                                             // 0x0008   (0x0002)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/Niagara.NiagaraComponentPropertyBinding
/// Size: 0x00F8 (0x000000 - 0x0000F8)
struct FNiagaraComponentPropertyBinding
{ 
	FNiagaraVariableAttributeBinding                   AttributeBinding;                                           // 0x0000   (0x0058)  
	FName                                              PropertyName;                                               // 0x0058   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0064   (0x0004)  MISSED
	FNiagaraTypeDefinition                             PropertyType;                                               // 0x0068   (0x0010)  
	FName                                              MetadataSetterName;                                         // 0x0078   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0084   (0x0004)  MISSED
	SDK_UNDEFINED(80,1496) /* TMap<FString, FString> */ __um(PropertySetterParameterDefaults);                     // 0x0088   (0x0050)  
	FNiagaraVariable                                   WritableValue;                                              // 0x00D8   (0x0020)  
};

/// Class /Script/Niagara.NiagaraComponentRendererProperties
/// Size: 0x0138 (0x000080 - 0x0001B8)
class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties
{ 
public:
	class UClass*                                      ComponentType;                                              // 0x0080   (0x0008)  
	uint32_t                                           ComponentCountLimit;                                        // 0x0088   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x008C   (0x0004)  MISSED
	FNiagaraVariableAttributeBinding                   EnabledBinding;                                             // 0x0090   (0x0058)  
	FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x00E8   (0x0058)  
	bool                                               bAssignComponentsOnParticleID;                              // 0x0140   (0x0001)  
	bool                                               bOnlyCreateComponentsOnParticleSpawn;                       // 0x0141   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0142   (0x0002)  MISSED
	int32_t                                            RendererVisibility;                                         // 0x0144   (0x0004)  
	class USceneComponent*                             TemplateComponent;                                          // 0x0148   (0x0008)  
	TArray<FNiagaraComponentPropertyBinding>           PropertyBindings;                                           // 0x0150   (0x0010)  
	unsigned char                                      UnknownData02_6[0x58];                                      // 0x0160   (0x0058)  MISSED
};

/// Class /Script/Niagara.NiagaraComponentSettings
/// Size: 0x00F0 (0x000030 - 0x000120)
class UNiagaraComponentSettings : public UObject
{ 
public:
	SDK_UNDEFINED(80,1497) /* TSet<FName> */           __um(SuppressActivationList);                               // 0x0030   (0x0050)  
	SDK_UNDEFINED(80,1498) /* TSet<FName> */           __um(ForceAutoPooolingList);                                // 0x0080   (0x0050)  
	SDK_UNDEFINED(80,1499) /* TSet<FNiagaraEmitterNameSettingsRef> */ __um(SuppressEmitterList);                   // 0x00D0   (0x0050)  
};

/// Class /Script/Niagara.NiagaraConvertInPlaceUtilityBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UNiagaraConvertInPlaceUtilityBase : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterface2DArrayTexture
/// Size: 0x0018 (0x000040 - 0x000058)
class UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface
{ 
public:
	class UTexture2DArray*                             Texture;                                                    // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0048   (0x0010)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceArray
/// Size: 0x0018 (0x000040 - 0x000058)
class UNiagaraDataInterfaceArray : public UNiagaraDataInterface
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0040   (0x0008)  MISSED
	int32_t                                            MaxElements;                                                // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x004C   (0x000C)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat
/// Size: 0x0010 (0x000058 - 0x000068)
class UNiagaraDataInterfaceArrayFloat : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<float>                                      FloatData;                                                  // 0x0058   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat2
/// Size: 0x0010 (0x000058 - 0x000068)
class UNiagaraDataInterfaceArrayFloat2 : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FVector2D>                                  FloatData;                                                  // 0x0058   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat3
/// Size: 0x0010 (0x000058 - 0x000068)
class UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FVector>                                    FloatData;                                                  // 0x0058   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat4
/// Size: 0x0010 (0x000058 - 0x000068)
class UNiagaraDataInterfaceArrayFloat4 : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FVector4>                                   FloatData;                                                  // 0x0058   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayColor
/// Size: 0x0010 (0x000058 - 0x000068)
class UNiagaraDataInterfaceArrayColor : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FLinearColor>                               ColorData;                                                  // 0x0058   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayQuat
/// Size: 0x0010 (0x000058 - 0x000068)
class UNiagaraDataInterfaceArrayQuat : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FQuat>                                      QuatData;                                                   // 0x0058   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UNiagaraDataInterfaceArrayFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVectorValue
	// void SetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t index, FVector& value, bool bSizeToFit); // [0x48e9b70] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4Value
	// void SetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t index, FVector4& value, bool bSizeToFit); // [0x48e9880] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4
	// void SetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector4>& ArrayData); // [0x48e9740] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2DValue
	// void SetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t index, FVector2D& value, bool bSizeToFit); // [0x48e95a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D
	// void SetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector2D>& ArrayData); // [0x48e9460] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector
	// void SetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector>& ArrayData);   // [0x48e9a30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuatValue
	// void SetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t index, FQuat& value, bool bSizeToFit); // [0x48e92c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat
	// void SetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FQuat>& ArrayData);       // [0x48e9180] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32Value
	// void SetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t index, int32_t value, bool bSizeToFit); // [0x48e8fe0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32
	// void SetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<int32_t>& ArrayData);    // [0x48e8ea0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloatValue
	// void SetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t index, float value, bool bSizeToFit); // [0x48e8d00] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat
	// void SetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<float>& ArrayData);      // [0x48e8bc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColorValue
	// void SetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t index, FLinearColor& value, bool bSizeToFit); // [0x48e8a20] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor
	// void SetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FLinearColor>& ArrayData); // [0x48e88e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBoolValue
	// void SetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t index, bool& value, bool bSizeToFit); // [0x48e8740] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool
	// void SetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<bool>& ArrayData);        // [0x48e8600] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVectorValue
	// FVector GetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t index);        // [0x48e83c0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4Value
	// FVector4 GetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t index);      // [0x48e8160] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4
	// TArray<FVector4> GetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                  // [0x48e8030] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2DValue
	// FVector2D GetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t index);    // [0x48e7f10] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D
	// TArray<FVector2D> GetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                // [0x48e7de0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector
	// TArray<FVector> GetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                    // [0x48e8290] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuatValue
	// FQuat GetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t index);            // [0x48e7cb0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat
	// TArray<FQuat> GetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                        // [0x48e7b80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32Value
	// int32_t GetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t index);         // [0x48e7a50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32
	// TArray<int32_t> GetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                     // [0x48e7920] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloatValue
	// float GetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t index);           // [0x48e77f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat
	// TArray<float> GetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                       // [0x48e76c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColorValue
	// FLinearColor GetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t index);    // [0x48e7590] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor
	// TArray<FLinearColor> GetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                // [0x48e7460] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBoolValue
	// bool GetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t index);             // [0x48e7330] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool
	// TArray<bool> GetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                         // [0x48e7200] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayInt32
/// Size: 0x0010 (0x000058 - 0x000068)
class UNiagaraDataInterfaceArrayInt32 : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<int32_t>                                    IntData;                                                    // 0x0058   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayBool
/// Size: 0x0010 (0x000058 - 0x000068)
class UNiagaraDataInterfaceArrayBool : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<bool>                                       BoolData;                                                   // 0x0058   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioSubmix
/// Size: 0x0008 (0x000040 - 0x000048)
class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface
{ 
public:
	class USoundSubmix*                                Submix;                                                     // 0x0040   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioOscilloscope
/// Size: 0x0010 (0x000040 - 0x000050)
class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface
{ 
public:
	class USoundSubmix*                                Submix;                                                     // 0x0040   (0x0008)  
	int32_t                                            Resolution;                                                 // 0x0048   (0x0004)  
	float                                              ScopeInMilliseconds;                                        // 0x004C   (0x0004)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioPlayer
/// Size: 0x0038 (0x000040 - 0x000078)
class UNiagaraDataInterfaceAudioPlayer : public UNiagaraDataInterface
{ 
public:
	class USoundBase*                                  SoundToPlay;                                                // 0x0040   (0x0008)  
	class USoundAttenuation*                           Attenuation;                                                // 0x0048   (0x0008)  
	class USoundConcurrency*                           Concurrency;                                                // 0x0050   (0x0008)  
	TArray<FName>                                      ParameterNames;                                             // 0x0058   (0x0010)  
	bool                                               bLimitPlaysPerTick;                                         // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0069   (0x0003)  MISSED
	int32_t                                            MaxPlaysPerTick;                                            // 0x006C   (0x0004)  
	bool                                               bStopWhenComponentIsDestroyed;                              // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioSpectrum
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix
{ 
public:
	int32_t                                            Resolution;                                                 // 0x0048   (0x0004)  
	float                                              MinimumFrequency;                                           // 0x004C   (0x0004)  
	float                                              MaximumFrequency;                                           // 0x0050   (0x0004)  
	float                                              NoiseFloorDb;                                               // 0x0054   (0x0004)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceCamera
/// Size: 0x0008 (0x000040 - 0x000048)
class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface
{ 
public:
	int32_t                                            PlayerControllerIndex;                                      // 0x0040   (0x0004)  
	bool                                               bRequireCurrentFrameData;                                   // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0045   (0x0003)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceCollisionQuery
/// Size: 0x0010 (0x000040 - 0x000050)
class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurveBase
/// Size: 0x0038 (0x000040 - 0x000078)
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{ 
public:
	TArray<float>                                      ShaderLUT;                                                  // 0x0040   (0x0010)  
	float                                              LUTMinTime;                                                 // 0x0050   (0x0004)  
	float                                              LUTMaxTime;                                                 // 0x0054   (0x0004)  
	float                                              LUTInvTimeRange;                                            // 0x0058   (0x0004)  
	float                                              LUTNumSamplesMinusOne;                                      // 0x005C   (0x0004)  
	bool                                               bUseLUT : 1;                                                // 0x0060:0 (0x0001)  
	bool                                               bExposeCurve : 1;                                           // 0x0060:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0061   (0x0003)  MISSED
	FName                                              ExposedName;                                                // 0x0064   (0x000C)  
	class UTexture2D*                                  ExposedTexture;                                             // 0x0070   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceColorCurve
/// Size: 0x0200 (0x000078 - 0x000278)
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         RedCurve;                                                   // 0x0078   (0x0080)  
	FRichCurve                                         GreenCurve;                                                 // 0x00F8   (0x0080)  
	FRichCurve                                         BlueCurve;                                                  // 0x0178   (0x0080)  
	FRichCurve                                         AlphaCurve;                                                 // 0x01F8   (0x0080)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceCubeTexture
/// Size: 0x0010 (0x000040 - 0x000050)
class UNiagaraDataInterfaceCubeTexture : public UNiagaraDataInterface
{ 
public:
	class UTextureCube*                                Texture;                                                    // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurlNoise
/// Size: 0x0010 (0x000040 - 0x000050)
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{ 
public:
	uint32_t                                           Seed;                                                       // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0044   (0x000C)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurve
/// Size: 0x0080 (0x000078 - 0x0000F8)
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         Curve;                                                      // 0x0078   (0x0080)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceDebugDraw
/// Size: 0x0000 (0x000040 - 0x000040)
class UNiagaraDataInterfaceDebugDraw : public UNiagaraDataInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraParticleCallbackHandler
/// Size: 0x0000 (0x000030 - 0x000030)
class UNiagaraParticleCallbackHandler : public UInterface
{ 
public:


	/// Functions
	// Function /Script/Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData
	// void ReceiveParticleData(TArray<FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem);                      // [0x48e8500] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Struct /Script/Niagara.NiagaraUserParameterBinding
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNiagaraUserParameterBinding
{ 
	FNiagaraVariable                                   Parameter;                                                  // 0x0000   (0x0020)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceExport
/// Size: 0x0030 (0x000040 - 0x000070)
class UNiagaraDataInterfaceExport : public UNiagaraDataInterface
{ 
public:
	FNiagaraUserParameterBinding                       CallbackHandlerParameter;                                   // 0x0040   (0x0020)  
	ENDIExport_GPUAllocationMode                       GPUAllocationMode;                                          // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	int32_t                                            GPUAllocationFixedSize;                                     // 0x0064   (0x0004)  
	float                                              GPUAllocationPerParticleSize;                               // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceGBuffer
/// Size: 0x0000 (0x000040 - 0x000040)
class UNiagaraDataInterfaceGBuffer : public UNiagaraDataInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2D
/// Size: 0x0020 (0x0000E0 - 0x000100)
class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{ 
public:
	int32_t                                            NumCellsX;                                                  // 0x00E0   (0x0004)  
	int32_t                                            NumCellsY;                                                  // 0x00E4   (0x0004)  
	int32_t                                            NumCellsMaxAxis;                                            // 0x00E8   (0x0004)  
	int32_t                                            NumAttributes;                                              // 0x00EC   (0x0004)  
	bool                                               SetGridFromMaxAxis;                                         // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00F1   (0x0003)  MISSED
	FVector2D                                          WorldBBoxSize;                                              // 0x00F4   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2DCollection
/// Size: 0x00C8 (0x000100 - 0x0001C8)
class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{ 
public:
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x0100   (0x0020)  
	ENiagaraGpuBufferFormat                            OverrideBufferFormat;                                       // 0x0120   (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x0121:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x56];                                      // 0x0122   (0x0056)  MISSED
	SDK_UNDEFINED(80,1500) /* TMap<uint64_t, UTextureRenderTarget2DArray*> */ __um(ManagedRenderTargets);          // 0x0178   (0x0050)  


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize
	// void GetTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY);                              // [0x48ecf90] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize
	// void GetRawTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY);                           // [0x48ecce0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D
	// bool FillTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32_t AttributeIndex);   // [0x48ecbc0] Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D
	// bool FillRawTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32_t& TilesX, int32_t& TilesY); // [0x48ec850] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2DCollectionReader
/// Size: 0x0070 (0x000100 - 0x000170)
class UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2D
{ 
public:
	SDK_UNDEFINED(16,1501) /* FString */               __um(EmitterName);                                          // 0x0100   (0x0010)  
	SDK_UNDEFINED(16,1502) /* FString */               __um(DIName);                                               // 0x0110   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0120   (0x0050)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid3D
/// Size: 0x0028 (0x0000E0 - 0x000108)
class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{ 
public:
	FIntVector                                         NumCells;                                                   // 0x00E0   (0x000C)  
	float                                              CellSize;                                                   // 0x00EC   (0x0004)  
	int32_t                                            NumCellsMaxAxis;                                            // 0x00F0   (0x0004)  
	ESetResolutionMethod                               SetResolutionMethod;                                        // 0x00F4   (0x0004)  
	FVector                                            WorldBBoxSize;                                              // 0x00F8   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0104   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid3DCollection
/// Size: 0x0080 (0x000108 - 0x000188)
class UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D
{ 
public:
	int32_t                                            NumAttributes;                                              // 0x0108   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x010C   (0x0004)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x0110   (0x0020)  
	ENiagaraGpuBufferFormat                            OverrideBufferFormat;                                       // 0x0130   (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x0131:0 (0x0001)  
	unsigned char                                      UnknownData01_6[0x56];                                      // 0x0132   (0x0056)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize
	// void GetTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ);              // [0x48ed0c0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize
	// void GetRawTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ);           // [0x48ece10] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture
	// bool FillVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32_t AttributeIndex);       // [0x48ecbc0] Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture
	// bool FillRawVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32_t& TilesX, int32_t& TilesY, int32_t& TileZ); // [0x48ec9c0] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceIntRenderTarget2D
/// Size: 0x0078 (0x0000E0 - 0x000158)
class UNiagaraDataInterfaceIntRenderTarget2D : public UNiagaraDataInterfaceRWBase
{ 
public:
	FIntPoint                                          Size;                                                       // 0x00E0   (0x0008)  
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x00E8   (0x0020)  
	SDK_UNDEFINED(80,1503) /* TMap<uint64_t, UTextureRenderTarget2D*> */ __um(ManagedRenderTargets);               // 0x0108   (0x0050)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceLandscape
/// Size: 0x0020 (0x000040 - 0x000060)
class UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface
{ 
public:
	class AActor*                                      SourceLandscape;                                            // 0x0040   (0x0008)  
	ENDILandscape_SourceMode                           SourceMode;                                                 // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	TArray<class UPhysicalMaterial*>                   PhysicalMaterials;                                          // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceMeshRendererInfo
/// Size: 0x0018 (0x000040 - 0x000058)
class UNiagaraDataInterfaceMeshRendererInfo : public UNiagaraDataInterface
{ 
public:
	class UNiagaraMeshRendererProperties*              MeshRenderer;                                               // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0048   (0x0010)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceNeighborGrid3D
/// Size: 0x0008 (0x000108 - 0x000110)
class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
{ 
public:
	uint32_t                                           MaxNeighborsPerCell;                                        // 0x0108   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x010C   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceOcclusion
/// Size: 0x0000 (0x000040 - 0x000040)
class UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceParticleRead
/// Size: 0x0010 (0x0000E0 - 0x0000F0)
class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterfaceRWBase
{ 
public:
	SDK_UNDEFINED(16,1504) /* FString */               __um(EmitterName);                                          // 0x00E0   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfacePlatformSet
/// Size: 0x0030 (0x000040 - 0x000070)
class UNiagaraDataInterfacePlatformSet : public UNiagaraDataInterface
{ 
public:
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0040   (0x0030)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTarget2D
/// Size: 0x00D0 (0x0000E0 - 0x0001B0)
class UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase
{ 
public:
	FIntPoint                                          Size;                                                       // 0x00E0   (0x0008)  
	ENiagaraMipMapGeneration                           MipMapGeneration;                                           // 0x00E8   (0x0001)  
	SDK_UNDEFINED(1,1505) /* TEnumAsByte<ETextureRenderTargetFormat> */ __um(OverrideRenderTargetFormat);          // 0x00E9   (0x0001)  
	bool                                               bInheritUserParameterSettings : 1;                          // 0x00EA:0 (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x00EA:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x5];                                       // 0x00EB   (0x0005)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x00F0   (0x0020)  
	unsigned char                                      UnknownData01_5[0x50];                                      // 0x0110   (0x0050)  MISSED
	SDK_UNDEFINED(80,1506) /* TMap<uint64_t, UTextureRenderTarget2D*> */ __um(ManagedRenderTargets);               // 0x0160   (0x0050)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTarget2DArray
/// Size: 0x0080 (0x0000E0 - 0x000160)
class UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase
{ 
public:
	FIntVector                                         Size;                                                       // 0x00E0   (0x000C)  
	SDK_UNDEFINED(1,1507) /* TEnumAsByte<ETextureRenderTargetFormat> */ __um(OverrideRenderTargetFormat);          // 0x00EC   (0x0001)  
	bool                                               bInheritUserParameterSettings : 1;                          // 0x00ED:0 (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x00ED:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x2];                                       // 0x00EE   (0x0002)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x00F0   (0x0020)  
	SDK_UNDEFINED(80,1508) /* TMap<uint64_t, UTextureRenderTarget2DArray*> */ __um(ManagedRenderTargets);          // 0x0110   (0x0050)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTargetCube
/// Size: 0x0078 (0x0000E0 - 0x000158)
class UNiagaraDataInterfaceRenderTargetCube : public UNiagaraDataInterfaceRWBase
{ 
public:
	int32_t                                            Size;                                                       // 0x00E0   (0x0004)  
	SDK_UNDEFINED(1,1509) /* TEnumAsByte<ETextureRenderTargetFormat> */ __um(OverrideRenderTargetFormat);          // 0x00E4   (0x0001)  
	bool                                               bInheritUserParameterSettings : 1;                          // 0x00E5:0 (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x00E5:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x2];                                       // 0x00E6   (0x0002)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x00E8   (0x0020)  
	SDK_UNDEFINED(80,1510) /* TMap<uint64_t, UTextureRenderTargetCube*> */ __um(ManagedRenderTargets);             // 0x0108   (0x0050)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTargetVolume
/// Size: 0x0080 (0x0000E0 - 0x000160)
class UNiagaraDataInterfaceRenderTargetVolume : public UNiagaraDataInterfaceRWBase
{ 
public:
	FIntVector                                         Size;                                                       // 0x00E0   (0x000C)  
	SDK_UNDEFINED(1,1511) /* TEnumAsByte<ETextureRenderTargetFormat> */ __um(OverrideRenderTargetFormat);          // 0x00EC   (0x0001)  
	bool                                               bInheritUserParameterSettings : 1;                          // 0x00ED:0 (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x00ED:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x2];                                       // 0x00EE   (0x0002)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x00F0   (0x0020)  
	SDK_UNDEFINED(80,1512) /* TMap<uint64_t, UTextureRenderTargetVolume*> */ __um(ManagedRenderTargets);           // 0x0110   (0x0050)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceSimpleCounter
/// Size: 0x0000 (0x000040 - 0x000040)
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceSkeletalMesh
/// Size: 0x0098 (0x000040 - 0x0000D8)
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{ 
public:
	ENDISkeletalMesh_SourceMode                        SourceMode;                                                 // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	class AActor*                                      Source;                                                     // 0x0048   (0x0008)  
	FNiagaraUserParameterBinding                       MeshUserParameter;                                          // 0x0050   (0x0020)  
	class USkeletalMeshComponent*                      SourceComponent;                                            // 0x0070   (0x0008)  
	ENDISkeletalMesh_SkinningMode                      SkinningMode;                                               // 0x0078   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0079   (0x0007)  MISSED
	TArray<FName>                                      SamplingRegions;                                            // 0x0080   (0x0010)  
	int32_t                                            WholeMeshLOD;                                               // 0x0090   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0094   (0x0004)  MISSED
	TArray<FName>                                      FilteredBones;                                              // 0x0098   (0x0010)  
	TArray<FName>                                      FilteredSockets;                                            // 0x00A8   (0x0010)  
	FName                                              ExcludeBoneName;                                            // 0x00B8   (0x000C)  
	bool                                               bExcludeBone : 1;                                           // 0x00C4:0 (0x0001)  
	unsigned char                                      UnknownData03_4[0x3];                                       // 0x00C5   (0x0003)  MISSED
	int32_t                                            UvSetIndex;                                                 // 0x00C8   (0x0004)  
	bool                                               bRequireCurrentFrameData;                                   // 0x00CC   (0x0001)  
	unsigned char                                      UnknownData04_6[0xB];                                       // 0x00CD   (0x000B)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceSpline
/// Size: 0x0028 (0x000040 - 0x000068)
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{ 
public:
	class AActor*                                      Source;                                                     // 0x0040   (0x0008)  
	FNiagaraUserParameterBinding                       SplineUserParameter;                                        // 0x0048   (0x0020)  
};

/// Struct /Script/Niagara.NDIStaticMeshSectionFilter
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNDIStaticMeshSectionFilter
{ 
	TArray<int32_t>                                    AllowedMaterialSlots;                                       // 0x0000   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceStaticMesh
/// Size: 0x0050 (0x000040 - 0x000090)
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{ 
public:
	ENDIStaticMesh_SourceMode                          SourceMode;                                                 // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	class UStaticMesh*                                 DefaultMesh;                                                // 0x0048   (0x0008)  
	class AActor*                                      Source;                                                     // 0x0050   (0x0008)  
	class UStaticMeshComponent*                        SourceComponent;                                            // 0x0058   (0x0008)  
	FNDIStaticMeshSectionFilter                        SectionFilter;                                              // 0x0060   (0x0010)  
	bool                                               bUsePhysicsBodyVelocity;                                    // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0071   (0x0007)  MISSED
	TArray<FName>                                      FilteredSockets;                                            // 0x0078   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0088   (0x0008)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceTexture
/// Size: 0x0010 (0x000040 - 0x000050)
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{ 
public:
	class UTexture*                                    Texture;                                                    // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceVector2DCurve
/// Size: 0x0100 (0x000078 - 0x000178)
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         XCurve;                                                     // 0x0078   (0x0080)  
	FRichCurve                                         YCurve;                                                     // 0x00F8   (0x0080)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceVector4Curve
/// Size: 0x0200 (0x000078 - 0x000278)
class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         XCurve;                                                     // 0x0078   (0x0080)  
	FRichCurve                                         YCurve;                                                     // 0x00F8   (0x0080)  
	FRichCurve                                         ZCurve;                                                     // 0x0178   (0x0080)  
	FRichCurve                                         WCurve;                                                     // 0x01F8   (0x0080)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceVectorCurve
/// Size: 0x0180 (0x000078 - 0x0001F8)
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         XCurve;                                                     // 0x0078   (0x0080)  
	FRichCurve                                         YCurve;                                                     // 0x00F8   (0x0080)  
	FRichCurve                                         ZCurve;                                                     // 0x0178   (0x0080)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceVectorField
/// Size: 0x0010 (0x000040 - 0x000050)
class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{ 
public:
	class UVectorField*                                Field;                                                      // 0x0040   (0x0008)  
	bool                                               bTileX;                                                     // 0x0048   (0x0001)  
	bool                                               bTileY;                                                     // 0x0049   (0x0001)  
	bool                                               bTileZ;                                                     // 0x004A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x004B   (0x0005)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceVolumeTexture
/// Size: 0x0018 (0x000040 - 0x000058)
class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface
{ 
public:
	class UVolumeTexture*                              Texture;                                                    // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0048   (0x0010)  MISSED
};

/// Struct /Script/Niagara.NiagaraDebugHUDVariable
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNiagaraDebugHUDVariable
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,1513) /* FString */               __um(Name);                                                 // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDebugHudTextOptions
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraDebugHudTextOptions
{ 
	ENiagaraDebugHudFont                               Font;                                                       // 0x0000   (0x0004)  
	ENiagaraDebugHudHAlign                             HorizontalAlignment;                                        // 0x0004   (0x0001)  
	ENiagaraDebugHudVAlign                             VerticalAlignment;                                          // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0006   (0x0002)  MISSED
	FVector2D                                          ScreenOffset;                                               // 0x0008   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraDebugHUDSettingsData
/// Size: 0x00E0 (0x000000 - 0x0000E0)
struct FNiagaraDebugHUDSettingsData
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	bool                                               bValidateSystemSimulationDataBuffers;                       // 0x0001   (0x0001)  
	bool                                               bValidateParticleDataBuffers;                               // 0x0002   (0x0001)  
	bool                                               bOverviewEnabled;                                           // 0x0003   (0x0001)  
	ENiagaraDebugHudFont                               OverviewFont;                                               // 0x0004   (0x0004)  
	FVector2D                                          OverviewLocation;                                           // 0x0008   (0x0008)  
	SDK_UNDEFINED(16,1514) /* FString */               __um(ActorFilter);                                          // 0x0010   (0x0010)  
	bool                                               bComponentFilterEnabled;                                    // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	SDK_UNDEFINED(16,1515) /* FString */               __um(ComponentFilter);                                      // 0x0028   (0x0010)  
	bool                                               bSystemFilterEnabled;                                       // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	SDK_UNDEFINED(16,1516) /* FString */               __um(SystemFilter);                                         // 0x0040   (0x0010)  
	bool                                               bEmitterFilterEnabled;                                      // 0x0050   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0051   (0x0007)  MISSED
	SDK_UNDEFINED(16,1517) /* FString */               __um(EmitterFilter);                                        // 0x0058   (0x0010)  
	bool                                               bActorFilterEnabled;                                        // 0x0068   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0069   (0x0003)  MISSED
	ENiagaraDebugHudVerbosity                          SystemDebugVerbosity;                                       // 0x006C   (0x0004)  
	ENiagaraDebugHudVerbosity                          SystemEmitterVerbosity;                                     // 0x0070   (0x0004)  
	bool                                               bSystemShowBounds;                                          // 0x0074   (0x0001)  
	bool                                               bSystemShowActiveOnlyInWorld;                               // 0x0075   (0x0001)  
	bool                                               bShowSystemVariables;                                       // 0x0076   (0x0001)  
	unsigned char                                      UnknownData04_5[0x1];                                       // 0x0077   (0x0001)  MISSED
	TArray<FNiagaraDebugHUDVariable>                   SystemVariables;                                            // 0x0078   (0x0010)  
	FNiagaraDebugHudTextOptions                        SystemTextOptions;                                          // 0x0088   (0x0010)  
	bool                                               bShowParticleVariables;                                     // 0x0098   (0x0001)  
	bool                                               bEnableGpuParticleReadback;                                 // 0x0099   (0x0001)  
	unsigned char                                      UnknownData05_5[0x6];                                       // 0x009A   (0x0006)  MISSED
	TArray<FNiagaraDebugHUDVariable>                   ParticlesVariables;                                         // 0x00A0   (0x0010)  
	FNiagaraDebugHudTextOptions                        ParticleTextOptions;                                        // 0x00B0   (0x0010)  
	bool                                               bShowParticlesVariablesWithSystem;                          // 0x00C0   (0x0001)  
	bool                                               bUseMaxParticlesToDisplay;                                  // 0x00C1   (0x0001)  
	unsigned char                                      UnknownData06_5[0x2];                                       // 0x00C2   (0x0002)  MISSED
	int32_t                                            MaxParticlesToDisplay;                                      // 0x00C4   (0x0004)  
	ENiagaraDebugPlaybackMode                          PlaybackMode;                                               // 0x00C8   (0x0001)  
	bool                                               bPlaybackRateEnabled;                                       // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData07_5[0x2];                                       // 0x00CA   (0x0002)  MISSED
	float                                              PlaybackRate;                                               // 0x00CC   (0x0004)  
	bool                                               bLoopTimeEnabled;                                           // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData08_5[0x3];                                       // 0x00D1   (0x0003)  MISSED
	float                                              LoopTime;                                                   // 0x00D4   (0x0004)  
	bool                                               bShowGlobalBudgetInfo;                                      // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData09_6[0x7];                                       // 0x00D9   (0x0007)  MISSED
};

/// Class /Script/Niagara.NiagaraDebugHUDSettings
/// Size: 0x0100 (0x000030 - 0x000130)
class UNiagaraDebugHUDSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0030   (0x0020)  MISSED
	FNiagaraDebugHUDSettingsData                       Data;                                                       // 0x0050   (0x00E0)  
};

/// Class /Script/Niagara.NiagaraEditorDataBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UNiagaraEditorDataBase : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraEditorParametersAdapterBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UNiagaraEditorParametersAdapterBase : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandler
/// Size: 0x0000 (0x000030 - 0x000030)
class UNiagaraSignificanceHandler : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandlerDistance
/// Size: 0x0000 (0x000030 - 0x000030)
class UNiagaraSignificanceHandlerDistance : public UNiagaraSignificanceHandler
{ 
public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandlerAge
/// Size: 0x0000 (0x000030 - 0x000030)
class UNiagaraSignificanceHandlerAge : public UNiagaraSignificanceHandler
{ 
public:
};

/// Struct /Script/Niagara.NiagaraSystemScalabilitySettings
/// Size: 0x0048 (0x000000 - 0x000048)
struct FNiagaraSystemScalabilitySettings
{ 
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0000   (0x0030)  
	bool                                               bCullByDistance : 1;                                        // 0x0030:0 (0x0001)  
	bool                                               bCullMaxInstanceCount : 1;                                  // 0x0030:1 (0x0001)  
	bool                                               bCullPerSystemMaxInstanceCount : 1;                         // 0x0030:2 (0x0001)  
	bool                                               bCullByMaxTimeWithoutRender : 1;                            // 0x0030:3 (0x0001)  
	bool                                               bCullByGlobalBudget : 1;                                    // 0x0030:4 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              MaxDistance;                                                // 0x0034   (0x0004)  
	int32_t                                            MaxInstances;                                               // 0x0038   (0x0004)  
	int32_t                                            MaxSystemInstances;                                         // 0x003C   (0x0004)  
	float                                              MaxTimeWithoutRender;                                       // 0x0040   (0x0004)  
	float                                              MaxGlobalBudgetUsage;                                       // 0x0044   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraSystemScalabilitySettingsArray
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraSystemScalabilitySettingsArray
{ 
	TArray<FNiagaraSystemScalabilitySettings>          Settings;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilitySettings
/// Size: 0x0038 (0x000000 - 0x000038)
struct FNiagaraEmitterScalabilitySettings
{ 
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0000   (0x0030)  
	bool                                               bScaleSpawnCount : 1;                                       // 0x0030:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              SpawnCountScale;                                            // 0x0034   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilitySettingsArray
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraEmitterScalabilitySettingsArray
{ 
	TArray<FNiagaraEmitterScalabilitySettings>         Settings;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraPerfBaselineStats
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraPerfBaselineStats
{ 
	float                                              PerInstanceAvg_GT;                                          // 0x0000   (0x0004)  
	float                                              PerInstanceAvg_RT;                                          // 0x0004   (0x0004)  
	float                                              PerInstanceMax_GT;                                          // 0x0008   (0x0004)  
	float                                              PerInstanceMax_RT;                                          // 0x000C   (0x0004)  
};

/// Class /Script/Niagara.NiagaraEffectType
/// Size: 0x0070 (0x000030 - 0x0000A0)
class UNiagaraEffectType : public UObject
{ 
public:
	ENiagaraScalabilityUpdateFrequency                 UpdateFrequency;                                            // 0x0030   (0x0004)  
	ENiagaraCullReaction                               CullReaction;                                               // 0x0034   (0x0004)  
	class UNiagaraSignificanceHandler*                 SignificanceHandler;                                        // 0x0038   (0x0008)  
	TArray<FNiagaraSystemScalabilitySettings>          DetailLevelScalabilitySettings;                             // 0x0040   (0x0010)  
	FNiagaraSystemScalabilitySettingsArray             SystemScalabilitySettings;                                  // 0x0050   (0x0010)  
	FNiagaraEmitterScalabilitySettingsArray            EmitterScalabilitySettings;                                 // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0070   (0x0008)  MISSED
	class UNiagaraBaselineController*                  PerformanceBaselineController;                              // 0x0078   (0x0008)  
	FNiagaraPerfBaselineStats                          PerfBaselineStats;                                          // 0x0080   (0x0010)  
	FGuid                                              PerfBaselineVersion;                                        // 0x0090   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraEventReceiverProperties
/// Size: 0x0024 (0x000000 - 0x000024)
struct FNiagaraEventReceiverProperties
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	FName                                              SourceEventGenerator;                                       // 0x000C   (0x000C)  
	FName                                              SourceEmitter;                                              // 0x0018   (0x000C)  
};

/// Struct /Script/Niagara.NiagaraTypeLayoutInfo
/// Size: 0x0060 (0x000000 - 0x000060)
struct FNiagaraTypeLayoutInfo
{ 
	TArray<uint32_t>                                   FloatComponentByteOffsets;                                  // 0x0000   (0x0010)  
	TArray<uint32_t>                                   FloatComponentRegisterOffsets;                              // 0x0010   (0x0010)  
	TArray<uint32_t>                                   Int32ComponentByteOffsets;                                  // 0x0020   (0x0010)  
	TArray<uint32_t>                                   Int32ComponentRegisterOffsets;                              // 0x0030   (0x0010)  
	TArray<uint32_t>                                   HalfComponentByteOffsets;                                   // 0x0040   (0x0010)  
	TArray<uint32_t>                                   HalfComponentRegisterOffsets;                               // 0x0050   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraVariableLayoutInfo
/// Size: 0x0070 (0x000000 - 0x000070)
struct FNiagaraVariableLayoutInfo
{ 
	uint32_t                                           FloatComponentStart;                                        // 0x0000   (0x0004)  
	uint32_t                                           Int32ComponentStart;                                        // 0x0004   (0x0004)  
	uint32_t                                           HalfComponentStart;                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FNiagaraTypeLayoutInfo                             LayoutInfo;                                                 // 0x0010   (0x0060)  
};

/// Struct /Script/Niagara.NiagaraDataSetID
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraDataSetID
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	ENiagaraDataSetType                                Type;                                                       // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraDataSetCompiledData
/// Size: 0x0048 (0x000000 - 0x000048)
struct FNiagaraDataSetCompiledData
{ 
	TArray<FNiagaraVariable>                           Variables;                                                  // 0x0000   (0x0010)  
	TArray<FNiagaraVariableLayoutInfo>                 VariableLayouts;                                            // 0x0010   (0x0010)  
	FNiagaraDataSetID                                  ID;                                                         // 0x0020   (0x0010)  
	uint32_t                                           TotalFloatComponents;                                       // 0x0030   (0x0004)  
	uint32_t                                           TotalInt32Components;                                       // 0x0034   (0x0004)  
	uint32_t                                           TotalHalfComponents;                                        // 0x0038   (0x0004)  
	bool                                               bRequiresPersistentIDs : 1;                                 // 0x003C:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x003D   (0x0003)  MISSED
	ENiagaraSimTarget                                  SimTarget;                                                  // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraEventGeneratorProperties
/// Size: 0x0058 (0x000000 - 0x000058)
struct FNiagaraEventGeneratorProperties
{ 
	int32_t                                            MaxEventsPerFrame;                                          // 0x0000   (0x0004)  
	FName                                              ID;                                                         // 0x0004   (0x000C)  
	FNiagaraDataSetCompiledData                        DataSetCompiledData;                                        // 0x0010   (0x0048)  
};

/// Struct /Script/Niagara.NiagaraEmitterScriptProperties
/// Size: 0x0028 (0x000000 - 0x000028)
struct FNiagaraEmitterScriptProperties
{ 
	class UNiagaraScript*                              Script;                                                     // 0x0000   (0x0008)  
	TArray<FNiagaraEventReceiverProperties>            EventReceivers;                                             // 0x0008   (0x0010)  
	TArray<FNiagaraEventGeneratorProperties>           EventGenerators;                                            // 0x0018   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDetailsLevelScaleOverrides
/// Size: 0x0014 (0x000000 - 0x000014)
struct FNiagaraDetailsLevelScaleOverrides
{ 
	float                                              Low;                                                        // 0x0000   (0x0004)  
	float                                              Medium;                                                     // 0x0004   (0x0004)  
	float                                              High;                                                       // 0x0008   (0x0004)  
	float                                              Epic;                                                       // 0x000C   (0x0004)  
	float                                              Cine;                                                       // 0x0010   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilityOverride
/// Size: 0x0008 (0x000038 - 0x000040)
struct FNiagaraEmitterScalabilityOverride : FNiagaraEmitterScalabilitySettings
{ 
	bool                                               bOverrideSpawnCountScale : 1;                               // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilityOverrides
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraEmitterScalabilityOverrides
{ 
	TArray<FNiagaraEmitterScalabilityOverride>         Overrides;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraEventScriptProperties
/// Size: 0x0030 (0x000028 - 0x000058)
struct FNiagaraEventScriptProperties : FNiagaraEmitterScriptProperties
{ 
	EScriptExecutionMode                               ExecutionMode;                                              // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	uint32_t                                           SpawnNumber;                                                // 0x002C   (0x0004)  
	uint32_t                                           MaxEventsPerFrame;                                          // 0x0030   (0x0004)  
	FGuid                                              SourceEmitterID;                                            // 0x0034   (0x0010)  
	FName                                              SourceEventName;                                            // 0x0044   (0x000C)  
	bool                                               bRandomSpawnNumber;                                         // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0051   (0x0003)  MISSED
	uint32_t                                           MinSpawnNumber;                                             // 0x0054   (0x0004)  
};

/// Class /Script/Niagara.NiagaraEmitter
/// Size: 0x0278 (0x000030 - 0x0002A8)
class UNiagaraEmitter : public UObject
{ 
public:
	bool                                               bLocalSpace;                                                // 0x0030   (0x0001)  
	bool                                               bDeterminism;                                               // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0032   (0x0002)  MISSED
	int32_t                                            RandomSeed;                                                 // 0x0034   (0x0004)  
	EParticleAllocationMode                            AllocationMode;                                             // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            PreAllocationCount;                                         // 0x003C   (0x0004)  
	FNiagaraEmitterScriptProperties                    UpdateScriptProps;                                          // 0x0040   (0x0028)  
	FNiagaraEmitterScriptProperties                    SpawnScriptProps;                                           // 0x0068   (0x0028)  
	ENiagaraSimTarget                                  SimTarget;                                                  // 0x0090   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0091   (0x0003)  MISSED
	FBox                                               FixedBounds;                                                // 0x0094   (0x001C)  
	int32_t                                            MinDetailLevel;                                             // 0x00B0   (0x0004)  
	int32_t                                            MaxDetailLevel;                                             // 0x00B4   (0x0004)  
	FNiagaraDetailsLevelScaleOverrides                 GlobalSpawnCountScaleOverrides;                             // 0x00B8   (0x0014)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	FNiagaraPlatformSet                                Platforms;                                                  // 0x00D0   (0x0030)  
	FNiagaraEmitterScalabilityOverrides                ScalabilityOverrides;                                       // 0x0100   (0x0010)  
	bool                                               bInterpolatedSpawning : 1;                                  // 0x0110:0 (0x0001)  
	bool                                               bFixedBounds : 1;                                           // 0x0110:1 (0x0001)  
	bool                                               bUseMinDetailLevel : 1;                                     // 0x0110:2 (0x0001)  
	bool                                               bUseMaxDetailLevel : 1;                                     // 0x0110:3 (0x0001)  
	bool                                               bOverrideGlobalSpawnCountScale : 1;                         // 0x0110:4 (0x0001)  
	bool                                               bRequiresPersistentIDs : 1;                                 // 0x0110:5 (0x0001)  
	bool                                               bCombineEventSpawn : 1;                                     // 0x0110:6 (0x0001)  
	unsigned char                                      UnknownData04_4[0x3];                                       // 0x0111   (0x0003)  MISSED
	float                                              MaxDeltaTimePerTick;                                        // 0x0114   (0x0004)  
	uint32_t                                           DefaultShaderStageIndex;                                    // 0x0118   (0x0004)  
	uint32_t                                           MaxUpdateIterations;                                        // 0x011C   (0x0004)  
	SDK_UNDEFINED(80,1518) /* TSet<uint32_t> */        __um(SpawnStages);                                          // 0x0120   (0x0050)  
	bool                                               bSimulationStagesEnabled : 1;                               // 0x0170:0 (0x0001)  
	bool                                               bDeprecatedShaderStagesEnabled : 1;                         // 0x0170:1 (0x0001)  
	bool                                               bLimitDeltaTime : 1;                                        // 0x0170:2 (0x0001)  
	unsigned char                                      UnknownData05_4[0x7];                                       // 0x0171   (0x0007)  MISSED
	SDK_UNDEFINED(16,1519) /* FString */               __um(UniqueEmitterName);                                    // 0x0178   (0x0010)  
	TArray<class UNiagaraRendererProperties*>          RendererProperties;                                         // 0x0188   (0x0010)  
	TArray<FNiagaraEventScriptProperties>              EventHandlerScriptProps;                                    // 0x0198   (0x0010)  
	TArray<class UNiagaraSimulationStageBase*>         SimulationStages;                                           // 0x01A8   (0x0010)  
	class UNiagaraScript*                              GPUComputeScript;                                           // 0x01B8   (0x0008)  
	TArray<FName>                                      SharedEventGeneratorIds;                                    // 0x01C0   (0x0010)  
	unsigned char                                      UnknownData06_6[0xD8];                                      // 0x01D0   (0x00D8)  MISSED
};

/// Class /Script/Niagara.NiagaraEventReceiverEmitterAction
/// Size: 0x0000 (0x000030 - 0x000030)
class UNiagaraEventReceiverEmitterAction : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
/// Size: 0x0008 (0x000030 - 0x000038)
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{ 
public:
	uint32_t                                           NumParticles;                                               // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraFunctionLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
	// class UNiagaraComponent* SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, FName attachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck); // [0x48f5d20] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
	// class UNiagaraComponent* SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck); // [0x48f5a40] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject
	// void SetVolumeTextureObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UVolumeTexture* Texture); // [0x48f5540] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetTextureObject
	// void SetTextureObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UTexture* Texture);         // [0x48f5660] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetTexture2DArrayObject
	// void SetTexture2DArrayObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UTexture2DArray* Texture); // [0x48f5540] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions
	// void SetSkeletalMeshDataInterfaceSamplingRegions(class UNiagaraComponent* NiagaraSystem, FString OverrideName, TArray<FName>& SamplingRegions); // [0x48f5410] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent
	// void OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UStaticMeshComponent* StaticMeshComponent); // [0x48f4e60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh
	// void OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UStaticMesh* StaticMesh); // [0x48f4d40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent
	// void OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent); // [0x48f4c20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
	// class UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection); // [0x48f4850] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraLightRendererProperties
/// Size: 0x02B8 (0x000080 - 0x000338)
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{ 
public:
	bool                                               bUseInverseSquaredFalloff : 1;                              // 0x0080:0 (0x0001)  
	bool                                               bAffectsTranslucency : 1;                                   // 0x0080:1 (0x0001)  
	bool                                               bAlphaScalesBrightness : 1;                                 // 0x0080:2 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0081   (0x0003)  MISSED
	float                                              RadiusScale;                                                // 0x0084   (0x0004)  
	float                                              DefaultExponent;                                            // 0x0088   (0x0004)  
	FVector                                            ColorAdd;                                                   // 0x008C   (0x000C)  
	int32_t                                            RendererVisibility;                                         // 0x0098   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x009C   (0x0004)  MISSED
	FNiagaraVariableAttributeBinding                   LightRenderingEnabledBinding;                               // 0x00A0   (0x0058)  
	FNiagaraVariableAttributeBinding                   LightExponentBinding;                                       // 0x00F8   (0x0058)  
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x0150   (0x0058)  
	FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x01A8   (0x0058)  
	FNiagaraVariableAttributeBinding                   RadiusBinding;                                              // 0x0200   (0x0058)  
	FNiagaraVariableAttributeBinding                   VolumetricScatteringBinding;                                // 0x0258   (0x0058)  
	FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x02B0   (0x0058)  
	unsigned char                                      UnknownData02_6[0x30];                                      // 0x0308   (0x0030)  MISSED
};

/// Struct /Script/Niagara.NiagaraMeshRendererMeshProperties
/// Size: 0x0028 (0x000000 - 0x000028)
struct FNiagaraMeshRendererMeshProperties
{ 
	class UStaticMesh*                                 Mesh;                                                       // 0x0000   (0x0008)  
	FVector                                            Scale;                                                      // 0x0008   (0x000C)  
	FVector                                            PivotOffset;                                                // 0x0014   (0x000C)  
	ENiagaraMeshPivotOffsetSpace                       PivotOffsetSpace;                                           // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraMeshMaterialOverride
/// Size: 0x0028 (0x000000 - 0x000028)
struct FNiagaraMeshMaterialOverride
{ 
	class UMaterialInterface*                          ExplicitMat;                                                // 0x0000   (0x0008)  
	FNiagaraUserParameterBinding                       UserParamBinding;                                           // 0x0008   (0x0020)  
};

/// Struct /Script/Niagara.NiagaraMaterialAttributeBinding
/// Size: 0x003C (0x000000 - 0x00003C)
struct FNiagaraMaterialAttributeBinding
{ 
	FName                                              MaterialParameterName;                                      // 0x0000   (0x000C)  
	FNiagaraVariableBase                               NiagaraVariable;                                            // 0x000C   (0x0010)  
	FNiagaraVariableBase                               ResolvedNiagaraVariable;                                    // 0x001C   (0x0010)  
	FNiagaraVariableBase                               NiagaraChildVariable;                                       // 0x002C   (0x0010)  
};

/// Class /Script/Niagara.NiagaraMeshRendererProperties
/// Size: 0x0820 (0x000080 - 0x0008A0)
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{ 
public:
	TArray<FNiagaraMeshRendererMeshProperties>         Meshes;                                                     // 0x0080   (0x0010)  
	ENiagaraRendererSourceDataMode                     SourceMode;                                                 // 0x0090   (0x0001)  
	ENiagaraSortMode                                   SortMode;                                                   // 0x0091   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0092   (0x0002)  MISSED
	bool                                               bOverrideMaterials : 1;                                     // 0x0094:0 (0x0001)  
	bool                                               bSortOnlyWhenTranslucent : 1;                               // 0x0094:1 (0x0001)  
	bool                                               bGpuLowLatencyTranslucency : 1;                             // 0x0094:2 (0x0001)  
	bool                                               bSubImageBlend : 1;                                         // 0x0094:3 (0x0001)  
	bool                                               bEnableFrustumCulling : 1;                                  // 0x0094:4 (0x0001)  
	bool                                               bEnableCameraDistanceCulling : 1;                           // 0x0094:5 (0x0001)  
	bool                                               bEnableMeshFlipbook : 1;                                    // 0x0094:6 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0095   (0x0003)  MISSED
	TArray<FNiagaraMeshMaterialOverride>               OverrideMaterials;                                          // 0x0098   (0x0010)  
	FVector2D                                          SubImageSize;                                               // 0x00A8   (0x0008)  
	ENiagaraMeshFacingMode                             FacingMode;                                                 // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00B1   (0x0003)  MISSED
	bool                                               bLockedAxisEnable : 1;                                      // 0x00B4:0 (0x0001)  
	unsigned char                                      UnknownData03_4[0x3];                                       // 0x00B5   (0x0003)  MISSED
	FVector                                            LockedAxis;                                                 // 0x00B8   (0x000C)  
	ENiagaraMeshLockedAxisSpace                        LockedAxisSpace;                                            // 0x00C4   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x00C5   (0x0003)  MISSED
	float                                              MinCameraDistance;                                          // 0x00C8   (0x0004)  
	float                                              MaxCameraDistance;                                          // 0x00CC   (0x0004)  
	uint32_t                                           RendererVisibility;                                         // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x00D4   (0x0004)  MISSED
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x00D8   (0x0058)  
	FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x0130   (0x0058)  
	FNiagaraVariableAttributeBinding                   VelocityBinding;                                            // 0x0188   (0x0058)  
	FNiagaraVariableAttributeBinding                   MeshOrientationBinding;                                     // 0x01E0   (0x0058)  
	FNiagaraVariableAttributeBinding                   ScaleBinding;                                               // 0x0238   (0x0058)  
	FNiagaraVariableAttributeBinding                   SubImageIndexBinding;                                       // 0x0290   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterialBinding;                                     // 0x02E8   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial1Binding;                                    // 0x0340   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial2Binding;                                    // 0x0398   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial3Binding;                                    // 0x03F0   (0x0058)  
	FNiagaraVariableAttributeBinding                   MaterialRandomBinding;                                      // 0x0448   (0x0058)  
	FNiagaraVariableAttributeBinding                   CustomSortingBinding;                                       // 0x04A0   (0x0058)  
	FNiagaraVariableAttributeBinding                   NormalizedAgeBinding;                                       // 0x04F8   (0x0058)  
	FNiagaraVariableAttributeBinding                   CameraOffsetBinding;                                        // 0x0550   (0x0058)  
	FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x05A8   (0x0058)  
	FNiagaraVariableAttributeBinding                   MeshIndexBinding;                                           // 0x0600   (0x0058)  
	TArray<FNiagaraMaterialAttributeBinding>           MaterialParameterBindings;                                  // 0x0658   (0x0010)  
	FNiagaraVariableAttributeBinding                   PrevPositionBinding;                                        // 0x0668   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevScaleBinding;                                           // 0x06C0   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevMeshOrientationBinding;                                 // 0x0718   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevCameraOffsetBinding;                                    // 0x0770   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevVelocityBinding;                                        // 0x07C8   (0x0058)  
	unsigned char                                      UnknownData06_5[0x68];                                      // 0x0820   (0x0068)  MISSED
	class UStaticMesh*                                 ParticleMesh;                                               // 0x0888   (0x0008)  
	FVector                                            PivotOffset;                                                // 0x0890   (0x000C)  
	ENiagaraMeshPivotOffsetSpace                       PivotOffsetSpace;                                           // 0x089C   (0x0001)  
	unsigned char                                      UnknownData07_6[0x3];                                       // 0x089D   (0x0003)  MISSED
};

/// Class /Script/Niagara.NiagaraMessageDataBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UNiagaraMessageDataBase : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraParameterCollectionInstance
/// Size: 0x00B8 (0x000030 - 0x0000E8)
class UNiagaraParameterCollectionInstance : public UObject
{ 
public:
	class UNiagaraParameterCollection*                 Collection;                                                 // 0x0030   (0x0008)  
	TArray<FNiagaraVariable>                           OverridenParameters;                                        // 0x0038   (0x0010)  
	FNiagaraParameterStore                             ParameterStorage;                                           // 0x0048   (0x0078)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x00C0   (0x0028)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
	// void SetVectorParameter(FString InVariableName, FVector InValue);                                                     // [0x48f5950] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
	// void SetVector4Parameter(FString InVariableName, FVector4& InValue);                                                  // [0x48f5860] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
	// void SetVector2DParameter(FString InVariableName, FVector2D InValue);                                                 // [0x48f5780] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
	// void SetQuatParameter(FString InVariableName, FQuat& InValue);                                                        // [0x48f5320] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetIntParameter
	// void SetIntParameter(FString InVariableName, int32_t InValue);                                                        // [0x48f5240] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
	// void SetFloatParameter(FString InVariableName, float InValue);                                                        // [0x48f5150] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetColorParameter
	// void SetColorParameter(FString InVariableName, FLinearColor InValue);                                                 // [0x48f5060] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
	// void SetBoolParameter(FString InVariableName, bool InValue);                                                          // [0x48f4f80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
	// FVector GetVectorParameter(FString InVariableName);                                                                   // [0x48f4b60] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
	// FVector4 GetVector4Parameter(FString InVariableName);                                                                 // [0x48f4aa0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
	// FVector2D GetVector2DParameter(FString InVariableName);                                                               // [0x48f49e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
	// FQuat GetQuatParameter(FString InVariableName);                                                                       // [0x48f4920] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetIntParameter
	// int32_t GetIntParameter(FString InVariableName);                                                                      // [0x48f47a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
	// float GetFloatParameter(FString InVariableName);                                                                      // [0x48f46f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetColorParameter
	// FLinearColor GetColorParameter(FString InVariableName);                                                               // [0x48f4630] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
	// bool GetBoolParameter(FString InVariableName);                                                                        // [0x48f4580] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraParameterCollection
/// Size: 0x0040 (0x000030 - 0x000070)
class UNiagaraParameterCollection : public UObject
{ 
public:
	FName                                              Namespace;                                                  // 0x0030   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<FNiagaraVariable>                           Parameters;                                                 // 0x0040   (0x0010)  
	class UMaterialParameterCollection*                SourceMaterialCollection;                                   // 0x0050   (0x0008)  
	class UNiagaraParameterCollectionInstance*         DefaultInstance;                                            // 0x0058   (0x0008)  
	FGuid                                              CompileId;                                                  // 0x0060   (0x0010)  
};

/// Class /Script/Niagara.NiagaraParameterDefinitionsBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UNiagaraParameterDefinitionsBase : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraBaselineController
/// Size: 0x0048 (0x000030 - 0x000078)
class UNiagaraBaselineController : public UObject
{ 
public:
	float                                              TestDuration;                                               // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	class UNiagaraEffectType*                          EffectType;                                                 // 0x0038   (0x0008)  
	class ANiagaraPerfBaselineActor*                   Owner;                                                      // 0x0040   (0x0008)  
	SDK_UNDEFINED(48,1520) /* TWeakObjectPtr<UNiagaraSystem*> */ __um(System);                                     // 0x0048   (0x0030)  


	/// Functions
	// Function /Script/Niagara.NiagaraBaselineController.OnTickTest
	// bool OnTickTest();                                                                                                    // [0x48fa2e0] Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraBaselineController.OnOwnerTick
	// void OnOwnerTick(float DeltaTime);                                                                                    // [0x48fa250] Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraBaselineController.OnEndTest
	// void OnEndTest(FNiagaraPerfBaselineStats Stats);                                                                      // [0x48fa1c0] Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraBaselineController.OnBeginTest
	// void OnBeginTest();                                                                                                   // [0x48fa1a0] Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraBaselineController.GetSystem
	// class UNiagaraSystem* GetSystem();                                                                                    // [0x45fe110] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraBaselineController_Basic
/// Size: 0x0018 (0x000078 - 0x000090)
class UNiagaraBaselineController_Basic : public UNiagaraBaselineController
{ 
public:
	int32_t                                            NumInstances;                                               // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	TArray<class UNiagaraComponent*>                   SpawnedComponents;                                          // 0x0080   (0x0010)  
};

/// Class /Script/Niagara.NiagaraPerfBaselineActor
/// Size: 0x0010 (0x000230 - 0x000240)
class ANiagaraPerfBaselineActor : public AActor
{ 
public:
	class UNiagaraBaselineController*                  Controller;                                                 // 0x0230   (0x0008)  
	class UTextRenderComponent*                        label;                                                      // 0x0238   (0x0008)  
};

/// Class /Script/Niagara.NiagaraPrecompileContainer
/// Size: 0x0018 (0x000030 - 0x000048)
class UNiagaraPrecompileContainer : public UObject
{ 
public:
	TArray<class UNiagaraScript*>                      Scripts;                                                    // 0x0030   (0x0010)  
	class UNiagaraSystem*                              System;                                                     // 0x0040   (0x0008)  
};

/// Class /Script/Niagara.NiagaraPreviewBase
/// Size: 0x0000 (0x000230 - 0x000230)
class ANiagaraPreviewBase : public AActor
{ 
public:


	/// Functions
	// Function /Script/Niagara.NiagaraPreviewBase.SetSystem
	// void SetSystem(class UNiagaraSystem* InSystem);                                                                       // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/Niagara.NiagaraPreviewBase.SetLabelText
	// void SetLabelText(FText& InXAxisText, FText& InYAxisText);                                                            // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/Niagara.NiagaraPreviewAxis
/// Size: 0x0000 (0x000030 - 0x000030)
class UNiagaraPreviewAxis : public UObject
{ 
public:


	/// Functions
	// Function /Script/Niagara.NiagaraPreviewAxis.Num
	// int32_t Num();                                                                                                        // [0x48fa170] Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraPreviewAxis.ApplyToPreview
	// void ApplyToPreview(class UNiagaraComponent* PreviewComponent, int32_t PreviewIndex, bool bIsXAxis, FString& OutLabelText); // [0x48f9f20] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamBase
/// Size: 0x0010 (0x000030 - 0x000040)
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{ 
public:
	FName                                              Param;                                                      // 0x0030   (0x000C)  
	int32_t                                            Count;                                                      // 0x003C   (0x0004)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamInt32
/// Size: 0x0008 (0x000040 - 0x000048)
class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	int32_t                                            Min;                                                        // 0x0040   (0x0004)  
	int32_t                                            Max;                                                        // 0x0044   (0x0004)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamFloat
/// Size: 0x0008 (0x000040 - 0x000048)
class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	float                                              Min;                                                        // 0x0040   (0x0004)  
	float                                              Max;                                                        // 0x0044   (0x0004)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector2D
/// Size: 0x0010 (0x000040 - 0x000050)
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	FVector2D                                          Min;                                                        // 0x0040   (0x0008)  
	FVector2D                                          Max;                                                        // 0x0048   (0x0008)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector
/// Size: 0x0018 (0x000040 - 0x000058)
class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	FVector                                            Min;                                                        // 0x0040   (0x000C)  
	FVector                                            Max;                                                        // 0x004C   (0x000C)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector4
/// Size: 0x0020 (0x000040 - 0x000060)
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	FVector4                                           Min;                                                        // 0x0040   (0x0010)  
	FVector4                                           Max;                                                        // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamLinearColor
/// Size: 0x0020 (0x000040 - 0x000060)
class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	FLinearColor                                       Min;                                                        // 0x0040   (0x0010)  
	FLinearColor                                       Max;                                                        // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraPreviewGrid
/// Size: 0x0050 (0x000230 - 0x000280)
class ANiagaraPreviewGrid : public AActor
{ 
public:
	class UNiagaraSystem*                              System;                                                     // 0x0230   (0x0008)  
	ENiagaraPreviewGridResetMode                       ResetMode;                                                  // 0x0238   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0239   (0x0007)  MISSED
	class UNiagaraPreviewAxis*                         PreviewAxisX;                                               // 0x0240   (0x0008)  
	class UNiagaraPreviewAxis*                         PreviewAxisY;                                               // 0x0248   (0x0008)  
	class UClass*                                      PreviewClass;                                               // 0x0250   (0x0008)  
	float                                              SpacingX;                                                   // 0x0258   (0x0004)  
	float                                              SpacingY;                                                   // 0x025C   (0x0004)  
	int32_t                                            NumX;                                                       // 0x0260   (0x0004)  
	int32_t                                            NumY;                                                       // 0x0264   (0x0004)  
	TArray<class UChildActorComponent*>                PreviewComponents;                                          // 0x0268   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0278   (0x0008)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraPreviewGrid.SetPaused
	// void SetPaused(bool bPaused);                                                                                         // [0x48fa310] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraPreviewGrid.GetPreviews
	// void GetPreviews(TArray<UNiagaraComponent*>& OutPreviews);                                                            // [0x48fa0c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraPreviewGrid.DeactivatePreviews
	// void DeactivatePreviews();                                                                                            // [0x48fa0a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraPreviewGrid.ActivatePreviews
	// void ActivatePreviews(bool bReset);                                                                                   // [0x48f9e90] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Niagara.NiagaraRibbonUVSettings
/// Size: 0x0024 (0x000000 - 0x000024)
struct FNiagaraRibbonUVSettings
{ 
	ENiagaraRibbonUVDistributionMode                   DistributionMode;                                           // 0x0000   (0x0004)  
	ENiagaraRibbonUVEdgeMode                           LeadingEdgeMode;                                            // 0x0004   (0x0004)  
	ENiagaraRibbonUVEdgeMode                           TrailingEdgeMode;                                           // 0x0008   (0x0004)  
	float                                              TilingLength;                                               // 0x000C   (0x0004)  
	FVector2D                                          Offset;                                                     // 0x0010   (0x0008)  
	FVector2D                                          Scale;                                                      // 0x0018   (0x0008)  
	bool                                               bEnablePerParticleUOverride;                                // 0x0020   (0x0001)  
	bool                                               bEnablePerParticleVRangeOverride;                           // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0022   (0x0002)  MISSED
};

/// Struct /Script/Niagara.NiagaraRibbonShapeCustomVertex
/// Size: 0x0014 (0x000000 - 0x000014)
struct FNiagaraRibbonShapeCustomVertex
{ 
	FVector2D                                          position;                                                   // 0x0000   (0x0008)  
	FVector2D                                          Normal;                                                     // 0x0008   (0x0008)  
	float                                              TextureV;                                                   // 0x0010   (0x0004)  
};

/// Class /Script/Niagara.NiagaraRibbonRendererProperties
/// Size: 0x07E8 (0x000080 - 0x000868)
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{ 
public:
	class UMaterialInterface*                          Material;                                                   // 0x0080   (0x0008)  
	FNiagaraUserParameterBinding                       MaterialUserParamBinding;                                   // 0x0088   (0x0020)  
	ENiagaraRibbonFacingMode                           FacingMode;                                                 // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A9   (0x0003)  MISSED
	FNiagaraRibbonUVSettings                           UV0Settings;                                                // 0x00AC   (0x0024)  
	FNiagaraRibbonUVSettings                           UV1Settings;                                                // 0x00D0   (0x0024)  
	ENiagaraRibbonDrawDirection                        DrawDirection;                                              // 0x00F4   (0x0001)  
	ENiagaraRibbonShapeMode                            Shape;                                                      // 0x00F5   (0x0001)  
	bool                                               bEnableAccurateGeometry;                                    // 0x00F6   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x00F7   (0x0001)  MISSED
	int32_t                                            WidthSegmentationCount;                                     // 0x00F8   (0x0004)  
	int32_t                                            MultiPlaneCount;                                            // 0x00FC   (0x0004)  
	int32_t                                            TubeSubdivisions;                                           // 0x0100   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0104   (0x0004)  MISSED
	TArray<FNiagaraRibbonShapeCustomVertex>            CustomVertices;                                             // 0x0108   (0x0010)  
	float                                              CurveTension;                                               // 0x0118   (0x0004)  
	ENiagaraRibbonTessellationMode                     TessellationMode;                                           // 0x011C   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x011D   (0x0003)  MISSED
	int32_t                                            TessellationFactor;                                         // 0x0120   (0x0004)  
	bool                                               bUseConstantFactor;                                         // 0x0124   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0125   (0x0003)  MISSED
	float                                              TessellationAngle;                                          // 0x0128   (0x0004)  
	bool                                               bScreenSpaceTessellation;                                   // 0x012C   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x012D   (0x0003)  MISSED
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x0130   (0x0058)  
	FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x0188   (0x0058)  
	FNiagaraVariableAttributeBinding                   VelocityBinding;                                            // 0x01E0   (0x0058)  
	FNiagaraVariableAttributeBinding                   NormalizedAgeBinding;                                       // 0x0238   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonTwistBinding;                                         // 0x0290   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonWidthBinding;                                         // 0x02E8   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonFacingBinding;                                        // 0x0340   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonIdBinding;                                            // 0x0398   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonLinkOrderBinding;                                     // 0x03F0   (0x0058)  
	FNiagaraVariableAttributeBinding                   MaterialRandomBinding;                                      // 0x0448   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterialBinding;                                     // 0x04A0   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial1Binding;                                    // 0x04F8   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial2Binding;                                    // 0x0550   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial3Binding;                                    // 0x05A8   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonUVDistance;                                           // 0x0600   (0x0058)  
	FNiagaraVariableAttributeBinding                   U0OverrideBinding;                                          // 0x0658   (0x0058)  
	FNiagaraVariableAttributeBinding                   V0RangeOverrideBinding;                                     // 0x06B0   (0x0058)  
	FNiagaraVariableAttributeBinding                   U1OverrideBinding;                                          // 0x0708   (0x0058)  
	FNiagaraVariableAttributeBinding                   V1RangeOverrideBinding;                                     // 0x0760   (0x0058)  
	TArray<FNiagaraMaterialAttributeBinding>           MaterialParameterBindings;                                  // 0x07B8   (0x0010)  
	unsigned char                                      UnknownData06_6[0xA0];                                      // 0x07C8   (0x00A0)  MISSED
};

/// Struct /Script/Niagara.NiagaraScriptExecutionPaddingInfo
/// Size: 0x0008 (0x000000 - 0x000008)
struct FNiagaraScriptExecutionPaddingInfo
{ 
	uint16_t                                           SrcOffset;                                                  // 0x0000   (0x0002)  
	uint16_t                                           DestOffset;                                                 // 0x0002   (0x0002)  
	uint16_t                                           SrcSize;                                                    // 0x0004   (0x0002)  
	uint16_t                                           DestSize;                                                   // 0x0006   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraScriptExecutionParameterStore
/// Size: 0x0020 (0x000078 - 0x000098)
struct FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore
{ 
	int32_t                                            ParameterSize;                                              // 0x0078   (0x0004)  
	uint32_t                                           PaddedParameterSize;                                        // 0x007C   (0x0004)  
	TArray<FNiagaraScriptExecutionPaddingInfo>         PaddingInfo;                                                // 0x0080   (0x0010)  
	bool                                               bInitialized : 1;                                           // 0x0090:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0091   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraBoundParameter
/// Size: 0x0028 (0x000000 - 0x000028)
struct FNiagaraBoundParameter
{ 
	FNiagaraVariable                                   Parameter;                                                  // 0x0000   (0x0020)  
	int32_t                                            SrcOffset;                                                  // 0x0020   (0x0004)  
	int32_t                                            DestOffset;                                                 // 0x0024   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraVMExecutableDataId
/// Size: 0x0058 (0x000000 - 0x000058)
struct FNiagaraVMExecutableDataId
{ 
	FGuid                                              CompilerVersionID;                                          // 0x0000   (0x0010)  
	ENiagaraScriptUsage                                ScriptUsageType;                                            // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	FGuid                                              ScriptUsageTypeID;                                          // 0x0014   (0x0010)  
	bool                                               bUsesRapidIterationParams : 1;                              // 0x0024:0 (0x0001)  
	bool                                               bInterpolatedSpawn : 1;                                     // 0x0024:1 (0x0001)  
	bool                                               bRequiresPersistentIDs : 1;                                 // 0x0024:2 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0025   (0x0003)  MISSED
	FGuid                                              BaseScriptID;                                               // 0x0028   (0x0010)  
	FNiagaraCompileHash                                BaseScriptCompileHash;                                      // 0x0038   (0x0010)  
	FGuid                                              ScriptVersionID;                                            // 0x0048   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraCompilerTag
/// Size: 0x0030 (0x000000 - 0x000030)
struct FNiagaraCompilerTag
{ 
	FNiagaraVariable                                   Variable;                                                   // 0x0000   (0x0020)  
	SDK_UNDEFINED(16,1521) /* FString */               __um(StringValue);                                          // 0x0020   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraScriptDataUsageInfo
/// Size: 0x0001 (0x000000 - 0x000001)
struct FNiagaraScriptDataUsageInfo
{ 
	bool                                               bReadsAttributeData;                                        // 0x0000   (0x0001)  
};

/// Struct /Script/Niagara.NiagaraScriptDataInterfaceCompileInfo
/// Size: 0x0040 (0x000000 - 0x000040)
struct FNiagaraScriptDataInterfaceCompileInfo
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	int32_t                                            UserPtrIdx;                                                 // 0x000C   (0x0004)  
	FNiagaraTypeDefinition                             Type;                                                       // 0x0010   (0x0010)  
	FName                                              RegisteredParameterMapRead;                                 // 0x0020   (0x000C)  
	FName                                              RegisteredParameterMapWrite;                                // 0x002C   (0x000C)  
	bool                                               bIsPlaceholder;                                             // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/Niagara.VMFunctionSpecifier
/// Size: 0x0018 (0x000000 - 0x000018)
struct FVMFunctionSpecifier
{ 
	FName                                              Key;                                                        // 0x0000   (0x000C)  
	FName                                              value;                                                      // 0x000C   (0x000C)  
};

/// Struct /Script/Niagara.VMExternalFunctionBindingInfo
/// Size: 0x0040 (0x000000 - 0x000040)
struct FVMExternalFunctionBindingInfo
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	FName                                              OwnerName;                                                  // 0x000C   (0x000C)  
	TArray<bool>                                       InputParamLocations;                                        // 0x0018   (0x0010)  
	int32_t                                            NumOutputs;                                                 // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<FVMFunctionSpecifier>                       FunctionSpecifiers;                                         // 0x0030   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDataSetProperties
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNiagaraDataSetProperties
{ 
	FNiagaraDataSetID                                  ID;                                                         // 0x0000   (0x0010)  
	TArray<FNiagaraVariable>                           Variables;                                                  // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraStatScope
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNiagaraStatScope
{ 
	FName                                              FullName;                                                   // 0x0000   (0x000C)  
	FName                                              FriendlyName;                                               // 0x000C   (0x000C)  
};

/// Struct /Script/Niagara.NiagaraVMExecutableData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FNiagaraVMExecutableData
{ 
	TArray<char>                                       ByteCode;                                                   // 0x0000   (0x0010)  
	TArray<char>                                       OptimizedByteCode;                                          // 0x0010   (0x0010)  
	int32_t                                            NumTempRegisters;                                           // 0x0020   (0x0004)  
	int32_t                                            NumUserPtrs;                                                // 0x0024   (0x0004)  
	TArray<FNiagaraCompilerTag>                        CompileTags;                                                // 0x0028   (0x0010)  
	TArray<char>                                       ScriptLiterals;                                             // 0x0038   (0x0010)  
	TArray<FNiagaraVariable>                           Attributes;                                                 // 0x0048   (0x0010)  
	FNiagaraScriptDataUsageInfo                        DataUsage;                                                  // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0059   (0x0007)  MISSED
	TArray<FNiagaraScriptDataInterfaceCompileInfo>     DataInterfaceInfo;                                          // 0x0060   (0x0010)  
	TArray<FVMExternalFunctionBindingInfo>             CalledVMExternalFunctions;                                  // 0x0070   (0x0010)  
	unsigned char                                      UnknownData01_5[0x10];                                      // 0x0080   (0x0010)  MISSED
	TArray<FNiagaraDataSetID>                          ReadDataSets;                                               // 0x0090   (0x0010)  
	TArray<FNiagaraDataSetProperties>                  WriteDataSets;                                              // 0x00A0   (0x0010)  
	TArray<FNiagaraStatScope>                          StatScopes;                                                 // 0x00B0   (0x0010)  
	TArray<FNiagaraDataInterfaceGPUParamInfo>          DIParamInfo;                                                // 0x00C0   (0x0010)  
	ENiagaraScriptCompileStatus                        LastCompileStatus;                                          // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00D1   (0x0007)  MISSED
	TArray<FSimulationStageMetaData>                   SimulationStageMetaData;                                    // 0x00D8   (0x0010)  
	bool                                               bReadsSignificanceIndex : 1;                                // 0x00E8:0 (0x0001)  
	bool                                               bNeedsGPUContextInit : 1;                                   // 0x00E8:1 (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x00E9   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraScriptDataInterfaceInfo
/// Size: 0x0040 (0x000000 - 0x000040)
struct FNiagaraScriptDataInterfaceInfo
{ 
	class UNiagaraDataInterface*                       DataInterface;                                              // 0x0000   (0x0008)  
	FName                                              Name;                                                       // 0x0008   (0x000C)  
	int32_t                                            UserPtrIdx;                                                 // 0x0014   (0x0004)  
	FNiagaraTypeDefinition                             Type;                                                       // 0x0018   (0x0010)  
	FName                                              RegisteredParameterMapRead;                                 // 0x0028   (0x000C)  
	FName                                              RegisteredParameterMapWrite;                                // 0x0034   (0x000C)  
};

/// Class /Script/Niagara.NiagaraScript
/// Size: 0x02B8 (0x000030 - 0x0002E8)
class UNiagaraScript : public UNiagaraScriptBase
{ 
public:
	ENiagaraScriptUsage                                Usage;                                                      // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	FGuid                                              UsageId;                                                    // 0x0034   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	FNiagaraParameterStore                             RapidIterationParameters;                                   // 0x0048   (0x0078)  
	FNiagaraScriptExecutionParameterStore              ScriptExecutionParamStore;                                  // 0x00C0   (0x0098)  
	TArray<FNiagaraBoundParameter>                     ScriptExecutionBoundParameters;                             // 0x0158   (0x0010)  
	FNiagaraVMExecutableDataId                         CachedScriptVMId;                                           // 0x0168   (0x0058)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x01C0   (0x0010)  MISSED
	FNiagaraVMExecutableData                           CachedScriptVM;                                             // 0x01D0   (0x00F0)  
	TArray<class UNiagaraParameterCollection*>         CachedParameterCollectionReferences;                        // 0x02C0   (0x0010)  
	TArray<FNiagaraScriptDataInterfaceInfo>            CachedDefaultDataInterfaces;                                // 0x02D0   (0x0010)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x02E0   (0x0008)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraScript.RaiseOnGPUCompilationComplete
	// void RaiseOnGPUCompilationComplete();                                                                                 // [0x45fe020] Final|Native|Public  
};

/// Class /Script/Niagara.NiagaraScriptSourceBase
/// Size: 0x0020 (0x000030 - 0x000050)
class UNiagaraScriptSourceBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0030   (0x0020)  MISSED
};

/// Class /Script/Niagara.NiagaraSettings
/// Size: 0x0098 (0x000048 - 0x0000E0)
class UNiagaraSettings : public UDeveloperSettings
{ 
public:
	FSoftObjectPath                                    DefaultEffectType;                                          // 0x0048   (0x0020)  
	SDK_UNDEFINED(16,1522) /* TArray<FText> */         __um(QualityLevels);                                        // 0x0068   (0x0010)  
	SDK_UNDEFINED(80,1523) /* TMap<FString, FText> */  __um(ComponentRendererWarningsPerClass);                    // 0x0078   (0x0050)  
	SDK_UNDEFINED(1,1524) /* TEnumAsByte<ETextureRenderTargetFormat> */ __um(DefaultRenderTargetFormat);           // 0x00C8   (0x0001)  
	ENiagaraGpuBufferFormat                            DefaultGridFormat;                                          // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00CA   (0x0002)  MISSED
	ENiagaraDefaultRendererMotionVectorSetting         DefaultRendererMotionVectorSetting;                         // 0x00CC   (0x0004)  
	SDK_UNDEFINED(1,1525) /* TEnumAsByte<ENDISkelMesh_GpuMaxInfluences> */ __um(NDISkelMesh_GpuMaxInfluences);     // 0x00D0   (0x0001)  
	SDK_UNDEFINED(1,1526) /* TEnumAsByte<ENDISkelMesh_GpuUniformSamplingFormat> */ __um(NDISkelMesh_GpuUniformSamplingFormat); // 0x00D1   (0x0001)  
	SDK_UNDEFINED(1,1527) /* TEnumAsByte<ENDISkelMesh_AdjacencyTriangleIndexFormat> */ __um(NDISkelMesh_AdjacencyTriangleIndexFormat); // 0x00D2   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x00D3   (0x0005)  MISSED
	class UNiagaraEffectType*                          DefaultEffectTypePtr;                                       // 0x00D8   (0x0008)  
};

/// Class /Script/Niagara.NiagaraSimulationStageBase
/// Size: 0x0018 (0x000030 - 0x000048)
class UNiagaraSimulationStageBase : public UNiagaraMergeable
{ 
public:
	class UNiagaraScript*                              Script;                                                     // 0x0030   (0x0008)  
	FName                                              SimulationStageName;                                        // 0x0038   (0x000C)  
	bool                                               bEnabled : 1;                                               // 0x0044:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0045   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraVariableDataInterfaceBinding
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNiagaraVariableDataInterfaceBinding
{ 
	FNiagaraVariable                                   BoundVariable;                                              // 0x0000   (0x0020)  
};

/// Class /Script/Niagara.NiagaraSimulationStageGeneric
/// Size: 0x0030 (0x000048 - 0x000078)
class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
{ 
public:
	ENiagaraIterationSource                            IterationSource;                                            // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0049   (0x0003)  MISSED
	int32_t                                            Iterations;                                                 // 0x004C   (0x0004)  
	bool                                               bSpawnOnly : 1;                                             // 0x0050:0 (0x0001)  
	bool                                               bDisablePartialParticleUpdate : 1;                          // 0x0050:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x7];                                       // 0x0051   (0x0007)  MISSED
	FNiagaraVariableDataInterfaceBinding               DataInterface;                                              // 0x0058   (0x0020)  
};

/// Class /Script/Niagara.NiagaraSpriteRendererProperties
/// Size: 0x0A38 (0x000080 - 0x000AB8)
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{ 
public:
	class UMaterialInterface*                          Material;                                                   // 0x0080   (0x0008)  
	ENiagaraRendererSourceDataMode                     SourceMode;                                                 // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0089   (0x0007)  MISSED
	FNiagaraUserParameterBinding                       MaterialUserParamBinding;                                   // 0x0090   (0x0020)  
	ENiagaraSpriteAlignment                            Alignment;                                                  // 0x00B0   (0x0001)  
	ENiagaraSpriteFacingMode                           FacingMode;                                                 // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x00B2   (0x0002)  MISSED
	FVector2D                                          PivotInUVSpace;                                             // 0x00B4   (0x0008)  
	ENiagaraSortMode                                   SortMode;                                                   // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00BD   (0x0003)  MISSED
	FVector2D                                          SubImageSize;                                               // 0x00C0   (0x0008)  
	bool                                               bSubImageBlend : 1;                                         // 0x00C8:0 (0x0001)  
	bool                                               bRemoveHMDRollInVR : 1;                                     // 0x00C8:1 (0x0001)  
	bool                                               bSortOnlyWhenTranslucent : 1;                               // 0x00C8:2 (0x0001)  
	bool                                               bGpuLowLatencyTranslucency : 1;                             // 0x00C8:3 (0x0001)  
	unsigned char                                      UnknownData03_4[0x3];                                       // 0x00C9   (0x0003)  MISSED
	float                                              MinFacingCameraBlendDistance;                               // 0x00CC   (0x0004)  
	float                                              MaxFacingCameraBlendDistance;                               // 0x00D0   (0x0004)  
	bool                                               bEnableCameraDistanceCulling : 1;                           // 0x00D4:0 (0x0001)  
	unsigned char                                      UnknownData04_4[0x3];                                       // 0x00D5   (0x0003)  MISSED
	float                                              MinCameraDistance;                                          // 0x00D8   (0x0004)  
	float                                              MaxCameraDistance;                                          // 0x00DC   (0x0004)  
	uint32_t                                           RendererVisibility;                                         // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x00E8   (0x0058)  
	FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x0140   (0x0058)  
	FNiagaraVariableAttributeBinding                   VelocityBinding;                                            // 0x0198   (0x0058)  
	FNiagaraVariableAttributeBinding                   SpriteRotationBinding;                                      // 0x01F0   (0x0058)  
	FNiagaraVariableAttributeBinding                   SpriteSizeBinding;                                          // 0x0248   (0x0058)  
	FNiagaraVariableAttributeBinding                   SpriteFacingBinding;                                        // 0x02A0   (0x0058)  
	FNiagaraVariableAttributeBinding                   SpriteAlignmentBinding;                                     // 0x02F8   (0x0058)  
	FNiagaraVariableAttributeBinding                   SubImageIndexBinding;                                       // 0x0350   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterialBinding;                                     // 0x03A8   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial1Binding;                                    // 0x0400   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial2Binding;                                    // 0x0458   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial3Binding;                                    // 0x04B0   (0x0058)  
	FNiagaraVariableAttributeBinding                   CameraOffsetBinding;                                        // 0x0508   (0x0058)  
	FNiagaraVariableAttributeBinding                   UVScaleBinding;                                             // 0x0560   (0x0058)  
	FNiagaraVariableAttributeBinding                   PivotOffsetBinding;                                         // 0x05B8   (0x0058)  
	FNiagaraVariableAttributeBinding                   MaterialRandomBinding;                                      // 0x0610   (0x0058)  
	FNiagaraVariableAttributeBinding                   CustomSortingBinding;                                       // 0x0668   (0x0058)  
	FNiagaraVariableAttributeBinding                   NormalizedAgeBinding;                                       // 0x06C0   (0x0058)  
	FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x0718   (0x0058)  
	TArray<FNiagaraMaterialAttributeBinding>           MaterialParameterBindings;                                  // 0x0770   (0x0010)  
	FNiagaraVariableAttributeBinding                   PrevPositionBinding;                                        // 0x0780   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevVelocityBinding;                                        // 0x07D8   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevSpriteRotationBinding;                                  // 0x0830   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevSpriteSizeBinding;                                      // 0x0888   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevSpriteFacingBinding;                                    // 0x08E0   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevSpriteAlignmentBinding;                                 // 0x0938   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevCameraOffsetBinding;                                    // 0x0990   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevPivotOffsetBinding;                                     // 0x09E8   (0x0058)  
	unsigned char                                      UnknownData06_6[0x78];                                      // 0x0A40   (0x0078)  MISSED
};

/// Struct /Script/Niagara.NiagaraSystemScalabilityOverride
/// Size: 0x0008 (0x000048 - 0x000050)
struct FNiagaraSystemScalabilityOverride : FNiagaraSystemScalabilitySettings
{ 
	bool                                               bOverrideDistanceSettings : 1;                              // 0x0048:0 (0x0001)  
	bool                                               bOverrideInstanceCountSettings : 1;                         // 0x0048:1 (0x0001)  
	bool                                               bOverridePerSystemInstanceCountSettings : 1;                // 0x0048:2 (0x0001)  
	bool                                               bOverrideTimeSinceRendererSettings : 1;                     // 0x0048:3 (0x0001)  
	bool                                               bOverrideGlobalBudgetCullingSettings : 1;                   // 0x0048:4 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraSystemScalabilityOverrides
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraSystemScalabilityOverrides
{ 
	TArray<FNiagaraSystemScalabilityOverride>          Overrides;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraEmitterHandle
/// Size: 0x0038 (0x000000 - 0x000038)
struct FNiagaraEmitterHandle
{ 
	FGuid                                              ID;                                                         // 0x0000   (0x0010)  
	FName                                              IdName;                                                     // 0x0010   (0x000C)  
	bool                                               bIsEnabled;                                                 // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	FName                                              Name;                                                       // 0x0020   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	class UNiagaraEmitter*                             Instance;                                                   // 0x0030   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraParameterDataSetBinding
/// Size: 0x0008 (0x000000 - 0x000008)
struct FNiagaraParameterDataSetBinding
{ 
	int32_t                                            ParameterOffset;                                            // 0x0000   (0x0004)  
	int32_t                                            DataSetComponentOffset;                                     // 0x0004   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraParameterDataSetBindingCollection
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNiagaraParameterDataSetBindingCollection
{ 
	TArray<FNiagaraParameterDataSetBinding>            FloatOffsets;                                               // 0x0000   (0x0010)  
	TArray<FNiagaraParameterDataSetBinding>            Int32Offsets;                                               // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraSystemCompiledData
/// Size: 0x0230 (0x000000 - 0x000230)
struct FNiagaraSystemCompiledData
{ 
	FNiagaraParameterStore                             InstanceParamStore;                                         // 0x0000   (0x0078)  
	FNiagaraDataSetCompiledData                        DataSetCompiledData;                                        // 0x0078   (0x0048)  
	FNiagaraDataSetCompiledData                        SpawnInstanceParamsDataSetCompiledData;                     // 0x00C0   (0x0048)  
	FNiagaraDataSetCompiledData                        UpdateInstanceParamsDataSetCompiledData;                    // 0x0108   (0x0048)  
	FNiagaraParameterDataSetBindingCollection          SpawnInstanceGlobalBinding;                                 // 0x0150   (0x0020)  
	FNiagaraParameterDataSetBindingCollection          SpawnInstanceSystemBinding;                                 // 0x0170   (0x0020)  
	FNiagaraParameterDataSetBindingCollection          SpawnInstanceOwnerBinding;                                  // 0x0190   (0x0020)  
	TArray<FNiagaraParameterDataSetBindingCollection>  SpawnInstanceEmitterBindings;                               // 0x01B0   (0x0010)  
	FNiagaraParameterDataSetBindingCollection          UpdateInstanceGlobalBinding;                                // 0x01C0   (0x0020)  
	FNiagaraParameterDataSetBindingCollection          UpdateInstanceSystemBinding;                                // 0x01E0   (0x0020)  
	FNiagaraParameterDataSetBindingCollection          UpdateInstanceOwnerBinding;                                 // 0x0200   (0x0020)  
	TArray<FNiagaraParameterDataSetBindingCollection>  UpdateInstanceEmitterBindings;                              // 0x0220   (0x0010)  
};

/// Class /Script/Niagara.NiagaraSystem
/// Size: 0x0480 (0x000038 - 0x0004B8)
class UNiagaraSystem : public UFXSystemAsset
{ 
public:
	bool                                               bDumpDebugSystemInfo;                                       // 0x0038   (0x0001)  
	bool                                               bDumpDebugEmitterInfo;                                      // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x003A   (0x0001)  MISSED
	bool                                               bRequireCurrentFrameData;                                   // 0x003B   (0x0001)  
	bool                                               bFixedBounds : 1;                                           // 0x003C:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x003D   (0x0003)  MISSED
	class UNiagaraEffectType*                          EffectType;                                                 // 0x0040   (0x0008)  
	bool                                               bOverrideScalabilitySettings;                               // 0x0048   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	TArray<FNiagaraSystemScalabilityOverride>          ScalabilityOverrides;                                       // 0x0050   (0x0010)  
	FNiagaraSystemScalabilityOverrides                 SystemScalabilityOverrides;                                 // 0x0060   (0x0010)  
	TArray<FNiagaraEmitterHandle>                      EmitterHandles;                                             // 0x0070   (0x0010)  
	TArray<class UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;                               // 0x0080   (0x0010)  
	class UNiagaraScript*                              SystemSpawnScript;                                          // 0x0090   (0x0008)  
	class UNiagaraScript*                              SystemUpdateScript;                                         // 0x0098   (0x0008)  
	unsigned char                                      UnknownData03_5[0x10];                                      // 0x00A0   (0x0010)  MISSED
	FNiagaraSystemCompiledData                         SystemCompiledData;                                         // 0x00B0   (0x0230)  
	FNiagaraUserRedirectionParameterStore              ExposedParameters;                                          // 0x02E0   (0x00C8)  
	FBox                                               FixedBounds;                                                // 0x03A8   (0x001C)  
	bool                                               bAutoDeactivate;                                            // 0x03C4   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x03C5   (0x0003)  MISSED
	float                                              WarmupTime;                                                 // 0x03C8   (0x0004)  
	int32_t                                            WarmupTickCount;                                            // 0x03CC   (0x0004)  
	float                                              WarmupTickDelta;                                            // 0x03D0   (0x0004)  
	bool                                               bHasSystemScriptDIsWithPerInstanceData;                     // 0x03D4   (0x0001)  
	bool                                               bNeedsGPUContextInitForDataInterfaces;                      // 0x03D5   (0x0001)  
	unsigned char                                      UnknownData05_5[0x2];                                       // 0x03D6   (0x0002)  MISSED
	TArray<FName>                                      UserDINamesReadInSystemScripts;                             // 0x03D8   (0x0010)  
	unsigned char                                      UnknownData06_6[0xD0];                                      // 0x03E8   (0x00D0)  MISSED
};

/// Struct /Script/Niagara.MovieSceneNiagaraParameterSectionTemplate
/// Size: 0x0020 (0x000020 - 0x000040)
struct FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate
{ 
	FNiagaraVariable                                   Parameter;                                                  // 0x0020   (0x0020)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
/// Size: 0x0090 (0x000040 - 0x0000D0)
struct FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneBoolChannel                             BoolChannel;                                                // 0x0040   (0x0090)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraColorParameterSectionTemplate
/// Size: 0x0280 (0x000040 - 0x0002C0)
struct FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneFloatChannel                            RedChannel;                                                 // 0x0040   (0x00A0)  
	FMovieSceneFloatChannel                            GreenChannel;                                               // 0x00E0   (0x00A0)  
	FMovieSceneFloatChannel                            BlueChannel;                                                // 0x0180   (0x00A0)  
	FMovieSceneFloatChannel                            AlphaChannel;                                               // 0x0220   (0x00A0)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
/// Size: 0x00A0 (0x000040 - 0x0000E0)
struct FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneFloatChannel                            FloatChannel;                                               // 0x0040   (0x00A0)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
/// Size: 0x0090 (0x000040 - 0x0000D0)
struct FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneIntegerChannel                          IntegerChannel;                                             // 0x0040   (0x0090)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraSystemTrackImplementation
/// Size: 0x0018 (0x000010 - 0x000028)
struct FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation
{ 
	FFrameNumber                                       SpawnSectionStartFrame;                                     // 0x0010   (0x0004)  
	FFrameNumber                                       SpawnSectionEndFrame;                                       // 0x0014   (0x0004)  
	ENiagaraSystemSpawnSectionStartBehavior            SpawnSectionStartBehavior;                                  // 0x0018   (0x0004)  
	ENiagaraSystemSpawnSectionEvaluateBehavior         SpawnSectionEvaluateBehavior;                               // 0x001C   (0x0004)  
	ENiagaraSystemSpawnSectionEndBehavior              SpawnSectionEndBehavior;                                    // 0x0020   (0x0004)  
	ENiagaraAgeUpdateMode                              AgeUpdateMode;                                              // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/Niagara.MovieSceneNiagaraSystemTrackTemplate
/// Size: 0x0000 (0x000020 - 0x000020)
struct FMovieSceneNiagaraSystemTrackTemplate : FMovieSceneEvalTemplate
{ 
};

/// Struct /Script/Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
/// Size: 0x0288 (0x000040 - 0x0002C8)
struct FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneFloatChannel                            VectorChannels;                                             // 0x0040   (0x0280)  
	int32_t                                            ChannelsUsed;                                               // 0x02C0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02C4   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraScalabilityState
/// Size: 0x0008 (0x000000 - 0x000008)
struct FNiagaraScalabilityState
{ 
	float                                              Significance;                                               // 0x0000   (0x0004)  
	bool                                               bCulled : 1;                                                // 0x0004:0 (0x0001)  
	bool                                               bPreviousCulled : 1;                                        // 0x0004:1 (0x0001)  
	bool                                               bCulledByDistance : 1;                                      // 0x0004:2 (0x0001)  
	bool                                               bCulledByInstanceCount : 1;                                 // 0x0004:3 (0x0001)  
	bool                                               bCulledByVisibility : 1;                                    // 0x0004:4 (0x0001)  
	bool                                               bCulledByGlobalBudget : 1;                                  // 0x0004:5 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraCompileDependency
/// Size: 0x0050 (0x000000 - 0x000050)
struct FNiagaraCompileDependency
{ 
	SDK_UNDEFINED(16,1528) /* FString */               __um(LinkerErrorMessage);                                   // 0x0000   (0x0010)  
	FGuid                                              NodeGuid;                                                   // 0x0010   (0x0010)  
	FGuid                                              PinGuid;                                                    // 0x0020   (0x0010)  
	TArray<FGuid>                                      StackGuids;                                                 // 0x0030   (0x0010)  
	FNiagaraVariableBase                               DependentVariable;                                          // 0x0040   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraRandInfo
/// Size: 0x000C (0x000000 - 0x00000C)
struct FNiagaraRandInfo
{ 
	int32_t                                            Seed1;                                                      // 0x0000   (0x0004)  
	int32_t                                            Seed2;                                                      // 0x0004   (0x0004)  
	int32_t                                            Seed3;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraScriptVariableBinding
/// Size: 0x000C (0x000000 - 0x00000C)
struct FNiagaraScriptVariableBinding
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
};

/// Struct /Script/Niagara.NiagaraVariableInfo
/// Size: 0x0040 (0x000000 - 0x000040)
struct FNiagaraVariableInfo
{ 
	FNiagaraVariable                                   Variable;                                                   // 0x0000   (0x0020)  
	SDK_UNDEFINED(24,1529) /* FText */                 __um(definition);                                           // 0x0020   (0x0018)  
	class UNiagaraDataInterface*                       DataInterface;                                              // 0x0038   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraSystemUpdateContext
/// Size: 0x0068 (0x000000 - 0x000068)
struct FNiagaraSystemUpdateContext
{ 
	TArray<class UNiagaraComponent*>                   ComponentsToReset;                                          // 0x0000   (0x0010)  
	TArray<class UNiagaraComponent*>                   ComponentsToReInit;                                         // 0x0010   (0x0010)  
	TArray<class UNiagaraComponent*>                   ComponentsToNotifySimDestroy;                               // 0x0020   (0x0010)  
	TArray<class UNiagaraSystem*>                      SystemSimsToDestroy;                                        // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0040   (0x0028)  MISSED
};

/// Struct /Script/Niagara.NiagaraFunctionSignature
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FNiagaraFunctionSignature
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FNiagaraVariable>                           Inputs;                                                     // 0x0010   (0x0010)  
	TArray<FNiagaraVariable>                           Outputs;                                                    // 0x0020   (0x0010)  
	FName                                              OwnerName;                                                  // 0x0030   (0x000C)  
	bool                                               bRequiresContext : 1;                                       // 0x003C:0 (0x0001)  
	bool                                               bRequiresExecPin : 1;                                       // 0x003C:1 (0x0001)  
	bool                                               bMemberFunction : 1;                                        // 0x003C:2 (0x0001)  
	bool                                               bExperimental : 1;                                          // 0x003C:3 (0x0001)  
	bool                                               bSupportsCPU : 1;                                           // 0x003C:4 (0x0001)  
	bool                                               bSupportsGPU : 1;                                           // 0x003C:5 (0x0001)  
	bool                                               bWriteFunction : 1;                                         // 0x003C:6 (0x0001)  
	bool                                               bSoftDeprecatedFunction : 1;                                // 0x003C:7 (0x0001)  
	bool                                               bIsCompileTagGenerator : 1;                                 // 0x003D:0 (0x0001)  
	bool                                               bHidden : 1;                                                // 0x003D:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x2];                                       // 0x003E   (0x0002)  MISSED
	int32_t                                            ModuleUsageBitmask;                                         // 0x0040   (0x0004)  
	int32_t                                            ContextStageMinIndex;                                       // 0x0044   (0x0004)  
	int32_t                                            ContextStageMaxIndex;                                       // 0x0048   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	SDK_UNDEFINED(80,1530) /* TMap<FName, FName> */    __um(FunctionSpecifiers);                                   // 0x0050   (0x0050)  
};

/// Struct /Script/Niagara.NCPoolElement
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNCPoolElement
{ 
	class UNiagaraComponent*                           Component;                                                  // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Struct /Script/Niagara.NCPool
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNCPool
{ 
	TArray<FNCPoolElement>                             FreeElements;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraEmitterNameSettingsRef
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNiagaraEmitterNameSettingsRef
{ 
	FName                                              SystemName;                                                 // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(16,1531) /* FString */               __um(EmitterName);                                          // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.BasicParticleData
/// Size: 0x001C (0x000000 - 0x00001C)
struct FBasicParticleData
{ 
	FVector                                            position;                                                   // 0x0000   (0x000C)  
	float                                              Size;                                                       // 0x000C   (0x0004)  
	FVector                                            Velocity;                                                   // 0x0010   (0x000C)  
};

/// Struct /Script/Niagara.MeshTriCoordinate
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMeshTriCoordinate
{ 
	int32_t                                            Tri;                                                        // 0x0000   (0x0004)  
	FVector                                            BaryCoord;                                                  // 0x0004   (0x000C)  
};

/// Struct /Script/Niagara.NiagaraSimpleClientInfo
/// Size: 0x0040 (0x000000 - 0x000040)
struct FNiagaraSimpleClientInfo
{ 
	SDK_UNDEFINED(16,1532) /* TArray<FString> */       __um(Systems);                                              // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1533) /* TArray<FString> */       __um(Actors);                                               // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,1534) /* TArray<FString> */       __um(Components);                                           // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,1535) /* TArray<FString> */       __um(Emitters);                                             // 0x0030   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraOutlinerCaptureSettings
/// Size: 0x000C (0x000000 - 0x00000C)
struct FNiagaraOutlinerCaptureSettings
{ 
	bool                                               bTriggerCapture;                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	uint32_t                                           CaptureDelayFrames;                                         // 0x0004   (0x0004)  
	bool                                               bGatherPerfData;                                            // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraRequestSimpleClientInfoMessage
/// Size: 0x0001 (0x000000 - 0x000001)
struct FNiagaraRequestSimpleClientInfoMessage
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraOutlinerData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FNiagaraOutlinerData
{ 
	SDK_UNDEFINED(80,1536) /* TMap<FString, FNiagaraOutlinerWorldData> */ __um(WorldData);                         // 0x0000   (0x0050)  
};

/// Struct /Script/Niagara.NiagaraDebuggerOutlinerUpdate
/// Size: 0x0050 (0x000000 - 0x000050)
struct FNiagaraDebuggerOutlinerUpdate
{ 
	FNiagaraOutlinerData                               OutlinerData;                                               // 0x0000   (0x0050)  
};

/// Struct /Script/Niagara.NiagaraOutlinerTimingData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FNiagaraOutlinerTimingData
{ 
	float                                              GameThread;                                                 // 0x0000   (0x0004)  
	float                                              RenderThread;                                               // 0x0004   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraOutlinerWorldData
/// Size: 0x0068 (0x000000 - 0x000068)
struct FNiagaraOutlinerWorldData
{ 
	SDK_UNDEFINED(80,1537) /* TMap<FString, FNiagaraOutlinerSystemData> */ __um(Systems);                          // 0x0000   (0x0050)  
	bool                                               bHasBegunPlay;                                              // 0x0050   (0x0001)  
	char                                               WorldType;                                                  // 0x0051   (0x0001)  
	char                                               NetMode;                                                    // 0x0052   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0053   (0x0001)  MISSED
	FNiagaraOutlinerTimingData                         AveragePerFrameTime;                                        // 0x0054   (0x0008)  
	FNiagaraOutlinerTimingData                         MaxPerFrameTime;                                            // 0x005C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraOutlinerEmitterInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNiagaraOutlinerEmitterInstanceData
{ 
	SDK_UNDEFINED(16,1538) /* FString */               __um(EmitterName);                                          // 0x0000   (0x0010)  
	ENiagaraSimTarget                                  SimTarget;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	ENiagaraExecutionState                             ExecState;                                                  // 0x0014   (0x0004)  
	int32_t                                            NumParticles;                                               // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraOutlinerSystemInstanceData
/// Size: 0x0048 (0x000000 - 0x000048)
struct FNiagaraOutlinerSystemInstanceData
{ 
	SDK_UNDEFINED(16,1539) /* FString */               __um(ComponentName);                                        // 0x0000   (0x0010)  
	TArray<FNiagaraOutlinerEmitterInstanceData>        Emitters;                                                   // 0x0010   (0x0010)  
	ENiagaraExecutionState                             ActualExecutionState;                                       // 0x0020   (0x0004)  
	ENiagaraExecutionState                             RequestedExecutionState;                                    // 0x0024   (0x0004)  
	FNiagaraScalabilityState                           ScalabilityState;                                           // 0x0028   (0x0008)  
	bool                                               bPendingKill : 1;                                           // 0x0030:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0031   (0x0003)  MISSED
	ENCPoolMethod                                      PoolMethod;                                                 // 0x0034   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	FNiagaraOutlinerTimingData                         AverageTime;                                                // 0x0038   (0x0008)  
	FNiagaraOutlinerTimingData                         MaxTime;                                                    // 0x0040   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraOutlinerSystemData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FNiagaraOutlinerSystemData
{ 
	TArray<FNiagaraOutlinerSystemInstanceData>         SystemInstances;                                            // 0x0000   (0x0010)  
	FNiagaraOutlinerTimingData                         AveragePerFrameTime;                                        // 0x0010   (0x0008)  
	FNiagaraOutlinerTimingData                         MaxPerFrameTime;                                            // 0x0018   (0x0008)  
	FNiagaraOutlinerTimingData                         AveragePerInstanceTime;                                     // 0x0020   (0x0008)  
	FNiagaraOutlinerTimingData                         MaxPerInstanceTime;                                         // 0x0028   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraDebuggerExecuteConsoleCommand
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNiagaraDebuggerExecuteConsoleCommand
{ 
	SDK_UNDEFINED(16,1540) /* FString */               __um(Command);                                              // 0x0000   (0x0010)  
	bool                                               bRequiresWorld;                                             // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraDebuggerConnectionClosed
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNiagaraDebuggerConnectionClosed
{ 
	FGuid                                              SESSIONID;                                                  // 0x0000   (0x0010)  
	FGuid                                              InstanceId;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDebuggerAcceptConnection
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNiagaraDebuggerAcceptConnection
{ 
	FGuid                                              SESSIONID;                                                  // 0x0000   (0x0010)  
	FGuid                                              InstanceId;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDebuggerRequestConnection
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNiagaraDebuggerRequestConnection
{ 
	FGuid                                              SESSIONID;                                                  // 0x0000   (0x0010)  
	FGuid                                              InstanceId;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraGraphViewSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraGraphViewSettings
{ 
	FVector2D                                          Location;                                                   // 0x0000   (0x0008)  
	float                                              Zoom;                                                       // 0x0008   (0x0004)  
	bool                                               bIsValid;                                                   // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraCollisionEventPayload
/// Size: 0x002C (0x000000 - 0x00002C)
struct FNiagaraCollisionEventPayload
{ 
	FVector                                            CollisionPos;                                               // 0x0000   (0x000C)  
	FVector                                            collisionNormal;                                            // 0x000C   (0x000C)  
	FVector                                            CollisionVelocity;                                          // 0x0018   (0x000C)  
	int32_t                                            ParticleIndex;                                              // 0x0024   (0x0004)  
	int32_t                                            PhysicalMaterialIndex;                                      // 0x0028   (0x0004)  
};

/// Struct /Script/Niagara.ParameterDefinitionsSubscription
/// Size: 0x0001 (0x000000 - 0x000001)
struct FParameterDefinitionsSubscription
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraParameters
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraParameters
{ 
	TArray<FNiagaraVariable>                           Parameters;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraPlatformSetConflictEntry
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraPlatformSetConflictEntry
{ 
	FName                                              ProfileName;                                                // 0x0000   (0x000C)  
	int32_t                                            QualityLevelMask;                                           // 0x000C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraPlatformSetConflictInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNiagaraPlatformSetConflictInfo
{ 
	int32_t                                            SetAIndex;                                                  // 0x0000   (0x0004)  
	int32_t                                            SetBIndex;                                                  // 0x0004   (0x0004)  
	TArray<FNiagaraPlatformSetConflictEntry>           Conflicts;                                                  // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraScalabilityManager
/// Size: 0x0070 (0x000000 - 0x000070)
struct FNiagaraScalabilityManager
{ 
	class UNiagaraEffectType*                          EffectType;                                                 // 0x0000   (0x0008)  
	TArray<class UNiagaraComponent*>                   ManagedComponents;                                          // 0x0008   (0x0010)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x0018   (0x0058)  MISSED
};

/// Struct /Script/Niagara.VersionedNiagaraScriptData
/// Size: 0x0001 (0x000000 - 0x000001)
struct FVersionedNiagaraScriptData
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraModuleDependency
/// Size: 0x0028 (0x000000 - 0x000028)
struct FNiagaraModuleDependency
{ 
	FName                                              ID;                                                         // 0x0000   (0x000C)  
	ENiagaraModuleDependencyType                       Type;                                                       // 0x000C   (0x0001)  
	ENiagaraModuleDependencyScriptConstraint           ScriptConstraint;                                           // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x000E   (0x0002)  MISSED
	SDK_UNDEFINED(24,1541) /* FText */                 __um(Description);                                          // 0x0010   (0x0018)  
};

/// Struct /Script/Niagara.NiagaraScriptInstanceParameterStore
/// Size: 0x0010 (0x000078 - 0x000088)
struct FNiagaraScriptInstanceParameterStore : FNiagaraParameterStore
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0078   (0x0010)  MISSED
};

/// Struct /Script/Niagara.NiagaraScriptHighlight
/// Size: 0x0028 (0x000000 - 0x000028)
struct FNiagaraScriptHighlight
{ 
	FLinearColor                                       Color;                                                      // 0x0000   (0x0010)  
	SDK_UNDEFINED(24,1542) /* FText */                 __um(DisplayName);                                          // 0x0010   (0x0018)  
};

/// Struct /Script/Niagara.NiagaraSystemCompileRequest
/// Size: 0x0080 (0x000000 - 0x000080)
struct FNiagaraSystemCompileRequest
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	TArray<class UObject*>                             RootObjects;                                                // 0x0008   (0x0010)  
	unsigned char                                      UnknownData01_6[0x68];                                      // 0x0018   (0x0068)  MISSED
};

/// Struct /Script/Niagara.EmitterCompiledScriptPair
/// Size: 0x0090 (0x000000 - 0x000090)
struct FEmitterCompiledScriptPair
{ 
	unsigned char                                      UnknownData00_1[0x90];                                      // 0x0000   (0x0090)  MISSED
};

/// Struct /Script/Niagara.NiagaraEmitterCompiledData
/// Size: 0x0138 (0x000000 - 0x000138)
struct FNiagaraEmitterCompiledData
{ 
	TArray<FName>                                      SpawnAttributes;                                            // 0x0000   (0x0010)  
	FNiagaraVariable                                   EmitterSpawnIntervalVar;                                    // 0x0010   (0x0020)  
	FNiagaraVariable                                   EmitterInterpSpawnStartDTVar;                               // 0x0030   (0x0020)  
	FNiagaraVariable                                   EmitterSpawnGroupVar;                                       // 0x0050   (0x0020)  
	FNiagaraVariable                                   EmitterAgeVar;                                              // 0x0070   (0x0020)  
	FNiagaraVariable                                   EmitterRandomSeedVar;                                       // 0x0090   (0x0020)  
	FNiagaraVariable                                   EmitterInstanceSeedVar;                                     // 0x00B0   (0x0020)  
	FNiagaraVariable                                   EmitterTotalSpawnedParticlesVar;                            // 0x00D0   (0x0020)  
	FNiagaraDataSetCompiledData                        DataSetCompiledData;                                        // 0x00F0   (0x0048)  
};

/// Struct /Script/Niagara.NiagaraInputConditionMetadata
/// Size: 0x0020 (0x000000 - 0x000020)
struct FNiagaraInputConditionMetadata
{ 
	FName                                              InputName;                                                  // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(16,1543) /* TArray<FString> */       __um(TargetValues);                                         // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraVariableMetaData
/// Size: 0x00F8 (0x000000 - 0x0000F8)
struct FNiagaraVariableMetaData
{ 
	SDK_UNDEFINED(24,1544) /* FText */                 __um(Description);                                          // 0x0000   (0x0018)  
	SDK_UNDEFINED(24,1545) /* FText */                 __um(CategoryName);                                         // 0x0018   (0x0018)  
	bool                                               bAdvancedDisplay;                                           // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            EditorSortPriority;                                         // 0x0034   (0x0004)  
	bool                                               bInlineEditConditionToggle;                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	FNiagaraInputConditionMetadata                     EditCondition;                                              // 0x0040   (0x0020)  
	FNiagaraInputConditionMetadata                     VisibleCondition;                                           // 0x0060   (0x0020)  
	SDK_UNDEFINED(80,1546) /* TMap<FName, FString> */  __um(PropertyMetaData);                                     // 0x0080   (0x0050)  
	FName                                              ParentAttribute;                                            // 0x00D0   (0x000C)  
	FGuid                                              VariableGuid;                                               // 0x00DC   (0x0010)  
	bool                                               bIsStaticSwitch;                                            // 0x00EC   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00ED   (0x0003)  MISSED
	int32_t                                            StaticSwitchDefaultValue;                                   // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x00F4   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraCompileHashVisitorDebugInfo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FNiagaraCompileHashVisitorDebugInfo
{ 
	SDK_UNDEFINED(16,1547) /* FString */               __um(Object);                                               // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1548) /* TArray<FString> */       __um(PropertyKeys);                                         // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,1549) /* TArray<FString> */       __um(PropertyValues);                                       // 0x0020   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraID
/// Size: 0x0008 (0x000000 - 0x000008)
struct FNiagaraID
{ 
	int32_t                                            index;                                                      // 0x0000   (0x0004)  
	int32_t                                            AcquireTag;                                                 // 0x0004   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraSpawnInfo
/// Size: 0x0010 (0x000000 - 0x000010)
struct FNiagaraSpawnInfo
{ 
	int32_t                                            Count;                                                      // 0x0000   (0x0004)  
	float                                              InterpStartDt;                                              // 0x0004   (0x0004)  
	float                                              IntervalDt;                                                 // 0x0008   (0x0004)  
	int32_t                                            SpawnGroup;                                                 // 0x000C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraAssetVersion
/// Size: 0x001C (0x000000 - 0x00001C)
struct FNiagaraAssetVersion
{ 
	int32_t                                            MajorVersion;                                               // 0x0000   (0x0004)  
	int32_t                                            MinorVersion;                                               // 0x0004   (0x0004)  
	FGuid                                              VersionGuid;                                                // 0x0008   (0x0010)  
	bool                                               bIsVisibleInVersionSelector;                                // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraMatrix
/// Size: 0x0040 (0x000000 - 0x000040)
struct FNiagaraMatrix
{ 
	FVector4                                           Row0;                                                       // 0x0000   (0x0010)  
	FVector4                                           Row1;                                                       // 0x0010   (0x0010)  
	FVector4                                           Row2;                                                       // 0x0020   (0x0010)  
	FVector4                                           Row3;                                                       // 0x0030   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraParameterMap
/// Size: 0x0001 (0x000000 - 0x000001)
struct FNiagaraParameterMap
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraNumeric
/// Size: 0x0001 (0x000000 - 0x000001)
struct FNiagaraNumeric
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraHalfVector4
/// Size: 0x0008 (0x000000 - 0x000008)
struct FNiagaraHalfVector4
{ 
	uint16_t                                           X;                                                          // 0x0000   (0x0002)  
	uint16_t                                           Y;                                                          // 0x0002   (0x0002)  
	uint16_t                                           Z;                                                          // 0x0004   (0x0002)  
	uint16_t                                           W;                                                          // 0x0006   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraHalfVector3
/// Size: 0x0006 (0x000000 - 0x000006)
struct FNiagaraHalfVector3
{ 
	uint16_t                                           X;                                                          // 0x0000   (0x0002)  
	uint16_t                                           Y;                                                          // 0x0002   (0x0002)  
	uint16_t                                           Z;                                                          // 0x0004   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraHalfVector2
/// Size: 0x0004 (0x000000 - 0x000004)
struct FNiagaraHalfVector2
{ 
	uint16_t                                           X;                                                          // 0x0000   (0x0002)  
	uint16_t                                           Y;                                                          // 0x0002   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraHalf
/// Size: 0x0002 (0x000000 - 0x000002)
struct FNiagaraHalf
{ 
	uint16_t                                           value;                                                      // 0x0000   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraBool
/// Size: 0x0004 (0x000000 - 0x000004)
struct FNiagaraBool
{ 
	int32_t                                            value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraInt32
/// Size: 0x0004 (0x000000 - 0x000004)
struct FNiagaraInt32
{ 
	int32_t                                            value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraFloat
/// Size: 0x0004 (0x000000 - 0x000004)
struct FNiagaraFloat
{ 
	float                                              value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraWildcard
/// Size: 0x0001 (0x000000 - 0x000001)
struct FNiagaraWildcard
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraVariant
/// Size: 0x0028 (0x000000 - 0x000028)
struct FNiagaraVariant
{ 
	class UObject*                                     Object;                                                     // 0x0000   (0x0008)  
	class UNiagaraDataInterface*                       DataInterface;                                              // 0x0008   (0x0008)  
	TArray<char>                                       Bytes;                                                      // 0x0010   (0x0010)  
	ENiagaraVariantMode                                CurrentMode;                                                // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraWorldManagerTickFunction
/// Size: 0x0008 (0x000028 - 0x000030)
struct FNiagaraWorldManagerTickFunction : FTickFunction
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

