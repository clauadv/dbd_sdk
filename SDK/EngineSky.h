
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Engine/EngineSky/BP_Sky_Sphere.BP_Sky_Sphere_C
/// Size: 0x00A0 (0x000230 - 0x0002D0)
class ABP_Sky_Sphere_C : public AActor
{ 
public:
	class UStaticMeshComponent*                        SkySphereMesh;                                              // 0x0230   (0x0008)  
	class USceneComponent*                             Base;                                                       // 0x0238   (0x0008)  
	class UMaterialInstanceDynamic*                    Sky_material;                                               // 0x0240   (0x0008)  
	bool                                               Refresh_material;                                           // 0x0248   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0249   (0x0007)  MISSED
	class ADirectionalLight*                           Directional_light_actor;                                    // 0x0250   (0x0008)  
	bool                                               Colors_determined_by_sun_position;                          // 0x0258   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0259   (0x0003)  MISSED
	float                                              Sun_height;                                                 // 0x025C   (0x0004)  
	float                                              Sun_brightness;                                             // 0x0260   (0x0004)  
	float                                              Horizon_Falloff;                                            // 0x0264   (0x0004)  
	FLinearColor                                       Zenith_Color;                                               // 0x0268   (0x0010)  
	FLinearColor                                       Horizon_color;                                              // 0x0278   (0x0010)  
	FLinearColor                                       Cloud_color;                                                // 0x0288   (0x0010)  
	FLinearColor                                       Overall_color;                                              // 0x0298   (0x0010)  
	float                                              Cloud_speed;                                                // 0x02A8   (0x0004)  
	float                                              Cloud_opacity;                                              // 0x02AC   (0x0004)  
	float                                              Stars_brightness;                                           // 0x02B0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x02B4   (0x0004)  MISSED
	class UCurveLinearColor*                           Horizon_color_curve;                                        // 0x02B8   (0x0008)  
	class UCurveLinearColor*                           Zenith_color_curve;                                         // 0x02C0   (0x0008)  
	class UCurveLinearColor*                           Cloud_color_curve;                                          // 0x02C8   (0x0008)  


	/// Functions
	// Function /Engine/EngineSky/BP_Sky_Sphere.BP_Sky_Sphere_C.RefreshMaterial
	// void RefreshMaterial();                                                                                               // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Engine/EngineSky/BP_Sky_Sphere.BP_Sky_Sphere_C.UpdateSunDirection
	// void UpdateSunDirection();                                                                                            // [0x61d2f50] Public|BlueprintCallable|BlueprintEvent 
	// Function /Engine/EngineSky/BP_Sky_Sphere.BP_Sky_Sphere_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x61d2f50] Event|Public|BlueprintCallable|BlueprintEvent 
};

