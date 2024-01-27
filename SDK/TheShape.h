
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Competence
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: DBDAnimation
/// dependency: DBDAttack
/// dependency: DeadByDaylight
/// dependency: Engine

/// Class /Script/TheShape.KillStandingInteractionDefinition
/// Size: 0x0010 (0x000650 - 0x000660)
class UKillStandingInteractionDefinition : public UInteractionDefinition
{ 
public:
	float                                              _slasherFacingTolerance;                                    // 0x064C   (0x0004)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0650   (0x0010)  MISSED
};

/// Class /Script/TheShape.ObjectOfObsession
/// Size: 0x0070 (0x0003C8 - 0x000438)
class UObjectOfObsession : public UPerk
{ 
public:
	float                                              _revealTimeIntervals;                                       // 0x03C8   (0x000C)  
	float                                              _revealTimeDuration;                                        // 0x03D4   (0x000C)  
	float                                              _actionSpeedBonus;                                          // 0x03E0   (0x000C)  
	unsigned char                                      UnknownData00_5[0x34];                                      // 0x03EC   (0x0034)  MISSED
	class UClass*                                      _increaseObsessionChanceEffect;                             // 0x0420   (0x0008)  
	class UClass*                                      _revealToKillerStatusEffect;                                // 0x0428   (0x0008)  
	class UClass*                                      _objectOfObsessionActionSpeedEffect;                        // 0x0430   (0x0008)  


	/// Functions
	// Function /Script/TheShape.ObjectOfObsession.Authority_OnDamageStateChanged
	// void Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState CurrentDamageState);        // [0x5decae0] Final|Native|Private 
};

/// Class /Script/TheShape.ShapeAnimInstance
/// Size: 0x0010 (0x000610 - 0x000620)
class UShapeAnimInstance : public UKillerAnimInstance
{ 
public:
	bool                                               _isTier3Active;                                             // 0x0610   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0611   (0x0007)  MISSED
	class UEvilWithinComponent*                        _evilWithinComponent;                                       // 0x0618   (0x0008)  
};

/// Class /Script/TheShape.ShapePounceAttackOpenSubstate
/// Size: 0x0010 (0x000130 - 0x000140)
class UShapePounceAttackOpenSubstate : public UPounceAttackOpenSubstate
{ 
public:
	TArray<FDBDTunableRowHandle>                       _tierDurations;                                             // 0x0130   (0x0010)  
};

