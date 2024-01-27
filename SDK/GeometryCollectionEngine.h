
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Chaos
/// dependency: ChaosSolverEngine
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: PhysicsCore

/// Enum /Script/GeometryCollectionEngine.EChaosBreakingSortMethod
/// Size: 0x06
enum class EChaosBreakingSortMethod : uint8_t
{
	EChaosBreakingSortMethod__SortNone                                               = 0,
	EChaosBreakingSortMethod__SortByHighestMass                                      = 1,
	EChaosBreakingSortMethod__SortByHighestSpeed                                     = 2,
	EChaosBreakingSortMethod__SortByNearestFirst                                     = 3,
	EChaosBreakingSortMethod__Count                                                  = 4,
	EChaosBreakingSortMethod__EChaosBreakingSortMethod_MAX                           = 5
};

/// Enum /Script/GeometryCollectionEngine.EChaosCollisionSortMethod
/// Size: 0x07
enum class EChaosCollisionSortMethod : uint8_t
{
	EChaosCollisionSortMethod__SortNone                                              = 0,
	EChaosCollisionSortMethod__SortByHighestMass                                     = 1,
	EChaosCollisionSortMethod__SortByHighestSpeed                                    = 2,
	EChaosCollisionSortMethod__SortByHighestImpulse                                  = 3,
	EChaosCollisionSortMethod__SortByNearestFirst                                    = 4,
	EChaosCollisionSortMethod__Count                                                 = 5,
	EChaosCollisionSortMethod__EChaosCollisionSortMethod_MAX                         = 6
};

/// Enum /Script/GeometryCollectionEngine.EChaosTrailingSortMethod
/// Size: 0x06
enum class EChaosTrailingSortMethod : uint8_t
{
	EChaosTrailingSortMethod__SortNone                                               = 0,
	EChaosTrailingSortMethod__SortByHighestMass                                      = 1,
	EChaosTrailingSortMethod__SortByHighestSpeed                                     = 2,
	EChaosTrailingSortMethod__SortByNearestFirst                                     = 3,
	EChaosTrailingSortMethod__Count                                                  = 4,
	EChaosTrailingSortMethod__EChaosTrailingSortMethod_MAX                           = 5
};

/// Enum /Script/GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
/// Size: 0x06
enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8_t
{
	EGeometryCollectionDebugDrawActorHideGeometry__HideNone                          = 0,
	EGeometryCollectionDebugDrawActorHideGeometry__HideWithCollision                 = 1,
	EGeometryCollectionDebugDrawActorHideGeometry__HideSelected                      = 2,
	EGeometryCollectionDebugDrawActorHideGeometry__HideWholeCollection               = 3,
	EGeometryCollectionDebugDrawActorHideGeometry__HideAll                           = 4,
	EGeometryCollectionDebugDrawActorHideGeometry__EGeometryCollectionDebugDrawActorHideGeometry_MAX = 5
};

/// Enum /Script/GeometryCollectionEngine.ECollectionGroupEnum
/// Size: 0x03
enum class ECollectionGroupEnum : uint8_t
{
	ECollectionGroupEnum__Chaos_Traansform                                           = 0,
	ECollectionGroupEnum__Chaos_Max                                                  = 1,
	ECollectionGroupEnum__Chaos_Max3                                                 = 2
};

/// Enum /Script/GeometryCollectionEngine.ECollectionAttributeEnum
/// Size: 0x05
enum class ECollectionAttributeEnum : uint8_t
{
	ECollectionAttributeEnum__Chaos_Active                                           = 0,
	ECollectionAttributeEnum__Chaos_DynamicState                                     = 1,
	ECollectionAttributeEnum__Chaos_CollisionGroup                                   = 2,
	ECollectionAttributeEnum__Chaos_Max                                              = 3,
	ECollectionAttributeEnum__Chaos_Max5                                             = 4
};

/// Struct /Script/GeometryCollectionEngine.ChaosCollisionEventRequestSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FChaosCollisionEventRequestSettings
{ 
	int32_t                                            MaxNumberResults;                                           // 0x0000   (0x0004)  
	float                                              MinMass;                                                    // 0x0004   (0x0004)  
	float                                              MinSpeed;                                                   // 0x0008   (0x0004)  
	float                                              MinImpulse;                                                 // 0x000C   (0x0004)  
	float                                              MaxDistance;                                                // 0x0010   (0x0004)  
	EChaosCollisionSortMethod                          SortMethod;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.ChaosBreakingEventRequestSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FChaosBreakingEventRequestSettings
{ 
	int32_t                                            MaxNumberOfResults;                                         // 0x0000   (0x0004)  
	float                                              MinRadius;                                                  // 0x0004   (0x0004)  
	float                                              MinSpeed;                                                   // 0x0008   (0x0004)  
	float                                              MinMass;                                                    // 0x000C   (0x0004)  
	float                                              MaxDistance;                                                // 0x0010   (0x0004)  
	EChaosBreakingSortMethod                           SortMethod;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.ChaosTrailingEventRequestSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FChaosTrailingEventRequestSettings
{ 
	int32_t                                            MaxNumberOfResults;                                         // 0x0000   (0x0004)  
	float                                              MinMass;                                                    // 0x0004   (0x0004)  
	float                                              MinSpeed;                                                   // 0x0008   (0x0004)  
	float                                              MinAngularSpeed;                                            // 0x000C   (0x0004)  
	float                                              MaxDistance;                                                // 0x0010   (0x0004)  
	EChaosTrailingSortMethod                           SortMethod;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Class /Script/GeometryCollectionEngine.ChaosDestructionListener
/// Size: 0x0220 (0x000220 - 0x000440)
class UChaosDestructionListener : public USceneComponent
{ 
public:
	bool                                               bIsCollisionEventListeningEnabled : 1;                      // 0x0218:0 (0x0001)  
	bool                                               bIsBreakingEventListeningEnabled : 1;                       // 0x0218:1 (0x0001)  
	bool                                               bIsTrailingEventListeningEnabled : 1;                       // 0x0218:2 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0219   (0x0003)  MISSED
	FChaosCollisionEventRequestSettings                CollisionEventRequestSettings;                              // 0x021C   (0x0018)  
	FChaosBreakingEventRequestSettings                 BreakingEventRequestSettings;                               // 0x0234   (0x0018)  
	FChaosTrailingEventRequestSettings                 TrailingEventRequestSettings;                               // 0x024C   (0x0018)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0264   (0x0004)  MISSED
	SDK_UNDEFINED(80,4595) /* TSet<AChaosSolverActor*> */ __um(ChaosSolverActors);                                 // 0x0268   (0x0050)  
	SDK_UNDEFINED(80,4596) /* TSet<AGeometryCollectionActor*> */ __um(GeometryCollectionActors);                   // 0x02B8   (0x0050)  
	SDK_UNDEFINED(16,4597) /* FMulticastInlineDelegate */ __um(OnCollisionEvents);                                 // 0x0308   (0x0010)  
	SDK_UNDEFINED(16,4598) /* FMulticastInlineDelegate */ __um(OnBreakingEvents);                                  // 0x0318   (0x0010)  
	SDK_UNDEFINED(16,4599) /* FMulticastInlineDelegate */ __um(OnTrailingEvents);                                  // 0x0328   (0x0010)  
	unsigned char                                      UnknownData02_6[0x108];                                     // 0x0338   (0x0108)  MISSED


	/// Functions
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
	// void SortTrailingEvents(TArray<FChaosTrailingEventData>& TrailingEvents, EChaosTrailingSortMethod SortMethod);        // [0x8421780] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
	// void SortCollisionEvents(TArray<FChaosCollisionEventData>& CollisionEvents, EChaosCollisionSortMethod SortMethod);    // [0x8421680] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
	// void SortBreakingEvents(TArray<FChaosBreakingEventData>& BreakingEvents, EChaosBreakingSortMethod SortMethod);        // [0x8421580] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
	// void SetTrailingEventRequestSettings(FChaosTrailingEventRequestSettings& InSettings);                                 // [0x84214e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
	// void SetTrailingEventEnabled(bool bIsEnabled);                                                                        // [0x8421450] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
	// void SetCollisionEventRequestSettings(FChaosCollisionEventRequestSettings& InSettings);                               // [0x8421320] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
	// void SetCollisionEventEnabled(bool bIsEnabled);                                                                       // [0x8421290] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
	// void SetBreakingEventRequestSettings(FChaosBreakingEventRequestSettings& InSettings);                                 // [0x84211f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
	// void SetBreakingEventEnabled(bool bIsEnabled);                                                                        // [0x8421160] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
	// void RemoveGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);                          // [0x84210d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
	// void RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);                                               // [0x5828940] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
	// bool IsEventListening();                                                                                              // [0x8420de0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
	// void AddGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);                             // [0x8420b10] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
	// void AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);                                                  // [0x5828940] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionActor
/// Size: 0x0010 (0x000230 - 0x000240)
class AGeometryCollectionActor : public AActor
{ 
public:
	class UGeometryCollectionComponent*                GeometryCollectionComponent;                                // 0x0230   (0x0008)  
	class UGeometryCollectionDebugDrawComponent*       GeometryCollectionDebugDrawComponent;                       // 0x0238   (0x0008)  


	/// Functions
	// Function /Script/GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
	// bool RaycastSingle(FVector Start, FVector End, FHitResult& OutHit);                                                   // [0x8420f50] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionCache
/// Size: 0x0028 (0x000030 - 0x000058)
class UGeometryCollectionCache : public UObject
{ 
public:
	FRecordedTransformTrack                            RecordedData;                                               // 0x0030   (0x0010)  
	class UGeometryCollection*                         SupportedCollection;                                        // 0x0040   (0x0008)  
	FGuid                                              CompatibleCollectionState;                                  // 0x0048   (0x0010)  
};

/// Struct /Script/GeometryCollectionEngine.GeomComponentCacheParameters
/// Size: 0x0050 (0x000000 - 0x000050)
struct FGeomComponentCacheParameters
{ 
	EGeometryCollectionCacheType                       CacheMode;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UGeometryCollectionCache*                    TargetCache;                                                // 0x0008   (0x0008)  
	float                                              ReverseCacheBeginTime;                                      // 0x0010   (0x0004)  
	bool                                               SaveCollisionData;                                          // 0x0014   (0x0001)  
	bool                                               DoGenerateCollisionData;                                    // 0x0015   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0016   (0x0002)  MISSED
	int32_t                                            CollisionDataSizeMax;                                       // 0x0018   (0x0004)  
	bool                                               DoCollisionDataSpatialHash;                                 // 0x001C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	float                                              CollisionDataSpatialHashRadius;                             // 0x0020   (0x0004)  
	int32_t                                            MaxCollisionPerCell;                                        // 0x0024   (0x0004)  
	bool                                               SaveBreakingData;                                           // 0x0028   (0x0001)  
	bool                                               DoGenerateBreakingData;                                     // 0x0029   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x002A   (0x0002)  MISSED
	int32_t                                            BreakingDataSizeMax;                                        // 0x002C   (0x0004)  
	bool                                               DoBreakingDataSpatialHash;                                  // 0x0030   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              BreakingDataSpatialHashRadius;                              // 0x0034   (0x0004)  
	int32_t                                            MaxBreakingPerCell;                                         // 0x0038   (0x0004)  
	bool                                               SaveTrailingData;                                           // 0x003C   (0x0001)  
	bool                                               DoGenerateTrailingData;                                     // 0x003D   (0x0001)  
	unsigned char                                      UnknownData05_5[0x2];                                       // 0x003E   (0x0002)  MISSED
	int32_t                                            TrailingDataSizeMax;                                        // 0x0040   (0x0004)  
	float                                              TrailingMinSpeedThreshold;                                  // 0x0044   (0x0004)  
	float                                              TrailingMinVolumeThreshold;                                 // 0x0048   (0x0004)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionRepData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FGeometryCollectionRepData
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionComponent
/// Size: 0x0490 (0x0004D0 - 0x000960)
class UGeometryCollectionComponent : public UMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x04D0   (0x0008)  MISSED
	class AChaosSolverActor*                           ChaosSolverActor;                                           // 0x04D8   (0x0008)  
	unsigned char                                      UnknownData01_5[0xE0];                                      // 0x04E0   (0x00E0)  MISSED
	class UGeometryCollection*                         RestCollection;                                             // 0x05C0   (0x0008)  
	TArray<class AFieldSystemActor*>                   InitializationFields;                                       // 0x05C8   (0x0010)  
	bool                                               Simulating;                                                 // 0x05D8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x05D9   (0x0007)  MISSED
	EObjectStateTypeEnum                               ObjectType;                                                 // 0x05E0   (0x0001)  
	bool                                               EnableClustering;                                           // 0x05E1   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x05E2   (0x0002)  MISSED
	int32_t                                            ClusterGroupIndex;                                          // 0x05E4   (0x0004)  
	int32_t                                            MaxClusterLevel;                                            // 0x05E8   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x05EC   (0x0004)  MISSED
	TArray<float>                                      DamageThreshold;                                            // 0x05F0   (0x0010)  
	EClusterConnectionTypeEnum                         ClusterConnectionType;                                      // 0x0600   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x0601   (0x0003)  MISSED
	int32_t                                            CollisionGroup;                                             // 0x0604   (0x0004)  
	float                                              CollisionSampleFraction;                                    // 0x0608   (0x0004)  
	float                                              LinearEtherDrag;                                            // 0x060C   (0x0004)  
	float                                              AngularEtherDrag;                                           // 0x0610   (0x0004)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x0614   (0x0004)  MISSED
	class UChaosPhysicalMaterial*                      PhysicalMaterial;                                           // 0x0618   (0x0008)  
	EInitialVelocityTypeEnum                           InitialVelocityType;                                        // 0x0620   (0x0001)  
	unsigned char                                      UnknownData07_5[0x3];                                       // 0x0621   (0x0003)  MISSED
	FVector                                            InitialLinearVelocity;                                      // 0x0624   (0x000C)  
	FVector                                            InitialAngularVelocity;                                     // 0x0630   (0x000C)  
	unsigned char                                      UnknownData08_5[0x4];                                       // 0x063C   (0x0004)  MISSED
	class UPhysicalMaterial*                           PhysicalMaterialOverride;                                   // 0x0640   (0x0008)  
	FGeomComponentCacheParameters                      CacheParameters;                                            // 0x0648   (0x0050)  
	SDK_UNDEFINED(16,4600) /* FMulticastInlineDelegate */ __um(NotifyGeometryCollectionPhysicsStateChange);        // 0x0698   (0x0010)  
	SDK_UNDEFINED(16,4601) /* FMulticastInlineDelegate */ __um(NotifyGeometryCollectionPhysicsLoadingStateChange); // 0x06A8   (0x0010)  
	unsigned char                                      UnknownData09_5[0x18];                                      // 0x06B8   (0x0018)  MISSED
	SDK_UNDEFINED(16,4602) /* FMulticastInlineDelegate */ __um(OnChaosBreakEvent);                                 // 0x06D0   (0x0010)  
	float                                              DesiredCacheTime;                                           // 0x06E0   (0x0004)  
	bool                                               CachePlayback;                                              // 0x06E4   (0x0001)  
	unsigned char                                      UnknownData10_5[0x3];                                       // 0x06E5   (0x0003)  MISSED
	SDK_UNDEFINED(16,4603) /* FMulticastInlineDelegate */ __um(OnChaosPhysicsCollision);                           // 0x06E8   (0x0010)  
	bool                                               bNotifyBreaks;                                              // 0x06F8   (0x0001)  
	bool                                               bNotifyCollisions;                                          // 0x06F9   (0x0001)  
	bool                                               bEnableReplication;                                         // 0x06FA   (0x0001)  
	bool                                               bEnableAbandonAfterLevel;                                   // 0x06FB   (0x0001)  
	int32_t                                            ReplicationAbandonClusterLevel;                             // 0x06FC   (0x0004)  
	FGeometryCollectionRepData                         RepData;                                                    // 0x0700   (0x0018)  
	unsigned char                                      UnknownData11_5[0x220];                                     // 0x0718   (0x0220)  MISSED
	class UBodySetup*                                  DummyBodySetup;                                             // 0x0938   (0x0008)  
	unsigned char                                      UnknownData12_6[0x20];                                      // 0x0940   (0x0020)  MISSED


	/// Functions
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
	// void SetNotifyBreaks(bool bNewNotifyBreaks);                                                                          // [0x84213c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
	// void ReceivePhysicsCollision(FChaosPhysicsCollisionInfo& CollisionInfo);                                              // [0x61c32d0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepData
	// void OnRep_RepData(FGeometryCollectionRepData& OldData);                                                              // [0x8420ea0] Final|Native|Protected|HasOutParms 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
	// void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent); // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
	// void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent); // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.NetAbandonCluster
	// void NetAbandonCluster(int32_t TransformIndex);                                                                       // [0x8420e10] Final|Net|NetReliableNative|Event|NetMulticast|Private 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
	// void ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field); // [0x8420c80] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
	// void ApplyKinematicField(float Radius, FVector position);                                                             // [0x8420ba0] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawWarningMessage
/// Size: 0x0001 (0x000000 - 0x000001)
struct FGeometryCollectionDebugDrawWarningMessage
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody
/// Size: 0x0018 (0x000000 - 0x000018)
struct FGeometryCollectionDebugDrawActorSelectedRigidBody
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class AChaosSolverActor*                           Solver;                                                     // 0x0008   (0x0008)  
	class AGeometryCollectionActor*                    GeometryCollection;                                         // 0x0010   (0x0008)  
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawActor
/// Size: 0x00E8 (0x000230 - 0x000318)
class AGeometryCollectionDebugDrawActor : public AActor
{ 
public:
	FGeometryCollectionDebugDrawWarningMessage         WarningMessage;                                             // 0x0230   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0231   (0x0007)  MISSED
	FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody;                                          // 0x0238   (0x0018)  
	bool                                               bDebugDrawWholeCollection;                                  // 0x0250   (0x0001)  
	bool                                               bDebugDrawHierarchy;                                        // 0x0251   (0x0001)  
	bool                                               bDebugDrawClustering;                                       // 0x0252   (0x0001)  
	EGeometryCollectionDebugDrawActorHideGeometry      HideGeometry;                                               // 0x0253   (0x0001)  
	bool                                               bShowRigidBodyId;                                           // 0x0254   (0x0001)  
	bool                                               bShowRigidBodyCollision;                                    // 0x0255   (0x0001)  
	bool                                               bCollisionAtOrigin;                                         // 0x0256   (0x0001)  
	bool                                               bShowRigidBodyTransform;                                    // 0x0257   (0x0001)  
	bool                                               bShowRigidBodyInertia;                                      // 0x0258   (0x0001)  
	bool                                               bShowRigidBodyVelocity;                                     // 0x0259   (0x0001)  
	bool                                               bShowRigidBodyForce;                                        // 0x025A   (0x0001)  
	bool                                               bShowRigidBodyInfos;                                        // 0x025B   (0x0001)  
	bool                                               bShowTransformIndex;                                        // 0x025C   (0x0001)  
	bool                                               bShowTransform;                                             // 0x025D   (0x0001)  
	bool                                               bShowParent;                                                // 0x025E   (0x0001)  
	bool                                               bShowLevel;                                                 // 0x025F   (0x0001)  
	bool                                               bShowConnectivityEdges;                                     // 0x0260   (0x0001)  
	bool                                               bShowGeometryIndex;                                         // 0x0261   (0x0001)  
	bool                                               bShowGeometryTransform;                                     // 0x0262   (0x0001)  
	bool                                               bShowBoundingBox;                                           // 0x0263   (0x0001)  
	bool                                               bShowFaces;                                                 // 0x0264   (0x0001)  
	bool                                               bShowFaceIndices;                                           // 0x0265   (0x0001)  
	bool                                               bShowFaceNormals;                                           // 0x0266   (0x0001)  
	bool                                               bShowSingleFace;                                            // 0x0267   (0x0001)  
	int32_t                                            SingleFaceIndex;                                            // 0x0268   (0x0004)  
	bool                                               bShowVertices;                                              // 0x026C   (0x0001)  
	bool                                               bShowVertexIndices;                                         // 0x026D   (0x0001)  
	bool                                               bShowVertexNormals;                                         // 0x026E   (0x0001)  
	bool                                               bUseActiveVisualization;                                    // 0x026F   (0x0001)  
	float                                              PointThickness;                                             // 0x0270   (0x0004)  
	float                                              LineThickness;                                              // 0x0274   (0x0004)  
	bool                                               bTextShadow;                                                // 0x0278   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0279   (0x0003)  MISSED
	float                                              TextScale;                                                  // 0x027C   (0x0004)  
	float                                              NormalScale;                                                // 0x0280   (0x0004)  
	float                                              AxisScale;                                                  // 0x0284   (0x0004)  
	float                                              ArrowScale;                                                 // 0x0288   (0x0004)  
	FColor                                             RigidBodyIdColor;                                           // 0x028C   (0x0004)  
	float                                              RigidBodyTransformScale;                                    // 0x0290   (0x0004)  
	FColor                                             RigidBodyCollisionColor;                                    // 0x0294   (0x0004)  
	FColor                                             RigidBodyInertiaColor;                                      // 0x0298   (0x0004)  
	FColor                                             RigidBodyVelocityColor;                                     // 0x029C   (0x0004)  
	FColor                                             RigidBodyForceColor;                                        // 0x02A0   (0x0004)  
	FColor                                             RigidBodyInfoColor;                                         // 0x02A4   (0x0004)  
	FColor                                             TransformIndexColor;                                        // 0x02A8   (0x0004)  
	float                                              TransformScale;                                             // 0x02AC   (0x0004)  
	FColor                                             LevelColor;                                                 // 0x02B0   (0x0004)  
	FColor                                             ParentColor;                                                // 0x02B4   (0x0004)  
	float                                              ConnectivityEdgeThickness;                                  // 0x02B8   (0x0004)  
	FColor                                             GeometryIndexColor;                                         // 0x02BC   (0x0004)  
	float                                              GeometryTransformScale;                                     // 0x02C0   (0x0004)  
	FColor                                             BoundingBoxColor;                                           // 0x02C4   (0x0004)  
	FColor                                             FaceColor;                                                  // 0x02C8   (0x0004)  
	FColor                                             FaceIndexColor;                                             // 0x02CC   (0x0004)  
	FColor                                             FaceNormalColor;                                            // 0x02D0   (0x0004)  
	FColor                                             SingleFaceColor;                                            // 0x02D4   (0x0004)  
	FColor                                             VertexColor;                                                // 0x02D8   (0x0004)  
	FColor                                             VertexIndexColor;                                           // 0x02DC   (0x0004)  
	FColor                                             VertexNormalColor;                                          // 0x02E0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x02E4   (0x0004)  MISSED
	class UBillboardComponent*                         SpriteComponent;                                            // 0x02E8   (0x0008)  
	unsigned char                                      UnknownData03_6[0x28];                                      // 0x02F0   (0x0028)  MISSED
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UGeometryCollectionDebugDrawComponent : public UActorComponent
{ 
public:
	class AGeometryCollectionDebugDrawActor*           GeometryCollectionDebugDrawActor;                           // 0x00B8   (0x0008)  
	class AGeometryCollectionRenderLevelSetActor*      GeometryCollectionRenderLevelSetActor;                      // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionSource
/// Size: 0x0060 (0x000000 - 0x000060)
struct FGeometryCollectionSource
{ 
	FSoftObjectPath                                    SourceGeometryObject;                                       // 0x0000   (0x0020)  
	FTransform                                         LocalTransform;                                             // 0x0020   (0x0030)  
	TArray<class UMaterialInterface*>                  SourceMaterial;                                             // 0x0050   (0x0010)  
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionSizeSpecificData
/// Size: 0x0024 (0x000000 - 0x000024)
struct FGeometryCollectionSizeSpecificData
{ 
	float                                              MaxSize;                                                    // 0x0000   (0x0004)  
	ECollisionTypeEnum                                 CollisionType;                                              // 0x0004   (0x0001)  
	EImplicitTypeEnum                                  ImplicitType;                                               // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0006   (0x0002)  MISSED
	int32_t                                            MinLevelSetResolution;                                      // 0x0008   (0x0004)  
	int32_t                                            MaxLevelSetResolution;                                      // 0x000C   (0x0004)  
	int32_t                                            MinClusterLevelSetResolution;                               // 0x0010   (0x0004)  
	int32_t                                            MaxClusterLevelSetResolution;                               // 0x0014   (0x0004)  
	int32_t                                            CollisionObjectReductionPercentage;                         // 0x0018   (0x0004)  
	float                                              CollisionParticlesFraction;                                 // 0x001C   (0x0004)  
	int32_t                                            MaximumCollisionParticles;                                  // 0x0020   (0x0004)  
};

/// Class /Script/GeometryCollectionEngine.GeometryCollection
/// Size: 0x00E0 (0x000030 - 0x000110)
class UGeometryCollection : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	bool                                               EnableClustering;                                           // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            ClusterGroupIndex;                                          // 0x003C   (0x0004)  
	int32_t                                            MaxClusterLevel;                                            // 0x0040   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	TArray<float>                                      DamageThreshold;                                            // 0x0048   (0x0010)  
	EClusterConnectionTypeEnum                         ClusterConnectionType;                                      // 0x0058   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0059   (0x0007)  MISSED
	TArray<FGeometryCollectionSource>                  GeometrySource;                                             // 0x0060   (0x0010)  
	TArray<class UMaterialInterface*>                  Materials;                                                  // 0x0070   (0x0010)  
	ECollisionTypeEnum                                 CollisionType;                                              // 0x0080   (0x0001)  
	EImplicitTypeEnum                                  ImplicitType;                                               // 0x0081   (0x0001)  
	unsigned char                                      UnknownData04_5[0x2];                                       // 0x0082   (0x0002)  MISSED
	int32_t                                            MinLevelSetResolution;                                      // 0x0084   (0x0004)  
	int32_t                                            MaxLevelSetResolution;                                      // 0x0088   (0x0004)  
	int32_t                                            MinClusterLevelSetResolution;                               // 0x008C   (0x0004)  
	int32_t                                            MaxClusterLevelSetResolution;                               // 0x0090   (0x0004)  
	float                                              CollisionObjectReductionPercentage;                         // 0x0094   (0x0004)  
	bool                                               bMassAsDensity;                                             // 0x0098   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x0099   (0x0003)  MISSED
	float                                              Mass;                                                       // 0x009C   (0x0004)  
	float                                              MinimumMassClamp;                                           // 0x00A0   (0x0004)  
	float                                              CollisionParticlesFraction;                                 // 0x00A4   (0x0004)  
	int32_t                                            MaximumCollisionParticles;                                  // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	TArray<FGeometryCollectionSizeSpecificData>        SizeSpecificData;                                           // 0x00B0   (0x0010)  
	bool                                               EnableRemovePiecesOnFracture;                               // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData07_5[0x7];                                       // 0x00C1   (0x0007)  MISSED
	TArray<class UMaterialInterface*>                  RemoveOnFractureMaterials;                                  // 0x00C8   (0x0010)  
	FGuid                                              PersistentGuid;                                             // 0x00D8   (0x0010)  
	FGuid                                              StateGuid;                                                  // 0x00E8   (0x0010)  
	int32_t                                            BoneSelectedMaterialIndex;                                  // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData08_6[0x14];                                      // 0x00FC   (0x0014)  MISSED
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
/// Size: 0x00A0 (0x000230 - 0x0002D0)
class AGeometryCollectionRenderLevelSetActor : public AActor
{ 
public:
	class UVolumeTexture*                              TargetVolumeTexture;                                        // 0x0230   (0x0008)  
	class UMaterial*                                   RayMarchMaterial;                                           // 0x0238   (0x0008)  
	float                                              SurfaceTolerance;                                           // 0x0240   (0x0004)  
	float                                              Isovalue;                                                   // 0x0244   (0x0004)  
	bool                                               Enabled;                                                    // 0x0248   (0x0001)  
	bool                                               RenderVolumeBoundingBox;                                    // 0x0249   (0x0001)  
	unsigned char                                      UnknownData00_6[0x86];                                      // 0x024A   (0x0086)  MISSED
};

/// Class /Script/GeometryCollectionEngine.SkeletalMeshSimulationComponent
/// Size: 0x0088 (0x0000B8 - 0x000140)
class USkeletalMeshSimulationComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	class UChaosPhysicalMaterial*                      PhysicalMaterial;                                           // 0x00C0   (0x0008)  
	class AChaosSolverActor*                           ChaosSolverActor;                                           // 0x00C8   (0x0008)  
	class UPhysicsAsset*                               OverridePhysicsAsset;                                       // 0x00D0   (0x0008)  
	bool                                               bSimulating;                                                // 0x00D8   (0x0001)  
	bool                                               bNotifyCollisions;                                          // 0x00D9   (0x0001)  
	EObjectStateTypeEnum                               ObjectType;                                                 // 0x00DA   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x00DB   (0x0001)  MISSED
	float                                              Density;                                                    // 0x00DC   (0x0004)  
	float                                              MinMass;                                                    // 0x00E0   (0x0004)  
	float                                              MaxMass;                                                    // 0x00E4   (0x0004)  
	ECollisionTypeEnum                                 CollisionType;                                              // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00E9   (0x0003)  MISSED
	float                                              ImplicitShapeParticlesPerUnitArea;                          // 0x00EC   (0x0004)  
	int32_t                                            ImplicitShapeMinNumParticles;                               // 0x00F0   (0x0004)  
	int32_t                                            ImplicitShapeMaxNumParticles;                               // 0x00F4   (0x0004)  
	int32_t                                            MinLevelSetResolution;                                      // 0x00F8   (0x0004)  
	int32_t                                            MaxLevelSetResolution;                                      // 0x00FC   (0x0004)  
	int32_t                                            CollisionGroup;                                             // 0x0100   (0x0004)  
	EInitialVelocityTypeEnum                           InitialVelocityType;                                        // 0x0104   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0105   (0x0003)  MISSED
	FVector                                            InitialLinearVelocity;                                      // 0x0108   (0x000C)  
	FVector                                            InitialAngularVelocity;                                     // 0x0114   (0x000C)  
	SDK_UNDEFINED(16,4604) /* FMulticastInlineDelegate */ __um(OnChaosPhysicsCollision);                           // 0x0120   (0x0010)  
	unsigned char                                      UnknownData04_6[0x10];                                      // 0x0130   (0x0010)  MISSED


	/// Functions
	// Function /Script/GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision
	// void ReceivePhysicsCollision(FChaosPhysicsCollisionInfo& CollisionInfo);                                              // [0x61c32d0] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/GeometryCollectionEngine.StaticMeshSimulationComponent
/// Size: 0x0088 (0x0000B8 - 0x000140)
class UStaticMeshSimulationComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	bool                                               Simulating;                                                 // 0x00C0   (0x0001)  
	bool                                               bNotifyCollisions;                                          // 0x00C1   (0x0001)  
	EObjectStateTypeEnum                               ObjectType;                                                 // 0x00C2   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x00C3   (0x0001)  MISSED
	float                                              Mass;                                                       // 0x00C4   (0x0004)  
	ECollisionTypeEnum                                 CollisionType;                                              // 0x00C8   (0x0001)  
	EImplicitTypeEnum                                  ImplicitType;                                               // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x00CA   (0x0002)  MISSED
	int32_t                                            MinLevelSetResolution;                                      // 0x00CC   (0x0004)  
	int32_t                                            MaxLevelSetResolution;                                      // 0x00D0   (0x0004)  
	EInitialVelocityTypeEnum                           InitialVelocityType;                                        // 0x00D4   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x00D5   (0x0003)  MISSED
	FVector                                            InitialLinearVelocity;                                      // 0x00D8   (0x000C)  
	FVector                                            InitialAngularVelocity;                                     // 0x00E4   (0x000C)  
	float                                              DamageThreshold;                                            // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x00F4   (0x0004)  MISSED
	class UChaosPhysicalMaterial*                      PhysicalMaterial;                                           // 0x00F8   (0x0008)  
	class AChaosSolverActor*                           ChaosSolverActor;                                           // 0x0100   (0x0008)  
	SDK_UNDEFINED(16,4605) /* FMulticastInlineDelegate */ __um(OnChaosPhysicsCollision);                           // 0x0108   (0x0010)  
	unsigned char                                      UnknownData05_5[0x10];                                      // 0x0118   (0x0010)  MISSED
	TArray<class UPrimitiveComponent*>                 SimulatedComponents;                                        // 0x0128   (0x0010)  
	unsigned char                                      UnknownData06_6[0x8];                                       // 0x0138   (0x0008)  MISSED


	/// Functions
	// Function /Script/GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision
	// void ReceivePhysicsCollision(FChaosPhysicsCollisionInfo& CollisionInfo);                                              // [0x61c32d0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState
	// void ForceRecreatePhysicsState();                                                                                     // [0x8422540] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/GeometryCollectionEngine.ChaosCollisionEventData
/// Size: 0x0058 (0x000000 - 0x000058)
struct FChaosCollisionEventData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x000C)  
	FVector                                            Normal;                                                     // 0x000C   (0x000C)  
	FVector                                            Velocity1;                                                  // 0x0018   (0x000C)  
	FVector                                            Velocity2;                                                  // 0x0024   (0x000C)  
	float                                              Mass1;                                                      // 0x0030   (0x0004)  
	float                                              Mass2;                                                      // 0x0034   (0x0004)  
	FVector                                            Impulse;                                                    // 0x0038   (0x000C)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x0044   (0x0014)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.ChaosBreakingEventData
/// Size: 0x001C (0x000000 - 0x00001C)
struct FChaosBreakingEventData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x000C)  
	FVector                                            Velocity;                                                   // 0x000C   (0x000C)  
	float                                              Mass;                                                       // 0x0018   (0x0004)  
};

/// Struct /Script/GeometryCollectionEngine.ChaosTrailingEventData
/// Size: 0x002C (0x000000 - 0x00002C)
struct FChaosTrailingEventData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x000C)  
	FVector                                            Velocity;                                                   // 0x000C   (0x000C)  
	FVector                                            AngularVelocity;                                            // 0x0018   (0x000C)  
	float                                              Mass;                                                       // 0x0024   (0x0004)  
	int32_t                                            ParticleIndex;                                              // 0x0028   (0x0004)  
};

