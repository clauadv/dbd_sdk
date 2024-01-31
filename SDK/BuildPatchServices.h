
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Struct /Script/BuildPatchServices.SHAHashData
/// Size: 0x0014 (0x000000 - 0x000014)
struct FSHAHashData
{ 
	char                                               Hash;                                                       // 0x0000   (0x0014)  
};

/// Struct /Script/BuildPatchServices.ChunkPartData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FChunkPartData
{ 
	FGuid                                              Guid;                                                       // 0x0000   (0x0010)  
	uint32_t                                           Offset;                                                     // 0x0010   (0x0004)  
	uint32_t                                           Size;                                                       // 0x0014   (0x0004)  
};

/// Struct /Script/BuildPatchServices.FileManifestData
/// Size: 0x0068 (0x000000 - 0x000068)
struct FFileManifestData
{ 
	SDK_UNDEFINED(16,3713) /* FString */               __um(Filename);                                             // 0x0000   (0x0010)  
	FSHAHashData                                       FileHash;                                                   // 0x0010   (0x0014)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FChunkPartData>                             FileChunkParts;                                             // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,3714) /* TArray<FString> */       __um(InstallTags);                                          // 0x0038   (0x0010)  
	bool                                               bIsUnixExecutable;                                          // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	SDK_UNDEFINED(16,3715) /* FString */               __um(SymlinkTarget);                                        // 0x0050   (0x0010)  
	bool                                               bIsReadOnly;                                                // 0x0060   (0x0001)  
	bool                                               bIsCompressed;                                              // 0x0061   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x0062   (0x0006)  MISSED
};

/// Struct /Script/BuildPatchServices.ChunkInfoData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FChunkInfoData
{ 
	FGuid                                              Guid;                                                       // 0x0000   (0x0010)  
	uint64_t                                           Hash;                                                       // 0x0010   (0x0008)  
	FSHAHashData                                       ShaHash;                                                    // 0x0018   (0x0014)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	int64_t                                            FileSize;                                                   // 0x0030   (0x0008)  
	char                                               GroupNumber;                                                // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/BuildPatchServices.CustomFieldData
/// Size: 0x0020 (0x000000 - 0x000020)
struct FCustomFieldData
{ 
	SDK_UNDEFINED(16,3716) /* FString */               __um(Key);                                                  // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,3717) /* FString */               __um(value);                                                // 0x0010   (0x0010)  
};

/// Class /Script/BuildPatchServices.BuildPatchManifest
/// Size: 0x00F8 (0x000030 - 0x000128)
class UBuildPatchManifest : public UObject
{ 
public:
	char                                               ManifestFileVersion;                                        // 0x0030   (0x0001)  
	bool                                               bIsFileData;                                                // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0032   (0x0002)  MISSED
	uint32_t                                           AppID;                                                      // 0x0034   (0x0004)  
	SDK_UNDEFINED(16,3718) /* FString */               __um(AppName);                                              // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,3719) /* FString */               __um(BuildVersion);                                         // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,3720) /* FString */               __um(LaunchExe);                                            // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,3721) /* FString */               __um(LaunchCommand);                                        // 0x0068   (0x0010)  
	SDK_UNDEFINED(80,3722) /* TSet<FString> */         __um(PrereqIds);                                            // 0x0078   (0x0050)  
	SDK_UNDEFINED(16,3723) /* FString */               __um(PrereqName);                                           // 0x00C8   (0x0010)  
	SDK_UNDEFINED(16,3724) /* FString */               __um(PrereqPath);                                           // 0x00D8   (0x0010)  
	SDK_UNDEFINED(16,3725) /* FString */               __um(PrereqArgs);                                           // 0x00E8   (0x0010)  
	TArray<FFileManifestData>                          FileManifestList;                                           // 0x00F8   (0x0010)  
	TArray<FChunkInfoData>                             ChunkList;                                                  // 0x0108   (0x0010)  
	TArray<FCustomFieldData>                           CustomFields;                                               // 0x0118   (0x0010)  
};

