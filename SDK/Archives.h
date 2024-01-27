
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AIModule
/// dependency: AkAudio
/// dependency: Common
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: DBDSharedTypes
/// dependency: DBDUIViewInterfaces
/// dependency: DBDUIViewsCore
/// dependency: DeadByDaylight
/// dependency: Engine
/// dependency: FXWidget
/// dependency: GameplayTags
/// dependency: NetworkUtilities
/// dependency: SlateCore
/// dependency: UITween
/// dependency: UMG

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
	// void OnExitGateOpened(FGameplayTag gameEventType, FGameEventData& GameEventData);                                     // [0x4df5e20] Final|Native|Public|HasOutParms 
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
	// void OnFinishedPlaying(FGameplayTag gameEventType, FGameEventData& GameEventData);                                    // [0x4df6150] Final|Native|Public|HasOutParms 
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
	// void OnEscapeChase(FGameplayTag gameEventType, FGameEventData& GameEventData);                                        // [0x4df5f30] Final|Native|Public|HasOutParms 
	// Function /Script/Archives.ChaseInBasementQEEvaluator.OnChaseStart
	// void OnChaseStart(FGameplayTag gameEventType, FGameEventData& GameEventData);                                         // [0x4df5d10] Final|Native|Public|HasOutParms 
	// Function /Script/Archives.ChaseInBasementQEEvaluator.OnChaseEnd
	// void OnChaseEnd(FGameplayTag gameEventType, FGameEventData& GameEventData);                                           // [0x4df5c00] Final|Native|Public|HasOutParms 
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
	// bool PlayerHasToCompleteAssociatedQuest(class ADBDPlayer* Player, FName SpecialBehaviourId);                          // [0x4df68d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Archives.ContextualQuestUtilities.PlayerHasAssociatedQuest
	// bool PlayerHasAssociatedQuest(class ADBDPlayer* Player, FName SpecialBehaviourId);                                    // [0x4df67f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Archives.CustomValueEvaluatorCondition
/// Size: 0x0018 (0x000048 - 0x000060)
class UCustomValueEvaluatorCondition : public UEvaluatorCondition
{ 
public:
	SDK_UNDEFINED(16,3496) /* FString */               __um(_paramConditionKey);                                   // 0x0048   (0x0010)  
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
	SDK_UNDEFINED(80,3497) /* TSet<ADBDPlayer*> */     __um(_foundSurvivors);                                      // 0x00C0   (0x0050)  
};

/// Class /Script/Archives.DoBeforeEscapeQEEvaluator
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UDoBeforeEscapeQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:


	/// Functions
	// Function /Script/Archives.DoBeforeEscapeQEEvaluator.OnEscaped
	// void OnEscaped(FGameplayTag gameEventType, FGameEventData& GameEventData);                                            // [0x4df6040] Final|Native|Public|HasOutParms 
};

/// Class /Script/Archives.DoBeforeHookQEEvaluator
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UDoBeforeHookQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:


	/// Functions
	// Function /Script/Archives.DoBeforeHookQEEvaluator.OnHooked
	// void OnHooked(FGameplayTag gameEventType, FGameEventData& GameEventData);                                             // [0x4df6480] Final|Native|Public|HasOutParms 
};

/// Class /Script/Archives.DuringEndGameCollapseQEEvaluator
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UDuringEndGameCollapseQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/Archives.DuringEndGameCollapseQEEvaluator.OnEndGameCollapseStart
	// void OnEndGameCollapseStart(FGameplayTag gameEventType, FGameEventData& GameEventData);                               // [0x4df5e20] Final|Native|Private|HasOutParms 
};

/// Class /Script/Archives.EarnEmblemQualityQEEvaluator
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UEarnEmblemQualityQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00B8   (0x0018)  MISSED


	/// Functions
	// Function /Script/Archives.EarnEmblemQualityQEEvaluator.OnFinishedPlaying
	// void OnFinishedPlaying(FGameplayTag gameEventType, FGameEventData& GameEventData);                                    // [0x4df6260] Final|Native|Public|HasOutParms 
};

/// Class /Script/Archives.EndOfGameQEEvaluator
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UEndOfGameQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:


	/// Functions
	// Function /Script/Archives.EndOfGameQEEvaluator.OnFinishedPlaying
	// void OnFinishedPlaying(FGameplayTag gameEventType, FGameEventData& GameEventData);                                    // [0x4df6370] Final|Native|Public|HasOutParms 
};

/// Class /Script/Archives.EscapeBasementItemQEEvaluator
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UEscapeBasementItemQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/Archives.EscapeBasementItemQEEvaluator.OnTargetEscapeFromTrial
	// void OnTargetEscapeFromTrial(FGameplayTag gameEventType, FGameEventData& GameEventData);                              // [0x4df66e0] Final|Native|Public|HasOutParms 
	// Function /Script/Archives.EscapeBasementItemQEEvaluator.OnItemCollectedFromChest
	// void OnItemCollectedFromChest(FGameplayTag gameEventType, FGameEventData& GameEventData);                             // [0x4df6590] Final|Native|Public|HasOutParms 
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
	SDK_UNDEFINED(16,3498) /* FMulticastInlineDelegate */ __um(OnObjectBroken);                                    // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3499) /* FMulticastInlineDelegate */ __um(OnObjectRepaired);                                  // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x00D8   (0x0018)  MISSED
	bool                                               _repaired;                                                  // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2F];                                      // 0x00F1   (0x002F)  MISSED
	float                                              _minFallingHeight;                                          // 0x0120   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0124   (0x0004)  MISSED
	TArray<FGameplayTag>                               _generalObjectBreakingEvents;                               // 0x0128   (0x0010)  
	class ADBDPlayer*                                  _previousCollector;                                         // 0x0138   (0x0008)  


	/// Functions
	// Function /Script/Archives.FragileObjectComponent.OnRep_Repaired
	// void OnRep_Repaired();                                                                                                // [0x4df66c0] Final|Native|Private|Const 
	// Function /Script/Archives.FragileObjectComponent.OnFragileObjectStateChanged__DelegateSignature
	// void OnFragileObjectStateChanged__DelegateSignature();                                                                // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/Archives.FragileObjectComponent.IsRepaired
	// bool IsRepaired();                                                                                                    // [0x4df5bd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Archives.FragileObjectComponent.GetPreviousCollector
	// class ADBDPlayer* GetPreviousCollector();                                                                             // [0x4df5b00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Archives.FragileObjectComponent.DBD_RepairFragileObject
	// void DBD_RepairFragileObject();                                                                                       // [0x45fe020] Final|Exec|Native|Private 
	// Function /Script/Archives.FragileObjectComponent.Authority_OnCamperRemoved
	// void Authority_OnCamperRemoved(class ACamperPlayer* removedPlayer);                                                   // [0x4df5830] Final|Native|Private 
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
	SDK_UNDEFINED(8,3500) /* TWeakObjectPtr<ADBDPlayer*> */ __um(lastPlayerToStartInteraction);                    // 0x03B0   (0x0008)  
	SDK_UNDEFINED(16,3501) /* TArray<TWeakObjectPtr<ADBDPlayerState*>> */ __um(_isGlyphActivatedForPlayer);        // 0x03B8   (0x0010)  
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
	// void OnRep_PlayersWithVisibility();                                                                                   // [0x4df66a0] Final|Native|Protected 
	// Function /Script/Archives.Glyph.IsPlayerOwner
	// bool IsPlayerOwner(class ADBDPlayer* Player);                                                                         // [0x4df5b30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Archives.Glyph.DoesLocalPlayerHaveVisibility
	// bool DoesLocalPlayerHaveVisibility();                                                                                 // [0x4df5ad0] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/Archives.Glyph.Cosmetic_OnStoppedInteracting
	// void Cosmetic_OnStoppedInteracting();                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Archives.Glyph.Cosmetic_OnStartedInteracting
	// void Cosmetic_OnStartedInteracting(class ADBDPlayer* interactingPlayer, float interactionDuration);                   // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Archives.Glyph.Cosmetic_OnInteractionCompleted
	// void Cosmetic_OnInteractionCompleted(class ADBDPlayer* interactingPlayer);                                            // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Archives.Glyph.Cosmetic_OnGlyphVisibilityChanged
	// void Cosmetic_OnGlyphVisibilityChanged(class ADBDPlayer* interactingPlayer, bool IsVisible);                          // [0x61c32d0] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Script/Archives.Glyph.Authority_TrackPlayerWithBehaviourID
	// void Authority_TrackPlayerWithBehaviourID(class ADBDPlayer* DBDPlayer);                                               // [0x4df59b0] Final|Native|Private 
	// Function /Script/Archives.Glyph.Authority_OnPlayerBreachedRangeThreshold
	// void Authority_OnPlayerBreachedRangeThreshold(bool isWithinRange, class AActor* trackedActor);                        // [0x4df58e0] Final|Native|Private 
	// Function /Script/Archives.Glyph.Authority_OnIntroCompleted
	// void Authority_OnIntroCompleted();                                                                                    // [0x4df58c0] Final|Native|Private 
	// Function /Script/Archives.Glyph.Authority_OnInteractionCompleted
	// void Authority_OnInteractionCompleted(class ADBDPlayer* interactingPlayer);                                           // [0x61c32d0] BlueprintAuthorityOnly|Event|Protected|BlueprintEvent 
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
/// Size: 0x0050 (0x000790 - 0x0007E0)
class UGlyphInteraction : public UChargeableInteractionDefinition
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0790   (0x0050)  MISSED
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
	SDK_UNDEFINED(16,3502) /* TArray<TWeakObjectPtr<UGreenGlyphComponent*>> */ __um(_greenGlyphComponents);        // 0x00D0   (0x0010)  
	TArray<class AGenerator*>                          _completedGenerators;                                       // 0x00E0   (0x0010)  


	/// Functions
	// Function /Script/Archives.GreenGlyphActivatorComponent.DBD_ShowAuraGreenGlyphsActive
	// void DBD_ShowAuraGreenGlyphsActive(bool Enabled);                                                                     // [0x4df5a40] Final|Exec|Native|Private 
	// Function /Script/Archives.GreenGlyphActivatorComponent.Authority_OnActivateGlyphEvents
	// void Authority_OnActivateGlyphEvents(FGameplayTag GameplayTag, FGameEventData& GameEventData);                        // [0x4df5720] Final|Native|Private|HasOutParms 
	// Function /Script/Archives.GreenGlyphActivatorComponent.Authority_EndGameScenarioBegins
	// void Authority_EndGameScenarioBegins(FGameplayTag GameplayTag, FGameEventData& GameEventData);                        // [0x4df5610] Final|Native|Private|HasOutParms 
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
	// void OnRep_SetShouldOutlineBeActive();                                                                                // [0x4dfce70] Final|Native|Private 
	// Function /Script/Archives.GreenGlyphComponent.Multicast_Cheat_ShowAuraGreenGlyphActive
	// void Multicast_Cheat_ShowAuraGreenGlyphActive(bool Enabled, bool bForceShowAura);                                     // [0x4dfc4e0] Net|NetReliableNative|Event|NetMulticast|Public 
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
	// void OnLevelReadyToPlay();                                                                                            // [0x4dfce50] Final|Native|Private 
	// Function /Script/Archives.HasInteractedMapTrackedInteractorQEEvaluator.OnActorTrackedByMap
	// void OnActorTrackedByMap(class UActorKnowledgeCollection* knowledgeCollection, class AActor* newActor);               // [0x4dfc5c0] Final|Native|Private 
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
	// void OnRangeChanged(bool inRange);                                                                                    // [0x4e018b0] Final|Native|Protected 
};

/// Class /Script/Archives.HideNearKillerQEEvaluator
/// Size: 0x0028 (0x0000E8 - 0x000110)
class UHideNearKillerQEEvaluator : public UNearKillerQEEvaluator
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x00E8   (0x0028)  MISSED


	/// Functions
	// Function /Script/Archives.HideNearKillerQEEvaluator.OnSlashHarpoonedCamper
	// void OnSlashHarpoonedCamper(FGameplayTag gameEventType, FGameEventData& GameEventData);                               // [0x4dfce90] Final|Native|Private|HasOutParms 
	// Function /Script/Archives.HideNearKillerQEEvaluator.OnHarpoonHit
	// void OnHarpoonHit(FGameplayTag gameEventType, FGameEventData& GameEventData);                                         // [0x4dfcc30] Final|Native|Private|HasOutParms 
	// Function /Script/Archives.HideNearKillerQEEvaluator.OnFinishedPlaying
	// void OnFinishedPlaying(FGameplayTag gameEventType, FGameEventData& GameEventData);                                    // [0x4dfcb20] Final|Native|Public|HasOutParms 
	// Function /Script/Archives.HideNearKillerQEEvaluator.OnChaseStart
	// void OnChaseStart(class ADBDPlayer* chasedSurvivor);                                                                  // [0x4dfc870] Final|Native|Private 
	// Function /Script/Archives.HideNearKillerQEEvaluator.OnChaseEnd
	// void OnChaseEnd(class ADBDPlayer* chasedSurvivor, float chaseTime);                                                   // [0x4dfc7a0] Final|Native|Private 
	// Function /Script/Archives.HideNearKillerQEEvaluator.OnCamperBreakFreeFromHarpoon
	// void OnCamperBreakFreeFromHarpoon(FGameplayTag gameEventType, FGameEventData& GameEventData);                         // [0x4dfc690] Final|Native|Private|HasOutParms 
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
	// void OnStopEventCount(FGameplayTag gameEventType, FGameEventData& GameEventData);                                     // [0x4e019c0] Final|Native|Private|HasOutParms 
	// Function /Script/Archives.MaxEventCountQEEvaluator.OnIncrementEventCount
	// void OnIncrementEventCount(FGameplayTag gameEventType, FGameEventData& GameEventData);                                // [0x4e015a0] Final|Native|Private|HasOutParms 
	// Function /Script/Archives.MaxEventCountQEEvaluator.OnDecrementEventCount
	// void OnDecrementEventCount(FGameplayTag gameEventType, FGameEventData& GameEventData);                                // [0x4e01300] Final|Native|Private|HasOutParms 
};

/// Class /Script/Archives.HitDifferentInFrenzyMaxCountQEEvaluator
/// Size: 0x0050 (0x0000F0 - 0x000140)
class UHitDifferentInFrenzyMaxCountQEEvaluator : public UMaxEventCountQEEvaluator
{ 
public:
	SDK_UNDEFINED(80,3503) /* TSet<TWeakObjectPtr<AActor*>> */ __um(_targetList);                                  // 0x00F0   (0x0050)  
};

/// Class /Script/Archives.SurvivorHookSameTimeQEEvaluator
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class USurvivorHookSameTimeQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/Archives.SurvivorHookSameTimeQEEvaluator.OnSurvivorUnhooked
	// void OnSurvivorUnhooked(FGameplayTag gameEventType, FGameEventData& GameEventData);                                   // [0x4e05fd0] Native|Protected|HasOutParms 
	// Function /Script/Archives.SurvivorHookSameTimeQEEvaluator.OnSurvivorHooked
	// void OnSurvivorHooked(FGameplayTag gameEventType, FGameEventData& GameEventData);                                     // [0x4e05ec0] Native|Protected|HasOutParms 
};

/// Class /Script/Archives.HookSameTimeBasementQEEvaluator
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UHookSameTimeBasementQEEvaluator : public USurvivorHookSameTimeQEEvaluator
{ 
public:
};

/// Class /Script/Archives.IgnoreSkillCheckTypesEvaluatorCondition
/// Size: 0x0058 (0x000048 - 0x0000A0)
class UIgnoreSkillCheckTypesEvaluatorCondition : public UEvaluatorCondition
{ 
public:
	bool                                               _ignoreAllButConsideredTypes;                               // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	SDK_UNDEFINED(80,3504) /* TSet<ESkillCheckCustomType> */ __um(_consideredTypes);                               // 0x0050   (0x0050)  
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

/// Class /Script/Archives.IncrementOnModifierFlagAddedEvaluator
/// Size: 0x0050 (0x0000B8 - 0x000108)
class UIncrementOnModifierFlagAddedEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	TArray<FGameplayTag>                               _trackedStateTags;                                          // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x00C8   (0x0040)  MISSED
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
	// void OnClosetHideExit(FGameplayTag gameEventType, FGameEventData& GameEventData);                                     // [0x4dfca10] Final|Native|Private|HasOutParms 
	// Function /Script/Archives.InLockerNearKillerQEEvaluator.OnClosetHideEnter
	// void OnClosetHideEnter(FGameplayTag gameEventType, FGameEventData& GameEventData);                                    // [0x4dfc900] Final|Native|Private|HasOutParms 
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

/// Class /Script/Archives.ItemConsumedQEEvaluator
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UItemConsumedQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/Archives.ItemConsumedQEEvaluator.OnItemConsumed
	// void OnItemConsumed(FGameplayTag gameEventType, FGameEventData& GameEventData);                                       // [0x4dfcd40] Final|Native|Private|HasOutParms 
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
	// void OnItemUsed(FGameplayTag gameEventType, FGameEventData& GameEventData);                                           // [0x4e016b0] Final|Native|Private|HasOutParms 
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
	// void OnSurvivorRemoved(class ACamperPlayer* survivorRemoved);                                                         // [0x4e01b60] Final|Native|Private 
	// Function /Script/Archives.LivingSurvivorsCountQEEvaluator.OnSurvivorAdded
	// void OnSurvivorAdded(class ACamperPlayer* survivorAdded);                                                             // [0x4e01ad0] Final|Native|Private 
};

/// Class /Script/Archives.MaxSameTargetQEEvaluator
/// Size: 0x0050 (0x0000B8 - 0x000108)
class UMaxSameTargetQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	SDK_UNDEFINED(80,3505) /* TMap<TWeakObjectPtr<AActor*>, int32_t> */ __um(_targetList);                         // 0x00B8   (0x0050)  
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
	SDK_UNDEFINED(80,3506) /* TSet<TWeakObjectPtr<AActor*>> */ __um(_madSurvivors);                                // 0x00C0   (0x0050)  
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
	SDK_UNDEFINED(16,3507) /* FMulticastInlineDelegate */ __um(IsWithinRangeDelegate);                             // 0x00B8   (0x0010)  
	float                                              _distanceThreshold;                                         // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x00CC   (0x0014)  MISSED


	/// Functions
	// Function /Script/Archives.NearTrackedActorComponent.StopTrackingActor
	// void StopTrackingActor(class AActor* Actor);                                                                          // [0x4e01d00] Final|Native|Public|BlueprintCallable 
	// Function /Script/Archives.NearTrackedActorComponent.StartTrackingActor
	// void StartTrackingActor(class AActor* Actor);                                                                         // [0x4e01c70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Archives.NearTrackedActorComponent.SetDistanceThreshold
	// void SetDistanceThreshold(float value);                                                                               // [0x4e01bf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Archives.NearTrackedActorComponent.OnIsWithinRangeChanged__DelegateSignature
	// void OnIsWithinRangeChanged__DelegateSignature(bool isWithinRange, class AActor* trackedActor);                       // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/Archives.NearTrackedActorComponent.IsActorWithinRange
	// bool IsActorWithinRange(class AActor* Actor);                                                                         // [0x4e01150] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
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
	SDK_UNDEFINED(16,3508) /* FMulticastInlineDelegate */ __um(ChallengeCompletedDelegate);                        // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3509) /* FMulticastInlineDelegate */ __um(AffectedActionTakenDelegate);                       // 0x00C8   (0x0010)  
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
	// void Cosmetic_ApplyNegativeEffects(class ADBDPlayer* affectedPlayer);                                                 // [0x4e00f30] Final|BlueprintCosmetic|Native|Private 
};

/// Class /Script/Archives.PinkGlyphComponent
/// Size: 0x0400 (0x0000B8 - 0x0004B8)
class UPinkGlyphComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,3510) /* FMulticastInlineDelegate */ __um(OnMarkProgressChanged_Cosmetic);                    // 0x00B8   (0x0010)  
	SDK_UNDEFINED(16,3511) /* FMulticastInlineDelegate */ __um(OnStartMarking_Cosmetic);                           // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,3512) /* FMulticastInlineDelegate */ __um(OnStopMarking_Cosmetic);                            // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,3513) /* FMulticastInlineDelegate */ __um(OnFullyMarked_Cosmetic);                            // 0x00E8   (0x0010)  
	SDK_UNDEFINED(16,3514) /* FMulticastInlineDelegate */ __um(OnStartTeleport_Cosmetic);                          // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,3515) /* FMulticastInlineDelegate */ __um(OnPostTeleport_Cosmetic);                           // 0x0108   (0x0010)  
	SDK_UNDEFINED(16,3516) /* FMulticastInlineDelegate */ __um(OnSurvivorEnteredRange_Cosmetic);                   // 0x0118   (0x0010)  
	SDK_UNDEFINED(16,3517) /* FMulticastInlineDelegate */ __um(OnHasLineOfSight_Cosmetic);                         // 0x0128   (0x0010)  
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
	// void OnRep_MarkedProgress();                                                                                          // [0x4e019a0] Final|Native|Private 
	// Function /Script/Archives.PinkGlyphComponent.OnRep_IsPinkGlyphActive
	// void OnRep_IsPinkGlyphActive();                                                                                       // [0x4e01980] Final|Native|Private|Const 
	// Function /Script/Archives.PinkGlyphComponent.OnRep_IsMarking
	// void OnRep_IsMarking();                                                                                               // [0x4e01960] Final|Native|Private|Const 
	// Function /Script/Archives.PinkGlyphComponent.OnRep_HasLineOfSightToSurvivor
	// void OnRep_HasLineOfSightToSurvivor();                                                                                // [0x4e01940] Final|Native|Private|Const 
	// Function /Script/Archives.PinkGlyphComponent.OnMarkProgressChanged__DelegateSignature
	// void OnMarkProgressChanged__DelegateSignature(float Progress);                                                        // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/Archives.PinkGlyphComponent.OnGlyphEvent__DelegateSignature
	// void OnGlyphEvent__DelegateSignature();                                                                               // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/Archives.PinkGlyphComponent.Multicast_TeleportGlyph
	// void Multicast_TeleportGlyph(FVector Location);                                                                       // [0x4e01280] Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults 
	// Function /Script/Archives.PinkGlyphComponent.Multicast_StartGlyphPreTeleport
	// void Multicast_StartGlyphPreTeleport();                                                                               // [0x4e01260] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/Archives.PinkGlyphComponent.Multicast_IsFullyMarkedSurvivor
	// void Multicast_IsFullyMarkedSurvivor();                                                                               // [0x4e01240] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/Archives.PinkGlyphComponent.Multicast_EnterGlyphRange
	// void Multicast_EnterGlyphRange();                                                                                     // [0x4e01220] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/Archives.PinkGlyphComponent.IsMarking
	// bool IsMarking();                                                                                                     // [0x4e011f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Archives.PinkGlyphComponent.Authority_TeleportGlyph
	// void Authority_TeleportGlyph();                                                                                       // [0x4e00f10] Final|Native|Private 
	// Function /Script/Archives.PinkGlyphComponent.Authority_OnSurvivorInMovementRangeChanged
	// void Authority_OnSurvivorInMovementRangeChanged(bool inRange);                                                        // [0x4e00df0] Final|Native|Private 
	// Function /Script/Archives.PinkGlyphComponent.Authority_OnPlayerBreachedRangeThreshold
	// void Authority_OnPlayerBreachedRangeThreshold(bool isWithinRange, class AActor* trackedActor);                        // [0x4e00d20] Final|Native|Private 
	// Function /Script/Archives.PinkGlyphComponent.Authority_OnLevelReadyToPlay
	// void Authority_OnLevelReadyToPlay();                                                                                  // [0x4e00d00] Final|Native|Private 
	// Function /Script/Archives.PinkGlyphComponent.Authority_OnDamageStateChanged
	// void Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState newDamageState);            // [0x4e00c30] Final|Native|Private 
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
	// void OnExitGateOpened(FGameplayTag gameEventType, FGameEventData& GameEventData);                                     // [0x4df5e20] Final|Native|Public|HasOutParms 
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
	// void StopGlyphMovement(bool useDeceleration);                                                                         // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/Archives.PurpleGlyphComponent.StartGlyphMovement
	// void StartGlyphMovement();                                                                                            // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/Archives.PurpleGlyphComponent.ResumeGlyphMovement
	// void ResumeGlyphMovement(bool useAcceleration);                                                                       // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/Archives.PurpleGlyphComponent.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x4e017c0] Final|Native|Private 
	// Function /Script/Archives.PurpleGlyphComponent.GetTrackedPlayer
	// class ADBDPlayer* GetTrackedPlayer();                                                                                 // [0x4e010a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Archives.PurpleGlyphComponent.GetOwningGlyph
	// class AGlyph* GetOwningGlyph();                                                                                       // [0x4e01070] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Archives.PurpleGlyphComponent.Authority_StartMoveWithAcceleration
	// void Authority_StartMoveWithAcceleration(FVector& goalLocation);                                                      // [0x4e00e80] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Archives.PurpleGlyphComponent.Authority_MoveTo
	// void Authority_MoveTo(FVector Location);                                                                              // [0x4e00ba0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Archives.PurpleGlyphComponent.Authority_GetNextLocation
	// FVector Authority_GetNextLocation();                                                                                  // [0x4e00b60] Final|Native|Private|HasDefaults|BlueprintCallable 
	// Function /Script/Archives.PurpleGlyphComponent.Authority_AbortMoveWithDeceleration
	// void Authority_AbortMoveWithDeceleration();                                                                           // [0x4e00b40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Archives.PurpleGlyphComponent.Authority_AbortMove
	// void Authority_AbortMove();                                                                                           // [0x4e00b20] Final|Native|Public|BlueprintCallable 
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
	// void OnPlayerGameStateChanged(class ADBDPlayerState* PlayerState, EGameState GameState);                              // [0x4e017e0] Final|Native|Private 
	// Function /Script/Archives.QuestEventsHandler.OnGameEnded
	// void OnGameEnded(EEndGameReason Reason);                                                                              // [0x4e01520] Final|Native|Private 
	// Function /Script/Archives.QuestEventsHandler.OnFinishedPlaying
	// void OnFinishedPlaying(FGameplayTag gameEventType, FGameEventData& GameEventData);                                    // [0x4e01410] Final|Native|Private|HasOutParms 
	// Function /Script/Archives.QuestEventsHandler.DBD_ShowInGameCurrentQuestInfos
	// void DBD_ShowInGameCurrentQuestInfos();                                                                               // [0x4e01050] Final|Exec|Native|Public 
	// Function /Script/Archives.QuestEventsHandler.DBD_InGameAddProgressionToCurrentQuest
	// void DBD_InGameAddProgressionToCurrentQuest(int32_t Amount);                                                          // [0x4e00fc0] Final|Exec|Native|Public 
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
	// void InitializeQuestEventHandler(class UQuestEventsHandler* QuestEventsHandler);                                      // [0x4e010d0] Final|Native|Static|Public|BlueprintCallable 
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
	SDK_UNDEFINED(80,3518) /* TSet<FGameplayTag> */    __um(_favorToReturnEvents);                                 // 0x00B8   (0x0050)  
	SDK_UNDEFINED(80,3519) /* TSet<TWeakObjectPtr<ADBDPlayer*>> */ __um(_instigatorList);                          // 0x0108   (0x0050)  
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
	// void OnItemSpawnedFromChest(FGameplayTag gameEventType, FGameEventData& GameEventData);                               // [0x4e05d90] Final|Native|Public|HasOutParms 
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

/// Class /Script/Archives.SpendTimeWithModifierFlagQEEvaluator
/// Size: 0x0060 (0x0000B8 - 0x000118)
class USpendTimeWithModifierFlagQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	TArray<FGameplayTag>                               _modifierFlags;                                             // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x00C8   (0x0050)  MISSED
};

/// Class /Script/Archives.SpendTimeWithStateTagQEEvaluator
/// Size: 0x0050 (0x0000B8 - 0x000108)
class USpendTimeWithStateTagQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	TArray<FGameplayTag>                               _stateTags;                                                 // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x00C8   (0x0040)  MISSED
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
	SDK_UNDEFINED(80,3520) /* TSet<TWeakObjectPtr<AActor*>> */ __um(_targetList);                                  // 0x00B8   (0x0050)  
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
	SDK_UNDEFINED(16,3521) /* FMulticastInlineDelegate */ __um(OnReadyForInteraction);                             // 0x00D0   (0x0010)  
	float                                              _basementGlyphInteractionCoolDownTime;                      // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x84];                                      // 0x00E4   (0x0084)  MISSED


	/// Functions
	// Function /Script/Archives.WhiteGlyphBasementComponent.OnReadyForInteractionDelegate__DelegateSignature
	// void OnReadyForInteractionDelegate__DelegateSignature();                                                              // [0x61c32d0] MulticastDelegate|Public|Delegate 
	// Function /Script/Archives.WhiteGlyphBasementComponent.GetOwningGlyph
	// class AGlyph* GetOwningGlyph();                                                                                       // [0x4e01070] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
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
	// class AGlyph* GetOwningGlyph();                                                                                       // [0x4e01070] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Archives.WhiteGlyphSpawnerComponent.Authority_OnLevelReadyToPlay
	// void Authority_OnLevelReadyToPlay();                                                                                  // [0x4e05c40] Final|Native|Private 
};

/// Class /Script/Archives.WhiteGlyphSurfaceComponent
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UWhiteGlyphSurfaceComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x00B8   (0x0018)  MISSED


	/// Functions
	// Function /Script/Archives.WhiteGlyphSurfaceComponent.Multicast_TeleportGlyph
	// void Multicast_TeleportGlyph(FVector Location);                                                                       // [0x4e05d00] Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults 
	// Function /Script/Archives.WhiteGlyphSurfaceComponent.GetOwningGlyph
	// class AGlyph* GetOwningGlyph();                                                                                       // [0x4e01070] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Archives.WithAllSurvivorsIncrementQEEvaluator
/// Size: 0x0058 (0x0000B8 - 0x000110)
class UWithAllSurvivorsIncrementQEEvaluator : public UQuestEventEvaluatorBase
{ 
public:
	SDK_UNDEFINED(80,3522) /* TSet<TWeakObjectPtr<ACamperPlayer*>> */ __um(_targetList);                           // 0x00B8   (0x0050)  
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
	// void StartGlyphPreTeleportVFX();                                                                                      // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/Archives.YellowGlyphComponent.StartGlyphPostTeleportVFX
	// void StartGlyphPostTeleportVFX();                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/Archives.YellowGlyphComponent.OnLevelReadyToPlay
	// void OnLevelReadyToPlay();                                                                                            // [0x4e05ea0] Final|Native|Private 
	// Function /Script/Archives.YellowGlyphComponent.Multicast_TeleportGlyph
	// void Multicast_TeleportGlyph(FVector Location);                                                                       // [0x4e05d00] Net|NetReliableNative|Event|NetMulticast|Protected|HasDefaults 
	// Function /Script/Archives.YellowGlyphComponent.GetOwningGlyph
	// class AGlyph* GetOwningGlyph();                                                                                       // [0x4e01070] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Archives.YellowGlyphComponent.Authority_TeleportGlyph
	// bool Authority_TeleportGlyph(int32_t maxNumberOfTries);                                                               // [0x4e05c60] Final|Native|Protected|BlueprintCallable 
};

/// Class /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_VFXWidget.WBP_CoreArchiveTomeChallenges_VFXWidget_C
/// Size: 0x0000 (0x0002F8 - 0x0002F8)
class UWBP_CoreArchiveTomeChallenges_VFXWidget_C : public UFXUserWidgetBase
{ 
public:
};

/// Class /DBDUICore/Archives/Tome/Challenges/Editor/WBP_CoreArchiveTomeChallengesEditorGridComponent.WBP_CoreArchiveTomeChallengesEditorGridComponent_C
/// Size: 0x0028 (0x000298 - 0x0002C0)
class UWBP_CoreArchiveTomeChallengesEditorGridComponent_C : public UUserWidget
{ 
public:
	TArray<FLinePair>                                  GridLinesListWidth;                                         // 0x0298   (0x0010)  
	int32_t                                            verticalIndex;                                              // 0x02A8   (0x0004)  
	int32_t                                            horizontalIndex;                                            // 0x02AC   (0x0004)  
	TArray<FLinePair>                                  GridLinesListHeight;                                        // 0x02B0   (0x0010)  


	/// Functions
	// Function /DBDUICore/Archives/Tome/Challenges/Editor/WBP_CoreArchiveTomeChallengesEditorGridComponent.WBP_CoreArchiveTomeChallengesEditorGridComponent_C.SetHighlightedLinesIndex
	// void SetHighlightedLinesIndex(int32_t verticalIndex, int32_t horizontalIndex);                                        // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/Editor/WBP_CoreArchiveTomeChallengesEditorGridComponent.WBP_CoreArchiveTomeChallengesEditorGridComponent_C.SetGridArray
	// void SetGridArray(TArray<FLinePair>& gridArrayVertical, TArray<FLinePair>& gridArrayHorizontal);                      // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/Editor/WBP_CoreArchiveTomeChallengesEditorGridComponent.WBP_CoreArchiveTomeChallengesEditorGridComponent_C.OnPaint
	// void OnPaint(FPaintContext& Context);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /DBDUICore/Archives/Tome/WBP_CoreArchiveTomePanel.WBP_CoreArchiveTomePanel_C
/// Size: 0x0050 (0x000378 - 0x0003C8)
class UWBP_CoreArchiveTomePanel_C : public UCoreArchiveTomeWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0378   (0x0008)  
	class UWidgetSwitcher*                             MenuStateSwitcher;                                          // 0x0380   (0x0008)  
	class UWBP_CoreArchiveTomeChallengesPanel_C*       WBP_CoreArchiveTomeChallengesPanel;                         // 0x0388   (0x0008)  
	class UWBP_CoreArchiveTomeCollectionPanel_C*       WBP_CoreArchiveTomeCollectionPanel;                         // 0x0390   (0x0008)  
	class UWBP_CoreArchiveTomeProgressPanel_C*         WBP_CoreArchiveTomeProgressPanel;                           // 0x0398   (0x0008)  
	FSlateColor                                        PastTomeColor;                                              // 0x03A0   (0x0028)  


	/// Functions
	// Function /DBDUICore/Archives/Tome/WBP_CoreArchiveTomePanel.WBP_CoreArchiveTomePanel_C.SetScrollPrompt
	// void SetScrollPrompt(class UCoreKeyListenerInputPromptWidget* ScrollPrompt, FText vignetteListScrollPromptText, FText journalEntryScrollPromptText); // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/WBP_CoreArchiveTomePanel.WBP_CoreArchiveTomePanel_C.GetArchiveLevelProgressionInterface
	// TScriptInterface<Class> GetArchiveLevelProgressionInterface();                                                        // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /DBDUICore/Archives/Tome/WBP_CoreArchiveTomePanel.WBP_CoreArchiveTomePanel_C.GetArchiveEditorInterface
	// FEditorInterfaces GetArchiveEditorInterface();                                                                        // [0x61c32d0] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /DBDUICore/Archives/Tome/WBP_CoreArchiveTomePanel.WBP_CoreArchiveTomePanel_C.GetArchiveJournalInterface
	// TScriptInterface<Class> GetArchiveJournalInterface();                                                                 // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /DBDUICore/Archives/Tome/WBP_CoreArchiveTomePanel.WBP_CoreArchiveTomePanel_C.GetArchiveQuestMapInterface
	// TScriptInterface<Class> GetArchiveQuestMapInterface();                                                                // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /DBDUICore/Archives/Tome/WBP_CoreArchiveTomePanel.WBP_CoreArchiveTomePanel_C.SetMenuState
	// void SetMenuState(EArchiveTomeMenuState menuState);                                                                   // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/WBP_CoreArchiveTomePanel.WBP_CoreArchiveTomePanel_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/WBP_CoreArchiveTomePanel.WBP_CoreArchiveTomePanel_C.ToggleEditor
	// void ToggleEditor(bool IsEnabled);                                                                                    // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/WBP_CoreArchiveTomePanel.WBP_CoreArchiveTomePanel_C.OnInitialized
	// void OnInitialized();                                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/WBP_CoreArchiveTomePanel.WBP_CoreArchiveTomePanel_C.ExecuteUbergraph_WBP_CoreArchiveTomePanel
	// void ExecuteUbergraph_WBP_CoreArchiveTomePanel(int32_t EntryPoint);                                                   // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeVignetteButtonList.WBP_CoreArchiveTomeVignetteButtonList_C
/// Size: 0x0040 (0x000398 - 0x0003D8)
class UWBP_CoreArchiveTomeVignetteButtonList_C : public UCoreArchiveVignetteButtonContainerWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0398   (0x0008)  
	class UDBDScrollBox*                               JournalVignetteScrollList;                                  // 0x03A0   (0x0008)  
	class UWBP_CoreArchiveTomeCollection_VignetteButton_C* WBP_CoreArchiveTomeCollection_VignetteButton;           // 0x03A8   (0x0008)  
	class UWBP_CoreArchiveTomeCollection_VignetteButton_C* WBP_CoreArchiveTomeCollection_VignetteButton0;          // 0x03B0   (0x0008)  
	class UWBP_CoreArchiveTomeCollection_VignetteButton_C* WBP_CoreArchiveTomeCollection_VignetteButton1;          // 0x03B8   (0x0008)  
	class UWBP_CoreArchiveTomeCollection_VignetteButton_C* WBP_CoreArchiveTomeCollection_VignetteButton2;          // 0x03C0   (0x0008)  
	class UWBP_CoreArchiveTomeCollection_VignetteButton_C* WBP_CoreArchiveTomeCollection_VignetteButton3;          // 0x03C8   (0x0008)  
	class UWBP_CoreArchiveTomeCollection_VignetteButton_C* WBP_CoreArchiveTomeCollection_VignetteButton4;          // 0x03D0   (0x0008)  


	/// Functions
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeVignetteButtonList.WBP_CoreArchiveTomeVignetteButtonList_C.SetScrollPrompt
	// void SetScrollPrompt(class UCoreKeyListenerInputPromptWidget* ScrollPrompt, FText vignetteListScrollPrompt);          // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeVignetteButtonList.WBP_CoreArchiveTomeVignetteButtonList_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeVignetteButtonList.WBP_CoreArchiveTomeVignetteButtonList_C.Destruct
	// void Destruct();                                                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeVignetteButtonList.WBP_CoreArchiveTomeVignetteButtonList_C.OnControlModeChangedBP
	// void OnControlModeChangedBP(EControlMode controlMode);                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeVignetteButtonList.WBP_CoreArchiveTomeVignetteButtonList_C.HandleAnalogInputEvent
	// void HandleAnalogInputEvent(FAnalogInputEvent& InAnalogInputEvent);                                                   // [0x61c32d0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeVignetteButtonList.WBP_CoreArchiveTomeVignetteButtonList_C.ExecuteUbergraph_WBP_CoreArchiveTomeVignetteButtonList
	// void ExecuteUbergraph_WBP_CoreArchiveTomeVignetteButtonList(int32_t EntryPoint);                                      // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollection_VideoButton.WBP_CoreArchiveTomeCollection_VideoButton_C
/// Size: 0x003D (0x000480 - 0x0004BD)
class UWBP_CoreArchiveTomeCollection_VideoButton_C : public UCoreArchiveVignetteCinematicButton
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0480   (0x0008)  
	class UWidgetAnimation*                            Unlock;                                                     // 0x0488   (0x0008)  
	class UDBDImage*                                   Border;                                                     // 0x0490   (0x0008)  
	class UWBP_CoreArchiveTomeChallenges_VFXWidget_C*  ChallengeNodeVFX;                                           // 0x0498   (0x0008)  
	class UDBDImage*                                   FilmIcon;                                                   // 0x04A0   (0x0008)  
	class UDBDImage*                                   LockIcon;                                                   // 0x04A8   (0x0008)  
	class UWBP_CoreOnHoverBorder_C*                    WBP_CoreOnHoverBorder;                                      // 0x04B0   (0x0008)  
	float                                              FilmIconDisabledOpacity;                                    // 0x04B8   (0x0004)  
	bool                                               IsEnabledBeforeForceDisabled;                               // 0x04BC   (0x0001)  


	/// Functions
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollection_VideoButton.WBP_CoreArchiveTomeCollection_VideoButton_C.SetEnabledVisuals
	// void SetEnabledVisuals(bool IsEnabled);                                                                               // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollection_VideoButton.WBP_CoreArchiveTomeCollection_VideoButton_C.Finished_6A0F45BB4F545FAD6BDF1D806DDF6A6F
	// void Finished_6A0F45BB4F545FAD6BDF1D806DDF6A6F();                                                                     // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollection_VideoButton.WBP_CoreArchiveTomeCollection_VideoButton_C.OnEnabledChanged
	// void OnEnabledChanged(bool IsEnabled);                                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollection_VideoButton.WBP_CoreArchiveTomeCollection_VideoButton_C.UnlockCinematic
	// void UnlockCinematic();                                                                                               // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollection_VideoButton.WBP_CoreArchiveTomeCollection_VideoButton_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollection_VideoButton.WBP_CoreArchiveTomeCollection_VideoButton_C.SetIsForceDisabled
	// void SetIsForceDisabled(bool isForceDisabled);                                                                        // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollection_VideoButton.WBP_CoreArchiveTomeCollection_VideoButton_C.ExecuteUbergraph_WBP_CoreArchiveTomeCollection_VideoButton
	// void ExecuteUbergraph_WBP_CoreArchiveTomeCollection_VideoButton(int32_t EntryPoint);                                  // [0x61c32d0] Final                
};

/// Class /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallengesPath.WBP_CoreArchiveTomeChallengesPath_C
/// Size: 0x0009 (0x000450 - 0x000459)
class UWBP_CoreArchiveTomeChallengesPath_C : public UCoreArchiveQuestPathWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0450   (0x0008)  
	EArchivePathStatus                                 TestData;                                                   // 0x0458   (0x0001)  


	/// Functions
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallengesPath.WBP_CoreArchiveTomeChallengesPath_C.SetVisuals
	// void SetVisuals(EArchivePathStatus Path Status);                                                                      // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallengesPath.WBP_CoreArchiveTomeChallengesPath_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallengesPath.WBP_CoreArchiveTomeChallengesPath_C.SetVisualState
	// void SetVisualState(EArchivePathStatus& pathStatus);                                                                  // [0x61c32d0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallengesPath.WBP_CoreArchiveTomeChallengesPath_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallengesPath.WBP_CoreArchiveTomeChallengesPath_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallengesPath.WBP_CoreArchiveTomeChallengesPath_C.ExecuteUbergraph_WBP_CoreArchiveTomeChallengesPath
	// void ExecuteUbergraph_WBP_CoreArchiveTomeChallengesPath(int32_t EntryPoint);                                          // [0x61c32d0] Final                
};

/// Class /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveLevelProgression_RewardAnim.WBP_CoreArchiveLevelProgression_RewardAnim_C
/// Size: 0x0040 (0x000298 - 0x0002D8)
class UWBP_CoreArchiveLevelProgression_RewardAnim_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0298   (0x0008)  
	class UWidgetAnimation*                            RewardAnimClaimed;                                          // 0x02A0   (0x0008)  
	class UDBDImage*                                   CustomizationAnimationBackground;                           // 0x02A8   (0x0008)  
	class UWBP_CoreRewardWrapper_C*                    CustomizationRewardWrapper;                                 // 0x02B0   (0x0008)  
	TArray<class UObject*>                             CachedRewardWidgets;                                        // 0x02B8   (0x0010)  
	SDK_UNDEFINED(16,3523) /* FMulticastInlineDelegate */ __um(RewardAnimtionDone);                                // 0x02C8   (0x0010)  


	/// Functions
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveLevelProgression_RewardAnim.WBP_CoreArchiveLevelProgression_RewardAnim_C.Finished_5A5010484B0E60053DF158AAA8703DF7
	// void Finished_5A5010484B0E60053DF158AAA8703DF7();                                                                     // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveLevelProgression_RewardAnim.WBP_CoreArchiveLevelProgression_RewardAnim_C.PlayClaimedAnim
	// void PlayClaimedAnim(float Delay);                                                                                    // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveLevelProgression_RewardAnim.WBP_CoreArchiveLevelProgression_RewardAnim_C.ExecuteUbergraph_WBP_CoreArchiveLevelProgression_RewardAnim
	// void ExecuteUbergraph_WBP_CoreArchiveLevelProgression_RewardAnim(int32_t EntryPoint);                                 // [0x61c32d0] Final                
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveLevelProgression_RewardAnim.WBP_CoreArchiveLevelProgression_RewardAnim_C.RewardAnimtionDone__DelegateSignature
	// void RewardAnimtionDone__DelegateSignature();                                                                         // [0x61c32d0] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /DBDUICore/Archives/Tome/WBp_CoreArchiveTomeSideNav_TabButton.WBP_CoreArchiveTomeSideNav_TabButton_C
/// Size: 0x0320 (0x000478 - 0x000798)
class UWBP_CoreArchiveTomeSideNav_TabButton_C : public UCoreTabWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0478   (0x0008)  
	class UWidgetAnimation*                            Hovered;                                                    // 0x0480   (0x0008)  
	class UGridPanel*                                  ContentGrid;                                                // 0x0488   (0x0008)  
	class UDBDImage*                                   Icon;                                                       // 0x0490   (0x0008)  
	class UDBDImage*                                   IconBg;                                                     // 0x0498   (0x0008)  
	class UWBP_CoreOnHoverBorder_C*                    OnHoverBorder;                                              // 0x04A0   (0x0008)  
	class UDBDImage*                                   Rollover;                                                   // 0x04A8   (0x0008)  
	class UDBDImage*                                   SelectedBG;                                                 // 0x04B0   (0x0008)  
	class UDBDImage*                                   Triangle;                                                   // 0x04B8   (0x0008)  
	FButtonStyle                                       QuestMapIcon;                                               // 0x04C0   (0x02A8)  
	bool                                               NewVar;                                                     // 0x0768   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0769   (0x0007)  MISSED
	FSlateColor                                        NewVar0;                                                    // 0x0770   (0x0028)  


	/// Functions
	// Function /DBDUICore/Archives/Tome/WBp_CoreArchiveTomeSideNav_TabButton.WBP_CoreArchiveTomeSideNav_TabButton_C.OnSelectedChanged
	// void OnSelectedChanged(bool IsSelected);                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/WBp_CoreArchiveTomeSideNav_TabButton.WBP_CoreArchiveTomeSideNav_TabButton_C.OnEnabledChanged
	// void OnEnabledChanged(bool IsEnabled);                                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/WBp_CoreArchiveTomeSideNav_TabButton.WBP_CoreArchiveTomeSideNav_TabButton_C.PostInit
	// void PostInit();                                                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/WBp_CoreArchiveTomeSideNav_TabButton.WBP_CoreArchiveTomeSideNav_TabButton_C.UpdateBackgroundSkin
	// void UpdateBackgroundSkin(class UMaterialInterface* skinMaterial);                                                    // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/WBp_CoreArchiveTomeSideNav_TabButton.WBP_CoreArchiveTomeSideNav_TabButton_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/WBp_CoreArchiveTomeSideNav_TabButton.WBP_CoreArchiveTomeSideNav_TabButton_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/WBp_CoreArchiveTomeSideNav_TabButton.WBP_CoreArchiveTomeSideNav_TabButton_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/WBp_CoreArchiveTomeSideNav_TabButton.WBP_CoreArchiveTomeSideNav_TabButton_C.ExecuteUbergraph_WBP_CoreArchiveTomeSideNav_TabButton
	// void ExecuteUbergraph_WBP_CoreArchiveTomeSideNav_TabButton(int32_t EntryPoint);                                       // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Archives/Rift/WBP_CoreArchiveRift_OutfitButton.WBP_CoreArchiveRift_OutfitButton_C
/// Size: 0x0020 (0x000410 - 0x000430)
class UWBP_CoreArchiveRift_OutfitButton_C : public UCoreToggleButtonWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0410   (0x0008)  
	class UWidgetAnimation*                            Hovered;                                                    // 0x0418   (0x0008)  
	class UDBDImage*                                   Hover;                                                      // 0x0420   (0x0008)  
	class UDBDImage*                                   OutfitIcon;                                                 // 0x0428   (0x0008)  


	/// Functions
	// Function /DBDUICore/Archives/Rift/WBP_CoreArchiveRift_OutfitButton.WBP_CoreArchiveRift_OutfitButton_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Rift/WBP_CoreArchiveRift_OutfitButton.WBP_CoreArchiveRift_OutfitButton_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Rift/WBP_CoreArchiveRift_OutfitButton.WBP_CoreArchiveRift_OutfitButton_C.ExecuteUbergraph_WBP_CoreArchiveRift_OutfitButton
	// void ExecuteUbergraph_WBP_CoreArchiveRift_OutfitButton(int32_t EntryPoint);                                           // [0x61c32d0] Final                
};

/// Class /DBDUICore/Archives/WBP_CoreArchiveMenu_Title.WBP_CoreArchiveMenu_Title_C
/// Size: 0x0048 (0x000310 - 0x000358)
class UWBP_CoreArchiveMenu_Title_C : public UCoreBaseUserWidget
{ 
public:
	class UHorizontalBox*                              RiftContainer;                                              // 0x0310   (0x0008)  
	class UDBDTextBlock*                               RiftTimeLabelTF;                                            // 0x0318   (0x0008)  
	class UDBDTextBlock*                               RiftTimeValueTF;                                            // 0x0320   (0x0008)  
	class UHorizontalBox*                              SubtitleContainer;                                          // 0x0328   (0x0008)  
	class UDBDTextBlock*                               SubtitleTB;                                                 // 0x0330   (0x0008)  
	class UDBDImage*                                   TitleBG;                                                    // 0x0338   (0x0008)  
	class UDBDTextBlock*                               TitleTB;                                                    // 0x0340   (0x0008)  
	SDK_UNDEFINED(16,3524) /* FString */               __um(Separator);                                            // 0x0348   (0x0010)  


	/// Functions
	// Function /DBDUICore/Archives/WBP_CoreArchiveMenu_Title.WBP_CoreArchiveMenu_Title_C.SetTitleSkin
	// void SetTitleSkin(class UMaterialInterface* titleSkin);                                                               // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /DBDUICore/Archives/WBP_CoreArchiveInfoButton.WBP_CoreArchiveInfoButton_C
/// Size: 0x0028 (0x000408 - 0x000430)
class UWBP_CoreArchiveInfoButton_C : public UCoreButtonWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0408   (0x0008)  
	class UWidgetAnimation*                            Hovered;                                                    // 0x0410   (0x0008)  
	class UDBDImage*                                   BG;                                                         // 0x0418   (0x0008)  
	class UDBDImage*                                   Hover;                                                      // 0x0420   (0x0008)  
	class UDBDImage*                                   InfoIcon;                                                   // 0x0428   (0x0008)  


	/// Functions
	// Function /DBDUICore/Archives/WBP_CoreArchiveInfoButton.WBP_CoreArchiveInfoButton_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/WBP_CoreArchiveInfoButton.WBP_CoreArchiveInfoButton_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/WBP_CoreArchiveInfoButton.WBP_CoreArchiveInfoButton_C.ExecuteUbergraph_WBP_CoreArchiveInfoButton
	// void ExecuteUbergraph_WBP_CoreArchiveInfoButton(int32_t EntryPoint);                                                  // [0x61c32d0] Final                
};

/// Class /DBDUICore/Archives/Tome/WBp_CoreArchiveTomeSideNav.WBP_CoreArchiveTomeSideNav_C
/// Size: 0x0098 (0x000398 - 0x000430)
class UWBP_CoreArchiveTomeSideNav_C : public UCoreTabContainerWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0398   (0x0008)  
	class UWidgetAnimation*                            TakeoverAnim;                                               // 0x03A0   (0x0008)  
	class UWidgetAnimation*                            AnniversarySparksLights;                                    // 0x03A8   (0x0008)  
	class UDBDImage*                                   Anniversary_Lights;                                         // 0x03B0   (0x0008)  
	class UDBDImage*                                   Anniversary_Lights0;                                        // 0x03B8   (0x0008)  
	class UDBDImage*                                   Anniversary_Sparks;                                         // 0x03C0   (0x0008)  
	class UDBDImage*                                   Anniversary_Sparks1;                                        // 0x03C8   (0x0008)  
	class UDBDImage*                                   BackgroundSmoke;                                            // 0x03D0   (0x0008)  
	class UDBDImage*                                   Blackline;                                                  // 0x03D8   (0x0008)  
	class UDBDImage*                                   SmokeBG;                                                    // 0x03E0   (0x0008)  
	class UDBDImage*                                   SmokeBlend;                                                 // 0x03E8   (0x0008)  
	class UDBDImage*                                   SmokeDetail;                                                // 0x03F0   (0x0008)  
	class UCanvasPanel*                                SparksLights;                                               // 0x03F8   (0x0008)  
	class UDBDImage*                                   TakeoverBody;                                               // 0x0400   (0x0008)  
	class UDBDImage*                                   TakeoverEye;                                                // 0x0408   (0x0008)  
	class UDBDImage*                                   TakeoverEyeWhite;                                           // 0x0410   (0x0008)  
	class UDBDImage*                                   TakeoverHead;                                               // 0x0418   (0x0008)  
	class UCanvasPanel*                                TakeoverImage;                                              // 0x0420   (0x0008)  
	class UDBDImage*                                   TakeoverMouth;                                              // 0x0428   (0x0008)  


	/// Functions
	// Function /DBDUICore/Archives/Tome/WBp_CoreArchiveTomeSideNav.WBP_CoreArchiveTomeSideNav_C.SetSideNavSkin
	// void SetSideNavSkin(FSlateColor sideNavColor, class UMaterialInterface* sideNavSmokeDetail);                          // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/WBp_CoreArchiveTomeSideNav.WBP_CoreArchiveTomeSideNav_C.SetUiTakeoverActive
	// void SetUiTakeoverActive(bool IsActive);                                                                              // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/WBp_CoreArchiveTomeSideNav.WBP_CoreArchiveTomeSideNav_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/WBp_CoreArchiveTomeSideNav.WBP_CoreArchiveTomeSideNav_C.ExecuteUbergraph_WBP_CoreArchiveTomeSideNav
	// void ExecuteUbergraph_WBP_CoreArchiveTomeSideNav(int32_t EntryPoint);                                                 // [0x61c32d0] Final                
};

/// Class /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgressPanel.WBP_CoreArchiveTomeProgressPanel_C
/// Size: 0x005C (0x000378 - 0x0003D4)
class UWBP_CoreArchiveTomeProgressPanel_C : public UCoreArchiveLevelProgressionWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0378   (0x0008)  
	class UWidgetAnimation*                            ProgressionRewardAnimClaimed;                               // 0x0380   (0x0008)  
	class UWidgetAnimation*                            CurrencyRewardAnimClaimed;                                  // 0x0388   (0x0008)  
	class UWidgetAnimation*                            CustoRewardAnimClaimed;                                     // 0x0390   (0x0008)  
	class UDBDImage*                                   BGBanner;                                                   // 0x0398   (0x0008)  
	class UVerticalBox*                                RewardContainer;                                            // 0x03A0   (0x0008)  
	class UDBDImage*                                   SmokeBG;                                                    // 0x03A8   (0x0008)  
	class UDBDImage*                                   SmokeBlend;                                                 // 0x03B0   (0x0008)  
	class UDBDImage*                                   SmokeDetail;                                                // 0x03B8   (0x0008)  
	TArray<class UWBP_CoreArchiveLevelProgression_RewardAnim_C*> CachedRewardWidgets;                              // 0x03C0   (0x0010)  
	int32_t                                            CurrentNbRewards;                                           // 0x03D0   (0x0004)  


	/// Functions
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgressPanel.WBP_CoreArchiveTomeProgressPanel_C.SetProgressPanelSkin
	// void SetProgressPanelSkin(FSlateColor progressPanelColor, class UMaterialInterface* progressPanelSmokeDetail);        // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgressPanel.WBP_CoreArchiveTomeProgressPanel_C.SetRewardsData
	// void SetRewardsData(TArray<FRewardWrapperViewData>& Data, bool areLocked);                                            // [0x61c32d0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgressPanel.WBP_CoreArchiveTomeProgressPanel_C.ClearRewards
	// void ClearRewards();                                                                                                  // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgressPanel.WBP_CoreArchiveTomeProgressPanel_C.SetTomeRewardsData
	// void SetTomeRewardsData(TArray<FRewardWrapperViewData>& RewardsData, bool areLocked);                                 // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgressPanel.WBP_CoreArchiveTomeProgressPanel_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgressPanel.WBP_CoreArchiveTomeProgressPanel_C.PlayRewardsAnimation
	// void PlayRewardsAnimation();                                                                                          // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgressPanel.WBP_CoreArchiveTomeProgressPanel_C.OnSequenceDone
	// void OnSequenceDone();                                                                                                // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgressPanel.WBP_CoreArchiveTomeProgressPanel_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgressPanel.WBP_CoreArchiveTomeProgressPanel_C.ExecuteUbergraph_WBP_CoreArchiveTomeProgressPanel
	// void ExecuteUbergraph_WBP_CoreArchiveTomeProgressPanel(int32_t EntryPoint);                                           // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Archives/Root/WBP_CoreArchivesBackground.WBP_CoreArchivesBackground_C
/// Size: 0x0078 (0x000298 - 0x000310)
class UWBP_CoreArchivesBackground_C : public UUserWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0298   (0x0008)  
	class UWidgetAnimation*                            AnimDust;                                                   // 0x02A0   (0x0008)  
	class UWidgetAnimation*                            AnimCircle1;                                                // 0x02A8   (0x0008)  
	class UWidgetAnimation*                            AnimCircle2;                                                // 0x02B0   (0x0008)  
	class UWidgetAnimation*                            AnimCircle3;                                                // 0x02B8   (0x0008)  
	class UImage*                                      BGSmoke;                                                    // 0x02C0   (0x0008)  
	class UImage*                                      BGSmokeColor;                                               // 0x02C8   (0x0008)  
	class UDBDImage*                                   Circle1;                                                    // 0x02D0   (0x0008)  
	class UDBDImage*                                   Circle1S;                                                   // 0x02D8   (0x0008)  
	class UDBDImage*                                   Circle2;                                                    // 0x02E0   (0x0008)  
	class UDBDImage*                                   Circle2_brown;                                              // 0x02E8   (0x0008)  
	class UDBDImage*                                   Circle3;                                                    // 0x02F0   (0x0008)  
	class UDBDImage*                                   Dust;                                                       // 0x02F8   (0x0008)  
	class UDBDImage*                                   Dust2;                                                      // 0x0300   (0x0008)  
	class URetainerBox*                                RetainerBox;                                                // 0x0308   (0x0008)  


	/// Functions
	// Function /DBDUICore/Archives/Root/WBP_CoreArchivesBackground.WBP_CoreArchivesBackground_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Archives/Root/WBP_CoreArchivesBackground.WBP_CoreArchivesBackground_C.ExecuteUbergraph_WBP_CoreArchivesBackground
	// void ExecuteUbergraph_WBP_CoreArchivesBackground(int32_t EntryPoint);                                                 // [0x61c32d0] Final                
};

/// Class /DBDUICore/Archives/Root/ChallengeReminder/WBP_CoreArchiveTomeChallenges_Slot.WBP_CoreArchiveTomeChallenges_Slot_C
/// Size: 0x00B0 (0x0004A8 - 0x000558)
class UWBP_CoreArchiveTomeChallenges_Slot_C : public UCoreArchiveChallengeReminderSlotWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04A8   (0x0008)  
	class URetainerBox*                                ActiveNodePanel;                                            // 0x04B0   (0x0008)  
	class USizeBox*                                    HoverBorderContainer;                                       // 0x04B8   (0x0008)  
	class URetainerBox*                                InactivePanel;                                              // 0x04C0   (0x0008)  
	class UDBDImage*                                   RoleIcon;                                                   // 0x04C8   (0x0008)  
	class USizeBox*                                    SizeBox;                                                    // 0x04D0   (0x0008)  
	FLinearColor                                       ProgressBarLeftColor;                                       // 0x04D8   (0x0010)  
	class UMaterialInstanceDynamic*                    ProgressBarMaterial;                                        // 0x04E8   (0x0008)  
	FLinearColor                                       ProgressBarRightColor;                                      // 0x04F0   (0x0010)  
	float                                              ProgressBarScratchesOffsetX;                                // 0x0500   (0x0004)  
	float                                              ProgressBarScratchesOffsetY;                                // 0x0504   (0x0004)  
	FLinearColor                                       KillerBackgroundColor;                                      // 0x0508   (0x0010)  
	FLinearColor                                       SurvivorBackgroundColor;                                    // 0x0518   (0x0010)  
	class UUITweenInstance*                            CurrentRevealTween;                                         // 0x0528   (0x0008)  
	class UUITweenInstance*                            CurrentSwapTween;                                           // 0x0530   (0x0008)  
	class UMaterialInstance*                           SelectorHighlightColor;                                     // 0x0538   (0x0008)  
	FLinearColor                                       CompletedBackgroundColor;                                   // 0x0540   (0x0010)  
	class UUITweenInstance*                            CurrentBorderTween;                                         // 0x0550   (0x0008)  


	/// Functions
	// Function /DBDUICore/Archives/Root/ChallengeReminder/WBP_CoreArchiveTomeChallenges_Slot.WBP_CoreArchiveTomeChallenges_Slot_C.SetStatus
	// void SetStatus(EStoryNodeState NodeStatus);                                                                           // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Root/ChallengeReminder/WBP_CoreArchiveTomeChallenges_Slot.WBP_CoreArchiveTomeChallenges_Slot_C.StopSwapAnimation
	// void StopSwapAnimation();                                                                                             // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Root/ChallengeReminder/WBP_CoreArchiveTomeChallenges_Slot.WBP_CoreArchiveTomeChallenges_Slot_C.StopRevealAnimation
	// void StopRevealAnimation();                                                                                           // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Root/ChallengeReminder/WBP_CoreArchiveTomeChallenges_Slot.WBP_CoreArchiveTomeChallenges_Slot_C.SetRoleIcon
	// void SetRoleIcon();                                                                                                   // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Root/ChallengeReminder/WBP_CoreArchiveTomeChallenges_Slot.WBP_CoreArchiveTomeChallenges_Slot_C.SetProgressBar
	// void SetProgressBar();                                                                                                // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Root/ChallengeReminder/WBP_CoreArchiveTomeChallenges_Slot.WBP_CoreArchiveTomeChallenges_Slot_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Archives/Root/ChallengeReminder/WBP_CoreArchiveTomeChallenges_Slot.WBP_CoreArchiveTomeChallenges_Slot_C.UpdateProgressBar
	// void UpdateProgressBar(float Progress);                                                                               // [0x61c32d0] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Root/ChallengeReminder/WBP_CoreArchiveTomeChallenges_Slot.WBP_CoreArchiveTomeChallenges_Slot_C.UpdateActiveState
	// void UpdateActiveState(bool IsActive, bool PlayAnimation);                                                            // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Root/ChallengeReminder/WBP_CoreArchiveTomeChallenges_Slot.WBP_CoreArchiveTomeChallenges_Slot_C.SetQuestNodeHoverEffect
	// void SetQuestNodeHoverEffect(bool IsHovered);                                                                         // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Root/ChallengeReminder/WBP_CoreArchiveTomeChallenges_Slot.WBP_CoreArchiveTomeChallenges_Slot_C.CustomEvent
	// void CustomEvent(class UUITweenInstance* tween);                                                                      // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Root/ChallengeReminder/WBP_CoreArchiveTomeChallenges_Slot.WBP_CoreArchiveTomeChallenges_Slot_C.SwapChallenge
	// void SwapChallenge(FArchiveChallengeReminderViewData& Data);                                                          // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Root/ChallengeReminder/WBP_CoreArchiveTomeChallenges_Slot.WBP_CoreArchiveTomeChallenges_Slot_C.InitVisualState
	// void InitVisualState();                                                                                               // [0x61c32d0] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Root/ChallengeReminder/WBP_CoreArchiveTomeChallenges_Slot.WBP_CoreArchiveTomeChallenges_Slot_C.UpdateVisualState
	// void UpdateVisualState(FArchiveChallengeReminderViewData& Data);                                                      // [0x61c32d0] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Root/ChallengeReminder/WBP_CoreArchiveTomeChallenges_Slot.WBP_CoreArchiveTomeChallenges_Slot_C.ExecuteUbergraph_WBP_CoreArchiveTomeChallenges_Slot
	// void ExecuteUbergraph_WBP_CoreArchiveTomeChallenges_Slot(int32_t EntryPoint);                                         // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Archives/Compendium/WBP_CoreArchiveCompendiumPanel.WBP_CoreArchiveCompendiumPanel_C
/// Size: 0x0018 (0x000388 - 0x0003A0)
class UWBP_CoreArchiveCompendiumPanel_C : public UCoreArchiveCompendiumWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0388   (0x0008)  
	class URetainerBox*                                ScrollboxMask;                                              // 0x0390   (0x0008)  
	class UDBDImage*                                   Smoke;                                                      // 0x0398   (0x0008)  


	/// Functions
	// Function /DBDUICore/Archives/Compendium/WBP_CoreArchiveCompendiumPanel.WBP_CoreArchiveCompendiumPanel_C.Set Scroll Prompt
	// void Set Scroll Prompt(class UCoreKeyListenerInputPromptWidget* ScrollPrompt);                                        // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Compendium/WBP_CoreArchiveCompendiumPanel.WBP_CoreArchiveCompendiumPanel_C.HandleAnalogInputEvent
	// void HandleAnalogInputEvent(FAnalogInputEvent& InAnalogInputEvent);                                                   // [0x61c32d0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /DBDUICore/Archives/Compendium/WBP_CoreArchiveCompendiumPanel.WBP_CoreArchiveCompendiumPanel_C.OnControlModeChangedBP
	// void OnControlModeChangedBP(EControlMode controlMode);                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Compendium/WBP_CoreArchiveCompendiumPanel.WBP_CoreArchiveCompendiumPanel_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Archives/Compendium/WBP_CoreArchiveCompendiumPanel.WBP_CoreArchiveCompendiumPanel_C.Destruct
	// void Destruct();                                                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Archives/Compendium/WBP_CoreArchiveCompendiumPanel.WBP_CoreArchiveCompendiumPanel_C.OnInitialized
	// void OnInitialized();                                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Archives/Compendium/WBP_CoreArchiveCompendiumPanel.WBP_CoreArchiveCompendiumPanel_C.ExecuteUbergraph_WBP_CoreArchiveCompendiumPanel
	// void ExecuteUbergraph_WBP_CoreArchiveCompendiumPanel(int32_t EntryPoint);                                             // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Archives/Root/WBP_CoreArchiveRoot.WBP_CoreArchiveRoot_C
/// Size: 0x00D0 (0x000578 - 0x000648)
class UWBP_CoreArchiveRoot_C : public UCoreArchiveMenuWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0578   (0x0008)  
	class UWidgetAnimation*                            Bg_FadeOut;                                                 // 0x0580   (0x0008)  
	class UOverlay*                                    BGOverlay;                                                  // 0x0588   (0x0008)  
	class UImage*                                      BlackOverlay;                                               // 0x0590   (0x0008)  
	class UImage*                                      BlackOverlay0;                                              // 0x0598   (0x0008)  
	class UWidgetSwitcher*                             MenuStateSwitcher;                                          // 0x05A0   (0x0008)  
	class UWBP_CoreKeyListenerInputPrompt_C*           ScrollPrompt;                                               // 0x05A8   (0x0008)  
	class UWBP_CoreArchiveCompendiumPanel_C*           WBP_CoreArchiveCompendiumPanel;                             // 0x05B0   (0x0008)  
	class UWBP_CoreArchiveMenu_Title_C*                WBP_CoreArchiveMenu_Title;                                  // 0x05B8   (0x0008)  
	class UWBP_CoreArchiveRiftPanel_C*                 WBP_CoreArchiveRiftPanel;                                   // 0x05C0   (0x0008)  
	class UWBP_CoreArchivesBackground_C*               WBP_CoreArchivesBackground;                                 // 0x05C8   (0x0008)  
	class UWBP_CoreArchiveTomePanel_C*                 WBP_CoreArchiveTomePanel;                                   // 0x05D0   (0x0008)  
	FSlateColor                                        PastTomeColor;                                              // 0x05D8   (0x0028)  
	FSlateColor                                        CurrentTomeColor;                                           // 0x0600   (0x0028)  
	FLinearColor                                       RiftRemainingTextNormal;                                    // 0x0628   (0x0010)  
	FLinearColor                                       RiftRemainingTimeWarning;                                   // 0x0638   (0x0010)  


	/// Functions
	// Function /DBDUICore/Archives/Root/WBP_CoreArchiveRoot.WBP_CoreArchiveRoot_C.SetRiftRemainingTime
	// void SetRiftRemainingTime(FString RemainingTime, bool isMoreThanWarningThreshold, EArchiveMenuState menuState);       // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Root/WBP_CoreArchiveRoot.WBP_CoreArchiveRoot_C.SetRiftRemainingTimeVisibility
	// void SetRiftRemainingTimeVisibility(bool visible);                                                                    // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Root/WBP_CoreArchiveRoot.WBP_CoreArchiveRoot_C.SetTomesBackgroundSkin
	// void SetTomesBackgroundSkin(FSlateColor sideNavColor, class UMaterialInterface* titleSkin, class UMaterialInterface* tabSkin, int32_t tabKey, class UMaterialInterface* sideNavSmokeDetailSkin, class UMaterialInterface* progressPanelSmokeDetailSkin); // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Root/WBP_CoreArchiveRoot.WBP_CoreArchiveRoot_C.GetArchiveWidget
	// void GetArchiveWidget(EArchiveMenuState menuState, class UCoreBaseUserWidget*& Widget);                               // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /DBDUICore/Archives/Root/WBP_CoreArchiveRoot.WBP_CoreArchiveRoot_C.GetArchiveCompendiumInterface
	// TScriptInterface<Class> GetArchiveCompendiumInterface();                                                              // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /DBDUICore/Archives/Root/WBP_CoreArchiveRoot.WBP_CoreArchiveRoot_C.GetArchiveRiftInterface
	// TScriptInterface<Class> GetArchiveRiftInterface();                                                                    // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /DBDUICore/Archives/Root/WBP_CoreArchiveRoot.WBP_CoreArchiveRoot_C.GetArchiveTomeInterface
	// TScriptInterface<Class> GetArchiveTomeInterface();                                                                    // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /DBDUICore/Archives/Root/WBP_CoreArchiveRoot.WBP_CoreArchiveRoot_C.SetMenuState
	// void SetMenuState(EArchiveMenuState menuState);                                                                       // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Root/WBP_CoreArchiveRoot.WBP_CoreArchiveRoot_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Archives/Root/WBP_CoreArchiveRoot.WBP_CoreArchiveRoot_C.BndEvt__WBP_CoreArchiveRoot_BackInputSwitcher_K2Node_ComponentBoundEvent_1_InputSwitcherTriggeredDelegate__DelegateSignature
	// void BndEvt__WBP_CoreArchiveRoot_BackInputSwitcher_K2Node_ComponentBoundEvent_1_InputSwitcherTriggeredDelegate__DelegateSignature(); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Archives/Root/WBP_CoreArchiveRoot.WBP_CoreArchiveRoot_C.SetTitle
	// void SetTitle(FText& Title);                                                                                          // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Root/WBP_CoreArchiveRoot.WBP_CoreArchiveRoot_C.SetRemainingTimeVisible
	// void SetRemainingTimeVisible(bool IsVisible);                                                                         // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Root/WBP_CoreArchiveRoot.WBP_CoreArchiveRoot_C.SetRemainingTime
	// void SetRemainingTime(FString RemainingTime, bool isMoreThanWarningThreshold, EArchiveMenuState menuState);           // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Root/WBP_CoreArchiveRoot.WBP_CoreArchiveRoot_C.SetScrollData
	// void SetScrollData(FText& vignetteListScrollPromptText, FText& journalEntryScrollPromptText);                         // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Root/WBP_CoreArchiveRoot.WBP_CoreArchiveRoot_C.UpdateBackgroundSkin
	// void UpdateBackgroundSkin(int32_t Key, FArchiveTomeSkinData& Data);                                                   // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Root/WBP_CoreArchiveRoot.WBP_CoreArchiveRoot_C.SetSubtitleVisible
	// void SetSubtitleVisible(bool IsVisible);                                                                              // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Root/WBP_CoreArchiveRoot.WBP_CoreArchiveRoot_C.SetSubtitle
	// void SetSubtitle(FText& Subtitle);                                                                                    // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Root/WBP_CoreArchiveRoot.WBP_CoreArchiveRoot_C.HideScrollPrompt
	// void HideScrollPrompt(class UUITweenInstance* tween);                                                                 // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Root/WBP_CoreArchiveRoot.WBP_CoreArchiveRoot_C.HideUI
	// void HideUI();                                                                                                        // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Root/WBP_CoreArchiveRoot.WBP_CoreArchiveRoot_C.ShowUI
	// void ShowUI();                                                                                                        // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Root/WBP_CoreArchiveRoot.WBP_CoreArchiveRoot_C.ExecuteUbergraph_WBP_CoreArchiveRoot
	// void ExecuteUbergraph_WBP_CoreArchiveRoot(int32_t EntryPoint);                                                        // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveVignetteEntryContainerWidget.WBP_CoreArchiveVignetteEntryContainerWidget_C
/// Size: 0x0014 (0x0003D8 - 0x0003EC)
class UWBP_CoreArchiveVignetteEntryContainerWidget_C : public UCoreArchiveVignetteEntryContainerWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03D8   (0x0008)  
	class UWidgetAnimation*                            Fill;                                                       // 0x03E0   (0x0008)  
	int32_t                                            CurrentProgress;                                            // 0x03E8   (0x0004)  


	/// Functions
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveVignetteEntryContainerWidget.WBP_CoreArchiveVignetteEntryContainerWidget_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveVignetteEntryContainerWidget.WBP_CoreArchiveVignetteEntryContainerWidget_C.ExecuteUbergraph_WBP_CoreArchiveVignetteEntryContainerWidget
	// void ExecuteUbergraph_WBP_CoreArchiveVignetteEntryContainerWidget(int32_t EntryPoint);                                // [0x61c32d0] Final                
};

/// Class /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveVignetteCinematicContainerWidget.WBP_CoreArchiveVignetteCinematicContainerWidget_C
/// Size: 0x000C (0x000398 - 0x0003A4)
class UWBP_CoreArchiveVignetteCinematicContainerWidget_C : public UCoreArchiveVignetteCinematicContainerWidget
{ 
public:
	class UWidgetAnimation*                            Fill;                                                       // 0x0398   (0x0008)  
	int32_t                                            CurrentProgress;                                            // 0x03A0   (0x0004)  
};

/// Class /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollection_VignetteButton.WBP_CoreArchiveTomeCollection_VignetteButton_C
/// Size: 0x0080 (0x0004F0 - 0x000570)
class UWBP_CoreArchiveTomeCollection_VignetteButton_C : public UCoreArchiveVignetteButtonWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04F0   (0x0008)  
	class UWidgetAnimation*                            Pressed;                                                    // 0x04F8   (0x0008)  
	class UWidgetAnimation*                            Hovered;                                                    // 0x0500   (0x0008)  
	class UWBP_CoreArchiveTomeChallenges_VFXWidget_C*  ChallengeNodeVFX;                                           // 0x0508   (0x0008)  
	class UDBDImage*                                   Disabled;                                                   // 0x0510   (0x0008)  
	class UOverlay*                                    SelectedContainer;                                          // 0x0518   (0x0008)  
	class UOverlay*                                    UnreadIndicator;                                            // 0x0520   (0x0008)  
	class UTextBlock*                                  UnreadIndicatorTB;                                          // 0x0528   (0x0008)  
	class UDBDImage*                                   VideoIcon;                                                  // 0x0530   (0x0008)  
	class UDBDTextBlock*                               VignetteHeaderTB;                                           // 0x0538   (0x0008)  
	class UDBDImage*                                   VignetteProgressBar;                                        // 0x0540   (0x0008)  
	class UDBDTextBlock*                               VignetteProgressTB;                                         // 0x0548   (0x0008)  
	class UDBDTextBlock*                               VignetteSubheaderTB;                                        // 0x0550   (0x0008)  
	class UWBP_CoreOnHoverBorder_C*                    WBP_CoreOnHoverBorder;                                      // 0x0558   (0x0008)  
	SDK_UNDEFINED(16,3525) /* FString */               __um(VignetteId);                                           // 0x0560   (0x0010)  


	/// Functions
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollection_VignetteButton.WBP_CoreArchiveTomeCollection_VignetteButton_C.Get_UnreadIndicatorTB_ColorAndOpacity
	// FSlateColor Get_UnreadIndicatorTB_ColorAndOpacity();                                                                  // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollection_VignetteButton.WBP_CoreArchiveTomeCollection_VignetteButton_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollection_VignetteButton.WBP_CoreArchiveTomeCollection_VignetteButton_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollection_VignetteButton.WBP_CoreArchiveTomeCollection_VignetteButton_C.OnSelectedChanged
	// void OnSelectedChanged(bool IsSelected);                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollection_VignetteButton.WBP_CoreArchiveTomeCollection_VignetteButton_C.OnEnabledChanged
	// void OnEnabledChanged(bool IsEnabled);                                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollection_VignetteButton.WBP_CoreArchiveTomeCollection_VignetteButton_C.SetVisualData
	// void SetVisualData(FText& vignetteTitle, FText& vignetteSubtitle, FText& vignetteProgressText, bool displayProgress, float vignetteProgress, bool isUnread, FText& unreadIndicatorText, bool showCinematics, bool lockCinematics); // [0x61c32d0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollection_VignetteButton.WBP_CoreArchiveTomeCollection_VignetteButton_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollection_VignetteButton.WBP_CoreArchiveTomeCollection_VignetteButton_C.SetVignetteRead
	// void SetVignetteRead(bool IsRead);                                                                                    // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollection_VignetteButton.WBP_CoreArchiveTomeCollection_VignetteButton_C.ExecuteUbergraph_WBP_CoreArchiveTomeCollection_VignetteButton
	// void ExecuteUbergraph_WBP_CoreArchiveTomeCollection_VignetteButton(int32_t EntryPoint);                               // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgress_LevelButton.WBP_CoreArchiveTomeProgress_LevelButton_C
/// Size: 0x0138 (0x000478 - 0x0005B0)
class UWBP_CoreArchiveTomeProgress_LevelButton_C : public UCoreStoryLevelButtonWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0478   (0x0008)  
	class UWidgetAnimation*                            Highlighted;                                                // 0x0480   (0x0008)  
	class UWidgetAnimation*                            Unlocked;                                                   // 0x0488   (0x0008)  
	class UWidgetAnimation*                            Hovered;                                                    // 0x0490   (0x0008)  
	class UWidgetSwitcher*                             BackgroundSwitcher;                                         // 0x0498   (0x0008)  
	class UDBDImage*                                   Bkg_Completed;                                              // 0x04A0   (0x0008)  
	class UDBDImage*                                   Bkg_Default;                                                // 0x04A8   (0x0008)  
	class UDBDImage*                                   Bkg_Mastered;                                               // 0x04B0   (0x0008)  
	class UDBDImage*                                   Border_Completed;                                           // 0x04B8   (0x0008)  
	class UDBDImage*                                   Border_Default;                                             // 0x04C0   (0x0008)  
	class UDBDImage*                                   Border_Mastered;                                            // 0x04C8   (0x0008)  
	class UDBDImage*                                   Border_Unavailable;                                         // 0x04D0   (0x0008)  
	class UWidgetSwitcher*                             BorderSwitcher;                                             // 0x04D8   (0x0008)  
	class UDBDImage*                                   BottomLeft;                                                 // 0x04E0   (0x0008)  
	class UDBDImage*                                   BottomRight;                                                // 0x04E8   (0x0008)  
	class UDBDImage*                                   Diamond;                                                    // 0x04F0   (0x0008)  
	class UDBDImage*                                   Divider_Completed;                                          // 0x04F8   (0x0008)  
	class UDBDImage*                                   Divider_Default;                                            // 0x0500   (0x0008)  
	class UDBDImage*                                   Divider_Mastered;                                           // 0x0508   (0x0008)  
	class UDBDImage*                                   Divider_Unavailable;                                        // 0x0510   (0x0008)  
	class UWidgetSwitcher*                             DividerSwitcher;                                            // 0x0518   (0x0008)  
	class UDBDImage*                                   Hover;                                                      // 0x0520   (0x0008)  
	class UDBDImage*                                   Indicator_Completed;                                        // 0x0528   (0x0008)  
	class UDBDImage*                                   Indicator_Locked;                                           // 0x0530   (0x0008)  
	class UDBDImage*                                   Indicator_Unavailable;                                      // 0x0538   (0x0008)  
	class UWidgetSwitcher*                             IndicatorSwitcher;                                          // 0x0540   (0x0008)  
	class UDBDImage*                                   Roman1;                                                     // 0x0548   (0x0008)  
	class UDBDImage*                                   Roman2;                                                     // 0x0550   (0x0008)  
	class UDBDImage*                                   Roman3;                                                     // 0x0558   (0x0008)  
	class UDBDImage*                                   Roman4;                                                     // 0x0560   (0x0008)  
	class UDBDImage*                                   Roman5;                                                     // 0x0568   (0x0008)  
	class UDBDImage*                                   Roman6;                                                     // 0x0570   (0x0008)  
	class UWidgetSwitcher*                             RomanNumberSwitcher;                                        // 0x0578   (0x0008)  
	class UOverlay*                                    SelectedContainer;                                          // 0x0580   (0x0008)  
	class UDBDImage*                                   Sheen;                                                      // 0x0588   (0x0008)  
	class UDBDImage*                                   TopLeft;                                                    // 0x0590   (0x0008)  
	class UDBDImage*                                   TopRight;                                                   // 0x0598   (0x0008)  
	int32_t                                            cachedLevel;                                                // 0x05A0   (0x0004)  
	EArchivesStoryLevelStatus                          cachedStatus;                                               // 0x05A4   (0x0001)  
	bool                                               cachedNewlyUnlocked;                                        // 0x05A5   (0x0001)  
	bool                                               HasBeenHighlighted;                                         // 0x05A6   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x05A7   (0x0001)  MISSED
	class UArchiveStoryLevelViewData*                  View_Data;                                                  // 0x05A8   (0x0008)  


	/// Functions
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgress_LevelButton.WBP_CoreArchiveTomeProgress_LevelButton_C.PlayStatusAnimation
	// void PlayStatusAnimation();                                                                                           // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgress_LevelButton.WBP_CoreArchiveTomeProgress_LevelButton_C.SwitchBorder
	// void SwitchBorder(int32_t index);                                                                                     // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgress_LevelButton.WBP_CoreArchiveTomeProgress_LevelButton_C.triggerNewlyUnlockedEffect
	// void triggerNewlyUnlockedEffect();                                                                                    // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgress_LevelButton.WBP_CoreArchiveTomeProgress_LevelButton_C.colorActiveRomanNumber
	// void colorActiveRomanNumber(FSlateColor Tint);                                                                        // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgress_LevelButton.WBP_CoreArchiveTomeProgress_LevelButton_C.switchDivider
	// void switchDivider(int32_t index);                                                                                    // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgress_LevelButton.WBP_CoreArchiveTomeProgress_LevelButton_C.switchBackground
	// void switchBackground(int32_t index);                                                                                 // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgress_LevelButton.WBP_CoreArchiveTomeProgress_LevelButton_C.switchIndicator
	// void switchIndicator(int32_t index);                                                                                  // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgress_LevelButton.WBP_CoreArchiveTomeProgress_LevelButton_C.switchSwitcher
	// void switchSwitcher(int32_t index, class UWidgetSwitcher* switcher);                                                  // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgress_LevelButton.WBP_CoreArchiveTomeProgress_LevelButton_C.updateDividerVisibility
	// void updateDividerVisibility();                                                                                       // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgress_LevelButton.WBP_CoreArchiveTomeProgress_LevelButton_C.updateStatus
	// void updateStatus();                                                                                                  // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgress_LevelButton.WBP_CoreArchiveTomeProgress_LevelButton_C.updateRomanLevel
	// void updateRomanLevel();                                                                                              // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgress_LevelButton.WBP_CoreArchiveTomeProgress_LevelButton_C.Finished_3189EDB64C798B60FCDE528131E81AE0
	// void Finished_3189EDB64C798B60FCDE528131E81AE0();                                                                     // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgress_LevelButton.WBP_CoreArchiveTomeProgress_LevelButton_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgress_LevelButton.WBP_CoreArchiveTomeProgress_LevelButton_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgress_LevelButton.WBP_CoreArchiveTomeProgress_LevelButton_C.OnClicked
	// void OnClicked();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgress_LevelButton.WBP_CoreArchiveTomeProgress_LevelButton_C.OnSelectedChanged
	// void OnSelectedChanged(bool IsSelected);                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgress_LevelButton.WBP_CoreArchiveTomeProgress_LevelButton_C.UpdateVisual
	// void UpdateVisual(class UArchiveStoryLevelViewData* ViewData, bool newlyUnlocked);                                    // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgress_LevelButton.WBP_CoreArchiveTomeProgress_LevelButton_C.UpdateVisualStatus
	// void UpdateVisualStatus(EArchivesStoryLevelStatus newStatus, bool newlyUnlocked);                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgress_LevelButton.WBP_CoreArchiveTomeProgress_LevelButton_C.ExecuteUbergraph_WBP_CoreArchiveTomeProgress_LevelButton
	// void ExecuteUbergraph_WBP_CoreArchiveTomeProgress_LevelButton(int32_t EntryPoint);                                    // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Archives/Root/ChallengeReminder/WBP_CoreArchiveTomeChallenges_SlotSelector.WBP_CoreArchiveTomeChallenges_SlotSelector_C
/// Size: 0x005C (0x000358 - 0x0003B4)
class UWBP_CoreArchiveTomeChallenges_SlotSelector_C : public UCoreArchiveSlotSelectorWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0358   (0x0008)  
	class UWidgetAnimation*                            BgAnimation;                                                // 0x0360   (0x0008)  
	class UDBDImage*                                   ArrowLeft;                                                  // 0x0368   (0x0008)  
	class UDBDImage*                                   ArrowRight;                                                 // 0x0370   (0x0008)  
	class UDBDImage*                                   BgMark;                                                     // 0x0378   (0x0008)  
	class UDBDImage*                                   BgMark2;                                                    // 0x0380   (0x0008)  
	class UImage*                                      BlackOverlay;                                               // 0x0388   (0x0008)  
	class UImage*                                      BlackSmoke;                                                 // 0x0390   (0x0008)  
	class UImage*                                      BlueSmoke;                                                  // 0x0398   (0x0008)  
	class UDBDImage*                                   Line;                                                       // 0x03A0   (0x0008)  
	class UImage*                                      RedSmoke;                                                   // 0x03A8   (0x0008)  
	float                                              PopupScale;                                                 // 0x03B0   (0x0004)  


	/// Functions
	// Function /DBDUICore/Archives/Root/ChallengeReminder/WBP_CoreArchiveTomeChallenges_SlotSelector.WBP_CoreArchiveTomeChallenges_SlotSelector_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Archives/Root/ChallengeReminder/WBP_CoreArchiveTomeChallenges_SlotSelector.WBP_CoreArchiveTomeChallenges_SlotSelector_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Archives/Root/ChallengeReminder/WBP_CoreArchiveTomeChallenges_SlotSelector.WBP_CoreArchiveTomeChallenges_SlotSelector_C.ExecuteUbergraph_WBP_CoreArchiveTomeChallenges_SlotSelector
	// void ExecuteUbergraph_WBP_CoreArchiveTomeChallenges_SlotSelector(int32_t EntryPoint);                                 // [0x61c32d0] Final                
};

/// Class /DBDUICore/Archives/Rift/WBP_CoreArchiveRiftPanel.WBP_CoreArchiveRiftPanel_C
/// Size: 0x0101 (0x000620 - 0x000721)
class UWBP_CoreArchiveRiftPanel_C : public UCoreArchiveRiftWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0620   (0x0008)  
	class UWidgetAnimation*                            PremiumPassUnlockedv2;                                      // 0x0628   (0x0008)  
	class UWidgetAnimation*                            PremiumPassUnlocked;                                        // 0x0630   (0x0008)  
	class UDBDImage*                                   BGFree;                                                     // 0x0638   (0x0008)  
	class UDBDImage*                                   BGPremium;                                                  // 0x0640   (0x0008)  
	class UDBDImage*                                   BGPremium0;                                                 // 0x0648   (0x0008)  
	class UDBDImage*                                   Blackgradient;                                              // 0x0650   (0x0008)  
	class UDBDTextBlock*                               BonusTrackLabelTB;                                          // 0x0658   (0x0008)  
	class UOverlay*                                    ContentOverlay;                                             // 0x0660   (0x0008)  
	class UDBDImage*                                   CTA_bg;                                                     // 0x0668   (0x0008)  
	class UDBDTextBlock*                               CurrentProgressInfoTB;                                      // 0x0670   (0x0008)  
	class UDBDTextBlock*                               DebugNextTierTooltip;                                       // 0x0678   (0x0008)  
	class UDBDImage*                                   FreeBG;                                                     // 0x0680   (0x0008)  
	class UDBDImage*                                   FreeIcon;                                                   // 0x0688   (0x0008)  
	class UWBP_LoadingLarge_C*                         LoadingIcon;                                                // 0x0690   (0x0008)  
	class UDBDImage*                                   MiddleHeader;                                               // 0x0698   (0x0008)  
	class UOverlay*                                    Overlay_PurchaseButton;                                     // 0x06A0   (0x0008)  
	class UDBDImage*                                   PremiumBG;                                                  // 0x06A8   (0x0008)  
	class UDBDImage*                                   PremiumBG1;                                                 // 0x06B0   (0x0008)  
	class UDBDImage*                                   PremiumBgSmoke;                                             // 0x06B8   (0x0008)  
	class UDBDImage*                                   PremiumIcon;                                                // 0x06C0   (0x0008)  
	class UDBDImage*                                   PremiumLockicon;                                            // 0x06C8   (0x0008)  
	class UDBDImage*                                   PremiumPassUnlockAnimation;                                 // 0x06D0   (0x0008)  
	class UDBDImage*                                   PremiumSheen;                                               // 0x06D8   (0x0008)  
	class UDBDTextBlock*                               PurchaseDescriptionTB;                                      // 0x06E0   (0x0008)  
	class UDBDImage*                                   TierIcon;                                                   // 0x06E8   (0x0008)  
	class UDBDButton*                                  TierIconButton;                                             // 0x06F0   (0x0008)  
	class UDBDTextBlock*                               TierInfoCurrentTierTB;                                      // 0x06F8   (0x0008)  
	class UDBDTextBlock*                               TierInfoProgressTB;                                         // 0x0700   (0x0008)  
	class UDBDImage*                                   TierProgression;                                            // 0x0708   (0x0008)  
	class UDBDImage*                                   TierProgressionBg;                                          // 0x0710   (0x0008)  
	class UDBDImage*                                   UnlockSheen;                                                // 0x0718   (0x0008)  
	bool                                               OwnPass;                                                    // 0x0720   (0x0001)  


	/// Functions
	// Function /DBDUICore/Archives/Rift/WBP_CoreArchiveRiftPanel.WBP_CoreArchiveRiftPanel_C.SetCurrentPageTierTypeVisuals
	// void SetCurrentPageTierTypeVisuals(ETierType TierType);                                                               // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Rift/WBP_CoreArchiveRiftPanel.WBP_CoreArchiveRiftPanel_C.SetCurrentTierTextTypeColor
	// void SetCurrentTierTextTypeColor(ETierType TierType);                                                                 // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Rift/WBP_CoreArchiveRiftPanel.WBP_CoreArchiveRiftPanel_C.SetGenericData
	// void SetGenericData(FArchivesRiftGenericViewData Data);                                                               // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Rift/WBP_CoreArchiveRiftPanel.WBP_CoreArchiveRiftPanel_C.PlayPremiumTrackUnlockAnimation
	// void PlayPremiumTrackUnlockAnimation();                                                                               // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Rift/WBP_CoreArchiveRiftPanel.WBP_CoreArchiveRiftPanel_C.SetVisualData
	// void SetVisualData(FArchivesRiftGenericViewData& Data);                                                               // [0x61c32d0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /DBDUICore/Archives/Rift/WBP_CoreArchiveRiftPanel.WBP_CoreArchiveRiftPanel_C.SetPaginationVisuals
	// void SetPaginationVisuals(bool showBonusTierHighlight, FText& bonusTierTooltipText);                                  // [0x61c32d0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /DBDUICore/Archives/Rift/WBP_CoreArchiveRiftPanel.WBP_CoreArchiveRiftPanel_C.SetTierVisuals
	// void SetTierVisuals(ETierType TierType);                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Rift/WBP_CoreArchiveRiftPanel.WBP_CoreArchiveRiftPanel_C.BndEvt__WBP_CoreArchiveRiftPanel_PurchaseButton_K2Node_ComponentBoundEvent_1_InputSwitcherTriggeredDelegate__DelegateSignature
	// void BndEvt__WBP_CoreArchiveRiftPanel_PurchaseButton_K2Node_ComponentBoundEvent_1_InputSwitcherTriggeredDelegate__DelegateSignature(); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Archives/Rift/WBP_CoreArchiveRiftPanel.WBP_CoreArchiveRiftPanel_C.OnInitialized
	// void OnInitialized();                                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Archives/Rift/WBP_CoreArchiveRiftPanel.WBP_CoreArchiveRiftPanel_C.SetRiftFragmentTooltipViewData
	// void SetRiftFragmentTooltipViewData(FCurrencyProgressionTooltipViewData& RiftFragmentTooltipViewData);                // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Rift/WBP_CoreArchiveRiftPanel.WBP_CoreArchiveRiftPanel_C.BndEvt__WBP_CoreArchiveRiftPanel_TierIconButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	// void BndEvt__WBP_CoreArchiveRiftPanel_TierIconButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Archives/Rift/WBP_CoreArchiveRiftPanel.WBP_CoreArchiveRiftPanel_C.BndEvt__WBP_CoreArchiveRiftPanel_TierIconButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	// void BndEvt__WBP_CoreArchiveRiftPanel_TierIconButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Archives/Rift/WBP_CoreArchiveRiftPanel.WBP_CoreArchiveRiftPanel_C.OnStartAsyncOperation
	// void OnStartAsyncOperation();                                                                                         // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Rift/WBP_CoreArchiveRiftPanel.WBP_CoreArchiveRiftPanel_C.OnStopAsyncOperation
	// void OnStopAsyncOperation();                                                                                          // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Rift/WBP_CoreArchiveRiftPanel.WBP_CoreArchiveRiftPanel_C.ExecuteUbergraph_WBP_CoreArchiveRiftPanel
	// void ExecuteUbergraph_WBP_CoreArchiveRiftPanel(int32_t EntryPoint);                                                   // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveJournalImageViewerWidget.WBP_CoreArchiveJournalImageViewerWidget_C
/// Size: 0x00D0 (0x000388 - 0x000458)
class UWBP_CoreArchiveJournalImageViewerWidget_C : public UCoreArchiveJournalImageViewerWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0388   (0x0008)  
	class UDBDImage*                                   BottomSmokeFX;                                              // 0x0390   (0x0008)  
	class UDBDImage*                                   FullScreenImage;                                            // 0x0398   (0x0008)  
	class UDBDRichTextBlock*                           JournalEntryDescription;                                    // 0x03A0   (0x0008)  
	class UDBDTextBlock*                               JournalEntryTitle;                                          // 0x03A8   (0x0008)  
	class UDBDScrollBox*                               JournalTextEntryScrollBox;                                  // 0x03B0   (0x0008)  
	class UWBP_CoreKeyListenerInputPrompt_C*           ScrollPrompt;                                               // 0x03B8   (0x0008)  
	class UVerticalBox*                                SmokeContainer;                                             // 0x03C0   (0x0008)  
	class USpacer*                                     SmokeHeightSpacer;                                          // 0x03C8   (0x0008)  
	class UVerticalBox*                                TextContainer;                                              // 0x03D0   (0x0008)  
	class UDBDImage*                                   TopCornerSmokeFX;                                           // 0x03D8   (0x0008)  
	class UWBP_CoreAutoPlayButton_C*                   WBP_CoreAutoPlayButton;                                     // 0x03E0   (0x0008)  
	class UWBP_CorePlayStopButton_C*                   WBP_CorePlayStopButton;                                     // 0x03E8   (0x0008)  
	SDK_UNDEFINED(24,3526) /* FText */                 __um(voiceOverPlayText);                                    // 0x03F0   (0x0018)  
	SDK_UNDEFINED(24,3527) /* FText */                 __um(voiceOverStopText);                                    // 0x0408   (0x0018)  
	bool                                               isAutoplay;                                                 // 0x0420   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0421   (0x0007)  MISSED
	SDK_UNDEFINED(24,3528) /* FText */                 __um(DisplayText);                                          // 0x0428   (0x0018)  
	SDK_UNDEFINED(24,3529) /* FText */                 __um(hideText);                                             // 0x0440   (0x0018)  


	/// Functions
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveJournalImageViewerWidget.WBP_CoreArchiveJournalImageViewerWidget_C.SetData
	// void SetData(FArchivesVignetteEntryViewData& Data, bool hasTitle, bool hasDescription);                               // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveJournalImageViewerWidget.WBP_CoreArchiveJournalImageViewerWidget_C.SetVoiceOverText
	// void SetVoiceOverText(FText& playVoiceOverText, FText& stopVoiceOverText, FText& autoplayVoiceOverText);              // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveJournalImageViewerWidget.WBP_CoreArchiveJournalImageViewerWidget_C.BndEvt__WBP_CoreArchiveJournalImageViewerWidget_BackInputSwitcher_K2Node_ComponentBoundEvent_0_InputSwitcherTriggeredDelegate__DelegateSignature
	// void BndEvt__WBP_CoreArchiveJournalImageViewerWidget_BackInputSwitcher_K2Node_ComponentBoundEvent_0_InputSwitcherTriggeredDelegate__DelegateSignature(); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveJournalImageViewerWidget.WBP_CoreArchiveJournalImageViewerWidget_C.BndEvt__WBP_CoreArchiveJournalImageViewerWidget_WBP_CoreAutoPlayButton_K2Node_ComponentBoundEvent_1_OnClickedDelegate__DelegateSignature
	// void BndEvt__WBP_CoreArchiveJournalImageViewerWidget_WBP_CoreAutoPlayButton_K2Node_ComponentBoundEvent_1_OnClickedDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveJournalImageViewerWidget.WBP_CoreArchiveJournalImageViewerWidget_C.BndEvt__WBP_CoreArchiveJournalImageViewerWidget_WBP_CorePlayStopButton_K2Node_ComponentBoundEvent_2_OnClickedDelegate__DelegateSignature
	// void BndEvt__WBP_CoreArchiveJournalImageViewerWidget_WBP_CorePlayStopButton_K2Node_ComponentBoundEvent_2_OnClickedDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveJournalImageViewerWidget.WBP_CoreArchiveJournalImageViewerWidget_C.SetVoiceOverPlaying
	// void SetVoiceOverPlaying(bool voiceOverPlaying);                                                                      // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveJournalImageViewerWidget.WBP_CoreArchiveJournalImageViewerWidget_C.SetVoiceOverAutoplay
	// void SetVoiceOverAutoplay(bool voiceOverAutoplay);                                                                    // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveJournalImageViewerWidget.WBP_CoreArchiveJournalImageViewerWidget_C.BndEvt__WBP_CoreArchiveJournalImageViewerWidget_TextVisibilityInputSwitcher_K2Node_ComponentBoundEvent_3_InputSwitcherTriggeredDelegate__DelegateSignature
	// void BndEvt__WBP_CoreArchiveJournalImageViewerWidget_TextVisibilityInputSwitcher_K2Node_ComponentBoundEvent_3_InputSwitcherTriggeredDelegate__DelegateSignature(); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveJournalImageViewerWidget.WBP_CoreArchiveJournalImageViewerWidget_C.SetTextVisibility
	// void SetTextVisibility(bool visible);                                                                                 // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveJournalImageViewerWidget.WBP_CoreArchiveJournalImageViewerWidget_C.SetTextVisibilityInputText
	// void SetTextVisibilityInputText(FText& DisplayText, FText& hideText);                                                 // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveJournalImageViewerWidget.WBP_CoreArchiveJournalImageViewerWidget_C.HandleAnalogInputEvent
	// void HandleAnalogInputEvent(FAnalogInputEvent& InAnalogInputEvent);                                                   // [0x61c32d0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveJournalImageViewerWidget.WBP_CoreArchiveJournalImageViewerWidget_C.OnControlModeChangedBP
	// void OnControlModeChangedBP(EControlMode controlMode);                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveJournalImageViewerWidget.WBP_CoreArchiveJournalImageViewerWidget_C.SetScrollData
	// void SetScrollData(FText& journalEntryScrollPromptText);                                                              // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveJournalImageViewerWidget.WBP_CoreArchiveJournalImageViewerWidget_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveJournalImageViewerWidget.WBP_CoreArchiveJournalImageViewerWidget_C.Destruct
	// void Destruct();                                                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveJournalImageViewerWidget.WBP_CoreArchiveJournalImageViewerWidget_C.ExecuteUbergraph_WBP_CoreArchiveJournalImageViewerWidget
	// void ExecuteUbergraph_WBP_CoreArchiveJournalImageViewerWidget(int32_t EntryPoint);                                    // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Archives/WBP_CoreArchiveObjectiveWidget.WBP_CoreArchiveObjectiveWidget_C
/// Size: 0x0008 (0x000330 - 0x000338)
class UWBP_CoreArchiveObjectiveWidget_C : public UCoreArchiveObjectiveWidget
{ 
public:
	class UOverlay*                                    ProgressContainer;                                          // 0x0330   (0x0008)  
};

/// Class /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollection_EntryButton.WBP_CoreArchiveTomeCollection_EntryButton_C
/// Size: 0x0080 (0x0004A0 - 0x000520)
class UWBP_CoreArchiveTomeCollection_EntryButton_C : public UCoreArchiveVignetteEntryButtonWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04A0   (0x0008)  
	class UWidgetAnimation*                            Hovered;                                                    // 0x04A8   (0x0008)  
	class UWidgetAnimation*                            Unlocked;                                                   // 0x04B0   (0x0008)  
	class UDBDImage*                                   Border;                                                     // 0x04B8   (0x0008)  
	class UDBDImage*                                   circle;                                                     // 0x04C0   (0x0008)  
	class UWBP_CoreArchiveTomeChallenges_VFXWidget_C*  CollectionButtonVFX;                                        // 0x04C8   (0x0008)  
	class UDBDImage*                                   Disabled;                                                   // 0x04D0   (0x0008)  
	class UDBDImage*                                   EntryLockedIcon;                                            // 0x04D8   (0x0008)  
	class UDBDTextBlock*                               EntryNumberTB;                                              // 0x04E0   (0x0008)  
	class UDBDImage*                                   EntryUnlockedIcon;                                          // 0x04E8   (0x0008)  
	class UWBP_CoreArchiveTomeChallenges_VFXWidget_C*  NewTagVFX;                                                  // 0x04F0   (0x0008)  
	class UDBDImage*                                   Rollover;                                                   // 0x04F8   (0x0008)  
	class UOverlay*                                    SelectedContainer;                                          // 0x0500   (0x0008)  
	class UOverlay*                                    UnreadIndicator;                                            // 0x0508   (0x0008)  
	class UTextBlock*                                  UnreadIndicatorTB;                                          // 0x0510   (0x0008)  
	class UWBP_CoreOnHoverBorder_C*                    WBP_CoreOnHoverBorder;                                      // 0x0518   (0x0008)  


	/// Functions
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollection_EntryButton.WBP_CoreArchiveTomeCollection_EntryButton_C.Finished_24BCF02A4C5E24A0727B59AE317D449D
	// void Finished_24BCF02A4C5E24A0727B59AE317D449D();                                                                     // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollection_EntryButton.WBP_CoreArchiveTomeCollection_EntryButton_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollection_EntryButton.WBP_CoreArchiveTomeCollection_EntryButton_C.OnSelectedChanged
	// void OnSelectedChanged(bool IsSelected);                                                                              // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollection_EntryButton.WBP_CoreArchiveTomeCollection_EntryButton_C.OnEnabledChanged
	// void OnEnabledChanged(bool IsEnabled);                                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollection_EntryButton.WBP_CoreArchiveTomeCollection_EntryButton_C.UnlockEntry
	// void UnlockEntry();                                                                                                   // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollection_EntryButton.WBP_CoreArchiveTomeCollection_EntryButton_C.OnPressed
	// void OnPressed();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollection_EntryButton.WBP_CoreArchiveTomeCollection_EntryButton_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollection_EntryButton.WBP_CoreArchiveTomeCollection_EntryButton_C.SetVisualData
	// void SetVisualData(int32_t entryNumber, bool IsRead, FText& unreadIndicatorText, bool isImage);                       // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollection_EntryButton.WBP_CoreArchiveTomeCollection_EntryButton_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollection_EntryButton.WBP_CoreArchiveTomeCollection_EntryButton_C.Play Unlock Animation
	// void Play Unlock Animation();                                                                                         // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollection_EntryButton.WBP_CoreArchiveTomeCollection_EntryButton_C.ExecuteUbergraph_WBP_CoreArchiveTomeCollection_EntryButton
	// void ExecuteUbergraph_WBP_CoreArchiveTomeCollection_EntryButton(int32_t EntryPoint);                                  // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgress_LevelContainer.WBP_CoreArchiveTomeProgress_LevelContainer_C
/// Size: 0x0058 (0x0003A8 - 0x000400)
class UWBP_CoreArchiveTomeProgress_LevelContainer_C : public UCoreStoryLevelsSelectorWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x03A8   (0x0008)  
	class UWidgetAnimation*                            Instant_mastered_anim;                                      // 0x03B0   (0x0008)  
	class UWidgetAnimation*                            Instant_completed_anim;                                     // 0x03B8   (0x0008)  
	class UWidgetAnimation*                            Completed_to_mastered_anim;                                 // 0x03C0   (0x0008)  
	class UWidgetAnimation*                            Completed_anim;                                             // 0x03C8   (0x0008)  
	class UWidgetAnimation*                            Mastered_anim;                                              // 0x03D0   (0x0008)  
	class UDBDImage*                                   CompletionBackground;                                       // 0x03D8   (0x0008)  
	class UDBDImage*                                   MasteredIcon;                                               // 0x03E0   (0x0008)  
	class UWBP_CoreArchiveTomeChallenges_VFXWidget_C*  MasteredVFX;                                                // 0x03E8   (0x0008)  
	EArchivesStoryLevelStatus                          OldLevelsCompletion;                                        // 0x03F0   (0x0001)  
	bool                                               IsTooltip;                                                  // 0x03F1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x03F2   (0x0006)  MISSED
	class UAkAudioEvent*                               LevelSelectSoundEffect;                                     // 0x03F8   (0x0008)  


	/// Functions
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgress_LevelContainer.WBP_CoreArchiveTomeProgress_LevelContainer_C.SetCompletionVisuals
	// void SetCompletionVisuals(EArchivesStoryLevelStatus CompletionStatus, bool PlayAnimation);                            // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgress_LevelContainer.WBP_CoreArchiveTomeProgress_LevelContainer_C.Finished_B8D4AD7D49C60726CFC1D6A26E4BDE24
	// void Finished_B8D4AD7D49C60726CFC1D6A26E4BDE24();                                                                     // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgress_LevelContainer.WBP_CoreArchiveTomeProgress_LevelContainer_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgress_LevelContainer.WBP_CoreArchiveTomeProgress_LevelContainer_C.BndEvt__PreviousLevelInputSwitcher_K2Node_ComponentBoundEvent_0_InputSwitcherTriggeredDelegate__DelegateSignature
	// void BndEvt__PreviousLevelInputSwitcher_K2Node_ComponentBoundEvent_0_InputSwitcherTriggeredDelegate__DelegateSignature(); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgress_LevelContainer.WBP_CoreArchiveTomeProgress_LevelContainer_C.BndEvt__NextLevelInputSwitcher_K2Node_ComponentBoundEvent_1_InputSwitcherTriggeredDelegate__DelegateSignature
	// void BndEvt__NextLevelInputSwitcher_K2Node_ComponentBoundEvent_1_InputSwitcherTriggeredDelegate__DelegateSignature(); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgress_LevelContainer.WBP_CoreArchiveTomeProgress_LevelContainer_C.UpdateVisual
	// void UpdateVisual(EArchivesStoryLevelStatus globalStatus, bool PlayAnimation);                                        // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgress_LevelContainer.WBP_CoreArchiveTomeProgress_LevelContainer_C.Play Mastered Animation
	// void Play Mastered Animation();                                                                                       // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/LevelProgression/WBP_CoreArchiveTomeProgress_LevelContainer.WBP_CoreArchiveTomeProgress_LevelContainer_C.ExecuteUbergraph_WBP_CoreArchiveTomeProgress_LevelContainer
	// void ExecuteUbergraph_WBP_CoreArchiveTomeProgress_LevelContainer(int32_t EntryPoint);                                 // [0x61c32d0] Final                
};

/// Class /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollectionPanel.WBP_CoreArchiveTomeCollectionPanel_C
/// Size: 0x00F0 (0x000420 - 0x000510)
class UWBP_CoreArchiveTomeCollectionPanel_C : public UCoreArchiveJournalWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0420   (0x0008)  
	class UDBDImage*                                   Divider;                                                    // 0x0428   (0x0008)  
	class UDBDRichTextBlock*                           Header;                                                     // 0x0430   (0x0008)  
	class UOverlay*                                    JournalEntryAudio;                                          // 0x0438   (0x0008)  
	class UWBP_CoreCustomIconButton_C*                 JournalGoToImageViewer;                                     // 0x0440   (0x0008)  
	class UOverlay*                                    JournalImageEntries;                                        // 0x0448   (0x0008)  
	class UDBDImage*                                   JournalImageEntryBackground;                                // 0x0450   (0x0008)  
	class UDBDButton*                                  JournalImageEntryClickable;                                 // 0x0458   (0x0008)  
	class UDBDRichTextBlock*                           JournalImageEntryDescription;                               // 0x0460   (0x0008)  
	class UDBDTextBlock*                               JournalImageEntryTitle;                                     // 0x0468   (0x0008)  
	class UOverlay*                                    JournalTextEntries;                                         // 0x0470   (0x0008)  
	class UDBDRichTextBlock*                           JournalTextEntryDescription;                                // 0x0478   (0x0008)  
	class UDBDScrollBox*                               JournalTextEntryScrollBox;                                  // 0x0480   (0x0008)  
	class UDBDTextBlock*                               JournalTextEntryTitle;                                      // 0x0488   (0x0008)  
	class UGridPanel*                                  MainContent;                                                // 0x0490   (0x0008)  
	class UDBDImage*                                   SmokeBG;                                                    // 0x0498   (0x0008)  
	class UDBDTextBlock*                               SubHeader;                                                  // 0x04A0   (0x0008)  
	class UWBP_CoreAutoPlayButton_C*                   WBP_CoreAutoPlayButton;                                     // 0x04A8   (0x0008)  
	class UWBP_CorePlayStopButton_C*                   WBP_CorePlayStopButton;                                     // 0x04B0   (0x0008)  
	bool                                               isAutoplay;                                                 // 0x04B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x04B9   (0x0007)  MISSED
	SDK_UNDEFINED(24,3530) /* FText */                 __um(voiceOverPlayText);                                    // 0x04C0   (0x0018)  
	SDK_UNDEFINED(24,3531) /* FText */                 __um(voiceOverStopText);                                    // 0x04D8   (0x0018)  
	SDK_UNDEFINED(24,3532) /* FText */                 __um(voiceOverAutoplayText);                                // 0x04F0   (0x0018)  
	class UAkAudioEvent*                               JournalEntrySelect;                                         // 0x0508   (0x0008)  


	/// Functions
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollectionPanel.WBP_CoreArchiveTomeCollectionPanel_C.SetScrollPrompt
	// void SetScrollPrompt(class UCoreKeyListenerInputPromptWidget* ScrollPrompt, FText vignetteListScrollPromptText, FText journalEntryScrollPromptText); // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollectionPanel.WBP_CoreArchiveTomeCollectionPanel_C.SetVoiceOverPlaying
	// void SetVoiceOverPlaying(bool voiceOverPlaying);                                                                      // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollectionPanel.WBP_CoreArchiveTomeCollectionPanel_C.SetVoiceOverAutoplay
	// void SetVoiceOverAutoplay(bool voiceOverAutoplay);                                                                    // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollectionPanel.WBP_CoreArchiveTomeCollectionPanel_C.SetEntryText
	// void SetEntryText(FText& titleText, FText& descriptionText);                                                          // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollectionPanel.WBP_CoreArchiveTomeCollectionPanel_C.SetVoiceOverButtonsVisibility
	// void SetVoiceOverButtonsVisibility(bool IsVisible);                                                                   // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollectionPanel.WBP_CoreArchiveTomeCollectionPanel_C.SetVoiceOverText
	// void SetVoiceOverText(FText& playVoiceOverText, FText& stopVoiceOverText, FText& autoplayVoiceOverText);              // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollectionPanel.WBP_CoreArchiveTomeCollectionPanel_C.SetVignetteText
	// void SetVignetteText(FText& titleText, FText& subtitleText);                                                          // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollectionPanel.WBP_CoreArchiveTomeCollectionPanel_C.HandleAnalogInputEvent
	// void HandleAnalogInputEvent(FAnalogInputEvent& InAnalogInputEvent);                                                   // [0x61c32d0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollectionPanel.WBP_CoreArchiveTomeCollectionPanel_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollectionPanel.WBP_CoreArchiveTomeCollectionPanel_C.Destruct
	// void Destruct();                                                                                                      // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollectionPanel.WBP_CoreArchiveTomeCollectionPanel_C.OnControlModeChangedBP
	// void OnControlModeChangedBP(EControlMode controlMode);                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollectionPanel.WBP_CoreArchiveTomeCollectionPanel_C.BndEvt__WBP_CoreArchiveTomeCollectionPanel_RightArrowInputSwitcher_K2Node_ComponentBoundEvent_2_InputSwitcherTriggeredDelegate__DelegateSignature
	// void BndEvt__WBP_CoreArchiveTomeCollectionPanel_RightArrowInputSwitcher_K2Node_ComponentBoundEvent_2_InputSwitcherTriggeredDelegate__DelegateSignature(); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollectionPanel.WBP_CoreArchiveTomeCollectionPanel_C.BndEvt__WBP_CoreArchiveTomeCollectionPanel_LeftArrowInputSwitcher_K2Node_ComponentBoundEvent_3_InputSwitcherTriggeredDelegate__DelegateSignature
	// void BndEvt__WBP_CoreArchiveTomeCollectionPanel_LeftArrowInputSwitcher_K2Node_ComponentBoundEvent_3_InputSwitcherTriggeredDelegate__DelegateSignature(); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollectionPanel.WBP_CoreArchiveTomeCollectionPanel_C.BndEvt__WBP_CoreArchiveTomeCollectionPanel_WBP_CorePlayStopButton_K2Node_ComponentBoundEvent_10_OnClickedDelegate__DelegateSignature
	// void BndEvt__WBP_CoreArchiveTomeCollectionPanel_WBP_CorePlayStopButton_K2Node_ComponentBoundEvent_10_OnClickedDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollectionPanel.WBP_CoreArchiveTomeCollectionPanel_C.BndEvt__WBP_CoreArchiveTomeCollectionPanel_WBP_CoreAutoPlayButton_K2Node_ComponentBoundEvent_12_OnClickedDelegate__DelegateSignature
	// void BndEvt__WBP_CoreArchiveTomeCollectionPanel_WBP_CoreAutoPlayButton_K2Node_ComponentBoundEvent_12_OnClickedDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollectionPanel.WBP_CoreArchiveTomeCollectionPanel_C.OnInitialized
	// void OnInitialized();                                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollectionPanel.WBP_CoreArchiveTomeCollectionPanel_C.SetEntryImage
	// void SetEntryImage(FText& titleText, FText& descriptionText, TWeakObjectPtr<UTexture2D*>& RewardImage, float textureOffset); // [0x61c32d0] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollectionPanel.WBP_CoreArchiveTomeCollectionPanel_C.BndEvt__WBP_CoreArchiveTomeCollectionPanel_JournalGoToImageViewer_K2Node_ComponentBoundEvent_1_OnClickedDelegate__DelegateSignature
	// void BndEvt__WBP_CoreArchiveTomeCollectionPanel_JournalGoToImageViewer_K2Node_ComponentBoundEvent_1_OnClickedDelegate__DelegateSignature(class UCoreButtonWidget* buttonTarget); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollectionPanel.WBP_CoreArchiveTomeCollectionPanel_C.SetTopFogOffset
	// void SetTopFogOffset(bool hasTitle, bool hasDescription);                                                             // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollectionPanel.WBP_CoreArchiveTomeCollectionPanel_C.SetBottomFogOffset
	// void SetBottomFogOffset(bool HasAudio);                                                                               // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollectionPanel.WBP_CoreArchiveTomeCollectionPanel_C.BndEvt__WBP_CoreArchiveTomeCollectionPanel_JournalImageEntryClickable2_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
	// void BndEvt__WBP_CoreArchiveTomeCollectionPanel_JournalImageEntryClickable2_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature(); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollectionPanel.WBP_CoreArchiveTomeCollectionPanel_C.BndEvt__WBP_CoreArchiveTomeCollectionPanel_JournalImageEntryClickable_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	// void BndEvt__WBP_CoreArchiveTomeCollectionPanel_JournalImageEntryClickable_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollectionPanel.WBP_CoreArchiveTomeCollectionPanel_C.BndEvt__WBP_CoreArchiveTomeCollectionPanel_JournalImageEntryClickable_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	// void BndEvt__WBP_CoreArchiveTomeCollectionPanel_JournalImageEntryClickable_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // [0x61c32d0] BlueprintEvent       
	// Function /DBDUICore/Archives/Tome/Collection/WBP_CoreArchiveTomeCollectionPanel.WBP_CoreArchiveTomeCollectionPanel_C.ExecuteUbergraph_WBP_CoreArchiveTomeCollectionPanel
	// void ExecuteUbergraph_WBP_CoreArchiveTomeCollectionPanel(int32_t EntryPoint);                                         // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallengesPanel.WBP_CoreArchiveTomeChallengesPanel_C
/// Size: 0x0018 (0x0004A8 - 0x0004C0)
class UWBP_CoreArchiveTomeChallengesPanel_C : public UCoreArchiveQuestMapWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x04A8   (0x0008)  
	class UWidgetAnimation*                            TestAnimation;                                              // 0x04B0   (0x0008)  
	class UWBP_LoadingLarge_C*                         LoadingIcon;                                                // 0x04B8   (0x0008)  


	/// Functions
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallengesPanel.WBP_CoreArchiveTomeChallengesPanel_C.SetLoadingSpinner
	// void SetLoadingSpinner(bool isLoading);                                                                               // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallengesPanel.WBP_CoreArchiveTomeChallengesPanel_C.OnInitialized
	// void OnInitialized();                                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallengesPanel.WBP_CoreArchiveTomeChallengesPanel_C.ExecuteUbergraph_WBP_CoreArchiveTomeChallengesPanel
	// void ExecuteUbergraph_WBP_CoreArchiveTomeChallengesPanel(int32_t EntryPoint);                                         // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Archives/Tome/Challenges/Editor/WBP_CoreArchiveTomeChallengesEditor.WBP_CoreArchiveTomeChallengesEditor_C
/// Size: 0x0010 (0x0005A8 - 0x0005B8)
class UWBP_CoreArchiveTomeChallengesEditor_C : public UCoreArchiveQuestEditorWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x05A8   (0x0008)  
	class UWBP_CoreArchiveTomeChallengesEditorGridComponent_C* GridLines;                                          // 0x05B0   (0x0008)  


	/// Functions
	// Function /DBDUICore/Archives/Tome/Challenges/Editor/WBP_CoreArchiveTomeChallengesEditor.WBP_CoreArchiveTomeChallengesEditor_C.OnMouseMove
	// FEventReply OnMouseMove(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                             // [0x61c32d0] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/Editor/WBP_CoreArchiveTomeChallengesEditor.WBP_CoreArchiveTomeChallengesEditor_C.OnDrop
	// bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);                   // [0x61c32d0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/Editor/WBP_CoreArchiveTomeChallengesEditor.WBP_CoreArchiveTomeChallengesEditor_C.OnDragOver
	// bool OnDragOver(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);               // [0x61c32d0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/Editor/WBP_CoreArchiveTomeChallengesEditor.WBP_CoreArchiveTomeChallengesEditor_C.Construct
	// void Construct();                                                                                                     // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/Editor/WBP_CoreArchiveTomeChallengesEditor.WBP_CoreArchiveTomeChallengesEditor_C.SetGridLinesArray
	// void SetGridLinesArray(TArray<FLinePair>& gridArrayVertical, TArray<FLinePair>& gridArrayHorizontal);                 // [0x61c32d0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/Editor/WBP_CoreArchiveTomeChallengesEditor.WBP_CoreArchiveTomeChallengesEditor_C.SetHighlightedGridLines
	// void SetHighlightedGridLines(int32_t verticalIndex, int32_t horizontalIndex);                                         // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/Editor/WBP_CoreArchiveTomeChallengesEditor.WBP_CoreArchiveTomeChallengesEditor_C.ExecuteUbergraph_WBP_CoreArchiveTomeChallengesEditor
	// void ExecuteUbergraph_WBP_CoreArchiveTomeChallengesEditor(int32_t EntryPoint);                                        // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Archives/Compendium/WBP_CoreArchiveCompendium_Button.WBP_CoreArchiveCompendium_Button_C
/// Size: 0x0210 (0x000490 - 0x0006A0)
class UWBP_CoreArchiveCompendium_Button_C : public UCoreArchiveCompendiumButtonWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0490   (0x0008)  
	class UWidgetAnimation*                            HoverAnimation;                                             // 0x0498   (0x0008)  
	class UDBDImage*                                   _1;                                                         // 0x04A0   (0x0008)  
	class UDBDImage*                                   _2;                                                         // 0x04A8   (0x0008)  
	class UDBDImage*                                   _3;                                                         // 0x04B0   (0x0008)  
	class UDBDImage*                                   _4;                                                         // 0x04B8   (0x0008)  
	class UVerticalBox*                                ActiveMark;                                                 // 0x04C0   (0x0008)  
	class UDBDImage*                                   BG;                                                         // 0x04C8   (0x0008)  
	class UDBDImage*                                   BottomLeft;                                                 // 0x04D0   (0x0008)  
	class UDBDImage*                                   BottomRight;                                                // 0x04D8   (0x0008)  
	class UDBDImage*                                   GhostStoryTexture;                                          // 0x04E0   (0x0008)  
	class UWBP_CoreArchiveTomeChallenges_VFXWidget_C*  MasteredVFX;                                                // 0x04E8   (0x0008)  
	class UDBDImage*                                   MasterEye;                                                  // 0x04F0   (0x0008)  
	class UDBDImage*                                   MasterFlourishes;                                           // 0x04F8   (0x0008)  
	class UGridPanel*                                  ProgressDiamondContainer;                                   // 0x0500   (0x0008)  
	class UDBDImage*                                   ProgressLvlBg;                                              // 0x0508   (0x0008)  
	class UDBDImage*                                   Rollover;                                                   // 0x0510   (0x0008)  
	class UDBDImage*                                   Shadow;                                                     // 0x0518   (0x0008)  
	class UDBDImage*                                   TopLeft;                                                    // 0x0520   (0x0008)  
	class UDBDImage*                                   TopRight;                                                   // 0x0528   (0x0008)  
	TArray<class UTexture2D*>                          masteredIconBrushPath;                                      // 0x0530   (0x0010)  
	FSlateColor                                        masteredTintcolour;                                         // 0x0540   (0x0028)  
	FArchivesPastTomeViewData                          PastTomeData;                                               // 0x0568   (0x0070)  
	FSlateColor                                        InProgressTintColour;                                       // 0x05D8   (0x0028)  
	class UWidgetAnimation*                            Hovered;                                                    // 0x0600   (0x0008)  
	class UWidgetAnimation*                            Pressed;                                                    // 0x0608   (0x0008)  
	FCompendiumButtonData                              CompendiumButtonData;                                       // 0x0610   (0x0070)  
	TArray<class UTexture2D*>                          unmasteredIconBrushPath;                                    // 0x0680   (0x0010)  
	TArray<class UDBDImage*>                           progressDiamondIcons;                                       // 0x0690   (0x0010)  


	/// Functions
	// Function /DBDUICore/Archives/Compendium/WBP_CoreArchiveCompendium_Button.WBP_CoreArchiveCompendium_Button_C.isCompletedOrMastered
	// void isCompletedOrMastered(EArchivesStoryLevelStatus levelStatus, bool& isCompletedOrMastered);                       // [0x61c32d0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Compendium/WBP_CoreArchiveCompendium_Button.WBP_CoreArchiveCompendium_Button_C.Set Ghost StoryView
	// void Set Ghost StoryView(bool isGhostStory);                                                                          // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Compendium/WBP_CoreArchiveCompendium_Button.WBP_CoreArchiveCompendium_Button_C.setMasteredProgression
	// void setMasteredProgression(FCompendiumButtonData CompendiumButtonData);                                              // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Compendium/WBP_CoreArchiveCompendium_Button.WBP_CoreArchiveCompendium_Button_C.setDiamondProgression
	// void setDiamondProgression(int32_t Level, EArchivesStoryLevelStatus levelStatus);                                     // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Compendium/WBP_CoreArchiveCompendium_Button.WBP_CoreArchiveCompendium_Button_C.OnPressed
	// void OnPressed();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Compendium/WBP_CoreArchiveCompendium_Button.WBP_CoreArchiveCompendium_Button_C.OnReleased
	// void OnReleased();                                                                                                    // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Compendium/WBP_CoreArchiveCompendium_Button.WBP_CoreArchiveCompendium_Button_C.OnClicked
	// void OnClicked();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Compendium/WBP_CoreArchiveCompendium_Button.WBP_CoreArchiveCompendium_Button_C.SetLevelProgressionVisual
	// void SetLevelProgressionVisual(int32_t buttonLevel, EArchivesStoryLevelStatus levelStatus);                           // [0x61c32d0] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Compendium/WBP_CoreArchiveCompendium_Button.WBP_CoreArchiveCompendium_Button_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Compendium/WBP_CoreArchiveCompendium_Button.WBP_CoreArchiveCompendium_Button_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Compendium/WBP_CoreArchiveCompendium_Button.WBP_CoreArchiveCompendium_Button_C.SetGhostStory
	// void SetGhostStory(bool isGhostStory);                                                                                // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Compendium/WBP_CoreArchiveCompendium_Button.WBP_CoreArchiveCompendium_Button_C.SetButtonVisual
	// void SetButtonVisual(FCompendiumButtonData& buttonData);                                                              // [0x61c32d0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /DBDUICore/Archives/Compendium/WBP_CoreArchiveCompendium_Button.WBP_CoreArchiveCompendium_Button_C.ResetVisuals
	// void ResetVisuals();                                                                                                  // [0x61c32d0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Compendium/WBP_CoreArchiveCompendium_Button.WBP_CoreArchiveCompendium_Button_C.OnInitialized
	// void OnInitialized();                                                                                                 // [0x61c32d0] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /DBDUICore/Archives/Compendium/WBP_CoreArchiveCompendium_Button.WBP_CoreArchiveCompendium_Button_C.ExecuteUbergraph_WBP_CoreArchiveCompendium_Button
	// void ExecuteUbergraph_WBP_CoreArchiveCompendium_Button(int32_t EntryPoint);                                           // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Archives/Rift/WBP_CoreArchiveRift_Tier.WBP_CoreArchiveRift_Tier_C
/// Size: 0x0088 (0x0002F8 - 0x000380)
class UWBP_CoreArchiveRift_Tier_C : public UCoreArchiveRiftTierItem
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02F8   (0x0008)  
	class UWidgetAnimation*                            PremiumRewardsUnlockAnimation;                              // 0x0300   (0x0008)  
	class UWidgetAnimation*                            FreeRewardsUnlockAnimation;                                 // 0x0308   (0x0008)  
	class UDBDImage*                                   BackBackground;                                             // 0x0310   (0x0008)  
	class UDBDImage*                                   Divider;                                                    // 0x0318   (0x0008)  
	class UDBDImage*                                   FreeRewardsHighlighted;                                     // 0x0320   (0x0008)  
	class UDBDImage*                                   FreeRewardsLocked;                                          // 0x0328   (0x0008)  
	class UDBDImage*                                   FreeRewardsUnlockImg;                                       // 0x0330   (0x0008)  
	class UDBDImage*                                   PremiumRewardsHighlighted;                                  // 0x0338   (0x0008)  
	class UDBDImage*                                   PremiumRewardsLocked;                                       // 0x0340   (0x0008)  
	class UDBDImage*                                   PremiumRewardsUnlockingImg;                                 // 0x0348   (0x0008)  
	class UDBDImage*                                   TierProgress;                                               // 0x0350   (0x0008)  
	class UDBDTextBlock*                               TierTB;                                                     // 0x0358   (0x0008)  
	TArray<class UCoreRewardWrapperWidget*>            FreeRewardWidgets;                                          // 0x0360   (0x0010)  
	TArray<class UCoreRewardWrapperWidget*>            PremiumRewardWidgets;                                       // 0x0370   (0x0010)  


	/// Functions
	// Function /DBDUICore/Archives/Rift/WBP_CoreArchiveRift_Tier.WBP_CoreArchiveRift_Tier_C.SetTierVisual
	// void SetTierVisual(ETierType TierType);                                                                               // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Rift/WBP_CoreArchiveRift_Tier.WBP_CoreArchiveRift_Tier_C.OnPremiumRewardClicked
	// void OnPremiumRewardClicked(class UCoreButtonWidget* buttonTarget);                                                   // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Rift/WBP_CoreArchiveRift_Tier.WBP_CoreArchiveRift_Tier_C.OnFreeRewardClicked
	// void OnFreeRewardClicked(class UCoreButtonWidget* buttonTarget);                                                      // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Rift/WBP_CoreArchiveRift_Tier.WBP_CoreArchiveRift_Tier_C.SetIsHighlighted
	// void SetIsHighlighted(bool isHighlighted);                                                                            // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Rift/WBP_CoreArchiveRift_Tier.WBP_CoreArchiveRift_Tier_C.SetLockedVisual
	// void SetLockedVisual(bool IsLocked, bool hasPremium);                                                                 // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Rift/WBP_CoreArchiveRift_Tier.WBP_CoreArchiveRift_Tier_C.SetWidgetData
	// void SetWidgetData(FArchiveRiftTierRewardsViewData Data);                                                             // [0x61c32d0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Rift/WBP_CoreArchiveRift_Tier.WBP_CoreArchiveRift_Tier_C.Clear
	// void Clear();                                                                                                         // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /DBDUICore/Archives/Rift/WBP_CoreArchiveRift_Tier.WBP_CoreArchiveRift_Tier_C.PlayUnlockanimation
	// void PlayUnlockanimation(bool IsPremiumUnlocked, float Delay);                                                        // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /DBDUICore/Archives/Rift/WBP_CoreArchiveRift_Tier.WBP_CoreArchiveRift_Tier_C.SetGenericData
	// void SetGenericData(FArchiveRiftTierRewardsViewData& Data);                                                           // [0x61c32d0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /DBDUICore/Archives/Rift/WBP_CoreArchiveRift_Tier.WBP_CoreArchiveRift_Tier_C.OnRewardAnimationComplete
	// void OnRewardAnimationComplete();                                                                                     // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Rift/WBP_CoreArchiveRift_Tier.WBP_CoreArchiveRift_Tier_C.SetLockedState
	// void SetLockedState(bool IsLocked, bool hasPremium);                                                                  // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /DBDUICore/Archives/Rift/WBP_CoreArchiveRift_Tier.WBP_CoreArchiveRift_Tier_C.ExecuteUbergraph_WBP_CoreArchiveRift_Tier
	// void ExecuteUbergraph_WBP_CoreArchiveRift_Tier(int32_t EntryPoint);                                                   // [0x61c32d0] Final|HasDefaults    
};

/// Class /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_Button.WBP_CoreArchiveTomeChallenges_Button_C
/// Size: 0x0130 (0x000568 - 0x000698)
class UWBP_CoreArchiveTomeChallenges_Button_C : public UCoreArchiveQuestNodeWidget
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0568   (0x0008)  
	class UWidgetAnimation*                            PausedAnimation;                                            // 0x0570   (0x0008)  
	class UWidgetAnimation*                            PressedAnimation;                                           // 0x0578   (0x0008)  
	class UWidgetAnimation*                            HoverAnimation;                                             // 0x0580   (0x0008)  
	class UWidgetAnimation*                            ActiveAnimation;                                            // 0x0588   (0x0008)  
	class UDBDImage*                                   BG;                                                         // 0x0590   (0x0008)  
	class UWBP_CoreArchiveTomeChallenges_VFXWidget_C*  ChallengeNodeVFX;                                           // 0x0598   (0x0008)  
	class UDBDImage*                                   CurrencyBackground;                                         // 0x05A0   (0x0008)  
	class UDBDImage*                                   CustomizationRarity;                                        // 0x05A8   (0x0008)  
	class UDBDImage*                                   Glow;                                                       // 0x05B0   (0x0008)  
	class UDBDImage*                                   Hover;                                                      // 0x05B8   (0x0008)  
	class UScaleBox*                                   IconScaleBox;                                               // 0x05C0   (0x0008)  
	class UDBDImage*                                   Skin;                                                       // 0x05C8   (0x0008)  
	class UDBDImage*                                   VignetteCurrencyAmountBG;                                   // 0x05D0   (0x0008)  
	class UDBDImage*                                   VignetteImageIndicatorBG;                                   // 0x05D8   (0x0008)  
	class UDBDImage*                                   VignetteImageIndicatorIcon;                                 // 0x05E0   (0x0008)  
	class UDBDImage*                                   VignetteTextIndicatorBG;                                    // 0x05E8   (0x0008)  
	class UDBDImage*                                   VignetteTextIndicatorIcon;                                  // 0x05F0   (0x0008)  
	FLinearColor                                       In_Value;                                                   // 0x05F8   (0x0010)  
	FWidgetTransform                                   Narrative;                                                  // 0x0608   (0x001C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0624   (0x0004)  MISSED
	FArchiveTomeSkinData                               Tome_Skin_Data;                                             // 0x0628   (0x0038)  
	FArchiveTomeSkinData                               Tome_Skin_Data0;                                            // 0x0660   (0x0038)  


	/// Functions
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_Button.WBP_CoreArchiveTomeChallenges_Button_C.Set Currency Background Materials
	// void Set Currency Background Materials(ECurrencyType CurrencyType);                                                   // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_Button.WBP_CoreArchiveTomeChallenges_Button_C.Set Node Visuals
	// void Set Node Visuals(EArchiveNodeType Node Type, EStoryNodeState Node State);                                        // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_Button.WBP_CoreArchiveTomeChallenges_Button_C.Set Vignette Indicator Position
	// void Set Vignette Indicator Position(EArchiveNodeType NodeType);                                                      // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_Button.WBP_CoreArchiveTomeChallenges_Button_C.Set Icon Scale
	// void Set Icon Scale(EArchiveNodeType Node Type);                                                                      // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_Button.WBP_CoreArchiveTomeChallenges_Button_C.Set Glow Mask
	// void Set Glow Mask(EArchiveNodeType Node Type);                                                                       // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_Button.WBP_CoreArchiveTomeChallenges_Button_C.SetBGMaterials_Available
	// void SetBGMaterials_Available(EArchiveNodeType Node Type);                                                            // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_Button.WBP_CoreArchiveTomeChallenges_Button_C.Set Skin Glow
	// void Set Skin Glow(EStoryNodeState Node State);                                                                       // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_Button.WBP_CoreArchiveTomeChallenges_Button_C.Set Icon Colors
	// void Set Icon Colors(EStoryNodeState Node State, EArchiveNodeType Node Type);                                         // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_Button.WBP_CoreArchiveTomeChallenges_Button_C.SetBGMaterials_Completed
	// void SetBGMaterials_Completed(EArchiveNodeType Node Type);                                                            // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_Button.WBP_CoreArchiveTomeChallenges_Button_C.Set Hover Defaults
	// void Set Hover Defaults(EArchiveNodeType Node Type);                                                                  // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_Button.WBP_CoreArchiveTomeChallenges_Button_C.Set Customization Rarity Materials
	// void Set Customization Rarity Materials(EItemRarity Rarity);                                                          // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_Button.WBP_CoreArchiveTomeChallenges_Button_C.Set VFX Particles
	// void Set VFX Particles(EArchiveNodeType Node Type, EStoryNodeState Node State);                                       // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_Button.WBP_CoreArchiveTomeChallenges_Button_C.OnDragDetected
	// void OnDragDetected(FGeometry MyGeometry, FPointerEvent& PointerEvent, class UDragDropOperation*& Operation);         // [0x61c32d0] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_Button.WBP_CoreArchiveTomeChallenges_Button_C.OnPreviewMouseButtonDown
	// FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                // [0x61c32d0] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_Button.WBP_CoreArchiveTomeChallenges_Button_C.Set Skin Colors
	// void Set Skin Colors(EStoryNodeState Node State, EArchiveNodeType Node Type);                                         // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_Button.WBP_CoreArchiveTomeChallenges_Button_C.SetBGMaterials_Claimed
	// void SetBGMaterials_Claimed(EArchiveNodeType NodeType);                                                               // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_Button.WBP_CoreArchiveTomeChallenges_Button_C.SetBGMaterials_Active
	// void SetBGMaterials_Active(EArchiveNodeType NodeType);                                                                // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_Button.WBP_CoreArchiveTomeChallenges_Button_C.SetBGTextures_Default
	// void SetBGTextures_Default(EArchiveNodeType NodeType);                                                                // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_Button.WBP_CoreArchiveTomeChallenges_Button_C.Set Skin Textures
	// void Set Skin Textures(EArchiveNodeType Node Type);                                                                   // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_Button.WBP_CoreArchiveTomeChallenges_Button_C.Set Material From Type And State
	// void Set Material From Type And State();                                                                              // [0x61c32d0] Public|BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_Button.WBP_CoreArchiveTomeChallenges_Button_C.Finished_CC76A0FA4ED78160F311A7B3E334D15C
	// void Finished_CC76A0FA4ED78160F311A7B3E334D15C();                                                                     // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_Button.WBP_CoreArchiveTomeChallenges_Button_C.Finished_278D53E24C2E7617C9AC8485BA529C45
	// void Finished_278D53E24C2E7617C9AC8485BA529C45();                                                                     // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_Button.WBP_CoreArchiveTomeChallenges_Button_C.PlayUpdateAnimation
	// void PlayUpdateAnimation(ENodeStatusChange StatusChange);                                                             // [0x61c32d0] BlueprintCallable|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_Button.WBP_CoreArchiveTomeChallenges_Button_C.OnHovered
	// void OnHovered();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_Button.WBP_CoreArchiveTomeChallenges_Button_C.OnUnhovered
	// void OnUnhovered();                                                                                                   // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_Button.WBP_CoreArchiveTomeChallenges_Button_C.OnReleased
	// void OnReleased();                                                                                                    // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_Button.WBP_CoreArchiveTomeChallenges_Button_C.OnPressed
	// void OnPressed();                                                                                                     // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_Button.WBP_CoreArchiveTomeChallenges_Button_C.OnReset
	// void OnReset();                                                                                                       // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_Button.WBP_CoreArchiveTomeChallenges_Button_C.OnStatusChanged
	// void OnStatusChanged(ENodeStatusChange nodeStatusChange);                                                             // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_Button.WBP_CoreArchiveTomeChallenges_Button_C.OnInit
	// void OnInit();                                                                                                        // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_Button.WBP_CoreArchiveTomeChallenges_Button_C.UpdateStoryIndicatorOpacity
	// void UpdateStoryIndicatorOpacity(bool IsImageReward, bool isCompleted);                                               // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_Button.WBP_CoreArchiveTomeChallenges_Button_C.SetCustomizationRewardRarity
	// void SetCustomizationRewardRarity(EItemRarity Rarity);                                                                // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_Button.WBP_CoreArchiveTomeChallenges_Button_C.SetCurrencyRewardBackground
	// void SetCurrencyRewardBackground(ECurrencyType CurrencyType);                                                         // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /DBDUICore/Archives/Tome/Challenges/WBP_CoreArchiveTomeChallenges_Button.WBP_CoreArchiveTomeChallenges_Button_C.ExecuteUbergraph_WBP_CoreArchiveTomeChallenges_Button
	// void ExecuteUbergraph_WBP_CoreArchiveTomeChallenges_Button(int32_t EntryPoint);                                       // [0x61c32d0] Final|HasDefaults    
};

