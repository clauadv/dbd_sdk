
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
/// dependency: GameplayTasks
/// dependency: NavigationSystem

/// Enum /Script/AIModule.EPathFollowingResult
/// Size: 0x07
enum class EPathFollowingResult : uint8_t
{
	EPathFollowingResult__Success                                                    = 0,
	EPathFollowingResult__Blocked                                                    = 1,
	EPathFollowingResult__OffPath                                                    = 2,
	EPathFollowingResult__Aborted                                                    = 3,
	EPathFollowingResult__Skipped_DEPRECATED                                         = 4,
	EPathFollowingResult__Invalid                                                    = 5,
	EPathFollowingResult__EPathFollowingResult_MAX                                   = 6
};

/// Enum /Script/AIModule.EEnvQueryStatus
/// Size: 0x07
enum class EEnvQueryStatus : uint8_t
{
	EEnvQueryStatus__Processing                                                      = 0,
	EEnvQueryStatus__Success                                                         = 1,
	EEnvQueryStatus__Failed                                                          = 2,
	EEnvQueryStatus__Aborted                                                         = 3,
	EEnvQueryStatus__OwnerLost                                                       = 4,
	EEnvQueryStatus__MissingParam                                                    = 5,
	EEnvQueryStatus__EEnvQueryStatus_MAX                                             = 6
};

/// Enum /Script/AIModule.EAISenseNotifyType
/// Size: 0x03
enum class EAISenseNotifyType : uint8_t
{
	EAISenseNotifyType__OnEveryPerception                                            = 0,
	EAISenseNotifyType__OnPerceptionChange                                           = 1,
	EAISenseNotifyType__EAISenseNotifyType_MAX                                       = 2
};

/// Enum /Script/AIModule.EAITaskPriority
/// Size: 0x06
enum class EAITaskPriority : uint8_t
{
	EAITaskPriority__Lowest                                                          = 0,
	EAITaskPriority__Low                                                             = 64,
	EAITaskPriority__AutonomousAI                                                    = 127,
	EAITaskPriority__High                                                            = 192,
	EAITaskPriority__Ultimate                                                        = 254,
	EAITaskPriority__EAITaskPriority_MAX                                             = 255
};

/// Enum /Script/AIModule.EGenericAICheck
/// Size: 0x08
enum class EGenericAICheck : uint8_t
{
	EGenericAICheck__Less                                                            = 0,
	EGenericAICheck__LessOrEqual                                                     = 1,
	EGenericAICheck__Equal                                                           = 2,
	EGenericAICheck__NotEqual                                                        = 3,
	EGenericAICheck__GreaterOrEqual                                                  = 4,
	EGenericAICheck__Greater                                                         = 5,
	EGenericAICheck__IsTrue                                                          = 6,
	EGenericAICheck__MAX                                                             = 7
};

/// Enum /Script/AIModule.EAILockSource
/// Size: 0x05
enum class EAILockSource : uint8_t
{
	EAILockSource__Animation                                                         = 0,
	EAILockSource__Logic                                                             = 1,
	EAILockSource__Script                                                            = 2,
	EAILockSource__Gameplay                                                          = 3,
	EAILockSource__MAX                                                               = 4
};

/// Enum /Script/AIModule.EAIRequestPriority
/// Size: 0x06
enum class EAIRequestPriority : uint8_t
{
	EAIRequestPriority__SoftScript                                                   = 0,
	EAIRequestPriority__Logic                                                        = 1,
	EAIRequestPriority__HardScript                                                   = 2,
	EAIRequestPriority__Reaction                                                     = 3,
	EAIRequestPriority__Ultimate                                                     = 4,
	EAIRequestPriority__MAX                                                          = 5
};

/// Enum /Script/AIModule.EPawnActionEventType
/// Size: 0x07
enum class EPawnActionEventType : uint8_t
{
	EPawnActionEventType__Invalid                                                    = 0,
	EPawnActionEventType__FailedToStart                                              = 1,
	EPawnActionEventType__InstantAbort                                               = 2,
	EPawnActionEventType__FinishedAborting                                           = 3,
	EPawnActionEventType__FinishedExecution                                          = 4,
	EPawnActionEventType__Push                                                       = 5,
	EPawnActionEventType__EPawnActionEventType_MAX                                   = 6
};

/// Enum /Script/AIModule.EPawnActionResult
/// Size: 0x06
enum class EPawnActionResult : uint8_t
{
	EPawnActionResult__NotStarted                                                    = 0,
	EPawnActionResult__InProgress                                                    = 1,
	EPawnActionResult__Success                                                       = 2,
	EPawnActionResult__Failed                                                        = 3,
	EPawnActionResult__Aborted                                                       = 4,
	EPawnActionResult__EPawnActionResult_MAX                                         = 5
};

/// Enum /Script/AIModule.EPawnActionAbortState
/// Size: 0x06
enum class EPawnActionAbortState : uint8_t
{
	EPawnActionAbortState__NeverStarted                                              = 0,
	EPawnActionAbortState__NotBeingAborted                                           = 1,
	EPawnActionAbortState__MarkPendingAbort                                          = 2,
	EPawnActionAbortState__LatentAbortInProgress                                     = 3,
	EPawnActionAbortState__AbortDone                                                 = 4,
	EPawnActionAbortState__MAX                                                       = 5
};

/// Enum /Script/AIModule.FAIDistanceType
/// Size: 0x04
enum class FAIDistanceType : uint8_t
{
	FAIDistanceType__Distance3D                                                      = 0,
	FAIDistanceType__Distance2D                                                      = 1,
	FAIDistanceType__DistanceZ                                                       = 2,
	FAIDistanceType__MAX                                                             = 3
};

/// Enum /Script/AIModule.EAIOptionFlag
/// Size: 0x04
enum class EAIOptionFlag : uint8_t
{
	EAIOptionFlag__Default                                                           = 0,
	EAIOptionFlag__Enable                                                            = 1,
	EAIOptionFlag__Disable                                                           = 2,
	EAIOptionFlag__MAX                                                               = 3
};

/// Enum /Script/AIModule.EBTFlowAbortMode
/// Size: 0x05
enum class EBTFlowAbortMode : uint8_t
{
	EBTFlowAbortMode__None                                                           = 0,
	EBTFlowAbortMode__LowerPriority                                                  = 1,
	EBTFlowAbortMode__Self                                                           = 2,
	EBTFlowAbortMode__Both                                                           = 3,
	EBTFlowAbortMode__EBTFlowAbortMode_MAX                                           = 4
};

/// Enum /Script/AIModule.EBTNodeResult
/// Size: 0x05
enum class EBTNodeResult : uint8_t
{
	EBTNodeResult__Succeeded                                                         = 0,
	EBTNodeResult__Failed                                                            = 1,
	EBTNodeResult__Aborted                                                           = 2,
	EBTNodeResult__InProgress                                                        = 3,
	EBTNodeResult__EBTNodeResult_MAX                                                 = 4
};

/// Enum /Script/AIModule.ETextKeyOperation
/// Size: 0x05
enum class ETextKeyOperation : uint8_t
{
	ETextKeyOperation__Equal                                                         = 0,
	ETextKeyOperation__NotEqual                                                      = 1,
	ETextKeyOperation__Contain                                                       = 2,
	ETextKeyOperation__NotContain                                                    = 3,
	ETextKeyOperation__ETextKeyOperation_MAX                                         = 4
};

/// Enum /Script/AIModule.EArithmeticKeyOperation
/// Size: 0x07
enum class EArithmeticKeyOperation : uint8_t
{
	EArithmeticKeyOperation__Equal                                                   = 0,
	EArithmeticKeyOperation__NotEqual                                                = 1,
	EArithmeticKeyOperation__Less                                                    = 2,
	EArithmeticKeyOperation__LessOrEqual                                             = 3,
	EArithmeticKeyOperation__Greater                                                 = 4,
	EArithmeticKeyOperation__GreaterOrEqual                                          = 5,
	EArithmeticKeyOperation__EArithmeticKeyOperation_MAX                             = 6
};

/// Enum /Script/AIModule.EBasicKeyOperation
/// Size: 0x03
enum class EBasicKeyOperation : uint8_t
{
	EBasicKeyOperation__Set                                                          = 0,
	EBasicKeyOperation__NotSet                                                       = 1,
	EBasicKeyOperation__EBasicKeyOperation_MAX                                       = 2
};

/// Enum /Script/AIModule.EBTParallelMode
/// Size: 0x03
enum class EBTParallelMode : uint8_t
{
	EBTParallelMode__AbortBackground                                                 = 0,
	EBTParallelMode__WaitForBackground                                               = 1,
	EBTParallelMode__EBTParallelMode_MAX                                             = 2
};

/// Enum /Script/AIModule.EBTDecoratorLogic
/// Size: 0x06
enum class EBTDecoratorLogic : uint8_t
{
	EBTDecoratorLogic__Invalid                                                       = 0,
	EBTDecoratorLogic__Test                                                          = 1,
	EBTDecoratorLogic__And                                                           = 2,
	EBTDecoratorLogic__Or                                                            = 3,
	EBTDecoratorLogic__Not                                                           = 4,
	EBTDecoratorLogic__EBTDecoratorLogic_MAX                                         = 5
};

/// Enum /Script/AIModule.EBTChildIndex
/// Size: 0x03
enum class EBTChildIndex : uint8_t
{
	EBTChildIndex__FirstNode                                                         = 0,
	EBTChildIndex__TaskNode                                                          = 1,
	EBTChildIndex__EBTChildIndex_MAX                                                 = 2
};

/// Enum /Script/AIModule.EBTBlackboardRestart
/// Size: 0x03
enum class EBTBlackboardRestart : uint8_t
{
	EBTBlackboardRestart__ValueChange                                                = 0,
	EBTBlackboardRestart__ResultChange                                               = 1,
	EBTBlackboardRestart__EBTBlackboardRestart_MAX                                   = 2
};

/// Enum /Script/AIModule.EBlackBoardEntryComparison
/// Size: 0x03
enum class EBlackBoardEntryComparison : uint8_t
{
	EBlackBoardEntryComparison__Equal                                                = 0,
	EBlackBoardEntryComparison__NotEqual                                             = 1,
	EBlackBoardEntryComparison__EBlackBoardEntryComparison_MAX                       = 2
};

/// Enum /Script/AIModule.EPathExistanceQueryType
/// Size: 0x04
enum class EPathExistanceQueryType : uint8_t
{
	EPathExistanceQueryType__NavmeshRaycast2D                                        = 0,
	EPathExistanceQueryType__HierarchicalQuery                                       = 1,
	EPathExistanceQueryType__RegularPathFinding                                      = 2,
	EPathExistanceQueryType__EPathExistanceQueryType_MAX                             = 3
};

/// Enum /Script/AIModule.EPointOnCircleSpacingMethod
/// Size: 0x03
enum class EPointOnCircleSpacingMethod : uint8_t
{
	EPointOnCircleSpacingMethod__BySpaceBetween                                      = 0,
	EPointOnCircleSpacingMethod__ByNumberOfPoints                                    = 1,
	EPointOnCircleSpacingMethod__EPointOnCircleSpacingMethod_MAX                     = 2
};

/// Enum /Script/AIModule.EEQSNormalizationType
/// Size: 0x03
enum class EEQSNormalizationType : uint8_t
{
	EEQSNormalizationType__Absolute                                                  = 0,
	EEQSNormalizationType__RelativeToScores                                          = 1,
	EEQSNormalizationType__EEQSNormalizationType_MAX                                 = 2
};

/// Enum /Script/AIModule.EEnvTestDistance
/// Size: 0x05
enum class EEnvTestDistance : uint8_t
{
	EEnvTestDistance__Distance3D                                                     = 0,
	EEnvTestDistance__Distance2D                                                     = 1,
	EEnvTestDistance__DistanceZ                                                      = 2,
	EEnvTestDistance__DistanceAbsoluteZ                                              = 3,
	EEnvTestDistance__EEnvTestDistance_MAX                                           = 4
};

/// Enum /Script/AIModule.EEnvTestDot
/// Size: 0x03
enum class EEnvTestDot : uint8_t
{
	EEnvTestDot__Dot3D                                                               = 0,
	EEnvTestDot__Dot2D                                                               = 1,
	EEnvTestDot__EEnvTestDot_MAX                                                     = 2
};

/// Enum /Script/AIModule.EEnvTestPathfinding
/// Size: 0x04
enum class EEnvTestPathfinding : uint8_t
{
	EEnvTestPathfinding__PathExist                                                   = 0,
	EEnvTestPathfinding__PathCost                                                    = 1,
	EEnvTestPathfinding__PathLength                                                  = 2,
	EEnvTestPathfinding__EEnvTestPathfinding_MAX                                     = 3
};

/// Enum /Script/AIModule.EEnvQueryTestClamping
/// Size: 0x04
enum class EEnvQueryTestClamping : uint8_t
{
	EEnvQueryTestClamping__None                                                      = 0,
	EEnvQueryTestClamping__SpecifiedValue                                            = 1,
	EEnvQueryTestClamping__FilterThreshold                                           = 2,
	EEnvQueryTestClamping__EEnvQueryTestClamping_MAX                                 = 3
};

/// Enum /Script/AIModule.EEnvDirection
/// Size: 0x03
enum class EEnvDirection : uint8_t
{
	EEnvDirection__TwoPoints                                                         = 0,
	EEnvDirection__Rotation                                                          = 1,
	EEnvDirection__EEnvDirection_MAX                                                 = 2
};

/// Enum /Script/AIModule.EEnvOverlapShape
/// Size: 0x04
enum class EEnvOverlapShape : uint8_t
{
	EEnvOverlapShape__Box                                                            = 0,
	EEnvOverlapShape__Sphere                                                         = 1,
	EEnvOverlapShape__Capsule                                                        = 2,
	EEnvOverlapShape__EEnvOverlapShape_MAX                                           = 3
};

/// Enum /Script/AIModule.EEnvTraceShape
/// Size: 0x05
enum class EEnvTraceShape : uint8_t
{
	EEnvTraceShape__Line                                                             = 0,
	EEnvTraceShape__Box                                                              = 1,
	EEnvTraceShape__Sphere                                                           = 2,
	EEnvTraceShape__Capsule                                                          = 3,
	EEnvTraceShape__EEnvTraceShape_MAX                                               = 4
};

/// Enum /Script/AIModule.EEnvQueryTrace
/// Size: 0x05
enum class EEnvQueryTrace : uint8_t
{
	EEnvQueryTrace__None                                                             = 0,
	EEnvQueryTrace__Navigation                                                       = 1,
	EEnvQueryTrace__Geometry                                                         = 2,
	EEnvQueryTrace__NavigationOverLedges                                             = 3,
	EEnvQueryTrace__EEnvQueryTrace_MAX                                               = 4
};

/// Enum /Script/AIModule.EAIParamType
/// Size: 0x04
enum class EAIParamType : uint8_t
{
	EAIParamType__Float                                                              = 0,
	EAIParamType__Int                                                                = 1,
	EAIParamType__Bool                                                               = 2,
	EAIParamType__MAX                                                                = 3
};

/// Enum /Script/AIModule.EEnvQueryParam
/// Size: 0x04
enum class EEnvQueryParam : uint8_t
{
	EEnvQueryParam__Float                                                            = 0,
	EEnvQueryParam__Int                                                              = 1,
	EEnvQueryParam__Bool                                                             = 2,
	EEnvQueryParam__EEnvQueryParam_MAX                                               = 3
};

/// Enum /Script/AIModule.EEnvQueryRunMode
/// Size: 0x05
enum class EEnvQueryRunMode : uint8_t
{
	EEnvQueryRunMode__SingleResult                                                   = 0,
	EEnvQueryRunMode__RandomBest5Pct                                                 = 1,
	EEnvQueryRunMode__RandomBest25Pct                                                = 2,
	EEnvQueryRunMode__AllMatching                                                    = 3,
	EEnvQueryRunMode__EEnvQueryRunMode_MAX                                           = 4
};

/// Enum /Script/AIModule.EEnvTestScoreOperator
/// Size: 0x05
enum class EEnvTestScoreOperator : uint8_t
{
	EEnvTestScoreOperator__AverageScore                                              = 0,
	EEnvTestScoreOperator__MinScore                                                  = 1,
	EEnvTestScoreOperator__MaxScore                                                  = 2,
	EEnvTestScoreOperator__Multiply                                                  = 3,
	EEnvTestScoreOperator__EEnvTestScoreOperator_MAX                                 = 4
};

/// Enum /Script/AIModule.EEnvTestFilterOperator
/// Size: 0x03
enum class EEnvTestFilterOperator : uint8_t
{
	EEnvTestFilterOperator__AllPass                                                  = 0,
	EEnvTestFilterOperator__AnyPass                                                  = 1,
	EEnvTestFilterOperator__EEnvTestFilterOperator_MAX                               = 2
};

/// Enum /Script/AIModule.EEnvTestCost
/// Size: 0x04
enum class EEnvTestCost : uint8_t
{
	EEnvTestCost__Low                                                                = 0,
	EEnvTestCost__Medium                                                             = 1,
	EEnvTestCost__High                                                               = 2,
	EEnvTestCost__EEnvTestCost_MAX                                                   = 3
};

/// Enum /Script/AIModule.EEnvTestWeight
/// Size: 0x07
enum class EEnvTestWeight : uint8_t
{
	EEnvTestWeight__None                                                             = 0,
	EEnvTestWeight__Square                                                           = 1,
	EEnvTestWeight__Inverse                                                          = 2,
	EEnvTestWeight__Unused                                                           = 3,
	EEnvTestWeight__Constant                                                         = 4,
	EEnvTestWeight__Skip                                                             = 5,
	EEnvTestWeight__EEnvTestWeight_MAX                                               = 6
};

/// Enum /Script/AIModule.EEnvTestScoreEquation
/// Size: 0x06
enum class EEnvTestScoreEquation : uint8_t
{
	EEnvTestScoreEquation__Linear                                                    = 0,
	EEnvTestScoreEquation__Square                                                    = 1,
	EEnvTestScoreEquation__InverseLinear                                             = 2,
	EEnvTestScoreEquation__SquareRoot                                                = 3,
	EEnvTestScoreEquation__Constant                                                  = 4,
	EEnvTestScoreEquation__EEnvTestScoreEquation_MAX                                 = 5
};

/// Enum /Script/AIModule.EEnvTestFilterType
/// Size: 0x05
enum class EEnvTestFilterType : uint8_t
{
	EEnvTestFilterType__Minimum                                                      = 0,
	EEnvTestFilterType__Maximum                                                      = 1,
	EEnvTestFilterType__Range                                                        = 2,
	EEnvTestFilterType__Match                                                        = 3,
	EEnvTestFilterType__EEnvTestFilterType_MAX                                       = 4
};

/// Enum /Script/AIModule.EEnvTestPurpose
/// Size: 0x04
enum class EEnvTestPurpose : uint8_t
{
	EEnvTestPurpose__Filter                                                          = 0,
	EEnvTestPurpose__Score                                                           = 1,
	EEnvTestPurpose__FilterAndScore                                                  = 2,
	EEnvTestPurpose__EEnvTestPurpose_MAX                                             = 3
};

/// Enum /Script/AIModule.EEnvQueryHightlightMode
/// Size: 0x04
enum class EEnvQueryHightlightMode : uint8_t
{
	EEnvQueryHightlightMode__All                                                     = 0,
	EEnvQueryHightlightMode__Best5Pct                                                = 1,
	EEnvQueryHightlightMode__Best25Pct                                               = 2,
	EEnvQueryHightlightMode__EEnvQueryHightlightMode_MAX                             = 3
};

/// Enum /Script/AIModule.ETeamAttitude
/// Size: 0x04
enum class ETeamAttitude : uint8_t
{
	ETeamAttitude__Friendly                                                          = 0,
	ETeamAttitude__Neutral                                                           = 1,
	ETeamAttitude__Hostile                                                           = 2,
	ETeamAttitude__ETeamAttitude_MAX                                                 = 3
};

/// Enum /Script/AIModule.EPathFollowingRequestResult
/// Size: 0x04
enum class EPathFollowingRequestResult : uint8_t
{
	EPathFollowingRequestResult__Failed                                              = 0,
	EPathFollowingRequestResult__AlreadyAtGoal                                       = 1,
	EPathFollowingRequestResult__RequestSuccessful                                   = 2,
	EPathFollowingRequestResult__EPathFollowingRequestResult_MAX                     = 3
};

/// Enum /Script/AIModule.EPathFollowingAction
/// Size: 0x06
enum class EPathFollowingAction : uint8_t
{
	EPathFollowingAction__Error                                                      = 0,
	EPathFollowingAction__NoMove                                                     = 1,
	EPathFollowingAction__DirectMove                                                 = 2,
	EPathFollowingAction__PartialPath                                                = 3,
	EPathFollowingAction__PathToGoal                                                 = 4,
	EPathFollowingAction__EPathFollowingAction_MAX                                   = 5
};

/// Enum /Script/AIModule.EPathFollowingStatus
/// Size: 0x05
enum class EPathFollowingStatus : uint8_t
{
	EPathFollowingStatus__Idle                                                       = 0,
	EPathFollowingStatus__Waiting                                                    = 1,
	EPathFollowingStatus__Paused                                                     = 2,
	EPathFollowingStatus__Moving                                                     = 3,
	EPathFollowingStatus__EPathFollowingStatus_MAX                                   = 4
};

/// Enum /Script/AIModule.EPawnActionFailHandling
/// Size: 0x03
enum class EPawnActionFailHandling : uint8_t
{
	EPawnActionFailHandling__RequireSuccess                                          = 0,
	EPawnActionFailHandling__IgnoreFailure                                           = 1,
	EPawnActionFailHandling__EPawnActionFailHandling_MAX                             = 2
};

/// Enum /Script/AIModule.EPawnSubActionTriggeringPolicy
/// Size: 0x03
enum class EPawnSubActionTriggeringPolicy : uint8_t
{
	EPawnSubActionTriggeringPolicy__CopyBeforeTriggering                             = 0,
	EPawnSubActionTriggeringPolicy__ReuseInstances                                   = 1,
	EPawnSubActionTriggeringPolicy__EPawnSubActionTriggeringPolicy_MAX               = 2
};

/// Enum /Script/AIModule.EPawnActionMoveMode
/// Size: 0x03
enum class EPawnActionMoveMode : uint8_t
{
	EPawnActionMoveMode__UsePathfinding                                              = 0,
	EPawnActionMoveMode__StraightLine                                                = 1,
	EPawnActionMoveMode__EPawnActionMoveMode_MAX                                     = 2
};

/// Class /Script/AIModule.PathFollowingComponent
/// Size: 0x01A0 (0x0000B8 - 0x000258)
class UPathFollowingComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x00B8   (0x0038)  MISSED
	class UNavMovementComponent*                       MovementComp;                                               // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00F8   (0x0008)  MISSED
	class ANavigationData*                             MyNavData;                                                  // 0x0100   (0x0008)  
	unsigned char                                      UnknownData02_6[0x150];                                     // 0x0108   (0x0150)  MISSED


	/// Functions
	// Function /Script/AIModule.PathFollowingComponent.OnNavDataRegistered
	// void OnNavDataRegistered(class ANavigationData* NavData);                                                             // [0x854abb0] Final|Native|Protected 
	// Function /Script/AIModule.PathFollowingComponent.OnActorBump
	// void OnActorBump(class AActor* SelfActor, class AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit);          // [0x854aa10] Native|Public|HasOutParms|HasDefaults 
	// Function /Script/AIModule.PathFollowingComponent.GetPathDestination
	// FVector GetPathDestination();                                                                                         // [0x854a600] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.PathFollowingComponent.GetPathActionType
	// TEnumAsByte<EPathFollowingAction> GetPathActionType();                                                                // [0x854a5d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.BTNode
/// Size: 0x0030 (0x000030 - 0x000060)
class UBTNode : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	SDK_UNDEFINED(16,871) /* FString */                __um(NodeName);                                             // 0x0038   (0x0010)  
	class UBehaviorTree*                               TreeAsset;                                                  // 0x0048   (0x0008)  
	class UBTCompositeNode*                            ParentNode;                                                 // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Class /Script/AIModule.BTAuxiliaryNode
/// Size: 0x0008 (0x000060 - 0x000068)
class UBTAuxiliaryNode : public UBTNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0060   (0x0008)  MISSED
};

/// Class /Script/AIModule.BTDecorator
/// Size: 0x0008 (0x000068 - 0x000070)
class UBTDecorator : public UBTAuxiliaryNode
{ 
public:
	bool                                               bInverseCondition : 1;                                      // 0x0068:7 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0069   (0x0003)  MISSED
	SDK_UNDEFINED(1,872) /* TEnumAsByte<EBTFlowAbortMode> */ __um(FlowAbortMode);                                  // 0x006C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x006D   (0x0003)  MISSED
};

/// Struct /Script/AIModule.BlackboardKeySelector
/// Size: 0x0030 (0x000000 - 0x000030)
struct FBlackboardKeySelector
{ 
	TArray<class UBlackboardKeyType*>                  AllowedTypes;                                               // 0x0000   (0x0010)  
	FName                                              SelectedKeyName;                                            // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	class UClass*                                      SelectedKeyType;                                            // 0x0020   (0x0008)  
	char                                               SelectedKeyID;                                              // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	bool                                               bNoneIsAllowedValue : 1;                                    // 0x002C:0 (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Class /Script/AIModule.BTDecorator_CompareBBEntries
/// Size: 0x0068 (0x000070 - 0x0000D8)
class UBTDecorator_CompareBBEntries : public UBTDecorator
{ 
public:
	SDK_UNDEFINED(1,873) /* TEnumAsByte<EBlackBoardEntryComparison> */ __um(Operator);                             // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0071   (0x0007)  MISSED
	FBlackboardKeySelector                             BlackboardKeyA;                                             // 0x0078   (0x0030)  
	FBlackboardKeySelector                             BlackboardKeyB;                                             // 0x00A8   (0x0030)  
};

/// Class /Script/AIModule.BTDecorator_BlackboardBase
/// Size: 0x0030 (0x000070 - 0x0000A0)
class UBTDecorator_BlackboardBase : public UBTDecorator
{ 
public:
	FBlackboardKeySelector                             BlackboardKey;                                              // 0x0070   (0x0030)  
};

/// Class /Script/AIModule.BTDecorator_IsBBEntryOfClass
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
{ 
public:
	class UClass*                                      TestClass;                                                  // 0x00A0   (0x0008)  
};

/// Class /Script/AIModule.BTDecorator_TimeLimit
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTDecorator_TimeLimit : public UBTDecorator
{ 
public:
	float                                              TimeLimit;                                                  // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/AIModule.BTService
/// Size: 0x0010 (0x000068 - 0x000078)
class UBTService : public UBTAuxiliaryNode
{ 
public:
	float                                              Interval;                                                   // 0x0068   (0x0004)  
	float                                              RandomDeviation;                                            // 0x006C   (0x0004)  
	bool                                               bCallTickOnSearchStart : 1;                                 // 0x0070:0 (0x0001)  
	bool                                               bRestartTimerOnEachActivation : 1;                          // 0x0070:1 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/AIModule.BTService_BlackboardBase
/// Size: 0x0030 (0x000078 - 0x0000A8)
class UBTService_BlackboardBase : public UBTService
{ 
public:
	FBlackboardKeySelector                             BlackboardKey;                                              // 0x0078   (0x0030)  
};

/// Struct /Script/AIModule.AIDynamicParam
/// Size: 0x0048 (0x000000 - 0x000048)
struct FAIDynamicParam
{ 
	FName                                              ParamName;                                                  // 0x0000   (0x000C)  
	EAIParamType                                       ParamType;                                                  // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              value;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	FBlackboardKeySelector                             BBKey;                                                      // 0x0018   (0x0030)  
};

/// Struct /Script/AIModule.EQSParametrizedQueryExecutionRequest
/// Size: 0x0050 (0x000000 - 0x000050)
struct FEQSParametrizedQueryExecutionRequest
{ 
	class UEnvQuery*                                   QueryTemplate;                                              // 0x0000   (0x0008)  
	TArray<FAIDynamicParam>                            QueryConfig;                                                // 0x0008   (0x0010)  
	FBlackboardKeySelector                             EQSQueryBlackboardKey;                                      // 0x0018   (0x0030)  
	SDK_UNDEFINED(1,874) /* TEnumAsByte<EEnvQueryRunMode> */ __um(RunMode);                                        // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0049   (0x0003)  MISSED
	bool                                               bUseBBKeyForQueryTemplate : 1;                              // 0x004C:0 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x004D   (0x0003)  MISSED
};

/// Class /Script/AIModule.BTService_RunEQS
/// Size: 0x0060 (0x0000A8 - 0x000108)
class UBTService_RunEQS : public UBTService_BlackboardBase
{ 
public:
	FEQSParametrizedQueryExecutionRequest              EQSRequest;                                                 // 0x00A8   (0x0050)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00F8   (0x0010)  MISSED
};

/// Class /Script/AIModule.BTTaskNode
/// Size: 0x0018 (0x000060 - 0x000078)
class UBTTaskNode : public UBTNode
{ 
public:
	TArray<class UBTService*>                          Services;                                                   // 0x0060   (0x0010)  
	bool                                               bIgnoreRestartSelf : 1;                                     // 0x0070:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/AIModule.BTTask_BlackboardBase
/// Size: 0x0030 (0x000078 - 0x0000A8)
class UBTTask_BlackboardBase : public UBTTaskNode
{ 
public:
	FBlackboardKeySelector                             BlackboardKey;                                              // 0x0078   (0x0030)  
};

/// Class /Script/AIModule.BTTask_MoveTo
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UBTTask_MoveTo : public UBTTask_BlackboardBase
{ 
public:
	float                                              AcceptableRadius;                                           // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00AC   (0x0004)  MISSED
	class UClass*                                      FilterClass;                                                // 0x00B0   (0x0008)  
	float                                              ObservedBlackboardValueTolerance;                           // 0x00B8   (0x0004)  
	bool                                               bObserveBlackboardValue : 1;                                // 0x00BC:0 (0x0001)  
	bool                                               bAllowStrafe : 1;                                           // 0x00BC:1 (0x0001)  
	bool                                               bAllowPartialPath : 1;                                      // 0x00BC:2 (0x0001)  
	bool                                               bTrackMovingGoal : 1;                                       // 0x00BC:3 (0x0001)  
	bool                                               bProjectGoalLocation : 1;                                   // 0x00BC:4 (0x0001)  
	bool                                               bReachTestIncludesAgentRadius : 1;                          // 0x00BC:5 (0x0001)  
	bool                                               bReachTestIncludesGoalRadius : 1;                           // 0x00BC:6 (0x0001)  
	bool                                               bStopOnOverlap : 1;                                         // 0x00BC:7 (0x0001)  
	bool                                               bStopOnOverlapNeedsUpdate : 1;                              // 0x00BD:0 (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x00BE   (0x0002)  MISSED
};

/// Class /Script/AIModule.BTTask_MoveDirectlyToward
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo
{ 
public:
	bool                                               bDisablePathUpdateOnGoalLocationChange : 1;                 // 0x00C0:0 (0x0001)  
	bool                                               bProjectVectorGoalToNavigation : 1;                         // 0x00C0:1 (0x0001)  
	bool                                               bUpdatedDeprecatedProperties : 1;                           // 0x00C0:2 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00C1   (0x0007)  MISSED
};

/// Class /Script/AIModule.BTTask_Wait
/// Size: 0x0008 (0x000078 - 0x000080)
class UBTTask_Wait : public UBTTaskNode
{ 
public:
	float                                              WaitTime;                                                   // 0x0078   (0x0004)  
	float                                              RandomDeviation;                                            // 0x007C   (0x0004)  
};

/// Struct /Script/AIModule.IntervalCountdown
/// Size: 0x0008 (0x000000 - 0x000008)
struct FIntervalCountdown
{ 
	float                                              Interval;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
};

/// Class /Script/AIModule.BTTask_BlueprintBase
/// Size: 0x0038 (0x000078 - 0x0000B0)
class UBTTask_BlueprintBase : public UBTTaskNode
{ 
public:
	class AAIController*                               AIOwner;                                                    // 0x0078   (0x0008)  
	class AActor*                                      ActorOwner;                                                 // 0x0080   (0x0008)  
	FIntervalCountdown                                 TickInterval;                                               // 0x0088   (0x0008)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x0090   (0x0018)  MISSED
	bool                                               bShowPropertyDetails : 1;                                   // 0x00A8:0 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00A9   (0x0007)  MISSED


	/// Functions
	// Function /Script/AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
	// void SetFinishOnMessageWithId(FName MessageName, int32_t RequestID);                                                  // [0x8542aa0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/AIModule.BTTask_BlueprintBase.SetFinishOnMessage
	// void SetFinishOnMessage(FName MessageName);                                                                           // [0x8542a00] Final|Native|Protected|BlueprintCallable 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveTickAI
	// void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);            // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveTick
	// void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);                                                       // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
	// void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);                             // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveExecute
	// void ReceiveExecute(class AActor* OwnerActor);                                                                        // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveAbortAI
	// void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);                               // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveAbort
	// void ReceiveAbort(class AActor* OwnerActor);                                                                          // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.IsTaskExecuting
	// bool IsTaskExecuting();                                                                                               // [0x85429d0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BTTask_BlueprintBase.IsTaskAborting
	// bool IsTaskAborting();                                                                                                // [0x85429a0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BTTask_BlueprintBase.FinishExecute
	// void FinishExecute(bool bSuccess);                                                                                    // [0x85428e0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/AIModule.BTTask_BlueprintBase.FinishAbort
	// void FinishAbort();                                                                                                   // [0x85428c0] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/AIModule.AIController
/// Size: 0x0090 (0x0002B0 - 0x000340)
class AAIController : public AController
{ 
public:
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x02B0   (0x0038)  MISSED
	bool                                               bStartAILogicOnPossess : 1;                                 // 0x02E8:0 (0x0001)  
	bool                                               bStopAILogicOnUnposses : 1;                                 // 0x02E8:1 (0x0001)  
	bool                                               bLOSflag : 1;                                               // 0x02E8:2 (0x0001)  
	bool                                               bSkipExtraLOSChecks : 1;                                    // 0x02E8:3 (0x0001)  
	bool                                               bAllowStrafe : 1;                                           // 0x02E8:4 (0x0001)  
	bool                                               bWantsPlayerState : 1;                                      // 0x02E8:5 (0x0001)  
	bool                                               bSetControlRotationFromPawnOrientation : 1;                 // 0x02E8:6 (0x0001)  
	unsigned char                                      UnknownData01_4[0x7];                                       // 0x02E9   (0x0007)  MISSED
	class UPathFollowingComponent*                     PathFollowingComponent;                                     // 0x02F0   (0x0008)  
	class UBrainComponent*                             BrainComponent;                                             // 0x02F8   (0x0008)  
	class UAIPerceptionComponent*                      PerceptionComponent;                                        // 0x0300   (0x0008)  
	class UPawnActionsComponent*                       ActionsComp;                                                // 0x0308   (0x0008)  
	class UBlackboardComponent*                        Blackboard;                                                 // 0x0310   (0x0008)  
	class UGameplayTasksComponent*                     CachedGameplayTasksComponent;                               // 0x0318   (0x0008)  
	class UClass*                                      DefaultNavigationFilterClass;                               // 0x0320   (0x0008)  
	SDK_UNDEFINED(16,875) /* FMulticastInlineDelegate */ __um(ReceiveMoveCompleted);                               // 0x0328   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0338   (0x0008)  MISSED


	/// Functions
	// Function /Script/AIModule.AIController.UseBlackboard
	// bool UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent*& BlackboardComponent);         // [0x8531b50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.AIController.UnclaimTaskResource
	// void UnclaimTaskResource(class UClass* ResourceClass);                                                                // [0x8531900] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.SetPathFollowingComponent
	// void SetPathFollowingComponent(class UPathFollowingComponent* NewPFComponent);                                        // [0x85313f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.SetMoveBlockDetection
	// void SetMoveBlockDetection(bool bEnable);                                                                             // [0x8531360] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.RunBehaviorTree
	// bool RunBehaviorTree(class UBehaviorTree* BTAsset);                                                                   // [0x8531160] Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.OnUsingBlackBoard
	// void OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset);           // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.AIController.OnGameplayTaskResourcesClaimed
	// void OnGameplayTaskResourcesClaimed(FGameplayResourceSet NewlyClaimed, FGameplayResourceSet FreshlyReleased);         // [0x8530e20] Native|Public        
	// Function /Script/AIModule.AIController.MoveToLocation
	// TEnumAsByte<EPathFollowingRequestResult> MoveToLocation(FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath); // [0x8530b90] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.AIController.MoveToActor
	// TEnumAsByte<EPathFollowingRequestResult> MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath); // [0x8530950] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.K2_SetFocus
	// void K2_SetFocus(class AActor* NewFocus);                                                                             // [0x85307b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.K2_SetFocalPoint
	// void K2_SetFocalPoint(FVector FP);                                                                                    // [0x8530720] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.AIController.K2_ClearFocus
	// void K2_ClearFocus();                                                                                                 // [0x8530700] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.HasPartialPath
	// bool HasPartialPath();                                                                                                // [0x8530520] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetPathFollowingComponent
	// class UPathFollowingComponent* GetPathFollowingComponent();                                                           // [0x8530270] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetMoveStatus
	// TEnumAsByte<EPathFollowingStatus> GetMoveStatus();                                                                    // [0x85301b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetImmediateMoveDestination
	// FVector GetImmediateMoveDestination();                                                                                // [0x8530080] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetFocusActor
	// class AActor* GetFocusActor();                                                                                        // [0x8530050] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetFocalPointOnActor
	// FVector GetFocalPointOnActor(class AActor* Actor);                                                                    // [0x852ffa0] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetFocalPoint
	// FVector GetFocalPoint();                                                                                              // [0x852ff60] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetAIPerceptionComponent
	// class UAIPerceptionComponent* GetAIPerceptionComponent();                                                             // [0x852fac0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIController.ClaimTaskResource
	// void ClaimTaskResource(class UClass* ResourceClass);                                                                  // [0x852f7c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AIModule.AIPerceptionComponent
/// Size: 0x00E0 (0x0000B8 - 0x000198)
class UAIPerceptionComponent : public UActorComponent
{ 
public:
	TArray<class UAISenseConfig*>                      SensesConfig;                                               // 0x00B8   (0x0010)  
	class UClass*                                      DominantSense;                                              // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x00D0   (0x0010)  MISSED
	class AAIController*                               AIOwner;                                                    // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x80];                                      // 0x00E8   (0x0080)  MISSED
	SDK_UNDEFINED(16,876) /* FMulticastInlineDelegate */ __um(OnPerceptionUpdated);                                // 0x0168   (0x0010)  
	SDK_UNDEFINED(16,877) /* FMulticastInlineDelegate */ __um(OnTargetPerceptionUpdated);                          // 0x0178   (0x0010)  
	SDK_UNDEFINED(16,878) /* FMulticastInlineDelegate */ __um(OnTargetPerceptionInfoUpdated);                      // 0x0188   (0x0010)  


	/// Functions
	// Function /Script/AIModule.AIPerceptionComponent.SetSenseEnabled
	// void SetSenseEnabled(class UClass* SenseClass, bool bEnable);                                                         // [0x8531480] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate
	// void RequestStimuliListenerUpdate();                                                                                  // [0x8531140] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionComponent.OnOwnerEndPlay
	// void OnOwnerEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                                  // [0x8530fc0] Final|Native|Public  
	// Function /Script/AIModule.AIPerceptionComponent.GetPerceivedHostileActorsBySense
	// void GetPerceivedHostileActorsBySense(class UClass* SenseToUse, TArray<AActor*>& OutActors);                          // [0x8530430] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIPerceptionComponent.GetPerceivedHostileActors
	// void GetPerceivedHostileActors(TArray<AActor*>& OutActors);                                                           // [0x8530380] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIPerceptionComponent.GetPerceivedActors
	// void GetPerceivedActors(class UClass* SenseToUse, TArray<AActor*>& OutActors);                                        // [0x8530290] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIPerceptionComponent.GetKnownPerceivedActors
	// void GetKnownPerceivedActors(class UClass* SenseToUse, TArray<AActor*>& OutActors);                                   // [0x85300c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors
	// void GetCurrentlyPerceivedActors(class UClass* SenseToUse, TArray<AActor*>& OutActors);                               // [0x852fe70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIPerceptionComponent.GetActorsPerception
	// bool GetActorsPerception(class AActor* Actor, FActorPerceptionBlueprintInfo& Info);                                   // [0x852fae0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionComponent.ForgetAll
	// void ForgetAll();                                                                                                     // [0x4dd4840] Native|Public|BlueprintCallable 
};

/// Class /Script/AIModule.BrainComponent
/// Size: 0x0058 (0x0000B8 - 0x000110)
class UBrainComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	class UBlackboardComponent*                        BlackboardComp;                                             // 0x00C0   (0x0008)  
	class AAIController*                               AIOwner;                                                    // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x40];                                      // 0x00D0   (0x0040)  MISSED


	/// Functions
	// Function /Script/AIModule.BrainComponent.StopLogic
	// void StopLogic(FString Reason);                                                                                       // [0x853afb0] Native|Public|BlueprintCallable 
	// Function /Script/AIModule.BrainComponent.StartLogic
	// void StartLogic();                                                                                                    // [0x4d82970] Native|Public|BlueprintCallable 
	// Function /Script/AIModule.BrainComponent.RestartLogic
	// void RestartLogic();                                                                                                  // [0x4dd4880] Native|Public|BlueprintCallable 
	// Function /Script/AIModule.BrainComponent.IsRunning
	// bool IsRunning();                                                                                                     // [0x5881ef0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BrainComponent.IsPaused
	// bool IsPaused();                                                                                                      // [0x853a3f0] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.BehaviorTreeComponent
/// Size: 0x0188 (0x000110 - 0x000298)
class UBehaviorTreeComponent : public UBrainComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0110   (0x0020)  MISSED
	TArray<class UBTNode*>                             NodeInstances;                                              // 0x0130   (0x0010)  
	unsigned char                                      UnknownData01_5[0x140];                                     // 0x0140   (0x0140)  MISSED
	class UBehaviorTree*                               DefaultBehaviorTreeAsset;                                   // 0x0280   (0x0008)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0288   (0x0010)  MISSED


	/// Functions
	// Function /Script/AIModule.BehaviorTreeComponent.SetDynamicSubtree
	// void SetDynamicSubtree(FGameplayTag InjectTag, class UBehaviorTree* BehaviorAsset);                                   // [0x853a4d0] Native|Public|BlueprintCallable 
	// Function /Script/AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
	// float GetTagCooldownEndTime(FGameplayTag CooldownTag);                                                                // [0x8539bf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BehaviorTreeComponent.AddCooldownTagDuration
	// void AddCooldownTagDuration(FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration);           // [0x8539820] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AIModule.BlackboardComponent
/// Size: 0x0108 (0x0000B8 - 0x0001C0)
class UBlackboardComponent : public UActorComponent
{ 
public:
	class UBrainComponent*                             BrainComp;                                                  // 0x00B8   (0x0008)  
	class UBlackboardData*                             DefaultBlackboardAsset;                                     // 0x00C0   (0x0008)  
	class UBlackboardData*                             BlackboardAsset;                                            // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x20];                                      // 0x00D0   (0x0020)  MISSED
	TArray<class UBlackboardKeyType*>                  KeyInstances;                                               // 0x00F0   (0x0010)  
	unsigned char                                      UnknownData01_6[0xC0];                                      // 0x0100   (0x00C0)  MISSED


	/// Functions
	// Function /Script/AIModule.BlackboardComponent.SetValueAsVector
	// void SetValueAsVector(FName& KeyName, FVector VectorValue);                                                           // [0x853aeb0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsString
	// void SetValueAsString(FName& KeyName, FString StringValue);                                                           // [0x853ad60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsRotator
	// void SetValueAsRotator(FName& KeyName, FRotator VectorValue);                                                         // [0x853ac60] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsObject
	// void SetValueAsObject(FName& KeyName, class UObject* ObjectValue);                                                    // [0x853ab70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsName
	// void SetValueAsName(FName& KeyName, FName NameValue);                                                                 // [0x853aa70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsInt
	// void SetValueAsInt(FName& KeyName, int32_t IntValue);                                                                 // [0x853a980] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsFloat
	// void SetValueAsFloat(FName& KeyName, float FloatValue);                                                               // [0x853a890] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsEnum
	// void SetValueAsEnum(FName& KeyName, char EnumValue);                                                                  // [0x853a7a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsClass
	// void SetValueAsClass(FName& KeyName, class UClass* ClassValue);                                                       // [0x853a6b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsBool
	// void SetValueAsBool(FName& KeyName, bool BoolValue);                                                                  // [0x853a5c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.IsVectorValueSet
	// bool IsVectorValueSet(FName& KeyName);                                                                                // [0x853a420] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsVector
	// FVector GetValueAsVector(FName& KeyName);                                                                             // [0x853a330] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsString
	// FString GetValueAsString(FName& KeyName);                                                                             // [0x853a240] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsRotator
	// FRotator GetValueAsRotator(FName& KeyName);                                                                           // [0x853a180] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsObject
	// class UObject* GetValueAsObject(FName& KeyName);                                                                      // [0x853a0d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsName
	// FName GetValueAsName(FName& KeyName);                                                                                 // [0x853a010] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsInt
	// int32_t GetValueAsInt(FName& KeyName);                                                                                // [0x8539f60] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsFloat
	// float GetValueAsFloat(FName& KeyName);                                                                                // [0x8539eb0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsEnum
	// char GetValueAsEnum(FName& KeyName);                                                                                  // [0x8539e00] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsClass
	// class UClass* GetValueAsClass(FName& KeyName);                                                                        // [0x8539d50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsBool
	// bool GetValueAsBool(FName& KeyName);                                                                                  // [0x8539ca0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetRotationFromEntry
	// bool GetRotationFromEntry(FName& KeyName, FRotator& ResultRotation);                                                  // [0x8539af0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetLocationFromEntry
	// bool GetLocationFromEntry(FName& KeyName, FVector& ResultLocation);                                                   // [0x85399f0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.ClearValue
	// void ClearValue(FName& KeyName);                                                                                      // [0x8539950] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AIModule.EnvQueryContext
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryContext : public UObject
{ 
public:
};

/// Class /Script/AIModule.EnvQueryNode
/// Size: 0x0008 (0x000030 - 0x000038)
class UEnvQueryNode : public UObject
{ 
public:
	int32_t                                            VerNum;                                                     // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/AIModule.AIDataProviderValue
/// Size: 0x0028 (0x000000 - 0x000028)
struct FAIDataProviderValue
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
	class UAIDataProvider*                             DataBinding;                                                // 0x0010   (0x0008)  
	FName                                              DataField;                                                  // 0x0018   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/AIModule.AIDataProviderTypedValue
/// Size: 0x0010 (0x000028 - 0x000038)
struct FAIDataProviderTypedValue : FAIDataProviderValue
{ 
	class UClass*                                      PropertyType;                                               // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Struct /Script/AIModule.AIDataProviderBoolValue
/// Size: 0x0008 (0x000038 - 0x000040)
struct FAIDataProviderBoolValue : FAIDataProviderTypedValue
{ 
	bool                                               defaultValue;                                               // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/AIModule.AIDataProviderFloatValue
/// Size: 0x0008 (0x000038 - 0x000040)
struct FAIDataProviderFloatValue : FAIDataProviderTypedValue
{ 
	float                                              defaultValue;                                               // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/AIModule.EnvQueryTest
/// Size: 0x0200 (0x000038 - 0x000238)
class UEnvQueryTest : public UEnvQueryNode
{ 
public:
	int32_t                                            TestOrder;                                                  // 0x0038   (0x0004)  
	SDK_UNDEFINED(1,879) /* TEnumAsByte<EEnvTestPurpose> */ __um(TestPurpose);                                     // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x003D   (0x0003)  MISSED
	SDK_UNDEFINED(16,880) /* FString */                __um(TestComment);                                          // 0x0040   (0x0010)  
	SDK_UNDEFINED(1,881) /* TEnumAsByte<EEnvTestFilterOperator> */ __um(MultipleContextFilterOp);                  // 0x0050   (0x0001)  
	SDK_UNDEFINED(1,882) /* TEnumAsByte<EEnvTestScoreOperator> */ __um(MultipleContextScoreOp);                    // 0x0051   (0x0001)  
	SDK_UNDEFINED(1,883) /* TEnumAsByte<EEnvTestFilterType> */ __um(FilterType);                                   // 0x0052   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x0053   (0x0005)  MISSED
	FAIDataProviderBoolValue                           BoolValue;                                                  // 0x0058   (0x0040)  
	FAIDataProviderFloatValue                          FloatValueMin;                                              // 0x0098   (0x0040)  
	FAIDataProviderFloatValue                          FloatValueMax;                                              // 0x00D8   (0x0040)  
	unsigned char                                      UnknownData02_5[0x1];                                       // 0x0118   (0x0001)  MISSED
	SDK_UNDEFINED(1,884) /* TEnumAsByte<EEnvTestScoreEquation> */ __um(ScoringEquation);                           // 0x0119   (0x0001)  
	SDK_UNDEFINED(1,885) /* TEnumAsByte<EEnvQueryTestClamping> */ __um(ClampMinType);                              // 0x011A   (0x0001)  
	SDK_UNDEFINED(1,886) /* TEnumAsByte<EEnvQueryTestClamping> */ __um(ClampMaxType);                              // 0x011B   (0x0001)  
	EEQSNormalizationType                              NormalizationType;                                          // 0x011C   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x011D   (0x0003)  MISSED
	FAIDataProviderFloatValue                          ScoreClampMin;                                              // 0x0120   (0x0040)  
	FAIDataProviderFloatValue                          ScoreClampMax;                                              // 0x0160   (0x0040)  
	FAIDataProviderFloatValue                          ScoringFactor;                                              // 0x01A0   (0x0040)  
	FAIDataProviderFloatValue                          ReferenceValue;                                             // 0x01E0   (0x0040)  
	bool                                               bDefineReferenceValue;                                      // 0x0220   (0x0001)  
	unsigned char                                      UnknownData04_5[0xF];                                       // 0x0221   (0x000F)  MISSED
	bool                                               bWorkOnFloatValues : 1;                                     // 0x0230:0 (0x0001)  
	unsigned char                                      UnknownData05_6[0x7];                                       // 0x0231   (0x0007)  MISSED
};

/// Class /Script/AIModule.EnvQueryTest_Pathfinding
/// Size: 0x0098 (0x000238 - 0x0002D0)
class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{ 
public:
	SDK_UNDEFINED(1,887) /* TEnumAsByte<EEnvTestPathfinding> */ __um(TestMode);                                    // 0x0238   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0239   (0x0007)  MISSED
	class UClass*                                      Context;                                                    // 0x0240   (0x0008)  
	FAIDataProviderBoolValue                           PathFromContext;                                            // 0x0248   (0x0040)  
	FAIDataProviderBoolValue                           SkipUnreachable;                                            // 0x0288   (0x0040)  
	class UClass*                                      FilterClass;                                                // 0x02C8   (0x0008)  
};

/// Class /Script/AIModule.NavLinkProxy
/// Size: 0x0050 (0x000230 - 0x000280)
class ANavLinkProxy : public AActor
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0230   (0x0010)  MISSED
	TArray<FNavigationLink>                            PointLinks;                                                 // 0x0240   (0x0010)  
	TArray<FNavigationSegmentLink>                     SegmentLinks;                                               // 0x0250   (0x0010)  
	class UNavLinkCustomComponent*                     SmartLinkComp;                                              // 0x0260   (0x0008)  
	bool                                               bSmartLinkIsRelevant;                                       // 0x0268   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0269   (0x0007)  MISSED
	SDK_UNDEFINED(16,888) /* FMulticastInlineDelegate */ __um(OnSmartLinkReached);                                 // 0x0270   (0x0010)  


	/// Functions
	// Function /Script/AIModule.NavLinkProxy.SetSmartLinkEnabled
	// void SetSmartLinkEnabled(bool bEnabled);                                                                              // [0x854aea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.NavLinkProxy.ResumePathFollowing
	// void ResumePathFollowing(class AActor* Agent);                                                                        // [0x854ad40] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.NavLinkProxy.ReceiveSmartLinkReached
	// void ReceiveSmartLinkReached(class AActor* Agent, FVector& Destination);                                              // [0x61d2f50] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/AIModule.NavLinkProxy.IsSmartLinkEnabled
	// bool IsSmartLinkEnabled();                                                                                            // [0x854a690] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.NavLinkProxy.HasMovingAgents
	// bool HasMovingAgents();                                                                                               // [0x854a660] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.AISenseConfig
/// Size: 0x0020 (0x000030 - 0x000050)
class UAISenseConfig : public UObject
{ 
public:
	FColor                                             DebugColor;                                                 // 0x0030   (0x0004)  
	float                                              MaxAge;                                                     // 0x0034   (0x0004)  
	bool                                               bStartsEnabled : 1;                                         // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x17];                                      // 0x0039   (0x0017)  MISSED
};

/// Class /Script/AIModule.AISenseEvent
/// Size: 0x0000 (0x000030 - 0x000030)
class UAISenseEvent : public UObject
{ 
public:
};

/// Class /Script/AIModule.AISense
/// Size: 0x0060 (0x000030 - 0x000090)
class UAISense : public UObject
{ 
public:
	float                                              DefaultExpirationAge;                                       // 0x0030   (0x0004)  
	EAISenseNotifyType                                 NotifyType;                                                 // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	bool                                               bWantsNewPawnNotification : 1;                              // 0x0038:0 (0x0001)  
	bool                                               bAutoRegisterAllPawnsAsSources : 1;                         // 0x0038:1 (0x0001)  
	unsigned char                                      UnknownData01_4[0x7];                                       // 0x0039   (0x0007)  MISSED
	class UAIPerceptionSystem*                         PerceptionSystemInstance;                                   // 0x0040   (0x0008)  
	unsigned char                                      UnknownData02_6[0x48];                                      // 0x0048   (0x0048)  MISSED
};

/// Class /Script/AIModule.GenericTeamAgentInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UGenericTeamAgentInterface : public UInterface
{ 
public:
};

/// Class /Script/AIModule.PawnSensingComponent
/// Size: 0x0048 (0x0000B8 - 0x000100)
class UPawnSensingComponent : public UActorComponent
{ 
public:
	float                                              HearingThreshold;                                           // 0x00B8   (0x0004)  
	float                                              LOSHearingThreshold;                                        // 0x00BC   (0x0004)  
	float                                              SightRadius;                                                // 0x00C0   (0x0004)  
	float                                              SensingInterval;                                            // 0x00C4   (0x0004)  
	float                                              HearingMaxSoundAge;                                         // 0x00C8   (0x0004)  
	bool                                               bEnableSensingUpdates : 1;                                  // 0x00CC:0 (0x0001)  
	bool                                               bOnlySensePlayers : 1;                                      // 0x00CC:1 (0x0001)  
	bool                                               bSeePawns : 1;                                              // 0x00CC:2 (0x0001)  
	bool                                               bHearNoises : 1;                                            // 0x00CC:3 (0x0001)  
	unsigned char                                      UnknownData00_4[0xB];                                       // 0x00CD   (0x000B)  MISSED
	SDK_UNDEFINED(16,889) /* FMulticastInlineDelegate */ __um(OnSeePawn);                                          // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,890) /* FMulticastInlineDelegate */ __um(OnHearNoise);                                        // 0x00E8   (0x0010)  
	float                                              PeripheralVisionAngle;                                      // 0x00F8   (0x0004)  
	float                                              PeripheralVisionCosine;                                     // 0x00FC   (0x0004)  


	/// Functions
	// Function /Script/AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
	// void SetSensingUpdatesEnabled(bool bEnabled);                                                                         // [0x5c504c0] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnSensingComponent.SetSensingInterval
	// void SetSensingInterval(float NewSensingInterval);                                                                    // [0x57d3f50] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnSensingComponent.SetPeripheralVisionAngle
	// void SetPeripheralVisionAngle(float NewPeripheralVisionAngle);                                                        // [0x57f9390] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
	// void SeePawnDelegate__DelegateSignature(class APawn* Pawn);                                                           // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
	// void HearNoiseDelegate__DelegateSignature(class APawn* Instigator, FVector& Location, float Volume);                  // [0x61d2f50] MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults 
	// Function /Script/AIModule.PawnSensingComponent.GetPeripheralVisionCosine
	// float GetPeripheralVisionCosine();                                                                                    // [0x854a640] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.PawnSensingComponent.GetPeripheralVisionAngle
	// float GetPeripheralVisionAngle();                                                                                     // [0x7242d90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.BTService_BlueprintBase
/// Size: 0x0028 (0x000078 - 0x0000A0)
class UBTService_BlueprintBase : public UBTService
{ 
public:
	class AAIController*                               AIOwner;                                                    // 0x0078   (0x0008)  
	class AActor*                                      ActorOwner;                                                 // 0x0080   (0x0008)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0088   (0x0010)  MISSED
	bool                                               bShowPropertyDetails : 1;                                   // 0x0098:0 (0x0001)  
	bool                                               bShowEventDetails : 1;                                      // 0x0098:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0099   (0x0007)  MISSED


	/// Functions
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveTickAI
	// void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);            // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveTick
	// void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);                                                       // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
	// void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);                         // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveSearchStart
	// void ReceiveSearchStart(class AActor* OwnerActor);                                                                    // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
	// void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);                        // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveDeactivation
	// void ReceiveDeactivation(class AActor* OwnerActor);                                                                   // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveActivationAI
	// void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);                          // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveActivation
	// void ReceiveActivation(class AActor* OwnerActor);                                                                     // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.IsServiceActive
	// bool IsServiceActive();                                                                                               // [0x8542970] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.AIAsyncTaskBlueprintProxy
/// Size: 0x0040 (0x000030 - 0x000070)
class UAIAsyncTaskBlueprintProxy : public UObject
{ 
public:
	SDK_UNDEFINED(16,891) /* FMulticastInlineDelegate */ __um(OnSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,892) /* FMulticastInlineDelegate */ __um(OnFail);                                             // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0050   (0x0020)  MISSED


	/// Functions
	// Function /Script/AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
	// void OnMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult> MovementResult);                       // [0x8530ef0] Final|Native|Public  
};

/// Class /Script/AIModule.AIBlueprintHelperLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
	// void UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);     // [0x8531990] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
	// class APawn* SpawnAIFromClass(class UObject* WorldContextObject, class UClass* PawnClass, class UBehaviorTree* BehaviorTree, FVector Location, FRotator Rotation, bool bNoCollisionFail, class AActor* Owner); // [0x85316d0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation
	// void SimpleMoveToLocation(class AController* Controller, FVector& Goal);                                              // [0x8531610] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor
	// void SimpleMoveToActor(class AController* Controller, class AActor* Goal);                                            // [0x8531550] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.SendAIMessage
	// void SendAIMessage(class APawn* Target, FName Message, class UObject* MessageSource, bool bSuccess);                  // [0x8531200] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
	// void LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);           // [0x8530840] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
	// bool IsValidAIRotation(FRotator Rotation);                                                                            // [0x8530670] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.IsValidAILocation
	// bool IsValidAILocation(FVector Location);                                                                             // [0x85305e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
	// bool IsValidAIDirection(FVector DirectionVector);                                                                     // [0x8530550] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.GetNextNavLinkIndex
	// int32_t GetNextNavLinkIndex(class AController* Controller);                                                           // [0x85301e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.GetCurrentPathPoints
	// TArray<FVector> GetCurrentPathPoints(class AController* Controller);                                                  // [0x852fd90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.GetCurrentPathIndex
	// int32_t GetCurrentPathIndex(class AController* Controller);                                                           // [0x852fd00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.GetCurrentPath
	// class UNavigationPath* GetCurrentPath(class AController* Controller);                                                 // [0x852fc70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.GetBlackboard
	// class UBlackboardComponent* GetBlackboard(class AActor* Target);                                                      // [0x852fbe0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.GetAIController
	// class AAIController* GetAIController(class AActor* ControlledActor);                                                  // [0x852fa30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
	// class UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, FVector Destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap); // [0x852f850] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AIModule.AIDataProvider
/// Size: 0x0000 (0x000030 - 0x000030)
class UAIDataProvider : public UObject
{ 
public:
};

/// Class /Script/AIModule.AIDataProvider_QueryParams
/// Size: 0x0018 (0x000030 - 0x000048)
class UAIDataProvider_QueryParams : public UAIDataProvider
{ 
public:
	FName                                              ParamName;                                                  // 0x0030   (0x000C)  
	float                                              FloatValue;                                                 // 0x003C   (0x0004)  
	int32_t                                            IntValue;                                                   // 0x0040   (0x0004)  
	bool                                               BoolValue;                                                  // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0045   (0x0003)  MISSED
};

/// Class /Script/AIModule.AIDataProvider_Random
/// Size: 0x0010 (0x000048 - 0x000058)
class UAIDataProvider_Random : public UAIDataProvider_QueryParams
{ 
public:
	float                                              Min;                                                        // 0x0048   (0x0004)  
	float                                              Max;                                                        // 0x004C   (0x0004)  
	bool                                               bInteger : 1;                                               // 0x0050:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Class /Script/AIModule.AIHotSpotManager
/// Size: 0x0000 (0x000030 - 0x000030)
class UAIHotSpotManager : public UObject
{ 
public:
};

/// Class /Script/AIModule.AIPerceptionListenerInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UAIPerceptionListenerInterface : public UInterface
{ 
public:
};

/// Class /Script/AIModule.AIPerceptionStimuliSourceComponent
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UAIPerceptionStimuliSourceComponent : public UActorComponent
{ 
public:
	bool                                               bAutoRegisterAsSource : 1;                                  // 0x00B8:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x00B9   (0x0007)  MISSED
	TArray<class UClass*>                              RegisterAsSourceForSenses;                                  // 0x00C0   (0x0010)  


	/// Functions
	// Function /Script/AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
	// void UnregisterFromSense(class UClass* SenseClass);                                                                   // [0x8531ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
	// void UnregisterFromPerceptionSystem();                                                                                // [0x8531aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
	// void RegisterWithPerceptionSystem();                                                                                  // [0x8531120] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
	// void RegisterForSense(class UClass* SenseClass);                                                                      // [0x8531090] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AIModule.AISubsystem
/// Size: 0x0010 (0x000030 - 0x000040)
class UAISubsystem : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	class UAISystem*                                   AISystem;                                                   // 0x0038   (0x0008)  
};

/// Class /Script/AIModule.AIPerceptionSystem
/// Size: 0x00F8 (0x000040 - 0x000138)
class UAIPerceptionSystem : public UAISubsystem
{ 
public:
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0040   (0x0050)  MISSED
	TArray<class UAISense*>                            Senses;                                                     // 0x0090   (0x0010)  
	float                                              PerceptionAgingRate;                                        // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x94];                                      // 0x00A4   (0x0094)  MISSED


	/// Functions
	// Function /Script/AIModule.AIPerceptionSystem.ReportPerceptionEvent
	// void ReportPerceptionEvent(class UObject* WorldContextObject, class UAISenseEvent* PerceptionEvent);                  // [0x8535dc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionSystem.ReportEvent
	// void ReportEvent(class UAISenseEvent* PerceptionEvent);                                                               // [0x8535b40] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
	// bool RegisterPerceptionStimuliSource(class UObject* WorldContextObject, class UClass* Sense, class AActor* Target);   // [0x85357f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
	// void OnPerceptionStimuliSourceEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                // [0x8535720] Final|Native|Protected 
	// Function /Script/AIModule.AIPerceptionSystem.GetSenseClassForStimulus
	// class UClass* GetSenseClassForStimulus(class UObject* WorldContextObject, FAIStimulus& Stimulus);                     // [0x85355d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AIModule.AIResourceInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UAIResourceInterface : public UInterface
{ 
public:
};

/// Class /Script/AIModule.AIResource_Movement
/// Size: 0x0000 (0x000040 - 0x000040)
class UAIResource_Movement : public UGameplayTaskResource
{ 
public:
};

/// Class /Script/AIModule.AIResource_Logic
/// Size: 0x0000 (0x000040 - 0x000040)
class UAIResource_Logic : public UGameplayTaskResource
{ 
public:
};

/// Class /Script/AIModule.AISense_Blueprint
/// Size: 0x0028 (0x000090 - 0x0000B8)
class UAISense_Blueprint : public UAISense
{ 
public:
	class UClass*                                      ListenerDataType;                                           // 0x0090   (0x0008)  
	TArray<class UAIPerceptionComponent*>              ListenerContainer;                                          // 0x0098   (0x0010)  
	TArray<class UAISenseEvent*>                       UnprocessedEvents;                                          // 0x00A8   (0x0010)  


	/// Functions
	// Function /Script/AIModule.AISense_Blueprint.OnUpdate
	// float OnUpdate(TArray<UAISenseEvent*>& EventsToProcess);                                                              // [0x61d2f50] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AIModule.AISense_Blueprint.OnListenerUpdated
	// void OnListenerUpdated(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);               // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Script/AIModule.AISense_Blueprint.OnListenerUnregistered
	// void OnListenerUnregistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);          // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Script/AIModule.AISense_Blueprint.OnListenerRegistered
	// void OnListenerRegistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);            // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Script/AIModule.AISense_Blueprint.K2_OnNewPawn
	// void K2_OnNewPawn(class APawn* NewPawn);                                                                              // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Script/AIModule.AISense_Blueprint.GetAllListenerComponents
	// void GetAllListenerComponents(TArray<UAIPerceptionComponent*>& ListenerComponents);                                   // [0x8535520] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AISense_Blueprint.GetAllListenerActors
	// void GetAllListenerActors(TArray<AActor*>& ListenerActors);                                                           // [0x8535470] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/AIModule.AIDamageEvent
/// Size: 0x0040 (0x000000 - 0x000040)
struct FAIDamageEvent
{ 
	float                                              Amount;                                                     // 0x0000   (0x0004)  
	FVector                                            Location;                                                   // 0x0004   (0x000C)  
	FVector                                            HitLocation;                                                // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	class AActor*                                      DamagedActor;                                               // 0x0020   (0x0008)  
	class AActor*                                      Instigator;                                                 // 0x0028   (0x0008)  
	FName                                              Tag;                                                        // 0x0030   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/AIModule.AISense_Damage
/// Size: 0x0010 (0x000090 - 0x0000A0)
class UAISense_Damage : public UAISense
{ 
public:
	TArray<FAIDamageEvent>                             RegisteredEvents;                                           // 0x0090   (0x0010)  


	/// Functions
	// Function /Script/AIModule.AISense_Damage.ReportDamageEvent
	// void ReportDamageEvent(class UObject* WorldContextObject, class AActor* DamagedActor, class AActor* Instigator, float DamageAmount, FVector EventLocation, FVector HitLocation, FName Tag); // [0x85358f0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/AIModule.AINoiseEvent
/// Size: 0x0030 (0x000000 - 0x000030)
struct FAINoiseEvent
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0000   (0x0004)  MISSED
	FVector                                            NoiseLocation;                                              // 0x0004   (0x000C)  
	float                                              Loudness;                                                   // 0x0010   (0x0004)  
	float                                              MaxRange;                                                   // 0x0014   (0x0004)  
	class AActor*                                      Instigator;                                                 // 0x0018   (0x0008)  
	FName                                              Tag;                                                        // 0x0020   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/AIModule.AISense_Hearing
/// Size: 0x0068 (0x000090 - 0x0000F8)
class UAISense_Hearing : public UAISense
{ 
public:
	TArray<FAINoiseEvent>                              NoiseEvents;                                                // 0x0090   (0x0010)  
	float                                              SpeedOfSoundSq;                                             // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x54];                                      // 0x00A4   (0x0054)  MISSED


	/// Functions
	// Function /Script/AIModule.AISense_Hearing.ReportNoiseEvent
	// void ReportNoiseEvent(class UObject* WorldContextObject, FVector NoiseLocation, float Loudness, class AActor* Instigator, float MaxRange, FName Tag); // [0x8535bd0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.AISense_Hearing.Authority_ReportNoiseEventBHVR
	// void Authority_ReportNoiseEventBHVR(class AActor* instigatingActor, FVector NoiseLocation, float Loudness, class AActor* Instigator, float MaxRange, FName Tag); // [0x8535280] Final|BlueprintAuthorityOnly|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/AIModule.AIPredictionEvent
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAIPredictionEvent
{ 
	class AActor*                                      Requestor;                                                  // 0x0000   (0x0008)  
	class AActor*                                      PredictedActor;                                             // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Class /Script/AIModule.AISense_Prediction
/// Size: 0x0010 (0x000090 - 0x0000A0)
class UAISense_Prediction : public UAISense
{ 
public:
	TArray<FAIPredictionEvent>                         RegisteredEvents;                                           // 0x0090   (0x0010)  


	/// Functions
	// Function /Script/AIModule.AISense_Prediction.RequestPawnPredictionEvent
	// void RequestPawnPredictionEvent(class APawn* Requestor, class AActor* PredictedActor, float PredictionTime);          // [0x8535f90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AISense_Prediction.RequestControllerPredictionEvent
	// void RequestControllerPredictionEvent(class AAIController* Requestor, class AActor* PredictedActor, float PredictionTime); // [0x8535e80] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AIModule.AISense_Sight
/// Size: 0x00F0 (0x000090 - 0x000180)
class UAISense_Sight : public UAISense
{ 
public:
	unsigned char                                      UnknownData00_2[0xC8];                                      // 0x0090   (0x00C8)  MISSED
	int32_t                                            MaxTracesPerTick;                                           // 0x0158   (0x0004)  
	int32_t                                            MinQueriesPerTimeSliceCheck;                                // 0x015C   (0x0004)  
	double                                             MaxTimeSlicePerTick;                                        // 0x0160   (0x0008)  
	float                                              HighImportanceQueryDistanceThreshold;                       // 0x0168   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x016C   (0x0004)  MISSED
	float                                              MaxQueryImportance;                                         // 0x0170   (0x0004)  
	float                                              SightLimitQueryImportance;                                  // 0x0174   (0x0004)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0178   (0x0008)  MISSED
};

/// Struct /Script/AIModule.AITeamStimulusEvent
/// Size: 0x0038 (0x000000 - 0x000038)
struct FAITeamStimulusEvent
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
	class AActor*                                      Broadcaster;                                                // 0x0028   (0x0008)  
	class AActor*                                      Enemy;                                                      // 0x0030   (0x0008)  
};

/// Class /Script/AIModule.AISense_Team
/// Size: 0x0010 (0x000090 - 0x0000A0)
class UAISense_Team : public UAISense
{ 
public:
	TArray<FAITeamStimulusEvent>                       RegisteredEvents;                                           // 0x0090   (0x0010)  
};

/// Struct /Script/AIModule.AITouchEvent
/// Size: 0x0020 (0x000000 - 0x000020)
struct FAITouchEvent
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
	class AActor*                                      TouchReceiver;                                              // 0x0010   (0x0008)  
	class AActor*                                      OtherActor;                                                 // 0x0018   (0x0008)  
};

/// Class /Script/AIModule.AISense_Touch
/// Size: 0x0010 (0x000090 - 0x0000A0)
class UAISense_Touch : public UAISense
{ 
public:
	TArray<FAITouchEvent>                              RegisteredEvents;                                           // 0x0090   (0x0010)  
};

/// Class /Script/AIModule.AISenseBlueprintListener
/// Size: 0x0000 (0x000110 - 0x000110)
class UAISenseBlueprintListener : public UUserDefinedStruct
{ 
public:
};

/// Class /Script/AIModule.AISenseConfig_Blueprint
/// Size: 0x0008 (0x000050 - 0x000058)
class UAISenseConfig_Blueprint : public UAISenseConfig
{ 
public:
	class UClass*                                      Implementation;                                             // 0x0050   (0x0008)  
};

/// Class /Script/AIModule.AISenseConfig_Damage
/// Size: 0x0008 (0x000050 - 0x000058)
class UAISenseConfig_Damage : public UAISenseConfig
{ 
public:
	class UClass*                                      Implementation;                                             // 0x0050   (0x0008)  
};

/// Struct /Script/AIModule.AISenseAffiliationFilter
/// Size: 0x0004 (0x000000 - 0x000004)
struct FAISenseAffiliationFilter
{ 
	bool                                               bDetectEnemies : 1;                                         // 0x0000:0 (0x0001)  
	bool                                               bDetectNeutrals : 1;                                        // 0x0000:1 (0x0001)  
	bool                                               bDetectFriendlies : 1;                                      // 0x0000:2 (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
};

/// Class /Script/AIModule.AISenseConfig_Hearing
/// Size: 0x0018 (0x000050 - 0x000068)
class UAISenseConfig_Hearing : public UAISenseConfig
{ 
public:
	class UClass*                                      Implementation;                                             // 0x0050   (0x0008)  
	float                                              HearingRange;                                               // 0x0058   (0x0004)  
	float                                              LoSHearingRange;                                            // 0x005C   (0x0004)  
	bool                                               bUseLoSHearing : 1;                                         // 0x0060:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x0061   (0x0003)  MISSED
	FAISenseAffiliationFilter                          DetectionByAffiliation;                                     // 0x0064   (0x0004)  
};

/// Class /Script/AIModule.AISenseConfig_Prediction
/// Size: 0x0000 (0x000050 - 0x000050)
class UAISenseConfig_Prediction : public UAISenseConfig
{ 
public:
};

/// Class /Script/AIModule.AISenseConfig_Sight
/// Size: 0x0028 (0x000050 - 0x000078)
class UAISenseConfig_Sight : public UAISenseConfig
{ 
public:
	class UClass*                                      Implementation;                                             // 0x0050   (0x0008)  
	float                                              SightRadius;                                                // 0x0058   (0x0004)  
	float                                              LoseSightRadius;                                            // 0x005C   (0x0004)  
	float                                              PeripheralVisionAngleDegrees;                               // 0x0060   (0x0004)  
	FAISenseAffiliationFilter                          DetectionByAffiliation;                                     // 0x0064   (0x0004)  
	float                                              AutoSuccessRangeFromLastSeenLocation;                       // 0x0068   (0x0004)  
	float                                              PointOfViewBackwardOffset;                                  // 0x006C   (0x0004)  
	float                                              NearClippingRadius;                                         // 0x0070   (0x0004)  
	float                                              FullPeripheralVisionRange;                                  // 0x0074   (0x0004)  
};

/// Class /Script/AIModule.AISenseConfig_Team
/// Size: 0x0000 (0x000050 - 0x000050)
class UAISenseConfig_Team : public UAISenseConfig
{ 
public:
};

/// Class /Script/AIModule.AISenseConfig_Touch
/// Size: 0x0000 (0x000050 - 0x000050)
class UAISenseConfig_Touch : public UAISenseConfig
{ 
public:
};

/// Class /Script/AIModule.AISenseEvent_Damage
/// Size: 0x0040 (0x000030 - 0x000070)
class UAISenseEvent_Damage : public UAISenseEvent
{ 
public:
	FAIDamageEvent                                     Event;                                                      // 0x0030   (0x0040)  
};

/// Class /Script/AIModule.AISenseEvent_Hearing
/// Size: 0x0030 (0x000030 - 0x000060)
class UAISenseEvent_Hearing : public UAISenseEvent
{ 
public:
	FAINoiseEvent                                      Event;                                                      // 0x0030   (0x0030)  
};

/// Class /Script/AIModule.AISightTargetInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UAISightTargetInterface : public UInterface
{ 
public:
};

/// Class /Script/AIModule.AISystem
/// Size: 0x00E8 (0x000070 - 0x000158)
class UAISystem : public UAISystemBase
{ 
public:
	FSoftClassPath                                     PerceptionSystemClassName;                                  // 0x0070   (0x0020)  
	FSoftClassPath                                     HotSpotManagerClassName;                                    // 0x0090   (0x0020)  
	float                                              AcceptanceRadius;                                           // 0x00B0   (0x0004)  
	float                                              PathfollowingRegularPathPointAcceptanceRadius;              // 0x00B4   (0x0004)  
	float                                              PathfollowingNavLinkAcceptanceRadius;                       // 0x00B8   (0x0004)  
	bool                                               bFinishMoveOnGoalOverlap;                                   // 0x00BC   (0x0001)  
	bool                                               bAcceptPartialPaths;                                        // 0x00BD   (0x0001)  
	bool                                               bAllowStrafing;                                             // 0x00BE   (0x0001)  
	bool                                               bEnableBTAITasks;                                           // 0x00BF   (0x0001)  
	bool                                               bAllowControllersAsEQSQuerier;                              // 0x00C0   (0x0001)  
	bool                                               bEnableDebuggerPlugin;                                      // 0x00C1   (0x0001)  
	bool                                               bForgetStaleActors;                                         // 0x00C2   (0x0001)  
	bool                                               bAddBlackboardSelfKey;                                      // 0x00C3   (0x0001)  
	SDK_UNDEFINED(1,893) /* TEnumAsByte<ECollisionChannel> */ __um(DefaultSightCollisionChannel);                  // 0x00C4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00C5   (0x0003)  MISSED
	class UBehaviorTreeManager*                        BehaviorTreeManager;                                        // 0x00C8   (0x0008)  
	class UEnvQueryManager*                            EnvironmentQueryManager;                                    // 0x00D0   (0x0008)  
	class UAIPerceptionSystem*                         PerceptionSystem;                                           // 0x00D8   (0x0008)  
	TArray<class UAIAsyncTaskBlueprintProxy*>          AllProxyObjects;                                            // 0x00E0   (0x0010)  
	class UAIHotSpotManager*                           HotSpotManager;                                             // 0x00F0   (0x0008)  
	class UNavLocalGridManager*                        NavLocalGrids;                                              // 0x00F8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x58];                                      // 0x0100   (0x0058)  MISSED


	/// Functions
	// Function /Script/AIModule.AISystem.AILoggingVerbose
	// void AILoggingVerbose();                                                                                              // [0x6ae20f0] Exec|Native|Public   
	// Function /Script/AIModule.AISystem.AIIgnorePlayers
	// void AIIgnorePlayers();                                                                                               // [0x57b6160] Exec|Native|Public   
};

/// Class /Script/AIModule.AITask
/// Size: 0x0008 (0x000070 - 0x000078)
class UAITask : public UGameplayTask
{ 
public:
	class AAIController*                               OwnerController;                                            // 0x0070   (0x0008)  
};

/// Class /Script/AIModule.AITask_LockLogic
/// Size: 0x0000 (0x000078 - 0x000078)
class UAITask_LockLogic : public UAITask
{ 
public:
};

/// Struct /Script/AIModule.AIMoveRequest
/// Size: 0x0040 (0x000000 - 0x000040)
struct FAIMoveRequest
{ 
	class AActor*                                      GoalActor;                                                  // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0008   (0x0038)  MISSED
};

/// Class /Script/AIModule.AITask_MoveTo
/// Size: 0x00A0 (0x000078 - 0x000118)
class UAITask_MoveTo : public UAITask
{ 
public:
	SDK_UNDEFINED(16,894) /* FMulticastInlineDelegate */ __um(OnRequestFailed);                                    // 0x0078   (0x0010)  
	SDK_UNDEFINED(16,895) /* FMulticastInlineDelegate */ __um(OnMoveFinished);                                     // 0x0088   (0x0010)  
	FAIMoveRequest                                     MoveRequest;                                                // 0x0098   (0x0040)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x00D8   (0x0040)  MISSED


	/// Functions
	// Function /Script/AIModule.AITask_MoveTo.AIMoveTo
	// class UAITask_MoveTo* AIMoveTo(class AAIController* Controller, FVector goalLocation, class AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag> StopOnOverlap, TEnumAsByte<EAIOptionFlag> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, TEnumAsByte<EAIOptionFlag> ProjectGoalOnNavigation); // [0x8534f80] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AIModule.AITask_RunEQS
/// Size: 0x0080 (0x000078 - 0x0000F8)
class UAITask_RunEQS : public UAITask
{ 
public:
	unsigned char                                      UnknownData00_1[0x80];                                      // 0x0078   (0x0080)  MISSED


	/// Functions
	// Function /Script/AIModule.AITask_RunEQS.RunEQS
	// class UAITask_RunEQS* RunEQS(class AAIController* Controller, class UEnvQuery* QueryTemplate);                        // [0x85360a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/AIModule.BTDecoratorLogic
/// Size: 0x0004 (0x000000 - 0x000004)
struct FBTDecoratorLogic
{ 
	SDK_UNDEFINED(1,896) /* TEnumAsByte<EBTDecoratorLogic> */ __um(Operation);                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0001   (0x0001)  MISSED
	uint16_t                                           Number;                                                     // 0x0002   (0x0002)  
};

/// Class /Script/AIModule.BehaviorTree
/// Size: 0x0040 (0x000030 - 0x000070)
class UBehaviorTree : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	class UBTCompositeNode*                            RootNode;                                                   // 0x0038   (0x0008)  
	class UBlackboardData*                             BlackboardAsset;                                            // 0x0040   (0x0008)  
	TArray<class UBTDecorator*>                        RootDecorators;                                             // 0x0048   (0x0010)  
	TArray<FBTDecoratorLogic>                          RootDecoratorOps;                                           // 0x0058   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0068   (0x0008)  MISSED
};

/// Struct /Script/AIModule.BehaviorTreeTemplateInfo
/// Size: 0x0018 (0x000000 - 0x000018)
struct FBehaviorTreeTemplateInfo
{ 
	class UBehaviorTree*                               Asset;                                                      // 0x0000   (0x0008)  
	class UBTCompositeNode*                            Template;                                                   // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Class /Script/AIModule.BehaviorTreeManager
/// Size: 0x0028 (0x000030 - 0x000058)
class UBehaviorTreeManager : public UObject
{ 
public:
	int32_t                                            MaxDebuggerSteps;                                           // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<FBehaviorTreeTemplateInfo>                  LoadedTemplates;                                            // 0x0038   (0x0010)  
	TArray<class UBehaviorTreeComponent*>              ActiveComponents;                                           // 0x0048   (0x0010)  
};

/// Class /Script/AIModule.BehaviorTreeTypes
/// Size: 0x0000 (0x000030 - 0x000030)
class UBehaviorTreeTypes : public UObject
{ 
public:
};

/// Class /Script/AIModule.BlackboardAssetProvider
/// Size: 0x0000 (0x000030 - 0x000030)
class UBlackboardAssetProvider : public UInterface
{ 
public:


	/// Functions
	// Function /Script/AIModule.BlackboardAssetProvider.GetBlackboardAsset
	// class UBlackboardData* GetBlackboardAsset();                                                                          // [0x5925f30] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/AIModule.BlackboardEntry
/// Size: 0x0020 (0x000000 - 0x000020)
struct FBlackboardEntry
{ 
	FName                                              EntryName;                                                  // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UBlackboardKeyType*                          KeyType;                                                    // 0x0010   (0x0008)  
	bool                                               bInstanceSynced : 1;                                        // 0x0018:0 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Class /Script/AIModule.BlackboardData
/// Size: 0x0020 (0x000038 - 0x000058)
class UBlackboardData : public UDataAsset
{ 
public:
	class UBlackboardData*                             Parent;                                                     // 0x0038   (0x0008)  
	TArray<FBlackboardEntry>                           Keys;                                                       // 0x0040   (0x0010)  
	bool                                               bHasSynchronizedKeys : 1;                                   // 0x0050:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Class /Script/AIModule.BlackboardKeyType
/// Size: 0x0008 (0x000030 - 0x000038)
class UBlackboardKeyType : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/AIModule.BlackboardKeyType_Bool
/// Size: 0x0000 (0x000038 - 0x000038)
class UBlackboardKeyType_Bool : public UBlackboardKeyType
{ 
public:
};

/// Class /Script/AIModule.BlackboardKeyType_Class
/// Size: 0x0008 (0x000038 - 0x000040)
class UBlackboardKeyType_Class : public UBlackboardKeyType
{ 
public:
	class UClass*                                      BaseClass;                                                  // 0x0038   (0x0008)  
};

/// Class /Script/AIModule.BlackboardKeyType_Enum
/// Size: 0x0020 (0x000038 - 0x000058)
class UBlackboardKeyType_Enum : public UBlackboardKeyType
{ 
public:
	class UEnum*                                       EnumType;                                                   // 0x0038   (0x0008)  
	SDK_UNDEFINED(16,897) /* FString */                __um(EnumName);                                             // 0x0040   (0x0010)  
	bool                                               bIsEnumNameValid : 1;                                       // 0x0050:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Class /Script/AIModule.BlackboardKeyType_Float
/// Size: 0x0000 (0x000038 - 0x000038)
class UBlackboardKeyType_Float : public UBlackboardKeyType
{ 
public:
};

/// Class /Script/AIModule.BlackboardKeyType_Int
/// Size: 0x0000 (0x000038 - 0x000038)
class UBlackboardKeyType_Int : public UBlackboardKeyType
{ 
public:
};

/// Class /Script/AIModule.BlackboardKeyType_Name
/// Size: 0x0000 (0x000038 - 0x000038)
class UBlackboardKeyType_Name : public UBlackboardKeyType
{ 
public:
};

/// Class /Script/AIModule.BlackboardKeyType_NativeEnum
/// Size: 0x0018 (0x000038 - 0x000050)
class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType
{ 
public:
	SDK_UNDEFINED(16,898) /* FString */                __um(EnumName);                                             // 0x0038   (0x0010)  
	class UEnum*                                       EnumType;                                                   // 0x0048   (0x0008)  
};

/// Class /Script/AIModule.BlackboardKeyType_Object
/// Size: 0x0008 (0x000038 - 0x000040)
class UBlackboardKeyType_Object : public UBlackboardKeyType
{ 
public:
	class UClass*                                      BaseClass;                                                  // 0x0038   (0x0008)  
};

/// Class /Script/AIModule.BlackboardKeyType_Rotator
/// Size: 0x0000 (0x000038 - 0x000038)
class UBlackboardKeyType_Rotator : public UBlackboardKeyType
{ 
public:
};

/// Class /Script/AIModule.BlackboardKeyType_String
/// Size: 0x0010 (0x000038 - 0x000048)
class UBlackboardKeyType_String : public UBlackboardKeyType
{ 
public:
	SDK_UNDEFINED(16,899) /* FString */                __um(StringValue);                                          // 0x0038   (0x0010)  
};

/// Class /Script/AIModule.BlackboardKeyType_Vector
/// Size: 0x0000 (0x000038 - 0x000038)
class UBlackboardKeyType_Vector : public UBlackboardKeyType
{ 
public:
};

/// Struct /Script/AIModule.BTCompositeChild
/// Size: 0x0030 (0x000000 - 0x000030)
struct FBTCompositeChild
{ 
	class UBTCompositeNode*                            ChildComposite;                                             // 0x0000   (0x0008)  
	class UBTTaskNode*                                 ChildTask;                                                  // 0x0008   (0x0008)  
	TArray<class UBTDecorator*>                        Decorators;                                                 // 0x0010   (0x0010)  
	TArray<FBTDecoratorLogic>                          DecoratorOps;                                               // 0x0020   (0x0010)  
};

/// Class /Script/AIModule.BTCompositeNode
/// Size: 0x0038 (0x000060 - 0x000098)
class UBTCompositeNode : public UBTNode
{ 
public:
	TArray<FBTCompositeChild>                          Children;                                                   // 0x0060   (0x0010)  
	TArray<class UBTService*>                          Services;                                                   // 0x0070   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0080   (0x0010)  MISSED
	bool                                               bApplyDecoratorScope : 1;                                   // 0x0090:0 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0091   (0x0007)  MISSED
};

/// Class /Script/AIModule.BTComposite_Selector
/// Size: 0x0000 (0x000098 - 0x000098)
class UBTComposite_Selector : public UBTCompositeNode
{ 
public:
};

/// Class /Script/AIModule.BTComposite_Sequence
/// Size: 0x0000 (0x000098 - 0x000098)
class UBTComposite_Sequence : public UBTCompositeNode
{ 
public:
};

/// Class /Script/AIModule.BTComposite_SimpleParallel
/// Size: 0x0008 (0x000098 - 0x0000A0)
class UBTComposite_SimpleParallel : public UBTCompositeNode
{ 
public:
	SDK_UNDEFINED(1,900) /* TEnumAsByte<EBTParallelMode> */ __um(FinishMode);                                      // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Class /Script/AIModule.BTDecorator_Blackboard
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{ 
public:
	int32_t                                            IntValue;                                                   // 0x00A0   (0x0004)  
	float                                              FloatValue;                                                 // 0x00A4   (0x0004)  
	SDK_UNDEFINED(16,901) /* FString */                __um(StringValue);                                          // 0x00A8   (0x0010)  
	SDK_UNDEFINED(16,902) /* FString */                __um(CachedDescription);                                    // 0x00B8   (0x0010)  
	char                                               OperationType;                                              // 0x00C8   (0x0001)  
	SDK_UNDEFINED(1,903) /* TEnumAsByte<EBTBlackboardRestart> */ __um(NotifyObserver);                             // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00CA   (0x0006)  MISSED
};

/// Class /Script/AIModule.BTDecorator_BlueprintBase
/// Size: 0x0038 (0x000070 - 0x0000A8)
class UBTDecorator_BlueprintBase : public UBTDecorator
{ 
public:
	class AAIController*                               AIOwner;                                                    // 0x0070   (0x0008)  
	class AActor*                                      ActorOwner;                                                 // 0x0078   (0x0008)  
	TArray<FName>                                      ObservedKeyNames;                                           // 0x0080   (0x0010)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0090   (0x0010)  MISSED
	bool                                               bShowPropertyDetails : 1;                                   // 0x00A0:0 (0x0001)  
	bool                                               bCheckConditionOnlyBlackBoardChanges : 1;                   // 0x00A0:1 (0x0001)  
	bool                                               bIsObservingBB : 1;                                         // 0x00A0:2 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00A1   (0x0007)  MISSED


	/// Functions
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
	// void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);            // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveTick
	// void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);                                                       // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
	// void ReceiveObserverDeactivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);                 // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
	// void ReceiveObserverDeactivated(class AActor* OwnerActor);                                                            // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
	// void ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);                   // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
	// void ReceiveObserverActivated(class AActor* OwnerActor);                                                              // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
	// void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);                      // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
	// void ReceiveExecutionStart(class AActor* OwnerActor);                                                                 // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
	// void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<EBTNodeResult> NodeResult); // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
	// void ReceiveExecutionFinish(class AActor* OwnerActor, TEnumAsByte<EBTNodeResult> NodeResult);                         // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
	// bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);                      // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
	// bool PerformConditionCheck(class AActor* OwnerActor);                                                                 // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
	// bool IsDecoratorObserverActive();                                                                                     // [0x853e430] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
	// bool IsDecoratorExecutionActive();                                                                                    // [0x853e400] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.BTDecorator_CheckGameplayTagsOnActor
/// Size: 0x0068 (0x000070 - 0x0000D8)
class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
{ 
public:
	FBlackboardKeySelector                             ActorToCheck;                                               // 0x0070   (0x0030)  
	EGameplayContainerMatchType                        TagsToMatch;                                                // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00A1   (0x0007)  MISSED
	FGameplayTagContainer                              GameplayTags;                                               // 0x00A8   (0x0020)  
	SDK_UNDEFINED(16,904) /* FString */                __um(CachedDescription);                                    // 0x00C8   (0x0010)  
};

/// Class /Script/AIModule.BTDecorator_ConditionalLoop
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UBTDecorator_ConditionalLoop : public UBTDecorator_Blackboard
{ 
public:
};

/// Class /Script/AIModule.BTDecorator_ConeCheck
/// Size: 0x00A0 (0x000070 - 0x000110)
class UBTDecorator_ConeCheck : public UBTDecorator
{ 
public:
	float                                              ConeHalfAngle;                                              // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	FBlackboardKeySelector                             ConeOrigin;                                                 // 0x0078   (0x0030)  
	FBlackboardKeySelector                             ConeDirection;                                              // 0x00A8   (0x0030)  
	FBlackboardKeySelector                             Observed;                                                   // 0x00D8   (0x0030)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0108   (0x0008)  MISSED
};

/// Class /Script/AIModule.BTDecorator_Cooldown
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTDecorator_Cooldown : public UBTDecorator
{ 
public:
	float                                              cooldownTime;                                               // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/AIModule.BTDecorator_DoesPathExist
/// Size: 0x0070 (0x000070 - 0x0000E0)
class UBTDecorator_DoesPathExist : public UBTDecorator
{ 
public:
	FBlackboardKeySelector                             BlackboardKeyA;                                             // 0x0070   (0x0030)  
	FBlackboardKeySelector                             BlackboardKeyB;                                             // 0x00A0   (0x0030)  
	bool                                               bUseSelf : 1;                                               // 0x00D0:0 (0x0001)  
	unsigned char                                      UnknownData00_4[0x3];                                       // 0x00D1   (0x0003)  MISSED
	SDK_UNDEFINED(1,905) /* TEnumAsByte<EPathExistanceQueryType> */ __um(PathQueryType);                           // 0x00D4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00D5   (0x0003)  MISSED
	class UClass*                                      FilterClass;                                                // 0x00D8   (0x0008)  
};

/// Class /Script/AIModule.BTDecorator_ForceSuccess
/// Size: 0x0000 (0x000070 - 0x000070)
class UBTDecorator_ForceSuccess : public UBTDecorator
{ 
public:
};

/// Class /Script/AIModule.BTDecorator_IsAtLocation
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
{ 
public:
	float                                              AcceptableRadius;                                           // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00A4   (0x0004)  MISSED
	FAIDataProviderFloatValue                          ParametrizedAcceptableRadius;                               // 0x00A8   (0x0040)  
	FAIDistanceType                                    GeometricDistanceType;                                      // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00E9   (0x0003)  MISSED
	bool                                               bUseParametrizedRadius : 1;                                 // 0x00EC:0 (0x0001)  
	bool                                               bUseNavAgentGoalLocation : 1;                               // 0x00EC:1 (0x0001)  
	bool                                               bPathFindingBasedTest : 1;                                  // 0x00EC:2 (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00ED   (0x0003)  MISSED
};

/// Class /Script/AIModule.BTDecorator_KeepInCone
/// Size: 0x0070 (0x000070 - 0x0000E0)
class UBTDecorator_KeepInCone : public UBTDecorator
{ 
public:
	float                                              ConeHalfAngle;                                              // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0074   (0x0004)  MISSED
	FBlackboardKeySelector                             ConeOrigin;                                                 // 0x0078   (0x0030)  
	FBlackboardKeySelector                             Observed;                                                   // 0x00A8   (0x0030)  
	bool                                               bUseSelfAsOrigin : 1;                                       // 0x00D8:0 (0x0001)  
	bool                                               bUseSelfAsObserved : 1;                                     // 0x00D8:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00D9   (0x0007)  MISSED
};

/// Class /Script/AIModule.BTDecorator_Loop
/// Size: 0x0010 (0x000070 - 0x000080)
class UBTDecorator_Loop : public UBTDecorator
{ 
public:
	int32_t                                            NumLoops;                                                   // 0x0070   (0x0004)  
	bool                                               bInfiniteLoop;                                              // 0x0074   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0075   (0x0003)  MISSED
	float                                              InfiniteLoopTimeoutTime;                                    // 0x0078   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Class /Script/AIModule.BTDecorator_ReachedMoveGoal
/// Size: 0x0000 (0x000070 - 0x000070)
class UBTDecorator_ReachedMoveGoal : public UBTDecorator
{ 
public:
};

/// Class /Script/AIModule.BTDecorator_SetTagCooldown
/// Size: 0x0018 (0x000070 - 0x000088)
class UBTDecorator_SetTagCooldown : public UBTDecorator
{ 
public:
	FGameplayTag                                       CooldownTag;                                                // 0x0070   (0x000C)  
	float                                              CooldownDuration;                                           // 0x007C   (0x0004)  
	bool                                               bAddToExistingDuration;                                     // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0081   (0x0007)  MISSED
};

/// Class /Script/AIModule.BTDecorator_TagCooldown
/// Size: 0x0018 (0x000070 - 0x000088)
class UBTDecorator_TagCooldown : public UBTDecorator
{ 
public:
	FGameplayTag                                       CooldownTag;                                                // 0x0070   (0x000C)  
	float                                              CooldownDuration;                                           // 0x007C   (0x0004)  
	bool                                               bAddToExistingDuration;                                     // 0x0080   (0x0001)  
	bool                                               bActivatesCooldown;                                         // 0x0081   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0082   (0x0006)  MISSED
};

/// Class /Script/AIModule.BTFunctionLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UBTFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AIModule.BTFunctionLibrary.StopUsingExternalEvent
	// void StopUsingExternalEvent(class UBTNode* NodeOwner);                                                                // [0x80de530] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.StartUsingExternalEvent
	// void StartUsingExternalEvent(class UBTNode* NodeOwner, class AActor* OwningActor);                                    // [0x818c0b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
	// void SetBlackboardValueAsVector(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, FVector value);                // [0x853f040] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsString
	// void SetBlackboardValueAsString(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, FString value);                // [0x853eeb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
	// void SetBlackboardValueAsRotator(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, FRotator value);              // [0x853ed60] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
	// void SetBlackboardValueAsObject(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, class UObject* value);         // [0x853ec20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsName
	// void SetBlackboardValueAsName(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, FName value);                    // [0x853ead0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
	// void SetBlackboardValueAsInt(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, int32_t value);                   // [0x853e990] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
	// void SetBlackboardValueAsFloat(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, float value);                   // [0x853e840] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
	// void SetBlackboardValueAsEnum(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, char value);                     // [0x853e6f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
	// void SetBlackboardValueAsClass(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, class UClass* value);           // [0x853e5b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
	// void SetBlackboardValueAsBool(class UBTNode* NodeOwner, FBlackboardKeySelector& Key, bool value);                     // [0x853e460] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.GetOwnersBlackboard
	// class UBlackboardComponent* GetOwnersBlackboard(class UBTNode* NodeOwner);                                            // [0x853e370] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetOwnerComponent
	// class UBehaviorTreeComponent* GetOwnerComponent(class UBTNode* NodeOwner);                                            // [0x853e2e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
	// FVector GetBlackboardValueAsVector(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                            // [0x853e1c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsString
	// FString GetBlackboardValueAsString(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                            // [0x853e070] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
	// FRotator GetBlackboardValueAsRotator(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                          // [0x853df50] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
	// class UObject* GetBlackboardValueAsObject(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                     // [0x853de50] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsName
	// FName GetBlackboardValueAsName(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                // [0x853dd30] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
	// int32_t GetBlackboardValueAsInt(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                               // [0x853dc30] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
	// float GetBlackboardValueAsFloat(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                               // [0x853db30] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
	// char GetBlackboardValueAsEnum(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                 // [0x853da30] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
	// class UClass* GetBlackboardValueAsClass(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                       // [0x853d930] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
	// bool GetBlackboardValueAsBool(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                 // [0x853d830] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
	// class AActor* GetBlackboardValueAsActor(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                       // [0x853d730] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
	// void ClearBlackboardValueAsVector(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                             // [0x853d640] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.ClearBlackboardValue
	// void ClearBlackboardValue(class UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                     // [0x853d640] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AIModule.BTService_DefaultFocus
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UBTService_DefaultFocus : public UBTService_BlackboardBase
{ 
public:
	char                                               FocusPriority;                                              // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Class /Script/AIModule.BTTask_FinishWithResult
/// Size: 0x0008 (0x000078 - 0x000080)
class UBTTask_FinishWithResult : public UBTTaskNode
{ 
public:
	SDK_UNDEFINED(1,906) /* TEnumAsByte<EBTNodeResult> */ __um(Result);                                            // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Class /Script/AIModule.BTTask_GameplayTaskBase
/// Size: 0x0008 (0x000078 - 0x000080)
class UBTTask_GameplayTaskBase : public UBTTaskNode
{ 
public:
	bool                                               bWaitForGameplayTask : 1;                                   // 0x0078:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Class /Script/AIModule.BTTask_MakeNoise
/// Size: 0x0008 (0x000078 - 0x000080)
class UBTTask_MakeNoise : public UBTTaskNode
{ 
public:
	float                                              Loudnes;                                                    // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Class /Script/AIModule.BTTask_PawnActionBase
/// Size: 0x0000 (0x000078 - 0x000078)
class UBTTask_PawnActionBase : public UBTTaskNode
{ 
public:
};

/// Class /Script/AIModule.BTTask_PlayAnimation
/// Size: 0x0040 (0x000078 - 0x0000B8)
class UBTTask_PlayAnimation : public UBTTaskNode
{ 
public:
	class UAnimationAsset*                             AnimationToPlay;                                            // 0x0078   (0x0008)  
	bool                                               bLooping : 1;                                               // 0x0080:0 (0x0001)  
	bool                                               bNonBlocking : 1;                                           // 0x0080:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0081   (0x0007)  MISSED
	class UBehaviorTreeComponent*                      MyOwnerComp;                                                // 0x0088   (0x0008)  
	class USkeletalMeshComponent*                      CachedSkelMesh;                                             // 0x0090   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0098   (0x0020)  MISSED
};

/// Class /Script/AIModule.BTTask_PlaySound
/// Size: 0x0008 (0x000078 - 0x000080)
class UBTTask_PlaySound : public UBTTaskNode
{ 
public:
	class USoundCue*                                   SoundToPlay;                                                // 0x0078   (0x0008)  
};

/// Class /Script/AIModule.BTTask_PushPawnAction
/// Size: 0x0008 (0x000078 - 0x000080)
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
{ 
public:
	class UPawnAction*                                 Action;                                                     // 0x0078   (0x0008)  
};

/// Class /Script/AIModule.BTTask_RotateToFaceBBEntry
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
{ 
public:
	float                                              Precision;                                                  // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Class /Script/AIModule.BTTask_RunBehavior
/// Size: 0x0008 (0x000078 - 0x000080)
class UBTTask_RunBehavior : public UBTTaskNode
{ 
public:
	class UBehaviorTree*                               BehaviorAsset;                                              // 0x0078   (0x0008)  
};

/// Class /Script/AIModule.BTTask_RunBehaviorDynamic
/// Size: 0x0020 (0x000078 - 0x000098)
class UBTTask_RunBehaviorDynamic : public UBTTaskNode
{ 
public:
	FGameplayTag                                       InjectionTag;                                               // 0x0078   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0084   (0x0004)  MISSED
	class UBehaviorTree*                               DefaultBehaviorAsset;                                       // 0x0088   (0x0008)  
	class UBehaviorTree*                               BehaviorAsset;                                              // 0x0090   (0x0008)  
};

/// Struct /Script/AIModule.EnvNamedValue
/// Size: 0x0014 (0x000000 - 0x000014)
struct FEnvNamedValue
{ 
	FName                                              ParamName;                                                  // 0x0000   (0x000C)  
	EAIParamType                                       ParamType;                                                  // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              value;                                                      // 0x0010   (0x0004)  
};

/// Class /Script/AIModule.BTTask_RunEQSQuery
/// Size: 0x00C8 (0x0000A8 - 0x000170)
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{ 
public:
	class UEnvQuery*                                   QueryTemplate;                                              // 0x00A8   (0x0008)  
	TArray<FEnvNamedValue>                             QueryParams;                                                // 0x00B0   (0x0010)  
	TArray<FAIDynamicParam>                            QueryConfig;                                                // 0x00C0   (0x0010)  
	SDK_UNDEFINED(1,907) /* TEnumAsByte<EEnvQueryRunMode> */ __um(RunMode);                                        // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00D1   (0x0007)  MISSED
	FBlackboardKeySelector                             EQSQueryBlackboardKey;                                      // 0x00D8   (0x0030)  
	bool                                               bUseBBKey;                                                  // 0x0108   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0109   (0x0007)  MISSED
	FEQSParametrizedQueryExecutionRequest              EQSRequest;                                                 // 0x0110   (0x0050)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x0160   (0x0010)  MISSED
};

/// Class /Script/AIModule.BTTask_SetTagCooldown
/// Size: 0x0018 (0x000078 - 0x000090)
class UBTTask_SetTagCooldown : public UBTTaskNode
{ 
public:
	FGameplayTag                                       CooldownTag;                                                // 0x0078   (0x000C)  
	bool                                               bAddToExistingDuration;                                     // 0x0084   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0085   (0x0003)  MISSED
	float                                              CooldownDuration;                                           // 0x0088   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Class /Script/AIModule.BTTask_WaitBlackboardTime
/// Size: 0x0030 (0x000080 - 0x0000B0)
class UBTTask_WaitBlackboardTime : public UBTTask_Wait
{ 
public:
	FBlackboardKeySelector                             BlackboardKey;                                              // 0x0080   (0x0030)  
};

/// Class /Script/AIModule.CrowdAgentInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UCrowdAgentInterface : public UInterface
{ 
public:
};

/// Class /Script/AIModule.CrowdFollowingComponent
/// Size: 0x0048 (0x000258 - 0x0002A0)
class UCrowdFollowingComponent : public UPathFollowingComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0258   (0x0018)  MISSED
	FVector                                            CrowdAgentMoveDirection;                                    // 0x0270   (0x000C)  
	unsigned char                                      UnknownData01_6[0x24];                                      // 0x027C   (0x0024)  MISSED


	/// Functions
	// Function /Script/AIModule.CrowdFollowingComponent.SuspendCrowdSteering
	// void SuspendCrowdSteering(bool bSuspend);                                                                             // [0x8542b80] Native|Public|BlueprintCallable 
};

/// Struct /Script/AIModule.CrowdAvoidanceConfig
/// Size: 0x001C (0x000000 - 0x00001C)
struct FCrowdAvoidanceConfig
{ 
	float                                              VelocityBias;                                               // 0x0000   (0x0004)  
	float                                              DesiredVelocityWeight;                                      // 0x0004   (0x0004)  
	float                                              CurrentVelocityWeight;                                      // 0x0008   (0x0004)  
	float                                              SideBiasWeight;                                             // 0x000C   (0x0004)  
	float                                              ImpactTimeWeight;                                           // 0x0010   (0x0004)  
	float                                              ImpactTimeRange;                                            // 0x0014   (0x0004)  
	char                                               CustomPatternIdx;                                           // 0x0018   (0x0001)  
	char                                               AdaptiveDivisions;                                          // 0x0019   (0x0001)  
	char                                               AdaptiveRings;                                              // 0x001A   (0x0001)  
	char                                               AdaptiveDepth;                                              // 0x001B   (0x0001)  
};

/// Struct /Script/AIModule.CrowdAvoidanceSamplingPattern
/// Size: 0x0020 (0x000000 - 0x000020)
struct FCrowdAvoidanceSamplingPattern
{ 
	TArray<float>                                      Angles;                                                     // 0x0000   (0x0010)  
	TArray<float>                                      Radii;                                                      // 0x0010   (0x0010)  
};

/// Class /Script/AIModule.CrowdManager
/// Size: 0x00C8 (0x000030 - 0x0000F8)
class UCrowdManager : public UCrowdManagerBase
{ 
public:
	class ANavigationData*                             MyNavData;                                                  // 0x0030   (0x0008)  
	TArray<FCrowdAvoidanceConfig>                      AvoidanceConfig;                                            // 0x0038   (0x0010)  
	TArray<FCrowdAvoidanceSamplingPattern>             SamplingPatterns;                                           // 0x0048   (0x0010)  
	int32_t                                            MaxAgents;                                                  // 0x0058   (0x0004)  
	float                                              MaxAgentRadius;                                             // 0x005C   (0x0004)  
	int32_t                                            MaxAvoidedAgents;                                           // 0x0060   (0x0004)  
	int32_t                                            MaxAvoidedWalls;                                            // 0x0064   (0x0004)  
	float                                              NavmeshCheckInterval;                                       // 0x0068   (0x0004)  
	float                                              PathOptimizationInterval;                                   // 0x006C   (0x0004)  
	float                                              SeparationDirClamp;                                         // 0x0070   (0x0004)  
	float                                              PathOffsetRadiusMultiplier;                                 // 0x0074   (0x0004)  
	unsigned char                                      UnknownBit00 : 1;                                           // 0x0078:0 (0x0001)  MISSED
	unsigned char                                      UnknownBit01 : 1;                                           // 0x0078:1 (0x0001)  MISSED
	unsigned char                                      UnknownBit02 : 1;                                           // 0x0078:2 (0x0001)  MISSED
	unsigned char                                      UnknownBit03 : 1;                                           // 0x0078:3 (0x0001)  MISSED
	bool                                               bResolveCollisions : 1;                                     // 0x0078:4 (0x0001)  
	unsigned char                                      UnknownData04_6[0x7F];                                      // 0x0079   (0x007F)  MISSED
};

/// Class /Script/AIModule.DetourCrowdAIController
/// Size: 0x0000 (0x000340 - 0x000340)
class ADetourCrowdAIController : public AAIController
{ 
public:
};

/// Class /Script/AIModule.EnvQuery
/// Size: 0x0020 (0x000038 - 0x000058)
class UEnvQuery : public UDataAsset
{ 
public:
	FName                                              QueryName;                                                  // 0x0038   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	TArray<class UEnvQueryOption*>                     Options;                                                    // 0x0048   (0x0010)  
};

/// Class /Script/AIModule.EnvQueryContext_BlueprintBase
/// Size: 0x0008 (0x000030 - 0x000038)
class UEnvQueryContext_BlueprintBase : public UEnvQueryContext
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED


	/// Functions
	// Function /Script/AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
	// void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, FVector& ResultingLocation);     // [0x61d2f50] Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const 
	// Function /Script/AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
	// void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor*& ResultingActor);     // [0x61d2f50] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
	// void ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<FVector>& ResultingLocationSet); // [0x61d2f50] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
	// void ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<AActor*>& ResultingActorsSet); // [0x61d2f50] Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/AIModule.EnvQueryContext_Item
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryContext_Item : public UEnvQueryContext
{ 
public:
};

/// Class /Script/AIModule.EnvQueryContext_Querier
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryContext_Querier : public UEnvQueryContext
{ 
public:
};

/// Class /Script/AIModule.EnvQueryDebugHelpers
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryDebugHelpers : public UObject
{ 
public:
};

/// Class /Script/AIModule.EnvQueryGenerator
/// Size: 0x0020 (0x000038 - 0x000058)
class UEnvQueryGenerator : public UEnvQueryNode
{ 
public:
	SDK_UNDEFINED(16,908) /* FString */                __um(OptionName);                                           // 0x0038   (0x0010)  
	class UClass*                                      ItemType;                                                   // 0x0048   (0x0008)  
	bool                                               bAutoSortTests : 1;                                         // 0x0050:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Class /Script/AIModule.EnvQueryGenerator_ActorsOfClass
/// Size: 0x0090 (0x000058 - 0x0000E8)
class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{ 
public:
	class UClass*                                      SearchedActorClass;                                         // 0x0058   (0x0008)  
	FAIDataProviderBoolValue                           GenerateOnlyActorsInRadius;                                 // 0x0060   (0x0040)  
	FAIDataProviderFloatValue                          SearchRadius;                                               // 0x00A0   (0x0040)  
	class UClass*                                      SearchCenter;                                               // 0x00E0   (0x0008)  
};

/// Class /Script/AIModule.EnvQueryGenerator_BlueprintBase
/// Size: 0x0030 (0x000058 - 0x000088)
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{ 
public:
	SDK_UNDEFINED(24,909) /* FText */                  __um(GeneratorsActionDescription);                          // 0x0058   (0x0018)  
	class UClass*                                      Context;                                                    // 0x0070   (0x0008)  
	class UClass*                                      GeneratedItemType;                                          // 0x0078   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0080   (0x0008)  MISSED


	/// Functions
	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
	// class UObject* GetQuerier();                                                                                          // [0x8546d80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
	// void DoItemGeneration(TArray<FVector>& ContextLocations);                                                             // [0x61d2f50] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
	// void AddGeneratedVector(FVector GeneratedVector);                                                                     // [0x8546c50] Final|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
	// void AddGeneratedActor(class AActor* GeneratedActor);                                                                 // [0x8546bc0] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/AIModule.EnvQueryGenerator_Composite
/// Size: 0x0020 (0x000058 - 0x000078)
class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
{ 
public:
	TArray<class UEnvQueryGenerator*>                  generators;                                                 // 0x0058   (0x0010)  
	bool                                               bAllowDifferentItemTypes : 1;                               // 0x0068:0 (0x0001)  
	bool                                               bHasMatchingItemType : 1;                                   // 0x0068:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x7];                                       // 0x0069   (0x0007)  MISSED
	class UClass*                                      ForcedItemType;                                             // 0x0070   (0x0008)  
};

/// Struct /Script/AIModule.EnvTraceData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FEnvTraceData
{ 
	int32_t                                            VersionNum;                                                 // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UClass*                                      NavigationFilter;                                           // 0x0008   (0x0008)  
	float                                              ProjectDown;                                                // 0x0010   (0x0004)  
	float                                              ProjectUp;                                                  // 0x0014   (0x0004)  
	float                                              ExtentX;                                                    // 0x0018   (0x0004)  
	float                                              ExtentY;                                                    // 0x001C   (0x0004)  
	float                                              ExtentZ;                                                    // 0x0020   (0x0004)  
	float                                              PostProjectionVerticalOffset;                               // 0x0024   (0x0004)  
	SDK_UNDEFINED(1,910) /* TEnumAsByte<ETraceTypeQuery> */ __um(TraceChannel);                                    // 0x0028   (0x0001)  
	SDK_UNDEFINED(1,911) /* TEnumAsByte<ECollisionChannel> */ __um(SerializedChannel);                             // 0x0029   (0x0001)  
	SDK_UNDEFINED(1,912) /* TEnumAsByte<EEnvTraceShape> */ __um(TraceShape);                                       // 0x002A   (0x0001)  
	SDK_UNDEFINED(1,913) /* TEnumAsByte<EEnvQueryTrace> */ __um(TraceMode);                                        // 0x002B   (0x0001)  
	bool                                               bTraceComplex : 1;                                          // 0x002C:0 (0x0001)  
	bool                                               bOnlyBlockingHits : 1;                                      // 0x002C:1 (0x0001)  
	bool                                               bCanTraceOnNavMesh : 1;                                     // 0x002C:2 (0x0001)  
	bool                                               bCanTraceOnGeometry : 1;                                    // 0x002C:3 (0x0001)  
	bool                                               bCanDisableTrace : 1;                                       // 0x002C:4 (0x0001)  
	bool                                               bCanProjectDown : 1;                                        // 0x002C:5 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Class /Script/AIModule.EnvQueryGenerator_ProjectedPoints
/// Size: 0x0030 (0x000058 - 0x000088)
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{ 
public:
	FEnvTraceData                                      ProjectionData;                                             // 0x0058   (0x0030)  
};

/// Class /Script/AIModule.EnvQueryGenerator_Cone
/// Size: 0x0110 (0x000088 - 0x000198)
class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints
{ 
public:
	FAIDataProviderFloatValue                          AlignedPointsDistance;                                      // 0x0088   (0x0040)  
	FAIDataProviderFloatValue                          ConeDegrees;                                                // 0x00C8   (0x0040)  
	FAIDataProviderFloatValue                          AngleStep;                                                  // 0x0108   (0x0040)  
	FAIDataProviderFloatValue                          Range;                                                      // 0x0148   (0x0040)  
	class UClass*                                      CenterActor;                                                // 0x0188   (0x0008)  
	bool                                               bIncludeContextLocation : 1;                                // 0x0190:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0191   (0x0007)  MISSED
};

/// Class /Script/AIModule.EnvQueryGenerator_CurrentLocation
/// Size: 0x0008 (0x000058 - 0x000060)
class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator
{ 
public:
	class UClass*                                      QueryContext;                                               // 0x0058   (0x0008)  
};

/// Struct /Script/AIModule.AIDataProviderIntValue
/// Size: 0x0008 (0x000038 - 0x000040)
struct FAIDataProviderIntValue : FAIDataProviderTypedValue
{ 
	int32_t                                            defaultValue;                                               // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/AIModule.EnvDirection
/// Size: 0x0020 (0x000000 - 0x000020)
struct FEnvDirection
{ 
	class UClass*                                      LineFrom;                                                   // 0x0000   (0x0008)  
	class UClass*                                      LineTo;                                                     // 0x0008   (0x0008)  
	class UClass*                                      Rotation;                                                   // 0x0010   (0x0008)  
	SDK_UNDEFINED(1,914) /* TEnumAsByte<EEnvDirection> */ __um(DirMode);                                           // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Class /Script/AIModule.EnvQueryGenerator_Donut
/// Size: 0x0178 (0x000088 - 0x000200)
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{ 
public:
	FAIDataProviderFloatValue                          InnerRadius;                                                // 0x0088   (0x0040)  
	FAIDataProviderFloatValue                          OuterRadius;                                                // 0x00C8   (0x0040)  
	FAIDataProviderIntValue                            NumberOfRings;                                              // 0x0108   (0x0040)  
	FAIDataProviderIntValue                            PointsPerRing;                                              // 0x0148   (0x0040)  
	FEnvDirection                                      ArcDirection;                                               // 0x0188   (0x0020)  
	FAIDataProviderFloatValue                          ArcAngle;                                                   // 0x01A8   (0x0040)  
	bool                                               bUseSpiralPattern;                                          // 0x01E8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x01E9   (0x0007)  MISSED
	class UClass*                                      Center;                                                     // 0x01F0   (0x0008)  
	bool                                               bDefineArc : 1;                                             // 0x01F8:0 (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x01F9   (0x0007)  MISSED
};

/// Class /Script/AIModule.EnvQueryGenerator_OnCircle
/// Size: 0x01B8 (0x000088 - 0x000240)
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{ 
public:
	FAIDataProviderFloatValue                          CircleRadius;                                               // 0x0088   (0x0040)  
	FAIDataProviderFloatValue                          SpaceBetween;                                               // 0x00C8   (0x0040)  
	FAIDataProviderIntValue                            NumberOfPoints;                                             // 0x0108   (0x0040)  
	EPointOnCircleSpacingMethod                        PointOnCircleSpacingMethod;                                 // 0x0148   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0149   (0x0007)  MISSED
	FEnvDirection                                      ArcDirection;                                               // 0x0150   (0x0020)  
	FAIDataProviderFloatValue                          ArcAngle;                                                   // 0x0170   (0x0040)  
	float                                              AngleRadians;                                               // 0x01B0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x01B4   (0x0004)  MISSED
	class UClass*                                      CircleCenter;                                               // 0x01B8   (0x0008)  
	bool                                               bIgnoreAnyContextActorsWhenGeneratingCircle;                // 0x01C0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x01C1   (0x0007)  MISSED
	FAIDataProviderFloatValue                          CircleCenterZOffset;                                        // 0x01C8   (0x0040)  
	FEnvTraceData                                      TraceData;                                                  // 0x0208   (0x0030)  
	bool                                               bDefineArc : 1;                                             // 0x0238:0 (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0239   (0x0007)  MISSED
};

/// Class /Script/AIModule.EnvQueryGenerator_SimpleGrid
/// Size: 0x0088 (0x000088 - 0x000110)
class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{ 
public:
	FAIDataProviderFloatValue                          GridSize;                                                   // 0x0088   (0x0040)  
	FAIDataProviderFloatValue                          SpaceBetween;                                               // 0x00C8   (0x0040)  
	class UClass*                                      GenerateAround;                                             // 0x0108   (0x0008)  
};

/// Class /Script/AIModule.EnvQueryGenerator_PathingGrid
/// Size: 0x0088 (0x000110 - 0x000198)
class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
{ 
public:
	FAIDataProviderBoolValue                           PathToItem;                                                 // 0x0110   (0x0040)  
	class UClass*                                      NavigationFilter;                                           // 0x0150   (0x0008)  
	FAIDataProviderFloatValue                          ScanRangeMultiplier;                                        // 0x0158   (0x0040)  
};

/// Class /Script/AIModule.EnvQueryInstanceBlueprintWrapper
/// Size: 0x0050 (0x000030 - 0x000080)
class UEnvQueryInstanceBlueprintWrapper : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0030   (0x0008)  MISSED
	int32_t                                            QueryID;                                                    // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_5[0x24];                                      // 0x003C   (0x0024)  MISSED
	class UClass*                                      ItemType;                                                   // 0x0060   (0x0008)  
	int32_t                                            OptionIndex;                                                // 0x0068   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	SDK_UNDEFINED(16,915) /* FMulticastInlineDelegate */ __um(OnQueryFinishedEvent);                               // 0x0070   (0x0010)  


	/// Functions
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam
	// void SetNamedParam(FName ParamName, float value);                                                                     // [0x85471c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
	// TArray<FVector> GetResultsAsLocations();                                                                              // [0x8546fb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
	// TArray<AActor*> GetResultsAsActors();                                                                                 // [0x8546f30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations
	// bool GetQueryResultsAsLocations(TArray<FVector>& ResultLocations);                                                    // [0x8546e70] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors
	// bool GetQueryResultsAsActors(TArray<AActor*>& ResultActors);                                                          // [0x8546db0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
	// float GetItemScore(int32_t itemIndex);                                                                                // [0x8546ce0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
	// void EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus); // [0x61d2f50] MulticastDelegate|Public|Delegate 
};

/// Class /Script/AIModule.EnvQueryItemType
/// Size: 0x0008 (0x000030 - 0x000038)
class UEnvQueryItemType : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/AIModule.EnvQueryItemType_VectorBase
/// Size: 0x0000 (0x000038 - 0x000038)
class UEnvQueryItemType_VectorBase : public UEnvQueryItemType
{ 
public:
};

/// Class /Script/AIModule.EnvQueryItemType_ActorBase
/// Size: 0x0000 (0x000038 - 0x000038)
class UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase
{ 
public:
};

/// Class /Script/AIModule.EnvQueryItemType_Actor
/// Size: 0x0000 (0x000038 - 0x000038)
class UEnvQueryItemType_Actor : public UEnvQueryItemType_ActorBase
{ 
public:
};

/// Class /Script/AIModule.EnvQueryItemType_Direction
/// Size: 0x0000 (0x000038 - 0x000038)
class UEnvQueryItemType_Direction : public UEnvQueryItemType_VectorBase
{ 
public:
};

/// Class /Script/AIModule.EnvQueryItemType_Point
/// Size: 0x0000 (0x000038 - 0x000038)
class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase
{ 
public:
};

/// Struct /Script/AIModule.EnvQueryInstanceCache
/// Size: 0x0188 (0x000000 - 0x000188)
struct FEnvQueryInstanceCache
{ 
	class UEnvQuery*                                   Template;                                                   // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x180];                                     // 0x0008   (0x0180)  MISSED
};

/// Class /Script/AIModule.EnvQueryManager
/// Size: 0x0108 (0x000040 - 0x000148)
class UEnvQueryManager : public UAISubsystem
{ 
public:
	unsigned char                                      UnknownData00_2[0x70];                                      // 0x0040   (0x0070)  MISSED
	TArray<FEnvQueryInstanceCache>                     InstanceCache;                                              // 0x00B0   (0x0010)  
	TArray<class UEnvQueryContext*>                    LocalContexts;                                              // 0x00C0   (0x0010)  
	TArray<class UEnvQueryInstanceBlueprintWrapper*>   GCShieldedWrappers;                                         // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData01_5[0x54];                                      // 0x00E0   (0x0054)  MISSED
	float                                              MaxAllowedTestingTime;                                      // 0x0134   (0x0004)  
	bool                                               bTestQueriesUsingBreadth;                                   // 0x0138   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0139   (0x0003)  MISSED
	int32_t                                            QueryCountWarningThreshold;                                 // 0x013C   (0x0004)  
	double                                             QueryCountWarningInterval;                                  // 0x0140   (0x0008)  


	/// Functions
	// Function /Script/AIModule.EnvQueryManager.RunEQSQuery
	// class UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(class UObject* WorldContextObject, class UEnvQuery* QueryTemplate, class UObject* Querier, TEnumAsByte<EEnvQueryRunMode> RunMode, class UClass* WrapperClass); // [0x8547030] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AIModule.EnvQueryOption
/// Size: 0x0018 (0x000030 - 0x000048)
class UEnvQueryOption : public UObject
{ 
public:
	class UEnvQueryGenerator*                          Generator;                                                  // 0x0030   (0x0008)  
	TArray<class UEnvQueryTest*>                       Tests;                                                      // 0x0038   (0x0010)  
};

/// Class /Script/AIModule.EnvQueryTest_Distance
/// Size: 0x0010 (0x000238 - 0x000248)
class UEnvQueryTest_Distance : public UEnvQueryTest
{ 
public:
	SDK_UNDEFINED(1,916) /* TEnumAsByte<EEnvTestDistance> */ __um(TestMode);                                       // 0x0238   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0239   (0x0007)  MISSED
	class UClass*                                      DistanceTo;                                                 // 0x0240   (0x0008)  
};

/// Class /Script/AIModule.EnvQueryTest_Dot
/// Size: 0x0048 (0x000238 - 0x000280)
class UEnvQueryTest_Dot : public UEnvQueryTest
{ 
public:
	FEnvDirection                                      LineA;                                                      // 0x0238   (0x0020)  
	FEnvDirection                                      LineB;                                                      // 0x0258   (0x0020)  
	EEnvTestDot                                        TestMode;                                                   // 0x0278   (0x0001)  
	bool                                               bAbsoluteValue;                                             // 0x0279   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x027A   (0x0006)  MISSED
};

/// Class /Script/AIModule.EnvQueryTest_GameplayTags
/// Size: 0x0070 (0x000238 - 0x0002A8)
class UEnvQueryTest_GameplayTags : public UEnvQueryTest
{ 
public:
	FGameplayTagQuery                                  TagQueryToMatch;                                            // 0x0238   (0x0048)  
	bool                                               bUpdatedToUseQuery;                                         // 0x0280   (0x0001)  
	EGameplayContainerMatchType                        TagsToMatch;                                                // 0x0281   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0282   (0x0006)  MISSED
	FGameplayTagContainer                              GameplayTags;                                               // 0x0288   (0x0020)  
};

/// Struct /Script/AIModule.EnvOverlapData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FEnvOverlapData
{ 
	float                                              ExtentX;                                                    // 0x0000   (0x0004)  
	float                                              ExtentY;                                                    // 0x0004   (0x0004)  
	float                                              ExtentZ;                                                    // 0x0008   (0x0004)  
	FVector                                            ShapeOffset;                                                // 0x000C   (0x000C)  
	SDK_UNDEFINED(1,917) /* TEnumAsByte<ECollisionChannel> */ __um(OverlapChannel);                                // 0x0018   (0x0001)  
	SDK_UNDEFINED(1,918) /* TEnumAsByte<EEnvOverlapShape> */ __um(OverlapShape);                                   // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x001A   (0x0002)  MISSED
	bool                                               bOnlyBlockingHits : 1;                                      // 0x001C:0 (0x0001)  
	bool                                               bOverlapComplex : 1;                                        // 0x001C:1 (0x0001)  
	bool                                               bSkipOverlapQuerier : 1;                                    // 0x001C:2 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Class /Script/AIModule.EnvQueryTest_Overlap
/// Size: 0x0020 (0x000238 - 0x000258)
class UEnvQueryTest_Overlap : public UEnvQueryTest
{ 
public:
	FEnvOverlapData                                    OverlapData;                                                // 0x0238   (0x0020)  
};

/// Class /Script/AIModule.EnvQueryTest_PathfindingBatch
/// Size: 0x0040 (0x0002D0 - 0x000310)
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
{ 
public:
	FAIDataProviderFloatValue                          ScanRangeMultiplier;                                        // 0x02D0   (0x0040)  
};

/// Class /Script/AIModule.EnvQueryTest_Project
/// Size: 0x0030 (0x000238 - 0x000268)
class UEnvQueryTest_Project : public UEnvQueryTest
{ 
public:
	FEnvTraceData                                      ProjectionData;                                             // 0x0238   (0x0030)  
};

/// Class /Script/AIModule.EnvQueryTest_Random
/// Size: 0x0000 (0x000238 - 0x000238)
class UEnvQueryTest_Random : public UEnvQueryTest
{ 
public:
};

/// Class /Script/AIModule.EnvQueryTest_Trace
/// Size: 0x00F8 (0x000238 - 0x000330)
class UEnvQueryTest_Trace : public UEnvQueryTest
{ 
public:
	FEnvTraceData                                      TraceData;                                                  // 0x0238   (0x0030)  
	FAIDataProviderBoolValue                           TraceFromContext;                                           // 0x0268   (0x0040)  
	FAIDataProviderFloatValue                          ItemHeightOffset;                                           // 0x02A8   (0x0040)  
	FAIDataProviderFloatValue                          ContextHeightOffset;                                        // 0x02E8   (0x0040)  
	class UClass*                                      Context;                                                    // 0x0328   (0x0008)  
};

/// Class /Script/AIModule.EnvQueryTest_Volume
/// Size: 0x0018 (0x000238 - 0x000250)
class UEnvQueryTest_Volume : public UEnvQueryTest
{ 
public:
	class UClass*                                      VolumeContext;                                              // 0x0238   (0x0008)  
	class UClass*                                      VolumeClass;                                                // 0x0240   (0x0008)  
	bool                                               bDoComplexVolumeTest : 1;                                   // 0x0248:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0249   (0x0007)  MISSED
};

/// Class /Script/AIModule.EnvQueryTypes
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryTypes : public UObject
{ 
public:
};

/// Class /Script/AIModule.EQSQueryResultSourceInterface
/// Size: 0x0000 (0x000030 - 0x000030)
class UEQSQueryResultSourceInterface : public UInterface
{ 
public:
};

/// Class /Script/AIModule.EQSRenderingComponent
/// Size: 0x0040 (0x000480 - 0x0004C0)
class UEQSRenderingComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0480   (0x0040)  MISSED
};

/// Class /Script/AIModule.EQSTestingPawn
/// Size: 0x00A0 (0x0004D0 - 0x000570)
class AEQSTestingPawn : public ACharacter
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x04D0   (0x0008)  MISSED
	class UEnvQuery*                                   QueryTemplate;                                              // 0x04D8   (0x0008)  
	TArray<FEnvNamedValue>                             QueryParams;                                                // 0x04E0   (0x0010)  
	TArray<FAIDynamicParam>                            QueryConfig;                                                // 0x04F0   (0x0010)  
	float                                              TimeLimitPerStep;                                           // 0x0500   (0x0004)  
	int32_t                                            StepToDebugDraw;                                            // 0x0504   (0x0004)  
	EEnvQueryHightlightMode                            HighlightMode;                                              // 0x0508   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0509   (0x0003)  MISSED
	bool                                               bDrawLabels : 1;                                            // 0x050C:0 (0x0001)  
	bool                                               bDrawFailedItems : 1;                                       // 0x050C:1 (0x0001)  
	bool                                               bReRunQueryOnlyOnFinishedMove : 1;                          // 0x050C:2 (0x0001)  
	bool                                               bShouldBeVisibleInGame : 1;                                 // 0x050C:3 (0x0001)  
	bool                                               bTickDuringGame : 1;                                        // 0x050C:4 (0x0001)  
	unsigned char                                      UnknownData02_4[0x3];                                       // 0x050D   (0x0003)  MISSED
	SDK_UNDEFINED(1,919) /* TEnumAsByte<EEnvQueryRunMode> */ __um(QueryingMode);                                   // 0x0510   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0511   (0x0007)  MISSED
	FNavAgentProperties                                NavAgentProperties;                                         // 0x0518   (0x0038)  
	unsigned char                                      UnknownData04_6[0x20];                                      // 0x0550   (0x0020)  MISSED
};

/// Class /Script/AIModule.GridPathAIController
/// Size: 0x0000 (0x000340 - 0x000340)
class AGridPathAIController : public AAIController
{ 
public:
};

/// Class /Script/AIModule.GridPathFollowingComponent
/// Size: 0x0030 (0x000258 - 0x000288)
class UGridPathFollowingComponent : public UPathFollowingComponent
{ 
public:
	class UNavLocalGridManager*                        GridManager;                                                // 0x0258   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0260   (0x0028)  MISSED
};

/// Class /Script/AIModule.NavFilter_AIControllerDefault
/// Size: 0x0000 (0x000050 - 0x000050)
class UNavFilter_AIControllerDefault : public UNavigationQueryFilter
{ 
public:
};

/// Class /Script/AIModule.NavLocalGridManager
/// Size: 0x0030 (0x000030 - 0x000060)
class UNavLocalGridManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0030   (0x0030)  MISSED


	/// Functions
	// Function /Script/AIModule.NavLocalGridManager.SetLocalNavigationGridDensity
	// bool SetLocalNavigationGridDensity(class UObject* WorldContextObject, float CellSize);                                // [0x854add0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.NavLocalGridManager.RemoveLocalNavigationGrid
	// void RemoveLocalNavigationGrid(class UObject* WorldContextObject, int32_t GridId, bool bRebuildGrids);                // [0x854ac40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.NavLocalGridManager.FindLocalNavigationGridPath
	// bool FindLocalNavigationGridPath(class UObject* WorldContextObject, FVector& Start, FVector& End, TArray<FVector>& PathPoints); // [0x854a3c0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints
	// int32_t AddLocalNavigationGridForPoints(class UObject* WorldContextObject, TArray<FVector>& Locations, int32_t Radius2D, float Height, bool bRebuildGrids); // [0x854a110] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint
	// int32_t AddLocalNavigationGridForPoint(class UObject* WorldContextObject, FVector& Location, int32_t Radius2D, float Height, bool bRebuildGrids); // [0x8549f50] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule
	// int32_t AddLocalNavigationGridForCapsule(class UObject* WorldContextObject, FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int32_t Radius2D, float Height, bool bRebuildGrids); // [0x8549d30] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.NavLocalGridManager.AddLocalNavigationGridForBox
	// int32_t AddLocalNavigationGridForBox(class UObject* WorldContextObject, FVector& Location, FVector Extent, FRotator Rotation, int32_t Radius2D, float Height, bool bRebuildGrids); // [0x8549af0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AIModule.PathFollowingManager
/// Size: 0x0000 (0x000030 - 0x000030)
class UPathFollowingManager : public UObject
{ 
public:
};

/// Class /Script/AIModule.PawnAction
/// Size: 0x0068 (0x000030 - 0x000098)
class UPawnAction : public UObject
{ 
public:
	class UPawnAction*                                 ChildAction;                                                // 0x0030   (0x0008)  
	class UPawnAction*                                 ParentAction;                                               // 0x0038   (0x0008)  
	class UPawnActionsComponent*                       OwnerComponent;                                             // 0x0040   (0x0008)  
	class UObject*                                     Instigator;                                                 // 0x0048   (0x0008)  
	class UBrainComponent*                             BrainComp;                                                  // 0x0050   (0x0008)  
	unsigned char                                      UnknownData00_5[0x30];                                      // 0x0058   (0x0030)  MISSED
	bool                                               bAllowNewSameClassInstance : 1;                             // 0x0088:0 (0x0001)  
	bool                                               bReplaceActiveSameClassInstance : 1;                        // 0x0088:1 (0x0001)  
	bool                                               bShouldPauseMovement : 1;                                   // 0x0088:2 (0x0001)  
	bool                                               bAlwaysNotifyOnFinished : 1;                                // 0x0088:3 (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0089   (0x000F)  MISSED


	/// Functions
	// Function /Script/AIModule.PawnAction.GetActionPriority
	// TEnumAsByte<EAIRequestPriority> GetActionPriority();                                                                  // [0x49cbfb0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.PawnAction.Finish
	// void Finish(TEnumAsByte<EPawnActionResult> WithResult);                                                               // [0x854a550] Native|Protected|BlueprintCallable 
	// Function /Script/AIModule.PawnAction.CreateActionInstance
	// class UPawnAction* CreateActionInstance(class UObject* WorldContextObject, class UClass* ActionClass);                // [0x854a2f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AIModule.PawnAction_BlueprintBase
/// Size: 0x0000 (0x000098 - 0x000098)
class UPawnAction_BlueprintBase : public UPawnAction
{ 
public:


	/// Functions
	// Function /Script/AIModule.PawnAction_BlueprintBase.ActionTick
	// void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);                                                     // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Script/AIModule.PawnAction_BlueprintBase.ActionStart
	// void ActionStart(class APawn* ControlledPawn);                                                                        // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Script/AIModule.PawnAction_BlueprintBase.ActionResume
	// void ActionResume(class APawn* ControlledPawn);                                                                       // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Script/AIModule.PawnAction_BlueprintBase.ActionPause
	// void ActionPause(class APawn* ControlledPawn);                                                                        // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Script/AIModule.PawnAction_BlueprintBase.ActionFinished
	// void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);                          // [0x61d2f50] Event|Public|BlueprintEvent 
};

/// Class /Script/AIModule.PawnAction_Move
/// Size: 0x0050 (0x000098 - 0x0000E8)
class UPawnAction_Move : public UPawnAction
{ 
public:
	class AActor*                                      GoalActor;                                                  // 0x0098   (0x0008)  
	FVector                                            goalLocation;                                               // 0x00A0   (0x000C)  
	float                                              AcceptableRadius;                                           // 0x00AC   (0x0004)  
	class UClass*                                      FilterClass;                                                // 0x00B0   (0x0008)  
	bool                                               bAllowStrafe : 1;                                           // 0x00B8:0 (0x0001)  
	bool                                               bFinishOnOverlap : 1;                                       // 0x00B8:1 (0x0001)  
	bool                                               bUsePathfinding : 1;                                        // 0x00B8:2 (0x0001)  
	bool                                               bAllowPartialPath : 1;                                      // 0x00B8:3 (0x0001)  
	bool                                               bProjectGoalToNavigation : 1;                               // 0x00B8:4 (0x0001)  
	bool                                               bUpdatePathToGoal : 1;                                      // 0x00B8:5 (0x0001)  
	bool                                               bAbortChildActionOnPathChange : 1;                          // 0x00B8:6 (0x0001)  
	unsigned char                                      UnknownData00_6[0x2F];                                      // 0x00B9   (0x002F)  MISSED
};

/// Class /Script/AIModule.PawnAction_Repeat
/// Size: 0x0020 (0x000098 - 0x0000B8)
class UPawnAction_Repeat : public UPawnAction
{ 
public:
	class UPawnAction*                                 ActionToRepeat;                                             // 0x0098   (0x0008)  
	class UPawnAction*                                 RecentActionCopy;                                           // 0x00A0   (0x0008)  
	SDK_UNDEFINED(1,920) /* TEnumAsByte<EPawnActionFailHandling> */ __um(ChildFailureHandlingMode);                // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x00A9   (0x000F)  MISSED
};

/// Class /Script/AIModule.PawnAction_Sequence
/// Size: 0x0028 (0x000098 - 0x0000C0)
class UPawnAction_Sequence : public UPawnAction
{ 
public:
	TArray<class UPawnAction*>                         ActionSequence;                                             // 0x0098   (0x0010)  
	SDK_UNDEFINED(1,921) /* TEnumAsByte<EPawnActionFailHandling> */ __um(ChildFailureHandlingMode);                // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00A9   (0x0007)  MISSED
	class UPawnAction*                                 RecentActionCopy;                                           // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Class /Script/AIModule.PawnAction_Wait
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UPawnAction_Wait : public UPawnAction
{ 
public:
	float                                              TimeToWait;                                                 // 0x0098   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x009C   (0x000C)  MISSED
};

/// Struct /Script/AIModule.PawnActionStack
/// Size: 0x0008 (0x000000 - 0x000008)
struct FPawnActionStack
{ 
	class UPawnAction*                                 TopAction;                                                  // 0x0000   (0x0008)  
};

/// Struct /Script/AIModule.PawnActionEvent
/// Size: 0x0018 (0x000000 - 0x000018)
struct FPawnActionEvent
{ 
	class UPawnAction*                                 Action;                                                     // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Class /Script/AIModule.PawnActionsComponent
/// Size: 0x0038 (0x0000B8 - 0x0000F0)
class UPawnActionsComponent : public UActorComponent
{ 
public:
	class APawn*                                       ControlledPawn;                                             // 0x00B8   (0x0008)  
	TArray<FPawnActionStack>                           ActionStacks;                                               // 0x00C0   (0x0010)  
	TArray<FPawnActionEvent>                           ActionEvents;                                               // 0x00D0   (0x0010)  
	class UPawnAction*                                 CurrentAction;                                              // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00E8   (0x0008)  MISSED


	/// Functions
	// Function /Script/AIModule.PawnActionsComponent.K2_PushAction
	// bool K2_PushAction(class UPawnAction* NewAction, TEnumAsByte<EAIRequestPriority> Priority, class UObject* Instigator); // [0x854a900] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnActionsComponent.K2_PerformAction
	// bool K2_PerformAction(class APawn* Pawn, class UPawnAction* Action, TEnumAsByte<EAIRequestPriority> Priority);        // [0x854a800] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnActionsComponent.K2_ForceAbortAction
	// TEnumAsByte<EPawnActionAbortState> K2_ForceAbortAction(class UPawnAction* ActionToAbort);                             // [0x854a760] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnActionsComponent.K2_AbortAction
	// TEnumAsByte<EPawnActionAbortState> K2_AbortAction(class UPawnAction* ActionToAbort);                                  // [0x854a6c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AIModule.VisualLoggerExtension
/// Size: 0x0000 (0x000030 - 0x000030)
class UVisualLoggerExtension : public UObject
{ 
public:
};

/// Struct /Script/AIModule.AIRequestID
/// Size: 0x0004 (0x000000 - 0x000004)
struct FAIRequestID
{ 
	uint32_t                                           RequestID;                                                  // 0x0000   (0x0004)  
};

/// Struct /Script/AIModule.AIStimulus
/// Size: 0x0044 (0x000000 - 0x000044)
struct FAIStimulus
{ 
	float                                              Age;                                                        // 0x0000   (0x0004)  
	float                                              ExpirationAge;                                              // 0x0004   (0x0004)  
	float                                              Strength;                                                   // 0x0008   (0x0004)  
	FVector                                            StimulusLocation;                                           // 0x000C   (0x000C)  
	FVector                                            ReceiverLocation;                                           // 0x0018   (0x000C)  
	FName                                              Tag;                                                        // 0x0024   (0x000C)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0030   (0x0010)  MISSED
	unsigned char                                      UnknownBit01 : 1;                                           // 0x0040:0 (0x0001)  MISSED
	bool                                               bSuccessfullySensed : 1;                                    // 0x0040:1 (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0041   (0x0003)  MISSED
};

/// Struct /Script/AIModule.ActorPerceptionUpdateInfo
/// Size: 0x0050 (0x000000 - 0x000050)
struct FActorPerceptionUpdateInfo
{ 
	int32_t                                            TargetId;                                                   // 0x0000   (0x0004)  
	SDK_UNDEFINED(8,922) /* TWeakObjectPtr<AActor*> */ __um(Target);                                               // 0x0004   (0x0008)  
	FAIStimulus                                        Stimulus;                                                   // 0x000C   (0x0044)  
};

/// Struct /Script/AIModule.GenericTeamId
/// Size: 0x0001 (0x000000 - 0x000001)
struct FGenericTeamId
{ 
	char                                               TeamID;                                                     // 0x0000   (0x0001)  
};

/// Struct /Script/AIModule.AIDataProviderStructValue
/// Size: 0x0010 (0x000028 - 0x000038)
struct FAIDataProviderStructValue : FAIDataProviderValue
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Struct /Script/AIModule.ActorPerceptionBlueprintInfo
/// Size: 0x0020 (0x000000 - 0x000020)
struct FActorPerceptionBlueprintInfo
{ 
	class AActor*                                      Target;                                                     // 0x0000   (0x0008)  
	TArray<FAIStimulus>                                LastSensedStimuli;                                          // 0x0008   (0x0010)  
	bool                                               bIsHostile : 1;                                             // 0x0018:0 (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/AIModule.AISightEvent
/// Size: 0x0018 (0x000000 - 0x000018)
struct FAISightEvent
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	class AActor*                                      SeenActor;                                                  // 0x0008   (0x0008)  
	class AActor*                                      Observer;                                                   // 0x0010   (0x0008)  
};

/// Struct /Script/AIModule.EnvQueryRequest
/// Size: 0x0068 (0x000000 - 0x000068)
struct FEnvQueryRequest
{ 
	class UEnvQuery*                                   QueryTemplate;                                              // 0x0000   (0x0008)  
	class UObject*                                     Owner;                                                      // 0x0008   (0x0008)  
	class UWorld*                                      World;                                                      // 0x0010   (0x0008)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0018   (0x0050)  MISSED
};

/// Struct /Script/AIModule.EnvQueryResult
/// Size: 0x0040 (0x000000 - 0x000040)
struct FEnvQueryResult
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
	class UClass*                                      ItemType;                                                   // 0x0010   (0x0008)  
	unsigned char                                      UnknownData01_5[0x14];                                      // 0x0018   (0x0014)  MISSED
	int32_t                                            OptionIndex;                                                // 0x002C   (0x0004)  
	int32_t                                            QueryID;                                                    // 0x0030   (0x0004)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x0034   (0x000C)  MISSED
};

/// Struct /Script/AIModule.RecastGraphWrapper
/// Size: 0x0098 (0x000000 - 0x000098)
struct FRecastGraphWrapper
{ 
	class ARecastNavMesh*                              RecastNavMeshActor;                                         // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x90];                                      // 0x0008   (0x0090)  MISSED
};

