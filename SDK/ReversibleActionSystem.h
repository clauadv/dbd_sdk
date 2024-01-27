
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/ReversibleActionSystem.BaseReversibleInstantActionHandler
/// Size: 0x0000 (0x000030 - 0x000030)
class UBaseReversibleInstantActionHandler : public UObject
{ 
public:
};

/// Class /Script/ReversibleActionSystem.ReversibleActionSystemComponent
/// Size: 0x00F0 (0x0000B8 - 0x0001A8)
class UReversibleActionSystemComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(80,1695) /* TMap<FActionPredictionKey, FPendingInstantActionList> */ __um(_pendingInstantActionHandlers); // 0x00B8   (0x0050)  
	SDK_UNDEFINED(80,1696) /* TMap<FActionPredictionKey, FInstantActionList> */ __um(_predictedInstantActionHandlers); // 0x0108   (0x0050)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0158   (0x0050)  MISSED
};

/// Struct /Script/ReversibleActionSystem.ActionPredictionKey
/// Size: 0x0004 (0x000000 - 0x000004)
struct FActionPredictionKey
{ 
	int32_t                                            _keyValue;                                                  // 0x0000   (0x0004)  
};

/// Struct /Script/ReversibleActionSystem.InstantActionList
/// Size: 0x0010 (0x000000 - 0x000010)
struct FInstantActionList
{ 
	TArray<class UBaseReversibleInstantActionHandler*> Actions;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/ReversibleActionSystem.PendingInstantAction
/// Size: 0x0020 (0x000000 - 0x000020)
struct FPendingInstantAction
{ 
	class UBaseReversibleInstantActionHandler*         Handler;                                                    // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x0008   (0x0010)  MISSED
	FTimerHandle                                       TimerHandle;                                                // 0x0018   (0x0008)  
};

/// Struct /Script/ReversibleActionSystem.PendingInstantActionList
/// Size: 0x0010 (0x000000 - 0x000010)
struct FPendingInstantActionList
{ 
	TArray<FPendingInstantAction>                      Actions;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/ReversibleActionSystem.ExecuteInstantActionParams
/// Size: 0x0008 (0x000000 - 0x000008)
struct FExecuteInstantActionParams
{ 
	FActionPredictionKey                               PredictionKey;                                              // 0x0000   (0x0004)  
	float                                              PredictionDelay;                                            // 0x0004   (0x0004)  
};

