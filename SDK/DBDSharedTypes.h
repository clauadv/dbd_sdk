
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DataTableUtilities
/// dependency: Engine
/// dependency: GameplayTags

/// Enum /Script/DBDSharedTypes.EPlayerRole
/// Size: 0x06
enum class EPlayerRole : uint8_t
{
	EPlayerRole__VE_None                                                             = 0,
	EPlayerRole__VE_Slasher                                                          = 1,
	EPlayerRole__VE_Camper                                                           = 2,
	EPlayerRole__VE_Observer                                                         = 3,
	EPlayerRole__Max                                                                 = 4,
	EPlayerRole__EPlayerRole_MAX                                                     = 5
};

/// Enum /Script/DBDSharedTypes.ECurrencyType
/// Size: 0x09
enum class ECurrencyType : uint8_t
{
	ECurrencyType__None                                                              = 0,
	ECurrencyType__BloodPoints                                                       = 1,
	ECurrencyType__FearTokens                                                        = 2,
	ECurrencyType__Cells                                                             = 3,
	ECurrencyType__HalloweenCoins                                                    = 4,
	ECurrencyType__LunarNewYearCoins                                                 = 5,
	ECurrencyType__HalloweenEventCurrency                                            = 6,
	ECurrencyType__WinterEventCurrency                                               = 7,
	ECurrencyType__ECurrencyType_MAX                                                 = 8
};

/// Enum /Script/DBDSharedTypes.ECustomizationCategory
/// Size: 0x12
enum class ECustomizationCategory : uint8_t
{
	ECustomizationCategory__None                                                     = 0,
	ECustomizationCategory__SurvivorHead                                             = 1,
	ECustomizationCategory__SurvivorTorso                                            = 2,
	ECustomizationCategory__SurvivorLegs                                             = 3,
	ECustomizationCategory__KillerHead                                               = 4,
	ECustomizationCategory__KillerBody                                               = 5,
	ECustomizationCategory__KillerWeapon                                             = 6,
	ECustomizationCategory__Outfits                                                  = 7,
	ECustomizationCategory__Charm                                                    = 8,
	ECustomizationCategory__Badge                                                    = 9,
	ECustomizationCategory__Banner                                                   = 10,
	ECustomizationCategory__ECustomizationCategory_MAX                               = 11
};

/// Enum /Script/DBDSharedTypes.EItemRarity
/// Size: 0x16
enum class EItemRarity : uint8_t
{
	EItemRarity__Common                                                              = 0,
	EItemRarity__Uncommon                                                            = 1,
	EItemRarity__Rare                                                                = 2,
	EItemRarity__VeryRare                                                            = 3,
	EItemRarity__UltraRare                                                           = 4,
	EItemRarity__Artifact                                                            = 5,
	EItemRarity__Spectral                                                            = 6,
	EItemRarity__Teachable                                                           = 7,
	EItemRarity__SpecialEvent                                                        = 8,
	EItemRarity__Legendary                                                           = 9,
	EItemRarity__Epic                                                                = 10,
	EItemRarity__SuperEpic                                                           = 11,
	EItemRarity__UltraEpic                                                           = 12,
	EItemRarity__Count                                                               = 13,
	EItemRarity__None                                                                = 14,
	EItemRarity__EItemRarity_MAX                                                     = 15
};

/// Enum /Script/DBDSharedTypes.EProgressionType
/// Size: 0x04
enum class EProgressionType : uint8_t
{
	EProgressionType__None                                                           = 0,
	EProgressionType__Stars                                                          = 1,
	EProgressionType__ArchiveRiftPass                                                = 2,
	EProgressionType__EProgressionType_MAX                                           = 3
};

/// Enum /Script/DBDSharedTypes.ECharacterDifficulty
/// Size: 0x06
enum class ECharacterDifficulty : uint8_t
{
	ECharacterDifficulty__VE_None                                                    = 0,
	ECharacterDifficulty__VE_Easy                                                    = 1,
	ECharacterDifficulty__VE_Intermediate                                            = 2,
	ECharacterDifficulty__VE_Hard                                                    = 3,
	ECharacterDifficulty__VE_VeryHard                                                = 4,
	ECharacterDifficulty__VE_MAX                                                     = 5
};

/// Enum /Script/DBDSharedTypes.ERewardType
/// Size: 0x06
enum class ERewardType : uint8_t
{
	ERewardType__None                                                                = 0,
	ERewardType__Character                                                           = 1,
	ERewardType__Currency                                                            = 2,
	ERewardType__Customization                                                       = 3,
	ERewardType__Progression                                                         = 4,
	ERewardType__ERewardType_MAX                                                     = 5
};

/// Enum /Script/DBDSharedTypes.EQuestProgressionType
/// Size: 0x05
enum class EQuestProgressionType : uint8_t
{
	EQuestProgressionType__None                                                      = 0,
	EQuestProgressionType__Action                                                    = 1,
	EQuestProgressionType__Percentage                                                = 2,
	EQuestProgressionType__Time                                                      = 3,
	EQuestProgressionType__EQuestProgressionType_MAX                                 = 4
};

/// Enum /Script/DBDSharedTypes.EStoryNodeState
/// Size: 0x08
enum class EStoryNodeState : uint8_t
{
	EStoryNodeState__Unavailable                                                     = 0,
	EStoryNodeState__AvailableDefault                                                = 1,
	EStoryNodeState__AvailableActive                                                 = 2,
	EStoryNodeState__AvailablePaused                                                 = 3,
	EStoryNodeState__Completed                                                       = 4,
	EStoryNodeState__Claimed                                                         = 5,
	EStoryNodeState__None                                                            = 255,
	EStoryNodeState__EStoryNodeState_MAX                                             = 256
};

/// Enum /Script/DBDSharedTypes.EArchiveNodeType
/// Size: 0x07
enum class EArchiveNodeType : uint8_t
{
	EArchiveNodeType__Narrative                                                      = 0,
	EArchiveNodeType__Task                                                           = 1,
	EArchiveNodeType__Challenge                                                      = 2,
	EArchiveNodeType__Contextual                                                     = 3,
	EArchiveNodeType__Reward                                                         = 4,
	EArchiveNodeType__None                                                           = 255,
	EArchiveNodeType__EArchiveNodeType_MAX                                           = 256
};

/// Enum /Script/DBDSharedTypes.EArchiveMenuState
/// Size: 0x07
enum class EArchiveMenuState : uint8_t
{
	EArchiveMenuState__None                                                          = 0,
	EArchiveMenuState__CurrentTome                                                   = 1,
	EArchiveMenuState__EventTome                                                     = 2,
	EArchiveMenuState__PastTome                                                      = 3,
	EArchiveMenuState__Rift                                                          = 4,
	EArchiveMenuState__Compendium                                                    = 5,
	EArchiveMenuState__EArchiveMenuState_MAX                                         = 6
};

/// Enum /Script/DBDSharedTypes.EHelpType
/// Size: 0x04
enum class EHelpType : uint8_t
{
	EHelpType__General                                                               = 0,
	EHelpType__Survivor                                                              = 1,
	EHelpType__Killer                                                                = 2,
	EHelpType__EHelpType_MAX                                                         = 3
};

/// Enum /Script/DBDSharedTypes.EPopupButtonType
/// Size: 0x04
enum class EPopupButtonType : uint8_t
{
	EPopupButtonType__Regression                                                     = 0,
	EPopupButtonType__Progression                                                    = 1,
	EPopupButtonType__Alternative                                                    = 2,
	EPopupButtonType__EPopupButtonType_MAX                                           = 3
};

/// Enum /Script/DBDSharedTypes.ELoadoutSlot
/// Size: 0x11
enum class ELoadoutSlot : uint8_t
{
	ELoadoutSlot__SKIN                                                               = 0,
	ELoadoutSlot__ITEM_POWER                                                         = 1,
	ELoadoutSlot__ADD_ON                                                             = 2,
	ELoadoutSlot__ADD_ON4                                                            = 3,
	ELoadoutSlot__PERK                                                               = 4,
	ELoadoutSlot__PERK6                                                              = 5,
	ELoadoutSlot__PERK7                                                              = 6,
	ELoadoutSlot__PERK8                                                              = 7,
	ELoadoutSlot__FAVOR                                                              = 8,
	ELoadoutSlot__COUNT                                                              = 9,
	ELoadoutSlot__ELoadoutSlot_MAX                                                   = 10
};

/// Enum /Script/DBDSharedTypes.EItemSorting
/// Size: 0x04
enum class EItemSorting : uint8_t
{
	EItemSorting__ByRarity                                                           = 0,
	EItemSorting__ByParentOutfitName                                                 = 1,
	EItemSorting__ByItemName                                                         = 2,
	EItemSorting__EItemSorting_MAX                                                   = 3
};

/// Enum /Script/DBDSharedTypes.EControlMode
/// Size: 0x09
enum class EControlMode : uint8_t
{
	EControlMode__MOUSE_KB                                                           = 0,
	EControlMode__XBOX                                                               = 1,
	EControlMode__PS                                                                 = 2,
	EControlMode__VITA                                                               = 3,
	EControlMode__SWITCH                                                             = 4,
	EControlMode__SWITCH_PRO                                                         = 5,
	EControlMode__ATLANTA                                                            = 6,
	EControlMode__UNDEFINED                                                          = 7,
	EControlMode__EControlMode_MAX                                                   = 8
};

/// Enum /Script/DBDSharedTypes.EGameState
/// Size: 0x10
enum class EGameState : uint8_t
{
	EGameState__VE_Active                                                            = 0,
	EGameState__VE_Killed                                                            = 1,
	EGameState__VE_Escaped                                                           = 2,
	EGameState__VE_EscapedInjured                                                    = 3,
	EGameState__VE_Sacrificed                                                        = 4,
	EGameState__VE_None                                                              = 5,
	EGameState__VE_Disconnected                                                      = 6,
	EGameState__VE_ManuallyLeftMatch                                                 = 7,
	EGameState__VE_BledOut                                                           = 8,
	EGameState__VE_MAX                                                               = 9
};

/// Enum /Script/DBDSharedTypes.EAttackType
/// Size: 0x21
enum class EAttackType : uint8_t
{
	EAttackType__VE_None                                                             = 0,
	EAttackType__VE_Slash                                                            = 1,
	EAttackType__VE_Pounce                                                           = 2,
	EAttackType__VE_Chainsaw                                                         = 3,
	EAttackType__VE_Blink                                                            = 4,
	EAttackType__VE_LFChainsaw                                                       = 5,
	EAttackType__VE_Ambush                                                           = 6,
	EAttackType__VE_Frenzy                                                           = 7,
	EAttackType__VE_GhostCrouch                                                      = 8,
	EAttackType__VE_QatarDash                                                        = 9,
	EAttackType__VE_OniBasicAttack                                                   = 10,
	EAttackType__VE_OniDemonBasicAttack                                              = 11,
	EAttackType__VE_OniDemonPowerAttack                                              = 12,
	EAttackType__VE_OniDemonDashAttack                                               = 13,
	EAttackType__VE_ExecutionerTormentAttack                                         = 14,
	EAttackType__VE_BlightDash                                                       = 15,
	EAttackType__VE_TwinJump                                                         = 16,
	EAttackType__VE_K24WhipAttack                                                    = 17,
	EAttackType__VE_K33TailAttack                                                    = 18,
	EAttackType__VE_K34SliceAndDiceAttack                                            = 19,
	EAttackType__VE_MAX                                                              = 20
};

/// Enum /Script/DBDSharedTypes.EDetectionZone
/// Size: 0x16
enum class EDetectionZone : uint8_t
{
	EDetectionZone__VE_None                                                          = 0,
	EDetectionZone__VE_Slash                                                         = 1,
	EDetectionZone__VE_Pounce                                                        = 2,
	EDetectionZone__VE_Chainsaw                                                      = 3,
	EDetectionZone__VE_Obstructed                                                    = 4,
	EDetectionZone__VE_Interruption                                                  = 5,
	EDetectionZone__VE_ChainsawLockExtended                                          = 6,
	EDetectionZone__VE_Damage                                                        = 7,
	EDetectionZone__VE_ChainsawObstruction                                           = 8,
	EDetectionZone__VE_Blink                                                         = 9,
	EDetectionZone__VE_ChainsawDamageExtended                                        = 10,
	EDetectionZone__VE_Stalker                                                       = 11,
	EDetectionZone__VE_Lunge                                                         = 12,
	EDetectionZone__VE_PowerAttack                                                   = 13,
	EDetectionZone__VE_Max                                                           = 14,
	EDetectionZone__VE_Max16                                                         = 15
};

/// Enum /Script/DBDSharedTypes.EStunType
/// Size: 0x12
enum class EStunType : uint8_t
{
	EStunType__VE_None                                                               = 0,
	EStunType__VE_Pallet                                                             = 1,
	EStunType__VE_BearTrap                                                           = 2,
	EStunType__VE_Flashlight                                                         = 3,
	EStunType__VE_WiggleFree                                                         = 4,
	EStunType__VE_EvilWithin                                                         = 5,
	EStunType__VE_Kicked                                                             = 6,
	EStunType__VE_Closet                                                             = 7,
	EStunType__VE_HarpoonRifle                                                       = 8,
	EStunType__VE_GeneratorTrap                                                      = 9,
	EStunType__VE_HalloweenHaunt                                                     = 10,
	EStunType__VE_MAX                                                                = 11
};

/// Enum /Script/DBDSharedTypes.EInputInteractionType
/// Size: 0x60
enum class EInputInteractionType : uint8_t
{
	EInputInteractionType__VE_None                                                   = 0,
	EInputInteractionType__VE_Interact                                               = 1,
	EInputInteractionType__VE_ItemUse                                                = 2,
	EInputInteractionType__VE_FastInteract                                           = 3,
	EInputInteractionType__VE_AttackInteract                                         = 4,
	EInputInteractionType__VE_ItemInteract                                           = 5,
	EInputInteractionType__VE_Rush                                                   = 6,
	EInputInteractionType__VE_AbilityUse                                             = 7,
	EInputInteractionType__VE_ActivatablePerk01                                      = 8,
	EInputInteractionType__VE_ActivatablePerk02                                      = 9,
	EInputInteractionType__VE_ActivatablePerk03                                      = 10,
	EInputInteractionType__VE_ActivatablePerk04                                      = 11,
	EInputInteractionType__VE_Run                                                    = 12,
	EInputInteractionType__VE_ItemDrop                                               = 13,
	EInputInteractionType__VE_InteractMash                                           = 14,
	EInputInteractionType__VE_Struggle                                               = 15,
	EInputInteractionType__VE_AbilityTwo                                             = 16,
	EInputInteractionType__VE_EventAbility                                           = 17,
	EInputInteractionType__VE_Action                                                 = 18,
	EInputInteractionType__VE_Crouch                                                 = 19,
	EInputInteractionType__VE_ActionKiller                                           = 20,
	EInputInteractionType__VE_CancelCharge                                           = 21,
	EInputInteractionType__VE_WiggleLeft                                             = 22,
	EInputInteractionType__VE_WiggleRight                                            = 23,
	EInputInteractionType__VE_SecondaryAction                                        = 24,
	EInputInteractionType__VE_Gesture01                                              = 25,
	EInputInteractionType__VE_Gesture02                                              = 26,
	EInputInteractionType__VE_Gesture03                                              = 27,
	EInputInteractionType__VE_Gesture04                                              = 28,
	EInputInteractionType__VE_ExternalChainBlink                                     = 29,
	EInputInteractionType__VE_ExternalRequestClosetExitFast                          = 30,
	EInputInteractionType__VE_ExternalRequestClosetStun                              = 31,
	EInputInteractionType__VE_ExternalRequestDestroyWithPowerAttack                  = 32,
	EInputInteractionType__VE_ExternalRequestDrop                                    = 33,
	EInputInteractionType__VE_ExternalRequestDropBySkillCheck                        = 34,
	EInputInteractionType__VE_ExternalRequestDropByStunning                          = 35,
	EInputInteractionType__VE_ExternalRequestDropByStunningWithFlashlight            = 36,
	EInputInteractionType__VE_ExternalRequestDropByStunningByPallet                  = 37,
	EInputInteractionType__VE_ExternalRequestDropByWiggleFree                        = 38,
	EInputInteractionType__VE_ExternalRequestEscape                                  = 39,
	EInputInteractionType__VE_ExternalRequestFlashlightStunUncloak                   = 40,
	EInputInteractionType__VE_ExternalRequestGeneratorTrapStun                       = 41,
	EInputInteractionType__VE_ExternalRequestHalloweenHauntStun                      = 42,
	EInputInteractionType__VE_ExternalRequestHarpoonRifleStun                        = 43,
	EInputInteractionType__VE_ExternalRequestKickStun                                = 44,
	EInputInteractionType__VE_ExternalRequestKillerCaughtInBearTrap                  = 45,
	EInputInteractionType__VE_ExternalRequestPalletStun                              = 46,
	EInputInteractionType__VE_ExternalRequestPalletStunUncloak                       = 47,
	EInputInteractionType__VE_ExternalRequestPutToSleepStun                          = 48,
	EInputInteractionType__VE_ExternalRequestRBTExecute                              = 49,
	EInputInteractionType__VE_ExternalRequestRBTExecuteAtExit                        = 50,
	EInputInteractionType__VE_ExternalRequestSacrifice                               = 51,
	EInputInteractionType__VE_ExternalRequestSlashedOutOfTrap                        = 52,
	EInputInteractionType__VE_ExternalRequestStun                                    = 53,
	EInputInteractionType__VE_ExternalRequestStunBySkillCheck                        = 54,
	EInputInteractionType__VE_ExternalRequestStunEvilWithin                          = 55,
	EInputInteractionType__VE_ExternalRequestStunUncloak                             = 56,
	EInputInteractionType__VE_ExternalRequestK32TeleportToSurvivor                   = 57,
	EInputInteractionType__VE_Count                                                  = 58,
	EInputInteractionType__VE_MAX                                                    = 59
};

/// Enum /Script/DBDSharedTypes.EInteractionAnimation
/// Size: 0x29
enum class EInteractionAnimation : uint8_t
{
	EInteractionAnimation__VE_None                                                   = 0,
	EInteractionAnimation__VE_Generator                                              = 1,
	EInteractionAnimation__VE_PullDownLeft                                           = 2,
	EInteractionAnimation__VE_PullDownRight                                          = 3,
	EInteractionAnimation__VE_Hiding                                                 = 4,
	EInteractionAnimation__VE_SearchCloset                                           = 5,
	EInteractionAnimation__VE_HealingOther                                           = 6,
	EInteractionAnimation__VE_OpenEscape                                             = 7,
	EInteractionAnimation__VE_StruggleFree                                           = 8,
	EInteractionAnimation__VE_HealOther                                              = 9,
	EInteractionAnimation__VE_HealSelf                                               = 10,
	EInteractionAnimation__VE_PickedUp                                               = 11,
	EInteractionAnimation__VE_Unused01                                               = 12,
	EInteractionAnimation__VE_Dropped                                                = 13,
	EInteractionAnimation__VE_Unused02                                               = 14,
	EInteractionAnimation__VE_BeingHooked                                            = 15,
	EInteractionAnimation__VE_Sabotage                                               = 16,
	EInteractionAnimation__VE_ChargeBlink                                            = 17,
	EInteractionAnimation__VE_ThrowFirecracker                                       = 18,
	EInteractionAnimation__VE_WakeUpOther                                            = 19,
	EInteractionAnimation__VE_RemoveReverseBearTrap                                  = 20,
	EInteractionAnimation__VE_DestroyPortal                                          = 21,
	EInteractionAnimation__VE_OniDash                                                = 22,
	EInteractionAnimation__VE_K34SliceAndDiceDash                                    = 23,
	EInteractionAnimation__VE_PickUpAnniversaryCrown                                 = 24,
	EInteractionAnimation__VE_InteractWithGlyph                                      = 25,
	EInteractionAnimation__VE_InteractWithUnstableRift                               = 26,
	EInteractionAnimation__VE_OpenChest                                              = 27,
	EInteractionAnimation__VE_MAX                                                    = 28
};

/// Enum /Script/DBDSharedTypes.EPawnType
/// Size: 0x05
enum class EPawnType : uint8_t
{
	EPawnType__VE_None                                                               = 0,
	EPawnType__VE_Killer                                                             = 1,
	EPawnType__VE_Survivor                                                           = 2,
	EPawnType__VE_Sidekick                                                           = 3,
	EPawnType__VE_MAX                                                                = 4
};

/// Enum /Script/DBDSharedTypes.EPlayerTeam
/// Size: 0x04
enum class EPlayerTeam : uint8_t
{
	EPlayerTeam__VE_None                                                             = 0,
	EPlayerTeam__VE_Killer                                                           = 1,
	EPlayerTeam__VE_Survivor                                                         = 2,
	EPlayerTeam__VE_MAX                                                              = 3
};

/// Enum /Script/DBDSharedTypes.EAnimNotifyType
/// Size: 0x04
enum class EAnimNotifyType : uint8_t
{
	EAnimNotifyType__VE_None                                                         = 0,
	EAnimNotifyType__VE_Pickup                                                       = 1,
	EAnimNotifyType__VE_Release                                                      = 2,
	EAnimNotifyType__VE_MAX                                                          = 3
};

/// Enum /Script/DBDSharedTypes.EAttackSubstate
/// Size: 0x08
enum class EAttackSubstate : uint8_t
{
	EAttackSubstate__VE_None                                                         = 0,
	EAttackSubstate__VE_Open                                                         = 1,
	EAttackSubstate__VE_Hitting                                                      = 2,
	EAttackSubstate__VE_HitSucceed                                                   = 3,
	EAttackSubstate__VE_HitMiss                                                      = 4,
	EAttackSubstate__VE_HitObstructed                                                = 5,
	EAttackSubstate__VE_Done                                                         = 6,
	EAttackSubstate__VE_MAX                                                          = 7
};

/// Enum /Script/DBDSharedTypes.ECamperState
/// Size: 0x04
enum class ECamperState : uint8_t
{
	ECamperState__VE_None                                                            = 0,
	ECamperState__VE_Navigate                                                        = 1,
	ECamperState__VE_Interact                                                        = 2,
	ECamperState__VE_MAX                                                             = 3
};

/// Enum /Script/DBDSharedTypes.ELoadoutPartState
/// Size: 0x07
enum class ELoadoutPartState : uint8_t
{
	ELoadoutPartState__None                                                          = 0,
	ELoadoutPartState__Default                                                       = 1,
	ELoadoutPartState__InProgress                                                    = 2,
	ELoadoutPartState__Ready                                                         = 3,
	ELoadoutPartState__Active                                                        = 4,
	ELoadoutPartState__Vanished                                                      = 5,
	ELoadoutPartState__ELoadoutPartState_MAX                                         = 6
};

/// Enum /Script/DBDSharedTypes.EItemAvailability
/// Size: 0x04
enum class EItemAvailability : uint8_t
{
	EItemAvailability__Available                                                     = 0,
	EItemAvailability__Disabled                                                      = 1,
	EItemAvailability__Retired                                                       = 2,
	EItemAvailability__EItemAvailability_MAX                                         = 3
};

/// Enum /Script/DBDSharedTypes.EStatusEffectType
/// Size: 0x05
enum class EStatusEffectType : uint8_t
{
	EStatusEffectType__None                                                          = 0,
	EStatusEffectType__Buff                                                          = 1,
	EStatusEffectType__Debuff                                                        = 2,
	EStatusEffectType__Count                                                         = 3,
	EStatusEffectType__EStatusEffectType_MAX                                         = 4
};

/// Enum /Script/DBDSharedTypes.EInventoryItemType
/// Size: 0x18
enum class EInventoryItemType : uint8_t
{
	EInventoryItemType__None                                                         = 0,
	EInventoryItemType__Item                                                         = 1,
	EInventoryItemType__ItemAddOn                                                    = 2,
	EInventoryItemType__CamperPerk                                                   = 3,
	EInventoryItemType__Power                                                        = 4,
	EInventoryItemType__PowerAddOn                                                   = 5,
	EInventoryItemType__SlasherPerk                                                  = 6,
	EInventoryItemType__Favor                                                        = 7,
	EInventoryItemType__Customization                                                = 8,
	EInventoryItemType__IridescentShardsPack                                         = 9,
	EInventoryItemType__AuricCellsPack                                               = 10,
	EInventoryItemType__BloodPointsPack                                              = 11,
	EInventoryItemType__FreeTicket                                                   = 12,
	EInventoryItemType__Chest                                                        = 13,
	EInventoryItemType__SuperChest                                                   = 14,
	EInventoryItemType__EntityBox                                                    = 15,
	EInventoryItemType__Count                                                        = 16,
	EInventoryItemType__EInventoryItemType_MAX                                       = 17
};

/// Enum /Script/DBDSharedTypes.EKillerAbilities
/// Size: 0x37
enum class EKillerAbilities : uint8_t
{
	EKillerAbilities__VE_None                                                        = 0,
	EKillerAbilities__VE_SpawnTraps                                                  = 1,
	EKillerAbilities__VE_Cloak                                                       = 2,
	EKillerAbilities__VE_Chainsaw                                                    = 3,
	EKillerAbilities__VE_Blink                                                       = 4,
	EKillerAbilities__VE_PhantomTrap                                                 = 5,
	EKillerAbilities__VE_Stalker                                                     = 6,
	EKillerAbilities__VE_Killer07Ability                                             = 7,
	EKillerAbilities__VE_Killer08Ability                                             = 8,
	EKillerAbilities__VE_LFChainsaw                                                  = 9,
	EKillerAbilities__VE_InduceDreams                                                = 10,
	EKillerAbilities__VE_ReverseBearTrap                                             = 11,
	EKillerAbilities__VE_GasBomb                                                     = 12,
	EKillerAbilities__VE_PhaseWalk                                                   = 13,
	EKillerAbilities__VE_Frenzy                                                      = 14,
	EKillerAbilities__VE_Vomit                                                       = 15,
	EKillerAbilities__VE_GhostStalker                                                = 16,
	EKillerAbilities__VE_GroundPortals                                               = 17,
	EKillerAbilities__VE_DemonMode                                                   = 18,
	EKillerAbilities__VE_HarpoonRifle                                                = 19,
	EKillerAbilities__VE_TormentMode                                                 = 20,
	EKillerAbilities__VE_K21Power                                                    = 21,
	EKillerAbilities__VE_K22Power                                                    = 22,
	EKillerAbilities__VE_ThrowingKnives                                              = 23,
	EKillerAbilities__VE_K24Power                                                    = 24,
	EKillerAbilities__VE_Zombies                                                     = 25,
	EKillerAbilities__VE_K25Power                                                    = 26,
	EKillerAbilities__VE_K26Power                                                    = 27,
	EKillerAbilities__VE_OnryoPower                                                  = 28,
	EKillerAbilities__VE_K28Power                                                    = 29,
	EKillerAbilities__VE_K29Power                                                    = 30,
	EKillerAbilities__VE_K30Power                                                    = 31,
	EKillerAbilities__VE_K31Power                                                    = 32,
	EKillerAbilities__VE_K32Power                                                    = 33,
	EKillerAbilities__VE_K33Power                                                    = 34,
	EKillerAbilities__VE_K34Power                                                    = 35,
	EKillerAbilities__VE_MAX                                                         = 36
};

/// Enum /Script/DBDSharedTypes.ESkillCheckCustomType
/// Size: 0x15
enum class ESkillCheckCustomType : uint8_t
{
	ESkillCheckCustomType__VE_None                                                   = 0,
	ESkillCheckCustomType__VE_OnPickedUp                                             = 1,
	ESkillCheckCustomType__VE_OnAttacked                                             = 2,
	ESkillCheckCustomType__VE_DecisiveStrikeWhileWiggling                            = 3,
	ESkillCheckCustomType__VE_GeneratorOvercharge1                                   = 4,
	ESkillCheckCustomType__VE_GeneratorOvercharge2                                   = 5,
	ESkillCheckCustomType__VE_GeneratorOvercharge3                                   = 6,
	ESkillCheckCustomType__VE_BrandNewPart                                           = 7,
	ESkillCheckCustomType__VE_Struggle                                               = 8,
	ESkillCheckCustomType__VE_OppressionPerkGeneratorKicked                          = 9,
	ESkillCheckCustomType__VE_SoulChemical                                           = 10,
	ESkillCheckCustomType__VE_Wiggle                                                 = 11,
	ESkillCheckCustomType__VE_YellowGlyph                                            = 12,
	ESkillCheckCustomType__VE_K27P03Continuous                                       = 13,
	ESkillCheckCustomType__VE_MAX                                                    = 14
};

/// Enum /Script/DBDSharedTypes.ELoadoutItemType
/// Size: 0x10
enum class ELoadoutItemType : uint8_t
{
	ELoadoutItemType__None                                                           = 0,
	ELoadoutItemType__Medkit                                                         = 1,
	ELoadoutItemType__Toolbox                                                        = 2,
	ELoadoutItemType__Flashlight                                                     = 3,
	ELoadoutItemType__Key                                                            = 4,
	ELoadoutItemType__Map                                                            = 5,
	ELoadoutItemType__Firecracker                                                    = 6,
	ELoadoutItemType__Flashbang                                                      = 7,
	ELoadoutItemType__Count                                                          = 8,
	ELoadoutItemType__ELoadoutItemType_MAX                                           = 9
};

/// Enum /Script/DBDSharedTypes.ELeanState
/// Size: 0x04
enum class ELeanState : uint8_t
{
	ELeanState__NotLeaning                                                           = 0,
	ELeanState__LeanLeft                                                             = 1,
	ELeanState__LeanRight                                                            = 2,
	ELeanState__ELeanState_MAX                                                       = 3
};

/// Enum /Script/DBDSharedTypes.EAudioCustomizationCategory
/// Size: 0x10
enum class EAudioCustomizationCategory : uint8_t
{
	EAudioCustomizationCategory__None                                                = 0,
	EAudioCustomizationCategory__AudioCharacterName                                  = 1,
	EAudioCustomizationCategory__AudioCharacterSubName                               = 2,
	EAudioCustomizationCategory__AudioCharacterHead                                  = 3,
	EAudioCustomizationCategory__AudioCharacterClothes                               = 4,
	EAudioCustomizationCategory__AudioCharacterShoes                                 = 5,
	EAudioCustomizationCategory__AudioCharacterWeapon                                = 6,
	EAudioCustomizationCategory__AudioCharacterAmbiance                              = 7,
	EAudioCustomizationCategory__AudioCharacterState                                 = 8,
	EAudioCustomizationCategory__EAudioCustomizationCategory_MAX                     = 9
};

/// Enum /Script/DBDSharedTypes.EAntiAliasingMode
/// Size: 0x04
enum class EAntiAliasingMode : uint8_t
{
	EAntiAliasingMode__Off                                                           = 0,
	EAntiAliasingMode__TAA                                                           = 2,
	EAntiAliasingMode__Default                                                       = 2,
	EAntiAliasingMode__EAntiAliasingMode_MAX                                         = 3
};

/// Enum /Script/DBDSharedTypes.EQuestOperationType
/// Size: 0x07
enum class EQuestOperationType : uint8_t
{
	EQuestOperationType__EQ                                                          = 0,
	EQuestOperationType__GEQ                                                         = 1,
	EQuestOperationType__LEQ                                                         = 2,
	EQuestOperationType__G                                                           = 3,
	EQuestOperationType__L                                                           = 4,
	EQuestOperationType__None                                                        = 255,
	EQuestOperationType__EQuestOperationType_MAX                                     = 256
};

/// Enum /Script/DBDSharedTypes.EArchivesEventStyle
/// Size: 0x03
enum class EArchivesEventStyle : uint8_t
{
	EArchivesEventStyle__None                                                        = 0,
	EArchivesEventStyle__Halloween                                                   = 1,
	EArchivesEventStyle__EArchivesEventStyle_MAX                                     = 2
};

/// Enum /Script/DBDSharedTypes.EArchivesStoryLevelAnimationType
/// Size: 0x03
enum class EArchivesStoryLevelAnimationType : uint8_t
{
	EArchivesStoryLevelAnimationType__Completed                                      = 0,
	EArchivesStoryLevelAnimationType__Mastered                                       = 1,
	EArchivesStoryLevelAnimationType__EArchivesStoryLevelAnimationType_MAX           = 2
};

/// Enum /Script/DBDSharedTypes.EArchivesStoryLevelStatus
/// Size: 0x06
enum class EArchivesStoryLevelStatus : uint8_t
{
	EArchivesStoryLevelStatus__Locked                                                = 0,
	EArchivesStoryLevelStatus__Unavailable                                           = 1,
	EArchivesStoryLevelStatus__Available                                             = 2,
	EArchivesStoryLevelStatus__Completed                                             = 3,
	EArchivesStoryLevelStatus__Mastered                                              = 4,
	EArchivesStoryLevelStatus__EArchivesStoryLevelStatus_MAX                         = 5
};

/// Enum /Script/DBDSharedTypes.EArchiveNodeStatus
/// Size: 0x07
enum class EArchiveNodeStatus : uint8_t
{
	EArchiveNodeStatus__Closed                                                       = 0,
	EArchiveNodeStatus__Completed                                                    = 1,
	EArchiveNodeStatus__Open                                                         = 2,
	EArchiveNodeStatus__Paused                                                       = 3,
	EArchiveNodeStatus__Waiting                                                      = 4,
	EArchiveNodeStatus__Error                                                        = 5,
	EArchiveNodeStatus__EArchiveNodeStatus_MAX                                       = 6
};

/// Enum /Script/DBDSharedTypes.EKillerMatchResult
/// Size: 0x05
enum class EKillerMatchResult : uint8_t
{
	EKillerMatchResult__EntityDispleased                                             = 0,
	EKillerMatchResult__BrutalKiller                                                 = 1,
	EKillerMatchResult__RuthlessKiller                                               = 2,
	EKillerMatchResult__MercilessKiller                                              = 3,
	EKillerMatchResult__EKillerMatchResult_MAX                                       = 4
};

/// Enum /Script/DBDSharedTypes.EDailyRitualTileState
/// Size: 0x04
enum class EDailyRitualTileState : uint8_t
{
	EDailyRitualTileState__None                                                      = 0,
	EDailyRitualTileState__Dismissed                                                 = 1,
	EDailyRitualTileState__Claimed                                                   = 2,
	EDailyRitualTileState__EDailyRitualTileState_MAX                                 = 3
};

/// Enum /Script/DBDSharedTypes.EDailyRitualState
/// Size: 0x04
enum class EDailyRitualState : uint8_t
{
	EDailyRitualState__Assigned                                                      = 0,
	EDailyRitualState__DismissedReplacement                                          = 1,
	EDailyRitualState__ClaimedReplacement                                            = 2,
	EDailyRitualState__EDailyRitualState_MAX                                         = 3
};

/// Enum /Script/DBDSharedTypes.EGameType
/// Size: 0x07
enum class EGameType : uint8_t
{
	EGameType__Online                                                                = 0,
	EGameType__KillYourFriends                                                       = 1,
	EGameType__Tutorial                                                              = 4,
	EGameType__TutorialBotMatch                                                      = 5,
	EGameType__SecretBotMatch                                                        = 6,
	EGameType__None                                                                  = 7,
	EGameType__EGameType_MAX                                                         = 8
};

/// Enum /Script/DBDSharedTypes.EDirectionalMinigameResult
/// Size: 0x04
enum class EDirectionalMinigameResult : uint8_t
{
	EDirectionalMinigameResult__VE_SUCCESS                                           = 0,
	EDirectionalMinigameResult__VE_FAILED                                            = 1,
	EDirectionalMinigameResult__VE_CANCELLED                                         = 2,
	EDirectionalMinigameResult__VE_MAX                                               = 3
};

/// Enum /Script/DBDSharedTypes.EDirectionalInputKey
/// Size: 0x06
enum class EDirectionalInputKey : uint8_t
{
	EDirectionalInputKey__VE_INVALID                                                 = 0,
	EDirectionalInputKey__VE_UP                                                      = 1,
	EDirectionalInputKey__VE_DOWN                                                    = 2,
	EDirectionalInputKey__VE_RIGHT                                                   = 3,
	EDirectionalInputKey__VE_LEFT                                                    = 4,
	EDirectionalInputKey__VE_MAX                                                     = 5
};

/// Enum /Script/DBDSharedTypes.EGender
/// Size: 0x06
enum class EGender : uint8_t
{
	EGender__VE_Male                                                                 = 0,
	EGender__VE_Female                                                               = 1,
	EGender__VE_Multiple                                                             = 2,
	EGender__VE_NotHuman                                                             = 3,
	EGender__VE_Undefined                                                            = 4,
	EGender__VE_MAX                                                                  = 5
};

/// Enum /Script/DBDSharedTypes.EAttackSuccess
/// Size: 0x05
enum class EAttackSuccess : uint8_t
{
	EAttackSuccess__VE_None                                                          = 0,
	EAttackSuccess__VE_Success                                                       = 1,
	EAttackSuccess__VE_Failure                                                       = 2,
	EAttackSuccess__VE_Obstructed                                                    = 3,
	EAttackSuccess__VE_MAX                                                           = 4
};

/// Enum /Script/DBDSharedTypes.EBlindType
/// Size: 0x05
enum class EBlindType : uint8_t
{
	EBlindType__VE_None                                                              = 0,
	EBlindType__VE_Flashlight                                                        = 1,
	EBlindType__VE_SacrificeSuspended                                                = 2,
	EBlindType__VE_Firecracker                                                       = 3,
	EBlindType__VE_MAX                                                               = 4
};

/// Enum /Script/DBDSharedTypes.EDBDScoreCategory
/// Size: 0x16
enum class EDBDScoreCategory : uint8_t
{
	EDBDScoreCategory__DBD_CamperScoreCat_Objectives                                 = 0,
	EDBDScoreCategory__DBD_CamperScoreCat_Survival                                   = 1,
	EDBDScoreCategory__DBD_CamperScoreCat_Altruism                                   = 2,
	EDBDScoreCategory__DBD_CamperScoreCat_Boldness                                   = 3,
	EDBDScoreCategory__DBD_SlasherScoreCat_Brutality                                 = 4,
	EDBDScoreCategory__DBD_SlasherScoreCat_Deviousness                               = 5,
	EDBDScoreCategory__DBD_SlasherScoreCat_Hunter                                    = 6,
	EDBDScoreCategory__DBD_SlasherScoreCat_Sacrifice                                 = 7,
	EDBDScoreCategory__DBD_CamperScoreCat_Untracked                                  = 8,
	EDBDScoreCategory__DBD_CamperScoreCat_Streak                                     = 9,
	EDBDScoreCategory__DBD_ScoreCat_SpecialEvents                                    = 10,
	EDBDScoreCategory__DBD_ScoreCat_Bonus                                            = 11,
	EDBDScoreCategory__DBD_ScoreCat_MatchIncentive                                   = 12,
	EDBDScoreCategory__DBD_ScoreCat_BonusEvents                                      = 13,
	EDBDScoreCategory__Count                                                         = 14,
	EDBDScoreCategory__EDBDScoreCategory_MAX                                         = 15
};

/// Enum /Script/DBDSharedTypes.EDirectionalMiniGameType
/// Size: 0x04
enum class EDirectionalMiniGameType : uint8_t
{
	EDirectionalMiniGameType__None                                                   = 0,
	EDirectionalMiniGameType__SkullMerchant                                          = 1,
	EDirectionalMiniGameType__Wormhole                                               = 2,
	EDirectionalMiniGameType__EDirectionalMiniGameType_MAX                           = 3
};

/// Enum /Script/DBDSharedTypes.EEventObjectiveItemState
/// Size: 0x07
enum class EEventObjectiveItemState : uint8_t
{
	EEventObjectiveItemState__Inactive                                               = 0,
	EEventObjectiveItemState__Active                                                 = 1,
	EEventObjectiveItemState__Usable                                                 = 2,
	EEventObjectiveItemState__Cooldown                                               = 3,
	EEventObjectiveItemState__Rewarded                                               = 4,
	EEventObjectiveItemState__Lost                                                   = 5,
	EEventObjectiveItemState__EEventObjectiveItemState_MAX                           = 6
};

/// Enum /Script/DBDSharedTypes.ELoadingTransitionType
/// Size: 0x04
enum class ELoadingTransitionType : uint8_t
{
	ELoadingTransitionType__TravelToMainMenu                                         = 0,
	ELoadingTransitionType__TravelToInGame                                           = 1,
	ELoadingTransitionType__TravelToSplash                                           = 2,
	ELoadingTransitionType__ELoadingTransitionType_MAX                               = 3
};

/// Enum /Script/DBDSharedTypes.EFPSLimit
/// Size: 0x08
enum class EFPSLimit : uint8_t
{
	EFPSLimit__Off                                                                   = 0,
	EFPSLimit__Limit30                                                               = 30,
	EFPSLimit__Limit59                                                               = 59,
	EFPSLimit__Limit60                                                               = 60,
	EFPSLimit__Limit90                                                               = 90,
	EFPSLimit__Limit120                                                              = 120,
	EFPSLimit__Default                                                               = 60,
	EFPSLimit__EFPSLimit_MAX                                                         = 121
};

/// Enum /Script/DBDSharedTypes.EFriendshipStatus
/// Size: 0x05
enum class EFriendshipStatus : uint8_t
{
	EFriendshipStatus__None                                                          = 0,
	EFriendshipStatus__RequestSent                                                   = 1,
	EFriendshipStatus__RequestReceived                                               = 2,
	EFriendshipStatus__Friend                                                        = 3,
	EFriendshipStatus__EFriendshipStatus_MAX                                         = 4
};

/// Enum /Script/DBDSharedTypes.EFriendSuggestionType
/// Size: 0x04
enum class EFriendSuggestionType : uint8_t
{
	EFriendSuggestionType__None                                                      = 0,
	EFriendSuggestionType__Facebook                                                  = 1,
	EFriendSuggestionType__Google                                                    = 2,
	EFriendSuggestionType__EFriendSuggestionType_MAX                                 = 3
};

/// Enum /Script/DBDSharedTypes.EMatchingStatusEffectType
/// Size: 0x06
enum class EMatchingStatusEffectType : uint8_t
{
	EMatchingStatusEffectType__None                                                  = 0,
	EMatchingStatusEffectType__Buff                                                  = 1,
	EMatchingStatusEffectType__Debuff                                                = 2,
	EMatchingStatusEffectType__Any                                                   = 3,
	EMatchingStatusEffectType__Count                                                 = 4,
	EMatchingStatusEffectType__EMatchingStatusEffectType_MAX                         = 5
};

/// Enum /Script/DBDSharedTypes.EBarColor
/// Size: 0x04
enum class EBarColor : uint8_t
{
	EBarColor__Default                                                               = 0,
	EBarColor__Yellow                                                                = 1,
	EBarColor__Red                                                                   = 2,
	EBarColor__EBarColor_MAX                                                         = 3
};

/// Enum /Script/DBDSharedTypes.EHudScreenIndicatorType
/// Size: 0x07
enum class EHudScreenIndicatorType : uint8_t
{
	EHudScreenIndicatorType__None                                                    = 0,
	EHudScreenIndicatorType__LoudNoise                                               = 1,
	EHudScreenIndicatorType__StealthBroken                                           = 2,
	EHudScreenIndicatorType__Objective                                               = 3,
	EHudScreenIndicatorType__TerrorRadiusVisualFeedback                              = 4,
	EHudScreenIndicatorType__K33NoiseDetection                                       = 5,
	EHudScreenIndicatorType__EHudScreenIndicatorType_MAX                             = 6
};

/// Enum /Script/DBDSharedTypes.EHudParentContainerType
/// Size: 0x04
enum class EHudParentContainerType : uint8_t
{
	EHudParentContainerType__Widget                                                  = 0,
	EHudParentContainerType__Outer                                                   = 1,
	EHudParentContainerType__Spectate                                                = 2,
	EHudParentContainerType__EHudParentContainerType_MAX                             = 3
};

/// Enum /Script/DBDSharedTypes.EInteractionLayer
/// Size: 0x03
enum class EInteractionLayer : uint8_t
{
	EInteractionLayer__VE_Camper                                                     = 0,
	EInteractionLayer__VE_Slasher                                                    = 1,
	EInteractionLayer__VE_MAX                                                        = 2
};

/// Enum /Script/DBDSharedTypes.ECustomizationModifier
/// Size: 0x06
enum class ECustomizationModifier : uint8_t
{
	ECustomizationModifier__None                                                     = 0,
	ECustomizationModifier__Variant                                                  = 1,
	ECustomizationModifier__Bloodstained                                             = 2,
	ECustomizationModifier__Visceral                                                 = 3,
	ECustomizationModifier__Count                                                    = 4,
	ECustomizationModifier__ECustomizationModifier_MAX                               = 5
};

/// Enum /Script/DBDSharedTypes.EOnboardingTutorialType
/// Size: 0x05
enum class EOnboardingTutorialType : uint8_t
{
	EOnboardingTutorialType__TutorialLevel                                           = 0,
	EOnboardingTutorialType__BotMatchLevel                                           = 1,
	EOnboardingTutorialType__FinalReward                                             = 2,
	EOnboardingTutorialType__GoToMainMenu                                            = 3,
	EOnboardingTutorialType__EOnboardingTutorialType_MAX                             = 4
};

/// Enum /Script/DBDSharedTypes.EOnboardingTutorialButtonStyle
/// Size: 0x06
enum class EOnboardingTutorialButtonStyle : uint8_t
{
	EOnboardingTutorialButtonStyle__Default                                          = 0,
	EOnboardingTutorialButtonStyle__Survivor                                         = 1,
	EOnboardingTutorialButtonStyle__Killer                                           = 2,
	EOnboardingTutorialButtonStyle__Reward                                           = 3,
	EOnboardingTutorialButtonStyle__GoToMainMenu                                     = 4,
	EOnboardingTutorialButtonStyle__EOnboardingTutorialButtonStyle_MAX               = 5
};

/// Enum /Script/DBDSharedTypes.EOnboardingStepStatus
/// Size: 0x04
enum class EOnboardingStepStatus : uint8_t
{
	EOnboardingStepStatus__Unavailable                                               = 0,
	EOnboardingStepStatus__Open                                                      = 1,
	EOnboardingStepStatus__Completed                                                 = 2,
	EOnboardingStepStatus__EOnboardingStepStatus_MAX                                 = 3
};

/// Enum /Script/DBDSharedTypes.EConnectionQuality
/// Size: 0x04
enum class EConnectionQuality : uint8_t
{
	EConnectionQuality__Good                                                         = 0,
	EConnectionQuality__Bad                                                          = 1,
	EConnectionQuality__Awful                                                        = 2,
	EConnectionQuality__EConnectionQuality_MAX                                       = 3
};

/// Enum /Script/DBDSharedTypes.EWalletCurrencyFilter
/// Size: 0x06
enum class EWalletCurrencyFilter : uint8_t
{
	EWalletCurrencyFilter__None                                                      = 0,
	EWalletCurrencyFilter__BloodPoints                                               = 1,
	EWalletCurrencyFilter__FearTokens                                                = 2,
	EWalletCurrencyFilter__Cells                                                     = 4,
	EWalletCurrencyFilter__EventCurrency                                             = 8,
	EWalletCurrencyFilter__EWalletCurrencyFilter_MAX                                 = 9
};

/// Enum /Script/DBDSharedTypes.EPlayerProfileFilter
/// Size: 0x04
enum class EPlayerProfileFilter : uint8_t
{
	EPlayerProfileFilter__Wallet                                                     = 1,
	EPlayerProfileFilter__PlayerName                                                 = 2,
	EPlayerProfileFilter__PlayerCard                                                 = 4,
	EPlayerProfileFilter__EPlayerProfileFilter_MAX                                   = 5
};

/// Enum /Script/DBDSharedTypes.EPlayerCardAnimationMode
/// Size: 0x04
enum class EPlayerCardAnimationMode : uint8_t
{
	EPlayerCardAnimationMode__AlwaysAnimate                                          = 0,
	EPlayerCardAnimationMode__AnimateOnHover                                         = 1,
	EPlayerCardAnimationMode__NeverAnimate                                           = 2,
	EPlayerCardAnimationMode__EPlayerCardAnimationMode_MAX                           = 3
};

/// Enum /Script/DBDSharedTypes.EPlayerStateChangeType
/// Size: 0x05
enum class EPlayerStateChangeType : uint8_t
{
	EPlayerStateChangeType__None                                                     = 0,
	EPlayerStateChangeType__Negative                                                 = 1,
	EPlayerStateChangeType__Neutral                                                  = 2,
	EPlayerStateChangeType__Positive                                                 = 3,
	EPlayerStateChangeType__EPlayerStateChangeType_MAX                               = 4
};

/// Enum /Script/DBDSharedTypes.ESicknessLevel
/// Size: 0x04
enum class ESicknessLevel : uint8_t
{
	ESicknessLevel__Off                                                              = 0,
	ESicknessLevel__InProgress                                                       = 1,
	ESicknessLevel__Full                                                             = 2,
	ESicknessLevel__ESicknessLevel_MAX                                               = 3
};

/// Enum /Script/DBDSharedTypes.EAfflictionLevel
/// Size: 0x05
enum class EAfflictionLevel : uint8_t
{
	EAfflictionLevel__Off                                                            = 0,
	EAfflictionLevel__Level1                                                         = 1,
	EAfflictionLevel__Level2                                                         = 2,
	EAfflictionLevel__Level3                                                         = 3,
	EAfflictionLevel__EAfflictionLevel_MAX                                           = 4
};

/// Enum /Script/DBDSharedTypes.EBloodDisplayType
/// Size: 0x04
enum class EBloodDisplayType : uint8_t
{
	EBloodDisplayType__Hidden                                                        = 0,
	EBloodDisplayType__Bottom                                                        = 1,
	EBloodDisplayType__Top                                                           = 2,
	EBloodDisplayType__EBloodDisplayType_MAX                                         = 3
};

/// Enum /Script/DBDSharedTypes.EPlayerStatus
/// Size: 0x12
enum class EPlayerStatus : uint8_t
{
	EPlayerStatus__Default                                                           = 0,
	EPlayerStatus__Hook                                                              = 1,
	EPlayerStatus__Trap                                                              = 2,
	EPlayerStatus__Dead                                                              = 3,
	EPlayerStatus__Escaped                                                           = 4,
	EPlayerStatus__Injured                                                           = 5,
	EPlayerStatus__Carried                                                           = 6,
	EPlayerStatus__Crawling                                                          = 7,
	EPlayerStatus__Sacrificed                                                        = 8,
	EPlayerStatus__Disconnected                                                      = 9,
	EPlayerStatus__InDeathBed                                                        = 10,
	EPlayerStatus__EPlayerStatus_MAX                                                 = 11
};

/// Enum /Script/DBDSharedTypes.EReverseBearTrapUIState
/// Size: 0x04
enum class EReverseBearTrapUIState : uint8_t
{
	EReverseBearTrapUIState__Off                                                     = 0,
	EReverseBearTrapUIState__Stage1                                                  = 1,
	EReverseBearTrapUIState__Stage2                                                  = 2,
	EReverseBearTrapUIState__EReverseBearTrapUIState_MAX                             = 3
};

/// Enum /Script/DBDSharedTypes.ESleepingUIState
/// Size: 0x04
enum class ESleepingUIState : uint8_t
{
	ESleepingUIState__Off                                                            = 0,
	ESleepingUIState__FallingAsleep                                                  = 1,
	ESleepingUIState__Asleep                                                         = 2,
	ESleepingUIState__ESleepingUIState_MAX                                           = 3
};

/// Enum /Script/DBDSharedTypes.EObsessionUIState
/// Size: 0x05
enum class EObsessionUIState : uint8_t
{
	EObsessionUIState__Off                                                           = 0,
	EObsessionUIState__Target                                                        = 1,
	EObsessionUIState__Chased                                                        = 2,
	EObsessionUIState__Dead                                                          = 3,
	EObsessionUIState__EObsessionUIState_MAX                                         = 4
};

/// Enum /Script/DBDSharedTypes.EThemeColorId
/// Size: 0x05
enum class EThemeColorId : uint8_t
{
	EThemeColorId__Invalid                                                           = 0,
	EThemeColorId__Blue                                                              = 1,
	EThemeColorId__Green                                                             = 2,
	EThemeColorId__Yellow                                                            = 3,
	EThemeColorId__EThemeColorId_MAX                                                 = 4
};

/// Enum /Script/DBDSharedTypes.EDetailsTabLayout
/// Size: 0x03
enum class EDetailsTabLayout : uint8_t
{
	EDetailsTabLayout__SingleColumn                                                  = 0,
	EDetailsTabLayout__DoubleColumn                                                  = 1,
	EDetailsTabLayout__EDetailsTabLayout_MAX                                         = 2
};

/// Enum /Script/DBDSharedTypes.ESubtitlesSize
/// Size: 0x05
enum class ESubtitlesSize : uint8_t
{
	ESubtitlesSize__Small                                                            = 0,
	ESubtitlesSize__Default                                                          = 1,
	ESubtitlesSize__Large                                                            = 2,
	ESubtitlesSize__Huge                                                             = 3,
	ESubtitlesSize__ESubtitlesSize_MAX                                               = 4
};

/// Enum /Script/DBDSharedTypes.ESubtitlesBackgroundOpacity
/// Size: 0x05
enum class ESubtitlesBackgroundOpacity : uint8_t
{
	ESubtitlesBackgroundOpacity__None                                                = 0,
	ESubtitlesBackgroundOpacity__Default                                             = 1,
	ESubtitlesBackgroundOpacity__High                                                = 2,
	ESubtitlesBackgroundOpacity__Opaque                                              = 3,
	ESubtitlesBackgroundOpacity__ESubtitlesBackgroundOpacity_MAX                     = 4
};

/// Enum /Script/DBDSharedTypes.ESubtitlesPosition
/// Size: 0x04
enum class ESubtitlesPosition : uint8_t
{
	ESubtitlesPosition__HUD                                                          = 0,
	ESubtitlesPosition__Menus                                                        = 1,
	ESubtitlesPosition__Cinematics                                                   = 2,
	ESubtitlesPosition__ESubtitlesPosition_MAX                                       = 3
};

/// Enum /Script/DBDSharedTypes.ETutorialObjectivePlayerActionMapping
/// Size: 0x22
enum class ETutorialObjectivePlayerActionMapping : uint8_t
{
	ETutorialObjectivePlayerActionMapping__None                                      = 0,
	ETutorialObjectivePlayerActionMapping__Action_Camper                             = 1,
	ETutorialObjectivePlayerActionMapping__Interact_Camper                           = 2,
	ETutorialObjectivePlayerActionMapping__Interact_Slasher                          = 3,
	ETutorialObjectivePlayerActionMapping__Run_Camper                                = 4,
	ETutorialObjectivePlayerActionMapping__Attack_Slasher                            = 5,
	ETutorialObjectivePlayerActionMapping__SecondaryAction_Camper                    = 6,
	ETutorialObjectivePlayerActionMapping__AbilityTwo_Camper                         = 7,
	ETutorialObjectivePlayerActionMapping__ItemUse_Camper                            = 8,
	ETutorialObjectivePlayerActionMapping__Crouch                                    = 9,
	ETutorialObjectivePlayerActionMapping__ItemDrop_Camper                           = 10,
	ETutorialObjectivePlayerActionMapping__ItemUse_Slasher                           = 11,
	ETutorialObjectivePlayerActionMapping__ItemDrop_Slasher                          = 12,
	ETutorialObjectivePlayerActionMapping__Mash_Camper                               = 13,
	ETutorialObjectivePlayerActionMapping__FastInteract_Camper                       = 14,
	ETutorialObjectivePlayerActionMapping__SecondaryAction_Slasher                   = 15,
	ETutorialObjectivePlayerActionMapping__Action_Slasher                            = 16,
	ETutorialObjectivePlayerActionMapping__Struggle                                  = 17,
	ETutorialObjectivePlayerActionMapping__MoveAxes                                  = 18,
	ETutorialObjectivePlayerActionMapping__LookAxes                                  = 19,
	ETutorialObjectivePlayerActionMapping__Count                                     = 20,
	ETutorialObjectivePlayerActionMapping__ETutorialObjectivePlayerActionMapping_MAX = 21
};

/// Enum /Script/DBDSharedTypes.EChatType
/// Size: 0x05
enum class EChatType : uint8_t
{
	EChatType__None                                                                  = 0,
	EChatType__PreGame                                                               = 1,
	EChatType__PostGame                                                              = 2,
	EChatType__Party                                                                 = 3,
	EChatType__EChatType_MAX                                                         = 4
};

/// Enum /Script/DBDSharedTypes.EStickerType
/// Size: 0x04
enum class EStickerType : uint8_t
{
	EStickerType__None                                                               = 0,
	EStickerType__Emoji                                                              = 1,
	EStickerType__Text                                                               = 2,
	EStickerType__EStickerType_MAX                                                   = 3
};

/// Enum /Script/DBDSharedTypes.ELobbyState
/// Size: 0x05
enum class ELobbyState : uint8_t
{
	ELobbyState__Searching                                                           = 0,
	ELobbyState__Joined                                                              = 1,
	ELobbyState__Offering                                                            = 2,
	ELobbyState__Fog                                                                 = 3,
	ELobbyState__ELobbyState_MAX                                                     = 4
};

/// Enum /Script/DBDSharedTypes.EPopupPriority
/// Size: 0x08
enum class EPopupPriority : uint8_t
{
	EPopupPriority__ErrorSystem                                                      = 0,
	EPopupPriority__ErrorGameHigh                                                    = 1,
	EPopupPriority__ErrorGameLow                                                     = 2,
	EPopupPriority__InfoHigh                                                         = 3,
	EPopupPriority__InfoLow                                                          = 4,
	EPopupPriority__ErrorUIThreshold                                                 = 2,
	EPopupPriority__LowestPriority                                                   = 4,
	EPopupPriority__EPopupPriority_MAX                                               = 5
};

/// Enum /Script/DBDSharedTypes.EHudComponent
/// Size: 0x25
enum class EHudComponent : uint8_t
{
	EHudComponent__ACTION_PROMPT                                                     = 0,
	EHudComponent__ACTION_PROGRESS_BAR                                               = 1,
	EHudComponent__GENERATOR_ICON                                                    = 2,
	EHudComponent__HATCH_ICON                                                        = 3,
	EHudComponent__EXIT_ICON                                                         = 4,
	EHudComponent__LOCAL_PLAYER_STATUS                                               = 5,
	EHudComponent__OTHER_PLAYER_STATUSES                                             = 6,
	EHudComponent__SURVIVOR_HOOK_COUNT                                               = 7,
	EHudComponent__CROUCH_BUTTON                                                     = 8,
	EHudComponent__CENTER_INTERACT_BUTTON                                            = 9,
	EHudComponent__DIRECTIONAL_STICK                                                 = 10,
	EHudComponent__WIGGLE_BUTTONS                                                    = 11,
	EHudComponent__STRUGGLE_BUTTONS                                                  = 12,
	EHudComponent__POWER_BUTTON                                                      = 13,
	EHudComponent__ATTACK_BUTTON                                                     = 14,
	EHudComponent__OBJECTIVES                                                        = 15,
	EHudComponent__LOUD_NOISE_INDICATOR                                              = 16,
	EHudComponent__SECOND_ABILITY_BUTTON                                             = 17,
	EHudComponent__ACTION_BUTTON                                                     = 18,
	EHudComponent__CANCEL_BUTTON                                                     = 19,
	EHudComponent__DROP_SURVIVOR_BUTTON                                              = 20,
	EHudComponent__LOOK_BACK_BUTTON                                                  = 21,
	EHudComponent__CENTER_ITEM_CONTAINER                                             = 22,
	EHudComponent__MOVEMENT_LOCK                                                     = 23,
	EHudComponent__EHudComponent_MAX                                                 = 24
};

/// Enum /Script/DBDSharedTypes.ETestBuildType
/// Size: 0x05
enum class ETestBuildType : uint8_t
{
	ETestBuildType__None                                                             = 0,
	ETestBuildType__PublicTestBuild                                                  = 1,
	ETestBuildType__PaxBuild                                                         = 2,
	ETestBuildType__ConsolePreAlphaBuild                                             = 3,
	ETestBuildType__ETestBuildType_MAX                                               = 4
};

/// Class /Script/DBDSharedTypes.ObjectiveIndicatorViewData
/// Size: 0x0008 (0x000030 - 0x000038)
class UObjectiveIndicatorViewData : public UObject
{ 
public:
	class UTexture2D*                                  IndicatorIcon;                                              // 0x0030   (0x0008)  
};

/// Class /Script/DBDSharedTypes.TerrorRadiusIndicatorViewData
/// Size: 0x0010 (0x000030 - 0x000040)
class UTerrorRadiusIndicatorViewData : public UObject
{ 
public:
	FGameplayTag                                       TerrorRadiusHeartState;                                     // 0x0030   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/DBDSharedTypes.CustomTransformation
/// Size: 0x0014 (0x000000 - 0x000014)
struct FCustomTransformation
{ 
	bool                                               UseCustomTransformation;                                    // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FVector2D                                          CustomScale;                                                // 0x0004   (0x0008)  
	FVector2D                                          CustomTranslation;                                          // 0x000C   (0x0008)  
};

/// Struct /Script/DBDSharedTypes.DirectionalMiniGameDefinition
/// Size: 0x0020 (0x000000 - 0x000020)
struct FDirectionalMiniGameDefinition
{ 
	int32_t                                            KeysPerSequenceCount;                                       // 0x0000   (0x0004)  
	bool                                               IsSequenceRandom;                                           // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	TArray<EDirectionalInputKey>                       Sequence;                                                   // 0x0008   (0x0010)  
	EDirectionalMiniGameType                           Type;                                                       // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/DBDSharedTypes.SpecialEventDetailsTabContentData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FSpecialEventDetailsTabContentData
{ 
	SDK_UNDEFINED(24,825) /* FText */                  __um(Title);                                                // 0x0000   (0x0018)  
	SDK_UNDEFINED(24,826) /* FText */                  __um(Description);                                          // 0x0018   (0x0018)  
	EPlayerTeam                                        Role;                                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/DBDSharedTypes.ArchiveTomeSkinData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FArchiveTomeSkinData
{ 
	class UMaterialInterface*                          ArchiveTitleBarSkinMaterial;                                // 0x0000   (0x0008)  
	class UMaterialInterface*                          ArchiveSideNavSkinMaterial;                                 // 0x0008   (0x0008)  
	class UMaterialInterface*                          ArchiveSideNavSmokeSkinMaterial;                            // 0x0010   (0x0008)  
	class UMaterialInterface*                          ArchiveTabsSkinMaterial;                                    // 0x0018   (0x0008)  
	class UMaterialInterface*                          ArchiveProgressPanelSmokeSkinMaterial;                      // 0x0020   (0x0008)  
	FLinearColor                                       ArchiveSkinColor;                                           // 0x0028   (0x0010)  
};

/// Struct /Script/DBDSharedTypes.ArchiveTomeSkinUIDataRow
/// Size: 0x0040 (0x000018 - 0x000058)
struct FArchiveTomeSkinUIDataRow : FDBDTableRowBaseWithId
{ 
	EArchiveMenuState                                  menuState;                                                  // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	FArchiveTomeSkinData                               ArchiveSkinData;                                            // 0x0020   (0x0038)  
};

/// Struct /Script/DBDSharedTypes.CurrencyProgressionUIData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FCurrencyProgressionUIData
{ 
	SDK_UNDEFINED(24,827) /* FText */                  __um(TooltipTitle);                                         // 0x0000   (0x0018)  
	SDK_UNDEFINED(24,828) /* FText */                  __um(TooltipDescription);                                   // 0x0018   (0x0018)  
	SDK_UNDEFINED(48,829) /* TWeakObjectPtr<UMaterialInterface*> */ __um(TooltipHeaderMaterial);                   // 0x0030   (0x0030)  
	SDK_UNDEFINED(48,830) /* TWeakObjectPtr<UTexture2D*> */ __um(TooltipDecorationIcon);                           // 0x0060   (0x0030)  
	SDK_UNDEFINED(48,831) /* TWeakObjectPtr<UMaterialInterface*> */ __um(RewardBackgroundMaterial);                // 0x0090   (0x0030)  
	SDK_UNDEFINED(48,832) /* TWeakObjectPtr<UTexture2D*> */ __um(RewardIcon);                                      // 0x00C0   (0x0030)  
};

/// Struct /Script/DBDSharedTypes.ProgressionUIDataRow
/// Size: 0x00F8 (0x000008 - 0x000100)
struct FProgressionUIDataRow : FDBDTableRowBase
{ 
	EProgressionType                                   ProgressionType;                                            // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FCurrencyProgressionUIData                         CurrencyProgressionUIData;                                  // 0x0010   (0x00F0)  
};

/// Struct /Script/DBDSharedTypes.CurrencyUIDataRow
/// Size: 0x00F8 (0x000008 - 0x000100)
struct FCurrencyUIDataRow : FDBDTableRowBase
{ 
	ECurrencyType                                      CurrencyType;                                               // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FCurrencyProgressionUIData                         CurrencyProgressionUIData;                                  // 0x0010   (0x00F0)  
};

/// Struct /Script/DBDSharedTypes.EventProgressionData
/// Size: 0x0014 (0x000000 - 0x000014)
struct FEventProgressionData
{ 
	unsigned char                                      UnknownData00_1[0x14];                                      // 0x0000   (0x0014)  MISSED
};

/// Struct /Script/DBDSharedTypes.FriendData
/// Size: 0x0060 (0x000000 - 0x000060)
struct FFriendData
{ 
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0000   (0x0060)  MISSED
};

/// Struct /Script/DBDSharedTypes.HelpCategoryData
/// Size: 0x0048 (0x000008 - 0x000050)
struct FHelpCategoryData : FDBDTableRowBase
{ 
	EHelpType                                          Type;                                                       // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	SDK_UNDEFINED(24,833) /* FText */                  __um(Title);                                                // 0x0010   (0x0018)  
	SDK_UNDEFINED(24,834) /* FText */                  __um(Description);                                          // 0x0028   (0x0018)  
	TArray<FName>                                      TopicIds;                                                   // 0x0040   (0x0010)  
};

/// Struct /Script/DBDSharedTypes.HelpContextMappingData
/// Size: 0x0020 (0x000008 - 0x000028)
struct FHelpContextMappingData : FDBDTableRowBase
{ 
	SDK_UNDEFINED(16,835) /* FString */                __um(ContextName);                                          // 0x0008   (0x0010)  
	TArray<FName>                                      TopicIds;                                                   // 0x0018   (0x0010)  
};

/// Struct /Script/DBDSharedTypes.HelpTopicData
/// Size: 0x0090 (0x000008 - 0x000098)
struct FHelpTopicData : FDBDTableRowBase
{ 
	SDK_UNDEFINED(24,836) /* FText */                  __um(Title);                                                // 0x0008   (0x0018)  
	SDK_UNDEFINED(24,837) /* FText */                  __um(Description);                                          // 0x0020   (0x0018)  
	SDK_UNDEFINED(16,838) /* FString */                __um(ImagePath);                                            // 0x0038   (0x0010)  
	SDK_UNDEFINED(16,839) /* FString */                __um(IconPath);                                             // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,840) /* FString */                __um(VideoId);                                              // 0x0058   (0x0010)  
	SDK_UNDEFINED(48,841) /* TWeakObjectPtr<UTexture2D*> */ __um(Icon);                                            // 0x0068   (0x0030)  
};

/// Struct /Script/DBDSharedTypes.TooltipEventSkinUIDataRow
/// Size: 0x0018 (0x000008 - 0x000020)
struct FTooltipEventSkinUIDataRow : FTableRowBase
{ 
	SDK_UNDEFINED(16,842) /* FString */                __um(EventBannerLabel);                                     // 0x0008   (0x0010)  
	class UTexture2D*                                  HeaderDecorationTexture;                                    // 0x0018   (0x0008)  
};

/// Struct /Script/DBDSharedTypes.RarityMaterialData
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRarityMaterialData
{ 
	class UMaterialInterface*                          LoadoutPartMaterial;                                        // 0x0000   (0x0008)  
	class UMaterialInterface*                          CustomizationMaterial;                                      // 0x0008   (0x0008)  
	class UMaterialInterface*                          TooltipHeaderMaterial;                                      // 0x0010   (0x0008)  
};

/// Struct /Script/DBDSharedTypes.RarityMaterialDataRow
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRarityMaterialDataRow : FDBDTableRowBase
{ 
	EItemRarity                                        Rarity;                                                     // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FRarityMaterialData                                RarityData;                                                 // 0x0010   (0x0018)  
};

/// Struct /Script/DBDSharedTypes.ReportFeedbackData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FReportFeedbackData
{ 
	FDateTime                                          BanTimestamp;                                               // 0x0000   (0x0008)  
	SDK_UNDEFINED(24,843) /* FText */                  __um(Reason);                                               // 0x0008   (0x0018)  
	TArray<int64_t>                                    MessageIds;                                                 // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,844) /* FString */                __um(RecipientId);                                          // 0x0030   (0x0010)  
};

/// Struct /Script/DBDSharedTypes.ScreenIndicatorViewData
/// Size: 0x0038 (0x000000 - 0x000038)
struct FScreenIndicatorViewData
{ 
	SDK_UNDEFINED(16,845) /* FString */                __um(ID);                                                   // 0x0000   (0x0010)  
	EHudScreenIndicatorType                            IndicatorType;                                              // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	FVector2D                                          ViewportSize;                                               // 0x0014   (0x0008)  
	bool                                               IsInFront;                                                  // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	FVector2D                                          ScreenPosition;                                             // 0x0020   (0x0008)  
	float                                              distance;                                                   // 0x0028   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	class UObject*                                     AdditionalData;                                             // 0x0030   (0x0008)  
};

/// Struct /Script/DBDSharedTypes.SpecialEventDetailsTabData
/// Size: 0x0048 (0x000000 - 0x000048)
struct FSpecialEventDetailsTabData
{ 
	EDetailsTabLayout                                  Layout;                                                     // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FSpecialEventDetailsTabContentData>         Content;                                                    // 0x0008   (0x0010)  
	SDK_UNDEFINED(48,846) /* TWeakObjectPtr<UTexture2D*> */ __um(Image);                                           // 0x0018   (0x0030)  
};

