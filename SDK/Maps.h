
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

/// Class /Game/Maps/Shop/Shop_Setup.Shop_Setup_C
/// Size: 0x0000 (0x000238 - 0x000238)
class AShop_Setup_C : public ALevelScriptActor
{ 
public:
};

/// Class /Game/Maps/Shop/Shop_Static.Shop_Static_C
/// Size: 0x0000 (0x000238 - 0x000238)
class AShop_Static_C : public ALevelScriptActor
{ 
public:
};

/// Class /Game/Maps/Lobby/Lobby_Lighting.Lobby_Lighting_C
/// Size: 0x0008 (0x000238 - 0x000240)
class ALobby_Lighting_C : public ALevelScriptActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0238   (0x0008)  


	/// Functions
	// Function /Game/Maps/Lobby/Lobby_Lighting.Lobby_Lighting_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Maps/Lobby/Lobby_Lighting.Lobby_Lighting_C.ExecuteUbergraph_Lobby_Lighting
	// void ExecuteUbergraph_Lobby_Lighting(int32_t EntryPoint);                                                             // [0x61c32d0] Final                
};

/// Class /Game/Maps/OfflineLobby.OfflineLobby_C
/// Size: 0x00D8 (0x0004B8 - 0x000590)
class AOfflineLobby_C : public AOfflineLobbyLevel
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04B8   (0x0008)  
	bool                                               SubLevelsLoaded;                                            // 0x04C0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x04C1   (0x0003)  MISSED
	float                                              SubLevelLoadStartTime;                                      // 0x04C4   (0x0004)  
	SDK_UNDEFINED(16,4876) /* FString */               __um(DefaultLobbyName);                                     // 0x04C8   (0x0010)  
	SDK_UNDEFINED(48,4877) /* TWeakObjectPtr<AActor*> */ __um(KillerLightActor);                                   // 0x04D8   (0x0030)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0508   (0x0008)  MISSED
	FTransform                                         DefaultKillerLightActorTransform;                           // 0x0510   (0x0030)  
	SDK_UNDEFINED(80,4878) /* TMap<TWeakObjectPtr<UClass*>, FTransform> */ __um(KillerLightTransforms);            // 0x0540   (0x0050)  


	/// Functions
	// Function /Game/Maps/OfflineLobby.OfflineLobby_C.GetKillerLightTransform
	// void GetKillerLightTransform(class ADBDMenuPlayer* Player, FTransform& Transform);                                    // [0x61c32d0] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Maps/OfflineLobby.OfflineLobby_C.OnCharacterSpawned
	// void OnCharacterSpawned(class ADBDMenuPlayer* Player);                                                                // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Maps/OfflineLobby.OfflineLobby_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Maps/OfflineLobby.OfflineLobby_C.ExecuteUbergraph_OfflineLobby
	// void ExecuteUbergraph_OfflineLobby(int32_t EntryPoint);                                                               // [0x61c32d0] Final|HasDefaults    
};

/// Class /Game/Maps/Archives/Archives_Lighting.Archives_Lighting_C
/// Size: 0x0070 (0x000238 - 0x0002A8)
class AArchives_Lighting_C : public ALevelScriptActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0238   (0x0008)  
	class AExponentialHeightFog*                       Main_Fog_State_copy;                                        // 0x0240   (0x0008)  
	TArray<class AExponentialHeightFog*>               Height_Fogs;                                                // 0x0248   (0x0010)  
	TArray<class AActor*>                              Archive_Lighting_actors;                                    // 0x0258   (0x0010)  
	class USkyLightComponent*                          Lobby_Sky_Light;                                            // 0x0268   (0x0008)  
	class UDirectionalLightComponent*                  Lobby_Directionnal;                                         // 0x0270   (0x0008)  
	class APlayerCameraManager*                        Camera_Manager;                                             // 0x0278   (0x0008)  
	bool                                               is_ready;                                                   // 0x0280   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0281   (0x0007)  MISSED
	FTimerHandle                                       Timer_Checker;                                              // 0x0288   (0x0008)  
	class AExponentialHeightFog*                       Main_Lobby_Fog;                                             // 0x0290   (0x0008)  
	class AExponentialHeightFog*                       Archive_Fog;                                                // 0x0298   (0x0008)  
	class AExponentialHeightFog*                       Archive_ExponentialHeightFog_ExecuteUbergraph_Archives_Lighting_RefProperty; // 0x02A0   (0x0008)  


	/// Functions
	// Function /Game/Maps/Archives/Archives_Lighting.Archives_Lighting_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Maps/Archives/Archives_Lighting.Archives_Lighting_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                 // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Maps/Archives/Archives_Lighting.Archives_Lighting_C.Ready
	// void Ready();                                                                                                         // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/Archives/Archives_Lighting.Archives_Lighting_C.ReadySetGo
	// void ReadySetGo();                                                                                                    // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/Archives/Archives_Lighting.Archives_Lighting_C.ExecuteUbergraph_Archives_Lighting
	// void ExecuteUbergraph_Archives_Lighting(int32_t EntryPoint);                                                          // [0x61c32d0] Final|HasDefaults    
};

/// Class /Game/Maps/Lobby_Static.Lobby_Static_2021_C
/// Size: 0x0000 (0x000238 - 0x000238)
class ALobby_Static_2021_C : public ALevelScriptActor
{ 
public:
};

/// Class /Game/Maps/Shop/Shop_Lighting.Shop_Lighting_C
/// Size: 0x0070 (0x000238 - 0x0002A8)
class AShop_Lighting_C : public ALevelScriptActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0238   (0x0008)  
	TArray<class AExponentialHeightFog*>               Height_Fogs;                                                // 0x0240   (0x0010)  
	class AExponentialHeightFog*                       Main_Lobby_Fog;                                             // 0x0250   (0x0008)  
	TArray<class AActor*>                              Shop_Lighting_actors;                                       // 0x0258   (0x0010)  
	class USkyLightComponent*                          Lobby_Sky_Light;                                            // 0x0268   (0x0008)  
	class UDirectionalLightComponent*                  Lobby_Directionnal;                                         // 0x0270   (0x0008)  
	class APlayerCameraManager*                        Camera_Manager;                                             // 0x0278   (0x0008)  
	bool                                               is_ready;                                                   // 0x0280   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0281   (0x0007)  MISSED
	FTimerHandle                                       Timer_Checker;                                              // 0x0288   (0x0008)  
	class AExponentialHeightFog*                       Shop_Lobby_Fog;                                             // 0x0290   (0x0008)  
	class ATriggerBox*                                 ShopCameraDetectionVolume_ExecuteUbergraph_Shop_Lighting_RefProperty; // 0x0298   (0x0008)  
	class AExponentialHeightFog*                       Shop_ExponentialHeightFog_ExecuteUbergraph_Shop_Lighting_RefProperty; // 0x02A0   (0x0008)  


	/// Functions
	// Function /Game/Maps/Shop/Shop_Lighting.Shop_Lighting_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Game/Maps/Shop/Shop_Lighting.Shop_Lighting_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                 // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/Maps/Shop/Shop_Lighting.Shop_Lighting_C.Ready
	// void Ready();                                                                                                         // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/Shop/Shop_Lighting.Shop_Lighting_C.ReadySetGo
	// void ReadySetGo();                                                                                                    // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /Game/Maps/Shop/Shop_Lighting.Shop_Lighting_C.ExecuteUbergraph_Shop_Lighting
	// void ExecuteUbergraph_Shop_Lighting(int32_t EntryPoint);                                                              // [0x61c32d0] Final|HasDefaults    
};

/// Class /Game/Maps/Archives/Archives_VFX.Archives_VFX_C
/// Size: 0x0000 (0x000238 - 0x000238)
class AArchives_VFX_C : public ALevelScriptActor
{ 
public:
};

/// Class /Game/Maps/Archives/Archives_Setup.Archives_Setup_C
/// Size: 0x0000 (0x000238 - 0x000238)
class AArchives_Setup_C : public ALevelScriptActor
{ 
public:
};

