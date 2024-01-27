
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/SimpleStateMachine.SimpleStateMachineBaseState
/// Size: 0x0018 (0x000030 - 0x000048)
class USimpleStateMachineBaseState : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0030   (0x0010)  MISSED
	class USimpleStateMachine*                         _stateMachine;                                              // 0x0040   (0x0008)  
};

/// Class /Script/SimpleStateMachine.SimpleStateMachineBaseTransition
/// Size: 0x0020 (0x000030 - 0x000050)
class USimpleStateMachineBaseTransition : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0030   (0x0018)  MISSED
	class USimpleStateMachine*                         _stateMachine;                                              // 0x0048   (0x0008)  
};

/// Class /Script/SimpleStateMachine.SimpleStateMachine
/// Size: 0x0320 (0x0000B8 - 0x0003D8)
class USimpleStateMachine : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x00B8   (0x0018)  MISSED
	class UClass*                                      _defaultStateClass;                                         // 0x00D0   (0x0008)  
	SDK_UNDEFINED(80,4992) /* TSet<UClass*> */         __um(_stateClasses);                                        // 0x00D8   (0x0050)  
	SDK_UNDEFINED(80,4993) /* TSet<UClass*> */         __um(_transitionsClasses);                                  // 0x0128   (0x0050)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0178   (0x0008)  MISSED
	class USimpleStateMachineBaseState*                _defaultState;                                              // 0x0180   (0x0008)  
	class USimpleStateMachineBaseState*                _currentState;                                              // 0x0188   (0x0008)  
	unsigned char                                      UnknownData02_5[0x190];                                     // 0x0190   (0x0190)  MISSED
	SDK_UNDEFINED(80,4994) /* TMap<FName, USimpleStateMachineBaseState*> */ __um(_states);                         // 0x0320   (0x0050)  
	unsigned char                                      UnknownData03_5[0x60];                                      // 0x0370   (0x0060)  MISSED
	bool                                               _debugPrintState;                                           // 0x03D0   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x03D1   (0x0007)  MISSED
};

/// Struct /Script/SimpleStateMachine.SimpleStateMachineTrigger
/// Size: 0x0001 (0x000000 - 0x000001)
struct FSimpleStateMachineTrigger
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

