
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/NavigationSystem.ERuntimeGenerationType
/// Size: 0x05
enum class ERuntimeGenerationType : uint8_t
{
	ERuntimeGenerationType__Static                                                   = 0,
	ERuntimeGenerationType__DynamicModifiersOnly                                     = 1,
	ERuntimeGenerationType__Dynamic                                                  = 2,
	ERuntimeGenerationType__LegacyGeneration                                         = 3,
	ERuntimeGenerationType__ERuntimeGenerationType_MAX                               = 4
};

/// Enum /Script/NavigationSystem.ENavCostDisplay
/// Size: 0x04
enum class ENavCostDisplay : uint8_t
{
	ENavCostDisplay__TotalCost                                                       = 0,
	ENavCostDisplay__HeuristicOnly                                                   = 1,
	ENavCostDisplay__RealCostOnly                                                    = 2,
	ENavCostDisplay__ENavCostDisplay_MAX                                             = 3
};

/// Enum /Script/NavigationSystem.ENavSystemOverridePolicy
/// Size: 0x04
enum class ENavSystemOverridePolicy : uint8_t
{
	ENavSystemOverridePolicy__Override                                               = 0,
	ENavSystemOverridePolicy__Append                                                 = 1,
	ENavSystemOverridePolicy__Skip                                                   = 2,
	ENavSystemOverridePolicy__ENavSystemOverridePolicy_MAX                           = 3
};

/// Enum /Script/NavigationSystem.ERecastPartitioning
/// Size: 0x04
enum class ERecastPartitioning : uint8_t
{
	ERecastPartitioning__Monotone                                                    = 0,
	ERecastPartitioning__Watershed                                                   = 1,
	ERecastPartitioning__ChunkyMonotone                                              = 2,
	ERecastPartitioning__ERecastPartitioning_MAX                                     = 3
};

/// Class /Script/NavigationSystem.NavRelevantComponent
/// Size: 0x0030 (0x0000B8 - 0x0000E8)
class UNavRelevantComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x24];                                      // 0x00B8   (0x0024)  MISSED
	bool                                               bAttachToOwnersRoot : 1;                                    // 0x00DC:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x00DD   (0x0003)  MISSED
	class UObject*                                     CachedNavParent;                                            // 0x00E0   (0x0008)  


	/// Functions
	// Function /Script/NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
	// void SetNavigationRelevancy(bool bRelevant);                                                                          // [0x83f71e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavLinkCustomComponent
/// Size: 0x00B0 (0x0000E8 - 0x000198)
class UNavLinkCustomComponent : public UNavRelevantComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00E8   (0x0008)  MISSED
	uint32_t                                           NavLinkUserId;                                              // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00F4   (0x0004)  MISSED
	class UClass*                                      EnabledAreaClass;                                           // 0x00F8   (0x0008)  
	class UClass*                                      DisabledAreaClass;                                          // 0x0100   (0x0008)  
	FNavAgentSelector                                  SupportedAgents;                                            // 0x0108   (0x0004)  
	FVector                                            LinkRelativeStart;                                          // 0x010C   (0x000C)  
	FVector                                            LinkRelativeEnd;                                            // 0x0118   (0x000C)  
	SDK_UNDEFINED(1,853) /* TEnumAsByte<ENavLinkDirection> */ __um(LinkDirection);                                 // 0x0124   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0125   (0x0003)  MISSED
	bool                                               bLinkEnabled : 1;                                           // 0x0128:0 (0x0001)  
	bool                                               bNotifyWhenEnabled : 1;                                     // 0x0128:1 (0x0001)  
	bool                                               bNotifyWhenDisabled : 1;                                    // 0x0128:2 (0x0001)  
	bool                                               bCreateBoxObstacle : 1;                                     // 0x0128:3 (0x0001)  
	unsigned char                                      UnknownData03_4[0x3];                                       // 0x0129   (0x0003)  MISSED
	FVector                                            ObstacleOffset;                                             // 0x012C   (0x000C)  
	FVector                                            ObstacleExtent;                                             // 0x0138   (0x000C)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x0144   (0x0004)  MISSED
	class UClass*                                      ObstacleAreaClass;                                          // 0x0148   (0x0008)  
	float                                              BroadcastRadius;                                            // 0x0150   (0x0004)  
	float                                              BroadcastInterval;                                          // 0x0154   (0x0004)  
	SDK_UNDEFINED(1,854) /* TEnumAsByte<ECollisionChannel> */ __um(BroadcastChannel);                              // 0x0158   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3F];                                      // 0x0159   (0x003F)  MISSED
};

/// Class /Script/NavigationSystem.NavArea
/// Size: 0x0018 (0x000038 - 0x000050)
class UNavArea : public UNavAreaBase
{ 
public:
	float                                              DefaultCost;                                                // 0x0038   (0x0004)  
	float                                              FixedAreaEnteringCost;                                      // 0x003C   (0x0004)  
	FColor                                             DrawColor;                                                  // 0x0040   (0x0004)  
	FNavAgentSelector                                  SupportedAgents;                                            // 0x0044   (0x0004)  
	bool                                               bSupportsAgent0 : 1;                                        // 0x0048:0 (0x0001)  
	bool                                               bSupportsAgent1 : 1;                                        // 0x0048:1 (0x0001)  
	bool                                               bSupportsAgent2 : 1;                                        // 0x0048:2 (0x0001)  
	bool                                               bSupportsAgent3 : 1;                                        // 0x0048:3 (0x0001)  
	bool                                               bSupportsAgent4 : 1;                                        // 0x0048:4 (0x0001)  
	bool                                               bSupportsAgent5 : 1;                                        // 0x0048:5 (0x0001)  
	bool                                               bSupportsAgent6 : 1;                                        // 0x0048:6 (0x0001)  
	bool                                               bSupportsAgent7 : 1;                                        // 0x0048:7 (0x0001)  
	bool                                               bSupportsAgent8 : 1;                                        // 0x0049:0 (0x0001)  
	bool                                               bSupportsAgent9 : 1;                                        // 0x0049:1 (0x0001)  
	bool                                               bSupportsAgent10 : 1;                                       // 0x0049:2 (0x0001)  
	bool                                               bSupportsAgent11 : 1;                                       // 0x0049:3 (0x0001)  
	bool                                               bSupportsAgent12 : 1;                                       // 0x0049:4 (0x0001)  
	bool                                               bSupportsAgent13 : 1;                                       // 0x0049:5 (0x0001)  
	bool                                               bSupportsAgent14 : 1;                                       // 0x0049:6 (0x0001)  
	bool                                               bSupportsAgent15 : 1;                                       // 0x0049:7 (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x004A   (0x0006)  MISSED
};

/// Struct /Script/NavigationSystem.NavigationFilterArea
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNavigationFilterArea
{ 
	class UClass*                                      AreaClass;                                                  // 0x0000   (0x0008)  
	float                                              TravelCostOverride;                                         // 0x0008   (0x0004)  
	float                                              EnteringCostOverride;                                       // 0x000C   (0x0004)  
	bool                                               bIsExcluded : 1;                                            // 0x0010:0 (0x0001)  
	bool                                               bOverrideTravelCost : 1;                                    // 0x0010:1 (0x0001)  
	bool                                               bOverrideEnteringCost : 1;                                  // 0x0010:2 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/NavigationSystem.NavigationFilterFlags
/// Size: 0x0004 (0x000000 - 0x000004)
struct FNavigationFilterFlags
{ 
	bool                                               bNavFlag0 : 1;                                              // 0x0000:0 (0x0001)  
	bool                                               bNavFlag1 : 1;                                              // 0x0000:1 (0x0001)  
	bool                                               bNavFlag2 : 1;                                              // 0x0000:2 (0x0001)  
	bool                                               bNavFlag3 : 1;                                              // 0x0000:3 (0x0001)  
	bool                                               bNavFlag4 : 1;                                              // 0x0000:4 (0x0001)  
	bool                                               bNavFlag5 : 1;                                              // 0x0000:5 (0x0001)  
	bool                                               bNavFlag6 : 1;                                              // 0x0000:6 (0x0001)  
	bool                                               bNavFlag7 : 1;                                              // 0x0000:7 (0x0001)  
	bool                                               bNavFlag8 : 1;                                              // 0x0001:0 (0x0001)  
	bool                                               bNavFlag9 : 1;                                              // 0x0001:1 (0x0001)  
	bool                                               bNavFlag10 : 1;                                             // 0x0001:2 (0x0001)  
	bool                                               bNavFlag11 : 1;                                             // 0x0001:3 (0x0001)  
	bool                                               bNavFlag12 : 1;                                             // 0x0001:4 (0x0001)  
	bool                                               bNavFlag13 : 1;                                             // 0x0001:5 (0x0001)  
	bool                                               bNavFlag14 : 1;                                             // 0x0001:6 (0x0001)  
	bool                                               bNavFlag15 : 1;                                             // 0x0001:7 (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
};

/// Class /Script/NavigationSystem.NavigationQueryFilter
/// Size: 0x0020 (0x000030 - 0x000050)
class UNavigationQueryFilter : public UObject
{ 
public:
	TArray<FNavigationFilterArea>                      Areas;                                                      // 0x0030   (0x0010)  
	FNavigationFilterFlags                             IncludeFlags;                                               // 0x0040   (0x0004)  
	FNavigationFilterFlags                             ExcludeFlags;                                               // 0x0044   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Class /Script/NavigationSystem.NavModifierComponent
/// Size: 0x0068 (0x0000E8 - 0x000150)
class UNavModifierComponent : public UNavRelevantComponent
{ 
public:
	class UClass*                                      AreaClass;                                                  // 0x00E8   (0x0008)  
	FVector                                            FailsafeExtent;                                             // 0x00F0   (0x000C)  
	bool                                               bIncludeAgentHeight : 1;                                    // 0x00FC:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x53];                                      // 0x00FD   (0x0053)  MISSED


	/// Functions
	// Function /Script/NavigationSystem.NavModifierComponent.SetAreaClass
	// void SetAreaClass(class UClass* NewAreaClass);                                                                        // [0x83f7150] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/NavigationSystem.SupportedAreaData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FSupportedAreaData
{ 
	SDK_UNDEFINED(16,855) /* FString */                __um(AreaClassName);                                        // 0x0000   (0x0010)  
	int32_t                                            AreaID;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	class UClass*                                      AreaClass;                                                  // 0x0018   (0x0008)  
};

/// Class /Script/NavigationSystem.NavigationData
/// Size: 0x0220 (0x000230 - 0x000450)
class ANavigationData : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0230   (0x0008)  MISSED
	class UPrimitiveComponent*                         RenderingComp;                                              // 0x0238   (0x0008)  
	FNavDataConfig                                     NavDataConfig;                                              // 0x0240   (0x0090)  
	bool                                               bEnableDrawing : 1;                                         // 0x02D0:0 (0x0001)  
	bool                                               bForceRebuildOnLoad : 1;                                    // 0x02D0:1 (0x0001)  
	bool                                               bAutoDestroyWhenNoNavigation : 1;                           // 0x02D0:2 (0x0001)  
	bool                                               bCanBeMainNavData : 1;                                      // 0x02D0:3 (0x0001)  
	bool                                               bCanSpawnOnRebuild : 1;                                     // 0x02D0:4 (0x0001)  
	bool                                               bRebuildAtRuntime : 1;                                      // 0x02D0:5 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x02D1   (0x0003)  MISSED
	ERuntimeGenerationType                             RuntimeGeneration;                                          // 0x02D4   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x02D5   (0x0003)  MISSED
	float                                              ObservedPathsTickInterval;                                  // 0x02D8   (0x0004)  
	uint32_t                                           DataVersion;                                                // 0x02DC   (0x0004)  
	unsigned char                                      UnknownData03_5[0x108];                                     // 0x02E0   (0x0108)  MISSED
	TArray<FSupportedAreaData>                         SupportedAreas;                                             // 0x03E8   (0x0010)  
	unsigned char                                      UnknownData04_6[0x58];                                      // 0x03F8   (0x0058)  MISSED
};

/// Class /Script/NavigationSystem.RecastNavMesh
/// Size: 0x00B0 (0x000450 - 0x000500)
class ARecastNavMesh : public ANavigationData
{ 
public:
	bool                                               bDrawTriangleEdges : 1;                                     // 0x0450:0 (0x0001)  
	bool                                               bDrawPolyEdges : 1;                                         // 0x0450:1 (0x0001)  
	bool                                               bDrawFilledPolys : 1;                                       // 0x0450:2 (0x0001)  
	bool                                               bDrawNavMeshEdges : 1;                                      // 0x0450:3 (0x0001)  
	bool                                               bDrawTileBounds : 1;                                        // 0x0450:4 (0x0001)  
	bool                                               bDrawPathCollidingGeometry : 1;                             // 0x0450:5 (0x0001)  
	bool                                               bDrawTileLabels : 1;                                        // 0x0450:6 (0x0001)  
	bool                                               bDrawPolygonLabels : 1;                                     // 0x0450:7 (0x0001)  
	bool                                               bDrawDefaultPolygonCost : 1;                                // 0x0451:0 (0x0001)  
	bool                                               bDrawPolygonFlags : 1;                                      // 0x0451:1 (0x0001)  
	bool                                               bDrawLabelsOnPathNodes : 1;                                 // 0x0451:2 (0x0001)  
	bool                                               bDrawNavLinks : 1;                                          // 0x0451:3 (0x0001)  
	bool                                               bDrawFailedNavLinks : 1;                                    // 0x0451:4 (0x0001)  
	bool                                               bDrawClusters : 1;                                          // 0x0451:5 (0x0001)  
	bool                                               bDrawOctree : 1;                                            // 0x0451:6 (0x0001)  
	bool                                               bDrawOctreeDetails : 1;                                     // 0x0451:7 (0x0001)  
	bool                                               bDrawMarkedForbiddenPolys : 1;                              // 0x0452:0 (0x0001)  
	bool                                               bDistinctlyDrawTilesBeingBuilt : 1;                         // 0x0452:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x1];                                       // 0x0453   (0x0001)  MISSED
	float                                              DrawOffset;                                                 // 0x0454   (0x0004)  
	bool                                               bFixedTilePoolSize : 1;                                     // 0x0458:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0459   (0x0003)  MISSED
	int32_t                                            TilePoolSize;                                               // 0x045C   (0x0004)  
	float                                              TileSizeUU;                                                 // 0x0460   (0x0004)  
	float                                              CellSize;                                                   // 0x0464   (0x0004)  
	float                                              CellHeight;                                                 // 0x0468   (0x0004)  
	float                                              AgentRadius;                                                // 0x046C   (0x0004)  
	float                                              AgentHeight;                                                // 0x0470   (0x0004)  
	float                                              AgentMaxSlope;                                              // 0x0474   (0x0004)  
	float                                              AgentMaxStepHeight;                                         // 0x0478   (0x0004)  
	float                                              MinRegionArea;                                              // 0x047C   (0x0004)  
	float                                              MergeRegionSize;                                            // 0x0480   (0x0004)  
	float                                              MaxSimplificationError;                                     // 0x0484   (0x0004)  
	int32_t                                            MaxSimultaneousTileGenerationJobsCount;                     // 0x0488   (0x0004)  
	int32_t                                            TileNumberHardLimit;                                        // 0x048C   (0x0004)  
	int32_t                                            PolyRefTileBits;                                            // 0x0490   (0x0004)  
	int32_t                                            PolyRefNavPolyBits;                                         // 0x0494   (0x0004)  
	int32_t                                            PolyRefSaltBits;                                            // 0x0498   (0x0004)  
	FVector                                            NavMeshOriginOffset;                                        // 0x049C   (0x000C)  
	float                                              DefaultDrawDistance;                                        // 0x04A8   (0x0004)  
	float                                              DefaultMaxSearchNodes;                                      // 0x04AC   (0x0004)  
	float                                              DefaultMaxHierarchicalSearchNodes;                          // 0x04B0   (0x0004)  
	SDK_UNDEFINED(1,856) /* TEnumAsByte<ERecastPartitioning> */ __um(RegionPartitioning);                          // 0x04B4   (0x0001)  
	SDK_UNDEFINED(1,857) /* TEnumAsByte<ERecastPartitioning> */ __um(LayerPartitioning);                           // 0x04B5   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x04B6   (0x0002)  MISSED
	int32_t                                            RegionChunkSplits;                                          // 0x04B8   (0x0004)  
	int32_t                                            LayerChunkSplits;                                           // 0x04BC   (0x0004)  
	bool                                               bSortNavigationAreasByCost : 1;                             // 0x04C0:0 (0x0001)  
	bool                                               bPerformVoxelFiltering : 1;                                 // 0x04C0:1 (0x0001)  
	bool                                               bMarkLowHeightAreas : 1;                                    // 0x04C0:2 (0x0001)  
	bool                                               bUseExtraTopCellWhenMarkingAreas : 1;                       // 0x04C0:3 (0x0001)  
	bool                                               bFilterLowSpanSequences : 1;                                // 0x04C0:4 (0x0001)  
	bool                                               bFilterLowSpanFromTileCache : 1;                            // 0x04C0:5 (0x0001)  
	bool                                               bDoFullyAsyncNavDataGathering : 1;                          // 0x04C0:6 (0x0001)  
	bool                                               bUseBetterOffsetsFromCorners : 1;                           // 0x04C0:7 (0x0001)  
	bool                                               bStoreEmptyTileLayers : 1;                                  // 0x04C1:0 (0x0001)  
	bool                                               bUseVirtualFilters : 1;                                     // 0x04C1:1 (0x0001)  
	bool                                               bAllowNavLinkAsPathEnd : 1;                                 // 0x04C1:2 (0x0001)  
	bool                                               bUseVoxelCache : 1;                                         // 0x04C1:3 (0x0001)  
	unsigned char                                      UnknownData03_4[0x2];                                       // 0x04C2   (0x0002)  MISSED
	float                                              TileSetUpdateInterval;                                      // 0x04C4   (0x0004)  
	float                                              HeuristicScale;                                             // 0x04C8   (0x0004)  
	float                                              VerticalDeviationFromGroundCompensation;                    // 0x04CC   (0x0004)  
	unsigned char                                      UnknownData04_6[0x30];                                      // 0x04D0   (0x0030)  MISSED


	/// Functions
	// Function /Script/NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds
	// bool K2_ReplaceAreaInTileBounds(FBox Bounds, class UClass* OldArea, class UClass* NewArea, bool ReplaceLinks);        // [0x83f6f20] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/NavigationSystem.AbstractNavData
/// Size: 0x0000 (0x000450 - 0x000450)
class AAbstractNavData : public ANavigationData
{ 
public:
};

/// Class /Script/NavigationSystem.CrowdManagerBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UCrowdManagerBase : public UObject
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea_Default
/// Size: 0x0000 (0x000050 - 0x000050)
class UNavArea_Default : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea_LowHeight
/// Size: 0x0000 (0x000050 - 0x000050)
class UNavArea_LowHeight : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea_Null
/// Size: 0x0000 (0x000050 - 0x000050)
class UNavArea_Null : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavArea_Obstacle
/// Size: 0x0000 (0x000050 - 0x000050)
class UNavArea_Obstacle : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavAreaMeta
/// Size: 0x0000 (0x000050 - 0x000050)
class UNavAreaMeta : public UNavArea
{ 
public:
};

/// Class /Script/NavigationSystem.NavAreaMeta_SwitchByAgent
/// Size: 0x0080 (0x000050 - 0x0000D0)
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{ 
public:
	class UClass*                                      Agent0Area;                                                 // 0x0050   (0x0008)  
	class UClass*                                      Agent1Area;                                                 // 0x0058   (0x0008)  
	class UClass*                                      Agent2Area;                                                 // 0x0060   (0x0008)  
	class UClass*                                      Agent3Area;                                                 // 0x0068   (0x0008)  
	class UClass*                                      Agent4Area;                                                 // 0x0070   (0x0008)  
	class UClass*                                      Agent5Area;                                                 // 0x0078   (0x0008)  
	class UClass*                                      Agent6Area;                                                 // 0x0080   (0x0008)  
	class UClass*                                      Agent7Area;                                                 // 0x0088   (0x0008)  
	class UClass*                                      Agent8Area;                                                 // 0x0090   (0x0008)  
	class UClass*                                      Agent9Area;                                                 // 0x0098   (0x0008)  
	class UClass*                                      Agent10Area;                                                // 0x00A0   (0x0008)  
	class UClass*                                      Agent11Area;                                                // 0x00A8   (0x0008)  
	class UClass*                                      Agent12Area;                                                // 0x00B0   (0x0008)  
	class UClass*                                      Agent13Area;                                                // 0x00B8   (0x0008)  
	class UClass*                                      Agent14Area;                                                // 0x00C0   (0x0008)  
	class UClass*                                      Agent15Area;                                                // 0x00C8   (0x0008)  
};

/// Struct /Script/NavigationSystem.NavCollisionCylinder
/// Size: 0x0014 (0x000000 - 0x000014)
struct FNavCollisionCylinder
{ 
	FVector                                            Offset;                                                     // 0x0000   (0x000C)  
	float                                              Radius;                                                     // 0x000C   (0x0004)  
	float                                              Height;                                                     // 0x0010   (0x0004)  
};

/// Struct /Script/NavigationSystem.NavCollisionBox
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNavCollisionBox
{ 
	FVector                                            Offset;                                                     // 0x0000   (0x000C)  
	FVector                                            Extent;                                                     // 0x000C   (0x000C)  
};

/// Class /Script/NavigationSystem.NavCollision
/// Size: 0x0068 (0x000078 - 0x0000E0)
class UNavCollision : public UNavCollisionBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0078   (0x0010)  MISSED
	TArray<FNavCollisionCylinder>                      CylinderCollision;                                          // 0x0088   (0x0010)  
	TArray<FNavCollisionBox>                           BoxCollision;                                               // 0x0098   (0x0010)  
	class UClass*                                      AreaClass;                                                  // 0x00A8   (0x0008)  
	bool                                               bGatherConvexGeometry : 1;                                  // 0x00B0:0 (0x0001)  
	bool                                               bCreateOnClient : 1;                                        // 0x00B0:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0x2F];                                      // 0x00B1   (0x002F)  MISSED
};

/// Class /Script/NavigationSystem.NavigationGraph
/// Size: 0x0000 (0x000450 - 0x000450)
class ANavigationGraph : public ANavigationData
{ 
public:
};

/// Class /Script/NavigationSystem.NavigationGraphNode
/// Size: 0x0000 (0x000230 - 0x000230)
class ANavigationGraphNode : public AActor
{ 
public:
};

/// Struct /Script/NavigationSystem.NavGraphNode
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNavGraphNode
{ 
	class UObject*                                     Owner;                                                      // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Class /Script/NavigationSystem.NavigationGraphNodeComponent
/// Size: 0x0020 (0x000220 - 0x000240)
class UNavigationGraphNodeComponent : public USceneComponent
{ 
public:
	FNavGraphNode                                      Node;                                                       // 0x0218   (0x0018)  
	class UNavigationGraphNodeComponent*               NextNodeComponent;                                          // 0x0230   (0x0008)  
	class UNavigationGraphNodeComponent*               PrevNodeComponent;                                          // 0x0238   (0x0008)  
};

/// Class /Script/NavigationSystem.NavigationInvokerComponent
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UNavigationInvokerComponent : public UActorComponent
{ 
public:
	float                                              TileGenerationRadius;                                       // 0x00B8   (0x0004)  
	float                                              TileRemovalRadius;                                          // 0x00BC   (0x0004)  
};

/// Class /Script/NavigationSystem.NavigationPath
/// Size: 0x0060 (0x000030 - 0x000090)
class UNavigationPath : public UObject
{ 
public:
	SDK_UNDEFINED(16,858) /* FMulticastInlineDelegate */ __um(PathUpdatedNotifier);                                // 0x0030   (0x0010)  
	TArray<FVector>                                    PathPoints;                                                 // 0x0040   (0x0010)  
	SDK_UNDEFINED(1,859) /* TEnumAsByte<ENavigationOptionFlag> */ __um(RecalculateOnInvalidation);                 // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3F];                                      // 0x0051   (0x003F)  MISSED


	/// Functions
	// Function /Script/NavigationSystem.NavigationPath.IsValid
	// bool IsValid();                                                                                                       // [0x83f40b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.IsStringPulled
	// bool IsStringPulled();                                                                                                // [0x44bd900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.IsPartial
	// bool IsPartial();                                                                                                     // [0x83f4080] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.GetPathLength
	// float GetPathLength();                                                                                                // [0x83f3940] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.GetPathCost
	// float GetPathCost();                                                                                                  // [0x83f36e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.GetDebugString
	// FString GetDebugString();                                                                                             // [0x83f35d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
	// void EnableRecalculationOnInvalidation(TEnumAsByte<ENavigationOptionFlag> DoRecalculation);                           // [0x83f3170] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationPath.EnableDebugDrawing
	// void EnableDebugDrawing(bool bShouldDrawDebugData, FLinearColor PathColor);                                           // [0x83f3090] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavigationPathGenerator
/// Size: 0x0000 (0x000030 - 0x000030)
class UNavigationPathGenerator : public UInterface
{ 
public:
};

/// Class /Script/NavigationSystem.NavigationSystemV1
/// Size: 0x15D8 (0x000030 - 0x001608)
class UNavigationSystemV1 : public UNavigationSystemBase
{ 
public:
	class ANavigationData*                             MainNavData;                                                // 0x0030   (0x0008)  
	class ANavigationData*                             AbstractNavData;                                            // 0x0038   (0x0008)  
	FName                                              DefaultAgentName;                                           // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	SDK_UNDEFINED(48,860) /* TWeakObjectPtr<UClass*> */ __um(CrowdManagerClass);                                   // 0x0050   (0x0030)  
	bool                                               bAutoCreateNavigationData : 1;                              // 0x0080:0 (0x0001)  
	bool                                               bSpawnNavDataInNavBoundsLevel : 1;                          // 0x0080:1 (0x0001)  
	bool                                               bAllowClientSideNavigation : 1;                             // 0x0080:2 (0x0001)  
	bool                                               bShouldDiscardSubLevelNavData : 1;                          // 0x0080:3 (0x0001)  
	bool                                               bTickWhilePaused : 1;                                       // 0x0080:4 (0x0001)  
	bool                                               bSupportRebuilding : 1;                                     // 0x0080:5 (0x0001)  
	bool                                               bInitialBuildingLocked : 1;                                 // 0x0080:6 (0x0001)  
	unsigned char                                      UnknownBit01 : 1;                                           // 0x0080:7 (0x0001)  MISSED
	bool                                               bSkipAgentHeightCheckWhenPickingNavData : 1;                // 0x0081:0 (0x0001)  
	bool                                               bGenerateNavigationOnlyAroundNavigationInvokers : 1;        // 0x0081:1 (0x0001)  
	unsigned char                                      UnknownData02_4[0x2];                                       // 0x0082   (0x0002)  MISSED
	float                                              ActiveTilesUpdateInterval;                                  // 0x0084   (0x0004)  
	ENavDataGatheringModeConfig                        DataGatheringMode;                                          // 0x0088   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0089   (0x0003)  MISSED
	float                                              DirtyAreaWarningSizeThreshold;                              // 0x008C   (0x0004)  
	TArray<FNavDataConfig>                             SupportedAgents;                                            // 0x0090   (0x0010)  
	FNavAgentSelector                                  SupportedAgentsMask;                                        // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x00A4   (0x0004)  MISSED
	TArray<class ANavigationData*>                     NavDataSet;                                                 // 0x00A8   (0x0010)  
	TArray<class ANavigationData*>                     NavDataRegistrationQueue;                                   // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData05_5[0x10];                                      // 0x00C8   (0x0010)  MISSED
	SDK_UNDEFINED(16,861) /* FMulticastInlineDelegate */ __um(OnNavDataRegisteredEvent);                           // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,862) /* FMulticastInlineDelegate */ __um(OnNavigationGenerationFinishedDelegate);             // 0x00E8   (0x0010)  
	unsigned char                                      UnknownData06_5[0xE8];                                      // 0x00F8   (0x00E8)  MISSED
	FNavigationSystemRunMode                           OperationMode;                                              // 0x01E0   (0x0001)  
	unsigned char                                      UnknownData07_5[0x1403];                                    // 0x01E1   (0x1403)  MISSED
	float                                              DirtyAreasUpdateFreq;                                       // 0x15E4   (0x0004)  
	unsigned char                                      UnknownData08_6[0x20];                                      // 0x15E8   (0x0020)  MISSED


	/// Functions
	// Function /Script/NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker
	// void UnregisterNavigationInvoker(class AActor* Invoker);                                                              // [0x83f50a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.SimpleMoveToLocation
	// void SimpleMoveToLocation(class AController* Controller, FVector& Goal);                                              // [0x83f4fe0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.SimpleMoveToActor
	// void SimpleMoveToActor(class AController* Controller, class AActor* Goal);                                            // [0x83f4f20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
	// void SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs);                                              // [0x83f4e90] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode
	// void SetGeometryGatheringMode(ENavDataGatheringModeConfig newMode);                                                   // [0x83f4e10] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount
	// void ResetMaxSimultaneousTileGenerationJobsCount();                                                                   // [0x83f4df0] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker
	// void RegisterNavigationInvoker(class AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);           // [0x83f4ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.ProjectPointToNavigation
	// FVector ProjectPointToNavigation(class UObject* WorldContextObject, FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, FVector QueryExtent); // [0x83f4af0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
	// void OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume);                                                // [0x83f4a60] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.NavigationRaycast
	// bool NavigationRaycast(class UObject* WorldContextObject, FVector& RayStart, FVector& RayEnd, FVector& HitLocation, class UClass* FilterClass, class AController* Querier); // [0x83f4830] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData
	// bool K2_ReplaceAreaInOctreeData(class UObject* Object, class UClass* OldArea, class UClass* NewArea);                 // [0x83f4720] Final|Native|Public|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
	// bool K2_ProjectPointToNavigation(class UObject* WorldContextObject, FVector& Point, FVector& ProjectedLocation, class ANavigationData* NavData, class UClass* FilterClass, FVector QueryExtent); // [0x83f4520] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
	// bool K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass); // [0x83f4300] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
	// bool K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass); // [0x83f40e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius
	// bool K2_GetRandomLocationInNavigableRadius(class UObject* WorldContextObject, FVector& Origin, FVector& RandomLocation, float Radius, class ANavigationData* NavData, class UClass* FilterClass); // [0x83f40e0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
	// bool IsNavigationBeingBuiltOrLocked(class UObject* WorldContextObject);                                               // [0x83f3ff0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
	// bool IsNavigationBeingBuilt(class UObject* WorldContextObject);                                                       // [0x83f3f60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius
	// FVector GetRandomReachablePointInRadius(class UObject* WorldContextObject, FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass); // [0x83f3d80] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius
	// FVector GetRandomPointInNavigableRadius(class UObject* WorldContextObject, FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass); // [0x83f3ba0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetPathLength
	// TEnumAsByte<ENavigationQueryResult> GetPathLength(class UObject* WorldContextObject, FVector& pathStart, FVector& PathEnd, float& PathLength, class ANavigationData* NavData, class UClass* FilterClass); // [0x83f3970] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetPathCost
	// TEnumAsByte<ENavigationQueryResult> GetPathCost(class UObject* WorldContextObject, FVector& pathStart, FVector& PathEnd, float& PathCost, class ANavigationData* NavData, class UClass* FilterClass); // [0x83f3710] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.GetNavigationSystem
	// class UNavigationSystemV1* GetNavigationSystem(class UObject* WorldContextObject);                                    // [0x83f3650] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
	// class UNavigationPath* FindPathToLocationSynchronously(class UObject* WorldContextObject, FVector& pathStart, FVector& PathEnd, class AActor* pathfindingContext, class UClass* FilterClass); // [0x83f3400] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
	// class UNavigationPath* FindPathToActorSynchronously(class UObject* WorldContextObject, FVector& pathStart, class AActor* GoalActor, float tetherDistance, class AActor* pathfindingContext, class UClass* FilterClass); // [0x83f31f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavigationSystemModuleConfig
/// Size: 0x0008 (0x000068 - 0x000070)
class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{ 
public:
	bool                                               bStrictlyStatic : 1;                                        // 0x0068:0 (0x0001)  
	bool                                               bCreateOnClient : 1;                                        // 0x0068:1 (0x0001)  
	bool                                               bAutoSpawnMissingNavData : 1;                               // 0x0068:2 (0x0001)  
	bool                                               bSpawnNavDataInNavBoundsLevel : 1;                          // 0x0068:3 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/NavigationSystem.NavigationTestingActor
/// Size: 0x00F8 (0x000230 - 0x000328)
class ANavigationTestingActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0230   (0x0010)  MISSED
	class UCapsuleComponent*                           CapsuleComponent;                                           // 0x0240   (0x0008)  
	class UNavigationInvokerComponent*                 InvokerComponent;                                           // 0x0248   (0x0008)  
	bool                                               bActAsNavigationInvoker : 1;                                // 0x0250:0 (0x0001)  
	unsigned char                                      UnknownData01_4[0x7];                                       // 0x0251   (0x0007)  MISSED
	FNavAgentProperties                                NavAgentProps;                                              // 0x0258   (0x0038)  
	FVector                                            QueryingExtent;                                             // 0x0290   (0x000C)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x029C   (0x0004)  MISSED
	class ANavigationData*                             MyNavData;                                                  // 0x02A0   (0x0008)  
	FVector                                            ProjectedLocation;                                          // 0x02A8   (0x000C)  
	bool                                               bProjectedLocationValid : 1;                                // 0x02B4:0 (0x0001)  
	bool                                               bSearchStart : 1;                                           // 0x02B4:1 (0x0001)  
	unsigned char                                      UnknownData03_4[0x3];                                       // 0x02B5   (0x0003)  MISSED
	float                                              CostLimitFactor;                                            // 0x02B8   (0x0004)  
	float                                              MinimumCostLimit;                                           // 0x02BC   (0x0004)  
	bool                                               bBacktracking : 1;                                          // 0x02C0:0 (0x0001)  
	bool                                               bUseHierarchicalPathfinding : 1;                            // 0x02C0:1 (0x0001)  
	bool                                               bGatherDetailedInfo : 1;                                    // 0x02C0:2 (0x0001)  
	bool                                               bDrawDistanceToWall : 1;                                    // 0x02C0:3 (0x0001)  
	bool                                               bShowNodePool : 1;                                          // 0x02C0:4 (0x0001)  
	bool                                               bShowBestPath : 1;                                          // 0x02C0:5 (0x0001)  
	bool                                               bShowDiffWithPreviousStep : 1;                              // 0x02C0:6 (0x0001)  
	bool                                               bShouldBeVisibleInGame : 1;                                 // 0x02C0:7 (0x0001)  
	unsigned char                                      UnknownData04_4[0x3];                                       // 0x02C1   (0x0003)  MISSED
	SDK_UNDEFINED(1,863) /* TEnumAsByte<ENavCostDisplay> */ __um(CostDisplayMode);                                 // 0x02C4   (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x02C5   (0x0003)  MISSED
	FVector2D                                          TextCanvasOffset;                                           // 0x02C8   (0x0008)  
	bool                                               bPathExist : 1;                                             // 0x02D0:0 (0x0001)  
	bool                                               bPathIsPartial : 1;                                         // 0x02D0:1 (0x0001)  
	bool                                               bPathSearchOutOfNodes : 1;                                  // 0x02D0:2 (0x0001)  
	unsigned char                                      UnknownData06_4[0x3];                                       // 0x02D1   (0x0003)  MISSED
	float                                              PathfindingTime;                                            // 0x02D4   (0x0004)  
	float                                              PathCost;                                                   // 0x02D8   (0x0004)  
	int32_t                                            PathfindingSteps;                                           // 0x02DC   (0x0004)  
	class ANavigationTestingActor*                     OtherActor;                                                 // 0x02E0   (0x0008)  
	class UClass*                                      FilterClass;                                                // 0x02E8   (0x0008)  
	int32_t                                            ShowStepIndex;                                              // 0x02F0   (0x0004)  
	float                                              OffsetFromCornersDistance;                                  // 0x02F4   (0x0004)  
	unsigned char                                      UnknownData07_6[0x30];                                      // 0x02F8   (0x0030)  MISSED
};

/// Class /Script/NavigationSystem.NavLinkComponent
/// Size: 0x0020 (0x000480 - 0x0004A0)
class UNavLinkComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0480   (0x0008)  MISSED
	TArray<FNavigationLink>                            Links;                                                      // 0x0488   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0498   (0x0008)  MISSED
};

/// Class /Script/NavigationSystem.NavLinkCustomInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UNavLinkCustomInterface : public UInterface
{ 
public:
};

/// Class /Script/NavigationSystem.NavLinkHostInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UNavLinkHostInterface : public UInterface
{ 
public:
};

/// Class /Script/NavigationSystem.NavLinkRenderingComponent
/// Size: 0x0000 (0x000480 - 0x000480)
class UNavLinkRenderingComponent : public UPrimitiveComponent
{ 
public:
};

/// Class /Script/NavigationSystem.NavLinkTrivial
/// Size: 0x0000 (0x000058 - 0x000058)
class UNavLinkTrivial : public UNavLinkDefinition
{ 
public:
};

/// Class /Script/NavigationSystem.NavMeshBoundsVolume
/// Size: 0x0008 (0x000268 - 0x000270)
class ANavMeshBoundsVolume : public AVolume
{ 
public:
	FNavAgentSelector                                  SupportedAgents;                                            // 0x0268   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x026C   (0x0004)  MISSED
};

/// Class /Script/NavigationSystem.NavMeshRenderingComponent
/// Size: 0x0010 (0x000480 - 0x000490)
class UNavMeshRenderingComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0480   (0x0010)  MISSED
};

/// Class /Script/NavigationSystem.NavModifierVolume
/// Size: 0x0018 (0x000268 - 0x000280)
class ANavModifierVolume : public AVolume
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0268   (0x0008)  MISSED
	class UClass*                                      AreaClass;                                                  // 0x0270   (0x0008)  
	bool                                               bMaskFillCollisionUnderneathForNavmesh;                     // 0x0278   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0279   (0x0007)  MISSED


	/// Functions
	// Function /Script/NavigationSystem.NavModifierVolume.SetAreaClass
	// void SetAreaClass(class UClass* NewAreaClass);                                                                        // [0x83f70c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/NavigationSystem.NavNodeInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UNavNodeInterface : public UInterface
{ 
public:
};

/// Class /Script/NavigationSystem.NavSystemConfigOverride
/// Size: 0x0010 (0x000230 - 0x000240)
class ANavSystemConfigOverride : public AActor
{ 
public:
	class UNavigationSystemConfig*                     NavigationSystemConfig;                                     // 0x0230   (0x0008)  
	ENavSystemOverridePolicy                           OverridePolicy;                                             // 0x0238   (0x0001)  
	bool                                               bLoadOnClient : 1;                                          // 0x0239:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x023A   (0x0006)  MISSED
};

/// Class /Script/NavigationSystem.NavTestRenderingComponent
/// Size: 0x0000 (0x000480 - 0x000480)
class UNavTestRenderingComponent : public UPrimitiveComponent
{ 
public:
};

/// Class /Script/NavigationSystem.RecastFilter_UseDefaultArea
/// Size: 0x0000 (0x000050 - 0x000050)
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{ 
public:
};

/// Class /Script/NavigationSystem.RecastNavMeshDataChunk
/// Size: 0x0010 (0x000040 - 0x000050)
class URecastNavMeshDataChunk : public UNavigationDataChunk
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Struct /Script/NavigationSystem.NavGraphEdge
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNavGraphEdge
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/NavigationSystem.NavLinkCustomInstanceData
/// Size: 0x0008 (0x000068 - 0x000070)
struct FNavLinkCustomInstanceData : FActorComponentInstanceData
{ 
	uint32_t                                           NavLinkUserId;                                              // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/NavigationSystem.RecastNavMeshGenerationProperties
/// Size: 0x0040 (0x000000 - 0x000040)
struct FRecastNavMeshGenerationProperties
{ 
	int32_t                                            TilePoolSize;                                               // 0x0000   (0x0004)  
	float                                              TileSizeUU;                                                 // 0x0004   (0x0004)  
	float                                              CellSize;                                                   // 0x0008   (0x0004)  
	float                                              CellHeight;                                                 // 0x000C   (0x0004)  
	float                                              AgentRadius;                                                // 0x0010   (0x0004)  
	float                                              AgentHeight;                                                // 0x0014   (0x0004)  
	float                                              AgentMaxSlope;                                              // 0x0018   (0x0004)  
	float                                              AgentMaxStepHeight;                                         // 0x001C   (0x0004)  
	float                                              MinRegionArea;                                              // 0x0020   (0x0004)  
	float                                              MergeRegionSize;                                            // 0x0024   (0x0004)  
	float                                              MaxSimplificationError;                                     // 0x0028   (0x0004)  
	int32_t                                            TileNumberHardLimit;                                        // 0x002C   (0x0004)  
	SDK_UNDEFINED(1,864) /* TEnumAsByte<ERecastPartitioning> */ __um(RegionPartitioning);                          // 0x0030   (0x0001)  
	SDK_UNDEFINED(1,865) /* TEnumAsByte<ERecastPartitioning> */ __um(LayerPartitioning);                           // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0032   (0x0002)  MISSED
	int32_t                                            RegionChunkSplits;                                          // 0x0034   (0x0004)  
	int32_t                                            LayerChunkSplits;                                           // 0x0038   (0x0004)  
	bool                                               bSortNavigationAreasByCost : 1;                             // 0x003C:0 (0x0001)  
	bool                                               bPerformVoxelFiltering : 1;                                 // 0x003C:1 (0x0001)  
	bool                                               bMarkLowHeightAreas : 1;                                    // 0x003C:2 (0x0001)  
	bool                                               bUseExtraTopCellWhenMarkingAreas : 1;                       // 0x003C:3 (0x0001)  
	bool                                               bFilterLowSpanSequences : 1;                                // 0x003C:4 (0x0001)  
	bool                                               bFilterLowSpanFromTileCache : 1;                            // 0x003C:5 (0x0001)  
	bool                                               bFixedTilePoolSize : 1;                                     // 0x003C:6 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x003D   (0x0003)  MISSED
};

