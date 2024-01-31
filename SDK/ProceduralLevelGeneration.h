
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
/// Size: 0x0014 (0x001290 - 0x0012A4)
class ALevelGenerator_C : public AProceduralLevelBuilder
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x1290   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x1298   (0x0008)  
	float                                              initialMistDensity;                                         // 0x12A0   (0x0004)  


	/// Functions
	// Function /Game/ProceduralLevelGeneration/LevelGenerator.LevelGenerator_C.RemoveMist
	// void RemoveMist();                                                                                                    // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/ProceduralLevelGeneration/LevelGenerator.LevelGenerator_C.ApplyMist
	// void ApplyMist(float Modifier);                                                                                       // [0x61d2f50] Event|Public|BlueprintEvent 
	// Function /Game/ProceduralLevelGeneration/LevelGenerator.LevelGenerator_C.ExecuteUbergraph_LevelGenerator
	// void ExecuteUbergraph_LevelGenerator(int32_t EntryPoint);                                                             // [0x61d2f50] Final                
};

