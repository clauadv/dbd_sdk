
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Enum /Script/CampaignEvents.EEventEffectTypes
/// Size: 0x08
enum class EEventEffectTypes : uint8_t
{
	EEventEffectTypes__Bloodpoints                                                   = 0,
	EEventEffectTypes__Experience                                                    = 1,
	EEventEffectTypes__RetentionRewards                                              = 2,
	EEventEffectTypes__PromoPack                                                     = 3,
	EEventEffectTypes__EventItemsPack                                                = 4,
	EEventEffectTypes__ProvingGroundCharacterRand                                    = 5,
	EEventEffectTypes__ProvingGroundStore                                            = 6,
	EEventEffectTypes__EEventEffectTypes_MAX                                         = 7
};

/// Class /Script/CampaignEvents.CampaignEventsManager
/// Size: 0x0230 (0x000038 - 0x000268)
class UCampaignEventsManager : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x230];                                     // 0x0038   (0x0230)  MISSED
};

