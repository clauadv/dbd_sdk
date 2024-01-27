
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags

/// Enum /Script/Activation.EActivationStrategy
/// Size: 0x06
enum class EActivationStrategy : uint8_t
{
	EActivationStrategy__ActivateIfAnyTagMatches                                     = 0,
	EActivationStrategy__ActivateIfAllTagMatches                                     = 1,
	EActivationStrategy__DeactivateIfAnyTagMatches                                   = 2,
	EActivationStrategy__DeactivateIfAllTagMatches                                   = 3,
	EActivationStrategy__DeactivateWhenDependenciesAreDeactivated                    = 4,
	EActivationStrategy__EActivationStrategy_MAX                                     = 5
};

/// Class /Script/Activation.ActivatableMock
/// Size: 0x0050 (0x0000B8 - 0x000108)
class UActivatableMock : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x00B8   (0x0050)  MISSED
};

/// Class /Script/Activation.ActivatorComponent
/// Size: 0x0040 (0x0000B8 - 0x0000F8)
class UActivatorComponent : public UActorComponent
{ 
public:
	bool                                               _searchForActivatableSubAnimInstances;                      // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3F];                                      // 0x00B9   (0x003F)  MISSED


	/// Functions
	// Function /Script/Activation.ActivatorComponent.SetObjectState
	// void SetObjectState(class UGameplayTagContainerComponent* objectState);                                               // [0x8482220] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Activation.Activatable
/// Size: 0x0000 (0x000030 - 0x000030)
class UActivatable : public UInterface
{ 
public:
};

/// Struct /Script/Activation.ActivationDefinition
/// Size: 0x0028 (0x000000 - 0x000028)
struct FActivationDefinition
{ 
	EActivationStrategy                                _activationStrategy;                                        // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FGameplayTagContainer                              _activationTags;                                            // 0x0008   (0x0020)  
};

/// Struct /Script/Activation.TestableActivationDefinition
/// Size: 0x0000 (0x000028 - 0x000028)
struct FTestableActivationDefinition : FActivationDefinition
{ 
};

/// Struct /Script/Activation.DependencyBasedActivationStrategy
/// Size: 0x0020 (0x000000 - 0x000020)
struct FDependencyBasedActivationStrategy
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0000   (0x0020)  MISSED
};

