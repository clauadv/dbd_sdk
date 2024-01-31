
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/StandinActor.StandInMeshActor
/// Size: 0x0008 (0x000230 - 0x000238)
class AStandInMeshActor : public AActor
{ 
public:
	class UStaticMeshComponent*                        StaticMeshComponent;                                        // 0x0230   (0x0008)  
};

/// Struct /Script/StandinActor.StandinProxyEntry
/// Size: 0x0050 (0x000000 - 0x000050)
struct FStandinProxyEntry
{ 
	SDK_UNDEFINED(28,5421) /* TLazyObjectPtr<AStandInMeshActor*> */ __um(StandinActor);                            // 0x0000   (0x001C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	class UStaticMesh*                                 StaticMesh;                                                 // 0x0020   (0x0008)  
	class UMaterialInterface*                          Material;                                                   // 0x0028   (0x0008)  
	TArray<class UTexture2D*>                          Textures;                                                   // 0x0030   (0x0010)  
	FName                                              Key;                                                        // 0x0040   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/StandinActor.StandinProxyContainer
/// Size: 0x0010 (0x000030 - 0x000040)
class UStandinProxyContainer : public UObject
{ 
public:
	TArray<FStandinProxyEntry>                         Standins;                                                   // 0x0030   (0x0010)  
};

