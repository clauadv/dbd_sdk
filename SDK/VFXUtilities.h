
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/VFXUtilities.BaseVFX
/// Size: 0x0008 (0x000230 - 0x000238)
class ABaseVFX : public AActor
{ 
public:
	bool                                               _shouldLoadOnServer;                                        // 0x0230   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0231   (0x0007)  MISSED
};

/// Class /Script/VFXUtilities.VFXUtilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UVFXUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/VFXUtilities.VFXUtilities.SetParticleSystemsActive
	// void SetParticleSystemsActive(TSet<UFXSystemComponent*> particleSystems, bool Active, bool Reset);                    // [0x8622b10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/VFXUtilities.VFXUtilities.SetParticleSystemActive
	// void SetParticleSystemActive(class UFXSystemComponent* ParticleSystem, bool Active, bool Reset);                      // [0x8622a00] Final|Native|Static|Public|BlueprintCallable 
};

