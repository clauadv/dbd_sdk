
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/NiagaraShader.FNiagaraCompileEventSeverity
/// Size: 0x04
enum class FNiagaraCompileEventSeverity : uint8_t
{
	FNiagaraCompileEventSeverity__Log                                                = 0,
	FNiagaraCompileEventSeverity__Warning                                            = 1,
	FNiagaraCompileEventSeverity__Error                                              = 2,
	FNiagaraCompileEventSeverity__FNiagaraCompileEventSeverity_MAX                   = 3
};

/// Class /Script/NiagaraShader.NiagaraScriptBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UNiagaraScriptBase : public UObject
{ 
public:
};

/// Struct /Script/NiagaraShader.SimulationStageMetaData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FSimulationStageMetaData
{ 
	FName                                              SimulationStageName;                                        // 0x0000   (0x000C)  
	FName                                              IterationSource;                                            // 0x000C   (0x000C)  
	bool                                               bSpawnOnly : 1;                                             // 0x0018:0 (0x0001)  
	bool                                               bWritesParticles : 1;                                       // 0x0018:1 (0x0001)  
	bool                                               bPartialParticleUpdate : 1;                                 // 0x0018:2 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0019   (0x0007)  MISSED
	TArray<FName>                                      OutputDestinations;                                         // 0x0020   (0x0010)  
	int32_t                                            MinStage;                                                   // 0x0030   (0x0004)  
	int32_t                                            MaxStage;                                                   // 0x0034   (0x0004)  
};

/// Struct /Script/NiagaraShader.NiagaraDataInterfaceGeneratedFunction
/// Size: 0x0030 (0x000000 - 0x000030)
struct FNiagaraDataInterfaceGeneratedFunction
{ 
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Struct /Script/NiagaraShader.NiagaraDataInterfaceGPUParamInfo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FNiagaraDataInterfaceGPUParamInfo
{ 
	SDK_UNDEFINED(16,1485) /* FString */               __um(DataInterfaceHLSLSymbol);                              // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1486) /* FString */               __um(DIClassName);                                          // 0x0010   (0x0010)  
	TArray<FNiagaraDataInterfaceGeneratedFunction>     GeneratedFunctions;                                         // 0x0020   (0x0010)  
};

/// Struct /Script/NiagaraShader.NiagaraCompileEvent
/// Size: 0x0060 (0x000000 - 0x000060)
struct FNiagaraCompileEvent
{ 
	FNiagaraCompileEventSeverity                       Severity;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,1487) /* FString */               __um(Message);                                              // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,1488) /* FString */               __um(ShortDescription);                                     // 0x0018   (0x0010)  
	bool                                               bDismissable;                                               // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	FGuid                                              NodeGuid;                                                   // 0x002C   (0x0010)  
	FGuid                                              PinGuid;                                                    // 0x003C   (0x0010)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	TArray<FGuid>                                      StackGuids;                                                 // 0x0050   (0x0010)  
};

