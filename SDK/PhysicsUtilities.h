
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags

/// Class /Script/PhysicsUtilities.DynamicCapsuleResizerComponent
/// Size: 0x0060 (0x0000B8 - 0x000118)
class UDynamicCapsuleResizerComponent : public UActorComponent
{ 
public:
	class UCapsuleComponent*                           _capsule;                                                   // 0x00B8   (0x0008)  
	unsigned char                                      UnknownData00_5[0x18];                                      // 0x00C0   (0x0018)  MISSED
	FGameplayTagContainer                              _preventingShrinkTag;                                       // 0x00D8   (0x0020)  
	float                                              _shrinkPercent;                                             // 0x00F8   (0x0004)  
	float                                              _shrinkDuration;                                            // 0x00FC   (0x0004)  
	float                                              _expandDuration;                                            // 0x0100   (0x0004)  
	float                                              _stayShrunkenDuration;                                      // 0x0104   (0x0004)  
	float                                              _expandOverlapTestMinDeltaTime;                             // 0x0108   (0x0004)  
	bool                                               _isShrinkingEnabled;                                        // 0x010C   (0x0001)  
	bool                                               _isShrinkingAlwaysEnabled;                                  // 0x010D   (0x0001)  
	unsigned char                                      UnknownData01_6[0xA];                                       // 0x010E   (0x000A)  MISSED


	/// Functions
	// Function /Script/PhysicsUtilities.DynamicCapsuleResizerComponent.SetShrinkingEnabled
	// void SetShrinkingEnabled(bool Enabled);                                                                               // [0x8499500] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsUtilities.DynamicCapsuleResizerComponent.OnRep_IsShrinkingAlwaysEnabled
	// void OnRep_IsShrinkingAlwaysEnabled();                                                                                // [0x84994e0] Final|Native|Private 
	// Function /Script/PhysicsUtilities.DynamicCapsuleResizerComponent.OnHit
	// void OnHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit); // [0x8499300] Final|Native|Private|HasOutParms|HasDefaults 
};

/// Class /Script/PhysicsUtilities.PrimitiveCollection
/// Size: 0x0050 (0x000030 - 0x000080)
class UPrimitiveCollection : public UObject
{ 
public:
	SDK_UNDEFINED(80,1715) /* TSet<TWeakObjectPtr<UPrimitiveComponent*>> */ __um(_primitives);                     // 0x0030   (0x0050)  


	/// Functions
	// Function /Script/PhysicsUtilities.PrimitiveCollection.Remove
	// void Remove(class UPrimitiveComponent* Primitive);                                                                    // [0x8499890] Final|Native|Public|BlueprintCallable 
	// Function /Script/PhysicsUtilities.PrimitiveCollection.Add
	// void Add(class UPrimitiveComponent* Primitive);                                                                       // [0x8499800] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PhysicsUtilities.PrimitivesRegistererComponent
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UPrimitivesRegistererComponent : public UActorComponent
{ 
public:
	TArray<class UPrimitiveComponent*>                 _primitives;                                                // 0x00B8   (0x0010)  
	SDK_UNDEFINED(8,1716) /* TWeakObjectPtr<UPrimitiveCollection*> */ __um(_primitiveCollection);                  // 0x00C8   (0x0008)  


	/// Functions
	// Function /Script/PhysicsUtilities.PrimitivesRegistererComponent.SetPrimitives
	// void SetPrimitives(TArray<UPrimitiveComponent*>& primitives);                                                         // [0x8499a90] Final|Native|Public|HasOutParms|BlueprintCallable 
};

