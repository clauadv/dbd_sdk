
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Niagara
/// dependency: UMG

/// Struct /Script/FXWidget.FXWidgetPlayer
/// Size: 0x0010 (0x000000 - 0x000010)
struct FFXWidgetPlayer
{ 
	class UNiagaraComponent*                           NiagaraComponent;                                           // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Class /Script/FXWidget.FXUserWidgetBase
/// Size: 0x0060 (0x000298 - 0x0002F8)
class UFXUserWidgetBase : public UUserWidget
{ 
public:
	class UNiagaraSystem*                              NiagaraSystem;                                              // 0x0298   (0x0008)  
	bool                                               isFillingWidget;                                            // 0x02A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x17];                                      // 0x02A1   (0x0017)  MISSED
	FFXWidgetPlayer                                    _particlePlayer;                                            // 0x02B8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x02C8   (0x0030)  MISSED


	/// Functions
	// Function /Script/FXWidget.FXUserWidgetBase.StopParticle
	// void StopParticle();                                                                                                  // [0x4c29160] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|Const 
	// Function /Script/FXWidget.FXUserWidgetBase.PlayParticle
	// void PlayParticle(float StartAtTime, int32_t NumLoopsToPlay);                                                         // [0x4c29090] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|Const 
	// Function /Script/FXWidget.FXUserWidgetBase.GetNiagaraFX
	// class UNiagaraComponent* GetNiagaraFX();                                                                              // [0x4c29070] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

