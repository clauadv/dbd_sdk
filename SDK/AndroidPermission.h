
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AndroidPermission.AndroidPermissionCallbackProxy
/// Size: 0x0020 (0x000030 - 0x000050)
class UAndroidPermissionCallbackProxy : public UObject
{ 
public:
	SDK_UNDEFINED(16,3555) /* FMulticastInlineDelegate */ __um(OnPermissionsGrantedDynamicDelegate);               // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Class /Script/AndroidPermission.AndroidPermissionFunctionLibrary
/// Size: 0x0000 (0x000030 - 0x000030)
class UAndroidPermissionFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission
	// bool CheckPermission(FString permission);                                                                             // [0x4cf0300] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions
	// class UAndroidPermissionCallbackProxy* AcquirePermissions(TArray<FString>& Permissions);                              // [0x4cf0230] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

