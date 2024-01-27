
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: Engine

/// Enum /Script/FiniteStateMachine.EFiniteStateMachineStatus
/// Size: 0x04
enum class EFiniteStateMachineStatus : uint8_t
{
	EFiniteStateMachineStatus__Stopped                                               = 0,
	EFiniteStateMachineStatus__Running                                               = 1,
	EFiniteStateMachineStatus__Paused                                                = 2,
	EFiniteStateMachineStatus__EFiniteStateMachineStatus_MAX                         = 3
};

/// Class /Script/FiniteStateMachine.FiniteStateMachine
/// Size: 0x0030 (0x0000B8 - 0x0000E8)
class UFiniteStateMachine : public UActorComponent
{ 
public:
	class UClass*                                      _defaultStateClass;                                         // 0x00B8   (0x0008)  
	class UFSM_State*                                  _currentState;                                              // 0x00C0   (0x0008)  
	EFiniteStateMachineStatus                          _currentStateMachineStatus;                                 // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00C9   (0x0007)  MISSED
	class UObject*                                     _stateMachineOwner;                                         // 0x00D0   (0x0008)  
	TArray<class UFSM_State*>                          _stateInstances;                                            // 0x00D8   (0x0010)  
};

/// Class /Script/FiniteStateMachine.FSM_Condition
/// Size: 0x0000 (0x000038 - 0x000038)
class UFSM_Condition : public UDataAsset
{ 
public:
};

/// Class /Script/FiniteStateMachine.FSM_AndCondition
/// Size: 0x0010 (0x000038 - 0x000048)
class UFSM_AndCondition : public UFSM_Condition
{ 
public:
	TArray<class UFSM_Condition*>                      _conditions;                                                // 0x0038   (0x0010)  
};

/// Class /Script/FiniteStateMachine.FSM_HasStateRanForXSecondsCondition
/// Size: 0x0028 (0x000038 - 0x000060)
class UFSM_HasStateRanForXSecondsCondition : public UFSM_Condition
{ 
public:
	FDBDTunableRowHandle                               _minTimeInSecondsToSatisfyCondition;                        // 0x0038   (0x0028)  
};

/// Class /Script/FiniteStateMachine.FSM_NotCondition
/// Size: 0x0008 (0x000038 - 0x000040)
class UFSM_NotCondition : public UFSM_Condition
{ 
public:
	class UFSM_Condition*                              _condition;                                                 // 0x0038   (0x0008)  
};

/// Class /Script/FiniteStateMachine.FSM_OrCondition
/// Size: 0x0010 (0x000038 - 0x000048)
class UFSM_OrCondition : public UFSM_Condition
{ 
public:
	TArray<class UFSM_Condition*>                      _conditions;                                                // 0x0038   (0x0010)  
};

/// Class /Script/FiniteStateMachine.FSM_RefCondition
/// Size: 0x0008 (0x000038 - 0x000040)
class UFSM_RefCondition : public UFSM_Condition
{ 
public:
	class UFSM_Condition*                              _refcondition;                                              // 0x0038   (0x0008)  
};

/// Class /Script/FiniteStateMachine.FSM_State
/// Size: 0x0048 (0x000030 - 0x000078)
class UFSM_State : public UObject
{ 
public:
	FName                                              _stateName;                                                 // 0x0030   (0x000C)  
	bool                                               _shouldTick;                                                // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x003D   (0x0003)  MISSED
	class UClass*                                      _defaultChildStateClass;                                    // 0x0040   (0x0008)  
	TArray<class UFSM_Transition*>                     _transitions;                                               // 0x0048   (0x0010)  
	class UFiniteStateMachine*                         _stateMachine;                                              // 0x0058   (0x0008)  
	class UFSM_State*                                  _parentState;                                               // 0x0060   (0x0008)  
	class UFSM_State*                                  _currentChildState;                                         // 0x0068   (0x0008)  
	float                                              _startTimestamp;                                            // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/FiniteStateMachine.FSM_Transition
/// Size: 0x0028 (0x000038 - 0x000060)
class UFSM_Transition : public UDataAsset
{ 
public:
	FName                                              _transitionName;                                            // 0x0038   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	class UClass*                                      _transitionStateClass;                                      // 0x0048   (0x0008)  
	TArray<class UFSM_Condition*>                      _conditions;                                                // 0x0050   (0x0010)  
};

