
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
/// dependency: GameplayTagUtilities
/// dependency: NetworkUtilities

/// Struct /Script/Competence.ModifierReplicatedEventConditionData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FModifierReplicatedEventConditionData
{ 
	class UEventDrivenModifierCondition*               EventDrivenCondition;                                       // 0x0000   (0x0008)  
	bool                                               HasCondition;                                               // 0x0008   (0x0001)  
	bool                                               AuthorityDataSet;                                           // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Class /Script/Competence.BaseModifierContainer
/// Size: 0x0040 (0x0000B8 - 0x0000F8)
class UBaseModifierContainer : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x00B8   (0x0020)  MISSED
	FName                                              _id;                                                        // 0x00D8   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00E4   (0x0004)  MISSED
	FModifierReplicatedEventConditionData              _eventDrivenConditionData;                                  // 0x00E8   (0x0010)  


	/// Functions
	// Function /Script/Competence.BaseModifierContainer.OnRep_EventDrivenConditionData_Internal
	// void OnRep_EventDrivenConditionData_Internal(FModifierReplicatedEventConditionData& oldReplicatedCondition);          // [0x8563b30] Final|Native|Private|HasOutParms 
	// Function /Script/Competence.BaseModifierContainer.IsApplicable
	// bool IsApplicable();                                                                                                  // [0x5db7b60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Competence.BaseModifierContainer.CreateAndSetEventDrivenCondition
	// class UEventDrivenModifierCondition* CreateAndSetEventDrivenCondition(class UClass* conditionType);                   // [0x8563a90] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/Competence.BaseModifierContainer.Authority_OnInstantiateModifierConditions
	// void Authority_OnInstantiateModifierConditions();                                                                     // [0x61c32d0] BlueprintAuthorityOnly|Event|Protected|BlueprintEvent 
};

/// Class /Script/Competence.BaseModifierCondition
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UBaseModifierCondition : public UActorComponent
{ 
public:
	class UBaseModifierContainer*                      _owningModifier;                                            // 0x00B8   (0x0008)  
	class UModifierSubjectProvider*                    _subjectProvider;                                           // 0x00C0   (0x0008)  
	class UClass*                                      _subjectProviderClass;                                      // 0x00C8   (0x0008)  


	/// Functions
	// Function /Script/Competence.BaseModifierCondition.SetSubjectProviderClass
	// void SetSubjectProviderClass(class UClass* subjectProviderClass);                                                     // [0x8563610] Final|Native|Public|BlueprintCallable 
	// Function /Script/Competence.BaseModifierCondition.OnRep_SubjectProviderClass
	// void OnRep_SubjectProviderClass();                                                                                    // [0x85635f0] Final|Native|Private 
	// Function /Script/Competence.BaseModifierCondition.OnRep_OwningModifier
	// void OnRep_OwningModifier();                                                                                          // [0x85635d0] Final|Native|Private 
	// Function /Script/Competence.BaseModifierCondition.InitializeSubjectProviderClass
	// void InitializeSubjectProviderClass();                                                                                // [0x4e01240] Native|Event|Protected|BlueprintEvent 
	// Function /Script/Competence.BaseModifierCondition.GetOwningActor
	// class AActor* GetOwningActor();                                                                                       // [0x85635a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Competence.EventDrivenModifierCondition
/// Size: 0x0020 (0x0000D0 - 0x0000F0)
class UEventDrivenModifierCondition : public UBaseModifierCondition
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x00D0   (0x0020)  MISSED
};

/// Class /Script/Competence.RangeBasedCondition
/// Size: 0x0008 (0x0000F0 - 0x0000F8)
class URangeBasedCondition : public UEventDrivenModifierCondition
{ 
public:
	float                                              _range;                                                     // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00F4   (0x0004)  MISSED


	/// Functions
	// Function /Script/Competence.RangeBasedCondition.SetRange
	// void SetRange(float newRange);                                                                                        // [0x8566ae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Competence.RangeBasedCondition.OnRep_Range
	// void OnRep_Range();                                                                                                   // [0x8566ac0] Final|Native|Private 
};

/// Class /Script/Competence.ModifierSubjectProvider
/// Size: 0x0018 (0x000030 - 0x000048)
class UModifierSubjectProvider : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0030   (0x0018)  MISSED
};

/// Class /Script/Competence.SingleModifierCondition
/// Size: 0x0010 (0x0000F0 - 0x000100)
class USingleModifierCondition : public UEventDrivenModifierCondition
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	class UEventDrivenModifierCondition*               _condition;                                                 // 0x00F8   (0x0008)  


	/// Functions
	// Function /Script/Competence.SingleModifierCondition.OnRep_Condition
	// void OnRep_Condition();                                                                                               // [0x8566d90] Final|Native|Protected 
};

/// Class /Script/Competence.CompositeModifierCondition
/// Size: 0x0018 (0x0000F0 - 0x000108)
class UCompositeModifierCondition : public UEventDrivenModifierCondition
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00F0   (0x0008)  MISSED
	TArray<class UEventDrivenModifierCondition*>       _conditions;                                                // 0x00F8   (0x0010)  


	/// Functions
	// Function /Script/Competence.CompositeModifierCondition.OnRep_Conditions
	// void OnRep_Conditions();                                                                                              // [0x8563f80] Final|Native|Private 
};

/// Class /Script/Competence.AndModifierCondition
/// Size: 0x0000 (0x000108 - 0x000108)
class UAndModifierCondition : public UCompositeModifierCondition
{ 
public:
};

/// Class /Script/Competence.CompetenceDebugger
/// Size: 0x0020 (0x000030 - 0x000050)
class UCompetenceDebugger : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0030   (0x0020)  MISSED
};

/// Class /Script/Competence.ConditionFactory
/// Size: 0x0000 (0x000030 - 0x000030)
class UConditionFactory : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Competence.ConditionFactory.Or
	// class UOrModifierCondition* Or(TScriptInterface<Class> ConditionReceiver);                                            // [0x8564a70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Competence.ConditionFactory.Not
	// class UNotModifierCondition* Not(TScriptInterface<Class> ConditionReceiver);                                          // [0x85649d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Competence.ConditionFactory.Lingering
	// class ULingeringModifierCondition* Lingering(TScriptInterface<Class> ConditionReceiver, float timeToTrack);           // [0x85648e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Competence.ConditionFactory.IsTimerDone
	// class UIsTimerDoneCondition* IsTimerDone(TScriptInterface<Class> ConditionReceiver, class UTimerObject* Timer);       // [0x85647f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Competence.ConditionFactory.CreateRangeBasedConditionWithSubject
	// class URangeBasedCondition* CreateRangeBasedConditionWithSubject(TScriptInterface<Class> ConditionReceiver, class UClass* conditionType, float Range, class UClass* subjectProviderClass); // [0x8564680] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Competence.ConditionFactory.CreateRangeBasedCondition
	// class URangeBasedCondition* CreateRangeBasedCondition(TScriptInterface<Class> ConditionReceiver, class UClass* conditionType, float Range); // [0x8564540] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Competence.ConditionFactory.CreateAndReceiveConditionWithSubjectForBP
	// class UEventDrivenModifierCondition* CreateAndReceiveConditionWithSubjectForBP(TScriptInterface<Class> ConditionReceiver, class UClass* conditionType, class UClass* subjectProviderClass); // [0x8564410] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Competence.ConditionFactory.CreateAndReceiveConditionForBP
	// class UEventDrivenModifierCondition* CreateAndReceiveConditionForBP(TScriptInterface<Class> ConditionReceiver, class UClass* conditionType); // [0x8564320] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Competence.ConditionFactory.And
	// class UAndModifierCondition* And(TScriptInterface<Class> ConditionReceiver);                                          // [0x8564280] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Competence.HasObjectState
/// Size: 0x0038 (0x0000F0 - 0x000128)
class UHasObjectState : public UEventDrivenModifierCondition
{ 
public:
	FGameplayTag                                       _state;                                                     // 0x00F0   (0x000C)  
	unsigned char                                      UnknownData00_6[0x2C];                                      // 0x00FC   (0x002C)  MISSED


	/// Functions
	// Function /Script/Competence.HasObjectState.SetState
	// void SetState(FGameplayTag State);                                                                                    // [0x8565810] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Competence.HasObjectStateWithMaxDuration
/// Size: 0x0038 (0x000128 - 0x000160)
class UHasObjectStateWithMaxDuration : public UHasObjectState
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0128   (0x0030)  MISSED
	float                                              _maxDuration;                                               // 0x0158   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x015C   (0x0004)  MISSED


	/// Functions
	// Function /Script/Competence.HasObjectStateWithMaxDuration.SetMaxDuration
	// void SetMaxDuration(float Duration);                                                                                  // [0x57add90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Competence.CompetenceFlagProvider
/// Size: 0x0000 (0x000030 - 0x000030)
class UCompetenceFlagProvider : public UInterface
{ 
public:
};

/// Class /Script/Competence.ConditionReceiver
/// Size: 0x0000 (0x000030 - 0x000030)
class UConditionReceiver : public UInterface
{ 
public:
};

/// Class /Script/Competence.ModifierProvider
/// Size: 0x0000 (0x000030 - 0x000030)
class UModifierProvider : public UInterface
{ 
public:
};

/// Class /Script/Competence.IsTimerDoneCondition
/// Size: 0x0010 (0x0000F0 - 0x000100)
class UIsTimerDoneCondition : public UEventDrivenModifierCondition
{ 
public:
	class UTimerObject*                                _timer;                                                     // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00F8   (0x0008)  MISSED


	/// Functions
	// Function /Script/Competence.IsTimerDoneCondition.SetTimer
	// void SetTimer(class UTimerObject* Timer);                                                                             // [0x8565fa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Competence.IsTimerDoneCondition.OnRep_Timer
	// void OnRep_Timer();                                                                                                   // [0x8565f80] Final|Native|Private 
};

/// Class /Script/Competence.LingeringModifierCondition
/// Size: 0x0038 (0x000100 - 0x000138)
class ULingeringModifierCondition : public USingleModifierCondition
{ 
public:
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0100   (0x0030)  MISSED
	float                                              _timeConditionIsTracked;                                    // 0x0130   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0134   (0x0004)  MISSED


	/// Functions
	// Function /Script/Competence.LingeringModifierCondition.OnTimerEnd
	// void OnTimerEnd();                                                                                                    // [0x8566300] Final|Native|Private 
};

/// Class /Script/Competence.NotModifierCondition
/// Size: 0x0000 (0x000100 - 0x000100)
class UNotModifierCondition : public USingleModifierCondition
{ 
public:
};

/// Class /Script/Competence.OrModifierCondition
/// Size: 0x0000 (0x000108 - 0x000108)
class UOrModifierCondition : public UCompositeModifierCondition
{ 
public:
};

/// Class /Script/Competence.OwnerSubjectProvider
/// Size: 0x0000 (0x000048 - 0x000048)
class UOwnerSubjectProvider : public UModifierSubjectProvider
{ 
public:
};

/// Class /Script/Competence.TestEventDrivenModifierCondition
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UTestEventDrivenModifierCondition : public UEventDrivenModifierCondition
{ 
public:
};

/// Class /Script/Competence.TestObjectStateProviderComponent
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class UTestObjectStateProviderComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	class UGameplayTagContainerComponent*              GameplayTagContainerComponent;                              // 0x00C0   (0x0008)  
};

/// Struct /Script/Competence.GameplayFlagCache
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FGameplayFlagCache
{ 
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0000   (0x00A0)  MISSED
};

/// Struct /Script/Competence.GamePlayModifier
/// Size: 0x0010 (0x000000 - 0x000010)
struct FGamePlayModifier
{ 
	FGameplayTag                                       Type;                                                       // 0x0000   (0x000C)  
	float                                              ModifierValue;                                              // 0x000C   (0x0004)  
};

/// Struct /Script/Competence.GameplayModifierData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FGameplayModifierData
{ 
	TArray<class UClass*>                              Conditions;                                                 // 0x0000   (0x0010)  
	TArray<FGamePlayModifier>                          Modifiers;                                                  // 0x0010   (0x0010)  
	TArray<FGameplayTag>                               TaggedFlags;                                                // 0x0020   (0x0010)  
};

/// Struct /Script/Competence.GameplayModifierCache
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FGameplayModifierCache
{ 
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0000   (0x00A0)  MISSED
};

