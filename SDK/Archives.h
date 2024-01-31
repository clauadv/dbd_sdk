
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: DBDSharedTypes
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: NetworkUtilities

/// Enum /Script/Archives.ECustomValueComparator
/// Size: 0x04
enum class ECustomValueComparator : uint8_t
{
	ECustomValueComparator__Equal                                                    = 0,
	ECustomValueComparator__LessOrEqual                                              = 1,
	ECustomValueComparator__GreaterOrEqual                                           = 2,
	ECustomValueComparator__ECustomValueComparator_MAX                               = 3
};

/// Enum /Script/Archives.EEventSubject
/// Size: 0x05
enum class EEventSubject : uint8_t
{
	EEventSubject__Instigator                                                        = 0,
	EEventSubject__Target                                                            = 1,
	EEventSubject__Any                                                               = 2,
	EEventSubject__None                                                              = 3,
	EEventSubject__EEventSubject_MAX                                                 = 4
};

/// Enum /Script/Archives.EEventCountComparisonOperator
/// Size: 0x06
enum class EEventCountComparisonOperator : uint8_t
{
	EEventCountComparisonOperator__EqualTo                                           = 0,
	EEventCountComparisonOperator__GreaterThan                                       = 1,
	EEventCountComparisonOperator__GreaterThanEqualTo                                = 2,
	EEventCountComparisonOperator__LessThan                                          = 3,
	EEventCountComparisonOperator__LessThanEqualTo                                   = 4,
	EEventCountComparisonOperator__EEventCountComparisonOperator_MAX                 = 5
};

/// Enum /Script/Archives.ESubjectPerspective
/// Size: 0x03
enum class ESubjectPerspective : uint8_t
{
	ESubjectPerspective__Me                                                          = 0,
	ESubjectPerspective__Other                                                       = 1,
	ESubjectPerspective__ESubjectPerspective_MAX                                     = 2
};

/// Enum /Script/Archives.EAllowedPlayerType
/// Size: 0x04
enum class EAllowedPlayerType : uint8_t
{
	EAllowedPlayerType__All                                                          = 0,
	EAllowedPlayerType__KillerOnly                                                   = 1,
	EAllowedPlayerType__SurvivorOnly                                                 = 2,
	EAllowedPlayerType__EAllowedPlayerType_MAX                                       = 3
};

/// Enum /Script/Archives.ERecentlyActiveModifierTimerStartType
/// Size: 0x03
enum class ERecentlyActiveModifierTimerStartType : uint8_t
{
	ERecentlyActiveModifierTimerStartType__OnTagAdded                                = 0,
	ERecentlyActiveModifierTimerStartType__OnTagRemoved                              = 1,
	ERecentlyActiveModifierTimerStartType__ERecentlyActiveModifierTimerStartType_MAX = 2
};

/// Enum /Script/Archives.ERecentlyActiveModifierType
/// Size: 0x03
enum class ERecentlyActiveModifierType : uint8_t
{
	ERecentlyActiveModifierType__AnyTrue                                             = 0,
	ERecentlyActiveModifierType__AllTrue                                             = 1,
	ERecentlyActiveModifierType__ERecentlyActiveModifierType_MAX                     = 2
};

/// Enum /Script/Archives.EInChaseTargetLogic
/// Size: 0x04
enum class EInChaseTargetLogic : uint8_t
{
	EInChaseTargetLogic__AnyOf                                                       = 0,
	EInChaseTargetLogic__AllOf                                                       = 1,
	EInChaseTargetLogic__NoneOf                                                      = 2,
	EInChaseTargetLogic__EInChaseTargetLogic_MAX                                     = 3
};

/// Enum /Script/Archives.EInstigatorTargetDistanceComparator
/// Size: 0x03
enum class EInstigatorTargetDistanceComparator : uint8_t
{
	EInstigatorTargetDistanceComparator__LessOrEqual                                 = 0,
	EInstigatorTargetDistanceComparator__GreaterOrEqual                              = 1,
	EInstigatorTargetDistanceComparator__EInstigatorTargetDistanceComparator_MAX     = 2
};

/// Enum /Script/Archives.EAttackerSubject
/// Size: 0x03
enum class EAttackerSubject : uint8_t
{
	EAttackerSubject__Instigator                                                     = 0,
	EAttackerSubject__Target                                                         = 1,
	EAttackerSubject__EAttackerSubject_MAX                                           = 2
};

/// Enum /Script/Archives.EObjectType
/// Size: 0x08
enum class EObjectType : uint8_t
{
	EObjectType__None                                                                = 0,
	EObjectType__Generator                                                           = 1,
	EObjectType__Pallet                                                              = 2,
	EObjectType__Totem                                                               = 3,
	EObjectType__Window                                                              = 4,
	EObjectType__EscapeDoor                                                          = 5,
	EObjectType__Count                                                               = 6,
	EObjectType__EObjectType_MAX                                                     = 7
};

/// Enum /Script/Archives.EQueryConditionType
/// Size: 0x03
enum class EQueryConditionType : uint8_t
{
	EQueryConditionType__AllTrue                                                     = 0,
	EQueryConditionType__AnyTrue                                                     = 1,
	EQueryConditionType__EQueryConditionType_MAX                                     = 2
};

/// Enum /Script/Archives.ENearGameObjectQuestObjectType
/// Size: 0x11
enum class ENearGameObjectQuestObjectType : uint8_t
{
	ENearGameObjectQuestObjectType__Generator                                        = 0,
	ENearGameObjectQuestObjectType__Pallet                                           = 1,
	ENearGameObjectQuestObjectType__Chest                                            = 2,
	ENearGameObjectQuestObjectType__Totem                                            = 3,
	ENearGameObjectQuestObjectType__Window                                           = 4,
	ENearGameObjectQuestObjectType__Wall                                             = 5,
	ENearGameObjectQuestObjectType__K32ItemBox                                       = 6,
	ENearGameObjectQuestObjectType__Killer                                           = 7,
	ENearGameObjectQuestObjectType__VaultLocation                                    = 8,
	ENearGameObjectQuestObjectType__Count                                            = 9,
	ENearGameObjectQuestObjectType__ENearGameObjectQuestObjectType_MAX               = 10
};

/// Enum /Script/Archives.ERecentlyActiveStateTagTimerStartType
/// Size: 0x03
enum class ERecentlyActiveStateTagTimerStartType : uint8_t
{
	ERecentlyActiveStateTagTimerStartType__OnTagAdded                                = 0,
	ERecentlyActiveStateTagTimerStartType__OnTagRemoved                              = 1,
	ERecentlyActiveStateTagTimerStartType__ERecentlyActiveStateTagTimerStartType_MAX = 2
};

/// Enum /Script/Archives.ERecentlyActiveStateTagType
/// Size: 0x03
enum class ERecentlyActiveStateTagType : uint8_t
{
	ERecentlyActiveStateTagType__AnyTrue                                             = 0,
	ERecentlyActiveStateTagType__AllTrue                                             = 1,
	ERecentlyActiveStateTagType__ERecentlyActiveStateTagType_MAX                     = 2
};

/// Class /Script/Archives.ActorPathFollowingComponent
/// Size: 0x0000 (0x000258 - 0x000258)
class UActorPathFollowingComponent : public UPathFollowingComponent
{ 
public:
};

/// Class /Script/Archives.AfterExitOpenQEEvaluator
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UAfterExitOpenQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/Archives.AfterExitOpenQEEvaluator.OnExitGateOpened
	// void OnExitGateOpened(FGameplayTag gameEventType, FGameEventData& GameEventData);                                     // [0x4dc8a20] Final|Native|Public|HasOutParms 
};

/// Class /Script/Archives.AlwaysVisibleToGlyphQuestHolderOutlineUpdateStrategy
/// Size: 0x0020 (0x0000E0 - 0x000100)
class UAlwaysVisibleToGlyphQuestHolderOutlineUpdateStrategy : public UOutlineUpdateStrategy
{ 
public:
	FLinearColor                                       _outlineColor;                                              // 0x00E0   (0x0010)  
	FName                                              _glyphQuestId;                                              // 0x00F0   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Class /Script/Archives.RecentlyActiveStateTagEvaluatorCondition
/// Size: 0x0098 (0x000048 - 0x0000E0)
class URecentlyActiveStateTagEvaluatorCondition : public UEvaluatorCondition
{ 
public:
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0048   (0x0050)  MISSED
	ERecentlyActiveStateTagType                        _type;                                                      // 0x0098   (0x0001)  
	ERecentlyActiveStateTagTimerStartType              _timerStartType;                                            // 0x0099   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x009A   (0x0006)  MISSED
	TArray<FGameplayTag>                               _stateTags;                                                 // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData02_6[0x30];                                      // 0x00B0   (0x0030)  MISSED
};

/// Class /Script/Archives.AnyPlayerRecentlyActiveStateTagEvaluatorCondition
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UAnyPlayerRecentlyActiveStateTagEvaluatorCondition : public URecentlyActiveStateTagEvaluatorCondition
{ 
public:
};

/// Class /Script/Archives.BaseRecentEventEvaluatorCondition
/// Size: 0x0078 (0x000048 - 0x0000C0)
class UBaseRecentEventEvaluatorCondition : public UEvaluatorCondition
{ 
public:
	unsigned char                                      UnknownData00_2[0x1C];                                      // 0x0048   (0x001C)  MISSED
	FGameplayTag                                       _firstGameEvent;                                            // 0x0064   (0x000C)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0070   (0x0050)  MISSED
};

/// Class /Script/Archives.BloodPointsQEEvaluator
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UBloodPointsQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/Archives.BloodPointsQEEvaluator.OnFinishedPlaying
	// void OnFinishedPlaying(FGameplayTag gameEventType, FGameEventData& GameEventData);                                    // [0x4dc8d50] Final|Native|Public|HasOutParms 
};

/// Class /Script/Archives.CarryDistanceQEEvaluator
/// Size: 0x0070 (0x0000B8 - 0x000128)
class UCarryDistanceQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x00B8   (0x0070)  MISSED
};

/// Class /Script/Archives.ChaseInBasementQEEvaluator
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UChaseInBasementQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/Archives.ChaseInBasementQEEvaluator.OnEscapeChase
	// void OnEscapeChase(FGameplayTag gameEventType, FGameEventData& GameEventData);                                        // [0x4dc8b30] Final|Native|Public|HasOutParms 
	// Function /Script/Archives.ChaseInBasementQEEvaluator.OnChaseStart
	// void OnChaseStart(FGameplayTag gameEventType, FGameEventData& GameEventData);                                         // [0x4dc8910] Final|Native|Public|HasOutParms 
	// Function /Script/Archives.ChaseInBasementQEEvaluator.OnChaseEnd
	// void OnChaseEnd(FGameplayTag gameEventType, FGameEventData& GameEventData);                                           // [0x4dc8800] Final|Native|Public|HasOutParms 
};

/// Class /Script/Archives.SkillCheckQEEvaluator
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class USkillCheckQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	bool                                               _greatSkillCheckOnly;                                       // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00B9   (0x0007)  MISSED
};

/// Class /Script/Archives.ConsecutiveSkillCheckQEEvaluator
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UConsecutiveSkillCheckQEEvaluator : public USkillCheckQEEvaluator
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00C0   (0x0008)  MISSED
};

/// Class /Script/Archives.ContextualQuestUtilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UContextualQuestUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Archives.ContextualQuestUtilities.PlayerHasToCompleteAssociatedQuest
	// bool PlayerHasToCompleteAssociatedQuest(class ADBDPlayer* Player, FName SpecialBehaviourId);                          // [0x4dc9970] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Archives.ContextualQuestUtilities.PlayerHasAssociatedQuest
	// bool PlayerHasAssociatedQuest(class ADBDPlayer* Player, FName SpecialBehaviourId);                                    // [0x4dc9890] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Archives.CustomValueEvaluatorCondition
/// Size: 0x0018 (0x000048 - 0x000060)
class UCustomValueEvaluatorCondition : public UEvaluatorCondition
{ 
public:
	SDK_UNDEFINED(16,3597) /* FString */               __um(_paramConditionKey);                                   // 0x0048   (0x0010)  
	ECustomValueComparator                             _comparator;                                                // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0059   (0x0007)  MISSED
};

/// Class /Script/Archives.CustomValueLessThanAmountQEEvaluator
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UCustomValueLessThanAmountQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Class /Script/Archives.CustomValueMoreThanAmountQEEvaluator
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UCustomValueMoreThanAmountQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Class /Script/Archives.CustomValuePercentQEEvaluator
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UCustomValuePercentQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
};

/// Class /Script/Archives.CustomValueQEEvaluator
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UCustomValueQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
};

/// Class /Script/Archives.DifferentSurvivorsNearMeQEEvaluator
/// Size: 0x0058 (0x0000B8 - 0x000110)
class UDifferentSurvivorsNearMeQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	SDK_UNDEFINED(80,3598) /* TSet<ADBDPlayer*> */     __um(_foundSurvivors);                                      // 0x00C0   (0x0050)  
};

/// Class /Script/Archives.DoBeforeEscapeQEEvaluator
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UDoBeforeEscapeQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:


	/// Functions
	// Function /Script/Archives.DoBeforeEscapeQEEvaluator.OnEscaped
	// void OnEscaped(FGameplayTag gameEventType, FGameEventData& GameEventData);                                            // [0x4dc8c40] Final|Native|Public|HasOutParms 
};

/// Class /Script/Archives.DoBeforeHookQEEvaluator
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UDoBeforeHookQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:


	/// Functions
	// Function /Script/Archives.DoBeforeHookQEEvaluator.OnHooked
	// void OnHooked(FGameplayTag gameEventType, FGameEventData& GameEventData);                                             // [0x4dc9080] Final|Native|Public|HasOutParms 
};

/// Class /Script/Archives.DuringEndGameCollapseQEEvaluator
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UDuringEndGameCollapseQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/Archives.DuringEndGameCollapseQEEvaluator.OnEndGameCollapseStart
	// void OnEndGameCollapseStart(FGameplayTag gameEventType, FGameEventData& GameEventData);                               // [0x4dc8a20] Final|Native|Private|HasOutParms 
};

/// Class /Script/Archives.EarnEmblemQualityQEEvaluator
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UEarnEmblemQualityQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00B8   (0x0018)  MISSED


	/// Functions
	// Function /Script/Archives.EarnEmblemQualityQEEvaluator.OnFinishedPlaying
	// void OnFinishedPlaying(FGameplayTag gameEventType, FGameEventData& GameEventData);                                    // [0x4dc8e60] Final|Native|Public|HasOutParms 
};

/// Class /Script/Archives.EndOfGameQEEvaluator
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UEndOfGameQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:


	/// Functions
	// Function /Script/Archives.EndOfGameQEEvaluator.OnFinishedPlaying
	// void OnFinishedPlaying(FGameplayTag gameEventType, FGameEventData& GameEventData);                                    // [0x4dc8f70] Final|Native|Public|HasOutParms 
};

/// Class /Script/Archives.EscapeBasementItemQEEvaluator
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UEscapeBasementItemQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/Archives.EscapeBasementItemQEEvaluator.OnTargetEscapeFromTrial
	// void OnTargetEscapeFromTrial(FGameplayTag gameEventType, FGameEventData& GameEventData);                              // [0x4dc9780] Final|Native|Public|HasOutParms 
	// Function /Script/Archives.EscapeBasementItemQEEvaluator.OnItemCollectedFromChest
	// void OnItemCollectedFromChest(FGameplayTag gameEventType, FGameEventData& GameEventData);                             // [0x4dc9400] Final|Native|Public|HasOutParms 
};

/// Class /Script/Archives.EscapeOtherInTrialQEEvaluator
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UEscapeOtherInTrialQEEvaluator : public UDoBeforeEscapeQEEvaluator
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Class /Script/Archives.EventAfterOtherWithMinimumCustomValueQEEvaluator
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UEventAfterOtherWithMinimumCustomValueQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	FGameplayTag                                       _startEvent;                                                // 0x00B8   (0x000C)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x00C4   (0x000C)  MISSED
};

/// Class /Script/Archives.EventCountComparisonQEEvaluator
/// Size: 0x0038 (0x0000B8 - 0x0000F0)
class UEventCountComparisonQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	TArray<FGameplayTag>                               _incrementCountEvents;                                      // 0x00B8   (0x0010)  
	EEventSubject                                      _incrementIfIAm;                                            // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00C9   (0x0007)  MISSED
	TArray<FGameplayTag>                               _resetCountEvents;                                          // 0x00D0   (0x0010)  
	EEventSubject                                      _resetIfIAm;                                                // 0x00E0   (0x0001)  
	EEventCountComparisonOperator                      _comparisonOperator;                                        // 0x00E1   (0x0001)  
	unsigned char                                      UnknownData01_6[0xE];                                       // 0x00E2   (0x000E)  MISSED
};

/// Class /Script/Archives.EventInTimeQEEvaluator
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UEventInTimeQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Class /Script/Archives.EventOccuredAndStayNearQuestEvaluator
/// Size: 0x0088 (0x0000B8 - 0x000140)
class UEventOccuredAndStayNearQuestEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	FGameplayTag                                       _triggerEvent;                                              // 0x00B8   (0x000C)  
	ESubjectPerspective                                _instigatorPerspective;                                     // 0x00C4   (0x0001)  
	ESubjectPerspective                                _targetPerspective;                                         // 0x00C5   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7A];                                      // 0x00C6   (0x007A)  MISSED
};

/// Class /Script/Archives.EventOccurredBetweenQEEvaluator
/// Size: 0x0020 (0x0000B8 - 0x0000D8)
class UEventOccurredBetweenQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x00B8   (0x0010)  MISSED
	FGameplayTag                                       _middleEvent;                                               // 0x00C8   (0x000C)  
	bool                                               outerEventsDifferentTargets;                                // 0x00D4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00D5   (0x0003)  MISSED
};

/// Class /Script/Archives.ExtendItemChargesQEEvaluator
/// Size: 0x0040 (0x0000B8 - 0x0000F8)
class UExtendItemChargesQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x00B8   (0x0040)  MISSED


	/// Functions
	// Function /Script/Archives.ExtendItemChargesQEEvaluator.OnSurvivorRemoved
	// void OnSurvivorRemoved(class ACamperPlayer* removedPlayer);                                                           // [0x4dc96f0] Final|Native|Private|Const 
	// Function /Script/Archives.ExtendItemChargesQEEvaluator.OnItemRemoved
	// void OnItemRemoved(class ACollectable* removedItem, EInventoryType inventoryType, class ADBDPlayer* Player);          // [0x4dc95a0] Final|Native|Private|Const 
	// Function /Script/Archives.ExtendItemChargesQEEvaluator.OnItemEmpty
	// void OnItemEmpty(class ADBDPlayer* itemUser);                                                                         // [0x4dc9510] Final|Native|Private 
	// Function /Script/Archives.ExtendItemChargesQEEvaluator.OnItemChargeChanged
	// void OnItemChargeChanged(float previousCharge, float currentCharge, class ADBDPlayer* itemUser, class ACollectable* Item); // [0x4dc92a0] Final|Native|Private 
	// Function /Script/Archives.ExtendItemChargesQEEvaluator.OnItemAdded
	// void OnItemAdded(class ACollectable* addedItem, EInventoryType inventoryType, class ADBDPlayer* Player);              // [0x4dc9190] Final|Native|Private 
};

/// Class /Script/Archives.FinishPreventGateEscapeQEEvaluator
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UFinishPreventGateEscapeQEEvaluator : public UEndOfGameQEEvaluator
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Class /Script/Archives.FragileObjectComponent
/// Size: 0x0088 (0x0000B8 - 0x000140)
class UFragileObjectComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,3599) /* FMulticastInlineDelegate */ __um(OnObjectBroken);                                    // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3600) /* FMulticastInlineDelegate */ __um(OnObjectRepaired);                                  // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x00D8   (0x0018)  MISSED
	bool                                               _repaired;                                                  // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2F];                                      // 0x00F1   (0x002F)  MISSED
	float                                              _minFallingHeight;                                          // 0x0120   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0124   (0x0004)  MISSED
	TArray<FGameplayTag>                               _generalObjectBreakingEvents;                               // 0x0128   (0x0010)  
	class ADBDPlayer*                                  _previousCollector;                                         // 0x0138   (0x0008)  


	/// Functions
	// Function /Script/Archives.FragileObjectComponent.OnRep_Repaired
	// void OnRep_Repaired();                                                                                                // [0x4dc96d0] Final|Native|Private|Const 
	// Function /Script/Archives.FragileObjectComponent.OnFragileObjectStateChanged__DelegateSignature
	// void OnFragileObjectStateChanged__DelegateSignature();                                                                // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/Archives.FragileObjectComponent.IsRepaired
	// bool IsRepaired();                                                                                                    // [0x4dc87d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Archives.FragileObjectComponent.GetPreviousCollector
	// class ADBDPlayer* GetPreviousCollector();                                                                             // [0x4dc8700] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Archives.FragileObjectComponent.DBD_RepairFragileObject
	// void DBD_RepairFragileObject();                                                                                       // [0x4592da0] Final|Exec|Native|Private 
	// Function /Script/Archives.FragileObjectComponent.Authority_OnCamperRemoved
	// void Authority_OnCamperRemoved(class ACamperPlayer* removedPlayer);                                                   // [0x4dc84c0] Final|Native|Private 
};

/// Class /Script/Archives.GeneratorCoOpEvaluatorCondition
/// Size: 0x0000 (0x000048 - 0x000048)
class UGeneratorCoOpEvaluatorCondition : public UEvaluatorCondition
{ 
public:
};

/// Class /Script/Archives.GeneratorsNeededCountQEEvaluator
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UGeneratorsNeededCountQEEvaluator : public UEndOfGameQEEvaluator
{ 
public:
};

/// Class /Script/Archives.Glyph
/// Size: 0x0158 (0x000378 - 0x0004D0)
class AGlyph : public ASpecialBehaviourInteractable
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0378   (0x0008)  MISSED
	TArray<class ADBDPlayer*>                          _playersWithVisibility;                                     // 0x0380   (0x0010)  
	TArray<class ADBDPlayer*>                          _oldPlayersWithVisibility;                                  // 0x0390   (0x0010)  
	FName                                              _specialBehaviourId;                                        // 0x03A0   (0x000C)  
	EAllowedPlayerType                                 _allowedPlayerType;                                         // 0x03AC   (0x0001)  
	bool                                               _canOnlyBeInteractedOnByOnePlayer;                          // 0x03AD   (0x0001)  
	bool                                               _canBeInteractedAfterQuestCompleted;                        // 0x03AE   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x03AF   (0x0001)  MISSED
	SDK_UNDEFINED(8,3601) /* TWeakObjectPtr<ADBDPlayer*> */ __um(lastPlayerToStartInteraction);                    // 0x03B0   (0x0008)  
	SDK_UNDEFINED(16,3602) /* TArray<TWeakObjectPtr<ADBDPlayerState*>> */ __um(_isGlyphActivatedForPlayer);        // 0x03B8   (0x0010)  
	bool                                               _grantChallengeProgress;                                    // 0x03C8   (0x0001)  
	bool                                               _grantQuestEventProgressOnInteraction;                      // 0x03C9   (0x0001)  
	bool                                               _isActive;                                                  // 0x03CA   (0x0001)  
	unsigned char                                      UnknownData02_5[0x5];                                       // 0x03CB   (0x0005)  MISSED
	class UGlyphInteraction*                           _glyphInteraction;                                          // 0x03D0   (0x0008)  
	class UGlyphInteraction*                           _glyphInteractionKiller;                                    // 0x03D8   (0x0008)  
	class UChargeableComponent*                        _glyphInteractionChargeable;                                // 0x03E0   (0x0008)  
	class UChargeableComponent*                        _glyphInteractionChargeableKiller;                          // 0x03E8   (0x0008)  
	class UInteractor*                                 _glyphInteractor;                                           // 0x03F0   (0x0008)  
	class UNearTrackedActorComponent*                  _nearTrackedActorComponent;                                 // 0x03F8   (0x0008)  
	class UPrimitiveComponent*                         _glyphInteractionZone;                                      // 0x0400   (0x0008)  
	class UDBDOutlineComponent*                        _outlineComponent;                                          // 0x0408   (0x0008)  
	class UStaticMeshComponent*                        _glyphMesh;                                                 // 0x0410   (0x0008)  
	FGameplayTag                                       _associatedSurvivorScoreEvent;                              // 0x0418   (0x000C)  
	FGameplayTag                                       _associatedKillerScoreEvent;                                // 0x0424   (0x000C)  
	bool                                               _isScoreRewardExponentialForMultipleGlyphs;                 // 0x0430   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0431   (0x0007)  MISSED
	FDBDTunableRowHandle                               _glyphInteractionSecondsToCharge;                           // 0x0438   (0x0028)  
	FDBDTunableRowHandle                               _glyphInteractionSecondsToChargeKiller;                     // 0x0460   (0x0028)  
	FDBDTunableRowHandle                               _glyphDetectionRange;                                       // 0x0488   (0x0028)  
	FLinearColor                                       _auraColorWhileInteracting;                                 // 0x04B0   (0x0010)  
	TArray<class ADBDPlayer*>                          _playersThatInteractedWithGlyph;                            // 0x04C0   (0x0010)  


	/// Functions
	// Function /Script/Archives.Glyph.OnRep_PlayersWithVisibility
	// void OnRep_PlayersWithVisibility();                                                                                   // [0x4dc96b0] Final|Native|Protected 
	// Function /Script/Archives.Glyph.IsPlayerOwner
	// bool IsPlayerOwner(class ADBDPlayer* Player);                                                                         // [0x4dc8730] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Archives.Glyph.DoesLocalPlayerHaveVisibility
	// bool DoesLocalPlayerHaveVisibility();                                                                                 // [0x4dc86d0] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/Archives.Glyph.Cosmetic_OnStoppedInteracting
	// void Cosmetic_OnStoppedInteracting();                                                                                 // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Archives.Glyph.Cosmetic_OnStartedInteracting
	// void Cosmetic_OnStartedInteracting(class ADBDPlayer* interactingPlayer, float interactionDuration);                   // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Archives.Glyph.Cosmetic_OnInteractionCompleted
	// void Cosmetic_OnInteractionCompleted(class ADBDPlayer* interactingPlayer);                                            // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Archives.Glyph.Cosmetic_OnGlyphVisibilityChanged
	// void Cosmetic_OnGlyphVisibilityChanged(class ADBDPlayer* interactingPlayer, bool IsVisible);                          // [0x61d2f50] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Archives.Glyph.Authority_TrackPlayerWithBehaviourID
	// void Authority_TrackPlayerWithBehaviourID(class ADBDPlayer* DBDPlayer);                                               // [0x4dc8640] Final|Native|Private 
	// Function /Script/Archives.Glyph.Authority_OnPlayerBreachedRangeThreshold
	// void Authority_OnPlayerBreachedRangeThreshold(bool isWithinRange, class AActor* trackedActor);                        // [0x4dc8570] Final|Native|Private 
	// Function /Script/Archives.Glyph.Authority_OnIntroCompleted
	// void Authority_OnIntroCompleted();                                                                                    // [0x4dc8550] Final|Native|Private 
	// Function /Script/Archives.Glyph.Authority_OnInteractionCompleted
	// void Authority_OnInteractionCompleted(class ADBDPlayer* interactingPlayer);                                           // [0x61d2f50] BlueprintAuthorityOnly|Event|Protected|BlueprintEvent 
};

/// Class /Script/Archives.GlyphDebugComponent
/// Size: 0x0020 (0x0000B8 - 0x0000D8)
class UGlyphDebugComponent : public UActorComponent
{ 
public:
	bool                                               _assignOwnerOnBeginPlay;                                    // 0x00B8   (0x0001)  
	EPawnType                                          _ownerPawnType;                                             // 0x00B9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1E];                                      // 0x00BA   (0x001E)  MISSED
};

/// Class /Script/Archives.GlyphEvaluatorCondition
/// Size: 0x0010 (0x000048 - 0x000058)
class UGlyphEvaluatorCondition : public UEvaluatorCondition
{ 
public:
	class UClass*                                      _glyphClass;                                                // 0x0048   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0050   (0x0008)  MISSED
};

/// Class /Script/Archives.GlyphInteraction
/// Size: 0x0040 (0x000790 - 0x0007D0)
class UGlyphInteraction : public UChargeableInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0790   (0x0040)  MISSED
};

/// Class /Script/Archives.GlyphOutlineUpdateStrategy
/// Size: 0x0000 (0x000158 - 0x000158)
class UGlyphOutlineUpdateStrategy : public USourceBasedOutlineUpdateStrategy
{ 
public:
};

/// Class /Script/Archives.GreenGlyphActivatorComponent
/// Size: 0x0038 (0x0000B8 - 0x0000F0)
class UGreenGlyphActivatorComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	SDK_UNDEFINED(16,3603) /* TArray<TWeakObjectPtr<UGreenGlyphComponent*>> */ __um(_greenGlyphComponents);        // 0x00D0   (0x0010)  
	TArray<class AGenerator*>                          _completedGenerators;                                       // 0x00E0   (0x0010)  


	/// Functions
	// Function /Script/Archives.GreenGlyphActivatorComponent.DBD_ShowAuraGreenGlyphsActive
	// void DBD_ShowAuraGreenGlyphsActive(bool Enabled);                                                                     // [0x4dcf820] Final|Exec|Native|Private 
	// Function /Script/Archives.GreenGlyphActivatorComponent.Authority_OnActivateGlyphEvents
	// void Authority_OnActivateGlyphEvents(FGameplayTag GameplayTag, FGameEventData& GameEventData);                        // [0x4dcf710] Final|Native|Private|HasOutParms 
	// Function /Script/Archives.GreenGlyphActivatorComponent.Authority_EndGameScenarioBegins
	// void Authority_EndGameScenarioBegins(FGameplayTag GameplayTag, FGameEventData& GameEventData);                        // [0x4dcf600] Final|Native|Private|HasOutParms 
};

/// Class /Script/Archives.GreenGlyphComponent
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UGreenGlyphComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x00B8   (0x0010)  MISSED
	float                                              _revealAuraGlyphDuration;                                   // 0x00C8   (0x0004)  
	bool                                               _shouldOutlineBeActive;                                     // 0x00CC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00CD   (0x0003)  MISSED


	/// Functions
	// Function /Script/Archives.GreenGlyphComponent.OnRep_SetShouldOutlineBeActive
	// void OnRep_SetShouldOutlineBeActive();                                                                                // [0x4dd0130] Final|Native|Private 
	// Function /Script/Archives.GreenGlyphComponent.Multicast_Cheat_ShowAuraGreenGlyphActive
	// void Multicast_Cheat_ShowAuraGreenGlyphActive(bool Enabled, bool bForceShowAura);                                     // [0x4dcf8b0] Net|NetReliableNative|Event|NetMulticast|Public 
};

/// Class /Script/Archives.HasAMostProgressedGeneratorCondition
/// Size: 0x0000 (0x000048 - 0x000048)
class UHasAMostProgressedGeneratorCondition : public UEvaluatorCondition
{ 
public:
};

/// Class /Script/Archives.HasAnyVisibleStatusEffectOfType
/// Size: 0x0008 (0x000048 - 0x000050)
class UHasAnyVisibleStatusEffectOfType : public UEvaluatorCondition
{ 
public:
	EMatchingStatusEffectType                          _statusEffectOfType;                                        // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/Archives.HasBeenDownedFromInjuredCrowHitQEEvaluator
/// Size: 0x0050 (0x0000B8 - 0x000108)
class UHasBeenDownedFromInjuredCrowHitQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x00B8   (0x0050)  MISSED
};

/// Class /Script/Archives.HasBeenInjuredFromAClawTrapQEEvaluator
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class UHasBeenInjuredFromAClawTrapQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00B8   (0x0010)  MISSED
};

/// Class /Script/Archives.HasDepletedSameItemTwoTimesQEEvaluator
/// Size: 0x0058 (0x0000B8 - 0x000110)
class UHasDepletedSameItemTwoTimesQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	ELoadoutItemType                                   _itemType;                                                  // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x57];                                      // 0x00B9   (0x0057)  MISSED
};

/// Class /Script/Archives.HasDownedTargetAnyDebuffEffectEvaluator
/// Size: 0x0028 (0x0000B8 - 0x0000E0)
class UHasDownedTargetAnyDebuffEffectEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	FGameplayTagContainer                              _targetPreventingTags;                                      // 0x00C0   (0x0020)  
};

/// Struct /Script/Archives.EventOccurrenceConditionData
/// Size: 0x0060 (0x000000 - 0x000060)
struct FEventOccurrenceConditionData
{ 
	FGameplayTag                                       GameEventTag;                                               // 0x0000   (0x000C)  
	EConditionSubject                                  PreviousConditionSubject;                                   // 0x000C   (0x0001)  
	EConditionSubject                                  CurrentConditionSubject;                                    // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x52];                                      // 0x000E   (0x0052)  MISSED
};

/// Class /Script/Archives.HasEventHappenedEnoughTimesEvaluatorCondition
/// Size: 0x0088 (0x000048 - 0x0000D0)
class UHasEventHappenedEnoughTimesEvaluatorCondition : public UEvaluatorCondition
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0048   (0x0018)  MISSED
	FEventOccurrenceConditionData                      _conditionEventsData;                                       // 0x0060   (0x0060)  
	float                                              _numOccurrences;                                            // 0x00C0   (0x0004)  
	float                                              _prerequisiteTimeLimit;                                     // 0x00C4   (0x0004)  
	float                                              _triggerTimeLimit;                                          // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Class /Script/Archives.HasEventHappenedEnoughTimesResettableEvaluatorCondition
/// Size: 0x0020 (0x0000D0 - 0x0000F0)
class UHasEventHappenedEnoughTimesResettableEvaluatorCondition : public UHasEventHappenedEnoughTimesEvaluatorCondition
{ 
public:
	FGameplayTagContainer                              _resetProgressGameEvents;                                   // 0x00D0   (0x0020)  
};

/// Class /Script/Archives.HasEventHappenedEvaluatorCondition
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UHasEventHappenedEvaluatorCondition : public UBaseRecentEventEvaluatorCondition
{ 
public:
};

/// Class /Script/Archives.HasEventNotHappenedEvaluatorCondition
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UHasEventNotHappenedEvaluatorCondition : public UBaseRecentEventEvaluatorCondition
{ 
public:
	float                                              timeLimitOverride;                                          // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00C4   (0x0004)  MISSED
};

/// Class /Script/Archives.HasFinishedAGeneratorCondition
/// Size: 0x0000 (0x000048 - 0x000048)
class UHasFinishedAGeneratorCondition : public UEvaluatorCondition
{ 
public:
};

/// Class /Script/Archives.HasGameplayTagEvaluatorCondition
/// Size: 0x0010 (0x000048 - 0x000058)
class UHasGameplayTagEvaluatorCondition : public UEvaluatorCondition
{ 
public:
	TArray<FGameplayTag>                               _gameplayTagList;                                           // 0x0048   (0x0010)  
};

/// Class /Script/Archives.HasInteractedMapTrackedInteractorQEEvaluator
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UHasInteractedMapTrackedInteractorQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00B8   (0x0018)  MISSED


	/// Functions
	// Function /Script/Archives.HasInteractedMapTrackedInteractorQEEvaluator.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x4dd0110] Final|Native|Private 
	// Function /Script/Archives.HasInteractedMapTrackedInteractorQEEvaluator.OnActorTrackedByMap
	// void OnActorTrackedByMap(class UActorKnowledgeCollection* knowledgeCollection, class AActor* newActor);               // [0x4dcf990] Final|Native|Private 
};

/// Class /Script/Archives.HasItemNoChargesQEEvaluator
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UHasItemNoChargesQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
};

/// Class /Script/Archives.HasItemRarityEvaluatorCondition
/// Size: 0x0008 (0x000048 - 0x000050)
class UHasItemRarityEvaluatorCondition : public UEvaluatorCondition
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Class /Script/Archives.ItemRarityQEEvaluator
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UItemRarityQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Class /Script/Archives.HasItemRarityQEEvaluator
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UHasItemRarityQEEvaluator : public UItemRarityQEEvaluator
{ 
public:
};

/// Class /Script/Archives.HasItemTypeEvaluatorCondition
/// Size: 0x0008 (0x000048 - 0x000050)
class UHasItemTypeEvaluatorCondition : public UEvaluatorCondition
{ 
public:
	ELoadoutItemType                                   _itemType;                                                  // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/Archives.HasItemTypeQEEvaluator
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UHasItemTypeQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Class /Script/Archives.HasModifierOfTypeEvaluatorCondition
/// Size: 0x0010 (0x000048 - 0x000058)
class UHasModifierOfTypeEvaluatorCondition : public UEvaluatorCondition
{ 
public:
	TArray<FGameplayTag>                               _gameplayModifierList;                                      // 0x0048   (0x0010)  
};

/// Struct /Script/Archives.AnyEventConditionData
/// Size: 0x0060 (0x000000 - 0x000060)
struct FAnyEventConditionData
{ 
	FGameplayTag                                       GameEventTag;                                               // 0x0000   (0x000C)  
	EConditionSubject                                  PreviousConditionSubject;                                   // 0x000C   (0x0001)  
	EConditionSubject                                  CurrentConditionSubject;                                    // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x52];                                      // 0x000E   (0x0052)  MISSED
};

/// Class /Script/Archives.HasOneOfEventsHappenedEvaluatorCondition
/// Size: 0x0030 (0x000048 - 0x000078)
class UHasOneOfEventsHappenedEvaluatorCondition : public UEvaluatorCondition
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0048   (0x0018)  MISSED
	TArray<FAnyEventConditionData>                     _conditionEventsData;                                       // 0x0060   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/Archives.HasRecentEventHappenedWhileInStateTagCondition
/// Size: 0x0060 (0x000048 - 0x0000A8)
class UHasRecentEventHappenedWhileInStateTagCondition : public UEvaluatorCondition
{ 
public:
	FGameplayTag                                       _gameEvent;                                                 // 0x0048   (0x000C)  
	FGameplayTag                                       _stateTag;                                                  // 0x0054   (0x000C)  
	unsigned char                                      UnknownData00_6[0x48];                                      // 0x0060   (0x0048)  MISSED
};

/// Class /Script/Archives.HasRecentlyActiveModifierFlagCondition
/// Size: 0x0070 (0x000048 - 0x0000B8)
class UHasRecentlyActiveModifierFlagCondition : public UEvaluatorCondition
{ 
public:
	ERecentlyActiveModifierType                        _type;                                                      // 0x0048   (0x0001)  
	ERecentlyActiveModifierTimerStartType              _timerStartType;                                            // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x004A   (0x0006)  MISSED
	TArray<FGameplayTag>                               _modifierTags;                                              // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_6[0x58];                                      // 0x0060   (0x0058)  MISSED
};

/// Class /Script/Archives.HasRecentlyDeployedK32PodWhileInChaseAndEventFromSamePod
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UHasRecentlyDeployedK32PodWhileInChaseAndEventFromSamePod : public UHasRecentEventHappenedWhileInStateTagCondition
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00A8   (0x0010)  MISSED
};

/// Class /Script/Archives.HasStatusEffectEvaluatorCondition
/// Size: 0x0010 (0x000048 - 0x000058)
class UHasStatusEffectEvaluatorCondition : public UEvaluatorCondition
{ 
public:
	TArray<class UClass*>                              _statusEffectList;                                          // 0x0048   (0x0010)  
};

/// Class /Script/Archives.HasStatusEffectFromPlayerEvaluatorCondition
/// Size: 0x0010 (0x000048 - 0x000058)
class UHasStatusEffectFromPlayerEvaluatorCondition : public UEvaluatorCondition
{ 
public:
	TArray<class UClass*>                              _statusEffectList;                                          // 0x0048   (0x0010)  
};

/// Class /Script/Archives.HasTeleportedOrAssimilatedFromK32PodQEEvaluator
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UHasTeleportedOrAssimilatedFromK32PodQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
};

/// Class /Script/Archives.HexTotemsAtEndTrialCountQEEvaluator
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UHexTotemsAtEndTrialCountQEEvaluator : public UEndOfGameQEEvaluator
{ 
public:
};

/// Class /Script/Archives.NearKillerQEEvaluator
/// Size: 0x0030 (0x0000B8 - 0x0000E8)
class UNearKillerQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x00B8   (0x0030)  MISSED


	/// Functions
	// Function /Script/Archives.NearKillerQEEvaluator.OnRangeChanged
	// void OnRangeChanged(bool inRange);                                                                                    // [0x4dd4d80] Final|Native|Protected 
};

/// Class /Script/Archives.HideNearKillerQEEvaluator
/// Size: 0x0028 (0x0000E8 - 0x000110)
class UHideNearKillerQEEvaluator : public UNearKillerQEEvaluator
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x00E8   (0x0028)  MISSED


	/// Functions
	// Function /Script/Archives.HideNearKillerQEEvaluator.OnSlashHarpoonedCamper
	// void OnSlashHarpoonedCamper(FGameplayTag gameEventType, FGameEventData& GameEventData);                               // [0x4dd0150] Final|Native|Private|HasOutParms 
	// Function /Script/Archives.HideNearKillerQEEvaluator.OnHarpoonHit
	// void OnHarpoonHit(FGameplayTag gameEventType, FGameEventData& GameEventData);                                         // [0x4dd0000] Final|Native|Private|HasOutParms 
	// Function /Script/Archives.HideNearKillerQEEvaluator.OnFinishedPlaying
	// void OnFinishedPlaying(FGameplayTag gameEventType, FGameEventData& GameEventData);                                    // [0x4dcfef0] Final|Native|Public|HasOutParms 
	// Function /Script/Archives.HideNearKillerQEEvaluator.OnChaseStart
	// void OnChaseStart(class ADBDPlayer* chasedSurvivor);                                                                  // [0x4dcfc40] Final|Native|Private 
	// Function /Script/Archives.HideNearKillerQEEvaluator.OnChaseEnd
	// void OnChaseEnd(class ADBDPlayer* chasedSurvivor, float chaseTime);                                                   // [0x4dcfb70] Final|Native|Private 
	// Function /Script/Archives.HideNearKillerQEEvaluator.OnCamperBreakFreeFromHarpoon
	// void OnCamperBreakFreeFromHarpoon(FGameplayTag gameEventType, FGameEventData& GameEventData);                         // [0x4dcfa60] Final|Native|Private|HasOutParms 
};

/// Class /Script/Archives.HideInTerrorRadiusQEEvaluator
/// Size: 0x0028 (0x000110 - 0x000138)
class UHideInTerrorRadiusQEEvaluator : public UHideNearKillerQEEvaluator
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0110   (0x0028)  MISSED
};

/// Class /Script/Archives.HideNearKillerWhileInjuredQEEvaluator
/// Size: 0x0000 (0x000110 - 0x000110)
class UHideNearKillerWhileInjuredQEEvaluator : public UHideNearKillerQEEvaluator
{ 
public:
};

/// Class /Script/Archives.MaxEventCountQEEvaluator
/// Size: 0x0038 (0x0000B8 - 0x0000F0)
class UMaxEventCountQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	TArray<FGameplayTag>                               _incrementEventCount;                                       // 0x00B8   (0x0010)  
	TArray<FGameplayTag>                               _decrementEventCount;                                       // 0x00C8   (0x0010)  
	TArray<FGameplayTag>                               _stopEventCount;                                            // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00E8   (0x0008)  MISSED


	/// Functions
	// Function /Script/Archives.MaxEventCountQEEvaluator.OnStopEventCount
	// void OnStopEventCount(FGameplayTag gameEventType, FGameEventData& GameEventData);                                     // [0x4dd4e90] Final|Native|Private|HasOutParms 
	// Function /Script/Archives.MaxEventCountQEEvaluator.OnIncrementEventCount
	// void OnIncrementEventCount(FGameplayTag gameEventType, FGameEventData& GameEventData);                                // [0x4dd4a30] Final|Native|Private|HasOutParms 
	// Function /Script/Archives.MaxEventCountQEEvaluator.OnDecrementEventCount
	// void OnDecrementEventCount(FGameplayTag gameEventType, FGameEventData& GameEventData);                                // [0x4dd4920] Final|Native|Private|HasOutParms 
};

/// Class /Script/Archives.HitDifferentInFrenzyMaxCountQEEvaluator
/// Size: 0x0050 (0x0000F0 - 0x000140)
class UHitDifferentInFrenzyMaxCountQEEvaluator : public UMaxEventCountQEEvaluator
{ 
public:
	SDK_UNDEFINED(80,3604) /* TSet<TWeakObjectPtr<AActor*>> */ __um(_targetList);                                  // 0x00F0   (0x0050)  
};

/// Class /Script/Archives.SurvivorHookSameTimeQEEvaluator
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class USurvivorHookSameTimeQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/Archives.SurvivorHookSameTimeQEEvaluator.OnSurvivorUnhooked
	// void OnSurvivorUnhooked(FGameplayTag gameEventType, FGameEventData& GameEventData);                                   // [0x4dda550] Native|Protected|HasOutParms 
	// Function /Script/Archives.SurvivorHookSameTimeQEEvaluator.OnSurvivorHooked
	// void OnSurvivorHooked(FGameplayTag gameEventType, FGameEventData& GameEventData);                                     // [0x4dda440] Native|Protected|HasOutParms 
};

/// Class /Script/Archives.HookSameTimeBasementQEEvaluator
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UHookSameTimeBasementQEEvaluator : public USurvivorHookSameTimeQEEvaluator
{ 
public:
};

/// Class /Script/Archives.IgnoreIfEventRecentlyEvaluatorCondition
/// Size: 0x0010 (0x000048 - 0x000058)
class UIgnoreIfEventRecentlyEvaluatorCondition : public UEvaluatorCondition
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0048   (0x0010)  MISSED
};

/// Class /Script/Archives.IgnoreSkillCheckTypesEvaluatorCondition
/// Size: 0x0058 (0x000048 - 0x0000A0)
class UIgnoreSkillCheckTypesEvaluatorCondition : public UEvaluatorCondition
{ 
public:
	bool                                               _ignoreAllButConsideredTypes;                               // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	SDK_UNDEFINED(80,3605) /* TSet<ESkillCheckCustomType> */ __um(_consideredTypes);                               // 0x0050   (0x0050)  
};

/// Class /Script/Archives.InChaseTargetStateTagEvaluatorCondition
/// Size: 0x0010 (0x000048 - 0x000058)
class UInChaseTargetStateTagEvaluatorCondition : public UEvaluatorCondition
{ 
public:
	FGameplayTag                                       _gameplayTag;                                               // 0x0048   (0x000C)  
	EInChaseTargetLogic                                _logic;                                                     // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0055   (0x0003)  MISSED
};

/// Class /Script/Archives.IncrementOnModifierAddedEvaluator
/// Size: 0x0068 (0x0000B8 - 0x000120)
class UIncrementOnModifierAddedEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	TArray<FGameplayTag>                               _trackedModifierFlag;                                       // 0x00B8   (0x0010)  
	bool                                               _incrementOnFlagAddedOnKiller;                              // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x57];                                      // 0x00C9   (0x0057)  MISSED
};

/// Class /Script/Archives.IncrementOnStateTagAddedEvaluator
/// Size: 0x0048 (0x0000B8 - 0x000100)
class UIncrementOnStateTagAddedEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	FGameplayTagContainer                              _trackedStateTags;                                          // 0x00B8   (0x0020)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x00D8   (0x0028)  MISSED
};

/// Class /Script/Archives.InDirectionOfKillerQEEvaluator
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UInDirectionOfKillerQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	class ADBDPlayer*                                  _killer;                                                    // 0x00B8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00C0   (0x0010)  MISSED
};

/// Class /Script/Archives.InflictMadnessBaseQEEvaluator
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UInflictMadnessBaseQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	int32_t                                            _requiredTier;                                              // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00BC   (0x0004)  MISSED
};

/// Class /Script/Archives.InjuredDyingHookManyQEEvaluator
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UInjuredDyingHookManyQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
};

/// Class /Script/Archives.InjuredDyingMultipleQEEvaluator
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UInjuredDyingMultipleQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
};

/// Class /Script/Archives.InLockerNearKillerQEEvaluator
/// Size: 0x0008 (0x0000E8 - 0x0000F0)
class UInLockerNearKillerQEEvaluator : public UNearKillerQEEvaluator
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00E8   (0x0008)  MISSED


	/// Functions
	// Function /Script/Archives.InLockerNearKillerQEEvaluator.OnClosetHideExit
	// void OnClosetHideExit(FGameplayTag gameEventType, FGameEventData& GameEventData);                                     // [0x4dcfde0] Final|Native|Private|HasOutParms 
	// Function /Script/Archives.InLockerNearKillerQEEvaluator.OnClosetHideEnter
	// void OnClosetHideEnter(FGameplayTag gameEventType, FGameEventData& GameEventData);                                    // [0x4dcfcd0] Final|Native|Private|HasOutParms 
};

/// Class /Script/Archives.InstigatorHookCountQEEvaluator
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UInstigatorHookCountQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Class /Script/Archives.InstigatorInBasementQEEvaluator
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UInstigatorInBasementQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
};

/// Class /Script/Archives.InstigatorInBasementPercentQEEvaluator
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UInstigatorInBasementPercentQEEvaluator : public UInstigatorInBasementQEEvaluator
{ 
public:
};

/// Class /Script/Archives.InstigatorTargetDistanceEvaluatorCondition
/// Size: 0x0008 (0x000048 - 0x000050)
class UInstigatorTargetDistanceEvaluatorCondition : public UEvaluatorCondition
{ 
public:
	EInstigatorTargetDistanceComparator                _comparator;                                                // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/Archives.IsEventAttackOfTypeQEEvaluator
/// Size: 0x0028 (0x0000B8 - 0x0000E0)
class UIsEventAttackOfTypeQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	TArray<FGameplayTag>                               _attackEvent;                                               // 0x00B8   (0x0010)  
	EAttackerSubject                                   _attackerSubject;                                           // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00C9   (0x0007)  MISSED
	TArray<EAttackType>                                _attackOfType;                                              // 0x00D0   (0x0010)  
};

/// Class /Script/Archives.IsInteractingEvaluatorCondition
/// Size: 0x0000 (0x000048 - 0x000048)
class UIsInteractingEvaluatorCondition : public UEvaluatorCondition
{ 
public:
};

/// Class /Script/Archives.IsPerformingInteractionEvaluatorCondition
/// Size: 0x0010 (0x000048 - 0x000058)
class UIsPerformingInteractionEvaluatorCondition : public UEvaluatorCondition
{ 
public:
	TArray<FGameplayTag>                               _semanticTags;                                              // 0x0048   (0x0010)  
};

/// Class /Script/Archives.IsTargetOfTypeEvaluatorCondition
/// Size: 0x0010 (0x000048 - 0x000058)
class UIsTargetOfTypeEvaluatorCondition : public UEvaluatorCondition
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0048   (0x0010)  MISSED
};

/// Class /Script/Archives.ItemConsumedQEEvaluator
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UItemConsumedQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/Archives.ItemConsumedQEEvaluator.OnItemConsumed
	// void OnItemConsumed(FGameplayTag gameEventType, FGameEventData& GameEventData);                                       // [0x4dd4b40] Final|Native|Private|HasOutParms 
};

/// Class /Script/Archives.ItemPerformedQEEvaluator
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UItemPerformedQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
};

/// Class /Script/Archives.ItemPerformedPercentQEEvaluator
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UItemPerformedPercentQEEvaluator : public UItemPerformedQEEvaluator
{ 
public:
};

/// Class /Script/Archives.ItemUsedQEEvaluator
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UItemUsedQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/Archives.ItemUsedQEEvaluator.OnItemUsed
	// void OnItemUsed(FGameplayTag gameEventType, FGameEventData& GameEventData);                                           // [0x4dd4c50] Final|Native|Private|HasOutParms 
};

/// Class /Script/Archives.KillerNearRedHerringGeneratorQEEvaluator
/// Size: 0x0060 (0x0000B8 - 0x000118)
class UKillerNearRedHerringGeneratorQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x00B8   (0x0060)  MISSED
};

/// Class /Script/Archives.LivingSurvivorsCountQEEvaluator
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class ULivingSurvivorsCountQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00B8   (0x0010)  MISSED


	/// Functions
	// Function /Script/Archives.LivingSurvivorsCountQEEvaluator.OnSurvivorRemoved
	// void OnSurvivorRemoved(class ACamperPlayer* survivorRemoved);                                                         // [0x4dd5030] Final|Native|Private 
	// Function /Script/Archives.LivingSurvivorsCountQEEvaluator.OnSurvivorAdded
	// void OnSurvivorAdded(class ACamperPlayer* survivorAdded);                                                             // [0x4dd4fa0] Final|Native|Private 
};

/// Class /Script/Archives.MaxSameTargetQEEvaluator
/// Size: 0x0050 (0x0000B8 - 0x000108)
class UMaxSameTargetQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	SDK_UNDEFINED(80,3606) /* TMap<TWeakObjectPtr<AActor*>, int32_t> */ __um(_targetList);                         // 0x00B8   (0x0050)  
};

/// Class /Script/Archives.MultipleEventsBeforeResetEventQEEvaluator
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UMultipleEventsBeforeResetEventQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	TArray<FGameplayTag>                               _gameEventsResettingProgress;                               // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Class /Script/Archives.MultipleEventsInSameFrameQuestEvaluator
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class UMultipleEventsInSameFrameQuestEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00B8   (0x0010)  MISSED
};

/// Class /Script/Archives.MultipleEventsInTimeFrameQEEvaluator
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UMultipleEventsInTimeFrameQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00B8   (0x0018)  MISSED
};

/// Class /Script/Archives.MultipleMadSurvivorsQEEvaluator
/// Size: 0x0058 (0x0000B8 - 0x000110)
class UMultipleMadSurvivorsQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	int32_t                                            _requiredTier;                                              // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00BC   (0x0004)  MISSED
	SDK_UNDEFINED(80,3607) /* TSet<TWeakObjectPtr<AActor*>> */ __um(_madSurvivors);                                // 0x00C0   (0x0050)  
};

/// Struct /Script/Archives.GameObjectQuery
/// Size: 0x0058 (0x000000 - 0x000058)
struct FGameObjectQuery
{ 
	ENearGameObjectQuestObjectType                     Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FGameplayTagQuery                                  GameplayTagQuery;                                           // 0x0008   (0x0048)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0050   (0x0008)  MISSED
};

/// Class /Script/Archives.NearGameObjectEvaluatorCondition
/// Size: 0x0018 (0x000048 - 0x000060)
class UNearGameObjectEvaluatorCondition : public UEvaluatorCondition
{ 
public:
	EQueryConditionType                                _conditionType;                                             // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	TArray<FGameObjectQuery>                           _gameObjectsQueries;                                        // 0x0050   (0x0010)  
};

/// Class /Script/Archives.NearGameObjectAtDiversionLocationEvaluatorCondition
/// Size: 0x0000 (0x000060 - 0x000060)
class UNearGameObjectAtDiversionLocationEvaluatorCondition : public UNearGameObjectEvaluatorCondition
{ 
public:
};

/// Class /Script/Archives.NearMeEvaluatorCondition
/// Size: 0x0008 (0x000048 - 0x000050)
class UNearMeEvaluatorCondition : public UEvaluatorCondition
{ 
public:
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x0048   (0x0004)  MISSED
	bool                                               _questOwnerCanBeSubjectOfEvent;                             // 0x004C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x004D   (0x0003)  MISSED
};

/// Class /Script/Archives.NearTrackedActorComponent
/// Size: 0x0028 (0x0000B8 - 0x0000E0)
class UNearTrackedActorComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,3608) /* FMulticastInlineDelegate */ __um(IsWithinRangeDelegate);                             // 0x00B8   (0x0010)  
	float                                              _distanceThreshold;                                         // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x00CC   (0x0014)  MISSED


	/// Functions
	// Function /Script/Archives.NearTrackedActorComponent.StopTrackingActor
	// void StopTrackingActor(class AActor* Actor);                                                                          // [0x4dd51d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Archives.NearTrackedActorComponent.StartTrackingActor
	// void StartTrackingActor(class AActor* Actor);                                                                         // [0x4dd5140] Final|Native|Public|BlueprintCallable 
	// Function /Script/Archives.NearTrackedActorComponent.SetDistanceThreshold
	// void SetDistanceThreshold(float value);                                                                               // [0x4dd50c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Archives.NearTrackedActorComponent.OnIsWithinRangeChanged__DelegateSignature
	// void OnIsWithinRangeChanged__DelegateSignature(bool isWithinRange, class AActor* trackedActor);                       // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/Archives.NearTrackedActorComponent.IsActorWithinRange
	// bool IsActorWithinRange(class AActor* Actor);                                                                         // [0x4dd4770] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Archives.NotEvaluatorCondition
/// Size: 0x0010 (0x000048 - 0x000058)
class UNotEvaluatorCondition : public UEvaluatorCondition
{ 
public:
	class UClass*                                      _conditionToNegateClass;                                    // 0x0048   (0x0008)  
	class UEvaluatorCondition*                         _conditionPrivate;                                          // 0x0050   (0x0008)  
};

/// Class /Script/Archives.NurseChainBlinkNumberQEEvaluator
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UNurseChainBlinkNumberQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Class /Script/Archives.OniDashHitDiffInTimeQEEvaluator
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class UOniDashHitDiffInTimeQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	class AActor*                                      _previousTarget;                                            // 0x00C0   (0x0008)  
};

/// Class /Script/Archives.OrangeGlyphAdjustmentStrategy
/// Size: 0x0000 (0x000030 - 0x000030)
class UOrangeGlyphAdjustmentStrategy : public USpecialBehaviourIterativeWeightAdjustmentStrategy
{ 
public:
};

/// Class /Script/Archives.OrangeGlyphComponent
/// Size: 0x00A0 (0x0000B8 - 0x000158)
class UOrangeGlyphComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,3609) /* FMulticastInlineDelegate */ __um(ChallengeCompletedDelegate);                        // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3610) /* FMulticastInlineDelegate */ __um(AffectedActionTakenDelegate);                       // 0x00C8   (0x0010)  
	int32_t                                            _numHookedSurvivorsRequired;                                // 0x00D8   (0x0004)  
	int32_t                                            _numInactiveHookStatesToDespawn;                            // 0x00DC   (0x0004)  
	int32_t                                            _numHookActionsWhileActive;                                 // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	TArray<FGameplayTag>                               _hookEvents;                                                // 0x00E8   (0x0010)  
	TArray<FGameplayTag>                               _hookStateEvents;                                           // 0x00F8   (0x0010)  
	TArray<class UClass*>                              _statusEffectClasses;                                       // 0x0108   (0x0010)  
	TArray<FGameplayTag>                               _eventsThatCauseEffects;                                    // 0x0118   (0x0010)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x0128   (0x0030)  MISSED


	/// Functions
	// Function /Script/Archives.OrangeGlyphComponent.Cosmetic_ApplyNegativeEffects
	// void Cosmetic_ApplyNegativeEffects(class ADBDPlayer* affectedPlayer);                                                 // [0x4dd4680] Final|BlueprintCosmetic|Native|Private 
};

/// Class /Script/Archives.PinkGlyphComponent
/// Size: 0x0400 (0x0000B8 - 0x0004B8)
class UPinkGlyphComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,3611) /* FMulticastInlineDelegate */ __um(OnMarkProgressChanged_Cosmetic);                    // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3612) /* FMulticastInlineDelegate */ __um(OnStartMarking_Cosmetic);                           // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,3613) /* FMulticastInlineDelegate */ __um(OnStopMarking_Cosmetic);                            // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,3614) /* FMulticastInlineDelegate */ __um(OnFullyMarked_Cosmetic);                            // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,3615) /* FMulticastInlineDelegate */ __um(OnStartTeleport_Cosmetic);                          // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,3616) /* FMulticastInlineDelegate */ __um(OnPostTeleport_Cosmetic);                           // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,3617) /* FMulticastInlineDelegate */ __um(OnSurvivorEnteredRange_Cosmetic);                   // 0x0118   (0x0010)  
	SDK_UNDEFINED(16,3618) /* FMulticastInlineDelegate */ __um(OnHasLineOfSight_Cosmetic);                         // 0x0128   (0x0010)  
	FDBDTunableRowHandle                               _gracePeriodDuration;                                       // 0x0138   (0x0028)  
	FDBDTunableRowHandle                               _removeMarkedProgressDuration;                              // 0x0160   (0x0028)  
	FDBDTunableRowHandle                               _exposedStatusEffectDuration;                               // 0x0188   (0x0028)  
	FDBDTunableRowHandle                               _markTimeNeeded;                                            // 0x01B0   (0x0028)  
	class UClass*                                      _exposedStatusEffect;                                       // 0x01D8   (0x0008)  
	FDBDTunableRowHandle                               _minimumTeleportationDistance;                              // 0x01E0   (0x0028)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0208   (0x0004)  MISSED
	float                                              _checkLineOfSightDelay;                                     // 0x020C   (0x0004)  
	FDBDTunableRowHandle                               _movementRange;                                             // 0x0210   (0x0028)  
	FDBDTunableRowHandle                               _teleportDelay;                                             // 0x0238   (0x0028)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0260   (0x0008)  MISSED
	FSpeedBasedNetSyncedValue                          _markedProgress;                                            // 0x0268   (0x0038)  
	bool                                               _isPinkGlyphActive;                                         // 0x02A0   (0x0001)  
	bool                                               _isMarking;                                                 // 0x02A1   (0x0001)  
	bool                                               _hasLineOfSightToSurvivor;                                  // 0x02A2   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6D];                                      // 0x02A3   (0x006D)  MISSED
	TArray<class UTileSpawnPoint*>                     _teleportPoints;                                            // 0x0310   (0x0010)  
	unsigned char                                      UnknownData03_6[0x198];                                     // 0x0320   (0x0198)  MISSED


	/// Functions
	// Function /Script/Archives.PinkGlyphComponent.OnRep_MarkedProgress
	// void OnRep_MarkedProgress();                                                                                          // [0x4dd4e70] Final|Native|Private 
	// Function /Script/Archives.PinkGlyphComponent.OnRep_IsPinkGlyphActive
	// void OnRep_IsPinkGlyphActive();                                                                                       // [0x4dd4e50] Final|Native|Private|Const 
	// Function /Script/Archives.PinkGlyphComponent.OnRep_IsMarking
	// void OnRep_IsMarking();                                                                                               // [0x4dd4e30] Final|Native|Private|Const 
	// Function /Script/Archives.PinkGlyphComponent.OnRep_HasLineOfSightToSurvivor
	// void OnRep_HasLineOfSightToSurvivor();                                                                                // [0x4dd4e10] Final|Native|Private|Const 
	// Function /Script/Archives.PinkGlyphComponent.OnMarkProgressChanged__DelegateSignature
	// void OnMarkProgressChanged__DelegateSignature(float progress);                                                        // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/Archives.PinkGlyphComponent.OnGlyphEvent__DelegateSignature
	// void OnGlyphEvent__DelegateSignature();                                                                               // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/Archives.PinkGlyphComponent.Multicast_TeleportGlyph
	// void Multicast_TeleportGlyph(FVector Location);                                                                       // [0x4dd48a0] Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults 
	// Function /Script/Archives.PinkGlyphComponent.Multicast_StartGlyphPreTeleport
	// void Multicast_StartGlyphPreTeleport();                                                                               // [0x4dd4880] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/Archives.PinkGlyphComponent.Multicast_IsFullyMarkedSurvivor
	// void Multicast_IsFullyMarkedSurvivor();                                                                               // [0x4dd4860] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/Archives.PinkGlyphComponent.Multicast_EnterGlyphRange
	// void Multicast_EnterGlyphRange();                                                                                     // [0x4dd4840] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/Archives.PinkGlyphComponent.IsMarking
	// bool IsMarking();                                                                                                     // [0x4dd4810] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Archives.PinkGlyphComponent.Authority_TeleportGlyph
	// void Authority_TeleportGlyph();                                                                                       // [0x4dd4660] Final|Native|Private 
	// Function /Script/Archives.PinkGlyphComponent.Authority_OnSurvivorInMovementRangeChanged
	// void Authority_OnSurvivorInMovementRangeChanged(bool inRange);                                                        // [0x4dd4540] Final|Native|Private 
	// Function /Script/Archives.PinkGlyphComponent.Authority_OnPlayerBreachedRangeThreshold
	// void Authority_OnPlayerBreachedRangeThreshold(bool isWithinRange, class AActor* trackedActor);                        // [0x4dd4470] Final|Native|Private 
	// Function /Script/Archives.PinkGlyphComponent.Authority_OnLevelReadyToPlay
	// void Authority_OnLevelReadyToPlay();                                                                                  // [0x4dd4450] Final|Native|Private 
	// Function /Script/Archives.PinkGlyphComponent.Authority_OnDamageStateChanged
	// void Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState newDamageState);            // [0x4dd4380] Final|Native|Private 
};

/// Class /Script/Archives.PlagueCorruptUniqueTargetsQEEvaluator
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class UPlagueCorruptUniqueTargetsQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	class AActor*                                      _previousTarget;                                            // 0x00B8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00C0   (0x0008)  MISSED
};

/// Class /Script/Archives.PreventExitGateOpenQEEvaluator
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UPreventExitGateOpenQEEvaluator : public UEndOfGameQEEvaluator
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/Archives.PreventExitGateOpenQEEvaluator.OnExitGateOpened
	// void OnExitGateOpened(FGameplayTag gameEventType, FGameEventData& GameEventData);                                     // [0x4dc8a20] Final|Native|Public|HasOutParms 
};

/// Class /Script/Archives.PurpleGlyphComponent
/// Size: 0x0198 (0x0000B8 - 0x000250)
class UPurpleGlyphComponent : public UActorComponent
{ 
public:
	TArray<class UTileSpawnPoint*>                     _survivorSpawns;                                            // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x00C8   (0x0018)  MISSED
	FAIMoveRequest                                     MoveRequest;                                                // 0x00E0   (0x0040)  
	class UClass*                                      _navFilter;                                                 // 0x0120   (0x0008)  
	FDBDTunableRowHandle                               _auraRevealDuration;                                        // 0x0128   (0x0028)  
	FDBDTunableRowHandle                               _nextLocationDistanceMinimum;                               // 0x0150   (0x0028)  
	FDBDTunableRowHandle                               _nextLocationDistanceMaximum;                               // 0x0178   (0x0028)  
	FDBDTunableRowHandle                               _movementAcceptanceRadius;                                  // 0x01A0   (0x0028)  
	FDBDTunableRowHandle                               _distanceToAccelerate;                                      // 0x01C8   (0x0028)  
	FDBDTunableRowHandle                               _distanceToDecelerate;                                      // 0x01F0   (0x0028)  
	FLinearColor                                       OutlineColor;                                               // 0x0218   (0x0010)  
	class UBloodTrailSettings*                         _bloodTrailSettings;                                        // 0x0228   (0x0008)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0230   (0x0020)  MISSED


	/// Functions
	// Function /Script/Archives.PurpleGlyphComponent.StopGlyphMovement
	// void StopGlyphMovement(bool useDeceleration);                                                                         // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/Archives.PurpleGlyphComponent.StartGlyphMovement
	// void StartGlyphMovement();                                                                                            // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/Archives.PurpleGlyphComponent.ResumeGlyphMovement
	// void ResumeGlyphMovement(bool useAcceleration);                                                                       // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/Archives.PurpleGlyphComponent.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x4dd4d60] Final|Native|Private 
	// Function /Script/Archives.PurpleGlyphComponent.GetTrackedPlayer
	// class ADBDPlayer* GetTrackedPlayer();                                                                                 // [0x4dd4740] Final|Native|Public|BlueprintCallable 
	// Function /Script/Archives.PurpleGlyphComponent.GetOwningGlyph
	// class AGlyph* GetOwningGlyph();                                                                                       // [0x4dd4710] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Archives.PurpleGlyphComponent.Authority_StartMoveWithAcceleration
	// void Authority_StartMoveWithAcceleration(FVector& goalLocation);                                                      // [0x4dd45d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Archives.PurpleGlyphComponent.Authority_MoveTo
	// void Authority_MoveTo(FVector Location);                                                                              // [0x4dd42f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Archives.PurpleGlyphComponent.Authority_GetNextLocation
	// FVector Authority_GetNextLocation();                                                                                  // [0x4dd42b0] Final|Native|Private|HasDefaults|BlueprintCallable 
	// Function /Script/Archives.PurpleGlyphComponent.Authority_AbortMoveWithDeceleration
	// void Authority_AbortMoveWithDeceleration();                                                                           // [0x4dd4290] Final|Native|Public|BlueprintCallable 
	// Function /Script/Archives.PurpleGlyphComponent.Authority_AbortMove
	// void Authority_AbortMove();                                                                                           // [0x4dd4270] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Archives.QuestEventsHandler
/// Size: 0x0060 (0x0000B8 - 0x000118)
class UQuestEventsHandler : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x00B8   (0x0020)  MISSED
	TArray<class UQuestEventEvaluatorBase*>            _evaluatorList;                                             // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData01_5[0x20];                                      // 0x00E8   (0x0020)  MISSED
	class UArchiveStoriesContainer*                    _archiveStoriesContainer;                                   // 0x0108   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0110   (0x0008)  MISSED


	/// Functions
	// Function /Script/Archives.QuestEventsHandler.OnPlayerGameStateChanged
	// void OnPlayerGameStateChanged(class ADBDPlayerState* PlayerState, EGameState GameState);                              // [0x4dda370] Final|Native|Private 
	// Function /Script/Archives.QuestEventsHandler.OnGameEnded
	// void OnGameEnded(EEndGameReason Reason);                                                                              // [0x4dda1c0] Final|Native|Private 
	// Function /Script/Archives.QuestEventsHandler.OnFinishedPlaying
	// void OnFinishedPlaying(FGameplayTag gameEventType, FGameEventData& GameEventData);                                    // [0x4dda0b0] Final|Native|Private|HasOutParms 
	// Function /Script/Archives.QuestEventsHandler.DBD_ShowInGameCurrentQuestInfos
	// void DBD_ShowInGameCurrentQuestInfos();                                                                               // [0x4dd9f80] Final|Exec|Native|Public 
	// Function /Script/Archives.QuestEventsHandler.DBD_InGameAddProgressionToCurrentQuest
	// void DBD_InGameAddProgressionToCurrentQuest(int32_t Amount);                                                          // [0x4dd9ef0] Final|Exec|Native|Public 
};

/// Class /Script/Archives.QuestEventsHandlerTest
/// Size: 0x0008 (0x000118 - 0x000120)
class UQuestEventsHandlerTest : public UQuestEventsHandler
{ 
public:
	class ADBDPlayer*                                  _dbdPlayer;                                                 // 0x0118   (0x0008)  
};

/// Class /Script/Archives.QuestEventsHandlerUtilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UQuestEventsHandlerUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Archives.QuestEventsHandlerUtilities.InitializeQuestEventHandler
	// void InitializeQuestEventHandler(class UQuestEventsHandler* QuestEventsHandler);                                      // [0x4dd9fa0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Archives.RepairCoopQEEvaluator
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class URepairCoopQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Class /Script/Archives.ReturnTheFavorQEEvaluator
/// Size: 0x00A0 (0x0000B8 - 0x000158)
class UReturnTheFavorQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	SDK_UNDEFINED(80,3619) /* TSet<FGameplayTag> */    __um(_favorToReturnEvents);                                 // 0x00B8   (0x0050)  
	SDK_UNDEFINED(80,3620) /* TSet<TWeakObjectPtr<ADBDPlayer*>> */ __um(_instigatorList);                          // 0x0108   (0x0050)  
};

/// Class /Script/Archives.ScreamSpecialCaseQEEvaluator
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UScreamSpecialCaseQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
};

/// Class /Script/Archives.SearchItemRarityQEEvaluator
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class USearchItemRarityQEEvaluator : public UItemRarityQEEvaluator
{ 
public:


	/// Functions
	// Function /Script/Archives.SearchItemRarityQEEvaluator.OnItemSpawnedFromChest
	// void OnItemSpawnedFromChest(FGameplayTag gameEventType, FGameEventData& GameEventData);                               // [0x4dda240] Final|Native|Public|HasOutParms 
};

/// Class /Script/Archives.SecondHookStageReachedQEEvaluator
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class USecondHookStageReachedQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
};

/// Class /Script/Archives.SimultaneousPlayerWithFlagQEEvaluator
/// Size: 0x0060 (0x0000B8 - 0x000118)
class USimultaneousPlayerWithFlagQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	TArray<class ADBDPlayer*>                          _inGamePlayers;                                             // 0x00C0   (0x0010)  
	FGameplayTag                                       _modifierFlag;                                              // 0x00D0   (0x000C)  
	unsigned char                                      UnknownData01_6[0x3C];                                      // 0x00DC   (0x003C)  MISSED
};

/// Class /Script/Archives.SlasherIsCarryingQEEvaluator
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class USlasherIsCarryingQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
};

/// Class /Script/Archives.SpendTimeWithGameplayTagQEEvaluator
/// Size: 0x0080 (0x0000B8 - 0x000138)
class USpendTimeWithGameplayTagQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	bool                                               _incrementOnOtherPlayers;                                   // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7F];                                      // 0x00B9   (0x007F)  MISSED
};

/// Class /Script/Archives.SpendTimeWithModifierFlagQEEvaluator
/// Size: 0x0060 (0x000138 - 0x000198)
class USpendTimeWithModifierFlagQEEvaluator : public USpendTimeWithGameplayTagQEEvaluator
{ 
public:
	TArray<FGameplayTag>                               _modifierFlags;                                             // 0x0138   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0148   (0x0050)  MISSED
};

/// Class /Script/Archives.SpendTimeWithStateTagQEEvaluator
/// Size: 0x0020 (0x000138 - 0x000158)
class USpendTimeWithStateTagQEEvaluator : public USpendTimeWithGameplayTagQEEvaluator
{ 
public:
	TArray<FGameplayTag>                               _stateTags;                                                 // 0x0138   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0148   (0x0010)  MISSED
};

/// Class /Script/Archives.StateTagEvaluatorCondition
/// Size: 0x0010 (0x000048 - 0x000058)
class UStateTagEvaluatorCondition : public UEvaluatorCondition
{ 
public:
	FGameplayTag                                       _gameplayTag;                                               // 0x0048   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Class /Script/Archives.SurvivorDownedFromHealthyQEEvaluator
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class USurvivorDownedFromHealthyQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
};

/// Class /Script/Archives.SurvivorHasHealthStateEvaluatorCondition
/// Size: 0x0008 (0x000048 - 0x000050)
class USurvivorHasHealthStateEvaluatorCondition : public UEvaluatorCondition
{ 
public:
	ECamperDamageState                                 _specifiedDamageState;                                      // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/Archives.SurvivorNearMeEvaluatorCondition
/// Size: 0x0008 (0x000048 - 0x000050)
class USurvivorNearMeEvaluatorCondition : public UEvaluatorCondition
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Class /Script/Archives.TargetHasEndedChaseWithoutHitEvaluator
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UTargetHasEndedChaseWithoutHitEvaluator : public UQuestEventEvaluatorBase
{ 
public:
};

/// Class /Script/Archives.TargetInBasementQEEvaluator
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UTargetInBasementQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
};

/// Class /Script/Archives.TargetIsObsessionQEEvaluator
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UTargetIsObsessionQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
};

/// Class /Script/Archives.TargetOfEventRecentlyQEEvaluator
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UTargetOfEventRecentlyQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	FGameplayTag                                       _firstGameEvent;                                            // 0x00C0   (0x000C)  
	bool                                               _secondEventOnSelf;                                         // 0x00CC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00CD   (0x0003)  MISSED
};

/// Class /Script/Archives.TargetTriggeredEventRecentlyQEEvaluator
/// Size: 0x0060 (0x0000B8 - 0x000118)
class UTargetTriggeredEventRecentlyQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x54];                                      // 0x00B8   (0x0054)  MISSED
	FGameplayTag                                       _gameEvent;                                                 // 0x010C   (0x000C)  
};

/// Class /Script/Archives.TargetWasDamagedBySpecialAttackRecentlyEvaluator
/// Size: 0x00B8 (0x0000B8 - 0x000170)
class UTargetWasDamagedBySpecialAttackRecentlyEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_2[0xA0];                                      // 0x00B8   (0x00A0)  MISSED
	float                                              _timeLimit;                                                 // 0x0158   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x015C   (0x0004)  MISSED
	TArray<FGameplayTag>                               _specialCaseGameEvents;                                     // 0x0160   (0x0010)  
};

/// Class /Script/Archives.TargetWasTargetedByEventRecentlyEvaluator
/// Size: 0x0068 (0x0000B8 - 0x000120)
class UTargetWasTargetedByEventRecentlyEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_2[0x58];                                      // 0x00B8   (0x0058)  MISSED
	TArray<FGameplayTag>                               _gameEventsToTriggerFirst;                                  // 0x0110   (0x0010)  
};

/// Class /Script/Archives.TotalDistanceEvaluatorCondition
/// Size: 0x0060 (0x000048 - 0x0000A8)
class UTotalDistanceEvaluatorCondition : public UEvaluatorCondition
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0048   (0x0040)  MISSED
	TArray<FGameplayTag>                               _startTimerEvents;                                          // 0x0088   (0x0010)  
	TArray<FGameplayTag>                               _endTimerEvents;                                            // 0x0098   (0x0010)  
};

/// Class /Script/Archives.TotalDistanceWithStateTagEvaluatorCondition
/// Size: 0x0048 (0x0000A8 - 0x0000F0)
class UTotalDistanceWithStateTagEvaluatorCondition : public UTotalDistanceEvaluatorCondition
{ 
public:
	FGameplayTagQuery                                  _stateTagQuery;                                             // 0x00A8   (0x0048)  
};

/// Class /Script/Archives.TotemsAtEndTrialCountQEEvaluator
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UTotemsAtEndTrialCountQEEvaluator : public UEndOfGameQEEvaluator
{ 
public:
};

/// Class /Script/Archives.TriggerWithSameTargetWithinTimeQEEvaluator
/// Size: 0x0058 (0x0000B8 - 0x000110)
class UTriggerWithSameTargetWithinTimeQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x00B8   (0x0058)  MISSED
};

/// Class /Script/Archives.UniqueTargetIncrementQEEvaluator
/// Size: 0x0050 (0x0000B8 - 0x000108)
class UUniqueTargetIncrementQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	SDK_UNDEFINED(80,3621) /* TSet<TWeakObjectPtr<AActor*>> */ __um(_targetList);                                  // 0x00B8   (0x0050)  
};

/// Class /Script/Archives.UniqueTargetsInTimeQEEvaluator
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class UUniqueTargetsInTimeQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00B8   (0x0010)  MISSED
};

/// Class /Script/Archives.WhiteGlyphBasementComponent
/// Size: 0x00B0 (0x0000B8 - 0x000168)
class UWhiteGlyphBasementComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	SDK_UNDEFINED(16,3622) /* FMulticastInlineDelegate */ __um(OnReadyForInteraction);                             // 0x00D0   (0x0010)  
	float                                              _basementGlyphInteractionCoolDownTime;                      // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x84];                                      // 0x00E4   (0x0084)  MISSED


	/// Functions
	// Function /Script/Archives.WhiteGlyphBasementComponent.OnReadyForInteractionDelegate__DelegateSignature
	// void OnReadyForInteractionDelegate__DelegateSignature();                                                              // [0x61d2f50] MulticastDelegate|Public|Delegate 
	// Function /Script/Archives.WhiteGlyphBasementComponent.GetOwningGlyph
	// class AGlyph* GetOwningGlyph();                                                                                       // [0x4dd4710] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Archives.WhiteGlyphSpawnerComponent
/// Size: 0x0208 (0x0000B8 - 0x0002C0)
class UWhiteGlyphSpawnerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	class UClass*                                      _surfaceGlyphClass;                                         // 0x00D0   (0x0008)  
	FDBDTunableRowHandle                               _minDistanceFromBasement;                                   // 0x00D8   (0x0028)  
	FDBDTunableRowHandle                               _maxDistanceFromBasement;                                   // 0x0100   (0x0028)  
	float                                              _spawnDistanceDebug;                                        // 0x0128   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x012C   (0x0004)  MISSED
	FDBDTunableRowHandle                               _surfaceGlyphCoolDownTime;                                  // 0x0130   (0x0028)  
	class UWhiteGlyphSurfaceComponent*                 _lastSurfaceGlyphComponentDebug;                            // 0x0158   (0x0008)  
	TArray<class UTileSpawnPoint*>                     _spawnPointsCollection;                                     // 0x0160   (0x0010)  
	unsigned char                                      UnknownData02_6[0x150];                                     // 0x0170   (0x0150)  MISSED


	/// Functions
	// Function /Script/Archives.WhiteGlyphSpawnerComponent.GetOwningGlyph
	// class AGlyph* GetOwningGlyph();                                                                                       // [0x4dd4710] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Archives.WhiteGlyphSpawnerComponent.Authority_OnLevelReadyToPlay
	// void Authority_OnLevelReadyToPlay();                                                                                  // [0x4dd9e30] Final|Native|Private 
};

/// Class /Script/Archives.WhiteGlyphSurfaceComponent
/// Size: 0x0020 (0x0000B8 - 0x0000D8)
class UWhiteGlyphSurfaceComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	class UClass*                                      _fragileObjectBP;                                           // 0x00D0   (0x0008)  


	/// Functions
	// Function /Script/Archives.WhiteGlyphSurfaceComponent.Multicast_TeleportGlyph
	// void Multicast_TeleportGlyph(FVector Location);                                                                       // [0x4dda020] Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults 
	// Function /Script/Archives.WhiteGlyphSurfaceComponent.GetOwningGlyph
	// class AGlyph* GetOwningGlyph();                                                                                       // [0x4dd4710] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Archives.WithAllSurvivorsIncrementQEEvaluator
/// Size: 0x0058 (0x0000B8 - 0x000110)
class UWithAllSurvivorsIncrementQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	SDK_UNDEFINED(80,3623) /* TSet<TWeakObjectPtr<ACamperPlayer*>> */ __um(_targetList);                           // 0x00B8   (0x0050)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0108   (0x0008)  MISSED
};

/// Class /Script/Archives.WithPulledUpPalletQEEvaluator
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class UWithPulledUpPalletQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	TArray<class APallet*>                             _resetPallets;                                              // 0x00B8   (0x0010)  
};

/// Class /Script/Archives.YellowGlyphComponent
/// Size: 0x0078 (0x0000B8 - 0x000130)
class UYellowGlyphComponent : public UActorComponent
{ 
public:
	class ADBDPlayer*                                  _currentlyInteractingPlayer;                                // 0x00B8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00C0   (0x0004)  MISSED
	float                                              _skillCheckDuration;                                        // 0x00C4   (0x0004)  
	float                                              _skillCheckZoneLength;                                      // 0x00C8   (0x0004)  
	float                                              _skillCheckDelay;                                           // 0x00CC   (0x0004)  
	float                                              _skillCheckAverageDistance;                                 // 0x00D0   (0x0004)  
	float                                              _skillCheckDistanceVariance;                                // 0x00D4   (0x0004)  
	float                                              _teleportDelay;                                             // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x34];                                      // 0x00DC   (0x0034)  MISSED
	TArray<class UTileSpawnPoint*>                     _survivorSpawns;                                            // 0x0110   (0x0010)  
	TArray<class AGlyph*>                              _allGlyphs;                                                 // 0x0120   (0x0010)  


	/// Functions
	// Function /Script/Archives.YellowGlyphComponent.StartGlyphPreTeleportVFX
	// void StartGlyphPreTeleportVFX();                                                                                      // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/Archives.YellowGlyphComponent.StartGlyphPostTeleportVFX
	// void StartGlyphPostTeleportVFX();                                                                                     // [0x61d2f50] Event|Protected|BlueprintEvent 
	// Function /Script/Archives.YellowGlyphComponent.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x4dda350] Final|Native|Private 
	// Function /Script/Archives.YellowGlyphComponent.Multicast_TeleportGlyph
	// void Multicast_TeleportGlyph(FVector Location);                                                                       // [0x4dda020] Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults 
	// Function /Script/Archives.YellowGlyphComponent.GetOwningGlyph
	// class AGlyph* GetOwningGlyph();                                                                                       // [0x4dd4710] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Archives.YellowGlyphComponent.Authority_TeleportGlyph
	// bool Authority_TeleportGlyph(int32_t maxNumberOfTries);                                                               // [0x4dd9e50] Final|Native|Protected|BlueprintCallable 
};

