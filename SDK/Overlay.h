
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/Overlay.Overlays
/// Size: 0x0000 (0x000030 - 0x000030)
class UOverlays : public UObject
{ 
public:
};

/// Struct /Script/Overlay.OverlayItem
/// Size: 0x0028 (0x000000 - 0x000028)
struct FOverlayItem
{ 
	FTimespan                                          starttime;                                                  // 0x0000   (0x0008)  
	FTimespan                                          EndTime;                                                    // 0x0008   (0x0008)  
	SDK_UNDEFINED(16,4923) /* FString */               __um(Text);                                                 // 0x0010   (0x0010)  
	FVector2D                                          position;                                                   // 0x0020   (0x0008)  
};

/// Class /Script/Overlay.BasicOverlays
/// Size: 0x0010 (0x000030 - 0x000040)
class UBasicOverlays : public UOverlays
{ 
public:
	TArray<FOverlayItem>                               Overlays;                                                   // 0x0030   (0x0010)  
};

/// Class /Script/Overlay.LocalizedOverlays
/// Size: 0x0058 (0x000030 - 0x000088)
class ULocalizedOverlays : public UOverlays
{ 
public:
	class UBasicOverlays*                              DefaultOverlays;                                            // 0x0030   (0x0008)  
	SDK_UNDEFINED(80,4924) /* TMap<FString, UBasicOverlays*> */ __um(LocaleToOverlaysMap);                         // 0x0038   (0x0050)  
};

