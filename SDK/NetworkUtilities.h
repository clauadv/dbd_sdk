
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/NetworkUtilities.ETimerState
/// Size: 0x04
enum class ETimerState : uint8_t
{
	ETimerState__Cleared                                                             = 0,
	ETimerState__Started                                                             = 1,
	ETimerState__Paused                                                              = 2,
	ETimerState__ETimerState_MAX                                                     = 3
};

/// Class /Script/NetworkUtilities.NetSynchedClock
/// Size: 0x0020 (0x0000B8 - 0x0000D8)
class UNetSynchedClock : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x00B8   (0x0008)  MISSED
	float                                              _serverTimeUpdateDelay;                                     // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x14];                                      // 0x00C4   (0x0014)  MISSED


	/// Functions
	// Function /Script/NetworkUtilities.NetSynchedClock.Server_RequestServerTime
	// void Server_RequestServerTime();                                                                                      // [0x8558130] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/NetworkUtilities.NetSynchedClock.Client_ReportServerTime
	// void Client_ReportServerTime(float serverTime);                                                                       // [0x57d1210] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/NetworkUtilities.NetUtils
/// Size: 0x0000 (0x000030 - 0x000030)
class UNetUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/NetworkUtilities.NetUtils.IsDedicatedServerInstance
	// bool IsDedicatedServerInstance(class UObject* WorldContextObject);                                                    // [0x85582e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/NetworkUtilities.NetworkFenceActor
/// Size: 0x0078 (0x000230 - 0x0002A8)
class ANetworkFenceActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x78];                                      // 0x0230   (0x0078)  MISSED


	/// Functions
	// Function /Script/NetworkUtilities.NetworkFenceActor.Server_ClientPassedFence
	// void Server_ClientPassedFence(TArray<FGuid> Fences);                                                                  // [0x8558760] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/NetworkUtilities.NetworkFenceActor.Client_AllPassedFence
	// void Client_AllPassedFence(TArray<FGuid> Fences);                                                                     // [0x85586a0] Final|Net|NetReliableNative|Event|Private|NetClient|NetValidate 
};

/// Class /Script/NetworkUtilities.ServerCorrectionDisablerComponent
/// Size: 0x0050 (0x0000B8 - 0x000108)
class UServerCorrectionDisablerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x00B8   (0x0050)  MISSED


	/// Functions
	// Function /Script/NetworkUtilities.ServerCorrectionDisablerComponent.SetServerCorrectionEnabled
	// void SetServerCorrectionEnabled(bool Enabled, FGameplayTag Channel);                                                  // [0x855bdb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/NetworkUtilities.ServerCorrectionDisablerComponent.Multicast_SetServerCorrectionEnabled
	// void Multicast_SetServerCorrectionEnabled(bool Enabled, FGameplayTag Channel);                                        // [0x855bcb0] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/NetworkUtilities.ServerCorrectionDisablerComponent.GetServerCorrectionEnabled
	// bool GetServerCorrectionEnabled();                                                                                    // [0x855bc80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/NetworkUtilities.ServerTimeProviderComponent
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UServerTimeProviderComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Struct /Script/NetworkUtilities.Float_NetQuantize8
/// Size: 0x0008 (0x000000 - 0x000008)
struct FFloat_NetQuantize8
{ 
	float                                              _value;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
};

/// Struct /Script/NetworkUtilities.ReplicationTimerData
/// Size: 0x0014 (0x000000 - 0x000014)
struct FReplicationTimerData
{ 
	float                                              Timestamp;                                                  // 0x0000   (0x0004)  
	float                                              Duration;                                                   // 0x0004   (0x0004)  
	FFloat_NetQuantize8                                RemainingTimePercent;                                       // 0x0008   (0x0008)  
	ETimerState                                        State;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Class /Script/NetworkUtilities.TimerObject
/// Size: 0x0080 (0x0000B8 - 0x000138)
class UTimerObject : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x60];                                      // 0x00B8   (0x0060)  MISSED
	FReplicationTimerData                              _replicationData;                                           // 0x0118   (0x0014)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x012C   (0x000C)  MISSED


	/// Functions
	// Function /Script/NetworkUtilities.TimerObject.OnRep_TimerDataUpdated
	// void OnRep_TimerDataUpdated(FReplicationTimerData OldData);                                                           // [0x855cd00] Final|Native|Private 
	// Function /Script/NetworkUtilities.TimerObject.IsTimerActive
	// bool IsTimerActive();                                                                                                 // [0x855ccd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NetworkUtilities.TimerObject.IsPaused
	// bool IsPaused();                                                                                                      // [0x855cca0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NetworkUtilities.TimerObject.IsDone
	// bool IsDone();                                                                                                        // [0x855cc70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NetworkUtilities.TimerObject.GetRemainingTimePercent
	// float GetRemainingTimePercent();                                                                                      // [0x855cc40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NetworkUtilities.TimerObject.GetRemainingTime
	// float GetRemainingTime();                                                                                             // [0x855cc10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NetworkUtilities.TimerObject.GetElapsedTimePercent
	// float GetElapsedTimePercent();                                                                                        // [0x855cbe0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NetworkUtilities.TimerObject.GetElapsedTime
	// float GetElapsedTime();                                                                                               // [0x855cbb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NetworkUtilities.TimerObject.GetDuration
	// float GetDuration();                                                                                                  // [0x855cb80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NetworkUtilities.TimerObject.CreateTimer
	// class UTimerObject* CreateTimer(class AActor* Owner);                                                                 // [0x855caf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/NetworkUtilities.TimerObject.Authority_Unpause
	// void Authority_Unpause();                                                                                             // [0x855cad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/NetworkUtilities.TimerObject.Authority_Start
	// void Authority_Start(float Duration);                                                                                 // [0x855ca50] Final|Native|Public|BlueprintCallable 
	// Function /Script/NetworkUtilities.TimerObject.Authority_SetPaused
	// void Authority_SetPaused(bool paused);                                                                                // [0x855c9c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/NetworkUtilities.TimerObject.Authority_Pause
	// void Authority_Pause();                                                                                               // [0x855c9a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/NetworkUtilities.TimerObject.Authority_Clear
	// void Authority_Clear();                                                                                               // [0x855c980] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/NetworkUtilities.YawAndPitchRotator_NetQuantize16
/// Size: 0x000C (0x000000 - 0x00000C)
struct FYawAndPitchRotator_NetQuantize16
{ 
	FRotator                                           _value;                                                     // 0x0000   (0x000C)  
};

/// Struct /Script/NetworkUtilities.YawAndPitchRotator_NetQuantize32
/// Size: 0x000C (0x000000 - 0x00000C)
struct FYawAndPitchRotator_NetQuantize32
{ 
	FRotator                                           _value;                                                     // 0x0000   (0x000C)  
};

/// Struct /Script/NetworkUtilities.SpeedBasedNetSyncedValue
/// Size: 0x0038 (0x000000 - 0x000038)
struct FSpeedBasedNetSyncedValue
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
	float                                              _replicatedValue;                                           // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	float                                              _replicatedSpeed;                                           // 0x0020   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	float                                              _replicatedLastUpdateTimestamp;                             // 0x0028   (0x0004)  
	unsigned char                                      UnknownData03_6[0xC];                                       // 0x002C   (0x000C)  MISSED
};

/// Struct /Script/NetworkUtilities.AssetNetIdRow
/// Size: 0x0008 (0x000008 - 0x000010)
struct FAssetNetIdRow : FTableRowBase
{ 
	int32_t                                            NetId;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/NetworkUtilities.ObjectFastArrayEntry
/// Size: 0x000C (0x00000C - 0x000018)
struct FObjectFastArrayEntry : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_2[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UObject*                                     Object;                                                     // 0x0010   (0x0008)  
};

/// Struct /Script/NetworkUtilities.ObjectFastArray
/// Size: 0x0040 (0x000108 - 0x000148)
struct FObjectFastArray : FFastArraySerializer
{ 
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0108   (0x0030)  MISSED
	TArray<FObjectFastArrayEntry>                      Objects;                                                    // 0x0138   (0x0010)  
};

