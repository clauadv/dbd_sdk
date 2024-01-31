
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: DBDSharedTypes
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: NavigationSystem
/// dependency: TheDemogorgon

/// Enum /Script/DBDBots.ETargetObjectType
/// Size: 0x07
enum class ETargetObjectType : uint8_t
{
	ETargetObjectType__None                                                          = 0,
	ETargetObjectType__Survivor                                                      = 1,
	ETargetObjectType__Generator                                                     = 2,
	ETargetObjectType__Hook                                                          = 4,
	ETargetObjectType__SurvivorOrGenerator                                           = 3,
	ETargetObjectType__Max                                                           = 8,
	ETargetObjectType__ETargetObjectType_MAX                                         = 9
};

/// Enum /Script/DBDBots.ETrackedKillerState
/// Size: 0x04
enum class ETrackedKillerState : uint8_t
{
	ETrackedKillerState__Patrolling                                                  = 0,
	ETrackedKillerState__Chasing                                                     = 1,
	ETrackedKillerState__Carrying                                                    = 2,
	ETrackedKillerState__ETrackedKillerState_MAX                                     = 3
};

/// Enum /Script/DBDBots.EInteractionCancelInputModes
/// Size: 0x03
enum class EInteractionCancelInputModes : uint8_t
{
	EInteractionCancelInputModes__PressCancelInput                                   = 0,
	EInteractionCancelInputModes__InvertWithStopInputFlow                            = 1,
	EInteractionCancelInputModes__EInteractionCancelInputModes_MAX                   = 2
};

/// Enum /Script/DBDBots.EInteractionSkillInputModes
/// Size: 0x06
enum class EInteractionSkillInputModes : uint8_t
{
	EInteractionSkillInputModes__Once                                                = 0,
	EInteractionSkillInputModes__Hold                                                = 1,
	EInteractionSkillInputModes__Toggle                                              = 2,
	EInteractionSkillInputModes__ToggleHold                                          = 3,
	EInteractionSkillInputModes__OneClickHold                                        = 4,
	EInteractionSkillInputModes__EInteractionSkillInputModes_MAX                     = 5
};

/// Enum /Script/DBDBots.EGeneratorDangerRating
/// Size: 0x04
enum class EGeneratorDangerRating : uint8_t
{
	EGeneratorDangerRating__Safe                                                     = 0,
	EGeneratorDangerRating__Neutral                                                  = 1,
	EGeneratorDangerRating__Dangerous                                                = 2,
	EGeneratorDangerRating__EGeneratorDangerRating_MAX                               = 3
};

/// Enum /Script/DBDBots.EInteractionTargetInSightModes
/// Size: 0x05
enum class EInteractionTargetInSightModes : uint8_t
{
	EInteractionTargetInSightModes__None                                             = 0,
	EInteractionTargetInSightModes__MustBeInSight                                    = 1,
	EInteractionTargetInSightModes__MustBeInSight_NoObstruction                      = 2,
	EInteractionTargetInSightModes__ActivateIfOutOfSight                             = 3,
	EInteractionTargetInSightModes__EInteractionTargetInSightModes_MAX               = 4
};

/// Enum /Script/DBDBots.EInteractionTargetRequirements
/// Size: 0x06
enum class EInteractionTargetRequirements : uint8_t
{
	EInteractionTargetRequirements__BestTargetMustBeValid                            = 0,
	EInteractionTargetRequirements__AnyValidTarget                                   = 1,
	EInteractionTargetRequirements__AnyTarget                                        = 2,
	EInteractionTargetRequirements__NoTarget                                         = 3,
	EInteractionTargetRequirements__None                                             = 4,
	EInteractionTargetRequirements__EInteractionTargetRequirements_MAX               = 5
};

/// Enum /Script/DBDBots.EAIThrowProjectileModes
/// Size: 0x03
enum class EAIThrowProjectileModes : uint8_t
{
	EAIThrowProjectileModes__OneShot                                                 = 0,
	EAIThrowProjectileModes__Continuous                                              = 1,
	EAIThrowProjectileModes__EAIThrowProjectileModes_MAX                             = 2
};

/// Enum /Script/DBDBots.EAIThrowPredictionModes
/// Size: 0x03
enum class EAIThrowPredictionModes : uint8_t
{
	EAIThrowPredictionModes__FindBestThrowPowerRatio                                 = 0,
	EAIThrowPredictionModes__FullThrowPowerRatio                                     = 1,
	EAIThrowPredictionModes__EAIThrowPredictionModes_MAX                             = 2
};

/// Enum /Script/DBDBots.EPlayerFilter
/// Size: 0x04
enum class EPlayerFilter : uint8_t
{
	EPlayerFilter__Self                                                              = 0,
	EPlayerFilter__AnyFriend                                                         = 1,
	EPlayerFilter__AnyOpponent                                                       = 2,
	EPlayerFilter__EPlayerFilter_MAX                                                 = 3
};

/// Enum /Script/DBDBots.EIsCamperStateOnFilter
/// Size: 0x03
enum class EIsCamperStateOnFilter : uint8_t
{
	EIsCamperStateOnFilter__OnBlackboardKey                                          = 0,
	EIsCamperStateOnFilter__OnOthersThanSelf                                         = 1,
	EIsCamperStateOnFilter__EIsCamperStateOnFilter_MAX                               = 2
};

/// Enum /Script/DBDBots.EInteractionCheckType
/// Size: 0x03
enum class EInteractionCheckType : uint8_t
{
	EInteractionCheckType__InteractionID                                             = 0,
	EInteractionCheckType__InputType                                                 = 1,
	EInteractionCheckType__EInteractionCheckType_MAX                                 = 2
};

/// Enum /Script/DBDBots.EIsInteractionAvailableOnFilter
/// Size: 0x04
enum class EIsInteractionAvailableOnFilter : uint8_t
{
	EIsInteractionAvailableOnFilter__Self                                            = 0,
	EIsInteractionAvailableOnFilter__AnyFriend                                       = 1,
	EIsInteractionAvailableOnFilter__Interactor                                      = 2,
	EIsInteractionAvailableOnFilter__EIsInteractionAvailableOnFilter_MAX             = 3
};

/// Enum /Script/DBDBots.EDecoratorIsObjFocusedFilter
/// Size: 0x03
enum class EDecoratorIsObjFocusedFilter : uint8_t
{
	EDecoratorIsObjFocusedFilter__Self                                               = 0,
	EDecoratorIsObjFocusedFilter__SelfNearest                                        = 1,
	EDecoratorIsObjFocusedFilter__EDecoratorIsObjFocusedFilter_MAX                   = 2
};

/// Enum /Script/DBDBots.ETunableComparison
/// Size: 0x07
enum class ETunableComparison : uint8_t
{
	ETunableComparison__Equal                                                        = 0,
	ETunableComparison__NotEqual                                                     = 1,
	ETunableComparison__Less                                                         = 2,
	ETunableComparison__LessOrEqual                                                  = 3,
	ETunableComparison__Greater                                                      = 4,
	ETunableComparison__GreaterOrEqual                                               = 5,
	ETunableComparison__ETunableComparison_MAX                                       = 6
};

/// Enum /Script/DBDBots.EItemType
/// Size: 0x04
enum class EItemType : uint8_t
{
	EItemType__RegularItem                                                           = 0,
	EItemType__SpecialItem                                                           = 1,
	EItemType__CursedItem                                                            = 2,
	EItemType__EItemType_MAX                                                         = 3
};

/// Enum /Script/DBDBots.EFindInteractableCamperFilter
/// Size: 0x06
enum class EFindInteractableCamperFilter : uint8_t
{
	EFindInteractableCamperFilter__Crawling                                          = 0,
	EFindInteractableCamperFilter__Standing                                          = 1,
	EFindInteractableCamperFilter__GiveHelp                                          = 2,
	EFindInteractableCamperFilter__RequestHelp                                       = 3,
	EFindInteractableCamperFilter__RescuableBeingCarried                             = 4,
	EFindInteractableCamperFilter__EFindInteractableCamperFilter_MAX                 = 5
};

/// Enum /Script/DBDBots.EFindInteractorOpenConditions
/// Size: 0x05
enum class EFindInteractorOpenConditions : uint8_t
{
	EFindInteractorOpenConditions__AllGate_OpenedHatch                               = 0,
	EFindInteractorOpenConditions__All                                               = 1,
	EFindInteractorOpenConditions__ClosedOnly                                        = 2,
	EFindInteractorOpenConditions__OpenedOnly                                        = 3,
	EFindInteractorOpenConditions__EFindInteractorOpenConditions_MAX                 = 4
};

/// Enum /Script/DBDBots.EFindInteractorExitOptions
/// Size: 0x04
enum class EFindInteractorExitOptions : uint8_t
{
	EFindInteractorExitOptions__All                                                  = 0,
	EFindInteractorExitOptions__HatchOnly                                            = 1,
	EFindInteractorExitOptions__GateOnly                                             = 2,
	EFindInteractorExitOptions__EFindInteractorExitOptions_MAX                       = 3
};

/// Enum /Script/DBDBots.EFindInteractableGeneratorStatusFilter
/// Size: 0x03
enum class EFindInteractableGeneratorStatusFilter : uint8_t
{
	EFindInteractableGeneratorStatusFilter__NeedRepair                               = 0,
	EFindInteractableGeneratorStatusFilter__CanBeDamaged                             = 1,
	EFindInteractableGeneratorStatusFilter__EFindInteractableGeneratorStatusFilter_MAX = 2
};

/// Enum /Script/DBDBots.EInLockerPerkEmptyHandType
/// Size: 0x05
enum class EInLockerPerkEmptyHandType : uint8_t
{
	EInLockerPerkEmptyHandType__None                                                 = 0,
	EInLockerPerkEmptyHandType__SurvivorItem                                         = 1,
	EInLockerPerkEmptyHandType__SpecialItem                                          = 2,
	EInLockerPerkEmptyHandType__Both                                                 = 3,
	EInLockerPerkEmptyHandType__EInLockerPerkEmptyHandType_MAX                       = 4
};

/// Enum /Script/DBDBots.EFindInteractableLockerStatusFilter
/// Size: 0x04
enum class EFindInteractableLockerStatusFilter : uint8_t
{
	EFindInteractableLockerStatusFilter__Empty                                       = 0,
	EFindInteractableLockerStatusFilter__Occupied                                    = 1,
	EFindInteractableLockerStatusFilter__Both                                        = 2,
	EFindInteractableLockerStatusFilter__EFindInteractableLockerStatusFilter_MAX     = 3
};

/// Enum /Script/DBDBots.EFindInteractableMeatHookStatus
/// Size: 0x04
enum class EFindInteractableMeatHookStatus : uint8_t
{
	EFindInteractableMeatHookStatus__HookedSurvivor                                  = 0,
	EFindInteractableMeatHookStatus__Available                                       = 1,
	EFindInteractableMeatHookStatus__Sabotage                                        = 2,
	EFindInteractableMeatHookStatus__EFindInteractableMeatHookStatus_MAX             = 3
};

/// Enum /Script/DBDBots.EFindInteractablePalletIntentions
/// Size: 0x03
enum class EFindInteractablePalletIntentions : uint8_t
{
	EFindInteractablePalletIntentions__Fall                                          = 0,
	EFindInteractablePalletIntentions__Raise                                         = 1,
	EFindInteractablePalletIntentions__EFindInteractablePalletIntentions_MAX         = 2
};

/// Enum /Script/DBDBots.EAINodeRelevancyOptions
/// Size: 0x05
enum class EAINodeRelevancyOptions : uint8_t
{
	EAINodeRelevancyOptions__OnEnter                                                 = 0,
	EAINodeRelevancyOptions__OnExit                                                  = 1,
	EAINodeRelevancyOptions__OnEnterAndExit                                          = 2,
	EAINodeRelevancyOptions__OnTick                                                  = 3,
	EAINodeRelevancyOptions__EAINodeRelevancyOptions_MAX                             = 4
};

/// Enum /Script/DBDBots.EAIInvestigateSteps
/// Size: 0x04
enum class EAIInvestigateSteps : uint8_t
{
	EAIInvestigateSteps__None                                                        = 0,
	EAIInvestigateSteps__ToInvestigation                                             = 1,
	EAIInvestigateSteps__Investigating                                               = 2,
	EAIInvestigateSteps__EAIInvestigateSteps_MAX                                     = 3
};

/// Enum /Script/DBDBots.EExtMoveToStrafeFocusOptions
/// Size: 0x06
enum class EExtMoveToStrafeFocusOptions : uint8_t
{
	EExtMoveToStrafeFocusOptions__Never                                              = 0,
	EExtMoveToStrafeFocusOptions__NearFocus                                          = 1,
	EExtMoveToStrafeFocusOptions__NearGoal                                           = 2,
	EExtMoveToStrafeFocusOptions__Always                                             = 3,
	EExtMoveToStrafeFocusOptions__Intermittent                                       = 4,
	EExtMoveToStrafeFocusOptions__EExtMoveToStrafeFocusOptions_MAX                   = 5
};

/// Enum /Script/DBDBots.ETaskInputPressModes
/// Size: 0x04
enum class ETaskInputPressModes : uint8_t
{
	ETaskInputPressModes__Once                                                       = 0,
	ETaskInputPressModes__Loop                                                       = 1,
	ETaskInputPressModes__Hold                                                       = 2,
	ETaskInputPressModes__ETaskInputPressModes_MAX                                   = 3
};

/// Enum /Script/DBDBots.EPassiveCameraState
/// Size: 0x06
enum class EPassiveCameraState : uint8_t
{
	EPassiveCameraState__Inactive                                                    = 0,
	EPassiveCameraState__Idle                                                        = 1,
	EPassiveCameraState__Moving                                                      = 2,
	EPassiveCameraState__Interaction                                                 = 3,
	EPassiveCameraState__Hooked                                                      = 4,
	EPassiveCameraState__EPassiveCameraState_MAX                                     = 5
};

/// Enum /Script/DBDBots.EAIPressureZoneLevel
/// Size: 0x05
enum class EAIPressureZoneLevel : uint8_t
{
	EAIPressureZoneLevel__LMin                                                       = 0,
	EAIPressureZoneLevel__L01                                                        = 1,
	EAIPressureZoneLevel__L02                                                        = 2,
	EAIPressureZoneLevel__LMax                                                       = 3,
	EAIPressureZoneLevel__EAIPressureZoneLevel_MAX                                   = 4
};

/// Enum /Script/DBDBots.EAIGameState
/// Size: 0x07
enum class EAIGameState : uint8_t
{
	EAIGameState__VeryEarly                                                          = 0,
	EAIGameState__Early                                                              = 1,
	EAIGameState__Mid                                                                = 2,
	EAIGameState__Late                                                               = 3,
	EAIGameState__VeryLate                                                           = 4,
	EAIGameState__Max                                                                = 5,
	EAIGameState__EAIGameState_MAX                                                   = 6
};

/// Enum /Script/DBDBots.EAIObjectiveState
/// Size: 0x05
enum class EAIObjectiveState : uint8_t
{
	EAIObjectiveState__Early                                                         = 0,
	EAIObjectiveState__Mid                                                           = 1,
	EAIObjectiveState__Last                                                          = 2,
	EAIObjectiveState__Completed                                                     = 3,
	EAIObjectiveState__EAIObjectiveState_MAX                                         = 4
};

/// Enum /Script/DBDBots.EAIDangerState
/// Size: 0x04
enum class EAIDangerState : uint8_t
{
	EAIDangerState__Safe                                                             = 0,
	EAIDangerState__Unsafe                                                           = 1,
	EAIDangerState__Dire                                                             = 2,
	EAIDangerState__EAIDangerState_MAX                                               = 3
};

/// Enum /Script/DBDBots.ENavLinkPlayerStates
/// Size: 0x06
enum class ENavLinkPlayerStates : uint8_t
{
	ENavLinkPlayerStates__RequestStart                                               = 0,
	ENavLinkPlayerStates__MoveStart                                                  = 1,
	ENavLinkPlayerStates__Using                                                      = 2,
	ENavLinkPlayerStates__MoveEnd                                                    = 3,
	ENavLinkPlayerStates__Release                                                    = 4,
	ENavLinkPlayerStates__ENavLinkPlayerStates_MAX                                   = 5
};

/// Enum /Script/DBDBots.EPathBuildResult
/// Size: 0x06
enum class EPathBuildResult : uint8_t
{
	EPathBuildResult__None                                                           = 0,
	EPathBuildResult__Failed                                                         = 1,
	EPathBuildResult__Succeeded                                                      = 2,
	EPathBuildResult__Partial                                                        = 3,
	EPathBuildResult__InProgress                                                     = 4,
	EPathBuildResult__EPathBuildResult_MAX                                           = 5
};

/// Enum /Script/DBDBots.EAIFleeLoopStrategy
/// Size: 0x03
enum class EAIFleeLoopStrategy : uint8_t
{
	EAIFleeLoopStrategy__LoseKiller                                                  = 0,
	EAIFleeLoopStrategy__WasteTime                                                   = 1,
	EAIFleeLoopStrategy__EAIFleeLoopStrategy_MAX                                     = 2
};

/// Enum /Script/DBDBots.EAIFleePathStrategy
/// Size: 0x07
enum class EAIFleePathStrategy : uint8_t
{
	EAIFleePathStrategy__None                                                        = 0,
	EAIFleePathStrategy__KeepGoal                                                    = 1,
	EAIFleePathStrategy__Away                                                        = 2,
	EAIFleePathStrategy__Loop                                                        = 3,
	EAIFleePathStrategy__AwayLOS                                                     = 4,
	EAIFleePathStrategy__Lure                                                        = 5,
	EAIFleePathStrategy__EAIFleePathStrategy_MAX                                     = 6
};

/// Class /Script/DBDBots.AIDisplayDebugInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UAIDisplayDebugInterface : public UInterface
{ 
public:
};

/// Class /Script/DBDBots.AIEnemyTargetPrediction
/// Size: 0x0098 (0x000030 - 0x0000C8)
class UAIEnemyTargetPrediction : public UObject
{ 
public:
	FAITunableParameter                                DistanceToTargetScore;                                      // 0x0030   (0x0010)  
	FAITunableParameter                                SpeedToTargetScore;                                         // 0x0040   (0x0010)  
	FAITunableParameter                                PredictedTargetValidTime;                                   // 0x0050   (0x0010)  
	unsigned char                                      UnknownData00_6[0x68];                                      // 0x0060   (0x0068)  MISSED
};

/// Class /Script/DBDBots.AIEnemyTracker
/// Size: 0x0020 (0x000030 - 0x000050)
class UAIEnemyTracker : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0030   (0x0020)  MISSED
};

/// Class /Script/DBDBots.AIEnemyTracker_Killer
/// Size: 0x0000 (0x000050 - 0x000050)
class UAIEnemyTracker_Killer : public UAIEnemyTracker
{ 
public:
};

/// Class /Script/DBDBots.AIEnemyTracker_Survivor
/// Size: 0x0038 (0x000050 - 0x000088)
class UAIEnemyTracker_Survivor : public UAIEnemyTracker
{ 
public:
	float                                              TerrorRadiusDistanceRange;                                  // 0x0050   (0x0004)  
	float                                              ChaseDistanceRange;                                         // 0x0054   (0x0004)  
	float                                              DownedAllyDistanceRange;                                    // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_6[0x2C];                                      // 0x005C   (0x002C)  MISSED
};

/// Class /Script/DBDBots.AIGoalGeneratorInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UAIGoalGeneratorInterface : public UInterface
{ 
public:
};

/// Class /Script/DBDBots.AIIntentionValidatorInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UAIIntentionValidatorInterface : public UInterface
{ 
public:
};

/// Class /Script/DBDBots.AIPathValidatorInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UAIPathValidatorInterface : public UInterface
{ 
public:
};

/// Struct /Script/DBDBots.KillerFilterItem
/// Size: 0x0008 (0x000000 - 0x000008)
struct FKillerFilterItem
{ 
	FCharacterDropdown                                 Character;                                                  // 0x0000   (0x0008)  
};

/// Struct /Script/DBDBots.AdditionalDynamicSubtree
/// Size: 0x0030 (0x000000 - 0x000030)
struct FAdditionalDynamicSubtree
{ 
	FGameplayTagContainer                              DynamicSubtreeContexts;                                     // 0x0000   (0x0020)  
	bool                                               AlwaysEnable;                                               // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	class UBehaviorTree*                               DynamicSubtree;                                             // 0x0028   (0x0008)  
};

/// Class /Script/DBDBots.AISkill
/// Size: 0x00B0 (0x000030 - 0x0000E0)
class UAISkill : public UObject
{ 
public:
	FGameplayTagContainer                              RunContexts;                                                // 0x0030   (0x0020)  
	bool                                               StopIfPausedByNavLinkProxy;                                 // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0051   (0x0003)  MISSED
	float                                              RunTimeLimit;                                               // 0x0054   (0x0004)  
	float                                              RunCooldownTime;                                            // 0x0058   (0x0004)  
	float                                              RunCooldownTimeDeviation;                                   // 0x005C   (0x0004)  
	class UClass*                                      SkillNavigationFilterClass;                                 // 0x0060   (0x0008)  
	TArray<class UAISenseConfig*>                      SkillSenseConfigs;                                          // 0x0068   (0x0010)  
	TArray<FKillerFilterItem>                          KillerFilter;                                               // 0x0078   (0x0010)  
	class UBehaviorTree*                               DynamicSubtree;                                             // 0x0088   (0x0008)  
	TArray<FAdditionalDynamicSubtree>                  AdditionalDynamicSubtrees;                                  // 0x0090   (0x0010)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x00A0   (0x0018)  MISSED
	TArray<class UObject*>                             _pausedByObjects;                                           // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData02_5[0x10];                                      // 0x00C8   (0x0010)  MISSED
	class ADBDAIBTController*                          _aiControllerOwner;                                         // 0x00D8   (0x0008)  
};

/// Class /Script/DBDBots.AISkill_BuiltToLast
/// Size: 0x0030 (0x0000E0 - 0x000110)
class UAISkill_BuiltToLast : public UAISkill
{ 
public:
	FDataTableDropdown                                 perkId;                                                     // 0x00E0   (0x0030)  
};

/// Class /Script/DBDBots.AISkill_Interaction
/// Size: 0x00B0 (0x0000E0 - 0x000190)
class UAISkill_Interaction : public UAISkill
{ 
public:
	EPawnInputPressTypes                               inputType;                                                  // 0x00E0   (0x0001)  
	EInteractionSkillInputModes                        InputMode;                                                  // 0x00E1   (0x0001)  
	EPawnInputPressTypes                               CancelInputType;                                            // 0x00E2   (0x0001)  
	EInteractionCancelInputModes                       CancelInputMode;                                            // 0x00E3   (0x0001)  
	bool                                               AutoLockInput;                                              // 0x00E4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00E5   (0x0003)  MISSED
	FAIRoll                                            StartRoll;                                                  // 0x00E8   (0x0024)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x010C   (0x0004)  MISSED
	SDK_UNDEFINED(16,3183) /* FString */               __um(StartInteractionID);                                   // 0x0110   (0x0010)  
	SDK_UNDEFINED(16,3184) /* FString */               __um(StopInteractionID);                                    // 0x0120   (0x0010)  
	float                                              MinHoldInputTime;                                           // 0x0130   (0x0004)  
	bool                                               AutoReleaseHoldInputWhenCharged;                            // 0x0134   (0x0001)  
	unsigned char                                      UnknownData02_6[0x5B];                                      // 0x0135   (0x005B)  MISSED
};

/// Class /Script/DBDBots.AISkill_ChemicalTrapInChase
/// Size: 0x0000 (0x000190 - 0x000190)
class UAISkill_ChemicalTrapInChase : public UAISkill_Interaction
{ 
public:
};

/// Class /Script/DBDBots.AISkill_DirectionalMinigame
/// Size: 0x0068 (0x0000E0 - 0x000148)
class UAISkill_DirectionalMinigame : public UAISkill
{ 
public:
	FAIRoll                                            InputRoll;                                                  // 0x00E0   (0x0024)  
	FAITunableParameter                                InputTimeMinimum;                                           // 0x0104   (0x0010)  
	FAITunableParameter                                InputTimeVariance;                                          // 0x0114   (0x0010)  
	unsigned char                                      UnknownData00_6[0x24];                                      // 0x0124   (0x0024)  MISSED


	/// Functions
	// Function /Script/DBDBots.AISkill_DirectionalMinigame.OnMinigameStart
	// void OnMinigameStart(TArray<EDirectionalInputKey> Sequence, int32_t currentIndex);                                    // [0x4f78d60] Final|Native|Private 
	// Function /Script/DBDBots.AISkill_DirectionalMinigame.OnMinigameEnd
	// void OnMinigameEnd(EDirectionalMinigameResult Result);                                                                // [0x4f78ce0] Final|Native|Private 
};

/// Class /Script/DBDBots.AISkill_Diversion
/// Size: 0x0050 (0x0000E0 - 0x000130)
class UAISkill_Diversion : public UAISkill
{ 
public:
	FName                                              perkId;                                                     // 0x00E0   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00EC   (0x0004)  MISSED
	TArray<class UClass*>                              DiversionFromGoalClasses;                                   // 0x00F0   (0x0010)  
	EAIDifficultyLevel                                 ThrowOnInteractablesAtDifficultyLevel;                      // 0x0100   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0101   (0x0003)  MISSED
	float                                              MaxThrowOnInteractableHalfAngle;                            // 0x0104   (0x0004)  
	float                                              MaxMoveToTargetDistance;                                    // 0x0108   (0x0004)  
	FVector                                            NavMeshFindLocationExtents;                                 // 0x010C   (0x000C)  
	float                                              PlanInterval;                                               // 0x0118   (0x0004)  
	unsigned char                                      UnknownData02_6[0x14];                                      // 0x011C   (0x0014)  MISSED
};

/// Class /Script/DBDBots.AISkill_Find
/// Size: 0x00A0 (0x0000E0 - 0x000180)
class UAISkill_Find : public UAISkill
{ 
public:
	class UClass*                                      FindClass;                                                  // 0x00E0   (0x0008)  
	FGameplayTag                                       BlackboardWishListTag;                                      // 0x00E8   (0x000C)  
	float                                              SearchInterval;                                             // 0x00F4   (0x0004)  
	bool                                               MustBeSeen;                                                 // 0x00F8   (0x0001)  
	bool                                               RejectIfWasInCooldownAndFocusedOnAnotherObject;             // 0x00F9   (0x0001)  
	bool                                               IgnoreMindFocusCooldown;                                    // 0x00FA   (0x0001)  
	bool                                               AbandonIfInChase;                                           // 0x00FB   (0x0001)  
	bool                                               RejectIfInPressureZone;                                     // 0x00FC   (0x0001)  
	bool                                               RejectIfNotFocusedBySelf;                                   // 0x00FD   (0x0001)  
	bool                                               RejectIfInteractableFocusedByOther;                         // 0x00FE   (0x0001)  
	bool                                               UsesActorLocation;                                          // 0x00FF   (0x0001)  
	FAITunableParameter                                GoalBasicWeight;                                            // 0x0100   (0x0010)  
	FAITunableParameter                                GoalWeightMaxDistance;                                      // 0x0110   (0x0010)  
	FAITunableParameter                                GoalWeightAtMinDistance;                                    // 0x0120   (0x0010)  
	float                                              SearchHeightAmplifier;                                      // 0x0130   (0x0004)  
	float                                              SearchHeightAmplifierActivationHeight;                      // 0x0134   (0x0004)  
	bool                                               IsUnsafeAction;                                             // 0x0138   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0139   (0x0007)  MISSED
	SDK_UNDEFINED(16,3185) /* FString */               __um(UnsafeInteractionID);                                  // 0x0140   (0x0010)  
	bool                                               UnsafeActionUsesItemAddons;                                 // 0x0150   (0x0001)  
	bool                                               UnsafeActionIsSelfInteraction;                              // 0x0151   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0152   (0x0002)  MISSED
	float                                              UnsafeActionRange;                                          // 0x0154   (0x0004)  
	TArray<class UObject*>                             _currentWishedObjects;                                      // 0x0158   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0168   (0x0018)  MISSED
};

/// Class /Script/DBDBots.AISkill_FindInteractable
/// Size: 0x0018 (0x000180 - 0x000198)
class UAISkill_FindInteractable : public UAISkill_Find
{ 
public:
	SDK_UNDEFINED(16,3186) /* FString */               __um(RequiredInteractionId);                                // 0x0180   (0x0010)  
	EInputInteractionType                              RequiredInteractionInputType;                               // 0x0190   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0191   (0x0007)  MISSED
};

/// Class /Script/DBDBots.AISkill_FindCollectable
/// Size: 0x0008 (0x000198 - 0x0001A0)
class UAISkill_FindCollectable : public UAISkill_FindInteractable
{ 
public:
	int32_t                                            CollectUnderItemCount;                                      // 0x0198   (0x0004)  
	float                                              CollectOverItemChargeRatio;                                 // 0x019C   (0x0004)  
};

/// Class /Script/DBDBots.AISkill_FindCollectable_Camper
/// Size: 0x0050 (0x0001A0 - 0x0001F0)
class UAISkill_FindCollectable_Camper : public UAISkill_FindCollectable
{ 
public:
	float                                              CollectUnderItemWeight;                                     // 0x01A0   (0x0004)  
	float                                              CollectOverWeightRatioDifference;                           // 0x01A4   (0x0004)  
	FAITunableParameter                                WantToKeepEmptyItemPenalty;                                 // 0x01A8   (0x0010)  
	FAITunableParameter                                CloseItemDistThreshold;                                     // 0x01B8   (0x0010)  
	FAITunableParameter                                CloseItemWeightMultiplier;                                  // 0x01C8   (0x0010)  
	FAITunableParameter                                ItemGoalWeightMultiplier;                                   // 0x01D8   (0x0010)  
	float                                              EmptyItemChargeThreshold;                                   // 0x01E8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x01EC   (0x0004)  MISSED
};

/// Class /Script/DBDBots.AISkill_FindCollectable_Hatchet
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UAISkill_FindCollectable_Hatchet : public UAISkill_FindCollectable
{ 
public:
};

/// Class /Script/DBDBots.AISkill_FindCollectable_Searchable
/// Size: 0x0018 (0x0001A0 - 0x0001B8)
class UAISkill_FindCollectable_Searchable : public UAISkill_FindCollectable
{ 
public:
	float                                              SearchIntervalAfterOpenSearchable;                          // 0x01A0   (0x0004)  
	float                                              OpenSearchableRelevancyDuration;                            // 0x01A4   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x01A8   (0x0008)  MISSED
	class ASearchable*                                 _relevantSearchable;                                        // 0x01B0   (0x0008)  
};

/// Class /Script/DBDBots.AISkill_FindCollectable_Trap
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UAISkill_FindCollectable_Trap : public UAISkill_FindCollectable
{ 
public:
};

/// Class /Script/DBDBots.AISkill_FindInteractable_CloseTelevisionNearGenerator
/// Size: 0x0060 (0x000198 - 0x0001F8)
class UAISkill_FindInteractable_CloseTelevisionNearGenerator : public UAISkill_FindInteractable
{ 
public:
	FAITunableParameter                                MaximumCondemnedPercentToCloseTelevision;                   // 0x0198   (0x0010)  
	FAITunableParameter                                DistanceBetweenGeneratorAndTelevisionThreshold;             // 0x01A8   (0x0010)  
	FAITunableParameter                                BaseValue;                                                  // 0x01B8   (0x0010)  
	FAITunableParameter                                CloseTelevisionDistanceLinearWeight;                        // 0x01C8   (0x0010)  
	FAITunableParameter                                CloseTelevisionMaximumDistanceFromCamper;                   // 0x01D8   (0x0010)  
	FAITunableParameter                                MaxHeightDifferenceToCloseTelevisions;                      // 0x01E8   (0x0010)  
};

/// Class /Script/DBDBots.AISkill_FindInteractable_Drone
/// Size: 0x0058 (0x000198 - 0x0001F0)
class UAISkill_FindInteractable_Drone : public UAISkill_FindInteractable
{ 
public:
	FAITunableParameter                                BaseActiveWeight;                                           // 0x0198   (0x0010)  
	FAITunableParameter                                BaseScoutingWeight;                                         // 0x01A8   (0x0010)  
	TArray<class UClass*>                              ValidGoalObjectClasses;                                     // 0x01B8   (0x0010)  
	float                                              DroneRadiusMargin;                                          // 0x01C8   (0x0004)  
	float                                              DroneScoutingAutoDiscoverRange;                             // 0x01CC   (0x0004)  
	float                                              DroneStealthAutoDiscoverRange;                              // 0x01D0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x1C];                                      // 0x01D4   (0x001C)  MISSED
};

/// Class /Script/DBDBots.AISkill_FindInteractable_K32ItemBox
/// Size: 0x0058 (0x000198 - 0x0001F0)
class UAISkill_FindInteractable_K32ItemBox : public UAISkill_FindInteractable
{ 
public:
	FName                                              BBK32EmpTargetActor;                                        // 0x0198   (0x000C)  
	FName                                              BBOriginalFocusedActor;                                     // 0x01A4   (0x000C)  
	TArray<class UClass*>                              GoalClassesToGiveAdditionalWeight;                          // 0x01B0   (0x0010)  
	float                                              EmpTargetNearGoalWeight;                                    // 0x01C0   (0x0004)  
	float                                              NearEmpBoxGoalWeight;                                       // 0x01C4   (0x0004)  
	float                                              NearEmpBoxDistance;                                         // 0x01C8   (0x0004)  
	int32_t                                            K32EmpMaxCount;                                             // 0x01CC   (0x0004)  
	float                                              K32ItemBoxChargeWeightRatio;                                // 0x01D0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x1C];                                      // 0x01D4   (0x001C)  MISSED
};

/// Class /Script/DBDBots.AISkill_FindInteractable_K33ControlStation
/// Size: 0x0040 (0x000198 - 0x0001D8)
class UAISkill_FindInteractable_K33ControlStation : public UAISkill_FindInteractable
{ 
public:
	FAITunableParameter                                GeneratorMaxRange;                                          // 0x0198   (0x0010)  
	FAITunableParameter                                TurretProximityPenaltyMaxRange;                             // 0x01A8   (0x0010)  
	FAITunableParameter                                TurretsRemainingWeightBonus;                                // 0x01B8   (0x0010)  
	FAITunableParameter                                TurretProximityWeightPenalty;                               // 0x01C8   (0x0010)  
};

/// Class /Script/DBDBots.AISkill_FindInteractable_K33Turret
/// Size: 0x0030 (0x000198 - 0x0001C8)
class UAISkill_FindInteractable_K33Turret : public UAISkill_FindInteractable
{ 
public:
	FAITunableParameter                                RedeployGeneratorMaxRange;                                  // 0x0198   (0x0010)  
	FAITunableParameter                                UndeployGeneratorMaxRange;                                  // 0x01A8   (0x0010)  
	FAITunableParameter                                UndeployCharacterMaxRange;                                  // 0x01B8   (0x0010)  
};

/// Class /Script/DBDBots.AISkill_FindInteractable_Reassurance
/// Size: 0x00E8 (0x000198 - 0x000280)
class UAISkill_FindInteractable_Reassurance : public UAISkill_FindInteractable
{ 
public:
	class UClass*                                      ReassuranceStatusEffect;                                    // 0x0198   (0x0008)  
	FAITunableParameter                                AllyDangerStateGoalWeight;                                  // 0x01A0   (0x0010)  
	FAITunableParameter                                MaxHookTimeGoalWeight;                                      // 0x01B0   (0x0010)  
	FAITunableParameter                                HumanAllyHookedGoalWeight;                                  // 0x01C0   (0x0010)  
	FAITunableParameter                                IdealKillerDistanceFromHook;                                // 0x01D0   (0x0010)  
	FAITunableParameter                                MaxKillerProximityWeight;                                   // 0x01E0   (0x0010)  
	FAITunableParameter                                BotDangerStateGoalWeight;                                   // 0x01F0   (0x0010)  
	FAITunableParameter                                IncapacitatedAlliesGoalWeight;                              // 0x0200   (0x0010)  
	FAITunableParameter                                BotInjuredStateGoalWeight;                                  // 0x0210   (0x0010)  
	SDK_UNDEFINED(16,3187) /* TArray<TWeakObjectPtr<ACamperPlayer*>> */ __um(_hookedAndNotReassuredSurvivors);     // 0x0220   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0230   (0x0050)  MISSED
};

/// Class /Script/DBDBots.AISkill_FindInteractable_SolveCondemned
/// Size: 0x0050 (0x000198 - 0x0001E8)
class UAISkill_FindInteractable_SolveCondemned : public UAISkill_FindInteractable
{ 
public:
	FAITunableParameter                                NearCondemnedWeight;                                        // 0x0198   (0x0010)  
	FAITunableParameter                                HighCondemnedThreshold;                                     // 0x01A8   (0x0010)  
	FAITunableParameter                                MaxLockedCondemnThreshold;                                  // 0x01B8   (0x0010)  
	FAITunableParameter                                SolveCondemnedBasicWeight;                                  // 0x01C8   (0x0010)  
	FAITunableParameter                                CondemnedLevelProportionalWeight;                           // 0x01D8   (0x0010)  
};

/// Class /Script/DBDBots.AISkill_FindInteractable_SolveRBT
/// Size: 0x0020 (0x000198 - 0x0001B8)
class UAISkill_FindInteractable_SolveRBT : public UAISkill_FindInteractable
{ 
public:
	FAITunableParameter                                UrgencyGoalWeight;                                          // 0x0198   (0x0010)  
	FAITunableParameter                                PriorityGoalWeight;                                         // 0x01A8   (0x0010)  
};

/// Class /Script/DBDBots.AISkill_FindInteractable_SolveSickness
/// Size: 0x0030 (0x000198 - 0x0001C8)
class UAISkill_FindInteractable_SolveSickness : public UAISkill_FindInteractable
{ 
public:
	FAITunableParameter                                BaseGoalWeight;                                             // 0x0198   (0x0010)  
	FAITunableParameter                                UrgencyGoalWeight;                                          // 0x01A8   (0x0010)  
	FAITunableParameter                                InteractingGoalPenaltyWeight;                               // 0x01B8   (0x0010)  
};

/// Class /Script/DBDBots.AISkill_FindInteractable_StatusEffect
/// Size: 0x0010 (0x000198 - 0x0001A8)
class UAISkill_FindInteractable_StatusEffect : public UAISkill_FindInteractable
{ 
public:
	FGameplayTag                                       RequiredPerkFlag;                                           // 0x0198   (0x000C)  
	bool                                               InvertCondition;                                            // 0x01A4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x01A5   (0x0003)  MISSED
};

/// Class /Script/DBDBots.AISkill_FindInteractable_StatusEffect_Plague
/// Size: 0x0000 (0x0001A8 - 0x0001A8)
class UAISkill_FindInteractable_StatusEffect_Plague : public UAISkill_FindInteractable_StatusEffect
{ 
public:
};

/// Class /Script/DBDBots.AISkill_FindInteractable_Waker
/// Size: 0x0010 (0x000198 - 0x0001A8)
class UAISkill_FindInteractable_Waker : public UAISkill_FindInteractable
{ 
public:
	FAITunableParameter                                FixedGoalWeight;                                            // 0x0198   (0x0010)  
};

/// Class /Script/DBDBots.AISkill_Interaction_AttachRBT
/// Size: 0x0000 (0x000190 - 0x000190)
class UAISkill_Interaction_AttachRBT : public UAISkill_Interaction
{ 
public:
};

/// Struct /Script/DBDBots.AIHasExhaustionPerkCondition
/// Size: 0x0030 (0x000000 - 0x000030)
struct FAIHasExhaustionPerkCondition
{ 
	FDataTableDropdown                                 perkId;                                                     // 0x0000   (0x0030)  
};

/// Class /Script/DBDBots.AISkill_Interaction_BloodRush
/// Size: 0x0058 (0x000190 - 0x0001E8)
class UAISkill_Interaction_BloodRush : public UAISkill_Interaction
{ 
public:
	TArray<FAIHasExhaustionPerkCondition>              ExhaustionPerks;                                            // 0x0190   (0x0010)  
	TArray<FKillerFilterItem>                          RiskyKillerFilter;                                          // 0x01A0   (0x0010)  
	FAITunableParameter                                AfterExhaustionMinimumDelaySeconds;                         // 0x01B0   (0x0010)  
	FAITunableParameter                                MinimumRemainingExhaustionCooldownSeconds;                  // 0x01C0   (0x0010)  
	FAITunableParameter                                MinimumDistanceFromKiller;                                  // 0x01D0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x01E0   (0x0008)  MISSED
};

/// Class /Script/DBDBots.AISkill_Interaction_Clairvoyance
/// Size: 0x0018 (0x000190 - 0x0001A8)
class UAISkill_Interaction_Clairvoyance : public UAISkill_Interaction
{ 
public:
	FGameplayTag                                       DropCooldownTag;                                            // 0x0190   (0x000C)  
	float                                              DropCooldownDuration;                                       // 0x019C   (0x0004)  
	bool                                               bAddToExistingDuration;                                     // 0x01A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x01A1   (0x0007)  MISSED
};

/// Class /Script/DBDBots.AISkill_Interaction_DismissCrow
/// Size: 0x0010 (0x000190 - 0x0001A0)
class UAISkill_Interaction_DismissCrow : public UAISkill_Interaction
{ 
public:
	FName                                              BBShouldFallPallet;                                         // 0x0190   (0x000C)  
	float                                              StopAtPalletDistance;                                       // 0x019C   (0x0004)  
};

/// Class /Script/DBDBots.AISkill_Interaction_Dramaturgy
/// Size: 0x0010 (0x000190 - 0x0001A0)
class UAISkill_Interaction_Dramaturgy : public UAISkill_Interaction
{ 
public:
	FAITunableParameter                                UseDramaturgyUnderNavLinkDistance;                          // 0x0190   (0x0010)  
};

/// Class /Script/DBDBots.AISkill_Interaction_ForThePeople
/// Size: 0x0018 (0x000190 - 0x0001A8)
class UAISkill_Interaction_ForThePeople : public UAISkill_Interaction
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0190   (0x0008)  MISSED
	SDK_UNDEFINED(16,3188) /* FString */               __um(BlockInteractionId);                                   // 0x0198   (0x0010)  
};

/// Class /Script/DBDBots.AISkill_Interaction_GeneratorSecondaryInteraction
/// Size: 0x0020 (0x000190 - 0x0001B0)
class UAISkill_Interaction_GeneratorSecondaryInteraction : public UAISkill_Interaction
{ 
public:
	TArray<FPerkIdDropdown>                            Perks;                                                      // 0x0190   (0x0010)  
	TArray<FName>                                      GeneratorSecondaryInteractionIds;                           // 0x01A0   (0x0010)  
};

/// Class /Script/DBDBots.AISkill_Interaction_InLocker
/// Size: 0x0050 (0x000190 - 0x0001E0)
class UAISkill_Interaction_InLocker : public UAISkill_Interaction
{ 
public:
	FDataTableDropdown                                 perkId;                                                     // 0x0190   (0x0030)  
	FGameplayTag                                       CooldownTag;                                                // 0x01C0   (0x000C)  
	float                                              InitialRunningTime;                                         // 0x01CC   (0x0004)  
	bool                                               StartRefreshingTime;                                        // 0x01D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01D1   (0x0003)  MISSED
	float                                              RefreshTimeMargin;                                          // 0x01D4   (0x0004)  
	float                                              RefreshTimeAmount;                                          // 0x01D8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x01DC   (0x0004)  MISSED
};

/// Class /Script/DBDBots.AISkill_Interaction_InLocker_BuiltToLast
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UAISkill_Interaction_InLocker_BuiltToLast : public UAISkill_Interaction_InLocker
{ 
public:
};

/// Class /Script/DBDBots.AISkill_Interaction_InLocker_Flashbang
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UAISkill_Interaction_InLocker_Flashbang : public UAISkill_Interaction_InLocker
{ 
public:
};

/// Class /Script/DBDBots.AISkill_Interaction_InLocker_HeadOn
/// Size: 0x0010 (0x0001E0 - 0x0001F0)
class UAISkill_Interaction_InLocker_HeadOn : public UAISkill_Interaction_InLocker
{ 
public:
	FAITunableParameter                                MaxKillerNearbyDistance;                                    // 0x01E0   (0x0010)  
};

/// Class /Script/DBDBots.AISkill_Interaction_InLocker_InnerHealing
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UAISkill_Interaction_InLocker_InnerHealing : public UAISkill_Interaction_InLocker
{ 
public:
};

/// Class /Script/DBDBots.AISkill_Interaction_Kill
/// Size: 0x0000 (0x000190 - 0x000190)
class UAISkill_Interaction_Kill : public UAISkill_Interaction
{ 
public:
};

/// Class /Script/DBDBots.AISkill_Interaction_PotentialEnergy
/// Size: 0x0060 (0x0001B0 - 0x000210)
class UAISkill_Interaction_PotentialEnergy : public UAISkill_Interaction_GeneratorSecondaryInteraction
{ 
public:
	float                                              DangerousGeneratorsRatio;                                   // 0x01B0   (0x0004)  
	float                                              SafeGeneratorsRatio;                                        // 0x01B4   (0x0004)  
	float                                              MaxGeneratorRepairPercentToUseTokens;                       // 0x01B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x54];                                      // 0x01BC   (0x0054)  MISSED
};

/// Class /Script/DBDBots.AISkill_Interaction_RecoverWhileCrawling
/// Size: 0x0010 (0x000190 - 0x0001A0)
class UAISkill_Interaction_RecoverWhileCrawling : public UAISkill_Interaction
{ 
public:
	TArray<FPerkIdDropdown>                            Perks;                                                      // 0x0190   (0x0010)  
};

/// Class /Script/DBDBots.AISkill_Interaction_Reel
/// Size: 0x0000 (0x000190 - 0x000190)
class UAISkill_Interaction_Reel : public UAISkill_Interaction
{ 
public:
};

/// Class /Script/DBDBots.AISkill_Interaction_SendToDeathBed
/// Size: 0x0000 (0x000190 - 0x000190)
class UAISkill_Interaction_SendToDeathBed : public UAISkill_Interaction
{ 
public:
};

/// Class /Script/DBDBots.AISkill_Interaction_SetGeneratorTrap
/// Size: 0x0010 (0x0001B0 - 0x0001C0)
class UAISkill_Interaction_SetGeneratorTrap : public UAISkill_Interaction_GeneratorSecondaryInteraction
{ 
public:
	float                                              MinGeneratorRepairPercentToSetTrap;                         // 0x01B0   (0x0004)  
	EAITerrorLevel                                     TerrorLevelToSetTrap;                                       // 0x01B4   (0x0001)  
	EAITerrorLevel                                     TerrorLevelToSetTrapImmediately;                            // 0x01B5   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x01B6   (0x0002)  MISSED
	float                                              TerrorLevelCloseRange;                                      // 0x01B8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x01BC   (0x0004)  MISSED
};

/// Class /Script/DBDBots.AISkill_Interaction_StaticBlast
/// Size: 0x0000 (0x000190 - 0x000190)
class UAISkill_Interaction_StaticBlast : public UAISkill_Interaction
{ 
public:
};

/// Class /Script/DBDBots.AISkill_InteractionSetTrap
/// Size: 0x0010 (0x000190 - 0x0001A0)
class UAISkill_InteractionSetTrap : public UAISkill_Interaction
{ 
public:
	class UClass*                                      TrapClass;                                                  // 0x0190   (0x0008)  
	float                                              MaxDistanceFromPointOfInterest;                             // 0x0198   (0x0004)  
	float                                              MaxDistanceFromAnotherSetTrap;                              // 0x019C   (0x0004)  
};

/// Class /Script/DBDBots.AISkill_InteractionSetTrap_Demogorgon
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UAISkill_InteractionSetTrap_Demogorgon : public UAISkill_InteractionSetTrap
{ 
public:
};

/// Class /Script/DBDBots.AISkill_InteractionSetTrap_DreamPallet
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UAISkill_InteractionSetTrap_DreamPallet : public UAISkill_InteractionSetTrap
{ 
public:
};

/// Class /Script/DBDBots.AISkill_InteractionSetTrap_DreamSnare
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UAISkill_InteractionSetTrap_DreamSnare : public UAISkill_InteractionSetTrap
{ 
public:
};

/// Class /Script/DBDBots.AISkill_InteractionSetTrap_Phantom
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UAISkill_InteractionSetTrap_Phantom : public UAISkill_InteractionSetTrap
{ 
public:
};

/// Class /Script/DBDBots.AISkill_InteractionTarget
/// Size: 0x00B0 (0x000190 - 0x000240)
class UAISkill_InteractionTarget : public UAISkill_Interaction
{ 
public:
	EInteractionTargetRequirements                     TargetRequirement;                                          // 0x0190   (0x0001)  
	bool                                               AutoSwapBestStimulusWithBestTarget;                         // 0x0191   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0192   (0x0002)  MISSED
	float                                              StartMinRange;                                              // 0x0194   (0x0004)  
	float                                              StartMaxRange;                                              // 0x0198   (0x0004)  
	float                                              StopMinRange;                                               // 0x019C   (0x0004)  
	float                                              StopMaxRange;                                               // 0x01A0   (0x0004)  
	float                                              StartMaxHalfAngle;                                          // 0x01A4   (0x0004)  
	float                                              StopMaxHalfAngle;                                           // 0x01A8   (0x0004)  
	bool                                               IsMaxHalfAngle2D;                                           // 0x01AC   (0x0001)  
	bool                                               TestMaxHalfAngleOnPath;                                     // 0x01AD   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x01AE   (0x0002)  MISSED
	class UClass*                                      MaxAngleFilterClass;                                        // 0x01B0   (0x0008)  
	EInteractionTargetInSightModes                     InSightMode;                                                // 0x01B8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x01B9   (0x0003)  MISSED
	float                                              OutOfSightModeDelay;                                        // 0x01BC   (0x0004)  
	float                                              TargetMoveAwayTooFastStopDelay;                             // 0x01C0   (0x0004)  
	float                                              TargetMoveAwayTooFastCooldown;                              // 0x01C4   (0x0004)  
	bool                                               AlwaysStrafeAroundTarget;                                   // 0x01C8   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x01C9   (0x0007)  MISSED
	TArray<FAIDetectedStimulus>                        _unfilteredTargets;                                         // 0x01D0   (0x0010)  
	TArray<FAIDetectedStimulus>                        _filteredTargets;                                           // 0x01E0   (0x0010)  
	SDK_UNDEFINED(80,3189) /* TMap<AActor*, FTargetMoveAwayToFastInfo> */ __um(_targetsMoveAwayTooFastInfo);       // 0x01F0   (0x0050)  
};

/// Class /Script/DBDBots.AISkill_InteractionTarget_Aim
/// Size: 0x0000 (0x000240 - 0x000240)
class UAISkill_InteractionTarget_Aim : public UAISkill_InteractionTarget
{ 
public:
};

/// Class /Script/DBDBots.AISkill_InteractionTarget_AmbushAttack
/// Size: 0x0000 (0x000240 - 0x000240)
class UAISkill_InteractionTarget_AmbushAttack : public UAISkill_InteractionTarget
{ 
public:
};

/// Class /Script/DBDBots.AISkill_InteractionTarget_AmbushMode
/// Size: 0x0000 (0x000240 - 0x000240)
class UAISkill_InteractionTarget_AmbushMode : public UAISkill_InteractionTarget
{ 
public:
};

/// Class /Script/DBDBots.AISkill_InteractionTarget_Cloak
/// Size: 0x0000 (0x000240 - 0x000240)
class UAISkill_InteractionTarget_Cloak : public UAISkill_InteractionTarget
{ 
public:
};

/// Class /Script/DBDBots.AISkill_InteractionTarget_Dash
/// Size: 0x0000 (0x000240 - 0x000240)
class UAISkill_InteractionTarget_Dash : public UAISkill_InteractionTarget
{ 
public:
};

/// Class /Script/DBDBots.AISkill_InteractionTarget_DashAttack
/// Size: 0x0010 (0x000240 - 0x000250)
class UAISkill_InteractionTarget_DashAttack : public UAISkill_InteractionTarget_Dash
{ 
public:
	float                                              DashAttackUnderMaxRange;                                    // 0x0240   (0x0004)  
	float                                              DashAttackUnderMaxHalfAngle;                                // 0x0244   (0x0004)  
	EAttackType                                        ExpectedAttackType;                                         // 0x0248   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0249   (0x0007)  MISSED
};

/// Class /Script/DBDBots.AISkill_InteractionTarget_DashAttack_Cannibal
/// Size: 0x0000 (0x000250 - 0x000250)
class UAISkill_InteractionTarget_DashAttack_Cannibal : public UAISkill_InteractionTarget_DashAttack
{ 
public:
};

/// Class /Script/DBDBots.AISkill_InteractionTarget_DashAttack_Chainsaw
/// Size: 0x0000 (0x000250 - 0x000250)
class UAISkill_InteractionTarget_DashAttack_Chainsaw : public UAISkill_InteractionTarget_DashAttack
{ 
public:
};

/// Class /Script/DBDBots.AISkill_InteractionTarget_DashAttack_Demogorgon
/// Size: 0x0000 (0x000250 - 0x000250)
class UAISkill_InteractionTarget_DashAttack_Demogorgon : public UAISkill_InteractionTarget_DashAttack
{ 
public:
};

/// Class /Script/DBDBots.AISkill_InteractionTarget_DashHillbilly
/// Size: 0x0030 (0x000240 - 0x000270)
class UAISkill_InteractionTarget_DashHillbilly : public UAISkill_InteractionTarget_Dash
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0240   (0x0030)  MISSED
};

/// Class /Script/DBDBots.AISkill_InteractionTarget_DeadHard
/// Size: 0x0000 (0x000240 - 0x000240)
class UAISkill_InteractionTarget_DeadHard : public UAISkill_InteractionTarget
{ 
public:
};

/// Class /Script/DBDBots.AISkill_InteractionTarget_Fire
/// Size: 0x0000 (0x000240 - 0x000240)
class UAISkill_InteractionTarget_Fire : public UAISkill_InteractionTarget
{ 
public:
};

/// Class /Script/DBDBots.AISkill_InteractionTarget_Frenzy
/// Size: 0x0000 (0x000240 - 0x000240)
class UAISkill_InteractionTarget_Frenzy : public UAISkill_InteractionTarget
{ 
public:
};

/// Class /Script/DBDBots.AISkill_InteractionTarget_LungeAttack
/// Size: 0x0000 (0x000240 - 0x000240)
class UAISkill_InteractionTarget_LungeAttack : public UAISkill_InteractionTarget
{ 
public:
};

/// Class /Script/DBDBots.AISkill_InteractionTarget_PhaseWalk
/// Size: 0x0000 (0x000240 - 0x000240)
class UAISkill_InteractionTarget_PhaseWalk : public UAISkill_InteractionTarget
{ 
public:
};

/// Class /Script/DBDBots.AISkill_InteractionTarget_ReloadDeathSlinger
/// Size: 0x0000 (0x000240 - 0x000240)
class UAISkill_InteractionTarget_ReloadDeathSlinger : public UAISkill_InteractionTarget
{ 
public:
};

/// Class /Script/DBDBots.AISkill_InteractionTarget_ShockTherapy
/// Size: 0x0008 (0x000240 - 0x000248)
class UAISkill_InteractionTarget_ShockTherapy : public UAISkill_InteractionTarget
{ 
public:
	float                                              TargetToEvadePointMaxDistance;                              // 0x0240   (0x0004)  
	float                                              CastShockTimeBuffer;                                        // 0x0244   (0x0004)  
};

/// Class /Script/DBDBots.AISkill_InteractionTarget_Stalk
/// Size: 0x0000 (0x000240 - 0x000240)
class UAISkill_InteractionTarget_Stalk : public UAISkill_InteractionTarget
{ 
public:
};

/// Class /Script/DBDBots.AISkill_InteractionTarget_StalkGhost
/// Size: 0x0010 (0x000240 - 0x000250)
class UAISkill_InteractionTarget_StalkGhost : public UAISkill_InteractionTarget_Stalk
{ 
public:
	float                                              CautiousModeUnderTargetRange;                               // 0x0240   (0x0004)  
	float                                              CautiousModeSpeedFactor;                                    // 0x0244   (0x0004)  
	float                                              BackFromCautiousDelay;                                      // 0x0248   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x024C   (0x0004)  MISSED
};

/// Class /Script/DBDBots.AISkill_InteractionTarget_StalkShape
/// Size: 0x0008 (0x000240 - 0x000248)
class UAISkill_InteractionTarget_StalkShape : public UAISkill_InteractionTarget_Stalk
{ 
public:
	int32_t                                            StalkRangeLimitedAtEvilTier;                                // 0x0240   (0x0004)  
	float                                              MaxStalkRangeWhenLimitedByEvilTier;                         // 0x0244   (0x0004)  
};

/// Class /Script/DBDBots.AISkill_InteractionTarget_StealthGhost
/// Size: 0x0008 (0x000240 - 0x000248)
class UAISkill_InteractionTarget_StealthGhost : public UAISkill_InteractionTarget
{ 
public:
	float                                              CrouchSwapDelay;                                            // 0x0240   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0244   (0x0004)  MISSED
};

/// Class /Script/DBDBots.AISkill_InteractionTarget_Throw
/// Size: 0x0078 (0x000240 - 0x0002B8)
class UAISkill_InteractionTarget_Throw : public UAISkill_InteractionTarget
{ 
public:
	EAIThrowPredictionModes                            ThrowPredictionMode;                                        // 0x0240   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0241   (0x0003)  MISSED
	int32_t                                            MaxAddPitchAngle;                                           // 0x0244   (0x0004)  
	EAIThrowProjectileModes                            ThrowProjectileMode;                                        // 0x0248   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0249   (0x0003)  MISSED
	FAITunableParameter                                HoldInputTimeRandDeviation;                                 // 0x024C   (0x0010)  
	FAITunableParameter                                PitchAngleRandDeviation;                                    // 0x025C   (0x0010)  
	unsigned char                                      UnknownData02_6[0x4C];                                      // 0x026C   (0x004C)  MISSED
};

/// Class /Script/DBDBots.AISkill_InteractionTarget_ThrowHatchet
/// Size: 0x0000 (0x0002B8 - 0x0002B8)
class UAISkill_InteractionTarget_ThrowHatchet : public UAISkill_InteractionTarget_Throw
{ 
public:
};

/// Class /Script/DBDBots.AISkill_InteractionTarget_ThrowPlague
/// Size: 0x0010 (0x0002B8 - 0x0002C8)
class UAISkill_InteractionTarget_ThrowPlague : public UAISkill_InteractionTarget_Throw
{ 
public:
	FGameplayTag                                       ProjectileDamageSickTargetTag;                              // 0x02B8   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02C4   (0x0004)  MISSED
};

/// Class /Script/DBDBots.AISkill_InteractionTarget_TormentAttack
/// Size: 0x0030 (0x000240 - 0x000270)
class UAISkill_InteractionTarget_TormentAttack : public UAISkill_InteractionTarget
{ 
public:
	int32_t                                            AdvancedAtNbDetectedTargets;                                // 0x0240   (0x0004)  
	FAIRoll                                            AdvancedStartRoll;                                          // 0x0244   (0x0024)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0268   (0x0008)  MISSED
};

/// Class /Script/DBDBots.AISkill_InteractionTarget_TormentMode
/// Size: 0x0010 (0x000240 - 0x000250)
class UAISkill_InteractionTarget_TormentMode : public UAISkill_InteractionTarget
{ 
public:
	float                                              ChasedTargetToEvadePointMaxDistance;                        // 0x0240   (0x0004)  
	float                                              StartTormentInPatrolAboveChargeRatio;                       // 0x0244   (0x0004)  
	float                                              StartTormentInChaseAboveChargeRatio;                        // 0x0248   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x024C   (0x0004)  MISSED
};

/// Class /Script/DBDBots.AISkill_InteractionTeleport
/// Size: 0x0008 (0x000190 - 0x000198)
class UAISkill_InteractionTeleport : public UAISkill_Interaction
{ 
public:
	float                                              BlockTeleportWhenPathGoalUnderRange;                        // 0x0190   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0194   (0x0004)  MISSED
};

/// Class /Script/DBDBots.AISkill_InteractionTeleportEthereal
/// Size: 0x0060 (0x000198 - 0x0001F8)
class UAISkill_InteractionTeleportEthereal : public UAISkill_InteractionTeleport
{ 
public:
	float                                              TeleportPlanInterval;                                       // 0x0198   (0x0004)  
	float                                              MaxTeleportAlignHalfAngle;                                  // 0x019C   (0x0004)  
	float                                              AbortNotWorkingTeleportDelay;                               // 0x01A0   (0x0004)  
	float                                              AbortAddRunCooldownPenaltyTime;                             // 0x01A4   (0x0004)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x01A8   (0x0018)  MISSED
	class AActor*                                      _onStimulusInstigator;                                      // 0x01C0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x01C8   (0x0030)  MISSED
};

/// Class /Script/DBDBots.AISkill_InteractionTeleportEthereal_Blink
/// Size: 0x0010 (0x0001F8 - 0x000208)
class UAISkill_InteractionTeleportEthereal_Blink : public UAISkill_InteractionTeleportEthereal
{ 
public:
	float                                              StartBlinkAtWarpLocationRange;                              // 0x01F8   (0x0004)  
	float                                              ValidateBlinkWarpRange;                                     // 0x01FC   (0x0004)  
	float                                              BlinkAboveSavedPathLength;                                  // 0x0200   (0x0004)  
	float                                              BlinkIfTargetWillBeInRange;                                 // 0x0204   (0x0004)  
};

/// Class /Script/DBDBots.AISkill_InteractionTeleportEthereal_Demogorgon
/// Size: 0x0018 (0x0001F8 - 0x000210)
class UAISkill_InteractionTeleportEthereal_Demogorgon : public UAISkill_InteractionTeleportEthereal
{ 
public:
	float                                              MaxRangeFromFirstPortal;                                    // 0x01F8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01FC   (0x0004)  MISSED
	class ADemogorgonPortal*                           _firstPortal;                                               // 0x0200   (0x0008)  
	class ADemogorgonPortal*                           _secondPortal;                                              // 0x0208   (0x0008)  
};

/// Class /Script/DBDBots.AISkill_InteractionTeleportEthereal_Nightmare
/// Size: 0x0010 (0x0001F8 - 0x000208)
class UAISkill_InteractionTeleportEthereal_Nightmare : public UAISkill_InteractionTeleportEthereal
{ 
public:
	float                                              TeleportIfPathLengthSavedAboveRange;                        // 0x01F8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x01FC   (0x0004)  MISSED
	class AGenerator*                                  _toGenerator;                                               // 0x0200   (0x0008)  
};

/// Class /Script/DBDBots.AISkill_InteractionUseItem
/// Size: 0x0010 (0x000190 - 0x0001A0)
class UAISkill_InteractionUseItem : public UAISkill_Interaction
{ 
public:
	ELoadoutItemType                                   ItemType;                                                   // 0x0190   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0191   (0x0007)  MISSED
	class UClass*                                      ItemClass;                                                  // 0x0198   (0x0008)  
};

/// Class /Script/DBDBots.AISkill_InteractionUseItem_FirecrackerLike
/// Size: 0x0018 (0x0001A0 - 0x0001B8)
class UAISkill_InteractionUseItem_FirecrackerLike : public UAISkill_InteractionUseItem
{ 
public:
	FAITunableParameter                                StartMaxRange;                                              // 0x01A0   (0x0010)  
	float                                              TargetFaceMeMaxHalfAngle;                                   // 0x01B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x01B4   (0x0004)  MISSED
};

/// Class /Script/DBDBots.AISkill_InteractionUseItem_Firecracker
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UAISkill_InteractionUseItem_Firecracker : public UAISkill_InteractionUseItem_FirecrackerLike
{ 
public:
};

/// Class /Script/DBDBots.AISkill_InteractionUseItem_Flashbang
/// Size: 0x0000 (0x0001B8 - 0x0001B8)
class UAISkill_InteractionUseItem_Flashbang : public UAISkill_InteractionUseItem_FirecrackerLike
{ 
public:
};

/// Class /Script/DBDBots.AISkill_InteractionUseItem_Flashlight
/// Size: 0x0068 (0x0001A0 - 0x000208)
class UAISkill_InteractionUseItem_Flashlight : public UAISkill_InteractionUseItem
{ 
public:
	FAIRoll                                            VulnerableTargetStartRoll;                                  // 0x01A0   (0x0024)  
	float                                              TargetFaceMeMaxHalfAngle;                                   // 0x01C4   (0x0004)  
	class AActor*                                      _targetActor;                                               // 0x01C8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x01D0   (0x0038)  MISSED
};

/// Class /Script/DBDBots.AISkill_InteractionUseItem_K32Emp
/// Size: 0x0040 (0x0001A0 - 0x0001E0)
class UAISkill_InteractionUseItem_K32Emp : public UAISkill_InteractionUseItem
{ 
public:
	float                                              NearPodDistance;                                            // 0x01A0   (0x0004)  
	FName                                              BBIsFleeing;                                                // 0x01A4   (0x000C)  
	float                                              SurvivorHeight;                                             // 0x01B0   (0x0004)  
	float                                              DoNotUseEmpUnderNavLinkDistance;                            // 0x01B4   (0x0004)  
	float                                              MaxTimeToUseEmpAfterLockonCooldown;                         // 0x01B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x24];                                      // 0x01BC   (0x0024)  MISSED
};

/// Class /Script/DBDBots.AISkill_InteractionUseItem_Key_Addon
/// Size: 0x0008 (0x0001A0 - 0x0001A8)
class UAISkill_InteractionUseItem_Key_Addon : public UAISkill_InteractionUseItem
{ 
public:
	float                                              RemainingPercentChargeToKeep;                               // 0x01A0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x01A4   (0x0004)  MISSED
};

/// Class /Script/DBDBots.AISkill_InteractionUseItem_Map
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UAISkill_InteractionUseItem_Map : public UAISkill_InteractionUseItem
{ 
public:
};

/// Class /Script/DBDBots.AISkill_InteractionUseItem_Medkit_Addon
/// Size: 0x0008 (0x0001A0 - 0x0001A8)
class UAISkill_InteractionUseItem_Medkit_Addon : public UAISkill_InteractionUseItem
{ 
public:
	float                                              RemainingChargeThreshold;                                   // 0x01A0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x01A4   (0x0004)  MISSED
};

/// Class /Script/DBDBots.AISkill_K33UseTurret
/// Size: 0x0010 (0x0000E0 - 0x0000F0)
class UAISkill_K33UseTurret : public UAISkill
{ 
public:
	FName                                              TurretItemID;                                               // 0x00E0   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00EC   (0x0004)  MISSED
};

/// Class /Script/DBDBots.AISkill_LeaveGeneratorInteraction
/// Size: 0x0020 (0x0000E0 - 0x000100)
class UAISkill_LeaveGeneratorInteraction : public UAISkill
{ 
public:
	TArray<FPerkIdDropdown>                            Perks;                                                      // 0x00E0   (0x0010)  
	FName                                              BBIsDoingLeaveGeneratorInteraction;                         // 0x00F0   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Class /Script/DBDBots.AISkill_LeaveGenerator_SetGeneratorTrap
/// Size: 0x0010 (0x000100 - 0x000110)
class UAISkill_LeaveGenerator_SetGeneratorTrap : public UAISkill_LeaveGeneratorInteraction
{ 
public:
	float                                              MinGeneratorRepairPercentToSetTrap;                         // 0x0100   (0x0004)  
	EAITerrorLevel                                     TerrorLevelToSetTrap;                                       // 0x0104   (0x0001)  
	EAITerrorLevel                                     TerrorLevelToSetTrapImmediately;                            // 0x0105   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0106   (0x0002)  MISSED
	float                                              TerrorLevelCloseRange;                                      // 0x0108   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x010C   (0x0004)  MISSED
};

/// Class /Script/DBDBots.AISkill_PlotTwist
/// Size: 0x0030 (0x0000E0 - 0x000110)
class UAISkill_PlotTwist : public UAISkill
{ 
public:
	FPerkIdDropdown                                    Perk;                                                       // 0x00E0   (0x0010)  
	FAITunableParameter                                MinimumDistanceFromKiller;                                  // 0x00F0   (0x0010)  
	FAITunableParameter                                MinimumDistanceFromOtherSurvivor;                           // 0x0100   (0x0010)  
};

/// Class /Script/DBDBots.AISkill_PossessTheKiller
/// Size: 0x0000 (0x000190 - 0x000190)
class UAISkill_PossessTheKiller : public UAISkill_Interaction
{ 
public:
};

/// Class /Script/DBDBots.AISkill_Scavenger
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UAISkill_Scavenger : public UAISkill
{ 
public:
};

/// Class /Script/DBDBots.AISkill_SkillCheck
/// Size: 0x0098 (0x0000E0 - 0x000178)
class UAISkill_SkillCheck : public UAISkill
{ 
public:
	FAITunableParameter                                MaxSuccessLength;                                           // 0x00E0   (0x0010)  
	FAITunableParameter                                HalfSuccessLength;                                          // 0x00F0   (0x0010)  
	FAITunableParameter                                SkillCheckDifficultyCurve;                                  // 0x0100   (0x0010)  
	FAITunableParameter                                SkillCheckUndesiredZonePenalty;                             // 0x0110   (0x0010)  
	FAITunableParameter                                SkillCheckDifficultyModifierReversed;                       // 0x0120   (0x0010)  
	FAITunableParameter                                SkillCheckDifficultyModifierOffCenter;                      // 0x0130   (0x0010)  
	FAITunableParameter                                SkillCheckDifficultyModifierSpeed;                          // 0x0140   (0x0010)  
	FAITunableParameter                                SkillCheckDifficultyModifierWarningSound;                   // 0x0150   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0160   (0x0018)  MISSED
};

/// Class /Script/DBDBots.AISkill_Strafe
/// Size: 0x0080 (0x0000E0 - 0x000160)
class UAISkill_Strafe : public UAISkill
{ 
public:
	float                                              StartMaxRange;                                              // 0x00E0   (0x0004)  
	float                                              StopMaxRange;                                               // 0x00E4   (0x0004)  
	float                                              StartMaxRangeAgainstRangedHostileStimulus;                  // 0x00E8   (0x0004)  
	float                                              StopMaxRangeAgainstRangedHostileStimulus;                   // 0x00EC   (0x0004)  
	float                                              StrafeBackwardRange;                                        // 0x00F0   (0x0004)  
	float                                              StrafeFowardRange;                                          // 0x00F4   (0x0004)  
	float                                              DodgeDirectionSweepTestStartMultiplier;                     // 0x00F8   (0x0004)  
	float                                              DodgeDirectionSweepTestEndMultiplier;                       // 0x00FC   (0x0004)  
	float                                              IgnoreUnderNavLinkStartRange;                               // 0x0100   (0x0004)  
	bool                                               PauseStrafeOnAnimation;                                     // 0x0104   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0105   (0x0003)  MISSED
	FAITunableParameter                                StrafeHoldInterval;                                         // 0x0108   (0x0010)  
	FAITunableParameter                                StrafeHoldDeviation;                                        // 0x0118   (0x0010)  
	FAITunableParameter                                StrafePauseInterval;                                        // 0x0128   (0x0010)  
	FAITunableParameter                                StrafePauseDeviation;                                       // 0x0138   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0148   (0x0018)  MISSED
};

/// Class /Script/DBDBots.AISkill_StrafeChained
/// Size: 0x0000 (0x000160 - 0x000160)
class UAISkill_StrafeChained : public UAISkill_Strafe
{ 
public:
};

/// Class /Script/DBDBots.AISkill_StrafeDodge
/// Size: 0x0028 (0x000160 - 0x000188)
class UAISkill_StrafeDodge : public UAISkill_Strafe
{ 
public:
	FAIRoll                                            StartRoll;                                                  // 0x0160   (0x0024)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0184   (0x0004)  MISSED
};

/// Class /Script/DBDBots.AISkill_ThroughTorment
/// Size: 0x0010 (0x0000E0 - 0x0000F0)
class UAISkill_ThroughTorment : public UAISkill
{ 
public:
	EAITerrorLevel                                     ToleratedTerrorPressure;                                    // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x00E1   (0x000F)  MISSED
};

/// Class /Script/DBDBots.AISkill_UrbanEvasion
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UAISkill_UrbanEvasion : public UAISkill
{ 
public:
};

/// Class /Script/DBDBots.BTDecorator_TickableBase
/// Size: 0x0000 (0x000070 - 0x000070)
class UBTDecorator_TickableBase : public UBTDecorator
{ 
public:
};

/// Class /Script/DBDBots.BTDecorator_CanRecoverMore
/// Size: 0x0000 (0x000070 - 0x000070)
class UBTDecorator_CanRecoverMore : public UBTDecorator_TickableBase
{ 
public:
};

/// Class /Script/DBDBots.BTDecorator_CanRecoverTo
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTDecorator_CanRecoverTo : public UBTDecorator_TickableBase
{ 
public:
	float                                              CanRecoverTo;                                               // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/DBDBots.BTDecorator_CanRunSkill
/// Size: 0x0010 (0x000070 - 0x000080)
class UBTDecorator_CanRunSkill : public UBTDecorator_TickableBase
{ 
public:
	FGameplayTag                                       Context;                                                    // 0x0070   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Class /Script/DBDBots.BTDecorator_CanUnsafeAction
/// Size: 0x00F8 (0x000070 - 0x000168)
class UBTDecorator_CanUnsafeAction : public UBTDecorator_TickableBase
{ 
public:
	FBlackboardKeySelector                             BBUnsafeActionID;                                           // 0x0070   (0x0030)  
	FBlackboardKeySelector                             BBUnsafeActionUsesItemAddons;                               // 0x00A0   (0x0030)  
	FBlackboardKeySelector                             BBUnsafeActionIsSelfInteraction;                            // 0x00D0   (0x0030)  
	FBlackboardKeySelector                             BBUnsafeActionRange;                                        // 0x0100   (0x0030)  
	FBlackboardKeySelector                             BBGoalInteractor;                                           // 0x0130   (0x0030)  
	float                                              ExtraHealthyTime;                                           // 0x0160   (0x0004)  
	float                                              ExtraInjuredTime;                                           // 0x0164   (0x0004)  
};

/// Class /Script/DBDBots.BTDecorator_CompareInteractorCharge
/// Size: 0x0038 (0x000070 - 0x0000A8)
class UBTDecorator_CompareInteractorCharge : public UBTDecorator_TickableBase
{ 
public:
	SDK_UNDEFINED(1,3190) /* TEnumAsByte<EArithmeticKeyOperation> */ __um(ChargePercentQuery);                     // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0071   (0x0003)  MISSED
	float                                              ChargePercentValue;                                         // 0x0074   (0x0004)  
	FBlackboardKeySelector                             BBInteractorObj;                                            // 0x0078   (0x0030)  
};

/// Struct /Script/DBDBots.ModifierValueData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FModifierValueData
{ 
	FGameplayTag                                       ModifierTag;                                                // 0x0000   (0x000C)  
	bool                                               EstimateWithSemantics;                                      // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FGameplayTag                                       SemanticTag;                                                // 0x0010   (0x000C)  
	bool                                               UsesItemAddons;                                             // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Class /Script/DBDBots.BTDecorator_CompareModifierValues
/// Size: 0x0048 (0x000070 - 0x0000B8)
class UBTDecorator_CompareModifierValues : public UBTDecorator_TickableBase
{ 
public:
	FModifierValueData                                 ModifierValueData1;                                         // 0x0070   (0x0020)  
	SDK_UNDEFINED(1,3191) /* TEnumAsByte<EArithmeticKeyOperation> */ __um(ArithmeticOperation);                    // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0091   (0x0003)  MISSED
	FModifierValueData                                 ModifierValueData2;                                         // 0x0094   (0x0020)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
};

/// Class /Script/DBDBots.BTDecorator_ContainsInteraction
/// Size: 0x0040 (0x000070 - 0x0000B0)
class UBTDecorator_ContainsInteraction : public UBTDecorator_TickableBase
{ 
public:
	FBlackboardKeySelector                             BBInteractorObj;                                            // 0x0070   (0x0030)  
	SDK_UNDEFINED(16,3192) /* TArray<FString> */       __um(InteractionIds);                                       // 0x00A0   (0x0010)  
};

/// Class /Script/DBDBots.BTDecorator_ExtCompareBBEntries
/// Size: 0x0008 (0x0000D8 - 0x0000E0)
class UBTDecorator_ExtCompareBBEntries : public UBTDecorator_CompareBBEntries
{ 
public:
	float                                              Tolerance;                                                  // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
};

/// Class /Script/DBDBots.BTDecorator_ExtConeCheck
/// Size: 0x00A0 (0x000070 - 0x000110)
class UBTDecorator_ExtConeCheck : public UBTDecorator_TickableBase
{ 
public:
	FBlackboardKeySelector                             BBConeOrigin;                                               // 0x0070   (0x0030)  
	FBlackboardKeySelector                             BBConeDirection;                                            // 0x00A0   (0x0030)  
	FBlackboardKeySelector                             BBWith;                                                     // 0x00D0   (0x0030)  
	FAITunableParameter                                ConeHalfAngle;                                              // 0x0100   (0x0010)  
};

/// Class /Script/DBDBots.BTDecorator_ExtIsAtLocation
/// Size: 0x0048 (0x000070 - 0x0000B8)
class UBTDecorator_ExtIsAtLocation : public UBTDecorator_TickableBase
{ 
public:
	FBlackboardKeySelector                             BBLoc;                                                      // 0x0070   (0x0030)  
	bool                                               UseAlternativeLoc;                                          // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A1   (0x0003)  MISSED
	FAITunableParameter                                AcceptableRadius;                                           // 0x00A4   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
};

/// Class /Script/DBDBots.BTDecorator_ExtIsBBEntryOfClass
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UBTDecorator_ExtIsBBEntryOfClass : public UBTDecorator_IsBBEntryOfClass
{ 
public:
	bool                                               InvertConditition;                                          // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Class /Script/DBDBots.BTDecorator_ExtTimeLimit
/// Size: 0x0050 (0x000078 - 0x0000C8)
class UBTDecorator_ExtTimeLimit : public UBTDecorator_TimeLimit
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0078   (0x0008)  MISSED
	FAITunableParameter                                MaxTimeLimit;                                               // 0x0080   (0x0010)  
	FBlackboardKeySelector                             BBFilterKey;                                                // 0x0090   (0x0030)  
	SDK_UNDEFINED(1,3193) /* TEnumAsByte<EBasicKeyOperation> */ __um(FilterOperation);                             // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00C1   (0x0007)  MISSED
};

/// Class /Script/DBDBots.BTDecorator_GameplayModifierValue
/// Size: 0x0028 (0x000070 - 0x000098)
class UBTDecorator_GameplayModifierValue : public UBTDecorator_TickableBase
{ 
public:
	SDK_UNDEFINED(1,3194) /* TEnumAsByte<EArithmeticKeyOperation> */ __um(ArithmeticOperation);                    // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0071   (0x0003)  MISSED
	FModifierValueData                                 ModifierValueData;                                          // 0x0074   (0x0020)  
	float                                              CompareToValue;                                             // 0x0094   (0x0004)  
};

/// Class /Script/DBDBots.BTDecorator_HasActivatedBoonPerk
/// Size: 0x0000 (0x000070 - 0x000070)
class UBTDecorator_HasActivatedBoonPerk : public UBTDecorator_TickableBase
{ 
public:
};

/// Class /Script/DBDBots.BTDecorator_HasBetterItemValue
/// Size: 0x0038 (0x000070 - 0x0000A8)
class UBTDecorator_HasBetterItemValue : public UBTDecorator_TickableBase
{ 
public:
	FBlackboardKeySelector                             BBTargetObject;                                             // 0x0070   (0x0030)  
	float                                              CollectUnderItemWeight;                                     // 0x00A0   (0x0004)  
	float                                              CollectOverWeightRatioDifference;                           // 0x00A4   (0x0004)  
};

/// Class /Script/DBDBots.BTDecorator_HasDynamicSubtree
/// Size: 0x0010 (0x000070 - 0x000080)
class UBTDecorator_HasDynamicSubtree : public UBTDecorator_TickableBase
{ 
public:
	FGameplayTag                                       InjectTag;                                                  // 0x0070   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Class /Script/DBDBots.BTDecorator_HasGoodHookEscapeChance
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTDecorator_HasGoodHookEscapeChance : public UBTDecorator_TickableBase
{ 
public:
	float                                              GoodHookEscapeProbability;                                  // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Struct /Script/DBDBots.AIHasItemAddonCondition
/// Size: 0x0030 (0x000000 - 0x000030)
struct FAIHasItemAddonCondition
{ 
	FDataTableDropdown                                 ItemAddonID;                                                // 0x0000   (0x0030)  
};

/// Class /Script/DBDBots.BTDecorator_HasItemAddon
/// Size: 0x0010 (0x000070 - 0x000080)
class UBTDecorator_HasItemAddon : public UBTDecorator_TickableBase
{ 
public:
	TArray<FAIHasItemAddonCondition>                   ItemAddOns;                                                 // 0x0070   (0x0010)  
};

/// Struct /Script/DBDBots.AIHasPerkCondition
/// Size: 0x0038 (0x000000 - 0x000038)
struct FAIHasPerkCondition
{ 
	FDataTableDropdown                                 perkId;                                                     // 0x0000   (0x0030)  
	bool                                               CompareDisplayPercent;                                      // 0x0030   (0x0001)  
	SDK_UNDEFINED(1,3195) /* TEnumAsByte<EArithmeticKeyOperation> */ __um(DisplayPercentQuery);                    // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0032   (0x0002)  MISSED
	float                                              DisplayPercentValue;                                        // 0x0034   (0x0004)  
};

/// Class /Script/DBDBots.BTDecorator_HasPerk
/// Size: 0x0028 (0x000070 - 0x000098)
class UBTDecorator_HasPerk : public UBTDecorator_TickableBase
{ 
public:
	EPlayerFilter                                      PlayerFilter;                                               // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0071   (0x0007)  MISSED
	TArray<FAIHasPerkCondition>                        Perks;                                                      // 0x0078   (0x0010)  
	TArray<class ADBDPlayer*>                          _players;                                                   // 0x0088   (0x0010)  
};

/// Class /Script/DBDBots.BTDecorator_HasPerkFlag
/// Size: 0x0010 (0x000070 - 0x000080)
class UBTDecorator_HasPerkFlag : public UBTDecorator_TickableBase
{ 
public:
	TArray<FGameplayTag>                               GameplayTags;                                               // 0x0070   (0x0010)  
};

/// Class /Script/DBDBots.BTDecorator_HasStateTag
/// Size: 0x0010 (0x000070 - 0x000080)
class UBTDecorator_HasStateTag : public UBTDecorator_TickableBase
{ 
public:
	TArray<FGameplayTag>                               StateTags;                                                  // 0x0070   (0x0010)  
};

/// Class /Script/DBDBots.BTDecorator_HasStatusEffect
/// Size: 0x0010 (0x000070 - 0x000080)
class UBTDecorator_HasStatusEffect : public UBTDecorator_TickableBase
{ 
public:
	TArray<FName>                                      StatusEffectIds;                                            // 0x0070   (0x0010)  
};

/// Class /Script/DBDBots.BTDecorator_IsBeforeTimerExpiration
/// Size: 0x0040 (0x000070 - 0x0000B0)
class UBTDecorator_IsBeforeTimerExpiration : public UBTDecorator
{ 
public:
	FAITunableParameter                                AdditionalTime;                                             // 0x0070   (0x0010)  
	FBlackboardKeySelector                             BBFilterKey;                                                // 0x0080   (0x0030)  
};

/// Class /Script/DBDBots.BTDecorator_IsCamperState
/// Size: 0x0040 (0x000070 - 0x0000B0)
class UBTDecorator_IsCamperState : public UBTDecorator_TickableBase
{ 
public:
	FBlackboardKeySelector                             BBCamper;                                                   // 0x0070   (0x0030)  
	ECamperDamageState                                 damageState;                                                // 0x00A0   (0x0001)  
	SDK_UNDEFINED(1,3196) /* TEnumAsByte<EArithmeticKeyOperation> */ __um(DamageOp);                               // 0x00A1   (0x0001)  
	EImmobilizedState                                  ImmobilizeState;                                            // 0x00A2   (0x0001)  
	SDK_UNDEFINED(1,3197) /* TEnumAsByte<EArithmeticKeyOperation> */ __um(ImmobilizeOp);                           // 0x00A3   (0x0001)  
	EIsCamperStateOnFilter                             OnFilter;                                                   // 0x00A4   (0x0001)  
	SDK_UNDEFINED(1,3198) /* TEnumAsByte<EArithmeticKeyOperation> */ __um(OnOthersFilterOp);                       // 0x00A5   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00A6   (0x0002)  MISSED
	int32_t                                            NbOnOthersCampers;                                          // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Class /Script/DBDBots.BTDecorator_IsExitOpened
/// Size: 0x0030 (0x000070 - 0x0000A0)
class UBTDecorator_IsExitOpened : public UBTDecorator_TickableBase
{ 
public:
	FBlackboardKeySelector                             BBExitObj;                                                  // 0x0070   (0x0030)  
};

/// Class /Script/DBDBots.BTDecorator_IsGameState
/// Size: 0x0010 (0x000070 - 0x000080)
class UBTDecorator_IsGameState : public UBTDecorator_TickableBase
{ 
public:
	SDK_UNDEFINED(1,3199) /* TEnumAsByte<EArithmeticKeyOperation> */ __um(RemainingObjectiveOp);                   // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0071   (0x0003)  MISSED
	int32_t                                            NbRemainingObjectives;                                      // 0x0074   (0x0004)  
	SDK_UNDEFINED(1,3200) /* TEnumAsByte<EArithmeticKeyOperation> */ __um(SurvivorsLeftOp);                        // 0x0078   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0079   (0x0003)  MISSED
	int32_t                                            NbSurvivorsLeft;                                            // 0x007C   (0x0004)  
};

/// Class /Script/DBDBots.BTDecorator_IsInteractionAvailable
/// Size: 0x0088 (0x000070 - 0x0000F8)
class UBTDecorator_IsInteractionAvailable : public UBTDecorator_TickableBase
{ 
public:
	EInteractionCheckType                              InteractionCheckType;                                       // 0x0070   (0x0001)  
	EInputInteractionType                              inputType;                                                  // 0x0071   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0072   (0x0006)  MISSED
	SDK_UNDEFINED(16,3201) /* TArray<FString> */       __um(InteractionIds);                                       // 0x0078   (0x0010)  
	EIsInteractionAvailableOnFilter                    OnFilter;                                                   // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0089   (0x0007)  MISSED
	FBlackboardKeySelector                             BBInteractor;                                               // 0x0090   (0x0030)  
	FBlackboardKeySelector                             BBInputType;                                                // 0x00C0   (0x0030)  
	bool                                               FailIfAnotherOngoingInteraction;                            // 0x00F0   (0x0001)  
	bool                                               FailIfNotPerformingInteraction;                             // 0x00F1   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x00F2   (0x0006)  MISSED
};

/// Class /Script/DBDBots.BTDecorator_IsInteractorAvailable
/// Size: 0x0030 (0x000070 - 0x0000A0)
class UBTDecorator_IsInteractorAvailable : public UBTDecorator_TickableBase
{ 
public:
	FBlackboardKeySelector                             BBInteractorObj;                                            // 0x0070   (0x0030)  
};

/// Class /Script/DBDBots.BTDecorator_IsLocationInPressureZone
/// Size: 0x0030 (0x000070 - 0x0000A0)
class UBTDecorator_IsLocationInPressureZone : public UBTDecorator_TickableBase
{ 
public:
	FBlackboardKeySelector                             BBAtLocation;                                               // 0x0070   (0x0030)  
};

/// Class /Script/DBDBots.BTDecorator_IsNearestThan
/// Size: 0x0070 (0x000070 - 0x0000E0)
class UBTDecorator_IsNearestThan : public UBTDecorator_TickableBase
{ 
public:
	FBlackboardKeySelector                             BBFrom;                                                     // 0x0070   (0x0030)  
	bool                                               CompareWithConstantDistance;                                // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A1   (0x0003)  MISSED
	float                                              ThanDistance;                                               // 0x00A4   (0x0004)  
	FBlackboardKeySelector                             BBThan;                                                     // 0x00A8   (0x0030)  
	float                                              AddDistanceBuffer;                                          // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
};

/// Class /Script/DBDBots.BTDecorator_IsObjectFocused
/// Size: 0x0038 (0x000070 - 0x0000A8)
class UBTDecorator_IsObjectFocused : public UBTDecorator_TickableBase
{ 
public:
	FBlackboardKeySelector                             BBObj;                                                      // 0x0070   (0x0030)  
	EDecoratorIsObjFocusedFilter                       Filter;                                                     // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A1   (0x0007)  MISSED
};

/// Class /Script/DBDBots.BTDecorator_IsTunable
/// Size: 0x0018 (0x000070 - 0x000088)
class UBTDecorator_IsTunable : public UBTDecorator_TickableBase
{ 
public:
	SDK_UNDEFINED(1,3202) /* TEnumAsByte<ETunableComparison> */ __um(Operator);                                    // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0071   (0x0003)  MISSED
	FAITunableParameter                                TunableValue;                                               // 0x0074   (0x0010)  
	float                                              CompareToValue;                                             // 0x0084   (0x0004)  
};

/// Class /Script/DBDBots.BTDecorator_ItemType
/// Size: 0x0038 (0x000070 - 0x0000A8)
class UBTDecorator_ItemType : public UBTDecorator_TickableBase
{ 
public:
	FBlackboardKeySelector                             BBTargetObject;                                             // 0x0070   (0x0030)  
	EItemType                                          ItemType;                                                   // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A1   (0x0007)  MISSED
};

/// Class /Script/DBDBots.BTDecorator_Random
/// Size: 0x0010 (0x000070 - 0x000080)
class UBTDecorator_Random : public UBTDecorator_TickableBase
{ 
public:
	FAITunableParameter                                PercentageRatio;                                            // 0x0070   (0x0010)  
};

/// Struct /Script/DBDBots.AIRandomByDistancePercentagesAtTime
/// Size: 0x0030 (0x000000 - 0x000030)
struct FAIRandomByDistancePercentagesAtTime
{ 
	FAITunableParameter                                PercentageAtStartDistance;                                  // 0x0000   (0x0010)  
	FAITunableParameter                                PercentageAtEndDistance;                                    // 0x0010   (0x0010)  
	FAITunableParameter                                AtRelativeTime;                                             // 0x0020   (0x0010)  
};

/// Class /Script/DBDBots.BTDecorator_RandomByDistance
/// Size: 0x00E0 (0x000070 - 0x000150)
class UBTDecorator_RandomByDistance : public UBTDecorator_TickableBase
{ 
public:
	FBlackboardKeySelector                             BBAroundLoc;                                                // 0x0070   (0x0030)  
	FBlackboardKeySelector                             BBRelativeFromTime;                                         // 0x00A0   (0x0030)  
	FBlackboardKeySelector                             BBRelativeToTime;                                           // 0x00D0   (0x0030)  
	FAITunableParameter                                StartDistance;                                              // 0x0100   (0x0010)  
	FAITunableParameter                                EndDistance;                                                // 0x0110   (0x0010)  
	FAITunableParameter                                PercentageAtStartDistance;                                  // 0x0120   (0x0010)  
	FAITunableParameter                                PercentageAtEndDistance;                                    // 0x0130   (0x0010)  
	TArray<FAIRandomByDistancePercentagesAtTime>       PercentagesAtTimes;                                         // 0x0140   (0x0010)  
};

/// Class /Script/DBDBots.BTDecorator_RandomByRetry
/// Size: 0x0038 (0x000070 - 0x0000A8)
class UBTDecorator_RandomByRetry : public UBTDecorator_TickableBase
{ 
public:
	FAITunableParameter                                BaseSuccessRate;                                            // 0x0070   (0x0010)  
	FAITunableParameter                                PerRetrySuccessRate;                                        // 0x0080   (0x0010)  
	bool                                               ResetWhenValue;                                             // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0091   (0x0003)  MISSED
	FAITunableParameter                                ResetAfterTime;                                             // 0x0094   (0x0010)  
	bool                                               ResetOnCeaseRelevant;                                       // 0x00A4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00A5   (0x0003)  MISSED
};

/// Class /Script/DBDBots.BTService_AroundEQS
/// Size: 0x0088 (0x000108 - 0x000190)
class UBTService_AroundEQS : public UBTService_RunEQS
{ 
public:
	FBlackboardKeySelector                             BBAroundObj;                                                // 0x0108   (0x0030)  
	FBlackboardKeySelector                             BBAroundLocation;                                           // 0x0138   (0x0030)  
	float                                              ValidLocationRefreshInterval;                               // 0x0168   (0x0004)  
	float                                              InvalidLocationRefreshInterval;                             // 0x016C   (0x0004)  
	float                                              InvalidateLocationUnderTargetDistance;                      // 0x0170   (0x0004)  
	bool                                               KeepResultWhileValid;                                       // 0x0174   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0175   (0x0003)  MISSED
	FName                                              NavDataAgentName;                                           // 0x0178   (0x000C)  
	FVector                                            NavMeshProjectionBoxExtent;                                 // 0x0184   (0x000C)  
};

/// Class /Script/DBDBots.BTService_OnRelevantBase
/// Size: 0x0008 (0x000078 - 0x000080)
class UBTService_OnRelevantBase : public UBTService
{ 
public:
	EAINodeRelevancyOptions                            When;                                                       // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Class /Script/DBDBots.BTService_ClearBBEntry
/// Size: 0x0030 (0x000080 - 0x0000B0)
class UBTService_ClearBBEntry : public UBTService_OnRelevantBase
{ 
public:
	FBlackboardKeySelector                             BBToResetKey;                                               // 0x0080   (0x0030)  
};

/// Class /Script/DBDBots.BTService_ClosestNavMeshLocation
/// Size: 0x0060 (0x0000A8 - 0x000108)
class UBTService_ClosestNavMeshLocation : public UBTService_BlackboardBase
{ 
public:
	FBlackboardKeySelector                             BBAroundLocation;                                           // 0x00A8   (0x0030)  
	float                                              ValidLocationRefreshInterval;                               // 0x00D8   (0x0004)  
	float                                              InvalidLocationRefreshInterval;                             // 0x00DC   (0x0004)  
	FName                                              NavDataAgentName;                                           // 0x00E0   (0x000C)  
	FVector                                            NavMeshProjectionBoxExtent;                                 // 0x00EC   (0x000C)  
	class UNavigationSystemV1*                         _navigationSystem;                                          // 0x00F8   (0x0008)  
	class ANavigationData*                             _navigationData;                                            // 0x0100   (0x0008)  
};

/// Class /Script/DBDBots.BTService_CopyBBEntry
/// Size: 0x0068 (0x000080 - 0x0000E8)
class UBTService_CopyBBEntry : public UBTService_OnRelevantBase
{ 
public:
	FBlackboardKeySelector                             BBFrom;                                                     // 0x0080   (0x0030)  
	FBlackboardKeySelector                             BBTo;                                                       // 0x00B0   (0x0030)  
	bool                                               CopyOnlyValidKeyValue;                                      // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00E1   (0x0007)  MISSED
};

/// Class /Script/DBDBots.BTService_Find_Character
/// Size: 0x0048 (0x000078 - 0x0000C0)
class UBTService_Find_Character : public UBTService
{ 
public:
	EPawnType                                          CharacterFilter;                                            // 0x0078   (0x0001)  
	EKillerAbilities                                   killerAbility;                                              // 0x0079   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x007A   (0x0006)  MISSED
	FBlackboardKeySelector                             BBCharacterLocation;                                        // 0x0080   (0x0030)  
	class ADBDAIBTController*                          _aiOwner;                                                   // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Class /Script/DBDBots.BTService_FindGoalObject
/// Size: 0x0138 (0x000078 - 0x0001B0)
class UBTService_FindGoalObject : public UBTService
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0078   (0x0010)  MISSED
	FBlackboardKeySelector                             BBSearchAround;                                             // 0x0088   (0x0030)  
	float                                              SearchInterval;                                             // 0x00B8   (0x0004)  
	float                                              SearchHeightAmplifierActivationHeight;                      // 0x00BC   (0x0004)  
	float                                              SearchHeightAmplifier;                                      // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00C4   (0x0004)  MISSED
	class UClass*                                      FilterClass;                                                // 0x00C8   (0x0008)  
	FBlackboardKeySelector                             BBObjectLocation;                                           // 0x00D0   (0x0030)  
	FBlackboardKeySelector                             BBObject;                                                   // 0x0100   (0x0030)  
	FAITunableParameter                                GoalBasicWeight;                                            // 0x0130   (0x0010)  
	FAITunableParameter                                GoalWeightMaxDistance;                                      // 0x0140   (0x0010)  
	FAITunableParameter                                GoalWeightAtMinDistance;                                    // 0x0150   (0x0010)  
	FAITunableParameter                                GoalWeightAtEndgameStart;                                   // 0x0160   (0x0010)  
	FAITunableParameter                                GoalWeightAtEndgameEnd;                                     // 0x0170   (0x0010)  
	FVector                                            ProjectGoalLocationToNavigationExtent;                      // 0x0180   (0x000C)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x018C   (0x0004)  MISSED
	class ADBDAIBTController*                          _aiOwner;                                                   // 0x0190   (0x0008)  
	unsigned char                                      UnknownData03_5[0x10];                                      // 0x0198   (0x0010)  MISSED
	bool                                               shouldHideBBKeysInEditor;                                   // 0x01A8   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x01A9   (0x0007)  MISSED
};

/// Class /Script/DBDBots.BTService_FindActor
/// Size: 0x0000 (0x0001B0 - 0x0001B0)
class UBTService_FindActor : public UBTService_FindGoalObject
{ 
public:
};

/// Class /Script/DBDBots.BTService_FindActor_WishList
/// Size: 0x0010 (0x0001B0 - 0x0001C0)
class UBTService_FindActor_WishList : public UBTService_FindActor
{ 
public:
	FGameplayTag                                       WishListTag;                                                // 0x01B0   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x01BC   (0x0004)  MISSED
};

/// Class /Script/DBDBots.BTService_FindInteractable
/// Size: 0x0168 (0x000078 - 0x0001E0)
class UBTService_FindInteractable : public UBTService
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0078   (0x0010)  MISSED
	FBlackboardKeySelector                             BBSearchAround;                                             // 0x0088   (0x0030)  
	float                                              SearchInterval;                                             // 0x00B8   (0x0004)  
	float                                              SearchHeightAmplifierActivationHeight;                      // 0x00BC   (0x0004)  
	float                                              SearchHeightAmplifier;                                      // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00C4   (0x0004)  MISSED
	class UClass*                                      FilterClass;                                                // 0x00C8   (0x0008)  
	bool                                               RegisterAsDiscoveredWhenFound;                              // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00D1   (0x0007)  MISSED
	FBlackboardKeySelector                             BBOnlyFromActor;                                            // 0x00D8   (0x0030)  
	bool                                               RejectIfInPressureZone;                                     // 0x0108   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0109   (0x0003)  MISSED
	FName                                              RejectCooldownContextName;                                  // 0x010C   (0x000C)  
	bool                                               AbandonIfInChase;                                           // 0x0118   (0x0001)  
	bool                                               RejectIfFocusedByOther;                                     // 0x0119   (0x0001)  
	bool                                               RejectIfNotFocusedBySelf;                                   // 0x011A   (0x0001)  
	bool                                               IgnoreFocusFilterInEndgameCollapse;                         // 0x011B   (0x0001)  
	bool                                               RejectIfNotInSight;                                         // 0x011C   (0x0001)  
	bool                                               IgnoreSightFilterIfDiscovered;                              // 0x011D   (0x0001)  
	bool                                               IgnoreSightFilterIfInRange;                                 // 0x011E   (0x0001)  
	unsigned char                                      UnknownData04_5[0x1];                                       // 0x011F   (0x0001)  MISSED
	float                                              RejectAboveRange;                                           // 0x0120   (0x0004)  
	bool                                               IgnoreRangeFilterIfDiscovered;                              // 0x0124   (0x0001)  
	bool                                               IgnoreRangeFilterIfInSight;                                 // 0x0125   (0x0001)  
	unsigned char                                      UnknownData05_5[0x2];                                       // 0x0126   (0x0002)  MISSED
	FBlackboardKeySelector                             BBInteractableLocation;                                     // 0x0128   (0x0030)  
	FBlackboardKeySelector                             BBInteractableObj;                                          // 0x0158   (0x0030)  
	FAITunableParameter                                GoalBasicWeight;                                            // 0x0188   (0x0010)  
	FAITunableParameter                                GoalWeightMaxDistance;                                      // 0x0198   (0x0010)  
	FAITunableParameter                                GoalWeightAtMinDistance;                                    // 0x01A8   (0x0010)  
	FVector                                            ProjectGoalLocationToNavigationExtent;                      // 0x01B8   (0x000C)  
	unsigned char                                      UnknownData06_5[0x4];                                       // 0x01C4   (0x0004)  MISSED
	class AInteractable*                               _goalInteractable;                                          // 0x01C8   (0x0008)  
	class ADBDAIBTController*                          _aiOwner;                                                   // 0x01D0   (0x0008)  
	unsigned char                                      UnknownData07_6[0x8];                                       // 0x01D8   (0x0008)  MISSED
};

/// Class /Script/DBDBots.BTService_FindInteractable_Totem
/// Size: 0x0030 (0x0001E0 - 0x000210)
class UBTService_FindInteractable_Totem : public UBTService_FindInteractable
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x01E0   (0x0030)  MISSED
};

/// Class /Script/DBDBots.BTService_FindInteractor
/// Size: 0x0208 (0x0001B0 - 0x0003B8)
class UBTService_FindInteractor : public UBTService_FindGoalObject
{ 
public:
	bool                                               RegisterAsDiscoveredWhenFound;                              // 0x01B0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x01B1   (0x0007)  MISSED
	FBlackboardKeySelector                             BBOnlyFromActor;                                            // 0x01B8   (0x0030)  
	SDK_UNDEFINED(16,3203) /* TArray<FString> */       __um(OnlyWithInteractorIDs);                                // 0x01E8   (0x0010)  
	float                                              RejectIfTerrorIsCloserThanSelfMargin;                       // 0x01F8   (0x0004)  
	float                                              RejectIfInTerrorRadius;                                     // 0x01FC   (0x0004)  
	bool                                               RejectIfInPressureZone;                                     // 0x0200   (0x0001)  
	bool                                               UseLastKnownPositionForTerrorRejects;                       // 0x0201   (0x0001)  
	bool                                               RejectIfWasInCooldownAndFocusedOnAnotherObject;             // 0x0202   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x0203   (0x0001)  MISSED
	FName                                              RejectCooldownContextName;                                  // 0x0204   (0x000C)  
	bool                                               IgnoreMindFocusCooldown;                                    // 0x0210   (0x0001)  
	bool                                               RejectIfAnySiblingInteractorHasCooldown;                    // 0x0211   (0x0001)  
	bool                                               AbandonIfInChase;                                           // 0x0212   (0x0001)  
	bool                                               RejectIfFocusedByOther;                                     // 0x0213   (0x0001)  
	bool                                               RejectIfInteractableFocusedByOther;                         // 0x0214   (0x0001)  
	bool                                               RejectIfNotFocusedBySelf;                                   // 0x0215   (0x0001)  
	bool                                               IgnoreFocusFilterInEndgameCollapse;                         // 0x0216   (0x0001)  
	bool                                               RejectIfNotInSight;                                         // 0x0217   (0x0001)  
	bool                                               IgnoreSightFilterIfDiscovered;                              // 0x0218   (0x0001)  
	bool                                               IgnoreSightFilterIfInRange;                                 // 0x0219   (0x0001)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x021A   (0x0002)  MISSED
	float                                              RejectAboveRange;                                           // 0x021C   (0x0004)  
	bool                                               IgnoreRangeFilterIfDiscovered;                              // 0x0220   (0x0001)  
	bool                                               IgnoreRangeFilterIfInSight;                                 // 0x0221   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x0222   (0x0006)  MISSED
	FBlackboardKeySelector                             BBInteractLocation;                                         // 0x0228   (0x0030)  
	FBlackboardKeySelector                             BBInteractorObj;                                            // 0x0258   (0x0030)  
	bool                                               UsesActorLocation;                                          // 0x0288   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0289   (0x0003)  MISSED
	FAITunableParameter                                CantInterruptGoalInteractionUnderRemainingTime;             // 0x028C   (0x0010)  
	FAITunableParameter                                GoalWeightBonusWhileInteracting;                            // 0x029C   (0x0010)  
	FName                                              InteractionSpeedStatusEffectID;                             // 0x02AC   (0x000C)  
	FAITunableParameter                                GoalWeightInteractionSpeedVariance;                         // 0x02B8   (0x0010)  
	bool                                               IsUnsafeAction;                                             // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x02C9   (0x0007)  MISSED
	FBlackboardKeySelector                             BBUnsafeActionID;                                           // 0x02D0   (0x0030)  
	FBlackboardKeySelector                             BBUnsafeActionUsesItemAddons;                               // 0x0300   (0x0030)  
	FBlackboardKeySelector                             BBUnsafeActionIsSelfInteraction;                            // 0x0330   (0x0030)  
	FBlackboardKeySelector                             BBUnsafeActionRange;                                        // 0x0360   (0x0030)  
	SDK_UNDEFINED(16,3204) /* FString */               __um(UnsafeInteractionID);                                  // 0x0390   (0x0010)  
	bool                                               UnsafeActionUsesItemAddons;                                 // 0x03A0   (0x0001)  
	bool                                               UnsafeActionIsSelfInteraction;                              // 0x03A1   (0x0001)  
	unsigned char                                      UnknownData06_5[0x2];                                       // 0x03A2   (0x0002)  MISSED
	float                                              UnsafeActionRange;                                          // 0x03A4   (0x0004)  
	class UInteractor*                                 _goalInteractor;                                            // 0x03A8   (0x0008)  
	unsigned char                                      UnknownData07_6[0x8];                                       // 0x03B0   (0x0008)  MISSED
};

/// Class /Script/DBDBots.BTService_FindInteractor_Camper
/// Size: 0x00F0 (0x0003B8 - 0x0004A8)
class UBTService_FindInteractor_Camper : public UBTService_FindInteractor
{ 
public:
	EFindInteractableCamperFilter                      StatusFilter;                                               // 0x03B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x03B9   (0x0007)  MISSED
	TArray<class UClass*>                              IgnoreWhenTargetStatusEffects;                              // 0x03C0   (0x0010)  
	float                                              RequiredAttentionMovementFrequency;                         // 0x03D0   (0x0004)  
	float                                              AttentionMovementFrequencyLerp;                             // 0x03D4   (0x0004)  
	float                                              AttentionValidTime;                                         // 0x03D8   (0x0004)  
	float                                              AttentionValidDistance;                                     // 0x03DC   (0x0004)  
	float                                              AttentionCooldownReduction;                                 // 0x03E0   (0x0004)  
	FAITunableParameter                                AllyDangerStateGoalWeight;                                  // 0x03E4   (0x0010)  
	FAITunableParameter                                IncapacitatedAlliesGoalWeight;                              // 0x03F4   (0x0010)  
	FAITunableParameter                                CrawlingRecoveryProgressGoalWeight;                         // 0x0404   (0x0010)  
	FAITunableParameter                                CrawlingDeathTimerGoalWeight;                               // 0x0414   (0x0010)  
	FAITunableParameter                                IdealKillerDistanceFromCrawling;                            // 0x0424   (0x0010)  
	FAITunableParameter                                MaxKillerProximityWeight;                                   // 0x0434   (0x0010)  
	FAITunableParameter                                AttentionWeight;                                            // 0x0444   (0x0010)  
	unsigned char                                      UnknownData01_6[0x54];                                      // 0x0454   (0x0054)  MISSED
};

/// Class /Script/DBDBots.BTService_FindInteractor_Exit
/// Size: 0x0068 (0x0003B8 - 0x000420)
class UBTService_FindInteractor_Exit : public UBTService_FindInteractor
{ 
public:
	EFindInteractorExitOptions                         Filter;                                                     // 0x03B8   (0x0001)  
	EFindInteractorOpenConditions                      OpenCondition;                                              // 0x03B9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x03BA   (0x0006)  MISSED
	FBlackboardKeySelector                             BBFinalExitLocation;                                        // 0x03C0   (0x0030)  
	float                                              ClosedDoorOffset;                                           // 0x03F0   (0x0004)  
	float                                              OpenDoorOffset;                                             // 0x03F4   (0x0004)  
	bool                                               AbortOnBlockedExitSwitch;                                   // 0x03F8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x03F9   (0x0003)  MISSED
	FAITunableParameter                                OpenedExitGoalWeight;                                       // 0x03FC   (0x0010)  
	FAITunableParameter                                HatchBonusGoalWeight;                                       // 0x040C   (0x0010)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x041C   (0x0004)  MISSED
};

/// Class /Script/DBDBots.BTService_FindInteractor_Generator
/// Size: 0x0058 (0x0003B8 - 0x000410)
class UBTService_FindInteractor_Generator : public UBTService_FindInteractor
{ 
public:
	EFindInteractableGeneratorStatusFilter             StatusFilter;                                               // 0x03B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x03B9   (0x0003)  MISSED
	FAITunableParameter                                MinRepairRatioFilter;                                       // 0x03BC   (0x0010)  
	bool                                               UsePerceptionToGetRepairRatio;                              // 0x03CC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x03CD   (0x0003)  MISSED
	FAITunableParameter                                MaxRepairGoalWeight;                                        // 0x03D0   (0x0010)  
	FAITunableParameter                                InfectedStateGoalWeight;                                    // 0x03E0   (0x0010)  
	FAITunableParameter                                HexRuinGoalWeight;                                          // 0x03F0   (0x0010)  
	FName                                              HexRuinPerkId;                                              // 0x0400   (0x000C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x040C   (0x0004)  MISSED
};

/// Struct /Script/DBDBots.InLockerPerk
/// Size: 0x0098 (0x000000 - 0x000098)
struct FInLockerPerk
{ 
	FDataTableDropdown                                 perkId;                                                     // 0x0000   (0x0030)  
	bool                                               PerkNeedToBeFullyCharged;                                   // 0x0030   (0x0001)  
	EInLockerPerkEmptyHandType                         RequiredHeldItemSlots;                                      // 0x0031   (0x0001)  
	EInLockerPerkEmptyHandType                         RequiredEmptyHandedSlots;                                   // 0x0032   (0x0001)  
	bool                                               NeedToBeInjured;                                            // 0x0033   (0x0001)  
	bool                                               NeedPerkSkillToBeRunnableAtLocation;                        // 0x0034   (0x0001)  
	bool                                               MustBeFarFromLinkedObject;                                  // 0x0035   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0036   (0x0002)  MISSED
	float                                              MinimumDistanceFromObject;                                  // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	class UClass*                                      LinkedObjectClass;                                          // 0x0040   (0x0008)  
	bool                                               UnusableIfLockerPenaltyReceived;                            // 0x0048   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	FBlackboardKeySelector                             BBLockerPenaltyReceived;                                    // 0x0050   (0x0030)  
	float                                              UnusableUnlessKillerIsFartherThan;                          // 0x0080   (0x0004)  
	FAITunableParameter                                PerkWeight;                                                 // 0x0084   (0x0010)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0094   (0x0004)  MISSED
};

/// Class /Script/DBDBots.BTService_FindInteractor_Locker
/// Size: 0x0028 (0x0003B8 - 0x0003E0)
class UBTService_FindInteractor_Locker : public UBTService_FindInteractor
{ 
public:
	EFindInteractableLockerStatusFilter                StatusFilter;                                               // 0x03B8   (0x0001)  
	bool                                               LockerNeedsToBeOpenable;                                    // 0x03B9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x03BA   (0x0006)  MISSED
	TArray<FInLockerPerk>                              PerksToRunInLocker;                                         // 0x03C0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x03D0   (0x0010)  MISSED
};

/// Class /Script/DBDBots.BTService_FindInteractor_MeatHook
/// Size: 0x00D0 (0x0003B8 - 0x000488)
class UBTService_FindInteractor_MeatHook : public UBTService_FindInteractor
{ 
public:
	EFindInteractableMeatHookStatus                    StatusFilter;                                               // 0x03B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x03B9   (0x0003)  MISSED
	FAITunableParameter                                AllyDangerStateGoalWeight;                                  // 0x03BC   (0x0010)  
	FAITunableParameter                                BotDangerStateGoalWeight;                                   // 0x03CC   (0x0010)  
	FAITunableParameter                                BotInjuredStateGoalWeight;                                  // 0x03DC   (0x0010)  
	FAITunableParameter                                HumanAllyHookedGoalWeight;                                  // 0x03EC   (0x0010)  
	FAITunableParameter                                MaxHookTimeGoalWeight;                                      // 0x03FC   (0x0010)  
	FAITunableParameter                                IncapacitatedAlliesGoalWeight;                              // 0x040C   (0x0010)  
	FAITunableParameter                                IdealKillerDistanceFromHook;                                // 0x041C   (0x0010)  
	FAITunableParameter                                MaxKillerProximityWeight;                                   // 0x042C   (0x0010)  
	FAITunableParameter                                SabotageKillerDistanceToHookScore;                          // 0x043C   (0x0010)  
	FAITunableParameter                                SabotageKillerSpeedToHookScore;                             // 0x044C   (0x0010)  
	FAITunableParameter                                SabotageHookValidTargetTime;                                // 0x045C   (0x0010)  
	float                                              KillerTargetUpdateInterval;                                 // 0x046C   (0x0004)  
	float                                              UnsafeSabotageHealthyMarginTime;                            // 0x0470   (0x0004)  
	float                                              UnsafeSabotageInjuredMarginTime;                            // 0x0474   (0x0004)  
	SDK_UNDEFINED(16,3205) /* FString */               __um(NoToolboxInteractionID);                               // 0x0478   (0x0010)  
};

/// Class /Script/DBDBots.BTService_FindInteractor_Pallet
/// Size: 0x0170 (0x0003B8 - 0x000528)
class UBTService_FindInteractor_Pallet : public UBTService_FindInteractor
{ 
public:
	FBlackboardKeySelector                             BBPickSideRelativelyFrom;                                   // 0x03B8   (0x0030)  
	EFindInteractablePalletIntentions                  IntentionFilter;                                            // 0x03E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x03E9   (0x0003)  MISSED
	FName                                              RaisePalletPerkId;                                          // 0x03EC   (0x000C)  
	FAITunableParameter                                BrokenGeneratorGoalMaxDistance;                             // 0x03F8   (0x0010)  
	FAITunableParameter                                BrokenGeneratorGoalMaxDistanceWeight;                       // 0x0408   (0x0010)  
	FAITunableParameter                                SpawnInSurvivorLOSPenalty;                                  // 0x0418   (0x0010)  
	FAITunableParameter                                SpawnNearSurvivorMinDistanceSquared;                        // 0x0428   (0x0010)  
	FAITunableParameter                                SpawnNearSurvivorPenalty;                                   // 0x0438   (0x0010)  
	FAITunableParameter                                PlacedNearGamePalletMinDistanceSquared;                     // 0x0448   (0x0010)  
	FAITunableParameter                                PlacedNearGamePalletPenalty;                                // 0x0458   (0x0010)  
	FAITunableParameter                                ConvincingFactorTolerance;                                  // 0x0468   (0x0010)  
	bool                                               SkipSafetyCheck;                                            // 0x0478   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0479   (0x0003)  MISSED
	FVector                                            AcceptablePalletDropExtent;                                 // 0x047C   (0x000C)  
	FBlackboardKeySelector                             BBEvadePointCrossingDest;                                   // 0x0488   (0x0030)  
	float                                              ExtraHealthySurvivorActionTime;                             // 0x04B8   (0x0004)  
	float                                              ExtraInjuredSurvivorActionTime;                             // 0x04BC   (0x0004)  
	float                                              PalletInteractorLocationOffset;                             // 0x04C0   (0x0004)  
	float                                              AcceptableEvadePointCrossingDestDist;                       // 0x04C4   (0x0004)  
	unsigned char                                      UnknownData02_6[0x60];                                      // 0x04C8   (0x0060)  MISSED
};

/// Class /Script/DBDBots.BTService_FindInteractor_Searchable
/// Size: 0x0010 (0x0003B8 - 0x0003C8)
class UBTService_FindInteractor_Searchable : public UBTService_FindInteractor
{ 
public:
	FAITunableParameter                                WantToKeepEmptyItemPenalty;                                 // 0x03B8   (0x0010)  
};

/// Struct /Script/DBDBots.AISelfHelpInteraction
/// Size: 0x0028 (0x000000 - 0x000028)
struct FAISelfHelpInteraction
{ 
	SDK_UNDEFINED(16,3206) /* FString */               __um(InteractionID);                                        // 0x0000   (0x0010)  
	EInputInteractionType                              inputType;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	FAITunableParameter                                BasicWeight;                                                // 0x0014   (0x0010)  
	bool                                               UsesSurvivorItem;                                           // 0x0024   (0x0001)  
	bool                                               PreferHelpFromOther;                                        // 0x0025   (0x0001)  
	bool                                               UsesAISkill;                                                // 0x0026   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x0027   (0x0001)  MISSED
};

/// Class /Script/DBDBots.BTService_FindInteractor_Self
/// Size: 0x00F0 (0x0003B8 - 0x0004A8)
class UBTService_FindInteractor_Self : public UBTService_FindInteractor
{ 
public:
	FBlackboardKeySelector                             BBInputType;                                                // 0x03B8   (0x0030)  
	FBlackboardKeySelector                             BBIsSkillSelfInteraction;                                   // 0x03E8   (0x0030)  
	TArray<FAISelfHelpInteraction>                     SelfHelpInteractions;                                       // 0x0418   (0x0010)  
	FGameplayTag                                       SelfInteractionContext;                                     // 0x0428   (0x000C)  
	float                                              SurvivorProximityRange;                                     // 0x0434   (0x0004)  
	FAITunableParameter                                SurvivorProximityWeightPenalty;                             // 0x0438   (0x0010)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0448   (0x0060)  MISSED
};

/// Struct /Script/DBDBots.AICleansePerkCondition
/// Size: 0x0038 (0x000000 - 0x000038)
struct FAICleansePerkCondition
{ 
	FDataTableDropdown                                 CleansePerkID;                                              // 0x0000   (0x0030)  
	SDK_UNDEFINED(1,3207) /* TEnumAsByte<EArithmeticKeyOperation> */ __um(DisplayPercentQuery);                    // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              DisplayPercentValue;                                        // 0x0034   (0x0004)  
};

/// Class /Script/DBDBots.BTService_FindInteractor_Totem
/// Size: 0x0050 (0x0003B8 - 0x000408)
class UBTService_FindInteractor_Totem : public UBTService_FindInteractor
{ 
public:
	FAITunableParameter                                InactiveGoalWeightMaxDistance;                              // 0x03B8   (0x0010)  
	FAITunableParameter                                InactiveGoalWeightAtMinDistance;                            // 0x03C8   (0x0010)  
	TArray<FAICleansePerkCondition>                    CleansePerks;                                               // 0x03D8   (0x0010)  
	bool                                               SearchUsingBoundPerks;                                      // 0x03E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x03E9   (0x0007)  MISSED
	TArray<FName>                                      BoundPerkIds;                                               // 0x03F0   (0x0010)  
	bool                                               OnlyWhenInjured;                                            // 0x0400   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0401   (0x0007)  MISSED
};

/// Struct /Script/DBDBots.InteractableWithInteractionId
/// Size: 0x0018 (0x000000 - 0x000018)
struct FInteractableWithInteractionId
{ 
	class UClass*                                      InteractableClass;                                          // 0x0000   (0x0008)  
	SDK_UNDEFINED(16,3208) /* FString */               __um(InteractionID);                                        // 0x0008   (0x0010)  
};

/// Class /Script/DBDBots.BTService_FindInteractor_Trap
/// Size: 0x0048 (0x0003B8 - 0x000400)
class UBTService_FindInteractor_Trap : public UBTService_FindInteractor
{ 
public:
	FAITunableParameter                                HelpDestroyDemoPortal;                                      // 0x03B8   (0x0010)  
	FAIRoll                                            SeeStandardTrapRoll;                                        // 0x03C8   (0x0024)  
	float                                              TrapGroundLocationOffset;                                   // 0x03EC   (0x0004)  
	TArray<FInteractableWithInteractionId>             InteractableOnlyWithInteractionId;                          // 0x03F0   (0x0010)  
};

/// Class /Script/DBDBots.BTService_FindInteractor_WishList
/// Size: 0x0018 (0x0003B8 - 0x0003D0)
class UBTService_FindInteractor_WishList : public UBTService_FindInteractor
{ 
public:
	FGameplayTag                                       WishListTag;                                                // 0x03B8   (0x000C)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x03C4   (0x000C)  MISSED
};

/// Class /Script/DBDBots.BTService_FindObject
/// Size: 0x0190 (0x000078 - 0x000208)
class UBTService_FindObject : public UBTService
{ 
public:
	EKillerAbilities                                   killerAbility;                                              // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0079   (0x0007)  MISSED
	FBlackboardKeySelector                             BBObject;                                                   // 0x0080   (0x0030)  
	FBlackboardKeySelector                             BBObjectLocation;                                           // 0x00B0   (0x0030)  
	bool                                               RunEQSWhenFoundObject;                                      // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00E1   (0x0007)  MISSED
	FEQSParametrizedQueryExecutionRequest              EQSRequest;                                                 // 0x00E8   (0x0050)  
	FBlackboardKeySelector                             BBEQSResultLocation;                                        // 0x0138   (0x0030)  
	bool                                               RunDynamicSubtreeWhenFoundObject;                           // 0x0168   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0169   (0x0003)  MISSED
	FGameplayTag                                       DynamicSubtreeTag;                                          // 0x016C   (0x000C)  
	class UBehaviorTree*                               DynamicSubtree;                                             // 0x0178   (0x0008)  
	class ADBDAIBTController*                          _aiOwner;                                                   // 0x0180   (0x0008)  
	class ASlasherPlayer*                              _killer;                                                    // 0x0188   (0x0008)  
	unsigned char                                      UnknownData03_6[0x78];                                      // 0x0190   (0x0078)  MISSED
};

/// Class /Script/DBDBots.BTService_FindObject_DangerObject
/// Size: 0x0090 (0x000208 - 0x000298)
class UBTService_FindObject_DangerObject : public UBTService_FindObject
{ 
public:
	bool                                               GetDangerObjectsFromHostileStimulus;                        // 0x0208   (0x0001)  
	ESurvivorFleePathStrategy                          FleePathStrategy;                                           // 0x0209   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x020A   (0x0002)  MISSED
	float                                              HideFromLosCooldown;                                        // 0x020C   (0x0004)  
	FAITunableParameter                                NotSensedReactionDelay;                                     // 0x0210   (0x0010)  
	FAITunableParameter                                SensedReactionDelay;                                        // 0x0220   (0x0010)  
	unsigned char                                      UnknownData01_5[0x18];                                      // 0x0230   (0x0018)  MISSED
	SDK_UNDEFINED(80,3209) /* TMap<UDBDDangerPredictionComponent*, FDangerObjectData> */ __um(_lastDangerObjectsMap); // 0x0248   (0x0050)  
};

/// Class /Script/DBDBots.BTService_FindObject_K32EmpTarget
/// Size: 0x0090 (0x000208 - 0x000298)
class UBTService_FindObject_K32EmpTarget : public UBTService_FindObject
{ 
public:
	TArray<class UClass*>                              ValidGoalObjectClasses;                                     // 0x0208   (0x0010)  
	float                                              NearGoalPodHorizontalDistance;                              // 0x0218   (0x0004)  
	float                                              NearGoalPodVerticalDistance;                                // 0x021C   (0x0004)  
	float                                              NearGoalSurvivorHorizontalDistance;                         // 0x0220   (0x0004)  
	float                                              NearGoalSurvivorVerticalDistance;                           // 0x0224   (0x0004)  
	float                                              OtherSurvivorNearTargetDistance;                            // 0x0228   (0x0004)  
	FVector                                            NavMeshTargetLocationExtents;                               // 0x022C   (0x000C)  
	float                                              CheckDynamicSubtreeInterval;                                // 0x0238   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x023C   (0x0004)  MISSED
	FBlackboardKeySelector                             BBOriginalFocusedActor;                                     // 0x0240   (0x0030)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0270   (0x0028)  MISSED
};

/// Class /Script/DBDBots.BTService_Flee
/// Size: 0x0108 (0x000078 - 0x000180)
class UBTService_Flee : public UBTService
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0078   (0x0008)  MISSED
	FBlackboardKeySelector                             BBFleePath;                                                 // 0x0080   (0x0030)  
	FBlackboardKeySelector                             BBShouldFallPallet;                                         // 0x00B0   (0x0030)  
	FBlackboardKeySelector                             BBEvadePointCrossingDest;                                   // 0x00E0   (0x0030)  
	class UClass*                                      PathStrategySelectorClass;                                  // 0x0110   (0x0008)  
	TArray<class UClass*>                              IgnoreOnEndObjectInFocusCooldownTypes;                      // 0x0118   (0x0010)  
	float                                              OnEndObjectInFocusCooldown;                                 // 0x0128   (0x0004)  
	FAITunableParameter                                ShouldFallPalletUnderHostileHorizontalRange;                // 0x012C   (0x0010)  
	float                                              ShouldFallPalletUnderHostileVerticalRange;                  // 0x013C   (0x0004)  
	float                                              ClearFleePathBBKeyDelay;                                    // 0x0140   (0x0004)  
	unsigned char                                      UnknownData01_5[0x14];                                      // 0x0144   (0x0014)  MISSED
	class UNavMovePath*                                _activePath;                                                // 0x0158   (0x0008)  
	TArray<class UObject*>                             _lostFocusedObjects;                                        // 0x0160   (0x0010)  
	class UPathStrategySelector*                       _strategySelector;                                          // 0x0170   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0178   (0x0008)  MISSED
};

/// Class /Script/DBDBots.BTService_GetPinLocation
/// Size: 0x0040 (0x000080 - 0x0000C0)
class UBTService_GetPinLocation : public UBTService_OnRelevantBase
{ 
public:
	FBlackboardKeySelector                             BBToSetKey;                                                 // 0x0080   (0x0030)  
	FGameplayTag                                       PinTag;                                                     // 0x00B0   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00BC   (0x0004)  MISSED
};

/// Class /Script/DBDBots.BTService_GetPinObject
/// Size: 0x0040 (0x000080 - 0x0000C0)
class UBTService_GetPinObject : public UBTService_OnRelevantBase
{ 
public:
	FBlackboardKeySelector                             BBToSetKey;                                                 // 0x0080   (0x0030)  
	FGameplayTag                                       PinTag;                                                     // 0x00B0   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00BC   (0x0004)  MISSED
};

/// Class /Script/DBDBots.BTService_GoalCoordinator
/// Size: 0x00A8 (0x000078 - 0x000120)
class UBTService_GoalCoordinator : public UBTService
{ 
public:
	FAITunableParameter                                GoalChangeWeightBuffer;                                     // 0x0078   (0x0010)  
	FBlackboardKeySelector                             BBLockedIntoGoal;                                           // 0x0088   (0x0030)  
	FGameplayTag                                       AISkillFindContext;                                         // 0x00B8   (0x000C)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x00C4   (0x000C)  MISSED
	SDK_UNDEFINED(80,3210) /* TMap<UObject*, FAIGoalWeightContainer> */ __um(_managedGoals);                       // 0x00D0   (0x0050)  
};

/// Class /Script/DBDBots.BTService_InputAtTiming
/// Size: 0x0008 (0x000080 - 0x000088)
class UBTService_InputAtTiming : public UBTService_OnRelevantBase
{ 
public:
	EPawnInputPressTypes                               inputType;                                                  // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0081   (0x0007)  MISSED
};

/// Class /Script/DBDBots.BTService_Patrol
/// Size: 0x00E0 (0x000078 - 0x000158)
class UBTService_Patrol : public UBTService
{ 
public:
	FBlackboardKeySelector                             BBFilterKey;                                                // 0x0078   (0x0030)  
	SDK_UNDEFINED(1,3211) /* TEnumAsByte<EBasicKeyOperation> */ __um(FilterOperation);                             // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A9   (0x0003)  MISSED
	FVector                                            NavMeshFindLocationExtents;                                 // 0x00AC   (0x000C)  
	float                                              MinPatrolInvestigationDistance;                             // 0x00B8   (0x0004)  
	float                                              PatrolPointsValidityCheckInterval;                          // 0x00BC   (0x0004)  
	FBlackboardKeySelector                             BBPatrolPointOwner;                                         // 0x00C0   (0x0030)  
	FBlackboardKeySelector                             BBPatrolLocation;                                           // 0x00F0   (0x0030)  
	FBlackboardKeySelector                             BBGoToNextPatrolLocation;                                   // 0x0120   (0x0030)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0150   (0x0008)  MISSED
};

/// Class /Script/DBDBots.BTService_Patrol_Discovery
/// Size: 0x0010 (0x000158 - 0x000168)
class UBTService_Patrol_Discovery : public UBTService_Patrol
{ 
public:
	bool                                               RejectPatrolPointIfInPressureZone;                          // 0x0158   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0159   (0x0003)  MISSED
	int32_t                                            MaxFindRandomLocationOnTileAttempts;                        // 0x015C   (0x0004)  
	int32_t                                            FirstFindOnNbNeighborTiles;                                 // 0x0160   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0164   (0x0004)  MISSED
};

/// Class /Script/DBDBots.BTService_Patrol_PointOfInterest
/// Size: 0x0040 (0x000158 - 0x000198)
class UBTService_Patrol_PointOfInterest : public UBTService_Patrol
{ 
public:
	float                                              OnEnterPatrolRefreshPointsDelay;                            // 0x0158   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x015C   (0x0004)  MISSED
	FBlackboardKeySelector                             BBMoveAroundPatrolLocation;                                 // 0x0160   (0x0030)  
	float                                              MoveAroundPatrolPointAboveStimulusStrength;                 // 0x0190   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0194   (0x0004)  MISSED
};

/// Class /Script/DBDBots.BTService_PushObjectFocus
/// Size: 0x0030 (0x000078 - 0x0000A8)
class UBTService_PushObjectFocus : public UBTService
{ 
public:
	FBlackboardKeySelector                             BBFocusObj;                                                 // 0x0078   (0x0030)  
};

/// Class /Script/DBDBots.BTService_RunSkills
/// Size: 0x0048 (0x000078 - 0x0000C0)
class UBTService_RunSkills : public UBTService
{ 
public:
	FGameplayTag                                       Context;                                                    // 0x0078   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0084   (0x0004)  MISSED
	FBlackboardKeySelector                             BBFilterKey;                                                // 0x0088   (0x0030)  
	SDK_UNDEFINED(1,3212) /* TEnumAsByte<EBasicKeyOperation> */ __um(FilterOperation);                             // 0x00B8   (0x0001)  
	bool                                               RunEveryFrame;                                              // 0x00B9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x00BA   (0x0006)  MISSED
};

/// Class /Script/DBDBots.BTService_SetBBEntry
/// Size: 0x0050 (0x000080 - 0x0000D0)
class UBTService_SetBBEntry : public UBTService_OnRelevantBase
{ 
public:
	FBlackboardKeySelector                             BBToSetKey;                                                 // 0x0080   (0x0030)  
	SDK_UNDEFINED(16,3213) /* FString */               __um(ToSetValue);                                           // 0x00B0   (0x0010)  
	FAITunableParameter                                RandomSetChance;                                            // 0x00C0   (0x0010)  
};

/// Class /Script/DBDBots.BTService_SetBBEntryTime
/// Size: 0x0030 (0x000080 - 0x0000B0)
class UBTService_SetBBEntryTime : public UBTService_OnRelevantBase
{ 
public:
	FBlackboardKeySelector                             BBToSetKey;                                                 // 0x0080   (0x0030)  
};

/// Class /Script/DBDBots.BTService_SetFocusCooldown
/// Size: 0x0048 (0x000080 - 0x0000C8)
class UBTService_SetFocusCooldown : public UBTService_OnRelevantBase
{ 
public:
	FBlackboardKeySelector                             BBOnObject;                                                 // 0x0080   (0x0030)  
	FName                                              ContextName;                                                // 0x00B0   (0x000C)  
	bool                                               InfiniteDuration;                                           // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00BD   (0x0003)  MISSED
	float                                              Duration;                                                   // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00C4   (0x0004)  MISSED
};

/// Class /Script/DBDBots.BTService_SetMovementConversion
/// Size: 0x0008 (0x000078 - 0x000080)
class UBTService_SetMovementConversion : public UBTService
{ 
public:
	ECharacterMovementTypes                            FromMovementMode;                                           // 0x0078   (0x0001)  
	ECharacterMovementTypes                            ToMovementMode;                                             // 0x0079   (0x0001)  
	char                                               ApplyOrder;                                                 // 0x007A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x007B   (0x0005)  MISSED
};

/// Class /Script/DBDBots.BTService_SetMovementMode
/// Size: 0x0008 (0x000078 - 0x000080)
class UBTService_SetMovementMode : public UBTService
{ 
public:
	ECharacterMovementTypes                            OnEnterMovementMode;                                        // 0x0078   (0x0001)  
	ECharacterMovementTypes                            OnExitMovementMode;                                         // 0x0079   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x007A   (0x0006)  MISSED
};

/// Class /Script/DBDBots.BTService_SetPathSpeedFactor
/// Size: 0x0008 (0x000078 - 0x000080)
class UBTService_SetPathSpeedFactor : public UBTService
{ 
public:
	float                                              SpeedFactor;                                                // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Class /Script/DBDBots.BTService_SetTagCooldown
/// Size: 0x0018 (0x000080 - 0x000098)
class UBTService_SetTagCooldown : public UBTService_OnRelevantBase
{ 
public:
	FGameplayTag                                       CooldownTag;                                                // 0x0080   (0x000C)  
	float                                              CooldownDuration;                                           // 0x008C   (0x0004)  
	bool                                               bAddToExistingDuration;                                     // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0091   (0x0007)  MISSED
};

/// Class /Script/DBDBots.BTService_StateMonitor
/// Size: 0x0060 (0x000078 - 0x0000D8)
class UBTService_StateMonitor : public UBTService
{ 
public:
	FBlackboardKeySelector                             BBIsIntroCompleted;                                         // 0x0078   (0x0030)  
	FBlackboardKeySelector                             BBDifficultyLevel;                                          // 0x00A8   (0x0030)  
};

/// Class /Script/DBDBots.BTService_StateMonitor_Camper
/// Size: 0x0638 (0x0000D8 - 0x000710)
class UBTService_StateMonitor_Camper : public UBTService_StateMonitor
{ 
public:
	FBlackboardKeySelector                             BBDamageState;                                              // 0x00D8   (0x0030)  
	FBlackboardKeySelector                             BBImmoblizedState;                                          // 0x0108   (0x0030)  
	FBlackboardKeySelector                             BBGuidedState;                                              // 0x0138   (0x0030)  
	FBlackboardKeySelector                             BBEscapedState;                                             // 0x0168   (0x0030)  
	FBlackboardKeySelector                             BBIsInInjuredBleedout;                                      // 0x0198   (0x0030)  
	FBlackboardKeySelector                             BBDyingTimerPercentLeft;                                    // 0x01C8   (0x0030)  
	FBlackboardKeySelector                             BBHookTimerPercentLeft;                                     // 0x01F8   (0x0030)  
	FBlackboardKeySelector                             BBHookDrainStage;                                           // 0x0228   (0x0030)  
	FBlackboardKeySelector                             BBItemType;                                                 // 0x0258   (0x0030)  
	FBlackboardKeySelector                             BBItemCharge;                                               // 0x0288   (0x0030)  
	FBlackboardKeySelector                             BBIsHoldingEmptyItem;                                       // 0x02B8   (0x0030)  
	FBlackboardKeySelector                             BBSpecialItemID;                                            // 0x02E8   (0x0030)  
	FBlackboardKeySelector                             BBIsChased;                                                 // 0x0318   (0x0030)  
	FBlackboardKeySelector                             BBWasInStimulusSight;                                       // 0x0348   (0x0030)  
	FBlackboardKeySelector                             BBWasBeingAimedAt;                                          // 0x0378   (0x0030)  
	FBlackboardKeySelector                             BBIsBeingAimedAt;                                           // 0x03A8   (0x0030)  
	FBlackboardKeySelector                             BBIsBeingAttacked;                                          // 0x03D8   (0x0030)  
	FBlackboardKeySelector                             BBIsChained;                                                // 0x0408   (0x0030)  
	FBlackboardKeySelector                             BBIsInPressureZone;                                         // 0x0438   (0x0030)  
	FBlackboardKeySelector                             BBIsInActivatedRBT;                                         // 0x0468   (0x0030)  
	FBlackboardKeySelector                             BBIsInDeathTimer;                                           // 0x0498   (0x0030)  
	FBlackboardKeySelector                             BBHasCrowAttached;                                          // 0x04C8   (0x0030)  
	FBlackboardKeySelector                             BBLastTrapSideStepExpirationTime;                           // 0x04F8   (0x0030)  
	FBlackboardKeySelector                             BBLastAskedToMoveTime;                                      // 0x0528   (0x0030)  
	FBlackboardKeySelector                             BBPreventDroppingEmptyItems;                                // 0x0558   (0x0030)  
	FBlackboardKeySelector                             BBIgnoreGoalPressure;                                       // 0x0588   (0x0030)  
	float                                              EmptyItemChargeThreshold;                                   // 0x05B8   (0x0004)  
	float                                              DeathTimerEndGamePercent;                                   // 0x05BC   (0x0004)  
	float                                              ChaseUnseenMinimumKillerRange;                              // 0x05C0   (0x0004)  
	float                                              ChaseSeenMinimumKillerRange;                                // 0x05C4   (0x0004)  
	float                                              ChasedMinimumScore;                                         // 0x05C8   (0x0004)  
	FAITunableParameter                                ChasedScoreKillerAtMinimumDistance;                         // 0x05CC   (0x0010)  
	FAITunableParameter                                ChasedScoreKillerDistanceMaxRange;                          // 0x05DC   (0x0010)  
	FAITunableParameter                                ChasedScoreKillerWhenUnknownLocation;                       // 0x05EC   (0x0010)  
	FAITunableParameter                                ChasedScorePredictedTarget;                                 // 0x05FC   (0x0010)  
	FAITunableParameter                                ChasedScoreKillerLastKnownDirection;                        // 0x060C   (0x0010)  
	FAITunableParameter                                ChasedScoreKillerMaxDirectionAngle;                         // 0x061C   (0x0010)  
	FAITunableParameter                                ChasedScoreSurvivorWhenVisible;                             // 0x062C   (0x0010)  
	FAITunableParameter                                ChasedScoreSurvivorVisibilityTime;                          // 0x063C   (0x0010)  
	FAITunableParameter                                ChasedScoreKillerUndetectable;                              // 0x064C   (0x0010)  
	FAITunableParameter                                ChasedScoreKillerRangedAndDash;                             // 0x065C   (0x0010)  
	FAITunableParameter                                ChasedScoreKillerChaseTarget;                               // 0x066C   (0x0010)  
	FAITunableParameter                                PressureScoreDistanceWhenUnknownLocation;                   // 0x067C   (0x0010)  
	FAITunableParameter                                PressureScorePredictedTargetMultiplier;                     // 0x068C   (0x0010)  
	FAITunableParameter                                PressureScoreKillerMaxDirectionAngle;                       // 0x069C   (0x0010)  
	FAITunableParameter                                PressureScoreKillerDirectionMaxMultiplier;                  // 0x06AC   (0x0010)  
	FAITunableParameter                                PressureScoreSurvivorVisibilityTime;                        // 0x06BC   (0x0010)  
	FAITunableParameter                                PressureScoreMaxMultiplierWhenSurvivorVisible;              // 0x06CC   (0x0010)  
	FAITunableParameter                                PressureScoreKillerRangedAndDashDistancePenalty;            // 0x06DC   (0x0010)  
	FAITunableParameter                                PressureScoreChaseTargetMultiplier;                         // 0x06EC   (0x0010)  
	FAITunableParameter                                PressureScoreMaxScore;                                      // 0x06FC   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x070C   (0x0004)  MISSED
};

/// Class /Script/DBDBots.BTService_StateMonitor_Slasher
/// Size: 0x0030 (0x0000D8 - 0x000108)
class UBTService_StateMonitor_Slasher : public UBTService_StateMonitor
{ 
public:
	FBlackboardKeySelector                             BBIsCarrying;                                               // 0x00D8   (0x0030)  
};

/// Class /Script/DBDBots.BTService_StimuliMonitor
/// Size: 0x0170 (0x000078 - 0x0001E8)
class UBTService_StimuliMonitor : public UBTService
{ 
public:
	FBlackboardKeySelector                             BBStimulusOriginLocation;                                   // 0x0078   (0x0030)  
	FBlackboardKeySelector                             BBStimulusNavLocation;                                      // 0x00A8   (0x0030)  
	FBlackboardKeySelector                             BBStimulusActor;                                            // 0x00D8   (0x0030)  
	FBlackboardKeySelector                             BBStimulusInSight;                                          // 0x0108   (0x0030)  
	FBlackboardKeySelector                             BBStimulusWasInSight;                                       // 0x0138   (0x0030)  
	float                                              StimulusWasInSightDuration;                                 // 0x0168   (0x0004)  
	FAITunableParameter                                StimuliRefreshInterval;                                     // 0x016C   (0x0010)  
	float                                              ExtrapolateLoseSightDuration;                               // 0x017C   (0x0004)  
	FVector                                            NavMeshFindLocationExtents;                                 // 0x0180   (0x000C)  
	float                                              SeenFriendlyStimuliExpiryInSeconds;                         // 0x018C   (0x0004)  
	float                                              ForcedStimulusInSightDistance;                              // 0x0190   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0194   (0x0004)  MISSED
	SDK_UNDEFINED(80,3214) /* TMap<AActor*, float> */  __um(_seenFriendlyStimuli);                                 // 0x0198   (0x0050)  
};

/// Class /Script/DBDBots.BTService_StimuliMonitor_Camper
/// Size: 0x0068 (0x0001E8 - 0x000250)
class UBTService_StimuliMonitor_Camper : public UBTService_StimuliMonitor
{ 
public:
	FBlackboardKeySelector                             BBTerrorPressure;                                           // 0x01E8   (0x0030)  
	FBlackboardKeySelector                             BBIsFleeing;                                                // 0x0218   (0x0030)  
	float                                              LastValidTerrorRadiusStimulusMemoryLifeTime;                // 0x0248   (0x0004)  
	float                                              IgnoreNonKillerStimulusWhileInSprintDistanceSquared;        // 0x024C   (0x0004)  
};

/// Class /Script/DBDBots.BTService_StimuliMonitor_Slasher
/// Size: 0x0120 (0x0001E8 - 0x000308)
class UBTService_StimuliMonitor_Slasher : public UBTService_StimuliMonitor
{ 
public:
	FBlackboardKeySelector                             BBInvestigateStimulusLocation;                              // 0x01E8   (0x0030)  
	FBlackboardKeySelector                             BBInvestigateStimulusActor;                                 // 0x0218   (0x0030)  
	FBlackboardKeySelector                             BBInBehaviorInvestigationStep;                              // 0x0248   (0x0030)  
	FBlackboardKeySelector                             BBIsBlind;                                                  // 0x0278   (0x0030)  
	FBlackboardKeySelector                             BBChasedActor;                                              // 0x02A8   (0x0030)  
	FAITunableParameter                                UseNextStimulusInvestigationAfterChaseDelay;                // 0x02D8   (0x0010)  
	float                                              IgnorePreviousChasedStimulusActorDelay;                     // 0x02E8   (0x0004)  
	float                                              DefaultStimulusToInvestigateMaxAge;                         // 0x02EC   (0x0004)  
	float                                              KOStimulusToInvestigateMaxAge;                              // 0x02F0   (0x0004)  
	float                                              NextStimulusInvestigationMinRange;                          // 0x02F4   (0x0004)  
	float                                              CantSeeOverBlindRatio;                                      // 0x02F8   (0x0004)  
	float                                              FavorizeStandingTargetInRange;                              // 0x02FC   (0x0004)  
	float                                              FavorizeStandingTargetOutRange;                             // 0x0300   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0304   (0x0004)  MISSED
};

/// Class /Script/DBDBots.BTTask_ClearBBEntry
/// Size: 0x0030 (0x000078 - 0x0000A8)
class UBTTask_ClearBBEntry : public UBTTaskNode
{ 
public:
	FBlackboardKeySelector                             BBToResetKey;                                               // 0x0078   (0x0030)  
};

/// Class /Script/DBDBots.BTTask_CopyBBEntry
/// Size: 0x0068 (0x000078 - 0x0000E0)
class UBTTask_CopyBBEntry : public UBTTaskNode
{ 
public:
	FBlackboardKeySelector                             BBFrom;                                                     // 0x0078   (0x0030)  
	FBlackboardKeySelector                             BBTo;                                                       // 0x00A8   (0x0030)  
	bool                                               CopyOnlyValidKeyValue;                                      // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00D9   (0x0007)  MISSED
};

/// Class /Script/DBDBots.BTTask_ExtMoveDirecltyToward
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
class UBTTask_ExtMoveDirecltyToward : public UBTTask_MoveDirectlyToward
{ 
public:
	ECharacterMovementTypes                            MovementMode;                                               // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00C9   (0x0007)  MISSED
};

/// Struct /Script/DBDBots.MovementModeNearActor
/// Size: 0x0058 (0x000000 - 0x000058)
struct FMovementModeNearActor
{ 
	ECharacterMovementTypes                            NearActorMovementMode;                                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UClass*                                      NearActorClass;                                             // 0x0008   (0x0008)  
	FAITunableParameter                                NearDistanceSquared;                                        // 0x0010   (0x0010)  
	FAIRoll                                            SeeActorRoll;                                               // 0x0020   (0x0024)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	TArray<EPlayerRole>                                ApplyToPlayerRoles;                                         // 0x0048   (0x0010)  
};

/// Class /Script/DBDBots.BTTask_ExtMoveTo
/// Size: 0x0190 (0x0000C0 - 0x000250)
class UBTTask_ExtMoveTo : public UBTTask_MoveTo
{ 
public:
	FBlackboardKeySelector                             BBStrafeFocus;                                              // 0x00C0   (0x0030)  
	EExtMoveToStrafeFocusOptions                       StrafeFocus;                                                // 0x00F0   (0x0001)  
	bool                                               StrafeFocusPitch;                                           // 0x00F1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00F2   (0x0002)  MISSED
	float                                              StrafeNearFocusModeUnderDistance;                           // 0x00F4   (0x0004)  
	float                                              IntermittentOnStrafeFocusInterval;                          // 0x00F8   (0x0004)  
	float                                              IntermittentOnStrafeFocusDeviation;                         // 0x00FC   (0x0004)  
	float                                              IntermittentOffStrafeFocusInterval;                         // 0x0100   (0x0004)  
	float                                              IntermittentOffStrafeFocusDeviation;                        // 0x0104   (0x0004)  
	float                                              EndMoveStrafeFocusPrecisionAngle;                           // 0x0108   (0x0004)  
	bool                                               StrafeFocusOwnerOnComponentBBKey;                           // 0x010C   (0x0001)  
	ECharacterMovementTypes                            ToGoalMovementMode;                                         // 0x010D   (0x0001)  
	ECharacterMovementTypes                            NearGoalMovementMode;                                       // 0x010E   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x010F   (0x0001)  MISSED
	float                                              NearGoalModeUnderDistance;                                  // 0x0110   (0x0004)  
	float                                              NormalMoveUnderNavLinkDistance;                             // 0x0114   (0x0004)  
	FBlackboardKeySelector                             BBIgnoreGroupAvoidance;                                     // 0x0118   (0x0030)  
	float                                              BlockedCheckInterval;                                       // 0x0148   (0x0004)  
	int32_t                                            BlockedContinueTimes;                                       // 0x014C   (0x0004)  
	float                                              BlockedSpeedPercent;                                        // 0x0150   (0x0004)  
	char                                               MaxTriesToRepathAroundBlocker;                              // 0x0154   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0155   (0x0003)  MISSED
	TArray<FMovementModeNearActor>                     MovementModesNearActors;                                    // 0x0158   (0x0010)  
	float                                              RepathInterval;                                             // 0x0168   (0x0004)  
	bool                                               UseAccelerationForPaths;                                    // 0x016C   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x016D   (0x0003)  MISSED
	float                                              PathReachedPointRadius;                                     // 0x0170   (0x0004)  
	float                                              NearPathFilterRadius;                                       // 0x0174   (0x0004)  
	FName                                              UseContextualAcceptableRadius;                              // 0x0178   (0x000C)  
	float                                              FindRelevantDangerInterval;                                 // 0x0184   (0x0004)  
	float                                              UpdateTraverseStatesInterval;                               // 0x0188   (0x0004)  
	bool                                               FailTaskOnUndodgeableDangerObject;                          // 0x018C   (0x0001)  
	bool                                               IgnoreDangerObjects;                                        // 0x018D   (0x0001)  
	unsigned char                                      UnknownData04_5[0x1A];                                      // 0x018E   (0x001A)  MISSED
	SDK_UNDEFINED(80,3215) /* TMap<AActor*, bool> */   __um(_seenActorsMap);                                       // 0x01A8   (0x0050)  
	unsigned char                                      UnknownData05_6[0x58];                                      // 0x01F8   (0x0058)  MISSED
};

/// Class /Script/DBDBots.BTTask_ExtWait
/// Size: 0x0020 (0x000080 - 0x0000A0)
class UBTTask_ExtWait : public UBTTask_Wait
{ 
public:
	FAITunableParameter                                WaitTimeInterval;                                           // 0x0080   (0x0010)  
	FAITunableParameter                                WaitRandomDeviation;                                        // 0x0090   (0x0010)  
};

/// Class /Script/DBDBots.BTTask_FleeMoveTo
/// Size: 0x0018 (0x000250 - 0x000268)
class UBTTask_FleeMoveTo : public UBTTask_ExtMoveTo
{ 
public:
	float                                              InScrambleMovementMinDistance;                              // 0x0250   (0x0004)  
	float                                              OutScrambleMovementMinDistance;                             // 0x0254   (0x0004)  
	float                                              InScrambleMovementInterval;                                 // 0x0258   (0x0004)  
	float                                              LoopScrambleMovementInterval;                               // 0x025C   (0x0004)  
	float                                              LoopScrambleMovementRandomDeviation;                        // 0x0260   (0x0004)  
	float                                              CrouchWithinLastEvadeLoopPointRadius;                       // 0x0264   (0x0004)  
};

/// Class /Script/DBDBots.BTTask_InputPress
/// Size: 0x0020 (0x000078 - 0x000098)
class UBTTask_InputPress : public UBTTaskNode
{ 
public:
	EPawnInputPressTypes                               Input;                                                      // 0x0078   (0x0001)  
	ETaskInputPressModes                               InputMode;                                                  // 0x0079   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x007A   (0x0002)  MISSED
	FAITunableParameter                                InputPressLoopInterval;                                     // 0x007C   (0x0010)  
	bool                                               LockInput;                                                  // 0x008C   (0x0001)  
	unsigned char                                      UnknownData01_6[0xB];                                       // 0x008D   (0x000B)  MISSED
};

/// Class /Script/DBDBots.BTTask_Interact
/// Size: 0x0040 (0x000078 - 0x0000B8)
class UBTTask_Interact : public UBTTaskNode
{ 
public:
	FBlackboardKeySelector                             BBInteractorObj;                                            // 0x0078   (0x0030)  
	EPawnInputPressTypes                               Input;                                                      // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A9   (0x0003)  MISSED
	float                                              OnFailFocusCooldownDuration;                                // 0x00AC   (0x0004)  
	bool                                               PropagateCooldownOnInteractable;                            // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00B1   (0x0003)  MISSED
	float                                              FailStartInteractTimeLimit;                                 // 0x00B4   (0x0004)  
};

/// Class /Script/DBDBots.BTTask_RotateToBBInteractor
/// Size: 0x0040 (0x0000B0 - 0x0000F0)
class UBTTask_RotateToBBInteractor : public UBTTask_BlueprintBase
{ 
public:
	FBlackboardKeySelector                             BBInteractorObj;                                            // 0x00B0   (0x0030)  
	SDK_UNDEFINED(16,3216) /* TArray<FString> */       __um(InteractionIds);                                       // 0x00E0   (0x0010)  
};

/// Class /Script/DBDBots.BTTask_RunSkills
/// Size: 0x0010 (0x000078 - 0x000088)
class UBTTask_RunSkills : public UBTTaskNode
{ 
public:
	FGameplayTag                                       Context;                                                    // 0x0078   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Class /Script/DBDBots.BTTask_SetBBEntry
/// Size: 0x0040 (0x000078 - 0x0000B8)
class UBTTask_SetBBEntry : public UBTTaskNode
{ 
public:
	FBlackboardKeySelector                             BBToSetKey;                                                 // 0x0078   (0x0030)  
	SDK_UNDEFINED(16,3217) /* FString */               __um(ToSetValue);                                           // 0x00A8   (0x0010)  
};

/// Class /Script/DBDBots.BTTask_SetBBEntryTime
/// Size: 0x0030 (0x000078 - 0x0000A8)
class UBTTask_SetBBEntryTime : public UBTTaskNode
{ 
public:
	FBlackboardKeySelector                             BBToSetKey;                                                 // 0x0078   (0x0030)  
};

/// Class /Script/DBDBots.BTTask_SetFleeLoopCooldown
/// Size: 0x0008 (0x000078 - 0x000080)
class UBTTask_SetFleeLoopCooldown : public UBTTaskNode
{ 
public:
	float                                              Duration;                                                   // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Class /Script/DBDBots.BTTask_SetFocusCooldown
/// Size: 0x0048 (0x000078 - 0x0000C0)
class UBTTask_SetFocusCooldown : public UBTTaskNode
{ 
public:
	FBlackboardKeySelector                             BBOnObject;                                                 // 0x0078   (0x0030)  
	FName                                              ContextName;                                                // 0x00A8   (0x000C)  
	bool                                               InfiniteDuration;                                           // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B5   (0x0003)  MISSED
	float                                              Duration;                                                   // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00BC   (0x0004)  MISSED
};

/// Class /Script/DBDBots.BTTask_SetIsChased
/// Size: 0x0008 (0x000078 - 0x000080)
class UBTTask_SetIsChased : public UBTTaskNode
{ 
public:
	bool                                               ToSetValue;                                                 // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Class /Script/DBDBots.BTTask_SetMovementMode
/// Size: 0x0008 (0x000078 - 0x000080)
class UBTTask_SetMovementMode : public UBTTaskNode
{ 
public:
	ECharacterMovementTypes                            MovementMode;                                               // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Class /Script/DBDBots.BTTask_SetRandomNavPoint
/// Size: 0x0078 (0x000078 - 0x0000F0)
class UBTTask_SetRandomNavPoint : public UBTTaskNode
{ 
public:
	FBlackboardKeySelector                             BBFromLocation;                                             // 0x0078   (0x0030)  
	FBlackboardKeySelector                             BBToLocation;                                               // 0x00A8   (0x0030)  
	float                                              MinAroundRadius;                                            // 0x00D8   (0x0004)  
	float                                              MaxAroundRadius;                                            // 0x00DC   (0x0004)  
	int32_t                                            MaxNbAttempts;                                              // 0x00E0   (0x0004)  
	int32_t                                            MaxSafeNbAttempts;                                          // 0x00E4   (0x0004)  
	class UClass*                                      FilterClass;                                                // 0x00E8   (0x0008)  
};

/// Class /Script/DBDBots.BTTask_StealthMoveTo
/// Size: 0x0000 (0x000250 - 0x000250)
class UBTTask_StealthMoveTo : public UBTTask_ExtMoveTo
{ 
public:
};

/// Struct /Script/DBDBots.AISkillPerk
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAISkillPerk
{ 
	TArray<FPerkIdDropdown>                            Perks;                                                      // 0x0000   (0x0010)  
	class UAISkill*                                    Skill;                                                      // 0x0010   (0x0008)  
};

/// Struct /Script/DBDBots.AISkillEvent
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAISkillEvent
{ 
	TArray<FName>                                      SpecialEventIds;                                            // 0x0000   (0x0010)  
	class UAISkill*                                    Skill;                                                      // 0x0010   (0x0008)  
};

/// Class /Script/DBDBots.DBDAIBTController
/// Size: 0x0158 (0x000620 - 0x000778)
class ADBDAIBTController : public ADBDAIController
{ 
public:
	class UBehaviorTree*                               BehaviorTree;                                               // 0x0620   (0x0008)  
	TArray<class UAISkill*>                            BaseSkills;                                                 // 0x0628   (0x0010)  
	TArray<class UAISkill*>                            RoleSkills;                                                 // 0x0638   (0x0010)  
	TArray<FAISkillPerk>                               PerkSkills;                                                 // 0x0648   (0x0010)  
	TArray<FAISkillEvent>                              EventSkills;                                                // 0x0658   (0x0010)  
	bool                                               ListenToAttackEvents;                                       // 0x0668   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0669   (0x0007)  MISSED
	class UDBDAIPerceptionComponent*                   _dbdPerception;                                             // 0x0670   (0x0008)  
	class UDBDBlackboardComponent*                     _dbdBlackboard;                                             // 0x0678   (0x0008)  
	class UDBDPathFollowingComponent*                  _dbdPathFollowing;                                          // 0x0680   (0x0008)  
	class UDBDBehaviorTreeComponent*                   _dbdBehaviorTree;                                           // 0x0688   (0x0008)  
	class UDBDNavMeshExplorerComponent*                _navMeshExplorer;                                           // 0x0690   (0x0008)  
	class UDBDAIStateComponent*                        _aiState;                                                   // 0x0698   (0x0008)  
	class UDBDAIGoalComponent*                         _aiGoal;                                                    // 0x06A0   (0x0008)  
	class UDBDAIPassiveCameraComponent*                _aiPassiveCamera;                                           // 0x06A8   (0x0008)  
	class UDBDAIEnemyTrackerComponent*                 _enemyTracker;                                              // 0x06B0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x06B8   (0x0008)  MISSED
	SDK_UNDEFINED(80,3218) /* TMap<FGameplayTag, FAISkillDynamicSubtreeStruct> */ __um(_setDynamicSubtrees);       // 0x06C0   (0x0050)  
	TArray<class UAISkill*>                            _aiSkills;                                                  // 0x0710   (0x0010)  
	unsigned char                                      UnknownData02_6[0x58];                                      // 0x0720   (0x0058)  MISSED


	/// Functions
	// Function /Script/DBDBots.DBDAIBTController.OnPawnBump
	// void OnPawnBump(class AActor* SelfActor, class AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit);           // [0x4f88580] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/DBDBots.DBDAIBTController.Authority_FinishedPlaying
	// void Authority_FinishedPlaying();                                                                                     // [0x4f88560] Final|Native|Private 
};

/// Class /Script/DBDBots.DBDAIBTUtilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UDBDAIBTUtilities : public UDBDAIUtilities
{ 
public:
};

/// Class /Script/DBDBots.DBDAIEnemyTrackerComponent
/// Size: 0x0088 (0x0000B8 - 0x000140)
class UDBDAIEnemyTrackerComponent : public UActorComponent
{ 
public:
	class UAIEnemyTracker*                             EnemyTracker;                                               // 0x00B8   (0x0008)  
	class UAIEnemyTargetPrediction*                    EnemyTargetPrediction;                                      // 0x00C0   (0x0008)  
	float                                              DataUpdateInterval;                                         // 0x00C8   (0x0004)  
	float                                              TargetPredictionUpdateInterval;                             // 0x00CC   (0x0004)  
	FAITunableParameter                                PotentialTargetedLocationRange;                             // 0x00D0   (0x0010)  
	float                                              BaseKnownInfoExpirationTime;                                // 0x00E0   (0x0004)  
	float                                              DistanceInfoExpirationTime;                                 // 0x00E4   (0x0004)  
	SDK_UNDEFINED(80,3219) /* TMap<TWeakObjectPtr<ACharacter*>, FAITrackedEnemyData> */ __um(_trackedEnemiesData); // 0x00E8   (0x0050)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0138   (0x0008)  MISSED


	/// Functions
	// Function /Script/DBDBots.DBDAIEnemyTrackerComponent.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x4f8c7c0] Final|Native|Private 
};

/// Class /Script/DBDBots.DBDAIGoalComponent
/// Size: 0x00A8 (0x0000B8 - 0x000160)
class UDBDAIGoalComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	SDK_UNDEFINED(80,3220) /* TMap<UObject*, FAIGoal> */ __um(_activeGoals);                                       // 0x00C0   (0x0050)  
	SDK_UNDEFINED(80,3221) /* TMap<UObject*, FAIGoalWeightContainer> */ __um(_foundWeightedGoals);                 // 0x0110   (0x0050)  
};

/// Class /Script/DBDBots.DBDAIPassiveCameraComponent
/// Size: 0x0080 (0x0000B8 - 0x000138)
class UDBDAIPassiveCameraComponent : public UActorComponent
{ 
public:
	float                                              RotateCameraOnStationaryWaitTime;                           // 0x00B8   (0x0004)  
	float                                              RotateCameraOnStationaryDegreePerSecond;                    // 0x00BC   (0x0004)  
	FAITunableParameter                                CameraRotationFullRotationDelay;                            // 0x00C0   (0x0010)  
	FAITunableParameter                                CameraRotationBetweenTargetDelay;                           // 0x00D0   (0x0010)  
	FAITunableParameter                                CameraRotationMinimumInteractionTime;                       // 0x00E0   (0x0010)  
	int32_t                                            CameraRotationTotalRaycasts;                                // 0x00F0   (0x0004)  
	float                                              ForwardViewHalfAngle;                                       // 0x00F4   (0x0004)  
	float                                              FocusPointCandidateRemoveOppositeHalfAngle;                 // 0x00F8   (0x0004)  
	float                                              FocusPointCandidateForceKeepDistance;                       // 0x00FC   (0x0004)  
	float                                              FocusPointCandidateMinDistance;                             // 0x0100   (0x0004)  
	float                                              InvalidKillerLocationRangeRatio;                            // 0x0104   (0x0004)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0108   (0x0030)  MISSED
};

/// Class /Script/DBDBots.DBDAIPerceptionComponent
/// Size: 0x0278 (0x000198 - 0x000410)
class UDBDAIPerceptionComponent : public UAIPerceptionComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0198   (0x0020)  MISSED
	TArray<EAttackType>                                RangedAttackTypes;                                          // 0x01B8   (0x0010)  
	TArray<EKillerAbilities>                           RangedKillerAbilities;                                      // 0x01C8   (0x0010)  
	TArray<EKillerAbilities>                           FastVaultKillerAbilities;                                   // 0x01D8   (0x0010)  
	bool                                               UseSimulatedCameraLocationForStimulusReceiverLocation;      // 0x01E8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x01E9   (0x0003)  MISSED
	float                                              CameraOffset;                                               // 0x01EC   (0x0004)  
	float                                              StimulusHalfFOV;                                            // 0x01F0   (0x0004)  
	float                                              OutOfChaseFullPeripheralVisionRange;                        // 0x01F4   (0x0004)  
	float                                              InChaseFullPeripheralVisionRange;                           // 0x01F8   (0x0004)  
	float                                              DarknessMaxVisionRange;                                     // 0x01FC   (0x0004)  
	SDK_UNDEFINED(80,3222) /* TMap<UClass*, UObject*> */ __um(_objOverridingSenses);                               // 0x0200   (0x0050)  
	TArray<class UAISenseConfig*>                      _originalSenseConfigs;                                      // 0x0250   (0x0010)  
	TArray<FAIDetectedStimulus>                        _detectedHostileStimuli;                                    // 0x0260   (0x0010)  
	FAIDetectedStimulus                                _bestDetectedHostileStimulus;                               // 0x0270   (0x0088)  
	FAIDetectedStimulus                                _lastBestDetectedHostileStimulusInMemory;                   // 0x02F8   (0x0088)  
	unsigned char                                      UnknownData02_5[0x6C];                                      // 0x0380   (0x006C)  MISSED
	FAITunableParameter                                _activePhaseWalkingNoiseMaxRange;                           // 0x03EC   (0x0010)  
	float                                              ThreatDividerForNonControlledActor;                         // 0x03FC   (0x0004)  
	float                                              HighThreatDistanceForNonControlledActor;                    // 0x0400   (0x0004)  
	float                                              CurrentThreatDivider;                                       // 0x0404   (0x0004)  
	float                                              TerrorDistanceMultiplierForNonControlledActor;              // 0x0408   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x040C   (0x0004)  MISSED
};

/// Class /Script/DBDBots.DBDAIStateComponent
/// Size: 0x02A0 (0x0000B8 - 0x000358)
class UDBDAIStateComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	int32_t                                            UnsafeStateAtHookedCount;                                   // 0x00C0   (0x0004)  
	int32_t                                            DireStateAtHookedCount;                                     // 0x00C4   (0x0004)  
	float                                              MidObjectiveStateProgressionRatio;                          // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	SDK_UNDEFINED(80,3223) /* TMap<EAIObjectiveState, FDangerStateGameStateMapContainer> */ __um(GameStateTable);  // 0x00D0   (0x0050)  
	SDK_UNDEFINED(80,3224) /* TMap<EAIDifficultyLevel, FGameStatePressureZoneLevelMapContainer> */ __um(PressureZoneLevelTable); // 0x0120   (0x0050)  
	SDK_UNDEFINED(80,3225) /* TMap<EAIDifficultyLevel, float> */ __um(MinRadiusPressureZoneHabituation);           // 0x0170   (0x0050)  
	SDK_UNDEFINED(80,3226) /* TMap<EAIPressureZoneLevel, float> */ __um(PressureZoneHighToLowRangeLerpRatios);     // 0x01C0   (0x0050)  
	float                                              DefaultChasedPhaseOutDuration;                              // 0x0210   (0x0004)  
	float                                              InjuredChasedPhaseOutDuration;                              // 0x0214   (0x0004)  
	float                                              DefaultBeingAimedAtPhaseOutDuration;                        // 0x0218   (0x0004)  
	float                                              InjuredBeingAimedAtPhaseOutDuration;                        // 0x021C   (0x0004)  
	float                                              StimulusWasInSightDuration;                                 // 0x0220   (0x0004)  
	float                                              LoSFoVToStimulusCheckPeriod;                                // 0x0224   (0x0004)  
	float                                              LoSToStimulusValidDuration;                                 // 0x0228   (0x0004)  
	float                                              FoVToStimulusValidDuration;                                 // 0x022C   (0x0004)  
	float                                              BlockingSurvivorLocationLifetime;                           // 0x0230   (0x0004)  
	float                                              BlockingSurvivorLocationAcceptableDistSq;                   // 0x0234   (0x0004)  
	float                                              MaximumBlockingSurvivorLocationDist;                        // 0x0238   (0x0004)  
	float                                              NotMovingCheckInterval;                                     // 0x023C   (0x0004)  
	float                                              NotMovingSpeedPercent;                                      // 0x0240   (0x0004)  
	char                                               NotMovingContinuousTimes;                                   // 0x0244   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0245   (0x0003)  MISSED
	FAITunableParameter                                SpecialAttackReactionTimeMultiplier;                        // 0x0248   (0x0010)  
	unsigned char                                      UnknownData03_6[0x100];                                     // 0x0258   (0x0100)  MISSED


	/// Functions
	// Function /Script/DBDBots.DBDAIStateComponent.OnUniqueGameplayEvent
	// void OnUniqueGameplayEvent(EDBDScoreTypes EventType, float Amount, class AActor* Instigator, class AActor* Target);   // [0x4f8ca20] Final|Native|Private 
	// Function /Script/DBDBots.DBDAIStateComponent.OnStartAimingEventDispatched
	// void OnStartAimingEventDispatched(FGameplayTag gameEventType, FGameEventData& GameEventData);                         // [0x4f8c910] Final|Native|Private|HasOutParms 
	// Function /Script/DBDBots.DBDAIStateComponent.OnSpecialAttackEventDispatched
	// void OnSpecialAttackEventDispatched(FGameplayTag gameEventType, FGameEventData& GameEventData);                       // [0x4f8c800] Final|Native|Private|HasOutParms 
};

/// Class /Script/DBDBots.DBDBehaviorTreeComponent
/// Size: 0x0068 (0x000298 - 0x000300)
class UDBDBehaviorTreeComponent : public UBehaviorTreeComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0298   (0x0008)  MISSED
	SDK_UNDEFINED(80,3227) /* TMap<UClass*, FRelevantNodeMemory> */ __um(_lastRelevantNodeMemories);               // 0x02A0   (0x0050)  
	TArray<class UObject*>                             _createdObjects;                                            // 0x02F0   (0x0010)  
};

/// Class /Script/DBDBots.DBDBlackboardComponent
/// Size: 0x02A0 (0x0001C0 - 0x000460)
class UDBDBlackboardComponent : public UBlackboardComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x01C0   (0x0010)  MISSED
	SDK_UNDEFINED(80,3228) /* TMap<UObject*, FMindFocusObjectEntry> */ __um(_mindFocusEntries);                    // 0x01D0   (0x0050)  
	SDK_UNDEFINED(80,3229) /* TMap<FGameplayTag, FVector> */ __um(_pinLocations);                                  // 0x0220   (0x0050)  
	SDK_UNDEFINED(80,3230) /* TMap<FGameplayTag, UObject*> */ __um(_pinObjects);                                   // 0x0270   (0x0050)  
	SDK_UNDEFINED(80,3231) /* TMap<UObject*, float> */ __um(_lostMindFocusEntries);                                // 0x02C0   (0x0050)  
	SDK_UNDEFINED(80,3232) /* TMap<FGameplayTag, FWeightedWishedObjectMapContainer> */ __um(_objectWishListMap);   // 0x0310   (0x0050)  
	SDK_UNDEFINED(80,3233) /* TSet<UObject*> */        __um(_discoveredObjects);                                   // 0x0360   (0x0050)  
	SDK_UNDEFINED(80,3234) /* TSet<UObject*> */        __um(_intentionValidators);                                 // 0x03B0   (0x0050)  
	SDK_UNDEFINED(80,3235) /* TSet<APallet*> */        __um(_convincingDreamPallets);                              // 0x0400   (0x0050)  
	TArray<class UAISkill*>                            _dropItemLocks;                                             // 0x0450   (0x0010)  
};

/// Class /Script/DBDBots.DBDNavLinkCustomComponent
/// Size: 0x0070 (0x000198 - 0x000208)
class UDBDNavLinkCustomComponent : public UNavLinkCustomComponent
{ 
public:
	FVector                                            BaseLinkRelativeStart;                                      // 0x0198   (0x000C)  
	FVector                                            BaseLinkRelativeEnd;                                        // 0x01A4   (0x000C)  
	SDK_UNDEFINED(1,3236) /* TEnumAsByte<ENavLinkDirection> */ __um(BaseLinkDirection);                            // 0x01B0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x01B1   (0x0003)  MISSED
	float                                              AutoSnapSmartLinkPointsUpHeight;                            // 0x01B4   (0x0004)  
	float                                              AutoSnapSmartLinkPointsDownHeight;                          // 0x01B8   (0x0004)  
	SDK_UNDEFINED(1,3237) /* TEnumAsByte<ECollisionChannel> */ __um(AutoSnapCollisionChannel);                     // 0x01BC   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x01BD   (0x0003)  MISSED
	float                                              AutoSmartLinkDirectionMaxHeight;                            // 0x01C0   (0x0004)  
	bool                                               DisableSmartLinkOnPathObstruction;                          // 0x01C4   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x01C5   (0x0003)  MISSED
	float                                              PathObstructionTestDistance;                                // 0x01C8   (0x0004)  
	float                                              PathObstructionTestShapeRadius;                             // 0x01CC   (0x0004)  
	float                                              PathObstructionTestHeightOffset;                            // 0x01D0   (0x0004)  
	SDK_UNDEFINED(1,3238) /* TEnumAsByte<ECollisionChannel> */ __um(PathObstructionCollisionChannel);              // 0x01D4   (0x0001)  
	bool                                               DisableOtherSmartLinkInProximityOnEnable;                   // 0x01D5   (0x0001)  
	bool                                               EnableOtherSmartLinkInProximityOnDisable;                   // 0x01D6   (0x0001)  
	unsigned char                                      UnknownData03_5[0x1];                                       // 0x01D7   (0x0001)  MISSED
	float                                              OtherSmartLinkInProximitySearchDistance;                    // 0x01D8   (0x0004)  
	bool                                               ShowDebugInfo;                                              // 0x01DC   (0x0001)  
	unsigned char                                      UnknownData04_5[0x1B];                                      // 0x01DD   (0x001B)  MISSED
	TArray<class ANavLinkProxy*>                       _navLinkProxyInProximity;                                   // 0x01F8   (0x0010)  


	/// Functions
	// Function /Script/DBDBots.DBDNavLinkCustomComponent.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x4f8c7e0] Final|Native|Private 
};

/// Class /Script/DBDBots.DBDNavMeshExplorerComponent
/// Size: 0x0088 (0x0000B8 - 0x000140)
class UDBDNavMeshExplorerComponent : public UActorComponent
{ 
public:
	float                                              ExploreAtAgentMoveDistance;                                 // 0x00B8   (0x0004)  
	float                                              ExploreAtInterval;                                          // 0x00BC   (0x0004)  
	FAITunableParameter                                ExplorationBoxHalfExtent;                                   // 0x00C0   (0x0010)  
	int32_t                                            FullyAutoExploredAtGameTime;                                // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00D4   (0x0004)  MISSED
	class UDBDPathFollowingComponent*                  _pathFollowingComponent;                                    // 0x00D8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x60];                                      // 0x00E0   (0x0060)  MISSED
};

/// Class /Script/DBDBots.DBDPathFollowingComponent
/// Size: 0x0230 (0x000258 - 0x000488)
class UDBDPathFollowingComponent : public UPathFollowingComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0258   (0x0010)  MISSED
	float                                              UnblockPathDeviationRadius;                                 // 0x0268   (0x0004)  
	float                                              UnblockPathTimeLimit;                                       // 0x026C   (0x0004)  
	float                                              UnblockPathReachDistance;                                   // 0x0270   (0x0004)  
	unsigned char                                      UnknownData01_5[0x124];                                     // 0x0274   (0x0124)  MISSED
	SDK_UNDEFINED(80,3239) /* TSet<ANavLinkProxy*> */  __um(_onNavLinkProxies);                                    // 0x0398   (0x0050)  
	unsigned char                                      UnknownData02_6[0xA0];                                      // 0x03E8   (0x00A0)  MISSED
};

/// Class /Script/DBDBots.EnvQueryContext_CenterOfMap
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryContext_CenterOfMap : public UEnvQueryContext
{ 
public:
};

/// Class /Script/DBDBots.EnvQueryContext_EscapeDoors
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryContext_EscapeDoors : public UEnvQueryContext
{ 
public:
};

/// Class /Script/DBDBots.EnvQueryContext_FriendlyDangerObjects
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryContext_FriendlyDangerObjects : public UEnvQueryContext
{ 
public:
};

/// Class /Script/DBDBots.EnvQueryContext_Generators
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryContext_Generators : public UEnvQueryContext
{ 
public:
};

/// Class /Script/DBDBots.EnvQueryContext_Hooks
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryContext_Hooks : public UEnvQueryContext
{ 
public:
};

/// Class /Script/DBDBots.EnvQueryContext_IncompleteGenerators
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryContext_IncompleteGenerators : public UEnvQueryContext
{ 
public:
};

/// Class /Script/DBDBots.EnvQueryContext_K33ControlStations
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryContext_K33ControlStations : public UEnvQueryContext
{ 
public:
};

/// Class /Script/DBDBots.EnvQueryContext_Lockers
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryContext_Lockers : public UEnvQueryContext
{ 
public:
};

/// Class /Script/DBDBots.EnvQueryContext_PinActor
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryContext_PinActor : public UEnvQueryContext
{ 
public:
};

/// Class /Script/DBDBots.EnvQueryContext_PinLocation
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryContext_PinLocation : public UEnvQueryContext
{ 
public:
};

/// Class /Script/DBDBots.EnvQueryContext_TerrorRadius
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryContext_TerrorRadius : public UEnvQueryContext
{ 
public:
};

/// Class /Script/DBDBots.EnvQueryTest_ApproachLureableDangerObject
/// Size: 0x0018 (0x000238 - 0x000250)
class UEnvQueryTest_ApproachLureableDangerObject : public UEnvQueryTest
{ 
public:
	class UClass*                                      QuerierContext;                                             // 0x0238   (0x0008)  
	class UClass*                                      TargetContext;                                              // 0x0240   (0x0008)  
	float                                              TowardDangerObjectMaxAngle;                                 // 0x0248   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x024C   (0x0004)  MISSED
};

/// Class /Script/DBDBots.EnvQueryTest_Basement
/// Size: 0x0168 (0x000238 - 0x0003A0)
class UEnvQueryTest_Basement : public UEnvQueryTest
{ 
public:
	class UClass*                                      QuerierContext;                                             // 0x0238   (0x0008)  
	FAIDataProviderFloatValue                          BasementBottomPenalty;                                      // 0x0240   (0x0040)  
	FAIDataProviderBoolValue                           ApplyEnteringPenaltyIfAlreadyInside;                        // 0x0280   (0x0040)  
	FAIDataProviderFloatValue                          EnteringBasementFixedPenalty;                               // 0x02C0   (0x0040)  
	FAIDataProviderBoolValue                           Invert;                                                     // 0x0300   (0x0040)  
	FAIDataProviderFloatValue                          BasementBoxExtentShrink;                                    // 0x0340   (0x0040)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0380   (0x0020)  MISSED
};

/// Class /Script/DBDBots.EnvQueryTest_IsInDangerObjectRange
/// Size: 0x01C8 (0x000238 - 0x000400)
class UEnvQueryTest_IsInDangerObjectRange : public UEnvQueryTest
{ 
public:
	class UClass*                                      QuerierContext;                                             // 0x0238   (0x0008)  
	FAIDataProviderBoolValue                           Invert;                                                     // 0x0240   (0x0040)  
	FAIDataProviderBoolValue                           MustHaveDangerVision;                                       // 0x0280   (0x0040)  
	FAIDataProviderBoolValue                           CheckIfAnyBodyPartInDangerArea;                             // 0x02C0   (0x0040)  
	FAIDataProviderBoolValue                           UseCrouchHeight;                                            // 0x0300   (0x0040)  
	FAIDataProviderFloatValue                          SurvivorStandHeight;                                        // 0x0340   (0x0040)  
	FAIDataProviderFloatValue                          SurvivorCrouchHeight;                                       // 0x0380   (0x0040)  
	FAIDataProviderFloatValue                          SurvivorRadius;                                             // 0x03C0   (0x0040)  
};

/// Class /Script/DBDBots.EnvQueryTest_IsValidDestination
/// Size: 0x00F0 (0x000238 - 0x000328)
class UEnvQueryTest_IsValidDestination : public UEnvQueryTest
{ 
public:
	class UClass*                                      QuerierContext;                                             // 0x0238   (0x0008)  
	FAIDataProviderBoolValue                           Invert;                                                     // 0x0240   (0x0040)  
	FAIDataProviderBoolValue                           ExcludeEscapeZoneIfReverseBearTrapIsActivated;              // 0x0280   (0x0040)  
	FAIDataProviderBoolValue                           CheckDestinationOnDifferentNavMesh;                         // 0x02C0   (0x0040)  
	FName                                              NavDataAgentName;                                           // 0x0300   (0x000C)  
	FVector                                            NavMeshProjectionBoxExtent;                                 // 0x030C   (0x000C)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0318   (0x0010)  MISSED
};

/// Class /Script/DBDBots.EnvQueryTest_LineOfSight
/// Size: 0x00E8 (0x000238 - 0x000320)
class UEnvQueryTest_LineOfSight : public UEnvQueryTest
{ 
public:
	class UClass*                                      QuerierContext;                                             // 0x0238   (0x0008)  
	class UClass*                                      ToContext;                                                  // 0x0240   (0x0008)  
	FAIDataProviderFloatValue                          ItemHeightOffset;                                           // 0x0248   (0x0040)  
	FAIDataProviderBoolValue                           Invert;                                                     // 0x0288   (0x0040)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x02C8   (0x0058)  MISSED
};

/// Class /Script/DBDBots.EnvQueryTest_Loop
/// Size: 0x0078 (0x000238 - 0x0002B0)
class UEnvQueryTest_Loop : public UEnvQueryTest
{ 
public:
	class UClass*                                      QuerierContext;                                             // 0x0238   (0x0008)  
	FAIDataProviderFloatValue                          TowardLoopAngle;                                            // 0x0240   (0x0040)  
	FAITunableParameter                                MinSafetyRatingAgainstMeleeHostileStimulus;                 // 0x0280   (0x0010)  
	FAITunableParameter                                MinSafetyRatingAgainstRangedHostileStimulus;                // 0x0290   (0x0010)  
	FAITunableParameter                                ExtraMinSafetyRatingAgainstFastVaultHostileStimulus;        // 0x02A0   (0x0010)  
};

/// Class /Script/DBDBots.EnvQueryTest_LureToDangerObject
/// Size: 0x0010 (0x000238 - 0x000248)
class UEnvQueryTest_LureToDangerObject : public UEnvQueryTest
{ 
public:
	class UClass*                                      QuerierContext;                                             // 0x0238   (0x0008)  
	class UClass*                                      TargetContext;                                              // 0x0240   (0x0008)  
};

/// Class /Script/DBDBots.EnvQueryTest_PathfindingBatchExt
/// Size: 0x0188 (0x0002D0 - 0x000458)
class UEnvQueryTest_PathfindingBatchExt : public UEnvQueryTest_Pathfinding
{ 
public:
	FAIDataProviderFloatValue                          ScanRangeMultiplier;                                        // 0x02D0   (0x0040)  
	FAIDataProviderFloatValue                          BadPathingPenaltyMultiplier;                                // 0x0310   (0x0040)  
	FAIDataProviderFloatValue                          MaxPenaltyAngle;                                            // 0x0350   (0x0040)  
	FAIDataProviderFloatValue                          MinPenaltyAngle;                                            // 0x0390   (0x0040)  
	FAIDataProviderFloatValue                          HeightMultiplier;                                           // 0x03D0   (0x0040)  
	FAIDataProviderFloatValue                          PlayerLocationHeight;                                       // 0x0410   (0x0040)  
	class UClass*                                      TargetContext;                                              // 0x0450   (0x0008)  
};

/// Class /Script/DBDBots.NavArea_Blink
/// Size: 0x0000 (0x000050 - 0x000050)
class UNavArea_Blink : public UNavArea
{ 
public:
};

/// Class /Script/DBDBots.NavArea_Breakable
/// Size: 0x0000 (0x000050 - 0x000050)
class UNavArea_Breakable : public UNavArea
{ 
public:
};

/// Class /Script/DBDBots.NavArea_Vault
/// Size: 0x0000 (0x000050 - 0x000050)
class UNavArea_Vault : public UNavArea
{ 
public:
};

/// Class /Script/DBDBots.NavigationQueryFilter_Player
/// Size: 0x0020 (0x000050 - 0x000070)
class UNavigationQueryFilter_Player : public UNavigationQueryFilter
{ 
public:
	int32_t                                            MaxSearchNodes;                                             // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x1C];                                      // 0x0054   (0x001C)  MISSED
};

/// Class /Script/DBDBots.NavigationQueryFilter_Camper
/// Size: 0x0020 (0x000070 - 0x000090)
class UNavigationQueryFilter_Camper : public UNavigationQueryFilter_Player
{ 
public:
	float                                              SlasherAreaBoundsLimit;                                     // 0x0070   (0x0004)  
	float                                              SlasherAreaPenetrationCost;                                 // 0x0074   (0x0004)  
	float                                              SlasherInSightCost;                                         // 0x0078   (0x0004)  
	float                                              SlasherAreaExcludeUnderRange;                               // 0x007C   (0x0004)  
	float                                              SlasherAreaUnwalkableRange;                                 // 0x0080   (0x0004)  
	float                                              SlasherInExcludeAreaCost;                                   // 0x0084   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0088   (0x0008)  MISSED
};

/// Class /Script/DBDBots.NavigationQueryFilter_Camper_Cheap
/// Size: 0x0000 (0x000090 - 0x000090)
class UNavigationQueryFilter_Camper_Cheap : public UNavigationQueryFilter_Camper
{ 
public:
};

/// Class /Script/DBDBots.NavigationQueryFilter_Camper_NoCost
/// Size: 0x0000 (0x000070 - 0x000070)
class UNavigationQueryFilter_Camper_NoCost : public UNavigationQueryFilter_Player
{ 
public:
};

/// Class /Script/DBDBots.NavigationQueryFilter_CamperStealth
/// Size: 0x0000 (0x000090 - 0x000090)
class UNavigationQueryFilter_CamperStealth : public UNavigationQueryFilter_Camper
{ 
public:
};

/// Class /Script/DBDBots.NavigationQueryFilter_Slasher
/// Size: 0x00A0 (0x000070 - 0x000110)
class UNavigationQueryFilter_Slasher : public UNavigationQueryFilter_Player
{ 
public:
	SDK_UNDEFINED(80,3240) /* TMap<FString, float> */  __um(DefaultInteractionsTimeCost);                          // 0x0070   (0x0050)  
	SDK_UNDEFINED(80,3241) /* TMap<FString, float> */  __um(FrenzyInteractionsTimeCost);                           // 0x00C0   (0x0050)  
};

/// Class /Script/DBDBots.NavigationQueryFilter_Slasher_Limited
/// Size: 0x0000 (0x000070 - 0x000070)
class UNavigationQueryFilter_Slasher_Limited : public UNavigationQueryFilter_Player
{ 
public:
};

/// Class /Script/DBDBots.NavLinkProxy_Base
/// Size: 0x0078 (0x000280 - 0x0002F8)
class ANavLinkProxy_Base : public ANavLinkProxy
{ 
public:
	float                                              WaitLinkOffset;                                             // 0x0280   (0x0004)  
	float                                              MoveOnEndPointTimeLimit;                                    // 0x0284   (0x0004)  
	int32_t                                            NbMaxLinkUsers;                                             // 0x0288   (0x0004)  
	float                                              ReachedRadius;                                              // 0x028C   (0x0004)  
	float                                              ReachedHeight;                                              // 0x0290   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0294   (0x0004)  MISSED
	SDK_UNDEFINED(80,3242) /* TMap<ADBDPlayer*, FMoveLinkPlayerInfo> */ __um(_players);                            // 0x0298   (0x0050)  
	TArray<class ADBDPlayer*>                          _linkUsedByPlayers;                                         // 0x02E8   (0x0010)  


	/// Functions
	// Function /Script/DBDBots.NavLinkProxy_Base.OnSmartLinkReachedCallback
	// void OnSmartLinkReachedCallback(class AActor* MovingActor, FVector& DestinationPoint);                                // [0x4f90560] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/DBDBots.NavLinkProxy_Base.AutoAdjustSmartLinkPoints
	// void AutoAdjustSmartLinkPoints();                                                                                     // [0x4f90520] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DBDBots.NavLinkProxy_DirectMove
/// Size: 0x0068 (0x0002F8 - 0x000360)
class ANavLinkProxy_DirectMove : public ANavLinkProxy_Base
{ 
public:
	TArray<FVector>                                    CustomPathPoints;                                           // 0x02F8   (0x0010)  
	float                                              MoveToPathPointTimeLimit;                                   // 0x0308   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x030C   (0x0004)  MISSED
	SDK_UNDEFINED(80,3243) /* TMap<ADBDPlayer*, UNavMovePath*> */ __um(_playersOnPath);                            // 0x0310   (0x0050)  


	/// Functions
	// Function /Script/DBDBots.NavLinkProxy_DirectMove.OnDisplayDebugInfo
	// void OnDisplayDebugInfo();                                                                                            // [0x4f90540] Final|Native|Private 
};

/// Class /Script/DBDBots.NavLinkProxy_Interaction
/// Size: 0x00A8 (0x0002F8 - 0x0003A0)
class ANavLinkProxy_Interaction : public ANavLinkProxy_Base
{ 
public:
	SDK_UNDEFINED(80,3244) /* TMap<EPlayerRole, FNavLinkInteractPlayerSetup> */ __um(PlayerSetups);                // 0x02F8   (0x0050)  
	float                                              InteractionStartTimeLimit;                                  // 0x0348   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x034C   (0x0004)  MISSED
	SDK_UNDEFINED(80,3245) /* TMap<ADBDPlayer*, float> */ __um(_playersInteractionInputAtTime);                    // 0x0350   (0x0050)  
};

/// Class /Script/DBDBots.NavMovePath
/// Size: 0x0030 (0x000030 - 0x000060)
class UNavMovePath : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED
};

/// Class /Script/DBDBots.PathBuilder
/// Size: 0x0028 (0x000030 - 0x000058)
class UPathBuilder : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	float                                              PathReachedPointRadius;                                     // 0x0038   (0x0004)  
	EAITerrorLevel                                     ToleratedTerrorPressure;                                    // 0x003C   (0x0001)  
	bool                                               OverridePreviousPathStrategy;                               // 0x003D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x003E   (0x0002)  MISSED
	float                                              MinimumValidPathTimeWhenPathReached;                        // 0x0040   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	class UNavMovePath*                                _path;                                                      // 0x0048   (0x0008)  
	class ADBDAIBTController*                          _aiOwner;                                                   // 0x0050   (0x0008)  
};

/// Class /Script/DBDBots.PathBuilder_EQS
/// Size: 0x0080 (0x000058 - 0x0000D8)
class UPathBuilder_EQS : public UPathBuilder
{ 
public:
	FEQSParametrizedQueryExecutionRequest              EQSRequest;                                                 // 0x0058   (0x0050)  
	int32_t                                            NbMaxEQSRequests;                                           // 0x00A8   (0x0004)  
	bool                                               MergeToSinglePathPoint;                                     // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x23];                                      // 0x00AD   (0x0023)  MISSED
	class UPathBuilder_EQS*                            _pendingEQSRequestBuilder;                                  // 0x00D0   (0x0008)  
};

/// Class /Script/DBDBots.PathBuilder_EvadeLoop
/// Size: 0x00F8 (0x000058 - 0x000150)
class UPathBuilder_EvadeLoop : public UPathBuilder
{ 
public:
	float                                              ChaserMeleeAttackRange;                                     // 0x0058   (0x0004)  
	float                                              ForceEvadePointUnderDistance;                               // 0x005C   (0x0004)  
	float                                              ChaserCrossingVaultTimePenalty;                             // 0x0060   (0x0004)  
	float                                              ChaserCrossingPalletTimePenalty;                            // 0x0064   (0x0004)  
	float                                              ActivePathTimeBonus;                                        // 0x0068   (0x0004)  
	float                                              InactivePathTimePenalty;                                    // 0x006C   (0x0004)  
	float                                              SwapPathTimePenalty;                                        // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	SDK_UNDEFINED(16,3246) /* FString */               __um(BreakPalletInteractionId);                             // 0x0078   (0x0010)  
	float                                              OnPathRadius;                                               // 0x0088   (0x0004)  
	float                                              ClosePathPointRadius;                                       // 0x008C   (0x0004)  
	float                                              MaxEvadeInteractableWeightDistance;                         // 0x0090   (0x0004)  
	float                                              WeightAtMaxDistance;                                        // 0x0094   (0x0004)  
	bool                                               MaxWeightAtNearestDistanceIfHostileHasRangedAbility;        // 0x0098   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0099   (0x0003)  MISSED
	float                                              WeightAtMaxSafety;                                          // 0x009C   (0x0004)  
	float                                              MaxNearAllyPenaltyPathPointDistance;                        // 0x00A0   (0x0004)  
	float                                              WeightWhenNearAlly;                                         // 0x00A4   (0x0004)  
	float                                              WeightWhenNearLureableDangerObject;                         // 0x00A8   (0x0004)  
	float                                              LureableDangerObjectWeightDropoffPerDistance;               // 0x00AC   (0x0004)  
	FAITunableParameter                                MinSafetyRatingAgainstMeleeHostileStimulus;                 // 0x00B0   (0x0010)  
	FAITunableParameter                                MinSafetyRatingAgainstRangedHostileStimulus;                // 0x00C0   (0x0010)  
	FAITunableParameter                                ExtraMinSafetyRatingAgainstFastVaultHostileStimulus;        // 0x00D0   (0x0010)  
	float                                              SidekickToLoopInvalidateDistance;                           // 0x00E0   (0x0004)  
	float                                              TrapToLoopInvalidateDistance;                               // 0x00E4   (0x0004)  
	float                                              EvadeInteractableHeightAmplifierActivationHeight;           // 0x00E8   (0x0004)  
	float                                              EvadeInteractableHeightAmplifier;                           // 0x00EC   (0x0004)  
	float                                              QuerierReachFallEndBeforeChaserBufferTime;                  // 0x00F0   (0x0004)  
	float                                              ChaserReachFallStartTimeBeforeQuerierFall;                  // 0x00F4   (0x0004)  
	class UNavMovePath*                                _originalEvadeLoopWorkPath;                                 // 0x00F8   (0x0008)  
	class UNavMovePath*                                _querierWorkPathA;                                          // 0x0100   (0x0008)  
	class UNavMovePath*                                _querierWorkPathB;                                          // 0x0108   (0x0008)  
	class UNavMovePath*                                _chaserWorkPath;                                            // 0x0110   (0x0008)  
	class UDBDNavEvadeLoopComponent*                   _pickedEvadeLoopComponent;                                  // 0x0118   (0x0008)  
	unsigned char                                      UnknownData02_6[0x30];                                      // 0x0120   (0x0030)  MISSED
};

/// Class /Script/DBDBots.PathBuilder_LastGoal
/// Size: 0x0000 (0x000058 - 0x000058)
class UPathBuilder_LastGoal : public UPathBuilder
{ 
public:
};

/// Class /Script/DBDBots.PathStrategy
/// Size: 0x0098 (0x000030 - 0x0000C8)
class UPathStrategy : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0030   (0x0010)  MISSED
	TArray<class UPathBuilder*>                        DefaultPathBuilders;                                        // 0x0040   (0x0010)  
	float                                              RefreshPartialPathDelay;                                    // 0x0050   (0x0004)  
	float                                              StartNextBranchBuildDelay;                                  // 0x0054   (0x0004)  
	float                                              MaxActiveTimeSeconds;                                       // 0x0058   (0x0004)  
	float                                              StrategyEndCooldownSeconds;                                 // 0x005C   (0x0004)  
	class ADBDAIBTController*                          _aiOwner;                                                   // 0x0060   (0x0008)  
	TArray<class UPathBuilder*>                        _pathBuilders;                                              // 0x0068   (0x0010)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0078   (0x0050)  MISSED
};

/// Class /Script/DBDBots.PathStrategy_Flee
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UPathStrategy_Flee : public UPathStrategy
{ 
public:
};

/// Class /Script/DBDBots.PathStrategy_FleeLoop
/// Size: 0x0158 (0x0000C8 - 0x000220)
class UPathStrategy_FleeLoop : public UPathStrategy_Flee
{ 
public:
	SDK_UNDEFINED(80,3247) /* TMap<EAIDifficultyLevel, FGameStateEvadeLoopStrategyMapContainer> */ __um(GameStateFleeLoopStrategyTable); // 0x00C8   (0x0050)  
	SDK_UNDEFINED(80,3248) /* TMap<EAIFleeLoopStrategy, UPathBuilder_EvadeLoop*> */ __um(FleeLoopStrategyPathBuilders); // 0x0118   (0x0050)  
	float                                              CanBranchUnderEndPathDistance;                              // 0x0168   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x016C   (0x0004)  MISSED
	SDK_UNDEFINED(80,3249) /* TMap<EAIFleeLoopStrategy, FAIRoll> */ __um(BranchRolls);                             // 0x0170   (0x0050)  
	float                                              RejectLoopBranchUnderEndPointsDistance;                     // 0x01C0   (0x0004)  
	float                                              RejectBranchPointNearerHostileSourceDistance;               // 0x01C4   (0x0004)  
	float                                              RejectBranchUnderNavLinkDistance;                           // 0x01C8   (0x0004)  
	float                                              AddDistanceToRequiredBranchEvadeGap;                        // 0x01CC   (0x0004)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x01D0   (0x0050)  MISSED
};

/// Class /Script/DBDBots.PathStrategy_FleeLOS
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UPathStrategy_FleeLOS : public UPathStrategy_Flee
{ 
public:
};

/// Class /Script/DBDBots.PathStrategy_FleeLure
/// Size: 0x0018 (0x0000C8 - 0x0000E0)
class UPathStrategy_FleeLure : public UPathStrategy_Flee
{ 
public:
	float                                              MaximumRangeToLureableDangerObject;                         // 0x00C8   (0x0004)  
	float                                              MaxActiveTimeSecondsEndgame;                                // 0x00CC   (0x0004)  
	SDK_UNDEFINED(16,3250) /* TArray<FString> */       __um(LostFocusInteractionIds);                              // 0x00D0   (0x0010)  
};

/// Class /Script/DBDBots.PathStrategySelector
/// Size: 0x0040 (0x000030 - 0x000070)
class UPathStrategySelector : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	class ADBDAIBTController*                          _aiOwner;                                                   // 0x0038   (0x0008)  
	TArray<class UPathStrategy*>                       _activePathStrategies;                                      // 0x0040   (0x0010)  
	TArray<class UPathStrategy*>                       _nextPathStrategies;                                        // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0060   (0x0010)  MISSED
};

/// Class /Script/DBDBots.PathStrategySelector_Flee
/// Size: 0x00A8 (0x000070 - 0x000118)
class UPathStrategySelector_Flee : public UPathStrategySelector
{ 
public:
	SDK_UNDEFINED(80,3251) /* TMap<EAIFleePathStrategy, UPathStrategy*> */ __um(FleePathStrategies);               // 0x0070   (0x0050)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x00C0   (0x0008)  MISSED
	SDK_UNDEFINED(80,3252) /* TMap<EAIFleePathStrategy, UPathStrategy*> */ __um(_activeFleePathStrategiesMap);     // 0x00C8   (0x0050)  
};

/// Struct /Script/DBDBots.DistanceToTargetData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FDistanceToTargetData
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
	FDateTime                                          _lastUpdateTime;                                            // 0x0020   (0x0008)  
	FDateTime                                          _lastTargetTime;                                            // 0x0028   (0x0008)  
};

/// Struct /Script/DBDBots.TargetMoveAwayToFastInfo
/// Size: 0x0090 (0x000000 - 0x000090)
struct FTargetMoveAwayToFastInfo
{ 
	float                                              AccumulatedTime;                                            // 0x0000   (0x0004)  
	float                                              CooldownUntilTime;                                          // 0x0004   (0x0004)  
	FAIDetectedStimulus                                Stimulus;                                                   // 0x0008   (0x0088)  
};

/// Struct /Script/DBDBots.AIGetAttentionMovement
/// Size: 0x000C (0x000000 - 0x00000C)
struct FAIGetAttentionMovement
{ 
	unsigned char                                      UnknownData00_1[0xC];                                       // 0x0000   (0x000C)  MISSED
};

/// Struct /Script/DBDBots.DreamPalletSpawnState
/// Size: 0x0024 (0x000000 - 0x000024)
struct FDreamPalletSpawnState
{ 
	unsigned char                                      UnknownData00_1[0x24];                                      // 0x0000   (0x0024)  MISSED
};

/// Struct /Script/DBDBots.CachedEQSResultData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FCachedEQSResultData
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/DBDBots.DangerObjectData
/// Size: 0x0008 (0x000000 - 0x000008)
struct FDangerObjectData
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/DBDBots.AISkillDynamicSubtreeStruct
/// Size: 0x0058 (0x000000 - 0x000058)
struct FAISkillDynamicSubtreeStruct
{ 
	SDK_UNDEFINED(80,3253) /* TMap<UAISkill*, UBehaviorTree*> */ __um(AISkillDynamicSubtreeMap);                   // 0x0000   (0x0050)  
	class UBehaviorTree*                               ConnectingSubtree;                                          // 0x0050   (0x0008)  
};

/// Struct /Script/DBDBots.AIEstimatedLocation
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAIEstimatedLocation
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/DBDBots.AITrackedEnemyData
/// Size: 0x00A8 (0x000000 - 0x0000A8)
struct FAITrackedEnemyData
{ 
	unsigned char                                      UnknownData00_2[0x90];                                      // 0x0000   (0x0090)  MISSED
	class UAIEnemyTargetPrediction*                    EnemyTargetPrediction;                                      // 0x0090   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0098   (0x0010)  MISSED
};

/// Struct /Script/DBDBots.AIGoal
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAIGoal
{ 
	class UObject*                                     Source;                                                     // 0x0000   (0x0008)  
	class UObject*                                     MetaGoal;                                                   // 0x0008   (0x0008)  
	class UObject*                                     Goal;                                                       // 0x0010   (0x0008)  
};

/// Struct /Script/DBDBots.AIGoalWeight
/// Size: 0x0030 (0x000000 - 0x000030)
struct FAIGoalWeight
{ 
	FAIGoal                                            GoalInfo;                                                   // 0x0000   (0x0018)  
	float                                              Weight;                                                     // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	SDK_UNDEFINED(16,3254) /* FString */               __um(WeightDebug);                                          // 0x0020   (0x0010)  
};

/// Struct /Script/DBDBots.AIGoalWeightContainer
/// Size: 0x0010 (0x000000 - 0x000010)
struct FAIGoalWeightContainer
{ 
	TArray<FAIGoalWeight>                              WeightedGoals;                                              // 0x0000   (0x0010)  
};

/// Struct /Script/DBDBots.FocusPointData
/// Size: 0x002C (0x000000 - 0x00002C)
struct FFocusPointData
{ 
	unsigned char                                      UnknownData00_1[0x2C];                                      // 0x0000   (0x002C)  MISSED
};

/// Struct /Script/DBDBots.GameStatePressureZoneLevelMapContainer
/// Size: 0x0050 (0x000000 - 0x000050)
struct FGameStatePressureZoneLevelMapContainer
{ 
	SDK_UNDEFINED(80,3255) /* TMap<EAIGameState, EAIPressureZoneLevel> */ __um(Map);                               // 0x0000   (0x0050)  
};

/// Struct /Script/DBDBots.DangerStateGameStateMapContainer
/// Size: 0x0050 (0x000000 - 0x000050)
struct FDangerStateGameStateMapContainer
{ 
	SDK_UNDEFINED(80,3256) /* TMap<EAIDangerState, EAIGameState> */ __um(Map);                                     // 0x0000   (0x0050)  
};

/// Struct /Script/DBDBots.RelevantNodeMemory
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRelevantNodeMemory
{ 
	class UBTNode*                                     Node;                                                       // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Struct /Script/DBDBots.MindFocusObjectEntry
/// Size: 0x0078 (0x000000 - 0x000078)
struct FMindFocusObjectEntry
{ 
	TArray<class UObject*>                             FocusedBy;                                                  // 0x0000   (0x0010)  
	float                                              FocusedStartTime;                                           // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	SDK_UNDEFINED(80,3257) /* TMap<FName, float> */    __um(CooldownMap);                                          // 0x0018   (0x0050)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0068   (0x0010)  MISSED
};

/// Struct /Script/DBDBots.WeightedWishedObjectMapContainer
/// Size: 0x0050 (0x000000 - 0x000050)
struct FWeightedWishedObjectMapContainer
{ 
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/DBDBots.WeightedWishedObjectData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FWeightedWishedObjectData
{ 
	float                                              Weight;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UAISkill_Find*                               SkillSource;                                                // 0x0008   (0x0008)  
};

/// Struct /Script/DBDBots.ExplorableTileInfo
/// Size: 0x002C (0x000000 - 0x00002C)
struct FExplorableTileInfo
{ 
	FGuid                                              ID;                                                         // 0x0000   (0x0010)  
	FBox                                               Bounds;                                                     // 0x0010   (0x001C)  
};

/// Struct /Script/DBDBots.EnvQueryTestLoopData
/// Size: 0x0014 (0x000000 - 0x000014)
struct FEnvQueryTestLoopData
{ 
	unsigned char                                      UnknownData00_1[0x14];                                      // 0x0000   (0x0014)  MISSED
};

/// Struct /Script/DBDBots.MoveLinkPlayerInfo
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMoveLinkPlayerInfo
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/DBDBots.NavLinkInteractPlayerSetup
/// Size: 0x0028 (0x000000 - 0x000028)
struct FNavLinkInteractPlayerSetup
{ 
	EPawnInputPressTypes                               Input;                                                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,3258) /* TArray<FString> */       __um(InteractionIds);                                       // 0x0008   (0x0010)  
	FAITunableParameter                                InputTimeDeviationInChase;                                  // 0x0018   (0x0010)  
};

/// Struct /Script/DBDBots.NavMovePathReshapeData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FNavMovePathReshapeData
{ 
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Struct /Script/DBDBots.NavMovePathPoint
/// Size: 0x0014 (0x000000 - 0x000014)
struct FNavMovePathPoint
{ 
	unsigned char                                      UnknownData00_1[0x14];                                      // 0x0000   (0x0014)  MISSED
};

/// Struct /Script/DBDBots.PathToLoopInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPathToLoopInfo
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/DBDBots.GameStateEvadeLoopStrategyMapContainer
/// Size: 0x0050 (0x000000 - 0x000050)
struct FGameStateEvadeLoopStrategyMapContainer
{ 
	SDK_UNDEFINED(80,3259) /* TMap<EAIGameState, EAIFleeLoopStrategy> */ __um(Map);                                // 0x0000   (0x0050)  
};

