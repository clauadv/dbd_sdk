
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BHVRAnalytics
/// dependency: Competence
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: DBDAnalytics
/// dependency: DBDAnimation
/// dependency: DBDAttack
/// dependency: DBDCompetence
/// dependency: DBDGameplay
/// dependency: DBDInteraction
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTagUtilities
/// dependency: NetworkUtilities
/// dependency: StatSystem

/// Enum /Script/TheGhostface.EGhostStealthState
/// Size: 0x04
enum class EGhostStealthState : uint8_t
{
	EGhostStealthState__AWAITING_ACTIVATION                                          = 0,
	EGhostStealthState__ACTIVATED                                                    = 1,
	EGhostStealthState__COOLDOWN                                                     = 2,
	EGhostStealthState__EGhostStealthState_MAX                                       = 3
};

/// Class /Script/TheGhostface.Addon_Ghost_DriversLicense
/// Size: 0x0068 (0x0002B8 - 0x000320)
class UAddon_Ghost_DriversLicense : public UItemAddon
{ 
public:
	FDBDTunableRowHandle                               _progressLoss;                                              // 0x02B8   (0x0028)  
	FDBDTunableRowHandle                               _blockedTime;                                               // 0x02E0   (0x0028)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0308   (0x0018)  MISSED
};

/// Class /Script/TheGhostface.Addon_Ghost_OlsensAddressBook
/// Size: 0x0000 (0x0002E0 - 0x0002E0)
class UAddon_Ghost_OlsensAddressBook : public UImposeStatusEffectOnEventAddon
{ 
public:
};

/// Class /Script/TheGhostface.GhostChargeStalkModeInteraction
/// Size: 0x0010 (0x000650 - 0x000660)
class UGhostChargeStalkModeInteraction : public UBaseStalkModeInteraction
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0650   (0x0010)  MISSED


	/// Functions
	// Function /Script/TheGhostface.GhostChargeStalkModeInteraction.GetStealthComponent
	// class UGhostStealthComponent* GetStealthComponent();                                                                  // [0x5ab9850] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TheGhostface.GhostfaceCrouchAttack
/// Size: 0x0000 (0x000390 - 0x000390)
class UGhostfaceCrouchAttack : public UPounceAttack
{ 
public:
};

/// Struct /Script/TheGhostface.GhostKillerAnalytics
/// Size: 0x0048 (0x0000B8 - 0x000100)
struct FGhostKillerAnalytics : FUniquelyIdentifiedAnalytic
{ 
	SDK_UNDEFINED(16,5070) /* FString */               __um(MatchID);                                              // 0x00B8   (0x0010)  
	int32_t                                            Stalk;                                                      // 0x00C8   (0x0004)  
	int32_t                                            StalkStealth;                                               // 0x00CC   (0x0004)  
	int32_t                                            Stalk25;                                                    // 0x00D0   (0x0004)  
	int32_t                                            Stalk50;                                                    // 0x00D4   (0x0004)  
	int32_t                                            Stalk75;                                                    // 0x00D8   (0x0004)  
	int32_t                                            Stalk100;                                                   // 0x00DC   (0x0004)  
	int32_t                                            StalkLean25;                                                // 0x00E0   (0x0004)  
	int32_t                                            StalkLean50;                                                // 0x00E4   (0x0004)  
	int32_t                                            StalkLean75;                                                // 0x00E8   (0x0004)  
	int32_t                                            StalkLean100;                                               // 0x00EC   (0x0004)  
	int32_t                                            Lean;                                                       // 0x00F0   (0x0004)  
	int32_t                                            DownExposedSurvivor;                                        // 0x00F4   (0x0004)  
	float                                              TimeInStealthMode;                                          // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Class /Script/TheGhostface.GhostKillerAnalyticsComponent
/// Size: 0x0160 (0x0000B8 - 0x000218)
class UGhostKillerAnalyticsComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x00B8   (0x0038)  MISSED
	FGhostKillerAnalytics                              _ghostKillerAnalytics;                                      // 0x00F0   (0x0100)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x01F0   (0x0028)  MISSED


	/// Functions
	// Function /Script/TheGhostface.GhostKillerAnalyticsComponent.Local_OnStalkModeChanged
	// void Local_OnStalkModeChanged(bool IsInStalkMode);                                                                    // [0x5ab9f60] Final|Native|Private 
	// Function /Script/TheGhostface.GhostKillerAnalyticsComponent.Local_OnLeanStateChanged
	// void Local_OnLeanStateChanged(ELeanState leanState);                                                                  // [0x5ab9ee0] Final|Native|Private 
	// Function /Script/TheGhostface.GhostKillerAnalyticsComponent.Local_OnIsStealthChanged
	// void Local_OnIsStealthChanged(bool IsStealth);                                                                        // [0x5ab9e50] Final|Native|Private 
	// Function /Script/TheGhostface.GhostKillerAnalyticsComponent.Authority_OnStalkChargePercentChanged
	// void Authority_OnStalkChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete); // [0x5ab9d40] Final|Native|Private 
	// Function /Script/TheGhostface.GhostKillerAnalyticsComponent.Authority_OnPreAttackSuccess
	// void Authority_OnPreAttackSuccess(FGameplayTag GameplayTag, FGameEventData& GameEventData);                           // [0x5ab9c30] Final|Native|Private|HasOutParms 
};

/// Class /Script/TheGhostface.GhostStalkedComponent
/// Size: 0x0268 (0x0000B8 - 0x000320)
class UGhostStalkedComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	SDK_UNDEFINED(16,5071) /* FMulticastInlineDelegate */ __um(OnIsMarkedChanged);                                 // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,5072) /* FMulticastInlineDelegate */ __um(OnIsSpottingKillerChanged);                         // 0x00D0   (0x0010)  
	class UClass*                                      _ghostMarkedEffectClass;                                    // 0x00E0   (0x0008)  
	class UClass*                                      _ghostKillerInstinctClass;                                  // 0x00E8   (0x0008)  
	FTagStateBool                                      _isMarked;                                                  // 0x00F0   (0x0030)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0120   (0x0008)  MISSED
	class UStatusEffect*                               _ghostKillerInstinctEffect;                                 // 0x0128   (0x0008)  
	unsigned char                                      UnknownData02_5[0x30];                                      // 0x0130   (0x0030)  MISSED
	class UTimerObject*                                _markTimer;                                                 // 0x0160   (0x0008)  
	FTunableStat                                       _killerInstinctDuration;                                    // 0x0168   (0x0080)  
	FTunableStat                                       _markDuration;                                              // 0x01E8   (0x0080)  
	FDBDTunableRowHandle                               _stalkPointsDepleteDelay;                                   // 0x0268   (0x0028)  
	class ASlasherPlayer*                              _killer;                                                    // 0x0290   (0x0008)  
	class UStalkedComponent*                           _stalkedComponent;                                          // 0x0298   (0x0008)  
	unsigned char                                      UnknownData03_6[0x80];                                      // 0x02A0   (0x0080)  MISSED


	/// Functions
	// Function /Script/TheGhostface.GhostStalkedComponent.OnKillerSpottedChanged
	// void OnKillerSpottedChanged(class ADBDPlayer* spotter, bool spotted);                                                 // [0x5aba630] Final|Native|Private 
	// Function /Script/TheGhostface.GhostStalkedComponent.OnIsSpottingKiller__DelegateSignature
	// void OnIsSpottingKiller__DelegateSignature(bool isSpotting);                                                          // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/TheGhostface.GhostStalkedComponent.OnIsMarkedChanged__DelegateSignature
	// void OnIsMarkedChanged__DelegateSignature(bool IsMarked);                                                             // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/TheGhostface.GhostStalkedComponent.Local_OnSpotKiller
	// void Local_OnSpotKiller();                                                                                            // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/TheGhostface.GhostStalkedComponent.IsMarked
	// bool IsMarked();                                                                                                      // [0x5aba600] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheGhostface.GhostStalkedComponent.Initialize
	// void Initialize(class ASlasherPlayer* killer);                                                                        // [0x58c5550] Native|Event|Protected|BlueprintEvent 
	// Function /Script/TheGhostface.GhostStalkedComponent.GetMeterPercentage
	// float GetMeterPercentage();                                                                                           // [0x5aba5d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheGhostface.GhostStalkedComponent.DBD_DebugGhost
	// void DBD_DebugGhost(bool debug);                                                                                      // [0x5818260] Final|Exec|Native|Private 
	// Function /Script/TheGhostface.GhostStalkedComponent.Client_OnSpotKiller
	// void Client_OnSpotKiller();                                                                                           // [0x4db2a10] Net|Native|Event|Public|NetClient 
	// Function /Script/TheGhostface.GhostStalkedComponent.Authority_OnStalkedChargeFull
	// void Authority_OnStalkedChargeFull(bool COMPLETED, TArray<AActor*>& instigatorsForCompletion);                        // [0x5aba4d0] Final|Native|Private|HasOutParms 
};

/// Class /Script/TheGhostface.GhostStalkPowerComponent
/// Size: 0x0158 (0x0000B8 - 0x000210)
class UGhostStalkPowerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x00B8   (0x0030)  MISSED
	class UStalkerComponent*                           _stalkerComponent;                                          // 0x00E8   (0x0008)  
	SDK_UNDEFINED(48,5073) /* TWeakObjectPtr<UClass*> */ __um(_ghostStalkedComponentClassPtr);                     // 0x00F0   (0x0030)  
	float                                              _crouchAttackRequiredTimeSeconds;                           // 0x0120   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0124   (0x000C)  MISSED
	bool                                               _debugMode;                                                 // 0x0130   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0131   (0x0007)  MISSED
	FDBDTunableRowHandle                               _maxStalkPointsPerSurvivor;                                 // 0x0138   (0x0028)  
	FTunableStat                                       _survivorMaximumSightDistance;                              // 0x0160   (0x0080)  
	unsigned char                                      UnknownData03_6[0x30];                                      // 0x01E0   (0x0030)  MISSED


	/// Functions
	// Function /Script/TheGhostface.GhostStalkPowerComponent.RefreshSurvivorMaximumSightDistance
	// void RefreshSurvivorMaximumSightDistance();                                                                           // [0x5abaaa0] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/TheGhostface.GhostStalkPowerComponent.OnLeanStateChanged
	// void OnLeanStateChanged(ELeanState leanState);                                                                        // [0x5abaa20] Final|Native|Private 
	// Function /Script/TheGhostface.GhostStalkPowerComponent.OnIsCrouchedChanged
	// void OnIsCrouchedChanged(bool isCrouched);                                                                            // [0x5aba990] Final|Native|Private 
	// Function /Script/TheGhostface.GhostStalkPowerComponent.Authority_OnStalkModeChanged
	// void Authority_OnStalkModeChanged(bool IsInStalkMode);                                                                // [0x5aba900] Final|Native|Private 
};

/// Class /Script/TheGhostface.GhostStealthComponent
/// Size: 0x02B0 (0x0000B8 - 0x000368)
class UGhostStealthComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	SDK_UNDEFINED(16,5074) /* FMulticastInlineDelegate */ __um(OnSuccessfulAttackInStealth);                       // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,5075) /* FMulticastInlineDelegate */ __um(OnStealthStateChanged);                             // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,5076) /* FMulticastInlineDelegate */ __um(OnIsStealthChanged);                                // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,5077) /* FMulticastInlineDelegate */ __um(OnIsBeingSpotChanged);                              // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,5078) /* FMulticastInlineDelegate */ __um(Local_OnStealthCancelledByPlayer);                  // 0x0100   (0x0010)  
	EGhostStealthState                                 _stealthState;                                              // 0x0110   (0x0001)  
	unsigned char                                      UnknownData01_5[0x4F];                                      // 0x0111   (0x004F)  MISSED
	class UTimerObject*                                _cooldownTimer;                                             // 0x0160   (0x0008)  
	SDK_UNDEFINED(80,5079) /* TMap<ACharacter*, TWeakObjectPtr<UScreenIndicatorWorldMarkerComponent*>> */ __um(_markers); // 0x0168   (0x0050)  
	FTunableStat                                       _cooldownDuration;                                          // 0x01B8   (0x0080)  
	FNonTunableStat                                    _keepStealthOnAttackMiss;                                   // 0x0238   (0x0060)  
	FDBDTunableRowHandle                               _markerMinVisibleDistance;                                  // 0x0298   (0x0028)  
	FDBDTunableRowHandle                               _markerLifetime;                                            // 0x02C0   (0x0028)  
	FDBDTunableRowHandle                               _stealthTerrorRadius;                                       // 0x02E8   (0x0028)  
	float                                              _markerMaxAngleOffset;                                      // 0x0310   (0x0004)  
	bool                                               _useKillerInstinctWhenSpotted;                              // 0x0314   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0315   (0x0003)  MISSED
	class USightRevealableComponent*                   _sightRevealableComponent;                                  // 0x0318   (0x0008)  
	class UStalkerComponent*                           _stalkerComponent;                                          // 0x0320   (0x0008)  
	unsigned char                                      UnknownData03_6[0x40];                                      // 0x0328   (0x0040)  MISSED


	/// Functions
	// Function /Script/TheGhostface.GhostStealthComponent.SetRedStainVisibility
	// void SetRedStainVisibility(bool visible);                                                                             // [0x5abb430] Final|Native|Private|Const 
	// Function /Script/TheGhostface.GhostStealthComponent.OnSuccessfulAttackInStealth__DelegateSignature
	// void OnSuccessfulAttackInStealth__DelegateSignature(class ADBDPlayer* Target);                                        // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/TheGhostface.GhostStealthComponent.OnStealthStateChanged__DelegateSignature
	// void OnStealthStateChanged__DelegateSignature(EGhostStealthState stealthState);                                       // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/TheGhostface.GhostStealthComponent.OnStealthCancelledByPlayer__DelegateSignature
	// void OnStealthCancelledByPlayer__DelegateSignature(class ADBDPlayer* Player);                                         // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/TheGhostface.GhostStealthComponent.OnRep_StealthState
	// void OnRep_StealthState(EGhostStealthState previousState);                                                            // [0x5abb3b0] Final|Native|Private 
	// Function /Script/TheGhostface.GhostStealthComponent.OnIsStealthChanged__DelegateSignature
	// void OnIsStealthChanged__DelegateSignature(bool IsStealth);                                                           // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/TheGhostface.GhostStealthComponent.OnIsBeingSpotChanged__DelegateSignature
	// void OnIsBeingSpotChanged__DelegateSignature(class ADBDPlayer* spotter, bool isBeingSpot);                            // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/TheGhostface.GhostStealthComponent.Multicast_OnPlayerSpottedKiller
	// void Multicast_OnPlayerSpottedKiller(class ADBDPlayer* spotter);                                                      // [0x507e2f0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheGhostface.GhostStealthComponent.Multicast_OnIsBeingSpottedChanged
	// void Multicast_OnIsBeingSpottedChanged(class ADBDPlayer* spotter, bool isBeingSpotted, bool onlyUpdateSurvivor);      // [0x5abb290] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/TheGhostface.GhostStealthComponent.Multicast_BroadcastOnSuccessfulAttackInStealth
	// void Multicast_BroadcastOnSuccessfulAttackInStealth(class ADBDPlayer* Target);                                        // [0x59e2440] Final|Net|Native|Event|NetMulticast|Private 
	// Function /Script/TheGhostface.GhostStealthComponent.IsStealthReadyToActivate
	// bool IsStealthReadyToActivate();                                                                                      // [0x5abb260] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheGhostface.GhostStealthComponent.IsStealth
	// bool IsStealth();                                                                                                     // [0x5abb230] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheGhostface.GhostStealthComponent.GetStealthState
	// EGhostStealthState GetStealthState();                                                                                 // [0x5abb210] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheGhostface.GhostStealthComponent.GetStealthChargePercent
	// float GetStealthChargePercent();                                                                                      // [0x5abb1e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TheGhostface.GhostStealthComponent.DBD_ResetGhostStealth
	// void DBD_ResetGhostStealth();                                                                                         // [0x45fe020] Final|Exec|Native|Public 
	// Function /Script/TheGhostface.GhostStealthComponent.Client_SpawnMarkerOnCharacter
	// void Client_SpawnMarkerOnCharacter(class ACharacter* revealer);                                                       // [0x57e0340] Final|Net|NetReliableNative|Event|Private|NetClient 
	// Function /Script/TheGhostface.GhostStealthComponent.Authority_TryActivateStealth
	// void Authority_TryActivateStealth();                                                                                  // [0x5abb1c0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/TheGhostface.GhostStealthComponent.Authority_ResetGhostStealth
	// void Authority_ResetGhostStealth();                                                                                   // [0x45fe020] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/TheGhostface.K16AnimInstance
/// Size: 0x0010 (0x000610 - 0x000620)
class UK16AnimInstance : public UKillerAnimInstance
{ 
public:
	bool                                               _isInStalkMode;                                             // 0x0610   (0x0001)  
	bool                                               _isGhostStealth;                                            // 0x0611   (0x0001)  
	bool                                               _isInChase;                                                 // 0x0612   (0x0001)  
	bool                                               _isStalking;                                                // 0x0613   (0x0001)  
	float                                              _distanceFromCamera;                                        // 0x0614   (0x0004)  
	float                                              _leanOffset;                                                // 0x0618   (0x0004)  
	bool                                               _isCrouched;                                                // 0x061C   (0x0001)  
	bool                                               _isCrouchPressed;                                           // 0x061D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x061E   (0x0002)  MISSED
};

/// Class /Script/TheGhostface.TheGhostUtilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UTheGhostUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/TheGhostface.TheGhostUtilities.IsKillerStealth
	// bool IsKillerStealth(class AActor* killer);                                                                           // [0x5abb9b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

