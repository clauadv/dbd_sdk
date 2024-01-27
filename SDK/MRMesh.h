
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/MRMesh.EMeshTrackerVertexColorMode
/// Size: 0x04
enum class EMeshTrackerVertexColorMode : uint8_t
{
	EMeshTrackerVertexColorMode__None                                                = 0,
	EMeshTrackerVertexColorMode__Confidence                                          = 1,
	EMeshTrackerVertexColorMode__Block                                               = 2,
	EMeshTrackerVertexColorMode__EMeshTrackerVertexColorMode_MAX                     = 3
};

/// Class /Script/MRMesh.MeshReconstructorBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UMeshReconstructorBase : public UObject
{ 
public:


	/// Functions
	// Function /Script/MRMesh.MeshReconstructorBase.StopReconstruction
	// void StopReconstruction();                                                                                            // [0x6ad2ad0] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.StartReconstruction
	// void StartReconstruction();                                                                                           // [0x6ad2ab0] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.PauseReconstruction
	// void PauseReconstruction();                                                                                           // [0x49cd2b0] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionStarted
	// bool IsReconstructionStarted();                                                                                       // [0x6ad2840] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionPaused
	// bool IsReconstructionPaused();                                                                                        // [0x6ad2810] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MeshReconstructorBase.DisconnectMRMesh
	// void DisconnectMRMesh();                                                                                              // [0x6ad2690] Native|Public        
	// Function /Script/MRMesh.MeshReconstructorBase.ConnectMRMesh
	// void ConnectMRMesh(class UMRMeshComponent* Mesh);                                                                     // [0x6ad2570] Native|Public        
};

/// Class /Script/MRMesh.MockDataMeshTrackerComponent
/// Size: 0x0070 (0x000220 - 0x000290)
class UMockDataMeshTrackerComponent : public USceneComponent
{ 
public:
	SDK_UNDEFINED(16,3550) /* FMulticastInlineDelegate */ __um(OnMeshTrackerUpdated);                              // 0x0218   (0x0010)  
	bool                                               ScanWorld;                                                  // 0x0228   (0x0001)  
	bool                                               RequestNormals;                                             // 0x0229   (0x0001)  
	bool                                               RequestVertexConfidence;                                    // 0x022A   (0x0001)  
	EMeshTrackerVertexColorMode                        VertexColorMode;                                            // 0x022B   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x022C   (0x0004)  MISSED
	TArray<FColor>                                     BlockVertexColors;                                          // 0x0230   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceZero;                              // 0x0240   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceOne;                               // 0x0250   (0x0010)  
	float                                              UpdateInterval;                                             // 0x0260   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0264   (0x0004)  MISSED
	class UMRMeshComponent*                            MRMesh;                                                     // 0x0268   (0x0008)  
	unsigned char                                      UnknownData02_6[0x20];                                      // 0x0270   (0x0020)  MISSED


	/// Functions
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
	// void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t index, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<float>& Confidence); // [0x61c32d0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
	// void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                           // [0x6ad26b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
	// void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                              // [0x6ad2600] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MRMesh.MRMeshComponent
/// Size: 0x00C0 (0x000480 - 0x000540)
class UMRMeshComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0480   (0x0010)  MISSED
	class UMaterialInterface*                          Material;                                                   // 0x0490   (0x0008)  
	class UMaterialInterface*                          WireframeMaterial;                                          // 0x0498   (0x0008)  
	bool                                               bCreateMeshProxySections;                                   // 0x04A0   (0x0001)  
	bool                                               bUpdateNavMeshOnMeshUpdate;                                 // 0x04A1   (0x0001)  
	bool                                               bNeverCreateCollisionMesh;                                  // 0x04A2   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x04A3   (0x0005)  MISSED
	class UBodySetup*                                  CachedBodySetup;                                            // 0x04A8   (0x0008)  
	TArray<class UBodySetup*>                          BodySetups;                                                 // 0x04B0   (0x0010)  
	unsigned char                                      UnknownData02_6[0x80];                                      // 0x04C0   (0x0080)  MISSED


	/// Functions
	// Function /Script/MRMesh.MRMeshComponent.SetWireframeMaterial
	// void SetWireframeMaterial(class UMaterialInterface* InMaterial);                                                      // [0x6ad2a20] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetWireframeColor
	// void SetWireframeColor(FLinearColor& InColor);                                                                        // [0x6ad2990] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetUseWireframe
	// void SetUseWireframe(bool bUseWireframe);                                                                             // [0x6ad2900] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetEnableMeshOcclusion
	// void SetEnableMeshOcclusion(bool bEnable);                                                                            // [0x6ad2870] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.IsConnected
	// bool IsConnected();                                                                                                   // [0x6ad27d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetWireframeColor
	// FLinearColor GetWireframeColor();                                                                                     // [0x6ad27a0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetUseWireframe
	// bool GetUseWireframe();                                                                                               // [0x6ad2780] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetEnableMeshOcclusion
	// bool GetEnableMeshOcclusion();                                                                                        // [0x6ad2760] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.ForceNavMeshUpdate
	// void ForceNavMeshUpdate();                                                                                            // [0x6ad2740] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.Clear
	// void Clear();                                                                                                         // [0x6ad2540] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/MRMesh.MRMeshConfiguration
/// Size: 0x0001 (0x000000 - 0x000001)
struct FMRMeshConfiguration
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

