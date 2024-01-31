
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AkAudio
/// dependency: Archives
/// dependency: Competence
/// dependency: CoreUObject
/// dependency: DBDAnimation
/// dependency: DBDGameplay
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GFXUtilities
/// dependency: GraphicsExtensions
/// dependency: NavigationSystem
/// dependency: TheK34
/// dependency: TheOnryo

/// Enum /Game/Blueprints/GameplayElements/Lighting/LightingInterfaceEnum.LightingInterfaceEnum
/// Size: 0x05
enum class LightingInterfaceEnum : uint8_t
{
	LightingInterfaceEnum__NewEnumerator0                                            = 0,
	LightingInterfaceEnum__NewEnumerator1                                            = 1,
	LightingInterfaceEnum__NewEnumerator2                                            = 2,
	LightingInterfaceEnum__NewEnumerator3                                            = 3,
	LightingInterfaceEnum__LightingInterfaceEnum_MAX                                 = 4
};

/// Class /Game/Blueprints/Tiles/TileBase01.TileBase01_C
/// Size: 0x0198 (0x0003D0 - 0x000568)
class ATileBase01_C : public ATile
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03D0   (0x0008)  
	class USceneComponent*                             Breakables;                                                 // 0x03D8   (0x0008)  
	class USceneComponent*                             GeneratorDrivenObjects;                                     // 0x03E0   (0x0008)  
	class USceneComponent*                             Audio;                                                      // 0x03E8   (0x0008)  
	class USceneComponent*                             PullObjects;                                                // 0x03F0   (0x0008)  
	class UActorSpawner*                               BottomLeftSpawner;                                          // 0x03F8   (0x0008)  
	class UActorSpawner*                               TopLeftSpawner;                                             // 0x0400   (0x0008)  
	class UActorSpawner*                               TopRightSpawner;                                            // 0x0408   (0x0008)  
	class UActorSpawner*                               BottomRightSpawner;                                         // 0x0410   (0x0008)  
	class USceneComponent*                             QuadrantSpawners;                                           // 0x0418   (0x0008)  
	class UBoxComponent*                               EdgeObjectBlocker;                                          // 0x0420   (0x0008)  
	class USceneComponent*                             VaultObjects;                                               // 0x0428   (0x0008)  
	class USceneComponent*                             Crows;                                                      // 0x0430   (0x0008)  
	class USceneComponent*                             EdgeObjects;                                                // 0x0438   (0x0008)  
	class USceneComponent*                             lockers;                                                    // 0x0440   (0x0008)  
	class USceneComponent*                             HideGrass;                                                  // 0x0448   (0x0008)  
	class USceneComponent*                             Blockers;                                                   // 0x0450   (0x0008)  
	class USceneComponent*                             Gameplay;                                                   // 0x0458   (0x0008)  
	class USceneComponent*                             lights;                                                     // 0x0460   (0x0008)  
	class UChildActorComponent*                        BP_Effect_Mist04;                                           // 0x0468   (0x0008)  
	class UChildActorComponent*                        BP_Effect_Mist03;                                           // 0x0470   (0x0008)  
	class UChildActorComponent*                        BP_Effect_Mist02;                                           // 0x0478   (0x0008)  
	class UChildActorComponent*                        BP_Effect_Mist01;                                           // 0x0480   (0x0008)  
	class USceneComponent*                             Mist__BP_Effect_Mist_;                                      // 0x0488   (0x0008)  
	class USceneComponent*                             FX;                                                         // 0x0490   (0x0008)  
	class USceneComponent*                             Deco;                                                       // 0x0498   (0x0008)  
	class UActorSpawner*                               SearchableSpawner;                                          // 0x04A0   (0x0008)  
	class UActorSpawner*                               SmallMeatLockerSpawner;                                     // 0x04A8   (0x0008)  
	class UActorSpawner*                               HatchSpawner;                                               // 0x04B0   (0x0008)  
	class UArrowComponent*                             Arrow6;                                                     // 0x04B8   (0x0008)  
	class UTileSpawnPoint*                             InteractableSpawn01;                                        // 0x04C0   (0x0008)  
	class UArrowComponent*                             Arrow7;                                                     // 0x04C8   (0x0008)  
	class UActorSpawner*                               HexSpawner01;                                               // 0x04D0   (0x0008)  
	class UTileSpawnPoint*                             SurvivorItemSpawn01;                                        // 0x04D8   (0x0008)  
	class UArrowComponent*                             Arrow5;                                                     // 0x04E0   (0x0008)  
	class UTileSpawnPoint*                             KillerItemSpawn01;                                          // 0x04E8   (0x0008)  
	class UArrowComponent*                             Arrow4;                                                     // 0x04F0   (0x0008)  
	class UTileSpawnPoint*                             KillerSpawn01;                                              // 0x04F8   (0x0008)  
	class UArrowComponent*                             Arrow2;                                                     // 0x0500   (0x0008)  
	class UTileSpawnPoint*                             SurvivorSpawn04;                                            // 0x0508   (0x0008)  
	class UArrowComponent*                             Arrow1;                                                     // 0x0510   (0x0008)  
	class UTileSpawnPoint*                             SurvivorSpawn03;                                            // 0x0518   (0x0008)  
	class UArrowComponent*                             Arrow;                                                      // 0x0520   (0x0008)  
	class UTileSpawnPoint*                             SurvivorSpawn02;                                            // 0x0528   (0x0008)  
	class UArrowComponent*                             Arrow3;                                                     // 0x0530   (0x0008)  
	class UTileSpawnPoint*                             SurvivorSpawn01;                                            // 0x0538   (0x0008)  
	class USceneComponent*                             SpawnPoints;                                                // 0x0540   (0x0008)  
	class USceneComponent*                             Root;                                                       // 0x0548   (0x0008)  
	bool                                               Initialized;                                                // 0x0550   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0551   (0x0003)  MISSED
	float                                              TotalWeight;                                                // 0x0554   (0x0004)  
	float                                              SelectedWeight;                                             // 0x0558   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x055C   (0x0004)  MISSED
	class UTileSpawnPoint*                             SelectedSpawnPoint;                                         // 0x0560   (0x0008)  


	/// Functions
	// Function /Game/Blueprints/Tiles/TileBase01.TileBase01_C.SelectSpawnpoint
	// void SelectSpawnpoint(TArray<UTileSpawnPoint*>& Array);                                                               // [0x61d2f50] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Tiles/TileBase01.TileBase01_C.SetupGeneratorDrivenElements
	// void SetupGeneratorDrivenElements(class AActor* GeneratorSpawnPoint, TArray<UChildActorComponent*>& GeneratorDrivenElements); // [0x61d2f50] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Tiles/TileBase01.TileBase01_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                 // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/Tiles/TileBase01.TileBase01_C.OnLevelLoaded
	// void OnLevelLoaded();                                                                                                 // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Tiles/TileBase01.TileBase01_C.SetGeneratorDrivenObjects
	// void SetGeneratorDrivenObjects(class UTileSpawnPoint* SpawnPoint, class AActor* spawnedObject);                       // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Tiles/TileBase01.TileBase01_C.SetGeneratorDrivenScoreEvent
	// void SetGeneratorDrivenScoreEvent(TArray<AActor*>& generators);                                                       // [0x61d2f50] Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Tiles/TileBase01.TileBase01_C.KNY_StartSnowstorm
	// void KNY_StartSnowstorm();                                                                                            // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Tiles/TileBase01.TileBase01_C.ExecuteUbergraph_TileBase01
	// void ExecuteUbergraph_TileBase01(int32_t EntryPoint);                                                                 // [0x61d2f50] Final|HasDefaults    
};

/// Class /Game/Blueprints/Interfaces/ISlidingDoorInterface.ISlidingDoorInterface_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UISlidingDoorInterface_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/Blueprints/Interfaces/ISlidingDoorInterface.ISlidingDoorInterface_C.InitAsOpen
	// void InitAsOpen();                                                                                                    // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Blueprints/Tiles/TileUtilities.TileUtilities_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UTileUtilities_C : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Game/Blueprints/Tiles/TileUtilities.TileUtilities_C.InitAsOpen_ISlidingDoor
	// void InitAsOpen_ISlidingDoor(class UChildActorComponent* ChildActorComponent, class UObject* __WorldContext);         // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Tiles/TileUtilities.TileUtilities_C.InitAsOpen_Qatar
	// void InitAsOpen_Qatar(class UChildActorComponent* ChildActorComponent, class UObject* __WorldContext);                // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Tiles/TileUtilities.TileUtilities_C.SetGeneratorDrivenScoreEvent
	// void SetGeneratorDrivenScoreEvent(TArray<AActor*>& generators, class UObject* __WorldContext);                        // [0x61d2f50] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Tiles/TileUtilities.TileUtilities_C.CheckBasement
	// void CheckBasement(class UTileSpawnPoint* SpawnPoint, class AActor* spawnedObject, class UObject* __WorldContext);    // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Tiles/TileUtilities.TileUtilities_C.CheckGenerator
	// void CheckGenerator(class UTileSpawnPoint* SpawnPoint, class AActor* spawnedObject, class UObject* __WorldContext);   // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Tiles/TileUtilities.TileUtilities_C.CallForSpawn
	// void CallForSpawn(class UActorSpawner* ActorSpawner, class UObject* __WorldContext);                                  // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Tiles/TileUtilities.TileUtilities_C.SelectSpawners
	// void SelectSpawners(TArray<UActorSpawner*>& Spawners, int32_t MinCount, int32_t MaxCount, FRandomStream Stream, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Tiles/TileUtilities.TileUtilities_C.SelectSpawner
	// void SelectSpawner(TArray<UActorSpawner*>& Spawners, FRandomStream Stream, class UObject* __WorldContext);            // [0x61d2f50] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Tiles/TileUtilities.TileUtilities_C.SetupGeneratorDrivenElements
	// void SetupGeneratorDrivenElements(TArray<UChildActorComponent*>& SpawnPoints, class AActor* GeneratorSpawnPoint, int32_t generatorId, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Tiles/TileUtilities.TileUtilities_C.SelectSpawnpoint
	// void SelectSpawnpoint(TArray<UTileSpawnPoint*>& SpawnPoints, FRandomStream Stream, class UObject* __WorldContext);    // [0x61d2f50] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Blueprints/BP_DBDDesignTunables.BP_DBDDesignTunables_C
/// Size: 0x0000 (0x000278 - 0x000278)
class UBP_DBDDesignTunables_C : public UDBDDesignTunables
{ 
public:
};

/// Class /Game/Blueprints/BP_DBDRegionFinder.BP_DBDRegionFinder_C
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UBP_DBDRegionFinder_C : public URegionFinder
{ 
public:


	/// Functions
	// Function /Game/Blueprints/BP_DBDRegionFinder.BP_DBDRegionFinder_C.ConstructionScript
	// void ConstructionScript();                                                                                            // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Blueprints/Shop/BP_ShopManager.BP_ShopManager_C
/// Size: 0x0000 (0x0006B8 - 0x0006B8)
class UBP_ShopManager_C : public Ushopmanager
{ 
public:
};

/// Class /Game/Blueprints/GameplayElements/Offerings/BP_OfferingSequenceManager.BP_OfferingSequenceManager_C
/// Size: 0x0008 (0x0002F0 - 0x0002F8)
class ABP_OfferingSequenceManager_C : public AOfferingSequenceManager
{ 
public:
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x02F0   (0x0008)  
};

/// Class /Game/Blueprints/BP_DBDGameInstance.BP_DBDGameInstance_C
/// Size: 0x0000 (0x0009F0 - 0x0009F0)
class UBP_DBDGameInstance_C : public UDBDGameInstance
{ 
public:
};

/// Class /Game/Blueprints/Events/Anniversary2023/UmbraCommentatorActor.UmbraCommentatorActor_C
/// Size: 0x0008 (0x000238 - 0x000240)
class AUmbraCommentatorActor_C : public ACommentatorActorBase
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0238   (0x0008)  


	/// Functions
	// Function /Game/Blueprints/Events/Anniversary2023/UmbraCommentatorActor.UmbraCommentatorActor_C.OnAudioStarted
	// void OnAudioStarted();                                                                                                // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/Events/Anniversary2023/UmbraCommentatorActor.UmbraCommentatorActor_C.OnAudioEnded
	// void OnAudioEnded();                                                                                                  // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/Events/Anniversary2023/UmbraCommentatorActor.UmbraCommentatorActor_C.ExecuteUbergraph_UmbraCommentatorActor
	// void ExecuteUbergraph_UmbraCommentatorActor(int32_t EntryPoint);                                                      // [0x61d2f50] Final                
};

/// Struct /Game/Blueprints/Dialogue/SpecificReactionDialogue.SpecificReactionDialogue
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSpecificReactionDialogue
{ 
	SDK_UNDEFINED(16,3705) /* FString */               __um(CharacterName_2_F0326D2A4FE40230378F258FBAE1A79B);     // 0x0000   (0x0010)  
	TArray<FAkEventWithSubtitle>                       AudioEvents_6_CBA5DAE649A496B3060304AF525B86A1;             // 0x0010   (0x0010)  
};

/// Class /Game/Blueprints/Dialogue/LobbyDialogueComponent.LobbyDialogueComponent_C
/// Size: 0x0200 (0x0000B8 - 0x0002B8)
class ULobbyDialogueComponent_C : public UActorComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00B8   (0x0008)  
	TArray<FAkEventWithSubtitle>                       C1_OnSpawnFallback;                                         // 0x00C0   (0x0010)  
	int32_t                                            C1_PlayProbability;                                         // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00D4   (0x0004)  MISSED
	TArray<FSpecificReactionDialogue>                  C2_OnSpawnReactToSpecificCharacter;                         // 0x00D8   (0x0010)  
	int32_t                                            C2_PlayProbability;                                         // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00EC   (0x0004)  MISSED
	TArray<FAkEventWithSubtitle>                       C3_OnSpawnReactToCharacterGroup;                            // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,3706) /* TArray<FString> */       __um(C3_CharacterGroup);                                    // 0x0100   (0x0010)  
	int32_t                                            C3_PlayProbability;                                         // 0x0110   (0x0004)  
	FFloatRange                                        C1_C2_C3_Delay;                                             // 0x0114   (0x0010)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0124   (0x0004)  MISSED
	TArray<FSpecificReactionDialogue>                  C4_OnGuestJoinedReactToSpecificCharacter;                   // 0x0128   (0x0010)  
	int32_t                                            C4_PlayProbability;                                         // 0x0138   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x013C   (0x0004)  MISSED
	TArray<FAkEventWithSubtitle>                       C5_OnGuestJoinedReactToCharacterGroup;                      // 0x0140   (0x0010)  
	SDK_UNDEFINED(16,3707) /* TArray<FString> */       __um(C5_CharacterGroup);                                    // 0x0150   (0x0010)  
	int32_t                                            C5_PlayProbability;                                         // 0x0160   (0x0004)  
	FFloatRange                                        C4_C5_Delay;                                                // 0x0164   (0x0010)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x0174   (0x0004)  MISSED
	TArray<FAkEventWithSubtitle>                       C6_OnReadiedButOthersNotReady;                              // 0x0178   (0x0010)  
	int32_t                                            C6_PlayProbability;                                         // 0x0188   (0x0004)  
	FFloatRange                                        C6_Delay;                                                   // 0x018C   (0x0010)  
	unsigned char                                      UnknownData05_5[0x4];                                       // 0x019C   (0x0004)  MISSED
	TArray<FAkEventWithSubtitle>                       C7_OnPartyFilledWithCharacterGroup;                         // 0x01A0   (0x0010)  
	SDK_UNDEFINED(16,3708) /* TArray<FString> */       __um(C7_CharacterGroup);                                    // 0x01B0   (0x0010)  
	int32_t                                            C7_PlayProbability;                                         // 0x01C0   (0x0004)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x01C4   (0x0004)  MISSED
	TArray<FAkEventWithSubtitle>                       C8_OnStayInLobby;                                           // 0x01C8   (0x0010)  
	int32_t                                            C8_PlayProbability;                                         // 0x01D8   (0x0004)  
	FFloatRange                                        C8_Delay;                                                   // 0x01DC   (0x0010)  
	bool                                               C8_ShouldPlaySecondVoiceLine;                               // 0x01EC   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x01ED   (0x0003)  MISSED
	int32_t                                            C9_10_PlayProbability;                                      // 0x01F0   (0x0004)  
	FFloatRange                                        C9_10_Delay;                                                // 0x01F4   (0x0010)  
	unsigned char                                      UnknownData08_5[0x4];                                       // 0x0204   (0x0004)  MISSED
	SDK_UNDEFINED(80,3709) /* TMap<UAkAudioEvent*, FAkEventWithSubtitle> */ __um(C9_10_DialogueMap);               // 0x0208   (0x0050)  
	SDK_UNDEFINED(16,3710) /* FString */               __um(C9_10_RespondingCharacterName);                        // 0x0258   (0x0010)  
	TArray<FAkEventWithSubtitle>                       C11_OnMaxPrestige;                                          // 0x0268   (0x0010)  
	int32_t                                            C11_PlayProbability;                                        // 0x0278   (0x0004)  
	FFloatRange                                        C11_Delay;                                                  // 0x027C   (0x0010)  
	unsigned char                                      UnknownData09_5[0x4];                                       // 0x028C   (0x0004)  MISSED
	class UAkAudioEvent*                               AudioStopEvent;                                             // 0x0290   (0x0008)  
	bool                                               IsPlayingDialogue;                                          // 0x0298   (0x0001)  
	bool                                               IsPlayingC9;                                                // 0x0299   (0x0001)  
	bool                                               IsMuted;                                                    // 0x029A   (0x0001)  
	unsigned char                                      UnknownData10_5[0x5];                                       // 0x029B   (0x0005)  MISSED
	class UAkAudioEvent*                               LastPlayedAkEvent;                                          // 0x02A0   (0x0008)  
	class UAkComponent*                                LocalAudioTarget;                                           // 0x02A8   (0x0008)  
	class ADBDMenuPlayer*                              Player;                                                     // 0x02B0   (0x0008)  


	/// Functions
	// Function /Game/Blueprints/Dialogue/LobbyDialogueComponent.LobbyDialogueComponent_C.IsSpecificCharacterInLobby
	// void IsSpecificCharacterInLobby(FString& Character, bool& success);                                                   // [0x61d2f50] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Dialogue/LobbyDialogueComponent.LobbyDialogueComponent_C.GetPlayableEvents
	// void GetPlayableEvents(TArray<FAkEventWithSubtitle>& AudioEvents, bool& ShouldPlay, TArray<FAkEventWithSubtitle>& PlayableEvents); // [0x61d2f50] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Blueprints/Dialogue/LobbyDialogueComponent.LobbyDialogueComponent_C.GetLocalCharacterName
	// void GetLocalCharacterName(FString& characterName);                                                                   // [0x61d2f50] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Blueprints/Dialogue/LobbyDialogueComponent.LobbyDialogueComponent_C.FindSpecificDialogueForCharacter
	// void FindSpecificDialogueForCharacter(TArray<FSpecificReactionDialogue>& ReactionDialogues, FString Character, TArray<FAkEventWithSubtitle>& Dialogue, bool& success); // [0x61d2f50] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Blueprints/Dialogue/LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC11
	// void ShouldPlayC11(bool& ShouldPlay);                                                                                 // [0x61d2f50] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Blueprints/Dialogue/LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC10
	// void ShouldPlayC10(TMap<UAkAudioEvent*, FAkEventWithSubtitle>& ResponseDialogue, bool& ShouldPlay);                   // [0x61d2f50] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Blueprints/Dialogue/LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC9
	// void ShouldPlayC9(TMap<UAkAudioEvent*, FAkEventWithSubtitle>& ResponseDialogue, bool& ShouldPlay);                    // [0x61d2f50] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Blueprints/Dialogue/LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC8
	// void ShouldPlayC8(bool& ShouldPlay);                                                                                  // [0x61d2f50] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Blueprints/Dialogue/LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC7
	// void ShouldPlayC7(bool& ShouldPlay);                                                                                  // [0x61d2f50] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Blueprints/Dialogue/LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC6
	// void ShouldPlayC6(bool& ShouldPlay);                                                                                  // [0x61d2f50] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Blueprints/Dialogue/LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC5
	// void ShouldPlayC5(bool& ShouldPlay);                                                                                  // [0x61d2f50] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Blueprints/Dialogue/LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC4
	// void ShouldPlayC4(TArray<FAkEventWithSubtitle>& FoundDialogue, bool& ShouldPlay);                                     // [0x61d2f50] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Blueprints/Dialogue/LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC3
	// void ShouldPlayC3(bool& ShouldPlay);                                                                                  // [0x61d2f50] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Blueprints/Dialogue/LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC2
	// void ShouldPlayC2(TArray<FAkEventWithSubtitle>& FoundDialogue, bool& ShouldPlay);                                     // [0x61d2f50] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Blueprints/Dialogue/LobbyDialogueComponent.LobbyDialogueComponent_C.ShouldPlayC1
	// void ShouldPlayC1(bool& ShouldPlay);                                                                                  // [0x61d2f50] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Blueprints/Dialogue/LobbyDialogueComponent.LobbyDialogueComponent_C.OnPlayerMaxPrestige
	// void OnPlayerMaxPrestige(class UAkGameObject* AudioTarget);                                                           // [0x61d2f50] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Dialogue/LobbyDialogueComponent.LobbyDialogueComponent_C.OnCharacterRespond
	// void OnCharacterRespond(class UAkComponent* AudioTarget, FString PreviousContext);                                    // [0x61d2f50] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Dialogue/LobbyDialogueComponent.LobbyDialogueComponent_C.OnLobbyWait
	// void OnLobbyWait(class UAkComponent* AudioTarget);                                                                    // [0x61d2f50] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Dialogue/LobbyDialogueComponent.LobbyDialogueComponent_C.OnLocalReady
	// void OnLocalReady(class UAkComponent* AudioTarget, bool IsReady);                                                     // [0x61d2f50] Protected|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Dialogue/LobbyDialogueComponent.LobbyDialogueComponent_C.OnGuestSpawn
	// void OnGuestSpawn(class ADBDMenuPlayer* Guest, class UAkComponent* AudioTarget);                                      // [0x61d2f50] Protected|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Dialogue/LobbyDialogueComponent.LobbyDialogueComponent_C.OnLocalSpawn
	// void OnLocalSpawn(class UAkComponent* AudioTarget);                                                                   // [0x61d2f50] Protected|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Dialogue/LobbyDialogueComponent.LobbyDialogueComponent_C.OnGuestPlayerSpawn
	// void OnGuestPlayerSpawn(class ADBDMenuPlayer* Player, class UAkComponent* AudioTarget);                               // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Dialogue/LobbyDialogueComponent.LobbyDialogueComponent_C.OnLocalPlayerReadyChanged
	// void OnLocalPlayerReadyChanged(class ADBDMenuPlayer* Player, class UAkComponent* AudioTarget);                        // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Dialogue/LobbyDialogueComponent.LobbyDialogueComponent_C.OnLocalPlayerSpawn
	// void OnLocalPlayerSpawn(class UAkComponent* AudioTarget);                                                             // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Dialogue/LobbyDialogueComponent.LobbyDialogueComponent_C.OnDialogueFinished
	// void OnDialogueFinished(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);                           // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Dialogue/LobbyDialogueComponent.LobbyDialogueComponent_C.OnAllPlayersReadyInOnlineLobby
	// void OnAllPlayersReadyInOnlineLobby();                                                                                // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Dialogue/LobbyDialogueComponent.LobbyDialogueComponent_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                       // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/Dialogue/LobbyDialogueComponent.LobbyDialogueComponent_C.OnGuestPlayerDespawned
	// void OnGuestPlayerDespawned(class ADBDMenuPlayer* Player);                                                            // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Dialogue/LobbyDialogueComponent.LobbyDialogueComponent_C.OnBeginPlay
	// void OnBeginPlay(class UAkComponent* AudioTarget, class ADBDMenuPlayer* Player);                                      // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Dialogue/LobbyDialogueComponent.LobbyDialogueComponent_C.OnDialogueFinishedC2
	// void OnDialogueFinishedC2(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);                         // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Dialogue/LobbyDialogueComponent.LobbyDialogueComponent_C.OnDialogueFinishedC4
	// void OnDialogueFinishedC4(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);                         // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Dialogue/LobbyDialogueComponent.LobbyDialogueComponent_C.OnMaxPrestige
	// void OnMaxPrestige(class UAkGameObject* AudioTarget);                                                                 // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Dialogue/LobbyDialogueComponent.LobbyDialogueComponent_C.ExecuteUbergraph_LobbyDialogueComponent
	// void ExecuteUbergraph_LobbyDialogueComponent(int32_t EntryPoint);                                                     // [0x61d2f50] Final                
};

/// Class /Game/Blueprints/GameModes/BP_DBDGame_Start.BP_DBDGame_Start_C
/// Size: 0x0008 (0x0003F0 - 0x0003F8)
class ABP_DBDGame_Start_C : public ADBDGame_Start
{ 
public:
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x03F0   (0x0008)  
};

/// Class /Game/Blueprints/PlayerControllers/BP_IISPlayerController.BP_IISPlayerController_C
/// Size: 0x0000 (0x000668 - 0x000668)
class ABP_IISPlayerController_C : public ADBDPlayerControllerBase
{ 
public:
};

/// Class /Game/Blueprints/Tunables/BP_TextDesignTunables.BP_TextDesignTunables_C
/// Size: 0x0008 (0x000108 - 0x000110)
class UBP_TextDesignTunables_C : public UDBDTextDesignTunables
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0108   (0x0008)  


	/// Functions
	// Function /Game/Blueprints/Tunables/BP_TextDesignTunables.BP_TextDesignTunables_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Tunables/BP_TextDesignTunables.BP_TextDesignTunables_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                 // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Tunables/BP_TextDesignTunables.BP_TextDesignTunables_C.ExecuteUbergraph_BP_TextDesignTunables
	// void ExecuteUbergraph_BP_TextDesignTunables(int32_t EntryPoint);                                                      // [0x61d2f50] Final                
};

/// Class /Game/Blueprints/Tunables/BP_CoreUMGDesignTunables.BP_CoreUMGDesignTunables_C
/// Size: 0x0000 (0x000090 - 0x000090)
class UBP_CoreUMGDesignTunables_C : public UDBDCoreUMGDesignTunables
{ 
public:
};

/// Class /Game/Blueprints/Tunables/BP_MenuCamera.BP_MenuCamera_C
/// Size: 0x0000 (0x000870 - 0x000870)
class ABP_MenuCamera_C : public AMenuCameraActor
{ 
public:
};

/// Class /Game/Blueprints/InteractionProficiencies/ActionSpeedProficiency.ActionSpeedProficiency_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UActionSpeedProficiency_C : public UInteractionProficiency
{ 
public:


	/// Functions
	// Function /Game/Blueprints/InteractionProficiencies/ActionSpeedProficiency.ActionSpeedProficiency_C.FetchInteractingPlayers
	// TArray<ADBDPlayer*> FetchInteractingPlayers(class UInteractionDefinition* Chargeable Interaction, class ADBDPlayer* Interacting Player); // [0x61d2f50] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Blueprints/InteractionProficiencies/ActionSpeedProficiency.ActionSpeedProficiency_C.Compute Overall speed including multiple interactors
	// float Compute Overall speed including multiple interactors(class UChargeableInteractionDefinition* Chargeable Interaction, class ADBDPlayer* Interacting Player); // [0x61d2f50] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Blueprints/InteractionProficiencies/ActionSpeedProficiency.ActionSpeedProficiency_C.ShouldAndCanShowMultipleActorsSpeedProficiency
	// bool ShouldAndCanShowMultipleActorsSpeedProficiency(class UChargeableInteractionDefinition* Chargeable Interaction);  // [0x61d2f50] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/InteractionProficiencies/ActionSpeedProficiency.ActionSpeedProficiency_C.GetValue
	// float GetValue(class UChargeableInteractionDefinition* chargeableInteraction, class ADBDPlayer* Player);              // [0x61d2f50] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Game/Blueprints/InteractionProficiencies/SkillCheckDifficultyProficiency.SkillCheckDifficultyProficiency_C
/// Size: 0x0000 (0x000048 - 0x000048)
class USkillCheckDifficultyProficiency_C : public UInteractionProficiency
{ 
public:


	/// Functions
	// Function /Game/Blueprints/InteractionProficiencies/SkillCheckDifficultyProficiency.SkillCheckDifficultyProficiency_C.GetIsActive
	// bool GetIsActive(class UChargeableInteractionDefinition* chargeableInteraction, class ADBDPlayer* Player);            // [0x61d2f50] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/InteractionProficiencies/SkillCheckDifficultyProficiency.SkillCheckDifficultyProficiency_C.GetType
	// EStatusEffectType GetType(float value);                                                                               // [0x61d2f50] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/InteractionProficiencies/SkillCheckDifficultyProficiency.SkillCheckDifficultyProficiency_C.GetValue
	// float GetValue(class UChargeableInteractionDefinition* chargeableInteraction, class ADBDPlayer* Player);              // [0x61d2f50] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Game/Blueprints/InteractionProficiencies/SkillCheckProbabilityProficiency.SkillCheckProbabilityProficiency_C
/// Size: 0x0000 (0x000048 - 0x000048)
class USkillCheckProbabilityProficiency_C : public UInteractionProficiency
{ 
public:


	/// Functions
	// Function /Game/Blueprints/InteractionProficiencies/SkillCheckProbabilityProficiency.SkillCheckProbabilityProficiency_C.GetIsActive
	// bool GetIsActive(class UChargeableInteractionDefinition* chargeableInteraction, class ADBDPlayer* Player);            // [0x61d2f50] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/InteractionProficiencies/SkillCheckProbabilityProficiency.SkillCheckProbabilityProficiency_C.GetType
	// EStatusEffectType GetType(float value);                                                                               // [0x61d2f50] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/InteractionProficiencies/SkillCheckProbabilityProficiency.SkillCheckProbabilityProficiency_C.GetValue
	// float GetValue(class UChargeableInteractionDefinition* chargeableInteraction, class ADBDPlayer* Player);              // [0x61d2f50] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Game/Blueprints/InteractionProficiencies/ItemEfficiencyProficiency.ItemEfficiencyProficiency_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UItemEfficiencyProficiency_C : public UInteractionProficiency
{ 
public:


	/// Functions
	// Function /Game/Blueprints/InteractionProficiencies/ItemEfficiencyProficiency.ItemEfficiencyProficiency_C.GetValue
	// float GetValue(class UChargeableInteractionDefinition* chargeableInteraction, class ADBDPlayer* Player);              // [0x61d2f50] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Game/Blueprints/InteractionProficiencies/LuckProficiency.LuckProficiency_C
/// Size: 0x0000 (0x000048 - 0x000048)
class ULuckProficiency_C : public UInteractionProficiency
{ 
public:


	/// Functions
	// Function /Game/Blueprints/InteractionProficiencies/LuckProficiency.LuckProficiency_C.GetValue
	// float GetValue(class UChargeableInteractionDefinition* chargeableInteraction, class ADBDPlayer* Player);              // [0x61d2f50] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Game/Blueprints/InteractionProficiencies/BonusSkillCheckZoneSizeProficiency.BonusSkillCheckZoneSizeProficiency_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UBonusSkillCheckZoneSizeProficiency_C : public UInteractionProficiency
{ 
public:


	/// Functions
	// Function /Game/Blueprints/InteractionProficiencies/BonusSkillCheckZoneSizeProficiency.BonusSkillCheckZoneSizeProficiency_C.GetValue
	// float GetValue(class UChargeableInteractionDefinition* chargeableInteraction, class ADBDPlayer* Player);              // [0x61d2f50] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/InteractionProficiencies/BonusSkillCheckZoneSizeProficiency.BonusSkillCheckZoneSizeProficiency_C.GetIsActive
	// bool GetIsActive(class UChargeableInteractionDefinition* chargeableInteraction, class ADBDPlayer* Player);            // [0x61d2f50] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/InteractionProficiencies/BonusSkillCheckZoneSizeProficiency.BonusSkillCheckZoneSizeProficiency_C.GetType
	// EStatusEffectType GetType(float value);                                                                               // [0x61d2f50] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Game/Blueprints/InteractionProficiencies/ConsecutiveWakeUpPenaltyProficiency.ConsecutiveWakeUpPenaltyProficiency_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UConsecutiveWakeUpPenaltyProficiency_C : public UInteractionProficiency
{ 
public:


	/// Functions
	// Function /Game/Blueprints/InteractionProficiencies/ConsecutiveWakeUpPenaltyProficiency.ConsecutiveWakeUpPenaltyProficiency_C.GetValue
	// float GetValue(class UChargeableInteractionDefinition* chargeableInteraction, class ADBDPlayer* Player);              // [0x61d2f50] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Game/Blueprints/GameplayElements/Lighting/BP_AdaptiveShadowMapControllers.BP_AdaptiveShadowMapControllers_C
/// Size: 0x0018 (0x000230 - 0x000248)
class ABP_AdaptiveShadowMapControllers_C : public AActor
{ 
public:
	class UGMAdaptiveShadowMapControllerComponent*     GMAdaptiveShadowMapControllerSpotlights;                    // 0x0230   (0x0008)  
	class UGMAdaptiveShadowMapControllerComponent*     GMAdaptiveShadowMapControllerDirectional;                   // 0x0238   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0240   (0x0008)  
};

/// Class /Game/Blueprints/GameplayElements/Item/K34Power/Actors/K34DistractionNavigationQueryFilter.K34DistractionNavigationQueryFilter_C
/// Size: 0x0000 (0x000050 - 0x000050)
class UK34DistractionNavigationQueryFilter_C : public UNavigationQueryFilter
{ 
public:
};

/// Class /Game/Blueprints/GameplayElements/Item/K34Power/Actors/BP_K34TipToeDistraction.BP_K34TipToeDistraction_C
/// Size: 0x0010 (0x000538 - 0x000548)
class ABP_K34TipToeDistraction_C : public AK34TipToeDistraction
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0538   (0x0008)  
	class UActorPathFollowingComponent*                ActorPathFollowing;                                         // 0x0540   (0x0008)  


	/// Functions
	// Function /Game/Blueprints/GameplayElements/Item/K34Power/Actors/BP_K34TipToeDistraction.BP_K34TipToeDistraction_C.Cosmetic_OnFootHitGround
	// void Cosmetic_OnFootHitGround();                                                                                      // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/GameplayElements/Item/K34Power/Actors/BP_K34TipToeDistraction.BP_K34TipToeDistraction_C.ExecuteUbergraph_BP_K34TipToeDistraction
	// void ExecuteUbergraph_BP_K34TipToeDistraction(int32_t EntryPoint);                                                    // [0x61d2f50] Final                
};

/// Class /Game/Blueprints/GameplayElements/SoundFootsteps/SlasherFootstepPerceptionComponent.SlasherFootstepPerceptionComponent_C
/// Size: 0x0000 (0x000110 - 0x000110)
class USlasherFootstepPerceptionComponent_C : public UKillerFootstepPerceptionComponent
{ 
public:
};

/// Class /Game/Blueprints/GameplayElements/Player/BP_KillerScoringComponent.BP_KillerScoringComponent_C
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UBP_KillerScoringComponent_C : public UKillerScoringComponent
{ 
public:
};

/// Class /Game/Blueprints/Perks/PerkConditions/PlayerIsPerformingMori.PlayerIsPerformingMori_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UPlayerIsPerformingMori_C : public UHasObjectState
{ 
public:
};

/// Class /Game/Blueprints/Perks/PerkConditions/PlayerIsBeingMoried.PlayerIsBeingMoried_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UPlayerIsBeingMoried_C : public UHasObjectState
{ 
public:
};

/// Class /Game/Blueprints/Perks/StatusEffects/BP_Mori_StatusEffect.BP_Mori_StatusEffect_C
/// Size: 0x0008 (0x000350 - 0x000358)
class UBP_Mori_StatusEffect_C : public UStatusEffect
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0350   (0x0008)  


	/// Functions
	// Function /Game/Blueprints/Perks/StatusEffects/BP_Mori_StatusEffect.BP_Mori_StatusEffect_C.Authority_OnInstantiateModifierConditions
	// void Authority_OnInstantiateModifierConditions();                                                                     // [0x61d2f50] BlueprintAuthorityOnly|Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/Perks/StatusEffects/BP_Mori_StatusEffect.BP_Mori_StatusEffect_C.ExecuteUbergraph_BP_Mori_StatusEffect
	// void ExecuteUbergraph_BP_Mori_StatusEffect(int32_t EntryPoint);                                                       // [0x61d2f50] Final                
};

/// Class /Game/Blueprints/Perks/StatusEffects/Bloodlust_StatusEffect_BP.Bloodlust_StatusEffect_BP_C
/// Size: 0x0000 (0x0004A8 - 0x0004A8)
class UBloodlust_StatusEffect_BP_C : public UBloodlust
{ 
public:
};

/// Class /Game/Blueprints/Util/BPFL_EventFunctions.BPFL_EventFunctions_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UBPFL_EventFunctions_C : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Game/Blueprints/Util/BPFL_EventFunctions.BPFL_EventFunctions_C.UnregisterEventListener
	// void UnregisterEventListener(FGameEventDispatcherHandleBP Game Event Delegate Handle, class UObject* __WorldContext); // [0x61d2f50] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Util/BPFL_EventFunctions.BPFL_EventFunctions_C.LocallyDispatchEvent
	// void LocallyDispatchEvent(FGameplayTag gameEventType, class ADBDPlayer* Instigator, class AActor* Target, float Custom Value, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Util/BPFL_EventFunctions.BPFL_EventFunctions_C.RemotelyDispatchEvent
	// void RemotelyDispatchEvent(FGameplayTag gameEventType, class ADBDPlayer* Instigator, class AActor* Target, float Custom Value, class UObject* __WorldContext); // [0x61d2f50] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Util/BPFL_EventFunctions.BPFL_EventFunctions_C.RegisterEventListener
	// void RegisterEventListener(FDelegateProperty Game Event Delegate, FGameplayTag Filter, class UObject* __WorldContext, FGameEventDispatcherHandleBP& GameEventDispatcherHandle); // [0x61d2f50] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Blueprints/GameplayElements/Player/BPNearestOutsideMapBoundsLocator.BPNearestOutsideMapBoundsLocator_C
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UBPNearestOutsideMapBoundsLocator_C : public UNearestOutsideMapBoundsLocator
{ 
public:
};

/// Class /Game/Blueprints/GameplayElements/Lighting/LightingInterface.LightingInterface_C
/// Size: 0x0000 (0x000030 - 0x000030)
class ULightingInterface_C : public UInterface
{ 
public:


	/// Functions
	// Function /Game/Blueprints/GameplayElements/Lighting/LightingInterface.LightingInterface_C.GetDetectionZoneIntensity
	// void GetDetectionZoneIntensity(TEnumAsByte<LightingInterfaceEnum>& BP Type, float& DetectionZoneCylinderIntensityOverride, float& DetectionZoneDecalIntensityOverride); // [0x61d2f50] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/GameplayElements/Lighting/LightingInterface.LightingInterface_C.GetCondemnedStatusVignetteIntensity
	// void GetCondemnedStatusVignetteIntensity(TEnumAsByte<LightingInterfaceEnum>& BP Type, float& CondemnedStatusIntensityOverride); // [0x61d2f50] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/GameplayElements/Lighting/LightingInterface.LightingInterface_C.SetPostOverride
	// void SetPostOverride(FPostProcessSettings PostSettings, class UPostProcessComponent* postProcess);                    // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/GameplayElements/Lighting/LightingInterface.LightingInterface_C.GetLightingPost
	// void GetLightingPost(TArray<UPostProcessComponent*>& postProcess, TEnumAsByte<LightingInterfaceEnum>& BP Type);       // [0x61d2f50] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/GameplayElements/Lighting/LightingInterface.LightingInterface_C.GetBasementPost
	// void GetBasementPost(TEnumAsByte<LightingInterfaceEnum>& BP Type, FDBDPerPlatformFloat& Override);                    // [0x61d2f50] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Blueprints/GameplayElements/Item/K27Power/AfterImage/BP_AfterImageComponent.BP_AfterImageComponent_C
/// Size: 0x0020 (0x000188 - 0x0001A8)
class UBP_AfterImageComponent_C : public UOnryoAfterImageComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0188   (0x0008)  
	TArray<class ABP_Effect_K27_AfterImage_01_C*>      AfterImages;                                                // 0x0190   (0x0010)  
	int32_t                                            PassivePhaseWalkHuskCurrentIndex;                           // 0x01A0   (0x0004)  
	int32_t                                            AmountOfHusksToSpawn;                                       // 0x01A4   (0x0004)  


	/// Functions
	// Function /Game/Blueprints/GameplayElements/Item/K27Power/AfterImage/BP_AfterImageComponent.BP_AfterImageComponent_C.InOtherWorld
	// void InOtherWorld(bool& InPhysicalWorld);                                                                             // [0x61d2f50] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/GameplayElements/Item/K27Power/AfterImage/BP_AfterImageComponent.BP_AfterImageComponent_C.GetRandomLocationNearKillerMesh
	// void GetRandomLocationNearKillerMesh(FTransform& Transform);                                                          // [0x61d2f50] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Blueprints/GameplayElements/Item/K27Power/AfterImage/BP_AfterImageComponent.BP_AfterImageComponent_C.SpawnAfterImage
	// void SpawnAfterImage(FTransform& huskTransform, float opacityValue, float speedValue);                                // [0x61d2f50] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/GameplayElements/Item/K27Power/AfterImage/BP_AfterImageComponent.BP_AfterImageComponent_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/GameplayElements/Item/K27Power/AfterImage/BP_AfterImageComponent.BP_AfterImageComponent_C.AfterImagesSpawningLoop
	// void AfterImagesSpawningLoop();                                                                                       // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/GameplayElements/Item/K27Power/AfterImage/BP_AfterImageComponent.BP_AfterImageComponent_C.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/GameplayElements/Item/K27Power/AfterImage/BP_AfterImageComponent.BP_AfterImageComponent_C.ShouldShowAfterImageChanged
	// void ShouldShowAfterImageChanged(bool shouldBeVisible);                                                               // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/GameplayElements/Item/K27Power/AfterImage/BP_AfterImageComponent.BP_AfterImageComponent_C.UpdateCustomization
	// void UpdateCustomization();                                                                                           // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/GameplayElements/Item/K27Power/AfterImage/BP_AfterImageComponent.BP_AfterImageComponent_C.ExecuteUbergraph_BP_AfterImageComponent
	// void ExecuteUbergraph_BP_AfterImageComponent(int32_t EntryPoint);                                                     // [0x61d2f50] Final|HasDefaults    
};

/// Class /Game/Blueprints/GameplayElements/Entity/CamperTrackers/BP_ExposerCrow.BP_ExposerCrow_C
/// Size: 0x0051 (0x000260 - 0x0002B1)
class ABP_ExposerCrow_C : public ACamperExposerInstance
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0260   (0x0008)  
	class UStaticMeshComponent*                        SM_VAT_Crow_Iddle;                                          // 0x0268   (0x0008)  
	class USceneComponent*                             Crow_Position;                                              // 0x0270   (0x0008)  
	class UMaterialHelper*                             MaterialHelper;                                             // 0x0278   (0x0008)  
	class UAkComponent*                                Ak_Audio_ExposerCrow;                                       // 0x0280   (0x0008)  
	class UExposerCirclingComponent*                   ExposerCircling;                                            // 0x0288   (0x0008)  
	float                                              Timeline_1_Fade_BB8CD443452045F03CD8739C3DA7A950;           // 0x0290   (0x0004)  
	SDK_UNDEFINED(1,3711) /* TEnumAsByte<ETimelineDirection> */ __um(Timeline_1__Direction_BB8CD443452045F03CD8739C3DA7A950); // 0x0294   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0295   (0x0003)  MISSED
	class UTimelineComponent*                          Timeline;                                                   // 0x0298   (0x0008)  
	float                                              Crow_Dissolve_Fade_48F0A1774BFA01C45285CAA28EE10ABC;        // 0x02A0   (0x0004)  
	SDK_UNDEFINED(1,3712) /* TEnumAsByte<ETimelineDirection> */ __um(Crow_Dissolve__Direction_48F0A1774BFA01C45285CAA28EE10ABC); // 0x02A4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x02A5   (0x0003)  MISSED
	class UTimelineComponent*                          Crow_Dissolve;                                              // 0x02A8   (0x0008)  
	bool                                               ShouldTakeoff;                                              // 0x02B0   (0x0001)  


	/// Functions
	// Function /Game/Blueprints/GameplayElements/Entity/CamperTrackers/BP_ExposerCrow.BP_ExposerCrow_C.SetTunableValues
	// void SetTunableValues();                                                                                              // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/GameplayElements/Entity/CamperTrackers/BP_ExposerCrow.BP_ExposerCrow_C.Crow Dissolve__FinishedFunc
	// void Crow Dissolve__FinishedFunc();                                                                                   // [0x61d2f50] BlueprintEvent       
	// Function /Game/Blueprints/GameplayElements/Entity/CamperTrackers/BP_ExposerCrow.BP_ExposerCrow_C.Crow Dissolve__UpdateFunc
	// void Crow Dissolve__UpdateFunc();                                                                                     // [0x61d2f50] BlueprintEvent       
	// Function /Game/Blueprints/GameplayElements/Entity/CamperTrackers/BP_ExposerCrow.BP_ExposerCrow_C.Timeline_1__FinishedFunc
	// void Timeline_1__FinishedFunc();                                                                                      // [0x61d2f50] BlueprintEvent       
	// Function /Game/Blueprints/GameplayElements/Entity/CamperTrackers/BP_ExposerCrow.BP_ExposerCrow_C.Timeline_1__UpdateFunc
	// void Timeline_1__UpdateFunc();                                                                                        // [0x61d2f50] BlueprintEvent       
	// Function /Game/Blueprints/GameplayElements/Entity/CamperTrackers/BP_ExposerCrow.BP_ExposerCrow_C.StartExitSequence
	// void StartExitSequence(bool withRandomDelay);                                                                         // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/GameplayElements/Entity/CamperTrackers/BP_ExposerCrow.BP_ExposerCrow_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/GameplayElements/Entity/CamperTrackers/BP_ExposerCrow.BP_ExposerCrow_C.StartSpawnSequence
	// void StartSpawnSequence(bool withRandomDelay);                                                                        // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/GameplayElements/Entity/CamperTrackers/BP_ExposerCrow.BP_ExposerCrow_C.SetIsInteriorBP
	// void SetIsInteriorBP(bool interior);                                                                                  // [0x61d2f50] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/GameplayElements/Entity/CamperTrackers/BP_ExposerCrow.BP_ExposerCrow_C.CustomEvent
	// void CustomEvent(EAkResult Result);                                                                                   // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/GameplayElements/Entity/CamperTrackers/BP_ExposerCrow.BP_ExposerCrow_C.ExecuteUbergraph_BP_ExposerCrow
	// void ExecuteUbergraph_BP_ExposerCrow(int32_t EntryPoint);                                                             // [0x61d2f50] Final|HasDefaults    
};

/// Class /Game/Blueprints/Util/BP_Mesh2SoundPlayer.BP_Mesh2SoundPlayer_C
/// Size: 0x0000 (0x000180 - 0x000180)
class UBP_Mesh2SoundPlayer_C : public UDBD_SoundClipUtil
{ 
public:
};

/// Class /Game/Blueprints/GameplayElements/EndGame/EndGameEffectsComponent.EndGameEffectsComponent_C
/// Size: 0x0090 (0x0000E0 - 0x000170)
class UEndGameEffectsComponent_C : public UEndGameEffectsComponent
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x00E0   (0x0008)  
	FGameEventDispatcherHandleBP                       ReminderHandler;                                            // 0x00E8   (0x0020)  
	FGameEventDispatcherHandleBP                       endGameOverHandler;                                         // 0x0108   (0x0020)  
	class UCurveFloat*                                 EndGameGroundPulsing;                                       // 0x0128   (0x0008)  
	class UCurveFloat*                                 EndGameGroundIntensity;                                     // 0x0130   (0x0008)  
	class UParticleSystemComponent*                    P_EndGame_Embers;                                           // 0x0138   (0x0008)  
	class UCurveFloat*                                 EndGameEmberRate;                                           // 0x0140   (0x0008)  
	FGameEventDispatcherHandleBP                       timeDilationChangedHandler;                                 // 0x0148   (0x0020)  
	class UCameraShakeBase*                            CurrentCameraShakeRef;                                      // 0x0168   (0x0008)  


	/// Functions
	// Function /Game/Blueprints/GameplayElements/EndGame/EndGameEffectsComponent.EndGameEffectsComponent_C.StopCameraShake
	// void StopCameraShake();                                                                                               // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/GameplayElements/EndGame/EndGameEffectsComponent.EndGameEffectsComponent_C.PlayCameraShake
	// void PlayCameraShake(class UClass* CameraShake);                                                                      // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/GameplayElements/EndGame/EndGameEffectsComponent.EndGameEffectsComponent_C.GetDBDPlayer
	// void GetDBDPlayer(class ADBDPlayer*& Player);                                                                         // [0x61d2f50] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Blueprints/GameplayElements/EndGame/EndGameEffectsComponent.EndGameEffectsComponent_C.OnTimeDilationChanged
	// void OnTimeDilationChanged(FGameplayTag gameEventType, FGameEventData& GameEventData);                                // [0x61d2f50] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/GameplayElements/EndGame/EndGameEffectsComponent.EndGameEffectsComponent_C.EndGameOver
	// void EndGameOver(FGameplayTag gameEventType, FGameEventData& GameEventData);                                          // [0x61d2f50] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/GameplayElements/EndGame/EndGameEffectsComponent.EndGameEffectsComponent_C.StartEndGameEffects
	// void StartEndGameEffects(bool JustStarted);                                                                           // [0x61d2f50] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/GameplayElements/EndGame/EndGameEffectsComponent.EndGameEffectsComponent_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                 // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/GameplayElements/EndGame/EndGameEffectsComponent.EndGameEffectsComponent_C.ReminderEffect
	// void ReminderEffect(FGameplayTag gameEventType, FGameEventData& GameEventData);                                       // [0x61d2f50] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/GameplayElements/EndGame/EndGameEffectsComponent.EndGameEffectsComponent_C.OnLocallyObservedChanged
	// void OnLocallyObservedChanged(class ADBDPlayer* Player);                                                              // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/GameplayElements/EndGame/EndGameEffectsComponent.EndGameEffectsComponent_C.RegisterLocallyObservedEvents
	// void RegisterLocallyObservedEvents();                                                                                 // [0x61d2f50] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/GameplayElements/EndGame/EndGameEffectsComponent.EndGameEffectsComponent_C.UnregisterLocallyObservedEvents
	// void UnregisterLocallyObservedEvents();                                                                               // [0x61d2f50] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/GameplayElements/EndGame/EndGameEffectsComponent.EndGameEffectsComponent_C.StartUpdateTimer
	// void StartUpdateTimer(FGameplayTag gameEventType, FGameEventData& GameEventData);                                     // [0x61d2f50] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/GameplayElements/EndGame/EndGameEffectsComponent.EndGameEffectsComponent_C.ExecuteUbergraph_EndGameEffectsComponent
	// void ExecuteUbergraph_EndGameEffectsComponent(int32_t EntryPoint);                                                    // [0x61d2f50] Final|HasDefaults    
};

/// Class /Game/Blueprints/GameplayElements/Item/K28Power/Animation/BP_K28CustomizationAnimationSelector.BP_K28CustomizationAnimationSelector_C
/// Size: 0x0000 (0x000098 - 0x000098)
class UBP_K28CustomizationAnimationSelector_C : public UCustomizationAnimationSelector
{ 
public:
};

/// Class /Game/Blueprints/Util/BPFL_CustomizationFunctions.BPFL_CustomizationFunctions_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UBPFL_CustomizationFunctions_C : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Game/Blueprints/Util/BPFL_CustomizationFunctions.BPFL_CustomizationFunctions_C.GetOwningSkeletalMesh
	// void GetOwningSkeletalMesh(class UAnimInstance* Anim Instance, class UObject* __WorldContext, class USkeletalMeshComponent*& Skeletal Mesh Component); // [0x61d2f50] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

