
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Niagara

/// Class /Script/NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
/// Size: 0x0060 (0x000040 - 0x0000A0)
class UAnimNotify_PlayNiagaraEffect : public UAnimNotify
{ 
public:
	class UNiagaraSystem*                              Template;                                                   // 0x0040   (0x0008)  
	FVector                                            LocationOffset;                                             // 0x0048   (0x000C)  
	FRotator                                           RotationOffset;                                             // 0x0054   (0x000C)  
	FVector                                            Scale;                                                      // 0x0060   (0x000C)  
	bool                                               bAbsoluteScale;                                             // 0x006C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x23];                                      // 0x006D   (0x0023)  MISSED
	bool                                               Attached : 1;                                               // 0x0090:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0091   (0x0003)  MISSED
	FName                                              SocketName;                                                 // 0x0094   (0x000C)  


	/// Functions
	// Function /Script/NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect
	// class UFXSystemComponent* GetSpawnedEffect();                                                                         // [0x4895270] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
/// Size: 0x0030 (0x000038 - 0x000068)
class UAnimNotifyState_TimedNiagaraEffect : public UAnimNotifyState
{ 
public:
	class UNiagaraSystem*                              Template;                                                   // 0x0038   (0x0008)  
	FName                                              SocketName;                                                 // 0x0040   (0x000C)  
	FVector                                            LocationOffset;                                             // 0x004C   (0x000C)  
	FRotator                                           RotationOffset;                                             // 0x0058   (0x000C)  
	bool                                               bDestroyAtEnd;                                              // 0x0064   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0065   (0x0003)  MISSED


	/// Functions
	// Function /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect.GetSpawnedEffect
	// class UFXSystemComponent* GetSpawnedEffect(class UMeshComponent* MeshComp);                                           // [0x48951d0] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced
/// Size: 0x0050 (0x000068 - 0x0000B8)
class UAnimNotifyState_TimedNiagaraEffectAdvanced : public UAnimNotifyState_TimedNiagaraEffect
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0068   (0x0050)  MISSED


	/// Functions
	// Function /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced.GetNotifyProgress
	// float GetNotifyProgress(class UMeshComponent* MeshComp);                                                              // [0x4895130] Final|Native|Public|BlueprintCallable|Const 
};

