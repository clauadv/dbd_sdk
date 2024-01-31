
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AkAudio
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: StatSystem

/// Class /Script/DBDAudio.AmbienceBoxComponent
/// Size: 0x0000 (0x0004B0 - 0x0004B0)
class UAmbienceBoxComponent : public UBoxComponent
{ 
public:
};

/// Class /Script/DBDAudio.AnimNotify_PostInteractionSoundEvent
/// Size: 0x0038 (0x000040 - 0x000078)
class UAnimNotify_PostInteractionSoundEvent : public UAnimNotify
{ 
public:
	class UAkAudioEvent*                               SoundEvent;                                                 // 0x0040   (0x0008)  
	SDK_UNDEFINED(48,1260) /* TWeakObjectPtr<UClass*> */ __um(InteractionAudioClass);                              // 0x0048   (0x0030)  
};

/// Class /Script/DBDAudio.AudioCustomMeshComponent
/// Size: 0x0000 (0x000550 - 0x000550)
class UAudioCustomMeshComponent : public UStaticMeshComponent
{ 
public:
};

/// Class /Script/DBDAudio.AudioUtilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UAudioUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DBDAudio.AudioUtilities.PostEventByNameOnComponent
	// void PostEventByNameOnComponent(class UAkComponent* Component, FString audioEventName);                               // [0x4eada90] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/DBDAudio.AudioUtilities.PostAkAudioEvent
	// void PostAkAudioEvent(class UAkAudioEvent* AudioEvent);                                                               // [0x4eada10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/DBDAudio.AudioUtilities.DBD_UnloadAudioBank
	// void DBD_UnloadAudioBank(class UAkAudioBank* Bank, class UObject* WorldContextObject);                                // [0x4ead950] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/DBDAudio.AudioUtilities.DBD_LoadAudioBankWithCallback
	// void DBD_LoadAudioBankWithCallback(class UAkAudioBank* Bank, FDelegateProperty& BankLoadedCallback, class UObject* WorldContextObject); // [0x4ead810] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDAudio.AudioUtilities.DBD_LoadAudioBankPersistentWithCallback
	// void DBD_LoadAudioBankPersistentWithCallback(class UAkAudioBank* Bank, FDelegateProperty& BankLoadedCallback, class UObject* WorldContextObject); // [0x4ead6d0] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/DBDAudio.AudioUtilities.DBD_LoadAudioBankPersistent
	// void DBD_LoadAudioBankPersistent(class UAkAudioBank* Bank, class UObject* WorldContextObject);                        // [0x4ead5e0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/DBDAudio.AudioUtilities.DBD_LoadAudioBank
	// void DBD_LoadAudioBank(class UAkAudioBank* Bank, class UObject* WorldContextObject);                                  // [0x4ead5e0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/DBDAudio.InteractionAudioComponent
/// Size: 0x0068 (0x0000B8 - 0x000120)
class UInteractionAudioComponent : public UActorComponent
{ 
public:
	class UAkComponent*                                _audioComponent;                                            // 0x00B8   (0x0008)  
	FNonTunableStat                                    _audioRadius;                                               // 0x00C0   (0x0060)  


	/// Functions
	// Function /Script/DBDAudio.InteractionAudioComponent.PostAkEvent
	// bool PostAkEvent(class UAkAudioEvent* AkEvent);                                                                       // [0x4eadd60] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/DBDAudio.InteractionAudioComponent.GetCalculatedAudioRadius
	// float GetCalculatedAudioRadius();                                                                                     // [0x4eadd30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DBDAudio.LoadAsyncBankData
/// Size: 0x0010 (0x000030 - 0x000040)
class ULoadAsyncBankData : public UObject
{ 
public:
	class UAkAudioBank*                                Bank;                                                       // 0x0030   (0x0008)  
	class USoundBankLoader*                            SoundBankLoader;                                            // 0x0038   (0x0008)  
};

/// Class /Script/DBDAudio.SoundBankLoader
/// Size: 0x0098 (0x000038 - 0x0000D0)
class USoundBankLoader : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0038   (0x0028)  MISSED
	TArray<class UAkAudioBank*>                        _audioBanks;                                                // 0x0060   (0x0010)  
	TArray<class ULoadAsyncBankData*>                  _asyncAudioBanksPendingLoadData;                            // 0x0070   (0x0010)  
	SDK_UNDEFINED(80,1261) /* TMap<FString, FBankTrackingDataV2> */ __um(_audioBanksV2);                           // 0x0080   (0x0050)  
};

/// Struct /Script/DBDAudio.AkSoundLoop
/// Size: 0x0028 (0x000000 - 0x000028)
struct FAkSoundLoop
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	class UAkAudioEvent*                               _startEvent;                                                // 0x0008   (0x0008)  
	class UAkAudioEvent*                               _endEvent;                                                  // 0x0010   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0018   (0x0010)  MISSED
};

/// Struct /Script/DBDAudio.BankTrackingDataV2
/// Size: 0x0038 (0x000000 - 0x000038)
struct FBankTrackingDataV2
{ 
	class UAkAudioBank*                                Bank;                                                       // 0x0000   (0x0008)  
	SDK_UNDEFINED(16,1262) /* TArray<FDelegateProperty> */ __um(OnLoadedCallbacks);                                // 0x0008   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0018   (0x0020)  MISSED
};

