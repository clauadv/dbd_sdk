
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Competence
/// dependency: CoreUObject
/// dependency: DBDAnimation
/// dependency: DBDCompetence
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags

/// Enum /Script/TheS38.ES38PerkResult
/// Size: 0x05
enum class ES38PerkResult : uint8_t
{
	ES38PerkResult__Exposed                                                          = 0,
	ES38PerkResult__Haste                                                            = 1,
	ES38PerkResult__Scream                                                           = 2,
	ES38PerkResult__NewItem                                                          = 3,
	ES38PerkResult__ES38PerkResult_MAX                                               = 4
};

/// Class /Script/TheS38.S38P01
/// Size: 0x00F0 (0x0003C8 - 0x0004B8)
class US38P01 : public UPerk
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x03C8   (0x0008)  MISSED
	class UClass*                                      _S38P01AnimInstance;                                        // 0x03D0   (0x0008)  
	class UClass*                                      _exposedStatusEffectClass;                                  // 0x03D8   (0x0008)  
	class UActivatableExposedEffect*                   _exposedEffect;                                             // 0x03E0   (0x0008)  
	float                                              _exposedDuration;                                           // 0x03E8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x03EC   (0x0004)  MISSED
	class UClass*                                      _hasteStatusEffectClass;                                    // 0x03F0   (0x0008)  
	class UActivatableStatusEffect*                    _hasteEffect;                                               // 0x03F8   (0x0008)  
	float                                              _hasteAmount;                                               // 0x0400   (0x0004)  
	float                                              _hasteDuration;                                             // 0x0404   (0x0004)  
	class UClass*                                      _exhaustionEffectClass;                                     // 0x0408   (0x0008)  
	class UActivatableExhaustedEffect*                 _exhaustionEffect;                                          // 0x0410   (0x0008)  
	float                                              _exhaustionDuration;                                        // 0x0418   (0x000C)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0424   (0x0004)  MISSED
	TArray<class UClass*>                              _collectableClasses;                                        // 0x0428   (0x0010)  
	TArray<FName>                                      _unsupportedItemAddons;                                     // 0x0438   (0x0010)  
	class UClass*                                      _interactionBP;                                             // 0x0448   (0x0008)  
	float                                              _animationDuration;                                         // 0x0450   (0x0004)  
	unsigned char                                      UnknownData03_6[0x64];                                      // 0x0454   (0x0064)  MISSED


	/// Functions
	// Function /Script/TheS38.S38P01.Multicast_OnSecondaryPerkEffect
	// void Multicast_OnSecondaryPerkEffect(bool shouldScream);                                                              // [0x5e0fd50] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheS38.S38P01.Multicast_OnAnimationStart
	// void Multicast_OnAnimationStart();                                                                                    // [0x590b5d0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheS38.S38P01.GetUnsupportedItemAddons
	// TArray<FName> GetUnsupportedItemAddons();                                                                             // [0x5e0fd10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheS38.S38P01.GetHasteDuration
	// float GetHasteDuration();                                                                                             // [0x5e0fce0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheS38.S38P01.GetHasteAmount
	// float GetHasteAmount();                                                                                               // [0x5b29a00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheS38.S38P01.GetExposedDuration
	// float GetExposedDuration();                                                                                           // [0x4ff9100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheS38.S38P01.GetExhaustionDurationAtLevel
	// float GetExhaustionDurationAtLevel();                                                                                 // [0x5df5880] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheS38.S38P01.GetCollectableClasses
	// TArray<UClass*> GetCollectableClasses();                                                                              // [0x5e0fc50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheS38.S38P01.Cosmetic_MakeSurvivorScream
	// void Cosmetic_MakeSurvivorScream();                                                                                   // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheS38.S38P01.Authority_OnPerkActivated
	// void Authority_OnPerkActivated(FGameplayTag gameEventType, FGameEventData& GameEventData);                            // [0x5e0fb40] Final|Native|Private|HasOutParms 
	// Function /Script/TheS38.S38P01.Authority_OnAnimationFinish
	// void Authority_OnAnimationFinish();                                                                                   // [0x5e0fb20] Final|Native|Private 
	// Function /Script/TheS38.S38P01.Authority_GiveSecondaryPerkEffect
	// void Authority_GiveSecondaryPerkEffect();                                                                             // [0x5e0fb00] Final|Native|Private 
};

/// Class /Script/TheS38.S38P01Interaction
/// Size: 0x0010 (0x000650 - 0x000660)
class US38P01Interaction : public UInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0650   (0x0010)  MISSED
};

/// Class /Script/TheS38.S38P02
/// Size: 0x00B0 (0x0003C8 - 0x000478)
class US38P02 : public UPerk
{ 
public:
	float                                              _percentChanceOfDoubleScream;                               // 0x03C8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03CC   (0x0004)  MISSED
	class UClass*                                      _perkStatusEffectClass;                                     // 0x03D0   (0x0008)  
	class UStatusEffect*                               _perkStatusEffect;                                          // 0x03D8   (0x0008)  
	class UClass*                                      _auraStatusEffectClass;                                     // 0x03E0   (0x0008)  
	float                                              _auraDuration;                                              // 0x03E8   (0x000C)  
	float                                              _extraAuraDurationPerExtraScream;                           // 0x03F4   (0x0004)  
	float                                              _screamDuration;                                            // 0x03F8   (0x0004)  
	float                                              _minRandomScreamDelay;                                      // 0x03FC   (0x0004)  
	float                                              _maxRandomScreamDelay;                                      // 0x0400   (0x0004)  
	int32_t                                            _maxScreamCount;                                            // 0x0404   (0x0004)  
	float                                              _cooldownDuration;                                          // 0x0408   (0x0004)  
	float                                              _preventInteractionDuration;                                // 0x040C   (0x0004)  
	unsigned char                                      UnknownData01_6[0x68];                                      // 0x0410   (0x0068)  MISSED


	/// Functions
	// Function /Script/TheS38.S38P02.OnSurvivorScream
	// void OnSurvivorScream();                                                                                              // [0x5e105c0] Final|Native|Private 
	// Function /Script/TheS38.S38P02.Multicast_MakeSurvivorScream
	// void Multicast_MakeSurvivorScream(int32_t timesToScream);                                                             // [0x5000cd0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheS38.S38P02.GetScreamDuration
	// float GetScreamDuration();                                                                                            // [0x4fe8320] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheS38.S38P02.GetMinRandomScreamDelay
	// float GetMinRandomScreamDelay();                                                                                      // [0x5e105a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheS38.S38P02.GetMaxScreamCount
	// int32_t GetMaxScreamCount();                                                                                          // [0x5e10580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheS38.S38P02.GetMaxRandomScreamDelay
	// float GetMaxRandomScreamDelay();                                                                                      // [0x5e10560] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheS38.S38P02.GetExtraAuraDurationPerExtraScream
	// float GetExtraAuraDurationPerExtraScream();                                                                           // [0x4fe8340] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheS38.S38P02.GetCooldownDuration
	// float GetCooldownDuration();                                                                                          // [0x5e10540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheS38.S38P02.GetAuraDurationAtLevel
	// float GetAuraDurationAtLevel();                                                                                       // [0x4fe8260] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheS38.S38P02.EnableInteractions
	// void EnableInteractions();                                                                                            // [0x5e10520] Final|Native|Private 
	// Function /Script/TheS38.S38P02.Cosmetic_MakeSurvivorScream
	// void Cosmetic_MakeSurvivorScream();                                                                                   // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/TheS38.S38P02.Authority_OnIsApplicableChanged
	// void Authority_OnIsApplicableChanged(class UGameplayModifierContainer* Container, bool IsApplicable);                 // [0x5e10450] Final|Native|Private 
};

/// Class /Script/TheS38.S38P02StatusEffect
/// Size: 0x0010 (0x000350 - 0x000360)
class US38P02StatusEffect : public UStatusEffect
{ 
public:
	FName                                              _headJointName;                                             // 0x0350   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x035C   (0x0004)  MISSED
};

/// Class /Script/TheS38.S38P03
/// Size: 0x0028 (0x0003C8 - 0x0003F0)
class US38P03 : public UPerk
{ 
public:
	class UClass*                                      _onGroundEffectClass;                                       // 0x03C8   (0x0008)  
	float                                              _hasteDuration;                                             // 0x03D0   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x03DC   (0x0004)  MISSED
	class UClass*                                      _interactionBP;                                             // 0x03E0   (0x0008)  
	class UInteractionDefinition*                      _perkInteraction;                                           // 0x03E8   (0x0008)  


	/// Functions
	// Function /Script/TheS38.S38P03.GetHasteDurationAtLevel
	// float GetHasteDurationAtLevel();                                                                                      // [0x4fe8290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheS38.S38P03.Authority_OnPickSelfUp
	// void Authority_OnPickSelfUp(FGameplayTag GameplayTag, FGameEventData& GameEventData);                                 // [0x5e10b60] Final|Native|Private|HasOutParms 
	// Function /Script/TheS38.S38P03.Authority_OnPerkActivated
	// void Authority_OnPerkActivated(FGameplayTag gameEventType, FGameEventData& GameEventData);                            // [0x5e10a50] Final|Native|Private|HasOutParms 
	// Function /Script/TheS38.S38P03.Authority_OnExitGatesPowered
	// void Authority_OnExitGatesPowered(FGameplayTag gameEventType, FGameEventData& GameEventData);                         // [0x5e10940] Final|Native|Private|HasOutParms 
};

/// Class /Script/TheS38.S38P03Interaction
/// Size: 0x0000 (0x000650 - 0x000650)
class US38P03Interaction : public UInteractionDefinition
{ 
public:
};

/// Class /Script/TheS38.S38P03OnGroundStatusEffect
/// Size: 0x0050 (0x000350 - 0x0003A0)
class US38P03OnGroundStatusEffect : public UStatusEffect
{ 
public:
	class UClass*                                      _hasteStatusEffectClass;                                    // 0x0350   (0x0008)  
	float                                              _hastePercentage;                                           // 0x0358   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x035C   (0x0004)  MISSED
	class UStatusEffect*                               _hasteStatusEffect;                                         // 0x0360   (0x0008)  
	unsigned char                                      UnknownData01_6[0x38];                                      // 0x0368   (0x0038)  MISSED


	/// Functions
	// Function /Script/TheS38.S38P03OnGroundStatusEffect.Authority_OnPickSelfUp
	// void Authority_OnPickSelfUp(FGameplayTag gameEventType, FGameEventData& GameEventData);                               // [0x5e11110] Final|Native|Private|HasOutParms 
	// Function /Script/TheS38.S38P03OnGroundStatusEffect.Authority_OnCamperHealthChange
	// void Authority_OnCamperHealthChange(ECamperDamageState oldDamageState, ECamperDamageState newDamageState);            // [0x5e11040] Final|Native|Private 
	// Function /Script/TheS38.S38P03OnGroundStatusEffect.Authority_HealSelf
	// void Authority_HealSelf();                                                                                            // [0x5e11020] Final|Native|Private 
};

/// Class /Script/TheS38.SurvivorPerkAnimInstance
/// Size: 0x0020 (0x000550 - 0x000570)
class USurvivorPerkAnimInstance : public UBaseSurvivorAnimInstance
{ 
public:
	FGameplayTagContainer                              _tagsToTriggerAnimation;                                    // 0x0548   (0x0020)  
	bool                                               IsInPerkInteraction;                                        // 0x0568   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0569   (0x0007)  MISSED
};

