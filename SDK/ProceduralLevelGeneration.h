
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: DeadByDaylight
/// dependency: Engine

/// Class /Game/ProceduralLevelGeneration/LevelGenerator.LevelGenerator_C
/// Size: 0x0014 (0x001278 - 0x00128C)
class ALevelGenerator_C : public AProceduralLevelBuilder
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x1278   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x1280   (0x0008)  
	float                                              initialMistDensity;                                         // 0x1288   (0x0004)  


	/// Functions
	// Function /Game/ProceduralLevelGeneration/LevelGenerator.LevelGenerator_C.RemoveMist
	// void RemoveMist();                                                                                                    // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/ProceduralLevelGeneration/LevelGenerator.LevelGenerator_C.ApplyMist
	// void ApplyMist(float Modifier);                                                                                       // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Game/ProceduralLevelGeneration/LevelGenerator.LevelGenerator_C.ExecuteUbergraph_LevelGenerator
	// void ExecuteUbergraph_LevelGenerator(int32_t EntryPoint);                                                             // [0x61c32d0] Final                
};

