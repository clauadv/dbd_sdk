
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: GameplayUtilities

/// Class /Script/Projectile.BaseProjectile
/// Size: 0x0080 (0x000230 - 0x0002B0)
class ABaseProjectile : public AActor
{ 
public:
	float                                              OnImpactAINoiseEventRange;                                  // 0x0230   (0x0004)  
	unsigned char                                      UnknownData00_5[0x44];                                      // 0x0234   (0x0044)  MISSED
	bool                                               _multicastLaunch;                                           // 0x0278   (0x0001)  
	bool                                               _allowMultipleHits;                                         // 0x0279   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x027A   (0x0006)  MISSED
	FGameplayTagContainer                              _semanticGameplayTags;                                      // 0x0280   (0x0020)  
	bool                                               _notifyClientOfServerHitValidationResult;                   // 0x02A0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x02A1   (0x0007)  MISSED
	class UBaseProjectileReplicationComponent*         _replicationComponent;                                      // 0x02A8   (0x0008)  


	/// Functions
	// Function /Script/Projectile.BaseProjectile.SphereTraceSingle
	// bool SphereTraceSingle(FVector Start, FVector End, class USphereComponent* Sphere, FHitResult& outHitResult);         // [0x85da8b0] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Projectile.BaseProjectile.OnSetActive
	// void OnSetActive(bool Active);                                                                                        // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/Projectile.BaseProjectile.OnLaunch
	// void OnLaunch(FLaunchInfo LaunchInfo, bool hasImpactOnLaunch);                                                        // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/Projectile.BaseProjectile.OnDetectPlayer
	// void OnDetectPlayer(FImpactInfo ImpactInfo);                                                                          // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/Projectile.BaseProjectile.OnDetectCollision
	// void OnDetectCollision(FImpactInfo ImpactInfo);                                                                       // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/Projectile.BaseProjectile.Local_TryDetectCollision
	// bool Local_TryDetectCollision(FImpactInfo ImpactInfo, bool force);                                                    // [0x85da770] Final|Native|Public|BlueprintCallable 
	// Function /Script/Projectile.BaseProjectile.Local_SweepImpactCollision
	// bool Local_SweepImpactCollision(FVector& Start, FVector& End, FRotator& colliderRotation, FHitResult& OutHit);        // [0x85da580] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Projectile.BaseProjectile.Local_OnPlayerDetected
	// bool Local_OnPlayerDetected(FImpactInfo ImpactInfo, FVector& projectileLocation);                                     // [0x85da440] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Projectile.BaseProjectile.IsValidPlayerDetection
	// bool IsValidPlayerDetection(FImpactInfo ImpactInfo);                                                                  // [0x85da360] Native|Event|Protected|BlueprintEvent 
	// Function /Script/Projectile.BaseProjectile.IsValidImpactDetection
	// bool IsValidImpactDetection(FImpactInfo ImpactInfo);                                                                  // [0x85da280] Native|Event|Protected|BlueprintEvent 
	// Function /Script/Projectile.BaseProjectile.IsOwningPawnLocallyControlled
	// bool IsOwningPawnLocallyControlled();                                                                                 // [0x85da250] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Projectile.BaseProjectile.GetLauncher
	// class UBaseProjectileLauncher* GetLauncher();                                                                         // [0x85da220] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Projectile.BaseProjectile.GetImpactPrimitiveComponent
	// class UPrimitiveComponent* GetImpactPrimitiveComponent();                                                             // [0x57d8ab0] Native|Event|Protected|BlueprintEvent|Const 
	// Function /Script/Projectile.BaseProjectile.GetAddLauncherVeloctyFactor
	// float GetAddLauncherVeloctyFactor();                                                                                  // [0x85da1e0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/Projectile.BaseProjectile.Authority_TryDetectCollision
	// bool Authority_TryDetectCollision(FImpactInfo ImpactInfo, bool force);                                                // [0x85da0a0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/Projectile.PhysicsBasedProjectile
/// Size: 0x0008 (0x0002B0 - 0x0002B8)
class APhysicsBasedProjectile : public ABaseProjectile
{ 
public:
	class UPhysicsBasedProjectileMovementComponent*    Movement;                                                   // 0x02B0   (0x0008)  
};

/// Class /Script/Projectile.BaseProjectileLauncher
/// Size: 0x00D8 (0x0000B8 - 0x000190)
class UBaseProjectileLauncher : public UActorComponent
{ 
public:
	FGameplayTag                                       IsOutOfAmmoTag;                                             // 0x00B8   (0x000C)  
	unsigned char                                      UnknownData00_5[0x34];                                      // 0x00C4   (0x0034)  MISSED
	bool                                               _requireLaunchImpactDetection;                              // 0x00F8   (0x0001)  
	bool                                               _hasInfiniteAmmunition;                                     // 0x00F9   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x00FA   (0x0006)  MISSED
	class UClass*                                      ProjectileClass;                                            // 0x0100   (0x0008)  
	int32_t                                            _ammo;                                                      // 0x0108   (0x0004)  
	int32_t                                            _maxAmmo;                                                   // 0x010C   (0x0004)  
	bool                                               _canLaunchWhileOutOfAmmo;                                   // 0x0110   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2F];                                      // 0x0111   (0x002F)  MISSED
	class ABaseProjectile*                             _debugProjectile;                                           // 0x0140   (0x0008)  
	unsigned char                                      UnknownData03_5[0x40];                                      // 0x0148   (0x0040)  MISSED
	class UBaseProjectileReplicationComponent*         _projectileReplicationComponent;                            // 0x0188   (0x0008)  


	/// Functions
	// Function /Script/Projectile.BaseProjectileLauncher.SetProjectileVar
	// void SetProjectileVar(FName VarName, float value);                                                                    // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Script/Projectile.BaseProjectileLauncher.SetProjectileProvider
	// void SetProjectileProvider(TScriptInterface<Class> ProjectileProvider);                                               // [0x85dc030] Final|Native|Public|BlueprintCallable 
	// Function /Script/Projectile.BaseProjectileLauncher.Server_LaunchWithImpact
	// void Server_LaunchWithImpact(FLaunchInfo LaunchInfo, FImpactInfo ImpactInfo, class ABaseProjectile* Projectile);      // [0x85dbea0] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/Projectile.BaseProjectileLauncher.Server_Launch
	// void Server_Launch(FLaunchInfo LaunchInfo, class ABaseProjectile* Projectile);                                        // [0x85dbd70] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/Projectile.BaseProjectileLauncher.OnRep_MaxAmmo
	// void OnRep_MaxAmmo(int32_t oldMaxAmmo);                                                                               // [0x85dbce0] Native|Protected     
	// Function /Script/Projectile.BaseProjectileLauncher.OnRep_Ammo
	// void OnRep_Ammo(int32_t oldAmmo);                                                                                     // [0x85dbc50] Native|Protected     
	// Function /Script/Projectile.BaseProjectileLauncher.OnLaunch
	// void OnLaunch(FLaunchInfo LaunchInfo, class ABaseProjectile* Projectile);                                             // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/Projectile.BaseProjectileLauncher.Local_Launch
	// void Local_Launch();                                                                                                  // [0x85dbc30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Projectile.BaseProjectileLauncher.IsLocallyControlled
	// bool IsLocallyControlled();                                                                                           // [0x85dbc00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Projectile.BaseProjectileLauncher.IsAmmoFull
	// bool IsAmmoFull();                                                                                                    // [0x85dbbd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Projectile.BaseProjectileLauncher.HasProjectile
	// bool HasProjectile();                                                                                                 // [0x85dbba0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Projectile.BaseProjectileLauncher.HasAuthority
	// bool HasAuthority();                                                                                                  // [0x85dbb70] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Projectile.BaseProjectileLauncher.GetProjectileToLaunch
	// class ABaseProjectile* GetProjectileToLaunch();                                                                       // [0x85dbb40] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/Projectile.BaseProjectileLauncher.GetOwningPawn
	// class APawn* GetOwningPawn();                                                                                         // [0x85dbb10] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Projectile.BaseProjectileLauncher.GetLaunchSpeedAtThrowPowerRatio
	// float GetLaunchSpeedAtThrowPowerRatio(float throwPowerRatio);                                                         // [0x85dba70] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/Projectile.BaseProjectileLauncher.GetLaunchSpeed
	// float GetLaunchSpeed();                                                                                               // [0x85dba30] Native|Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/Projectile.BaseProjectileLauncher.GetLaunchPosition
	// FVector GetLaunchPosition();                                                                                          // [0x85db9f0] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/Projectile.BaseProjectileLauncher.GetLaunchDirectionAtViewAndThrowPowerRatio
	// FVector GetLaunchDirectionAtViewAndThrowPowerRatio(FRotator viewRotation, float throwPowerRatio);                     // [0x85db8f0] Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/Projectile.BaseProjectileLauncher.GetLaunchDirection
	// FVector GetLaunchDirection();                                                                                         // [0x85db8b0] Native|Event|Protected|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/Projectile.BaseProjectileLauncher.GetAmmo
	// int32_t GetAmmo();                                                                                                    // [0x85db880] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Projectile.BaseProjectileLauncher.Cosmetic_OnOutOfAmmo
	// void Cosmetic_OnOutOfAmmo();                                                                                          // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Projectile.BaseProjectileLauncher.Authority_SetMaxAmmo
	// void Authority_SetMaxAmmo(int32_t newMaxAmmo, bool isMaxAmmoImmutable);                                               // [0x85db7b0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/Projectile.BaseProjectileLauncher.Authority_ReturnAmmoUnits
	// void Authority_ReturnAmmoUnits(int32_t amountOfAmmoUnitsReturned);                                                    // [0x85db720] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/Projectile.BaseProjectileLauncher.Authority_Reload
	// void Authority_Reload();                                                                                              // [0x85db700] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/Projectile.BaseProjectileLauncher.Authority_Launch
	// void Authority_Launch();                                                                                              // [0x85db6e0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/Projectile.BaseProjectileLauncher.Authority_AddMaxAmmo
	// void Authority_AddMaxAmmo(int32_t ammoToAdd);                                                                         // [0x85db650] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Struct /Script/Projectile.ComponentSweepInfo
/// Size: 0x0014 (0x000000 - 0x000014)
struct FComponentSweepInfo
{ 
	unsigned char                                      UnknownData00_1[0x14];                                      // 0x0000   (0x0014)  MISSED
};

/// Class /Script/Projectile.DBDProjectileMovementComponent
/// Size: 0x0080 (0x0001E0 - 0x000260)
class UDBDProjectileMovementComponent : public UProjectileMovementComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x01E0   (0x0018)  MISSED
	SDK_UNDEFINED(16,1717) /* FMulticastInlineDelegate */ __um(OnComponentToSweepCollisionBP);                     // 0x01F8   (0x0010)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0208   (0x0018)  MISSED
	TArray<FComponentSweepInfo>                        _componentsToSweep;                                         // 0x0220   (0x0010)  
	FVector                                            _previousPosition;                                          // 0x0230   (0x000C)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x023C   (0x0004)  MISSED
	class USceneComponent*                             _cachedUpdatedComponent;                                    // 0x0240   (0x0008)  
	FVector                                            _initialLocation;                                           // 0x0248   (0x000C)  
	float                                              _distanceTravelled;                                         // 0x0254   (0x0004)  
	bool                                               _hasMaximumDistance;                                        // 0x0258   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0259   (0x0003)  MISSED
	float                                              _maximumTravelDistance;                                     // 0x025C   (0x0004)  


	/// Functions
	// Function /Script/Projectile.DBDProjectileMovementComponent.OnComponentToSweepCollisionBP__DelegateSignature
	// void OnComponentToSweepCollisionBP__DelegateSignature(class UPrimitiveComponent* PrimitiveComponent, FHitResult& HitResult); // [0x61d2f50] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/Projectile.DBDProjectileMovementComponent.GetPreviousLocation
	// FVector GetPreviousLocation();                                                                                        // [0x85dd560] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Projectile.DBDProjectileMovementComponent.AddComponentToSweep
	// void AddComponentToSweep(class UPrimitiveComponent* Component);                                                       // [0x85dd4d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Projectile.PhysicsBasedProjectileMovementComponent
/// Size: 0x0000 (0x000260 - 0x000260)
class UPhysicsBasedProjectileMovementComponent : public UDBDProjectileMovementComponent
{ 
public:
};

/// Class /Script/Projectile.SingleProjectileProviderComponent
/// Size: 0x0030 (0x0000B8 - 0x0000E8)
class USingleProjectileProviderComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	class UClass*                                      _projectileClass;                                           // 0x00C0   (0x0008)  
	class ABaseProjectile*                             _projectile;                                                // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x00D0   (0x0018)  MISSED


	/// Functions
	// Function /Script/Projectile.SingleProjectileProviderComponent.OnRep_Projectile
	// void OnRep_Projectile();                                                                                              // [0x85dde10] Final|Native|Private 
};

/// Class /Script/Projectile.BaseProjectileReplicationComponent
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UBaseProjectileReplicationComponent : public UActorComponent
{ 
public:


	/// Functions
	// Function /Script/Projectile.BaseProjectileReplicationComponent.Server_TryDetectPlayer
	// void Server_TryDetectPlayer(class ABaseProjectile* Projectile, FImpactInfo ImpactInfo, FVector_NetQuantize100 projectileLocation, FVector_NetQuantize10 projectileRotation, float TargetLocationTimestamp); // [0x85dce80] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/Projectile.BaseProjectileReplicationComponent.Multicast_SendAuthorityDetectPlayer
	// void Multicast_SendAuthorityDetectPlayer(class ABaseProjectile* Projectile, FImpactInfo ImpactInfo);                  // [0x85dcd50] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/Projectile.BaseProjectileReplicationComponent.Multicast_OnLaunchWithImpact
	// void Multicast_OnLaunchWithImpact(class ABaseProjectile* Projectile, FLaunchInfo LaunchInfo, FImpactInfo ImpactInfo); // [0x85dcbb0] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/Projectile.BaseProjectileReplicationComponent.Multicast_OnLaunch
	// void Multicast_OnLaunch(class ABaseProjectile* Projectile, FLaunchInfo LaunchInfo);                                   // [0x85dca90] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/Projectile.BaseProjectileReplicationComponent.Multicast_DetectPlayer
	// void Multicast_DetectPlayer(class ABaseProjectile* Projectile, FImpactInfo ImpactInfo);                               // [0x85dc960] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/Projectile.BaseProjectileReplicationComponent.Multicast_DetectImpact
	// void Multicast_DetectImpact(class ABaseProjectile* Projectile, FImpactInfo ImpactInfo);                               // [0x85dc830] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/Projectile.BaseProjectileReplicationComponent.Client_ReceiveDetectPlayerValidation
	// void Client_ReceiveDetectPlayerValidation(class ABaseProjectile* Projectile, bool success);                           // [0x5886580] Final|Net|NetReliableNative|Event|Private|NetClient 
	// Function /Script/Projectile.BaseProjectileReplicationComponent.Client_LaunchRefusedByServer
	// void Client_LaunchRefusedByServer(class ABaseProjectile* Projectile);                                                 // [0x85dc7a0] Net|NetReliableNative|Event|Public|NetClient 
};

/// Class /Script/Projectile.AuthoritativePoolProjectileProviderAdapter
/// Size: 0x0010 (0x000030 - 0x000040)
class UAuthoritativePoolProjectileProviderAdapter : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	class UAuthoritativeActorPoolComponent*            _pool;                                                      // 0x0038   (0x0008)  


	/// Functions
	// Function /Script/Projectile.AuthoritativePoolProjectileProviderAdapter.Init
	// void Init(class UAuthoritativeActorPoolComponent* pool);                                                              // [0x85d98e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Projectile.ProjectileProvider
/// Size: 0x0000 (0x000030 - 0x000030)
class UProjectileProvider : public UInterface
{ 
public:
};

/// Struct /Script/Projectile.ImpactInfo
/// Size: 0x0030 (0x000000 - 0x000030)
struct FImpactInfo
{ 
	FVector                                            position;                                                   // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	class AActor*                                      Actor;                                                      // 0x0010   (0x0008)  
	class UPrimitiveComponent*                         Component;                                                  // 0x0018   (0x0008)  
	SDK_UNDEFINED(1,1718) /* TEnumAsByte<EPhysicalSurface> */ __um(SurfaceType);                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	FVector                                            ImpactNormal;                                               // 0x0024   (0x000C)  
};

/// Struct /Script/Projectile.LaunchInfo
/// Size: 0x001C (0x000000 - 0x00001C)
struct FLaunchInfo
{ 
	FVector_NetQuantize                                StartPosition;                                              // 0x0000   (0x000C)  
	FVector_NetQuantizeNormal                          Direction;                                                  // 0x000C   (0x000C)  
	float                                              Speed;                                                      // 0x0018   (0x0004)  
};

