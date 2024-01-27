
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: UMG

/// Enum /Script/SharedAuthenticationUtilities.ESharedAuthenticationTokenType
/// Size: 0x05
enum class ESharedAuthenticationTokenType : uint8_t
{
	ESharedAuthenticationTokenType__None                                             = 0,
	ESharedAuthenticationTokenType__AccessToken                                      = 1,
	ESharedAuthenticationTokenType__AuthorizationCode                                = 2,
	ESharedAuthenticationTokenType__IdentityToken                                    = 3,
	ESharedAuthenticationTokenType__ESharedAuthenticationTokenType_MAX               = 4
};

/// Enum /Script/SharedAuthenticationUtilities.ESharedAuthenticationProvider
/// Size: 0x07
enum class ESharedAuthenticationProvider : uint8_t
{
	ESharedAuthenticationProvider__None                                              = 0,
	ESharedAuthenticationProvider__Facebook                                          = 1,
	ESharedAuthenticationProvider__Google                                            = 2,
	ESharedAuthenticationProvider__NetEase                                           = 3,
	ESharedAuthenticationProvider__Kraken                                            = 4,
	ESharedAuthenticationProvider__SignInWithApple                                   = 5,
	ESharedAuthenticationProvider__ESharedAuthenticationProvider_MAX                 = 6
};

/// Class /Script/SharedAuthenticationUtilities.SharedAuthenticationComponent
/// Size: 0x0160 (0x000030 - 0x000190)
class USharedAuthenticationComponent : public UObject
{ 
public:
	int32_t                                            PopupZOrder;                                                // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0034   (0x0004)  MISSED
	class UClass*                                      AuthenticationProviderSelectionWidget;                      // 0x0038   (0x0008)  
	SDK_UNDEFINED(48,4990) /* TWeakObjectPtr<UClass*> */ __um(AuthenticationProviderSelectionWidgetToLoad);        // 0x0040   (0x0030)  
	SDK_UNDEFINED(80,4991) /* TMap<ESharedAuthenticationProvider, TWeakObjectPtr<UClass*>> */ __um(LoginBackgroundToLoadWidgetToLoadMap); // 0x0070   (0x0050)  
	class UObject*                                     _worldContextObject;                                        // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x28];                                      // 0x00C8   (0x0028)  MISSED
	class UUserWidget*                                 _loginBackgroundWidget;                                     // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData02_5[0x50];                                      // 0x00F8   (0x0050)  MISSED
	class UUMGAuthenticationProviderSelection*         _identityAuthenticationSelectionWidget;                     // 0x0148   (0x0008)  
	unsigned char                                      UnknownData03_5[0x38];                                      // 0x0150   (0x0038)  MISSED
	class USharedAuthenticationMigrateComponent*       _migrateComponent;                                          // 0x0188   (0x0008)  
};

/// Class /Script/SharedAuthenticationUtilities.SharedAuthenticationMigrateComponent
/// Size: 0x0040 (0x000030 - 0x000070)
class USharedAuthenticationMigrateComponent : public UObject
{ 
public:
	class UObject*                                     _worldContextObject;                                        // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0038   (0x0038)  MISSED
};

/// Class /Script/SharedAuthenticationUtilities.UMGAuthenticationProviderSelection
/// Size: 0x0038 (0x000298 - 0x0002D0)
class UUMGAuthenticationProviderSelection : public UUserWidget
{ 
public:
	bool                                               _isAsia;                                                    // 0x0298   (0x0001)  
	unsigned char                                      UnknownData00_6[0x37];                                      // 0x0299   (0x0037)  MISSED


	/// Functions
	// Function /Script/SharedAuthenticationUtilities.UMGAuthenticationProviderSelection.UpdateWidgetsVisibility
	// void UpdateWidgetsVisibility();                                                                                       // [0x61c32d0] Event|Protected|BlueprintEvent 
	// Function /Script/SharedAuthenticationUtilities.UMGAuthenticationProviderSelection.ShowMigrationFailedPopup
	// void ShowMigrationFailedPopup();                                                                                      // [0x61c32d0] Event|Public|BlueprintEvent 
	// Function /Script/SharedAuthenticationUtilities.UMGAuthenticationProviderSelection.SetSelectedAuthenticationProvider
	// void SetSelectedAuthenticationProvider(ESharedAuthenticationProvider Provider);                                       // [0x85f5270] Final|Native|Public|BlueprintCallable 
	// Function /Script/SharedAuthenticationUtilities.UMGAuthenticationProviderSelection.SetMigrateWarningMessageAndShowPopup
	// void SetMigrateWarningMessageAndShowPopup(FString playerName);                                                        // [0x61c32d0] Event|Public|BlueprintEvent 
};

/// Class /Script/SharedAuthenticationUtilities.UMGAutheticationProviderSelection
/// Size: 0x0018 (0x000298 - 0x0002B0)
class UUMGAutheticationProviderSelection : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0298   (0x0018)  MISSED


	/// Functions
	// Function /Script/SharedAuthenticationUtilities.UMGAutheticationProviderSelection.SetSelectedAuthenticationProvider
	// void SetSelectedAuthenticationProvider(ESharedAuthenticationProvider Provider);                                       // [0x85f5500] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/SharedAuthenticationUtilities.AuthenticationRequestState
/// Size: 0x0030 (0x000000 - 0x000030)
struct FAuthenticationRequestState
{ 
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED
};

