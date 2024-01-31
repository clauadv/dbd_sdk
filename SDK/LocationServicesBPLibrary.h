
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/LocationServicesBPLibrary.ELocationAccuracy
/// Size: 0x07
enum class ELocationAccuracy : uint8_t
{
	ELocationAccuracy__LA_ThreeKilometers                                            = 0,
	ELocationAccuracy__LA_OneKilometer                                               = 1,
	ELocationAccuracy__LA_HundredMeters                                              = 2,
	ELocationAccuracy__LA_TenMeters                                                  = 3,
	ELocationAccuracy__LA_Best                                                       = 4,
	ELocationAccuracy__LA_Navigation                                                 = 5,
	ELocationAccuracy__LA_MAX                                                        = 6
};

/// Class /Script/LocationServicesBPLibrary.LocationServices
/// Size: 0x0000 (0x000030 - 0x000030)
class ULocationServices : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/LocationServicesBPLibrary.LocationServices.StopLocationServices
	// bool StopLocationServices();                                                                                          // [0x4cfaf90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LocationServicesBPLibrary.LocationServices.StartLocationServices
	// bool StartLocationServices();                                                                                         // [0x4cfaf60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LocationServicesBPLibrary.LocationServices.IsLocationAccuracyAvailable
	// bool IsLocationAccuracyAvailable(ELocationAccuracy Accuracy);                                                         // [0x4cfaee0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LocationServicesBPLibrary.LocationServices.InitLocationServices
	// bool InitLocationServices(ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter);                // [0x4cfadd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LocationServicesBPLibrary.LocationServices.GetLocationServicesImpl
	// class ULocationServicesImpl* GetLocationServicesImpl();                                                               // [0x4cfadb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LocationServicesBPLibrary.LocationServices.GetLastKnownLocation
	// FLocationServicesData GetLastKnownLocation();                                                                         // [0x4cfad70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LocationServicesBPLibrary.LocationServices.AreLocationServicesEnabled
	// bool AreLocationServicesEnabled();                                                                                    // [0x4cfad40] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LocationServicesBPLibrary.LocationServicesImpl
/// Size: 0x0010 (0x000030 - 0x000040)
class ULocationServicesImpl : public UObject
{ 
public:
	SDK_UNDEFINED(16,5267) /* FMulticastInlineDelegate */ __um(OnLocationChanged);                                 // 0x0030   (0x0010)  
};

/// Struct /Script/LocationServicesBPLibrary.LocationServicesData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FLocationServicesData
{ 
	float                                              Timestamp;                                                  // 0x0000   (0x0004)  
	float                                              Longitude;                                                  // 0x0004   (0x0004)  
	float                                              Latitude;                                                   // 0x0008   (0x0004)  
	float                                              HorizontalAccuracy;                                         // 0x000C   (0x0004)  
	float                                              VerticalAccuracy;                                           // 0x0010   (0x0004)  
	float                                              Altitude;                                                   // 0x0014   (0x0004)  
};

