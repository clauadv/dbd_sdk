
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimationBudgetAllocator
/// dependency: CoreUObject
/// dependency: DBDAnimationBudgetAllocator
/// dependency: Engine

/// Class /Script/Customization.Accessory
/// Size: 0x0000 (0x001030 - 0x001030)
class UAccessory : public UDBDSkeletalMeshComponentBudgeted
{ 
public:


	/// Functions
	// Function /Script/Customization.Accessory.BP_DestroyComponent
	// void BP_DestroyComponent(class UActorComponent* componentToDestroy);                                                  // [0x4dfdbb0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Customization.AccessoryUtilities
/// Size: 0x0000 (0x000030 - 0x000030)
class UAccessoryUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Customization.AccessoryUtilities.AddBoneSocketLocalVelocityEvaluatorToAccessory
	// class UBoneSocketLocalVelocityEvaluator* AddBoneSocketLocalVelocityEvaluatorToAccessory(class UAccessory* Accessory, TArray<FName>& trackedBoneSocketNames); // [0x4dfdda0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Customization.CharacterCustomization
/// Size: 0x0024 (0x000000 - 0x000024)
struct FCharacterCustomization
{ 
	FName                                              Head;                                                       // 0x0000   (0x000C)  
	FName                                              TorsoOrBody;                                                // 0x000C   (0x000C)  
	FName                                              LegsOrWeapon;                                               // 0x0018   (0x000C)  
};

/// Struct /Script/Customization.CharmIdSlot
/// Size: 0x0010 (0x000000 - 0x000010)
struct FCharmIdSlot
{ 
	int8_t                                             slotIndex;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              CharmId;                                                    // 0x0004   (0x000C)  
};

/// Struct /Script/Customization.EquippedPlayerCustomization
/// Size: 0x0038 (0x000000 - 0x000038)
struct FEquippedPlayerCustomization
{ 
	FCharacterCustomization                            _equippedCustomization;                                     // 0x0000   (0x0024)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FCharmIdSlot>                               _equippedCharms;                                            // 0x0028   (0x0010)  
};

