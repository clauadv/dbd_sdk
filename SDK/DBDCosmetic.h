
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: Engine
/// dependency: GameplayTags

/// Class /Script/DBDCosmetic.DBDActorIndicator
/// Size: 0x0008 (0x000230 - 0x000238)
class ADBDActorIndicator : public AActor
{ 
public:
	bool                                               _isActivated;                                               // 0x0230   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0231   (0x0007)  MISSED


	/// Functions
	// Function /Script/DBDCosmetic.DBDActorIndicator.Cosmetic_UpdateIndicatorActivationStatus
	// void Cosmetic_UpdateIndicatorActivationStatus(bool IsActivated);                                                      // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/DBDCosmetic.DBDCosmeticModuleUtilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UDBDCosmeticModuleUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DBDCosmetic.DBDCosmeticModuleUtilities.GetCosmeticHelperActorsOfSurvivorByClass
	// TArray<ASurvivorCosmeticHelperActor*> GetCosmeticHelperActorsOfSurvivorByClass(class ACamperPlayer* Survivor, class UClass* cosmeticHelperActorClassType); // [0x5002b20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/DBDCosmetic.DBDCosmeticModuleUtilities.GetCosmeticHelperActorsOfSurvivor
	// TArray<ASurvivorCosmeticHelperActor*> GetCosmeticHelperActorsOfSurvivor(class ACamperPlayer* Survivor);               // [0x5002a50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/DBDCosmetic.SurvivorCosmeticHelperActor
/// Size: 0x0040 (0x000230 - 0x000270)
class ASurvivorCosmeticHelperActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0230   (0x0040)  MISSED


	/// Functions
	// Function /Script/DBDCosmetic.SurvivorCosmeticHelperActor.IsLocallyObserved
	// bool IsLocallyObserved();                                                                                             // [0x50030d0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCosmetic.SurvivorCosmeticHelperActor.GetSurvivor
	// class ACamperPlayer* GetSurvivor();                                                                                   // [0x50030a0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCosmetic.SurvivorCosmeticHelperActor.GetMaterialHelper
	// class UMaterialHelper* GetMaterialHelper();                                                                           // [0x5003070] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCosmetic.SurvivorCosmeticHelperActor.GetCustomizedSkeletalMesh
	// class UCustomizedSkeletalMesh* GetCustomizedSkeletalMesh();                                                           // [0x5003040] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCosmetic.SurvivorCosmeticHelperActor.GetAudioComponent
	// class UAkComponent* GetAudioComponent();                                                                              // [0x5003010] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCosmetic.SurvivorCosmeticHelperActor.Cosmetic_OnSurvivorLinked
	// void Cosmetic_OnSurvivorLinked(class ACamperPlayer* survivorLinked);                                                  // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/DBDCosmetic.SurvivorCosmeticHelperActor.Cosmetic_OnIsLocallyObservingSurvivorChanged
	// void Cosmetic_OnIsLocallyObservingSurvivorChanged(bool isLocallyObservingSurvivor);                                   // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/DBDCosmetic.SurvivorCosmeticHelperActor.Cosmetic_OnIsGettingMoriedStatusChanged
	// void Cosmetic_OnIsGettingMoriedStatusChanged(bool isGettingMoried);                                                   // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/DBDCosmetic.SurvivorCosmeticHelperSpawnerComponent
/// Size: 0x0020 (0x0000B8 - 0x0000D8)
class USurvivorCosmeticHelperSpawnerComponent : public UActorComponent
{ 
public:
	class UDataTable*                                  _survivorCosmeticActorHelperDB;                             // 0x00B8   (0x0008)  
	TArray<class ASurvivorCosmeticHelperActor*>        survivorCosmeticHelperActors;                               // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00D0   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDCosmetic.SurvivorCosmeticHelperSpawnerComponent.GetCosmeticHelperActors
	// TArray<ASurvivorCosmeticHelperActor*> GetCosmeticHelperActors();                                                      // [0x5003500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DBDCosmetic.SurvivorCosmeticHelperSpawnerComponent.GetCosmeticHelperActorByClass
	// TArray<ASurvivorCosmeticHelperActor*> GetCosmeticHelperActorByClass(class UClass* cosmeticHelperActorClassType);      // [0x5003420] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/DBDCosmetic.SurvivorCosmeticHelperActorSpawnInfo
/// Size: 0x0040 (0x000008 - 0x000048)
struct FSurvivorCosmeticHelperActorSpawnInfo : FDBDTableRowBase
{ 
	FGameplayTag                                       KillerPresenceTag;                                          // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	SDK_UNDEFINED(48,3693) /* TWeakObjectPtr<UClass*> */ __um(SurvivorCosmeticActorClass);                         // 0x0018   (0x0030)  
};

