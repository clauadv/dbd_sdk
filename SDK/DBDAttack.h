
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeadByDaylight
/// dependency: Engine

/// Class /Script/DBDAttack.PounceAttack
/// Size: 0x0000 (0x000390 - 0x000390)
class UPounceAttack : public UDBDAttack
{ 
public:
};

/// Class /Script/DBDAttack.PounceAttackOpenSubstate
/// Size: 0x0018 (0x000118 - 0x000130)
class UPounceAttackOpenSubstate : public UDBDAttackOpenSubstate
{ 
public:
	class UClass*                                      _pounceOpenStateCosmeticBlueprintClass;                     // 0x0118   (0x0008)  
	class UPounceAttackOpenSubstateCosmetic*           _pounceOpenStateCosmeticBlueprintObject;                    // 0x0120   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0128   (0x0008)  MISSED
};

/// Class /Script/DBDAttack.PounceAttackHittingSubstate
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UPounceAttackHittingSubstate : public UDBDAttackHittingSubstate
{ 
public:
};

/// Class /Script/DBDAttack.PounceAttackSuccessSubstate
/// Size: 0x0000 (0x000118 - 0x000118)
class UPounceAttackSuccessSubstate : public UDBDAttackSuccessSubstate
{ 
public:
};

/// Class /Script/DBDAttack.PounceAttackMissSubstate
/// Size: 0x0008 (0x000118 - 0x000120)
class UPounceAttackMissSubstate : public UDBDAttackMissSubstate
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0118   (0x0008)  MISSED
};

/// Class /Script/DBDAttack.PounceAttackObstructSubstate
/// Size: 0x0010 (0x000118 - 0x000128)
class UPounceAttackObstructSubstate : public UDBDAttackObstructSubstate
{ 
public:
	FName                                              _fullObstructMontage;                                       // 0x0118   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0124   (0x0004)  MISSED
};

/// Class /Script/DBDAttack.PounceAttackOpenSubstateCosmetic
/// Size: 0x0000 (0x000030 - 0x000030)
class UPounceAttackOpenSubstateCosmetic : public UObject
{ 
public:


	/// Functions
	// Function /Script/DBDAttack.PounceAttackOpenSubstateCosmetic.OnLungeAttackStartCosmetic
	// void OnLungeAttackStartCosmetic(class ADBDPlayer* SlasherPlayer);                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/DBDAttack.PounceAttackOpenSubstateCosmetic.OnLungeAttackEndCosmetic
	// void OnLungeAttackEndCosmetic(class ADBDPlayer* SlasherPlayer);                                                       // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/DBDAttack.PounceAttackOpenSubstateCosmetic.OnLocallyObservedChangedCosmetic
	// void OnLocallyObservedChangedCosmetic(class ADBDPlayer* SlasherPlayer);                                               // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/DBDAttack.PounceAttackOpenSubstateCosmetic.OnLocallyObservedChanged
	// void OnLocallyObservedChanged(class ADBDPlayer* SlasherPlayer);                                                       // [0x4ed2e20] Final|Native|Private 
	// Function /Script/DBDAttack.PounceAttackOpenSubstateCosmetic.IsLungeAttackAugmented
	// bool IsLungeAttackAugmented(class ADBDPlayer* SlasherPlayer);                                                         // [0x4ed2d80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDAttack.SlashAttack
/// Size: 0x0000 (0x000390 - 0x000390)
class USlashAttack : public UPounceAttack
{ 
public:
};

