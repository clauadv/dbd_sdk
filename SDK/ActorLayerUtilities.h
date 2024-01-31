
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/ActorLayerUtilities.LayersBlueprintLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class ULayersBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer
	// void RemoveActorFromLayer(class AActor* InActor, FActorLayer& Layer);                                                 // [0x4be7cf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ActorLayerUtilities.LayersBlueprintLibrary.GetActors
	// TArray<AActor*> GetActors(class UObject* WorldContextObject, FActorLayer& ActorLayer);                                // [0x4be7bd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer
	// void AddActorToLayer(class AActor* InActor, FActorLayer& Layer);                                                      // [0x4be7b00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/ActorLayerUtilities.ActorLayer
/// Size: 0x000C (0x000000 - 0x00000C)
struct FActorLayer
{ 
	FName                                              Name;                                                       // 0x0000   (0x000C)  
};

