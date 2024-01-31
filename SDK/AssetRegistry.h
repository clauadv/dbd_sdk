
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/AssetRegistry.AssetRegistryImpl
/// Size: 0x0828 (0x000030 - 0x000858)
class UAssetRegistryImpl : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x828];                                     // 0x0030   (0x0828)  MISSED
};

/// Class /Script/AssetRegistry.AssetRegistryHelpers
/// Size: 0x0000 (0x000030 - 0x000030)
class UAssetRegistryHelpers : public UObject
{ 
public:


	/// Functions
	// Function /Script/AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath
	// FSoftObjectPath ToSoftObjectPath(FAssetData& InAssetData);                                                            // [0x7795850] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues
	// FARFilter SetFilterTagsAndValues(FARFilter& InFilter, TArray<FTagAndValue>& InTagsAndValues);                         // [0x7795570] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.IsValid
	// bool IsValid(FAssetData& InAssetData);                                                                                // [0x7794a00] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.IsUAsset
	// bool IsUAsset(FAssetData& InAssetData);                                                                               // [0x77948d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.IsRedirector
	// bool IsRedirector(FAssetData& InAssetData);                                                                           // [0x77947a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.IsAssetLoaded
	// bool IsAssetLoaded(FAssetData& InAssetData);                                                                          // [0x7794640] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetTagValue
	// bool GetTagValue(FAssetData& InAssetData, FName& InTagName, FString& OutTagValue);                                    // [0x7794350] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetFullName
	// FString GetFullName(FAssetData& InAssetData);                                                                         // [0x7794060] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetExportTextName
	// FString GetExportTextName(FAssetData& InAssetData);                                                                   // [0x7793ef0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetClass
	// class UClass* GetClass(FAssetData& InAssetData);                                                                      // [0x7793dc0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetAssetRegistry
	// TScriptInterface<Class> GetAssetRegistry();                                                                           // [0x77934c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetAsset
	// class UObject* GetAsset(FAssetData& InAssetData);                                                                     // [0x7793210] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.CreateAssetData
	// FAssetData CreateAssetData(class UObject* InAsset, bool bAllowBlueprintClass);                                        // [0x7792e70] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AssetRegistry.AssetRegistry
/// Size: 0x0000 (0x000030 - 0x000030)
class UAssetRegistry : public UInterface
{ 
public:


	/// Functions
	// Function /Script/AssetRegistry.AssetRegistry.WaitForCompletion
	// void WaitForCompletion();                                                                                             // [0x7795ca0] Native|Public|BlueprintCallable 
	// Function /Script/AssetRegistry.AssetRegistry.UseFilterToExcludeAssets
	// void UseFilterToExcludeAssets(TArray<FAssetData>& AssetDataList, FARFilter& Filter);                                  // [0x77959a0] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.SearchAllAssets
	// void SearchAllAssets(bool bSynchronousSearch);                                                                        // [0x77954e0] Native|Public|BlueprintCallable 
	// Function /Script/AssetRegistry.AssetRegistry.ScanPathsSynchronous
	// void ScanPathsSynchronous(TArray<FString>& InPaths, bool bForceRescan);                                               // [0x77953b0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AssetRegistry.AssetRegistry.ScanModifiedAssetFiles
	// void ScanModifiedAssetFiles(TArray<FString>& InFilePaths);                                                            // [0x77952e0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AssetRegistry.AssetRegistry.ScanFilesSynchronous
	// void ScanFilesSynchronous(TArray<FString>& InFilePaths, bool bForceRescan);                                           // [0x77951b0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AssetRegistry.AssetRegistry.RunAssetsThroughFilter
	// void RunAssetsThroughFilter(TArray<FAssetData>& AssetDataList, FARFilter& Filter);                                    // [0x7794eb0] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.PrioritizeSearchPath
	// void PrioritizeSearchPath(FString PathToPrioritize);                                                                  // [0x7794e10] Native|Public|BlueprintCallable 
	// Function /Script/AssetRegistry.AssetRegistry.K2_GetReferencers
	// bool K2_GetReferencers(FName PackageName, FAssetRegistryDependencyOptions& ReferenceOptions, TArray<FName>& OutReferencers); // [0x7794ca0] Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.K2_GetDependencies
	// bool K2_GetDependencies(FName PackageName, FAssetRegistryDependencyOptions& DependencyOptions, TArray<FName>& OutDependencies); // [0x7794b30] Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.IsLoadingAssets
	// bool IsLoadingAssets();                                                                                               // [0x7794770] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AssetRegistry.AssetRegistry.HasAssets
	// bool HasAssets(FName PackagePath, bool bRecursive);                                                                   // [0x7794540] Native|Public|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetSubPaths
	// void GetSubPaths(FString InBasePath, TArray<FString>& OutPathList, bool bInRecurse);                                  // [0x77941d0] Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAssetsByPath
	// bool GetAssetsByPath(FName PackagePath, TArray<FAssetData>& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets); // [0x7793bb0] Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAssetsByPackageName
	// bool GetAssetsByPackageName(FName PackageName, TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets);      // [0x77939e0] Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAssetsByClass
	// bool GetAssetsByClass(FName ClassName, TArray<FAssetData>& OutAssetData, bool bSearchSubClasses);                     // [0x7793810] Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAssets
	// bool GetAssets(FARFilter& Filter, TArray<FAssetData>& OutAssetData);                                                  // [0x7793500] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAssetByObjectPath
	// FAssetData GetAssetByObjectPath(FName ObjectPath, bool bIncludeOnlyOnDiskAssets);                                     // [0x7793340] Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAllCachedPaths
	// void GetAllCachedPaths(TArray<FString>& OutPathList);                                                                 // [0x7793140] Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAllAssets
	// bool GetAllAssets(TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets);                                   // [0x7792fd0] Native|Public|HasOutParms|BlueprintCallable|Const 
};

/// Struct /Script/AssetRegistry.TagAndValue
/// Size: 0x0020 (0x000000 - 0x000020)
struct FTagAndValue
{ 
	FName                                              Tag;                                                        // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(16,3635) /* FString */               __um(value);                                                // 0x0010   (0x0010)  
};

/// Struct /Script/AssetRegistry.AssetRegistryDependencyOptions
/// Size: 0x0005 (0x000000 - 0x000005)
struct FAssetRegistryDependencyOptions
{ 
	bool                                               bIncludeSoftPackageReferences;                              // 0x0000   (0x0001)  
	bool                                               bIncludeHardPackageReferences;                              // 0x0001   (0x0001)  
	bool                                               bIncludeSearchableNames;                                    // 0x0002   (0x0001)  
	bool                                               bIncludeSoftManagementReferences;                           // 0x0003   (0x0001)  
	bool                                               bIncludeHardManagementReferences;                           // 0x0004   (0x0001)  
};

