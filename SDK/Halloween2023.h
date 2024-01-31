
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: DBDBots
/// dependency: DBDGameplay
/// dependency: DBDInteraction
/// dependency: DBDSharedTypes
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: SpecialEventUtilities

/// Enum /Script/Halloween2023.EHalloweenWorldType
/// Size: 0x03
enum class EHalloweenWorldType : uint8_t
{
	EHalloweenWorldType__Surface                                                     = 0,
	EHalloweenWorldType__Void                                                        = 1,
	EHalloweenWorldType__EHalloweenWorldType_MAX                                     = 2
};

/// Class /Script/Halloween2023.AISkill_FindInteractable_UnstableRift
/// Size: 0x0030 (0x000198 - 0x0001C8)
class UAISkill_FindInteractable_UnstableRift : public UAISkill_FindInteractable
{ 
public:
	FAITunableParameter                                MaxVoidEnergyWeight;                                        // 0x0198   (0x0010)  
	FAITunableParameter                                MaxDistanceWeight;                                          // 0x01A8   (0x0010)  
	FAITunableParameter                                RiftDistanceToReachMaxDistanceWeight;                       // 0x01B8   (0x0010)  
};

/// Class /Script/Halloween2023.AISkill_FindInteractable_VoidZoneTeleporter
/// Size: 0x0000 (0x000198 - 0x000198)
class UAISkill_FindInteractable_VoidZoneTeleporter : public UAISkill_FindInteractable
{ 
public:
};

/// Class /Script/Halloween2023.AISkill_Find_StandardWorldHaunt
/// Size: 0x0030 (0x000180 - 0x0001B0)
class UAISkill_Find_StandardWorldHaunt : public UAISkill_Find
{ 
public:
	FName                                              BBIsFleeing;                                                // 0x0180   (0x000C)  
	FAITunableParameter                                MaxDistanceWeight;                                          // 0x018C   (0x0010)  
	FAITunableParameter                                HauntDistanceToReachMaxDistanceWeightIfFleeing;             // 0x019C   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x01AC   (0x0004)  MISSED
};

/// Class /Script/Halloween2023.AISkill_Find_VoidWorldHaunt
/// Size: 0x0000 (0x000180 - 0x000180)
class UAISkill_Find_VoidWorldHaunt : public UAISkill_Find
{ 
public:
};

/// Class /Script/Halloween2023.CaptureVoidWorldHauntInteraction
/// Size: 0x0030 (0x000790 - 0x0007C0)
class UCaptureVoidWorldHauntInteraction : public UChargeableInteractionDefinition
{ 
public:
	SDK_UNDEFINED(24,5059) /* FText */                 __um(_standardInteractionString);                           // 0x0790   (0x0018)  
	SDK_UNDEFINED(24,5060) /* FText */                 __um(_contestedInteractionString);                          // 0x07A8   (0x0018)  
};

/// Class /Script/Halloween2023.FloatingVoidEnergyOrb
/// Size: 0x0100 (0x0000B8 - 0x0001B8)
class UFloatingVoidEnergyOrb : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,5061) /* FMulticastInlineDelegate */ __um(Cosmetic_OnOrbStartMoving);                         // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,5062) /* FMulticastInlineDelegate */ __um(Cosmetic_OnOrbReachPlayer);                         // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData00_5[0x14];                                      // 0x00D8   (0x0014)  MISSED
	FName                                              _characterBoneName;                                         // 0x00EC   (0x000C)  
	FDBDTunableRowHandle                               _travelTimeToPlayer;                                        // 0x00F8   (0x0028)  
	FDBDTunableRowHandle                               _voidEnergyToGrantPlayer;                                   // 0x0120   (0x0028)  
	FDBDTunableRowHandle                               _trackerRadius;                                             // 0x0148   (0x0028)  
	unsigned char                                      UnknownData01_6[0x48];                                      // 0x0170   (0x0048)  MISSED


	/// Functions
	// Function /Script/Halloween2023.FloatingVoidEnergyOrb.OnPlayerInteract__DelegateSignature
	// void OnPlayerInteract__DelegateSignature(class ADBDPlayer* Player);                                                   // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/Halloween2023.FloatingVoidEnergyOrb.Multicast_StartTravelToPlayer
	// void Multicast_StartTravelToPlayer(class ADBDPlayer* playerToTravelTo);                                               // [0x505fd60] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/Halloween2023.FloatingVoidEnergyOrb.Multicast_OnReachedPlayer
	// void Multicast_OnReachedPlayer();                                                                                     // [0x4dd4860] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/Halloween2023.FloatingVoidEnergyOrb.Authority_OnTravelTimeEnd
	// void Authority_OnTravelTimeEnd();                                                                                     // [0x59c0a90] Final|Native|Private 
	// Function /Script/Halloween2023.FloatingVoidEnergyOrb.Authority_OnRespawn
	// void Authority_OnRespawn();                                                                                           // [0x59c0a70] Final|Native|Private 
	// Function /Script/Halloween2023.FloatingVoidEnergyOrb.Authority_OnPlayerExitZone
	// void Authority_OnPlayerExitZone(class ADBDPlayer* Player);                                                            // [0x59c09e0] Final|Native|Private 
	// Function /Script/Halloween2023.FloatingVoidEnergyOrb.Authority_OnPlayerEnterZone
	// void Authority_OnPlayerEnterZone(class ADBDPlayer* playerToTravelTo);                                                 // [0x59c0950] Final|Native|Private 
	// Function /Script/Halloween2023.FloatingVoidEnergyOrb.Authority_OnDespawn
	// void Authority_OnDespawn();                                                                                           // [0x59c0930] Final|Native|Private 
};

/// Class /Script/Halloween2023.Halloween2023EventComponent
/// Size: 0x0258 (0x0000B8 - 0x000310)
class UHalloween2023EventComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x00B8   (0x0048)  MISSED
	float                                              _durationToKeepVoidZoneOpenForMori;                         // 0x0100   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0104   (0x0004)  MISSED
	class UClass*                                      _voidWorldTeleporterBP;                                     // 0x0108   (0x0008)  
	class UClass*                                      _voidWorldHauntBP;                                          // 0x0110   (0x0008)  
	class UClass*                                      _stunInteractionClass;                                      // 0x0118   (0x0008)  
	class UClass*                                      _voidZonePlayerComponentClass;                              // 0x0120   (0x0008)  
	unsigned char                                      UnknownData02_5[0x20];                                      // 0x0128   (0x0020)  MISSED
	FDBDTunableRowHandle                               _timeRiftsAreOpen;                                          // 0x0148   (0x0028)  
	FDBDTunableRowHandle                               _defaultTimeBeforeRiftsOpen;                                // 0x0170   (0x0028)  
	FDBDTunableRowHandle                               _warningTimeBeforeRiftsClose;                               // 0x0198   (0x0028)  
	FDBDTunableRowHandle                               _voidEnergyNeededToTriggerRift;                             // 0x01C0   (0x0028)  
	TArray<class AUnstableRift*>                       _unstableRifts;                                             // 0x01E8   (0x0010)  
	TArray<class ADBDPlayer*>                          _playersInVoid;                                             // 0x01F8   (0x0010)  
	TArray<class ADBDPlayer*>                          _previousPlayersInVoidZone;                                 // 0x0208   (0x0010)  
	class UClass*                                      _voidWorldHauntInteractionClass;                            // 0x0218   (0x0008)  
	TArray<class UClass*>                              _statusEffectClassesToApplyToKillersOnEnterVoid;            // 0x0220   (0x0010)  
	TArray<class UClass*>                              _statusEffectClassesToApplyToSurvivorsOnEnterVoid;          // 0x0230   (0x0010)  
	FVector                                            _voidZoneLightingLocation;                                  // 0x0240   (0x000C)  
	unsigned char                                      UnknownData03_5[0xB4];                                      // 0x024C   (0x00B4)  MISSED
	class ULocalPlayerTrackerComponent*                _localPlayerTracker;                                        // 0x0300   (0x0008)  
	class UDebugTimerLogComponent*                     _debugLogTimer;                                             // 0x0308   (0x0008)  


	/// Functions
	// Function /Script/Halloween2023.Halloween2023EventComponent.PlayerDreamStateChanged
	// void PlayerDreamStateChanged(bool IsInDreamworld, bool locallyObservedChanged);                                       // [0x59c1a30] Final|Native|Private 
	// Function /Script/Halloween2023.Halloween2023EventComponent.OnVoidZoneAboutToCloseWarning
	// void OnVoidZoneAboutToCloseWarning();                                                                                 // [0x59c1a10] Final|Native|Private 
	// Function /Script/Halloween2023.Halloween2023EventComponent.OnRep_PlayersInVoid
	// void OnRep_PlayersInVoid();                                                                                           // [0x59c19f0] Final|Native|Private 
	// Function /Script/Halloween2023.Halloween2023EventComponent.OnPlayerAdded
	// void OnPlayerAdded(class ADBDPlayer* Player);                                                                         // [0x59c1960] Final|Native|Private 
	// Function /Script/Halloween2023.Halloween2023EventComponent.OnLocallyObservedChanged
	// void OnLocallyObservedChanged();                                                                                      // [0x59c1940] Final|Native|Protected 
	// Function /Script/Halloween2023.Halloween2023EventComponent.Multicast_OnVoidZoneOpen
	// void Multicast_OnVoidZoneOpen();                                                                                      // [0x4d82970] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/Halloween2023.Halloween2023EventComponent.Multicast_OnVoidZoneClose
	// void Multicast_OnVoidZoneClose();                                                                                     // [0x4dd4860] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/Halloween2023.Halloween2023EventComponent.Multicast_OnMoriBegin
	// void Multicast_OnMoriBegin();                                                                                         // [0x4dd4880] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/Halloween2023.Halloween2023EventComponent.Cosmetic_OnVoidZoneOpen
	// void Cosmetic_OnVoidZoneOpen();                                                                                       // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Halloween2023.Halloween2023EventComponent.Cosmetic_OnVoidZoneClose
	// void Cosmetic_OnVoidZoneClose();                                                                                      // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Halloween2023.Halloween2023EventComponent.Cosmetic_OnVoidZoneAboutToClose
	// void Cosmetic_OnVoidZoneAboutToClose();                                                                               // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Halloween2023.Halloween2023EventComponent.Cosmetic_OnPlayerTeleported
	// void Cosmetic_OnPlayerTeleported(class ADBDPlayer* playerTeleported, bool teleportIntoVoid);                          // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Halloween2023.Halloween2023EventComponent.Cosmetic_OnMoriStartedInVoidZone
	// void Cosmetic_OnMoriStartedInVoidZone();                                                                              // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Halloween2023.Halloween2023EventComponent.Authority_TurnAllRiftsIntoTeleporters
	// void Authority_TurnAllRiftsIntoTeleporters(bool turnOnTeleporters);                                                   // [0x59c18b0] Final|Native|Public  
	// Function /Script/Halloween2023.Halloween2023EventComponent.Authority_PlayerTeleportedOutOfVoidZone
	// void Authority_PlayerTeleportedOutOfVoidZone(class ADBDPlayer* playerTeleported, class ULinkedTeleporterComponent* teleporterUsed); // [0x59c17e0] Final|Native|Public  
	// Function /Script/Halloween2023.Halloween2023EventComponent.Authority_PlayerTeleportedInToVoidZone
	// void Authority_PlayerTeleportedInToVoidZone(class ADBDPlayer* playerTeleported, class ULinkedTeleporterComponent* teleporterUsed); // [0x59c1710] Final|Native|Private 
	// Function /Script/Halloween2023.Halloween2023EventComponent.Authority_PlayerPreTeleportOutOfVoidZone
	// void Authority_PlayerPreTeleportOutOfVoidZone(class ADBDPlayer* playerTeleported);                                    // [0x59c1680] Final|Native|Public  
	// Function /Script/Halloween2023.Halloween2023EventComponent.Authority_PlayerPreTeleportInToVoidZone
	// void Authority_PlayerPreTeleportInToVoidZone(class ADBDPlayer* playerTeleported);                                     // [0x59c15f0] Final|Native|Private 
	// Function /Script/Halloween2023.Halloween2023EventComponent.Authority_OpenVoidZone
	// void Authority_OpenVoidZone(bool closeVoidAfterTimer);                                                                // [0x59c1560] Final|Native|Public  
	// Function /Script/Halloween2023.Halloween2023EventComponent.Authority_OnVoidEnergyDeposited
	// void Authority_OnVoidEnergyDeposited(int32_t amountDeposited, EVoidEnergyChangeReason changeReason);                  // [0x59c1490] Final|Native|Private 
	// Function /Script/Halloween2023.Halloween2023EventComponent.Authority_OnLevelReadyToPlay
	// void Authority_OnLevelReadyToPlay();                                                                                  // [0x59c1470] Final|Native|Private 
	// Function /Script/Halloween2023.Halloween2023EventComponent.Authority_OnComponentsAdded
	// void Authority_OnComponentsAdded();                                                                                   // [0x59c1450] Final|Native|Private 
	// Function /Script/Halloween2023.Halloween2023EventComponent.Authority_ForceTeleportPlayersOutOfVoidZone
	// void Authority_ForceTeleportPlayersOutOfVoidZone();                                                                   // [0x59c1430] Final|Native|Private 
	// Function /Script/Halloween2023.Halloween2023EventComponent.Authority_CloseVoidZone
	// void Authority_CloseVoidZone();                                                                                       // [0x59c1410] Final|Native|Public  
};

/// Class /Script/Halloween2023.Halloween2023TeleporterInteraction
/// Size: 0x0000 (0x000790 - 0x000790)
class UHalloween2023TeleporterInteraction : public UChargeableInteractionDefinition
{ 
public:
};

/// Class /Script/Halloween2023.Halloween2023VoidHookSurvivorDefinition
/// Size: 0x0060 (0x0007D0 - 0x000830)
class UHalloween2023VoidHookSurvivorDefinition : public UHookSurvivorDefinition
{ 
public:
	SDK_UNDEFINED(16,5063) /* FMulticastInlineDelegate */ __um(Cosmetic_OnPlayerHooked);                           // 0x07D0   (0x0010)  
	SDK_UNDEFINED(16,5064) /* FMulticastInlineDelegate */ __um(Cosmetic_OnPlayerTeleported);                       // 0x07E0   (0x0010)  
	float                                              _animationDuration;                                         // 0x07F0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x3C];                                      // 0x07F4   (0x003C)  MISSED


	/// Functions
	// Function /Script/Halloween2023.Halloween2023VoidHookSurvivorDefinition.OnHookEvent__DelegateSignature
	// void OnHookEvent__DelegateSignature(class ACamperPlayer* Survivor);                                                   // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/Halloween2023.Halloween2023VoidHookSurvivorDefinition.Multicast_PlacePlayerOnHook
	// void Multicast_PlacePlayerOnHook(class ACamperPlayer* survivorBeingHooked);                                           // [0x59c2250] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/Halloween2023.Halloween2023VoidHookSurvivorDefinition.Multicast_OnPlayerMovedToStandardHook
	// void Multicast_OnPlayerMovedToStandardHook(class ACamperPlayer* Player, class AMeatHook* closestMeatHook);            // [0x59c2180] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/Halloween2023.Halloween2023VoidHookSurvivorDefinition.Authority_SetPlayerOnStandardHook
	// void Authority_SetPlayerOnStandardHook(class ACamperPlayer* Player);                                                  // [0x59c20f0] Final|Native|Private 
};

/// Class /Script/Halloween2023.Halloween2023VoidTile
/// Size: 0x0020 (0x0003D0 - 0x0003F0)
class AHalloween2023VoidTile : public ATile
{ 
public:
	TArray<class USceneComponent*>                     _teleporterSpawnLocations;                                  // 0x03D0   (0x0010)  
	TArray<class USceneComponent*>                     _hauntSpawnPoints;                                          // 0x03E0   (0x0010)  


	/// Functions
	// Function /Script/Halloween2023.Halloween2023VoidTile.Cosmetic_OnVoidZoneAboutToClose
	// void Cosmetic_OnVoidZoneAboutToClose();                                                                               // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
};

/// Class /Script/Halloween2023.HalloweenHauntAnimInstance
/// Size: 0x0040 (0x0002C0 - 0x000300)
class UHalloweenHauntAnimInstance : public UAnimInstance
{ 
public:
	bool                                               _hauntChangingVoidEnergy;                                   // 0x02C0   (0x0001)  
	bool                                               _hauntTrapTriggered;                                        // 0x02C1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x02C2   (0x0002)  MISSED
	float                                              _timeUntilAbsorbAnimationEnds;                              // 0x02C4   (0x0004)  
	float                                              _timeUntilTrapAnimationEnds;                                // 0x02C8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x34];                                      // 0x02CC   (0x0034)  MISSED


	/// Functions
	// Function /Script/Halloween2023.HalloweenHauntAnimInstance.VoidEnergyChange
	// void VoidEnergyChange();                                                                                              // [0x59c27c0] Final|Native|Private 
	// Function /Script/Halloween2023.HalloweenHauntAnimInstance.TrapAnimationEnd
	// void TrapAnimationEnd();                                                                                              // [0x59c27a0] Final|Native|Private 
	// Function /Script/Halloween2023.HalloweenHauntAnimInstance.PlayerTriggeredTrap
	// void PlayerTriggeredTrap();                                                                                           // [0x59c2780] Final|Native|Private 
	// Function /Script/Halloween2023.HalloweenHauntAnimInstance.EndVoidEnergyChange
	// void EndVoidEnergyChange();                                                                                           // [0x59c2760] Final|Native|Private 
};

/// Class /Script/Halloween2023.HalloweenHauntStunInteraction
/// Size: 0x0020 (0x000650 - 0x000670)
class UHalloweenHauntStunInteraction : public UGenericStunInteractionDefinition
{ 
public:
	FDBDTunableRowHandle                               _stunDuration;                                              // 0x0648   (0x0028)  
};

/// Class /Script/Halloween2023.HauntComponent
/// Size: 0x0058 (0x0000B8 - 0x000110)
class UHauntComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,5065) /* FMulticastInlineDelegate */ __um(Cosmetic_PlayerEnterHauntRadius);                   // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,5066) /* FMulticastInlineDelegate */ __um(Cosmetic_PlayerLeavesHauntRadius);                  // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,5067) /* FMulticastInlineDelegate */ __um(Cosmetic_EnableHauntForInteraction);                // 0x00D8   (0x0010)  
	EPlayerRole                                        _winningPlayerRole;                                         // 0x00E8   (0x0001)  
	bool                                               _isInteractable;                                            // 0x00E9   (0x0001)  
	EOfferingEffectType                                _offeringEffectTypeNeeded;                                  // 0x00EA   (0x0001)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x00EB   (0x0005)  MISSED
	TArray<FGameplayTag>                               _stateTagsPreventingInteraction;                            // 0x00F0   (0x0010)  
	class UPlayersInZoneTracker*                       _slasherInZoneTracker;                                      // 0x0100   (0x0008)  
	class UPlayersInZoneTracker*                       _survivorsInZoneTracker;                                    // 0x0108   (0x0008)  


	/// Functions
	// Function /Script/Halloween2023.HauntComponent.OnRep_IsInteractable
	// void OnRep_IsInteractable();                                                                                          // [0x59c2ef0] Final|Native|Protected 
	// Function /Script/Halloween2023.HauntComponent.OnPlayerRoleEvent__DelegateSignature
	// void OnPlayerRoleEvent__DelegateSignature(EPlayerRole PlayerRole);                                                    // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/Halloween2023.HauntComponent.OnPlayerLeftZone
	// void OnPlayerLeftZone(class ADBDPlayer* Player);                                                                      // [0x59c2e60] Native|Protected     
	// Function /Script/Halloween2023.HauntComponent.OnPlayerInteract__DelegateSignature
	// void OnPlayerInteract__DelegateSignature(class ADBDPlayer* Player);                                                   // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/Halloween2023.HauntComponent.OnPlayerEnterZone
	// void OnPlayerEnterZone(class ADBDPlayer* Player);                                                                     // [0x59c2dd0] Native|Protected     
	// Function /Script/Halloween2023.HauntComponent.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x4dd4840] Native|Protected     
	// Function /Script/Halloween2023.HauntComponent.OnHauntInteractionChange__DelegateSignature
	// void OnHauntInteractionChange__DelegateSignature(EPlayerRole PlayerRole, bool IsInteractable);                        // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/Halloween2023.HauntComponent.OnHauntEvent__DelegateSignature
	// void OnHauntEvent__DelegateSignature();                                                                               // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/Halloween2023.HauntComponent.OnEventComponentsCreated
	// void OnEventComponentsCreated();                                                                                      // [0x584f630] Native|Protected     
	// Function /Script/Halloween2023.HauntComponent.GetHalloweenWorldType
	// EHalloweenWorldType GetHalloweenWorldType();                                                                          // [0x59c2da0] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Halloween2023.HauntOutlineStrategy
/// Size: 0x0018 (0x000158 - 0x000170)
class UHauntOutlineStrategy : public USourceBasedOutlineUpdateStrategy
{ 
public:
	FLinearColor                                       _displayColor;                                              // 0x0158   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0168   (0x0008)  MISSED
};

/// Class /Script/Halloween2023.LinkedTeleporterComponent
/// Size: 0x0140 (0x0000B8 - 0x0001F8)
class ULinkedTeleporterComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x00B8   (0x0030)  MISSED
	SDK_UNDEFINED(16,5068) /* FMulticastInlineDelegate */ __um(Cosmetic_OnVoidZoneAboutToClose);                   // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,5069) /* FMulticastInlineDelegate */ __um(Cosmetic_OnTeleporterEnabled);                      // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,5070) /* FMulticastInlineDelegate */ __um(Cosmetic_OnPlayerTeleported);                       // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,5071) /* FMulticastInlineDelegate */ __um(Cosmetic_OnPlayerCooldownOver);                     // 0x0118   (0x0010)  
	class ULinkedTeleporterComponent*                  _linkedTeleporter;                                          // 0x0128   (0x0008)  
	unsigned char                                      UnknownData01_5[0x60];                                      // 0x0130   (0x0060)  MISSED
	FDBDTunableRowHandle                               _teleportationCooldownTime;                                 // 0x0190   (0x0028)  
	TArray<FGameplayTag>                               _survivorTagsPreventingTeleport;                            // 0x01B8   (0x0010)  
	TArray<FGameplayTag>                               _killerTagsPreventingTeleport;                              // 0x01C8   (0x0010)  
	bool                                               _isAllowedToTeleport;                                       // 0x01D8   (0x0001)  
	bool                                               _forceCamperDropSpecialItemOnTeleport;                      // 0x01D9   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1E];                                      // 0x01DA   (0x001E)  MISSED


	/// Functions
	// Function /Script/Halloween2023.LinkedTeleporterComponent.OnVoidZoneEvent__DelegateSignature
	// void OnVoidZoneEvent__DelegateSignature();                                                                            // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/Halloween2023.LinkedTeleporterComponent.OnVoidZoneAboutToClose
	// void OnVoidZoneAboutToClose();                                                                                        // [0x59c3830] Final|Native|Private 
	// Function /Script/Halloween2023.LinkedTeleporterComponent.OnTimerEnd
	// void OnTimerEnd(class ADBDPlayer* Player);                                                                            // [0x59c37a0] Final|Native|Private 
	// Function /Script/Halloween2023.LinkedTeleporterComponent.OnTeleportInteractWithPlayer__DelegateSignature
	// void OnTeleportInteractWithPlayer__DelegateSignature(class ADBDPlayer* Player);                                       // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/Halloween2023.LinkedTeleporterComponent.OnTeleporterTriggered
	// void OnTeleporterTriggered(FGameplayTag gameEventType, FGameEventData& GameEventData);                                // [0x59c3690] Final|Native|Private|HasOutParms 
	// Function /Script/Halloween2023.LinkedTeleporterComponent.OnTeleportEnabled__DelegateSignature
	// void OnTeleportEnabled__DelegateSignature(bool IsEnabled);                                                            // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/Halloween2023.LinkedTeleporterComponent.OnRep_IsAllowedToTeleport
	// void OnRep_IsAllowedToTeleport();                                                                                     // [0x59c3670] Final|Native|Private 
	// Function /Script/Halloween2023.LinkedTeleporterComponent.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x59c3650] Final|Native|Protected 
	// Function /Script/Halloween2023.LinkedTeleporterComponent.OnEventComponentsSpawned
	// void OnEventComponentsSpawned();                                                                                      // [0x59c3630] Final|Native|Private 
	// Function /Script/Halloween2023.LinkedTeleporterComponent.Multicast_TeleportPlayer
	// void Multicast_TeleportPlayer(class ADBDPlayer* Player, FVector teleportLocation);                                    // [0x59c3550] Final|Net|NetReliableNative|Event|NetMulticast|Private|HasDefaults 
};

/// Class /Script/Halloween2023.StandardWorldHauntComponent
/// Size: 0x01B0 (0x000110 - 0x0002C0)
class UStandardWorldHauntComponent : public UHauntComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0110   (0x0010)  MISSED
	SDK_UNDEFINED(16,5072) /* FMulticastInlineDelegate */ __um(Cosmetic_OnPlayerTriggerBoon);                      // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,5073) /* FMulticastInlineDelegate */ __um(Cosmetic_OnPlayerTriggerTrap);                      // 0x0130   (0x0010)  
	SDK_UNDEFINED(16,5074) /* FMulticastInlineDelegate */ __um(Cosmetic_OnAutomaticShutDownReached);               // 0x0140   (0x0010)  
	SDK_UNDEFINED(16,5075) /* FMulticastInlineDelegate */ __um(ForceMovePlayerTowardsHaunt);                       // 0x0150   (0x0010)  
	FDBDTunableRowHandle                               _timeAfterVoidZoneCloseBeforeAutomaticShutdown;             // 0x0160   (0x0028)  
	class UClass*                                      _hasteStatusEffectClass;                                    // 0x0188   (0x0008)  
	FDBDTunableRowHandle                               _hasteDuration;                                             // 0x0190   (0x0028)  
	FDBDTunableRowHandle                               _hasteValue;                                                // 0x01B8   (0x0028)  
	class UClass*                                      _hinderedEffectClass;                                       // 0x01E0   (0x0008)  
	FDBDTunableRowHandle                               _hindredDuration;                                           // 0x01E8   (0x0028)  
	FDBDTunableRowHandle                               _hindredValue;                                              // 0x0210   (0x0028)  
	FDBDTunableRowHandle                               _killerStunDuration;                                        // 0x0238   (0x0028)  
	FDBDTunableRowHandle                               _playerTrackerRadius;                                       // 0x0260   (0x0028)  
	class URespawnableComponent*                       _respawnableComponent;                                      // 0x0288   (0x0008)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x0290   (0x0030)  MISSED


	/// Functions
	// Function /Script/Halloween2023.StandardWorldHauntComponent.Multicast_OnAutomaticShutDownReached
	// void Multicast_OnAutomaticShutDownReached();                                                                          // [0x5882360] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/Halloween2023.StandardWorldHauntComponent.Multicast_BlessOrTrapCharacterEnteringZone
	// void Multicast_BlessOrTrapCharacterEnteringZone(class ADBDPlayer* Player, bool isBlessing);                           // [0x59c3b90] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/Halloween2023.StandardWorldHauntComponent.Authority_OnVoidZoneOpened
	// void Authority_OnVoidZoneOpened();                                                                                    // [0x59c3b70] Final|Native|Private 
	// Function /Script/Halloween2023.StandardWorldHauntComponent.Authority_OnVoidZoneClosed
	// void Authority_OnVoidZoneClosed();                                                                                    // [0x59c3b50] Final|Native|Private 
	// Function /Script/Halloween2023.StandardWorldHauntComponent.Authority_OnAutomaticShutDownReached
	// void Authority_OnAutomaticShutDownReached();                                                                          // [0x59c3b30] Final|Native|Private 
};

/// Class /Script/Halloween2023.VoidZoneHauntComponent
/// Size: 0x0480 (0x000110 - 0x000590)
class UVoidZoneHauntComponent : public UHauntComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0110   (0x0020)  MISSED
	SDK_UNDEFINED(16,5076) /* FMulticastInlineDelegate */ __um(Cosmetic_OnHauntContested);                         // 0x0130   (0x0010)  
	SDK_UNDEFINED(16,5077) /* FMulticastInlineDelegate */ __um(Cosmetic_OnHauntWon);                               // 0x0140   (0x0010)  
	SDK_UNDEFINED(16,5078) /* FMulticastInlineDelegate */ __um(Cosmetic_OnVoidZoneOpen);                           // 0x0150   (0x0010)  
	SDK_UNDEFINED(16,5079) /* FMulticastInlineDelegate */ __um(Cosmetic_OnVoidZoneClose);                          // 0x0160   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0170   (0x0008)  MISSED
	FDBDTunableRowHandle                               _voidEnergyToCaptureHaunt;                                  // 0x0178   (0x0028)  
	FDBDTunableRowHandle                               _survivorVoidEnergyPerSecond;                               // 0x01A0   (0x0028)  
	FDBDTunableRowHandle                               _progressDecayTimer;                                        // 0x01C8   (0x0028)  
	FDBDTunableRowHandle                               _initialWaitTimeToCaptureEnergy;                            // 0x01F0   (0x0028)  
	FDBDTunableRowHandle                               _progressDecayAmount;                                       // 0x0218   (0x0028)  
	FDBDTunableRowHandle                               _progressCancelAmount;                                      // 0x0240   (0x0028)  
	FDBDTunableRowHandle                               _slasherVoidEnergyPerSecond;                                // 0x0268   (0x0028)  
	FDBDTunableRowHandle                               _camperRateToTakeVoidEnergy;                                // 0x0290   (0x0028)  
	FDBDTunableRowHandle                               _slasherRateToTakeVoidEnergy;                               // 0x02B8   (0x0028)  
	FDBDTunableRowHandle                               _timeOrbMoves;                                              // 0x02E0   (0x0028)  
	FDBDTunableRowHandle                               _survivorTrackerRadius;                                     // 0x0308   (0x0028)  
	FDBDTunableRowHandle                               _slasherTrackerRadius;                                      // 0x0330   (0x0028)  
	class UClass*                                      _hasteStatusEffectClass;                                    // 0x0358   (0x0008)  
	FDBDTunableRowHandle                               _camperHasteValue;                                          // 0x0360   (0x0028)  
	FDBDTunableRowHandle                               _slasherHasteValue;                                         // 0x0388   (0x0028)  
	class UClass*                                      _enduranceStatusEffectClass;                                // 0x03B0   (0x0008)  
	class UClass*                                      _undetectableStatusEffectClass;                             // 0x03B8   (0x0008)  
	class UClass*                                      _camperActionSpeedBoostStatusEffectClass;                   // 0x03C0   (0x0008)  
	class UClass*                                      _slasherActionSpeedBoostStatusEffectClass;                  // 0x03C8   (0x0008)  
	class UClass*                                      _slasherAttackCooldownStatusEffectClass;                    // 0x03D0   (0x0008)  
	FDBDTunableRowHandle                               _itemEnergyGainedOnCapture;                                 // 0x03D8   (0x0028)  
	FDBDTunableRowHandle                               _camperBonusDurations;                                      // 0x0400   (0x0028)  
	FDBDTunableRowHandle                               _camperActionSpeedValue;                                    // 0x0428   (0x0028)  
	FDBDTunableRowHandle                               _slasherBonusDurations;                                     // 0x0450   (0x0028)  
	FDBDTunableRowHandle                               _slasherActionSpeedValue;                                   // 0x0478   (0x0028)  
	EPlayerRole                                        _currentRoleWinningHaunt;                                   // 0x04A0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x04A1   (0x0003)  MISSED
	float                                              _heightOffsetToSpawnOrb;                                    // 0x04A4   (0x0004)  
	unsigned char                                      UnknownData03_5[0xA0];                                      // 0x04A8   (0x00A0)  MISSED
	class UChargeableInteractionDefinition*            _captureHauntInteraction;                                   // 0x0548   (0x0008)  
	class UChargeableComponent*                        _captureHauntChargeable;                                    // 0x0550   (0x0008)  
	unsigned char                                      UnknownData04_6[0x38];                                      // 0x0558   (0x0038)  MISSED


	/// Functions
	// Function /Script/Halloween2023.VoidZoneHauntComponent.OnVoidZoneEvent__DelegateSignature
	// void OnVoidZoneEvent__DelegateSignature();                                                                            // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/Halloween2023.VoidZoneHauntComponent.OnPlayerProgress__DelegateSignature
	// void OnPlayerProgress__DelegateSignature(int32_t killerProgress, int32_t survivorProgress);                           // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/Halloween2023.VoidZoneHauntComponent.OnHauntContestChange__DelegateSignature
	// void OnHauntContestChange__DelegateSignature(bool isContested);                                                       // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/Halloween2023.VoidZoneHauntComponent.Multicast_WinHauntForTeam
	// void Multicast_WinHauntForTeam(class ADBDPlayer* winningPlayer, TArray<TWeakObjectPtr<ADBDPlayer*>> playersInZone);   // [0x59c4d20] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/Halloween2023.VoidZoneHauntComponent.Multicast_UpdateAllPlayerHauntTargets
	// void Multicast_UpdateAllPlayerHauntTargets(float chargeRemainingInHaunt, TArray<TWeakObjectPtr<ADBDPlayer*>> playersInZone, bool isZoneContested, bool shouldRegressProgress); // [0x59c4ba0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/Halloween2023.VoidZoneHauntComponent.Multicast_PlayerEnterOrLeftZone
	// void Multicast_PlayerEnterOrLeftZone(class ADBDPlayer* playerEnteringOrLeavingZone, bool isPlayerLeavingZone, float chargeRemainingInHaunt, TArray<TWeakObjectPtr<ADBDPlayer*>> playersInZone, bool isZoneContested, bool shouldRegressProgress); // [0x59c49a0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/Halloween2023.VoidZoneHauntComponent.Multicast_OnVoidZoneOpen
	// void Multicast_OnVoidZoneOpen();                                                                                      // [0x5882320] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/Halloween2023.VoidZoneHauntComponent.Multicast_OnVoidZoneClose
	// void Multicast_OnVoidZoneClose();                                                                                     // [0x59c4980] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/Halloween2023.VoidZoneHauntComponent.Multicast_AddCaptureProgress
	// void Multicast_AddCaptureProgress(int32_t progress);                                                                  // [0x59c48f0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/Halloween2023.VoidZoneHauntComponent.Authority_StartRegression
	// void Authority_StartRegression();                                                                                     // [0x59c48d0] Final|Native|Private 
	// Function /Script/Halloween2023.VoidZoneHauntComponent.Authority_ResetAllProgress
	// void Authority_ResetAllProgress();                                                                                    // [0x59c48b0] Final|Native|Private 
	// Function /Script/Halloween2023.VoidZoneHauntComponent.Authority_PlayerInZone
	// void Authority_PlayerInZone(class ADBDPlayer* Player);                                                                // [0x59c4820] Final|Native|Private 
	// Function /Script/Halloween2023.VoidZoneHauntComponent.Authority_OnVoidZoneOpen
	// void Authority_OnVoidZoneOpen();                                                                                      // [0x59c4800] Final|Native|Private 
	// Function /Script/Halloween2023.VoidZoneHauntComponent.Authority_OnVoidZoneClose
	// void Authority_OnVoidZoneClose();                                                                                     // [0x59c47e0] Final|Native|Private 
	// Function /Script/Halloween2023.VoidZoneHauntComponent.Authority_OnInteractionCompleted
	// void Authority_OnInteractionCompleted(bool COMPLETED, TArray<AActor*>& instigatorsForCompletion);                     // [0x59c46e0] Final|Native|Private|HasOutParms 
	// Function /Script/Halloween2023.VoidZoneHauntComponent.Authority_GrantCaptureBonusStatusEffects
	// void Authority_GrantCaptureBonusStatusEffects(class ADBDPlayer* Player);                                              // [0x59c4650] Final|Native|Private 
	// Function /Script/Halloween2023.VoidZoneHauntComponent.Authority_DecayProgress
	// void Authority_DecayProgress(float DeltaTime);                                                                        // [0x59c45d0] Final|Native|Private 
	// Function /Script/Halloween2023.VoidZoneHauntComponent.Authority_AddCaptureProgress
	// void Authority_AddCaptureProgress(int32_t progress, class ADBDPlayer* playerGivingEnergy);                            // [0x59c4500] Final|Native|Private 
};

/// Class /Script/Halloween2023.VoidZonePlayerComponent
/// Size: 0x0040 (0x0000B8 - 0x0000F8)
class UVoidZonePlayerComponent : public UActorComponent
{ 
public:
	TArray<class UStatusEffect*>                       _voidWorldStatusEffects;                                    // 0x00B8   (0x0010)  
	class ULinkedTeleporterComponent*                  _lastVoidZoneTeleporterUsed;                                // 0x00C8   (0x0008)  
	class UStatusEffect*                               _voidWorldHauntInteractionStatusEffect;                     // 0x00D0   (0x0008)  
	class UPlayerEventDispatcher*                      _playerEventDispatcher;                                     // 0x00D8   (0x0008)  
	TArray<FGameplayTag>                               _stateTagsWaitForInteractionEndOnVoidClose;                 // 0x00E0   (0x0010)  
	class UInteractionDefinition*                      _owningPlayerInteraction;                                   // 0x00F0   (0x0008)  


	/// Functions
	// Function /Script/Halloween2023.VoidZonePlayerComponent.Authority_OnInteractionEnd
	// void Authority_OnInteractionEnd();                                                                                    // [0x59c4f80] Final|Native|Private 
};

